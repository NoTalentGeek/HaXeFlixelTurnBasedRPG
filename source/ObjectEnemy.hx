package;





import flixel.*;
import flixel.math.*;
import flixel.system.*;
import flixel.util.*;
using flixel.util.FlxSpriteUtil;





class ObjectEnemy extends FlxSprite{





    private     var idleVoidTimerFloat          :Float;
    private     var moveDirectionFloat          :Float;
    private     var objectFiniteStateMachine    :ObjectFiniteStateMachine;
    private     var stepFlxSound                :FlxSound;
    public      var enemyTypeInt                (default, null):Int;
    public      var playerPositionFlxPoint      (default, null):FlxPoint;
    public      var seePlayerBool               :Bool = false;
    public      var speedFloat                  :Float = 80;
    




    /*==================================================*/
    public function new(
        _xFloat:Float = 0,
        _yFloat:Float = 0,
        _enemyTypeInt:Int
    ){

        super(_xFloat, _yFloat);
        enemyTypeInt = _enemyTypeInt;
        loadGraphic(
            "assets/images/enemy-" + Std.string(enemyTypeInt) + ".png",
            true,
            16,
            16
        );

        animation.add(
            "AnimationDown",
            [0, 1, 0, 2],
            6,
            false
        );
        animation.add(
            "AnimationLeftRight",
            [3, 4, 3, 5],
            6,
            false
        );
        animation.add(
            "AnimationUp",
            [6, 7, 6, 8],
            6,
            false
        ); 
        setFacingFlip(FlxObject.LEFT, false, false);
        setFacingFlip(FlxObject.RIGHT, true, false);

        drag.x = drag.y = 10;
        height = 14;
        idleVoidTimerFloat = 0;
        offset.x = 4;
        offset.y = 2;
        width = 8;

        objectFiniteStateMachine    = new ObjectFiniteStateMachine(IdleVoid);
        playerPositionFlxPoint      = FlxPoint.get();
        
        stepFlxSound = FlxG.sound.load(AssetPaths.step__wav, 0.4);
        stepFlxSound.proximity(x, y, FlxG.camera.target, FlxG.width*0.6);

    }
    /*==================================================*/
    




    /*==================================================*/
    override public function destroy():Void{

        super.destroy();
        stepFlxSound = FlxDestroyUtil.destroy(stepFlxSound);

    }
    /*==================================================*/





    /*==================================================*/
    override public function draw():Void{
        if(
            (velocity.x != 0 || velocity.y != 0) &&
            touching != FlxObject.NONE
        ){
            
            if(Math.abs(velocity.x) > Math.abs(velocity.y)){

                if(velocity.x < 0){ facing = FlxObject.LEFT; }
                else{ facing = FlxObject.RIGHT; }

            }
            else{

                if(velocity.y < 0){ facing = FlxObject.UP; }
                else{ facing = FlxObject.DOWN; }

            }
            
            switch(facing){

                case FlxObject.DOWN:
                    animation.play("AnimationDown");
                case FlxObject.LEFT, FlxObject.RIGHT:
                    animation.play("AnimationLeftRight");
                case FlxObject.UP:
                    animation.play("AnimationUp");

            }

        }
            
        super.draw();

    }
    /*==================================================*/





    /*==================================================*/
    override public function update(_elapsedFloat:Float):Void{
        if(isFlickering()){ return; }

        objectFiniteStateMachine.UpdateVoid();
        super.update(_elapsedFloat);

        if(
            (velocity.x != 0 || velocity.y != 0) &&
            touching == FlxObject.NONE
        ){

            stepFlxSound.setPosition(x + frameWidth/2 + height);
            stepFlxSound.play();

        }
    }
    /*==================================================*/





    /*==================================================*/
    public function ChangeEnemyVoid(_enemyTypeInt:Int):Void{

        if(enemyTypeInt != _enemyTypeInt){

            enemyTypeInt = _enemyTypeInt;
            loadGraphic(
                "assets/images/enemy-" + Std.string(enemyTypeInt) + ".png",
                true,
                16, 16
            );

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function ChaseVoid():Void{

        if(!seePlayerBool){ objectFiniteStateMachine.activeStateFunction = IdleVoid; }
        else{ FlxVelocity.moveTowardsPoint(this, playerPositionFlxPoint, Std.int(speedFloat)); }

    }
    /*==================================================*/
    




    /*==================================================*/
    public function IdleVoid():Void{

        if(seePlayerBool){ objectFiniteStateMachine.activeStateFunction = ChaseVoid; }
        else if(idleVoidTimerFloat <= 0){

            if(FlxG.random.bool(1)){

                moveDirectionFloat = -1;
                velocity.x = velocity.y = 0;

            }
            else{

                moveDirectionFloat = FlxG.random.int(0, 8) * 45;
                
                velocity.set(speedFloat*0.5, 0);
                velocity.rotate(FlxPoint.weak(), moveDirectionFloat);

            }

            idleVoidTimerFloat = FlxG.random.int(1, 4);    

        }
        else{ idleVoidTimerFloat -= FlxG.elapsed; }
        
    }
    /*==================================================*/





}