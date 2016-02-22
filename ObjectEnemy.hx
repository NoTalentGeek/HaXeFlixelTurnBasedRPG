package;

import flixel.*;
import flixel.math.*;
import flixel.system.*;
import flixel.util.*;
using flixel.util.FlxSpriteUtil;

public class ObjectEnemy extends FlxSprite{

    private var brainObject:ObjectFiniteStateMachine;
    private var IdleVoidTimerFloat:Float;
    private var moveDirectionFloat:Float;
    private var stepSoundObject:FlxSound;
    public var enemyTypeInt(default, null):Int;
    public var playerPositionPointObject(default, null):FlxPoint;
    public var seePlayerBool:Bool = false;
    public var speedFloat:Float = 80;
    
    public function new(
        _enemyTypeInt:Int,
        _xFloat:Float = 0,
        _yFloat:Float = 0
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
        IdleVoidTimerFloat = 0;
        offset.x = 4;
        offset.y = 2;
        width = 8;

        brainObject = new ObjectFiniteStateMachine(IdleVoid);
        playerPositionPointObject = FlxPoint.get();
        
        stepSoundObject = FlxG.sound.load(AssetPaths.step__wav, 0.4);
        stepSoundObject.proximity(x, y, FlxG.camera.target, FlxG.width*0.6);

    }

    public function ChangeEnemyVoid(_enemyTypeInt:Int):Void{

        if(enemyTypeInt != _enemyTypeInt){

            enemyTypeInt = _enemyTypeInt;
            loadGraphic(
                "assets/images/enemy-" + Std.string(enemyTypeInt) + ".png",
                true,
                16,
                16
            );

        }

    }

    public function ChaseVoid():Void{

        if(!seePlayerBool){ brainObject.activeStateFunction = IdleVoid; }
        else{ FlxVelocity.moveTowardsPoint(this, playerPositionPointObject, Std.int(speedFloat)); }

    }
    
    public function IdleVoid():Void{

        if(seePlayerBool){ brainObject.activeStateFunction = ChaseVoid; }
        else if(IdleVoidTimerFloat <= 0){

            if(FlxRandom.chanceRoll(1)){

                moveDirectionFloat = -1;
                velocity.x = velocity.y = 0;

            }
            else{

                moveDirectionFloat = FlxRandom.intRanged(0, 8) * 45;
                FlxAngle.rotatePoint(
                    speedFloat * 0.5,
                    0, 0, 0,
                    moveDirectionFloat,
                    velocity
                );
                
            }

            IdleVoidTimerFloat = FlxRandom.intRanged(1, 4);    

        }
        else{ IdleVoidTimerFloat -= FlxG.elapsed; }
        
    }
    
    override public function update():Void{
        if(isFlickering()){ return; }

        brainObject.UpdateVoid();
        super.update();

        if(
            (velocity.x != 0 || velocity.y != 0) &&
            touching == FlxObject.NONE
        ){

            stepSoundObject.setPosition(x + _halfWidth, y + height);
            stepSoundObject.play();

        }
    }

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

                case (FlxObject.DOWN):animation.play("AnimationDown");
                case (FlxObject.LEFT, FlxObject.RIGHT):animation.play("AnimationLeftRight");
                case (FlxObject.UP):animation.play("AnimationUp");

            }

        }
            
        super.draw();

    }
    
    override public function destroy():Void{

        super.destroy();
        stepSoundObject = FlxDestroyUtil.destroy(stepSoundObject);

    }

}