package;






import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxSave;





using flixel.util.FlxSpriteUtil;





class StateGameOver extends FlxState{





    private var hiScoreFlxText      :FlxText;   /*Text to show the hi - score.*/
    private var mainMenuFlxButton   :FlxButton; /*Button to go to main menu.*/
    private var messageFlxText      :FlxText;   /*The final score message text.*/
    private var scoreInt            :Int = 0;   /*Number of coins we have collected.*/
    private var scoreFlxSprite      :FlxSprite; /*Sprite for a coin icon.*/
    private var scoreFlxText        :FlxText;   /*Text of the score.*/
    private var titleFlxText        :FlxText;   /*The title text.*/
    private var winBool             :Bool;      /*If we won or lost.*/





    /*==================================================
    Called from StatePlay, this will set our win and score variables.
    _winBool true if the player beat the boss, false if they died.
    _scoreInt the number of coins collected.*/
    public function new(_winBool:Bool, _scoreInt:Int){

        scoreInt    = _scoreInt;
        winBool     = _winBool;
        super();

    }
    /*==================================================*/





    /*==================================================*/
    override public function create():Void{
        
        #if !FLX_NO_MOUSE

            FlxG.mouse.visible = true;

        #end
        


        titleFlxText = new FlxText(
            0, 20, 0,
            winBool ? "You win!" : "Game Over!",
            22
        );
        titleFlxText.alignment = CENTER;
        titleFlxText.screenCenter(FlxAxes.X);
        add(titleFlxText);
        


        messageFlxText = new FlxText(
            0,
            (FlxG.height / 2) - 18,
            0,
            "Final score: ",
            8
        );
        messageFlxText.alignment = CENTER;
        messageFlxText.screenCenter(FlxAxes.X);
        add(messageFlxText);
        


        scoreFlxSprite = new FlxSprite(
            (FlxG.width/ 2) - 8,
            0,
            AssetPaths.coin__png
        );
        scoreFlxSprite.screenCenter(FlxAxes.Y);
        add(scoreFlxSprite);
        


        scoreFlxText = new FlxText(
            (FlxG.width/ 2),
            0, 0,
            Std.string(scoreInt),
            8
        );
        scoreFlxText.screenCenter(FlxAxes.Y);
        add(scoreFlxText);
        


        var _hiScore = CheckHighScoreInt(scoreInt);
        hiScoreFlxText = new FlxText(
            0,
            (FlxG.height / 2) + 10,
            0,
            "Hi - score: " + _hiScore,
            8
        );
        hiScoreFlxText.alignment = CENTER;
        hiScoreFlxText.screenCenter(FlxAxes.Y);
        add(hiScoreFlxText);
        


        mainMenuFlxButton = new FlxButton(
            0,
            FlxG.height - 32,
            "Main menu.",
            ClickMainMenuVoid
        );
        mainMenuFlxButton.screenCenter(FlxAxes.X);
        mainMenuFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
        add(mainMenuFlxButton);
        


        FlxG.camera.fade(FlxColor.BLACK, 0.33, true);
        
        super.create();

    }
    /*==================================================*/





    /*==================================================*/
    override public function destroy():Void{

        mainMenuFlxButton    = FlxDestroyUtil.destroy(mainMenuFlxButton);
        messageFlxText       = FlxDestroyUtil.destroy(messageFlxText);
        scoreFlxSprite       = FlxDestroyUtil.destroy(scoreFlxSprite);
        scoreFlxText         = FlxDestroyUtil.destroy(scoreFlxText);
        titleFlxText         = FlxDestroyUtil.destroy(titleFlxText);

    }
    /*==================================================*/





    /*==================================================
    This function will compare the new score with the saved hi - score. 
    If the new score is higher, it will save it as the new hi - score,
        otherwise, it will return the saved hi-score.*/
    private function CheckHighScoreInt(_scoreInt:Int):Int
    {

        var tempScoreInt    :Int        = _scoreInt;
        var saveFlxSave     :FlxSave    = new FlxSave();

        if(saveFlxSave.bind("HaXeFlixelTurnBasedRPG")){

            if(saveFlxSave.data.hiscore != null){

                if(saveFlxSave.data.hiscore > tempScoreInt){

                    tempScoreInt = saveFlxSave.data.hiscore;

                }
                else{

                    saveFlxSave.data.hiscore = tempScoreInt;

                }

            }

        }

        saveFlxSave.close();

        return tempScoreInt;

    }
    /*==================================================*/




    /*==================================================
    Animation when this program change back to main menu state.*/
    private function ClickMainMenuVoid():Void{

        FlxG.camera.fade(FlxColor.BLACK, .33, false, function(){
            FlxG.switchState(new StateMenu());
        });

    }
    /*==================================================*/





}