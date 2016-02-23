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





class StatePlay extends FlxState{





    private var coinFlxCoin             :FlxSound;
    private var coinFlxTypedGroup       :FlxTypedGroup<ObjectCoin>;
    private var endingBool              :Bool;
    private var enemyFlxTypedGroup      :FlxTypedGroup<ObjectEnemy>;
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
        
        coinFlxTypedGroup   = new FlxTypedGroup<ObjectCoin>();
        enemyFlxTypedGroup  = new FlxTypedGroup<ObjectEnemy>();
        hudObjectHUD        = new ObjectHUD();
        hudObjectHUDCombat  = new ObjectHUDCombat();
        


        playerObjectPlayer = new ObjectPlayer();
        FlxG.camera.follow(playerObjectPlayer, TOPDOWN, 1);



        mapFlxOgmoLoader = new FlxOgmoLoader(AssetPaths.room_001__oel);
        mapFlxOgmoLoader.loadEntities(PlaceEntityVoid, "entities");
        


        wallFlxTilemap = mapFlxOgmoLoader.loadTilemap(
            AssetPaths.tiles__png, 
            16,
            16,
            "walls"
        );
        wallFlxTilemap.follow();
        wallFlxTilemap.setTileProperties(1, FlxObject.NONE);
        wallFlxTilemap.setTileProperties(2, FlxObject.ANY);
        


        add(wallFlxTilemap);
        add(coinFlxTypedGroup);
        add(enemyFlxTypedGroup);
        add(playerObjectPlayer);
        add(hudObjectHUD);
        add(hudObjectHUDCombat);



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

            healthInt = hudObjectHUDCombat.playerHealthInt;
            hudObjectHUD.UpdateVoid(healthInt, moneyInt);

            if(hudObjectHUDCombat.outcomeEnumOutcome == DEFEAT){

                endingBool = true;
                FlxG.camera.fade(FlxColor.BLACK, .33, false, DoneFadeOutVoid);

            }
            else{

                if(hudObjectHUDCombat.outcomeEnumOutcome == VICTORY){

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
    private function CheckEnemyVisionVoid(_passedObjectEnemy:ObjectEnemy){

        if(wallFlxTilemap.ray(_passedObjectEnemy.getMidpoint(), playerObjectPlayer.getMidpoint())){

            _passedObjectEnemy.seePlayerBool = true;
            _passedObjectEnemy.playerPositionFlxPoint.copyFrom(playerObjectPlayer.getMidpoint());

        }
        else{ _passedObjectEnemy.seePlayerBool = false; }

    }
    /*=============================================*/





    /*=============================================*/
    private function CollisionCoinPlayerVoid(_playerObjectPlayer:ObjectPlayer, _coinObjectCoin:ObjectCoin){

        if(_playerObjectPlayer.alive && _playerObjectPlayer.exists && _coinObjectCoin.alive && _coinObjectCoin.exists){
            
            _coinObjectCoin.kill();
            coinFlxCoin.play(true);
            hudObjectHUD.UpdateVoid(healthInt, moneyInt);
            moneyInt ++;
            
        }

    }
    /*=============================================*/






    /*=============================================*/
    private function CollisionEnemyPlayerVoid(_playerObjectPlayer:ObjectPlayer, _enemyObjectEnemy:ObjectEnemy){

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
    private function DoneFadeOutVoid(){ FlxG.switchState(new StateGameOver(winBool, moneyInt)); }
    /*=============================================*/





    /*=============================================*/
    private function PlaceEntityVoid(_entityNameString:String, _entityDataXml:Xml){

        var xInt:Int = Std.parseInt(_entityDataXml.get("x"));
        var yInt:Int = Std.parseInt(_entityDataXml.get("y"));

        if(_entityNameString == "player"){

            playerObjectPlayer.x = xInt;
            playerObjectPlayer.y = yInt;

        }
        else if(_entityNameString == "coin"){

            coinFlxTypedGroup.add(new ObjectCoin(xInt + 4, yInt + 4));

        }
        else if(_entityNameString == "enemy"){

            enemyFlxTypedGroup.add(new ObjectEnemy(xInt + 4, yInt, Std.parseInt(_entityDataXml.get("etype"))));

        }

    }
    /*=============================================*/





    /*=============================================*/
    private function StartCombatVoid(_enemyObjectEnemy:ObjectEnemy){

        inCombatBool                = true;
        enemyFlxTypedGroup.active   = false;
        playerObjectPlayer.active   = false;

        hudObjectHUDCombat.InitCombatVoid(healthInt, _enemyObjectEnemy);

        #if mobile

            virtualPadFlxVirtualPad.visible = false;

        #end

    }
    /*=============================================*/




}
