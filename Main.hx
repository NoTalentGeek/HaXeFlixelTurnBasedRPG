package;






import flixel.FlxG;
import flixel.FlxGame;
import flixel.util.FlxSave;
import openfl.display.Sprite;






class Main extends Sprite{






    /*==================================================*/
    public function new(){

        var startFullScreenBool:Bool = false;
        var saveFlxSave:FlxSave = new FlxSave();

        saveFlxSave.bind("HaXeFlixelTurnBasedRPG");

        /*Load the configuration of the latest setting of
            startFullScreenBool.*/
        #if desktop

            if (saveFlxSave.data.fullscreen != null){
                startFullScreenBool = saveFlxSave.data.fullscreen;
            }

        #end
        
        super();

        /*Create new FlxGame.*/
        addChild(new FlxGame(
            320, 240,
            StateMenu,
            1, 60, 60,
            false,
            startFullScreenBool
        ));
        
        /*Save the default sound volume.*/
        if (saveFlxSave.data.volume != null){

            FlxG.sound.volume = saveFlxSave.data.volume;

        }

        saveFlxSave.close();

    }
    /*==================================================*/






}