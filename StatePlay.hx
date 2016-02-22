package;





import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxVirtualPad;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;





class PlayState extends FlxState{





    private var coinFlxCoin             :FlxSound;
    private var coinFlxTypedGroup       :FlxTypedGroup<Coin>;
    private var endingBool              :Bool;
    private var enemyFlxTypedGroup      :FlxTypedGroup<Enemy>;
    private var healthInt               :Int = 3;
    private var hudObjectHUD            :ObjectHUD;
    private var hudObjectHUDCombat      :ObjectHUDCombat;
    private var inCombatBool            :Bool = false;
    private var mapFlxOgmoLoader        :FlxOgmoLoader;
    private var moneyInt                :Int = 0;
    private var pauseBool               :Bool;
    private var playerObjectPlayer      :ObjectPlayer;
    private var wallFlxTilemap          :FlxTilemap;
    private var winBool                 :Bool;



    #if mobile

        public static var virtualPadFlxVirtualPad:FlxVirtualPad;

    #end





    override public function create(){
        
        coinFlxTypedGroup   = new FlxTypedGroup<Coin>();
        enemyFlxTypedGroup  = new FlxTypedGroup<Enemy>();
        hudObjectHUD        = new ObjectHUD();
        hudObjectHUDCombat  = new ObjectHUDCombat();
        


        mapFlxOgmoLoader    = new FlxOgmoLoader(AssetPaths.room_001__oel);
        mapFlxOgmoLoader.loadEntities(PlaceEntityVoid, "Entity");
        


        playerObjectPlayer = new ObjectPlayer();
        FlxG.camera.follow(playerObjectPlayer, TOPDOWN, 1);



        wallFlxTilemap      = mapFlxOgmoLoader.loadTilemap(
            AssetPaths.tiles__png, 
            16,
            16,
            "walls"
        );
        wallFlxTilemap.follow();
        wallFlxTilemap.setTileProperties(1, FlxObject.NONE);
        wallFlxTilemap.setTileProperties(2, FlxObject.ANY);
        


        add(coinFlxTypedGroup);
        add(enemyFlxTypedGroup);
        add(hudObjectHUD);
        add(hudObjectHUDCombat);
        add(playerObjectPlayer);
        add(wallFlxTilemap);



        #if mobile

            virtualPadFlxVirtualPad = new FlxVirtualPad(FULL, NONE);     
            add(virtualPadFlxVirtualPad);

        #end



        #if !FLX_NO_MOUSE

            FlxG.mouse.visible = false;

        #end
        


        coinFlxCoin = FlxG.sound.load(AssetPaths.coin__wav);
        FlxG.camera.fade(FlxColor.BLACK, .33, true);
        
        super.create();

    }
    
    private function PlaceEntityVoid(_entityNameString:String, _entityDataXml:Xml){

        var xInt:Int = Std.parseInt(_entityDataXml.get("x"));
        var yInt:Int = Std.parseInt(_entityDataXml.get("y"));

        if(_entityNameString == "Player"){

            playerObjectPlayer.xInt = xInt;
            playerObjectPlayer.yInt = yInt;

        }
        else if(_entityNameString == "Coin"){

            coinFlxTypedGroup.add(new Coin(xInt + 4, yInt + 4));

        }
        else if(_entityNameString == "Enemy"){

            enemyFlxTypedGroup.add(new Enemy(xInt + 4, yInt, Std.parseInt(_entityDataXml.get("EnemyType"))));
        
        }

    }
    

    === TO BE CONTINUED ===


    /**
     * Function that is called when this state is destroyed - you might want to 
     * consider setting all objects this state uses to null to help garbage collection.
     */
    override public function destroy()
    {
        super.destroy();
        playerObjectPlayer = FlxDestroyUtil.destroy(playerObjectPlayer);
        wallFlxTilemap = FlxDestroyUtil.destroy(wallFlxTilemap);
        coinFlxTypedGroup = FlxDestroyUtil.destroy(coinFlxTypedGroup);
        enemyFlxTypedGroup = FlxDestroyUtil.destroy(enemyFlxTypedGroup);
        hudObjectHUD = FlxDestroyUtil.destroy(hudObjectHUD);
        hudObjectHUDCombat = FlxDestroyUtil.destroy(hudObjectHUDCombat);
        coinFlxCoin = FlxDestroyUtil.destroy(coinFlxCoin);
        #if mobile
        virtualPadFlxVirtualPad = FlxDestroyUtil.destroy(virtualPadFlxVirtualPad);
        #end
    }

    /**
     * Function that is called once every frame.
     */
    override public function update(elapsed:Float)
    {
        super.update(elapsed);

        if(endingBool)
        {
            return;
        }
        
        if (!inCombatBool)
        {
            FlxG.collide(playerObjectPlayer, wallFlxTilemap);
            FlxG.overlap(playerObjectPlayer, coinFlxTypedGroup, playerTouchCoin);
            FlxG.collide(enemyFlxTypedGroup, wallFlxTilemap);
            enemyFlxTypedGroup.forEachAlive(checkEnemyVision);
            FlxG.overlap(playerObjectPlayer, enemyFlxTypedGroup, playerTouchEnemy);
        }
        else if (!hudObjectHUDCombat.visible)
        {
            healthInt = hudObjectHUDCombat.playerHealth;
            hudObjectHUD.updateHUD(healthInt, moneyInt);
            if(hudObjectHUDCombat.outcome == DEFEAT)
            {
                endingBool = true;
                FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
            }
            else
            {
                if(hudObjectHUDCombat.outcome == VICTORY)
                {
                    hudObjectHUDCombat.e.kill();
                    if(hudObjectHUDCombat.e.etype == 1)
                    {
                        winBool = true;
                        endingBool = true;
                        FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
                    }
                }
                else 
                {
                    hudObjectHUDCombat.e.flicker();
                }
                #if mobile
                virtualPadFlxVirtualPad.visible = true;
                #end
                inCombatBool = false;
                playerObjectPlayer.active = true;
                enemyFlxTypedGroup.active = true;
            }
        }
    }
    
    private function doneFadeOut() 
    {
        FlxG.switchState(new GameOverState(winBool, moneyInt));
    }
    
    private function playerTouchEnemy(P:ObjectPlayer, E:Enemy)
    {
        if(P.alive && P.exists && E.alive && E.exists && !E.isFlickering())
        {
            startCombat(E);
        }
    }
    
    private function startCombat(E:Enemy)
    {
        inCombatBool = true;
        playerObjectPlayer.active = false;
        enemyFlxTypedGroup.active = false;
        hudObjectHUDCombat.initCombat(healthInt, E);
        #if mobile
        virtualPadFlxVirtualPad.visible = false;
        #end
    }
    
    private function checkEnemyVision(e:Enemy)
    {
        if(wallFlxTilemap.ray(e.getMidpoint(), playerObjectPlayer.getMidpoint()))
        {
            e.seesPlayer = true;
            e.playerPos.copyFrom(playerObjectPlayer.getMidpoint());
        }
        else
            e.seesPlayer = false;       
    }
    
    private function playerTouchCoin(P:ObjectPlayer, C:Coin)
    {
        if(P.alive && P.exists && C.alive && C.exists)
        {
            coinFlxCoin.play(true);
            moneyInt++;
            hudObjectHUD.updateHUD(healthInt, moneyInt);
            C.kill();
        }
    }
}
