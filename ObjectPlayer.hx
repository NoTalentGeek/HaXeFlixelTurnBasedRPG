package;





import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxSound;
import flixel.ui.FlxButton;
import flixel.math.FlxAngle;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;





class ObjectPlayer extends FlxSprite{




    private     var stepFlxSound    :FlxSound;
    public      var speedFloat      :Float = 200;
    




    /*=============================================*/
    public function new(_xFloat:Float = 0, _yFloat:Float = 0){

        super(_xFloat, _yFloat);
        loadGraphic(AssetPaths.player__png, true, 16, 16);



        setFacingFlip(FlxObject.LEFT, false, false);
        setFacingFlip(FlxObject.RIGHT, true, false);



        animation.add("AnimationDown"           , [0, 1, 0, 2], 6, false);
        animation.add("AnimationLeftRight"      , [3, 4, 3, 5], 6, false);
        animation.add("AnimationUp"             , [6, 7, 6, 8], 6, false);



        drag.x = drag.y = 1600;
        setSize(8, 14);
        offset.set(4, 2);
        


        stepFlxSound = FlxG.sound.load(AssetPaths.step__wav);

    }
    /*=============================================*/





    /*=============================================*/
    override public function destroy(){

        super.destroy();
        stepFlxSound = FlxDestroyUtil.destroy(stepFlxSound);

    }
    /*=============================================*/






    /*=============================================*/
    override public function update(_elapsedFloat:Float){

        MovementVoid();
        super.update(_elapsedFloat);

    }
    /*=============================================*/

    




    /*=============================================*/
    private function MovementVoid(){

        var downBool    :Bool = false;
        var leftBool    :Bool = false;
        var rightBool   :Bool = false;
        var upBool      :Bool = false;
        
        #if !FLX_NO_KEYBOARD

            downBool    = FlxG.keys.anyPressed([DOWN    , S]);
            leftBool    = FlxG.keys.anyPressed([LEFT    , A]);
            rightBool   = FlxG.keys.anyPressed([RIGHT   , D]);
            upBool      = FlxG.keys.anyPressed([UP      , W]);

        #end



        #if mobile

            var virtualPadFlxVirtualPad:FlxVirtualPad = PlayState.virtualPadFlxVirtualPad;



            upBool          = upBool    || virtualPadFlxVirtualPad.buttonUp.pressed;
            downBool        = downBool  || virtualPadFlxVirtualPad.buttonDown.pressed;
            leftBool        = leftBool  || virtualPadFlxVirtualPad.buttonLeft.pressed;
            rightBool       = rightBool || virtualPadFlxVirtualPad.buttonRight.pressed;

        #end



        if(leftBool    && rightBool)   { leftBool  = rightBool = false; }
        if(upBool      && downBool)    { upBool    = downBool  = false; }



        if(
            downBool    ||
            leftBool    ||
            rightBool   ||
            upBool
        ){

            var moveDegreeFloat:Float = 0;

            if(upBool){

                moveDegreeFloat = -90;



                if(leftBool)        { moveDegreeFloat -= 45; }
                else if(rightBool)  { moveDegreeFloat += 45; }
                    


                facing = FlxObject.UP;

            }
            else if(downBool){

                moveDegreeFloat = 90;



                if(leftBool)        { moveDegreeFloat += 45; }
                else if(rightBool)  { moveDegreeFloat -= 45; }
            


                facing = FlxObject.DOWN;

            }
            else if(leftBool){

                moveDegreeFloat = 180;
                facing = FlxObject.LEFT;

            }
            else if(rightBool){

                moveDegreeFloat = 0;
                facing = FlxObject.RIGHT;

            }
            
            velocity.set(speedFloat, 0);
            velocity.rotate(FlxPoint.weak(0, 0), moveDegreeFloat);
            
            if((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE){
                stepFlxSound.play();
                
                switch (facing){

                    case FlxObject.LEFT, FlxObject.RIGHT:
                        animation.play("AnimationLeftRight");
                    case FlxObject.UP:
                        animation.play("AnimationUp");
                    case FlxObject.DOWN:
                        animation.play("AnimationDown");

                }

            }

        }
        else if(animation.curAnim != null){

            animation.curAnim.curFrame = 0;
            animation.curAnim.pause();

        }

    }
    /*=============================================*/





}
