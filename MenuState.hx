package;





import flash.system.System;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.util.FlxDestroyUtil;





/*Premade game menu.*/
class MenuState extends FlxState{





    private var optionFlxButton:FlxButton;
    private var playFlxButton:FlxButton;
    private var titleFlxText:FlxText;

    #if desktop

        private var exitFlxButton:FlxButton;

    #end





    /*Initial create function for this MenuState.hx.*/
    override public function create(){

        /*Do not start the music if it already playing.*/
        if (FlxG.sound.music == null){

            #if flash

                FlxG.sound.playMusic(AssetPaths.HaxeFlixel_Tutorial_Game__mp3, 1, true);

            #else

                FlxG.sound.playMusic(AssetPaths.HaxeFlixel_Tutorial_Game__ogg, 1, true);

            #end

        }
        


        optionFlxButton = new FlxButton(0, 0, "Options", ClickOptionVoid);
        optionFlxButton.x = (FlxG.width/2) + 10;
        optionFlxButton.y = FlxG.height - optionFlxButton.height - 10;
        optionFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
        


        playFlxButton = new FlxButton(0, 0, "Play", ClickPlayVoid);
        playFlxButton.x = (FlxG.width/2) - playFlxButton.width - 10;
        playFlxButton.y = FlxG.height - playFlxButton.height - 10;
        playFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
        


        titleFlxText = new FlxText(0, 20, 0, "HaxeFlixel\nTutorial\nGame", 22);
        titleFlxText.alignment = CENTER;
        titleFlxText.screenCenter(FlxAxes.X);



        add(optionFlxButton);
        add(playFlxButton);
        add(titleFlxText);
        


        /*If the target is desktop application then add an exit button so that
            the user can close the running application.*/
        #if desktop

            exitFlxButton = new FlxButton(
                FlxG.width - 28,
                8, "X",
                function(){
                    System.exit(0);
                }
            );
            exitFlxButton.loadGraphic(AssetPaths.button__png, true, 20, 20);
            add(exitFlxButton);

        #end
        
        /*Create a fade in animation.*/
        FlxG.camera.fade(FlxColor.BLACK, 0.33, true);
        
        super.create();

    }
    




    /*Function that is called when this state is not used anymore.*/
    override public function destroy(){

        super.destroy();

        titleFlxText        = FlxDestroyUtil.destroy(titleFlxText);
        playFlxButton       = FlxDestroyUtil.destroy(playFlxButton);
        optionFlxButton     = FlxDestroyUtil.destroy(optionFlxButton);

        #if desktop

            exitFlxButton   = FlxDestroyUtil.destroy(exitFlxButton);

        #end

    }
    




    /*Animation when the user clicked play button.*/
    private function ClickPlayVoid(){

        FlxG.camera.fade(FlxColor.BLACK, .33, false, function(){
            FlxG.switchState(new PlayState());
        });

    }
    




    /*Animation when the user clicked option button.*/
    private function ClickOptionVoid(){

        FlxG.camera.fade(FlxColor.BLACK, .33, false, function(){
            FlxG.switchState(new OptionsState());
        });

    }





}