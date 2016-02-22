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

class GameOverState extends FlxState{

    private var hiScoreTextObject       :FlxText;   /*Text to show the hi - score.*/
    private var mainMenuButtonObject    :FlxButton; /*Button to go to main menu.*/
    private var messageTextObject       :FlxText;   /*The final score message text.*/
    private var scoreInt                :Int = 0;   /*Number of coins we have collected.*/
    private var scoreSpriteObject       :FlxSprite; /*Sprite for a coin icon.*/
    private var scoreTextObject         :FlxText;   /*Text of the score.*/
    private var titleTextObject         :FlxText;   /*The title text.*/
    private var winBool                 :Bool;      /*If we won or lost.*/
    
    /*Called from PlayState, this will set our win and score variables.
    _winBool true if the player beat the boss, false if they died.
    _scoreInt the number of coins collected.*/
    public function new(_winBool:Bool, _scoreInt:Int){

        scoreInt    = _scoreInt;
        winBool     = _winBool;
        super();

    }
    
    override public function create():Void{
        
        #if !FLX_NO_MOUSE

            FlxG.mouse.visible = true;

        #end
        


        titleTextObject = new FlxText(
            0, 20, 0,
            winBool ? "You win!" : "Game Over!",
            22
        );
        titleTextObject.alignment = CENTER;
        titleTextObject.screenCenter(FlxAxes.X);
        add(titleTextObject);
        


        messageTextObject = new FlxText(
            0,
            (FlxG.height / 2) - 18,
            0,
            "Final score: ",
            8
        );
        messageTextObject.alignment = CENTER;
        messageTextObject.screenCenter(FlxAxes.X);
        add(messageTextObject);
        


        scoreSpriteObject = new FlxSprite(
            (FlxG.width/ 2) - 8,
            0,
            AssetPaths.coin__png
        );
        scoreSpriteObject.screenCenter(FlxAxes.Y);
        add(scoreSpriteObject);
        


        scoreTextObject = new FlxText(
            (FlxG.width/ 2),
            0, 0,
            Std.string(scoreInt),
            8
        );
        scoreTextObject.screenCenter(FlxAxes.Y);
        add(scoreTextObject);
        


        var _hiScore = CheckHighScoreInt(scoreInt);
        hiScoreTextObject = new FlxText(
            0,
            (FlxG.height / 2) + 10,
            0,
            "Hi - score: " + _hiScore,
            8
        );
        hiScoreTextObject.alignment = CENTER;
        hiScoreTextObject.screenCenter(FlxAxes.Y);
        add(hiScoreTextObject);
        


        mainMenuButtonObject = new FlxButton(
            0,
            FlxG.height - 32,
            "Main menu.",
            ChangeStateToMainMenuVoid
        );
        mainMenuButtonObject.screenCenter(FlxAxes.X);
        mainMenuButtonObject.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);
        add(mainMenuButtonObject);
        


        FlxG.camera.fade(FlxColor.BLACK, 0.33, true);
        
        super.create();

    }
    
    override public function destroy():Void{

        mainMenuButtonObject    = FlxDestroyUtil.destroy(mainMenuButtonObject);
        messageTextObject       = FlxDestroyUtil.destroy(messageTextObject);
        scoreSpriteObject       = FlxDestroyUtil.destroy(scoreSpriteObject);
        scoreTextObject         = FlxDestroyUtil.destroy(scoreTextObject);
        titleTextObject         = FlxDestroyUtil.destroy(titleTextObject);

    }
    
    /*This function will compare the new score with the saved hi - score. 
    If the new score is higher, it will save it as the new hi - score,
        otherwise, it will return the saved hi-score.*/
    private function CheckHighScoreInt(_scoreInt:Int):Int
    {

        var tempScoreInt    :Int        = _scoreInt;
        var saveObject      :FlxSave    = new FlxSave();

        if(saveObject.bind("Flixel-Tutorial")){

            if(saveObject.data.hiscore != null){

                if(saveObject.data.hiscore > tempScoreInt){

                    tempScoreInt = saveObject.data.hiscore;

                }
                else{

                    saveObject.data.hiscore = tempScoreInt;

                }

            }

        }

        saveObject.close();

        return tempScoreInt;

    }
    
    /*Animation when this program change back to main menu state.*/
    private function ChangeStateToMainMenuVoid():Void{

        FlxG.camera.fade(FlxColor.BLACK, .33, false, function(){
            FlxG.switchState(new MenuState());
        });

    }
    
}