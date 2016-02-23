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





    /*=============================================*/
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
    /*=============================================*/





    /*=============================================*/
    override public function destroy(){

        super.destroy();

        coinFlxCoin             = FlxDestroyUtil.destroy(coinFlxCoin);
        coinFlxTypedGroup       = FlxDestroyUtil.destroy(coinFlxTypedGroup);
        enemyFlxTypedGroup      = FlxDestroyUtil.destroy(enemyFlxTypedGroup);
        hudObjectHUD            = FlxDestroyUtil.destroy(hudObjectHUD);
        hudObjectHUDCombat      = FlxDestroyUtil.destroy(hudObjectHUDCombat);
        playerObjectPlayer      = FlxDestroyUtil.destroy(playerObjectPlayer);
        wallFlxTilemap          = FlxDestroyUtil.destroy(wallFlxTilemap);

        #if mobile
        
            virtualPadFlxVirtualPad = FlxDestroyUtil.destroy(virtualPadFlxVirtualPad);

        #end

    }
    /*=============================================*/





    /*=============================================*/
    override public function update(_elapsedFloat:Float){

        super.update(_elapsedFloat);

        if(endingBool){ return; }
        
        if (!inCombatBool){

            FlxG.collide(playerObjectPlayer, wallFlxTilemap);
            FlxG.overlap(playerObjectPlayer, coinFlxTypedGroup, CollisionCoinPlayerVoid);
            FlxG.collide(enemyFlxTypedGroup, wallFlxTilemap);
            enemyFlxTypedGroup.forEachAlive(CheckEnemyVisionVoid);
            FlxG.overlap(playerObjectPlayer, enemyFlxTypedGroup, CollisionEnemyPlayerVoid);

        }
        else if (!hudObjectHUDCombat.visible){

            healthInt = hudObjectHUDCombat.playerHealth;
            hudObjectHUD.updateHUD(healthInt, moneyInt);

            if(hudObjectHUDCombat.outcomeEnum == DEFEAT){

                endingBool = true;
                FlxG.camera.fade(FlxColor.BLACK, .33, false, DoneFadeOutVoid);

            }
            else{

                if(hudObjectHUDCombat.outcomeEnum == VICTORY){

                    hudObjectHUDCombat.passedObjectEnemy.kill();

                    if(hudObjectHUDCombat.passedObjectEnemy.enemyTypeInt == 1){
                        endingBool = true;
                        winBool = true;
                        FlxG.camera.fade(FlxColor.BLACK, .33, false, DoneFadeOutVoid);
                    }

                }
                else{ hudObjectHUDCombat.passedObjectEnemy.flicker(); }



                #if mobile
                    virtualPadFlxVirtualPad.visible = true;
                #end



                enemyFlxTypedGroup.active   = true;
                inCombatBool                = false;
                playerObjectPlayer.active   = true;

            }

        }

    }
    /*=============================================*/





    /*=============================================*/
    private function CheckEnemyVisionVoid(_passedObjectEnemy:Enemy){

        if(wallFlxTilemap.ray(_passedObjectEnemy.getMidpoint(), playerObjectPlayer.getMidpoint())){

            _passedObjectEnemy.seePlayerBool = true;
            _passedObjectEnemy.playerPos.copyFrom(playerObjectPlayer.getMidpoint());

        }
        else{ _passedObjectEnemy.seePlayerBool = false; }

    }
    /*=============================================*/





    /*=============================================*/
    private function CollisionCoinPlayerVoid(_playerObjectPlayer:ObjectPlayer, _coinObjectCoin:Coin){

        if(_playerObjectPlayer.alive && _playerObjectPlayer.exists && _coinObjectCoin.alive && _coinObjectCoin.exists){
            
            _coinObjectCoin.kill();
            coinFlxCoin.play(true);
            hudObjectHUD.updateHUD(healthInt, moneyInt);
            moneyInt ++;
            
        }

    }
    /*=============================================*/






    /*=============================================*/
    private function CollisionEnemyPlayerVoid(_playerObjectPlayer:ObjectPlayer, _enemyObjectEnemy:Enemy){

        if(
            !_enemyObjectEnemy.isFlickering()   &&
            _enemyObjectEnemy.alive             &&
            _enemyObjectEnemy.exists            &&
            _playerObjectPlayer.alive           &&
            _playerObjectPlayer.exists
        ){ StartCombatVoid(_enemyObjectEnemy); }

    }
    /*=============================================*/





    /*=============================================*/
    private function DoneFadeOutVoid(){ FlxG.switchState(new GameOverState(winBool, moneyInt)); }
    /*=============================================*/





    /*=============================================*/
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
    /*=============================================*/





    /*=============================================*/
    private function StartCombatVoid(_enemyObjectEnemy:Enemy){

        inCombatBool                = true;
        enemyFlxTypedGroup.active   = false;
        playerObjectPlayer.active   = false;

        hudObjectHUDCombat.initCombat(healthInt, _enemyObjectEnemy);

        #if mobile

            virtualPadFlxVirtualPad.visible = false;

        #end

    }
    /*=============================================*/




}
