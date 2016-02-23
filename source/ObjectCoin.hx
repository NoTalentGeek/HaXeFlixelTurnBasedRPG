package;





import flixel.*;
import flixel.tweens.*;





class ObjectCoin extends FlxSprite{





    /*==================================================*/
    public function new(
        _xFloat:Float = 0,
        _yFloat:Float = 0
    ){

        super(_xFloat, _yFloat);
        loadGraphic(AssetPaths.coin__png, false, 8, 8);

    }
    /*==================================================*/




    /*==================================================*/
    override public function kill():Void{

        alive = false;
        FlxTween.tween(
            this,
            {
                alpha:0,
                y:y - 16
            },
            0.66,
            {
                ease:FlxEase.circOut,
                onComplete:KillFinishVoid
            }
        );
        
    }
    /*==================================================*/





    /*==================================================*/
    private function KillFinishVoid(_):Void{ exists = false; }
    /*==================================================*/





}