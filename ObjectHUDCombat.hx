package;





import flash.filters.*;
import flash.geom.*;
import flixel.*;
import flixel.addons.effects.*;
import flixel.group.*;
import flixel.system.*;
import flixel.text.*;
import flixel.tweens.*;
import flixel.ui.*;
import flixel.util.*;
using flixel.util.FlxSpriteUtil;





class ObjectHUDCombat extends FlxTypedGroup<FlxSprite>{





    /*GUI for after combat finished.*/
    public var outcomeEnum          (default, null)     :EnumOutcome;
    public var passedObjectEnemy                        :ObjectEnemy;
    public var playerHealthInt      (default, null)     :Int;



    /*Sprite for combat HUD interface*/
    private var backFlxSprite       :FlxSprite;
    private var enemyObject         :ObjectEnemy;
    private var playerObjectPlayer  :ObjectPlayer;



    /*Variables to track enemy health.*/
    private var enemyHealthBarObject    :FlxBar;
    private var enemyHealthInt          :Int;
    private var enemyHealthMaxInt       :Int;



    /*Show the player current health.*/
    private var playerHealthTextObject:FlxText;



    /*FlxText array to show damage dealt and/or missed damage.*/
    private var damageTextObjectArray:Array<FlxText>;
    


    /*Others.*/
    private var alphaFloat              :Float = 0;         /*Float number to handle transition float in or float out.*/
    private var choiceTextObjectArray   :Array<FlxText>;    /*Whether the player want to fight or flee.*/
    private var combatFlxSound          :FlxSound;
    private var fledFlxSound            :FlxSound;
    private var hurtFlxSound            :FlxSound;
    private var loseFlxSound            :FlxSound;
    private var missFlxSound            :FlxSound;
    private var pointerFlxSprite        :FlxSprite;         /*Pointer sprite.*/
    private var resultTextObject        :FlxText;           /*This is a text that is used to display the result of battle.*/
    private var screenFlxSprite         :FlxSprite;
    private var selectIndexInt          :Int;               /*To know which option is selected.*/
    private var selectFlxSound          :FlxSound;
    private var waitBool                :Bool = true;       /*Flag to be set true if player need to wait for something, for example right after a battle done.*/
    private var waveFlxSprite           :FlxWaveSprite;     /*This is a cool rendering effect build in HaXeFlixel.*/
    private var winFlxSound             :FlxSound;





    /*==================================================*/
    public function new(){

        super();
        screenFlxSprite = new FlxSprite().makeGraphic(
            FlxG.width,
            FlxG.height,
            FlxColor.TRANSPARENT
        );
        waveFlxSprite = new FlxWaveSprite(
            screenFlxSprite,
            WaveMode.ALL,
            4, -1, 4
        );
        add(waveFlxSprite);

        /*Create a background object.*/
        backFlxSprite = new FlxSprite().makeGraphic(
            120, 120, FlxColor.WHITE
        );
        backFlxSprite.drawRect(1, 1, 118, 44, FlxColor.BLACK);
        backFlxSprite.drawRect(1, 46, 118, 73, FlxColor.BLACK);
        backFlxSprite.screenCenter(true, true);
        add(backFlxSprite);

        playerObjectPlayer = new ObjectPlayer(backFlxSprite.x + 36, backFlxSprite.y + 16);
        playerObjectPlayer.active = false;
        playerObjectPlayer.animation.frameIndex = 3;
        playerObjectPlayer.facing = FlxObject.RIGHT;
        add(playerObjectPlayer);

        enemyObject = new ObjectEnemy(0, backFlxSprite.x + 76, backFlxSprite.y + 16);
        enemyObject.active = false;
        enemyObject.animation.frameIndex = 3;
        enemyObject.facing = FlxObject.LEFT;
        add(enemyObject);

        playerHealthTextObject = new FlxText(0, playerObjectPlayer.y + playerObjectPlayer.height  + 2, 0, "3/3", 8);
        playerHealthTextObject.alignment = "center";
        playerHealthTextObject.x = playerObjectPlayer.x + 4 - (playerHealthTextObject.width/2);
        add(playerHealthTextObject);

        enemyHealthBarObject = new FlxBar(
            playerObjectPlayer.x - 6,
            playerHealthTextObject.y,
            FlxBar.FILL_LEFT_TO_RIGHT,
            20, 10
        );
        enemyHealthBarObject.createFilledBar(
            FlxColor.CRIMSON,
            FlxColor.YELLOW,
            true,
            FlxColor.YELLOW
        );
        add(enemyHealthBarObject);

        /*Create choices and then add them to the group.*/
        choiceTextObjectArray = new Array<FlxText>();
        choiceTextObjectArray.push(new FlxText(backFlxSprite.x + 30, backFlxSprite.y + 48, 85, "FIGHT", 22));
        choiceTextObjectArray.push(new FlxText(backFlxSprite.x + 30, choiceTextObjectArray[0].y + choiceTextObjectArray[0].height +  8, 85, "FLEE", 22));
        add(choiceTextObjectArray[0]);
        add(choiceTextObjectArray[1]);

        pointerFlxSprite = new FlxSprite(
            backFlxSprite.x + 10,
            choiceTextObjectArray[0].y + (choiceTextObjectArray[0].height / 2) - 8,
            AssetPaths.pointer__png
        );
        pointerFlxSprite.visible = false;
        add(pointerFlxSprite);
        
        damageTextObjectArray = new Array<FlxText>();
        damageTextObjectArray.push(new FlxText(0, 0, 40));
        damageTextObjectArray.push(new FlxText(0, 0, 40));
        for(textObject in damageTextObjectArray){
            textObject.alignment = "center";
            textObject.color = FlxColor.WHITE;
            textObject.setBorderStyle(FlxText.BORDER_SHADOW, FlxColor.RED);
            textObject.visible = false;
            add(textObject);
        }
        
        resultTextObject = new FlxText(backFlxSprite.x + 2, backFlxSprite.y + 9, 116, "", 18);
        resultTextObject.alignment = "center";
        resultTextObject.color = FlxColor.YELLOW;
        resultTextObject.setBorderStyle(FlxText.BORDER_SHADOW, FlxColor.GRAY);
        resultTextObject.visible = false;
        add(resultTextObject);
        
        forEach(function(_FlxSprite:FlxSprite){
            _FlxSprite.scrollFactor.set();
            _FlxSprite.alpha = 0;
        });
        
        active  = false;
        visible = false;
        
        combatFlxSound      = FlxG.sound.load(AssetPaths.combat__wav);
        fledFlxSound        = FlxG.sound.load(AssetPaths.fled__wav);
        hurtFlxSound        = FlxG.sound.load(AssetPaths.hurt__wav);
        loseFlxSound        = FlxG.sound.load(AssetPaths.lose__wav);
        missFlxSound        = FlxG.sound.load(AssetPaths.miss__wav);
        selectFlxSound      = FlxG.sound.load(AssetPaths.select__wav);
        winFlxSound         = FlxG.sound.load(AssetPaths.win__wav);

    }
    /*==================================================*/





    /*==================================================*/
    override public function destroy():Void {

        super.destroy();
        
        backFlxSprite           = FlxDestroyUtil.destroy(backFlxSprite);
        choiceTextObjectArray   = FlxDestroyUtil.destroyArray(choiceTextObjectArray);
        damageTextObjectArray   = FlxDestroyUtil.destroyArray(damageTextObjectArray);
        enemyObject             = FlxDestroyUtil.destroy(enemyObject);
        passedObjectEnemy       = FlxDestroyUtil.destroy(passedObjectEnemy);
        playerHealthTextObject  = FlxDestroyUtil.destroy(playerHealthTextObject);
        playerObjectPlayer            = FlxDestroyUtil.destroy(playerObjectPlayer);
        pointerFlxSprite        = FlxDestroyUtil.destroy(pointerFlxSprite);
        resultTextObject        = FlxDestroyUtil.destroy(resultTextObject);
        
        combatFlxSound       = FlxDestroyUtil.destroy(combatFlxSound);
        fledFlxSound         = FlxDestroyUtil.destroy(fledFlxSound);
        hurtFlxSound         = FlxDestroyUtil.destroy(hurtFlxSound);
        loseFlxSound         = FlxDestroyUtil.destroy(loseFlxSound);
        missFlxSound         = FlxDestroyUtil.destroy(missFlxSound);
        selectFlxSound       = FlxDestroyUtil.destroy(selectFlxSound);
        winFlxSound          = FlxDestroyUtil.destroy(winFlxSound);

    }
    /*==================================================*/





    /*==================================================*/
    override public function update():Void{

        if(!waitBool){
            
            #if !FLX_NO_KEYBOARD

                /*Setup some control flags.*/
                var downBool:Bool = false;
                var fireBool:Bool = false;
                var upBool:Bool = false;
                
                /*Boolean check for keyboard control.*/
                if(FlxG.keys.anyJustReleased(["S", "DOWN"])){ downBool = true; }
                else if(FlxG.keys.anyJustReleased(["SPACE", "X"])){ fireBool = true; }
                else if(FlxG.keys.anyJustReleased(["W", "UP"])){ upBool = true; }
                
                /*Based on which flags are set, do the specified action.*/
                if(downBool){

                    /*If the player presses down, we move the cursor down (with wrapping).*/
                    if(selectIndexInt == 1)
                        selectIndexInt = 0;
                    else
                        selectIndexInt++;
                    selectFlxSound.play();
                    MovePointerVoid();

                }
                else if(fireBool){

                    selectFlxSound.play();

                     /*When the player chooses either option, we call this
                        function to process their selection.*/
                    MakeChoiceVoid();
                
                }
                else if(upBool){

                    /*If the player presses up, we move the cursor up (with wrapping).*/
                    if(selectIndexInt == 0){ selectIndexInt = 1; }
                    else{ selectIndexInt --; }
                    selectFlxSound.play();
                    MovePointerVoid();

                }

            #end

            /*Touch control.*/
            #if !FLX_NO_TOUCH

                var didSelectBool:Bool = false;
                for(touchObject in FlxG.touchObjectes.justReleased()){

                    if(!didSelectBool){

                        if(touchObject.overlaps(_choices[0])){

                            didSelectBool = true;
                            selectIndexInt = 0;
                            selectFlxSound.play();
                            MakeChoiceVoid();
                            MovePointerVoid();

                        }
                        else if(touchObject.overlaps(_choices[1])){

                            didSelectBool = true;
                            selectIndexInt = 1;
                            selectFlxSound.play();
                            MakeChoiceVoid();
                            MovePointerVoid();

                        }

                    }

                }

            #end
        }

        super.update();

    }
    /*==================================================*/






    /*==================================================*/
    private function DoneDamageInVoid(_):Void{

        FlxTween.num(
            1,
            0,
            0.66,
            {
                complete:DoneDamageOutVoid,
                ease:FlxEase.circInOut,
                startDelay:1
            },
            UpdateDamageAlphaVoid
        );
    
    }
    /*==================================================*/





    /*==================================================*/
    private function DoneDamageOutVoid(_):Void{

        damageTextObjectArray[0].text = "";
        damageTextObjectArray[0].visible = false;
        damageTextObjectArray[1].text = "";
        damageTextObjectArray[1].visible = false;
        
        if(playerHealth <= 0){

            /*If the player's health is 0, we show the defeat message on the screen and fade it in.*/
            loseFlxSound.play();
            outcomeEnum = DEFEAT;
            resultTextObject.alpha = 0;
            resultTextObject.text = "DEFEAT!";
            resultTextObject.visible = true;
            FlxTween.tween(
                resultTextObject,
                { alpha:1 },
                0.66,
                {
                    complete:DoneResultInVoid,
                    ease:FlxEase.circInOut
                }
            );
        
        }
        else if(enemyHealthInt <= 0){

            /*If the enemy's health is 0, we show the victory message.*/
            outcomeEnum = VICTORY;
            resultTextObject.alpha = 0;
            resultTextObject.text = "VICTORY!";
            resultTextObject.visible = true;
            winFlxSound.play();
            FlxTween.tween(
                resultTextObject,
                { alpha:1 },
                0.66,
                {
                    complete:DoneResultInVoid,
                    ease:FlxEase.circInOut
                }
            );
        
        }
        else{

            /*Both are still alive, so we reset and have the player pick their next action.*/
            pointerFlxSprite.visible = true;
            waitBool = false;

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function DoneResultInVoid(_):Void{

        FlxTween.num(
            1,
            0,
            0.66,
            {
                complete:FinishFadeOutVoid,
                ease:FlxEase.circOut,
                startDelay:1
            },
            UpdateDamageAlphaVoid
        );
    
    }
    /*==================================================*/





    /*==================================================*/
    private function EnemyAttackVoid():Void{

        /*Enemy has 30% chance to hit the player.*/
        if(FlxRandom.chanceRoll(30)){

            /*If enemy hits the player give an animation.*/
            hurtFlxSound.play();
            damageTextObjectArray[0].text = "1";
            playerHealthInt--;
            UpdatePlayerHealthVoid();
            FlxG.camera.flash(FlxColor.WHITE, .2);
            FlxG.camera.shake(0.01, 0.2);

        }
        /*Enemy misses.*/
        else{

            damageTextObjectArray[0].text = "MISS!";
            missFlxSound.play();

        }
        
        /*Setup combat text and animation.*/
        damageTextObjectArray[0].x = playerObjectPlayer.x + 2 - (damageTextObjectArray[0].width/2);
        damageTextObjectArray[0].y = playerObjectPlayer.y + 4 - (damageTextObjectArray[0].height/2);
        damageTextObjectArray[0].alpha = 0;
        damageTextObjectArray[0].visible = true;

    }
    /*==================================================*/





    /*==================================================*/
    private function FinishFadeInVoid(_):Void{

        active = true;
        pointerFlxSprite.visible = true;
        selectFlxSound.play();
        waitBool = false;

    }
    /*==================================================*/





    /*==================================================*/
    private function FinishFadeOutVoid(_):Void{

        active = false;
        visible = false;

    }
    /*==================================================*/





    /*==================================================*/
    public function InitCombatVoid(_playerHealthInt:Int, _passedObjectEnemy:Enemy):Void{

        #if flash
            screenFlxSprite.pixels.copyPixels(FlxG.camera.buffer, FlxG.camera.buffer.rect, new Point());
        #else
            screenFlxSprite.pixels.draw(FlxG.camera.canvas, new Matrix(1, 0, 0, 1, 0, 0));
        #end

        var redColorFloat:Float = 1/3;
        var greenColorFloat:Float = 1/2;
        var blueColorFloat:Float = 1/6;
        screenFlxSprite.pixels.applyFilter(
            screenFlxSprite.pixels,
            screenFlxSprite.pixels.rect,
            new Point(),
            new ColorMatrixFilter(
                [
                    redColorFloat,
                    greenColorFloat,
                    blueColorFloat,
                    0, 0,
                    redColorFloat,
                    greenColorFloat,
                    blueColorFloat,
                    0, 0,
                    redColorFloat,
                    greenColorFloat,
                    blueColorFloat,
                    0, 0, 0, 0, 0, 1, 0
                ]
            )
        );
        screenFlxSprite.resetFrameBitmapDatas();

        /*Set this flag to true to force the sprite to update during the draw() call.*/
        screenFlxSprite.dirty = true;
        
        combatFlxSound.play();
        passedObjectEnemy = _passedObjectEnemy;
        playerHealthInt = _playerHealthInt;
        
        UpdatePlayerHealthVoid();
        
        enemyHealthBarObject.currentValue = 100;
        enemyHealthMaxInt = enemyHealthInt = (passedObjectEnemy.enemyTypeInt + 1) * 2;
        enemyObject.changeEnemy(passedObjectEnemy.enemyTypeInt);
        
        outcomeEnum = NONE;
        pointerFlxSprite.visible = false;
        resultTextObject.text = "";
        resultTextObject.visible = false;
        selectIndexInt = 0;
        waitBool = true;
        MovePointerVoid();
        
        visible = true;
        
        /*Tween in numeric value.*/
        FlxTween.num(
            0, 1, 0.66,
            {
                ease:FlxEase.circOut,
                complete:finishFadeIn
            },
            updateAlpha
        );
        
    }
    /*==================================================*/





    /*==================================================*/
    private function MakeChoiceVoid():Void{

        /*Hide the pointer sprite.*/
        pointerFlxSprite.visible = false;

        /*Check which action is selected.*/
        switch(selectIndexInt){

            /*Fight was picked.*/
            case 0:
                /*The player has a chance of 85% to hit the enemy.*/
                if(FlxRandom.chanceRoll(85)){

                    /*If hit deal one damage to the enemy and then set damage indicator.*/
                    damageTextObjectArray[1].text = "1";
                    FlxTween.tween(
                        enemyObject,
                        {
                            x:enemyObject.x + 4
                        },
                        0.1,
                        {
                            complete:function(_){
                                FlxTween.tween(
                                    enemyObject,
                                    { x:enemyObject.x - 4 },
                                    0.1
                                );
                            }
                        }
                    );
                    hurtFlxSound.play();
                    enemyHealthInt --;

                    /*Change the enemy health bar.*/
                    enemyHealthBarObject.currentValue = (enemyHealthInt/enemyHealthInt)*100;

                }
                /*The player attack is missed.*/
                else{

                    damageTextObjectArray[1].text = "MISS!";
                    missFlxSound.play();

                }
                
                /*Position the damage text over the enemy, and set it's alpha to 0 but it's visible to true (so that it gets draw called on it).*/
                damageTextObjectArray[1].x = enemyObject.x + 2 - (damageTextObjectArray[1].width/2);
                damageTextObjectArray[1].y = enemyObject.y + 4 - (damageTextObjectArray[1].height/2);
                damageTextObjectArray[1].alpha = 0;
                damageTextObjectArray[1].visible = true;
                
                /*If enemy is still alive then it will try to counter player's attack.*/
                if(enemyHealthInt > 0){
                    EnemyAttackVoid();
                }
                
                /*Setup 2 tweens to allow the damage indicators to fade in and float up from the sprites.*/
                FlxTween.num(
                    damageTextObjectArray[0].y,
                    damageTextObjectArray[0].y - 12,
                    1,
                    { ease:FlxEase.circOut },
                    UpdateDamageYVoid
                );
                FlxTween.num(
                    0,
                    1,
                    0.2,
                    {
                        complete:DoneDamageInVoid
                        ease:FlxEase.circInOut,
                    },
                    UpdateDamageAlphaVoid
                );
                
            case 1:
                
                /*Give player chance of 50% to escape the current battle.*/
                if(FlxRandom.chanceRoll(50)){

                    /*Trigger escape success message with a tween animation.*/
                    fledFlxSound.play();
                    outcomeEnum = ESCAPE;
                    resultTextObject.alpha = 0;
                    resultTextObject.text = "ESCAPED!";
                    resultTextObject.visible = true;
                    FlxTween.tween(
                        resultTextObject,
                        { alpha:1 },
                        0.66,
                        {
                            complete:DoneResultInVoid,
                            ease:FlxEase.circInOut
                        }
                    );
                
                }
                /*Failed to escape.*/
                else{

                    /*Enemy get a free hit if the player failed to flee.*/
                    EnemyAttackVoid();
                    FlxTween.num(
                        damageTextObjectArray[0].y,
                        damageTextObjectArray[0].y - 12,
                        1,
                        { ease:FlxEase.circOut },
                        UpdateDamageYVoid
                    );
                    FlxTween.num(
                        0,
                        1,
                        0.2,
                        {
                            complete:DoneDamageInVoid,
                            ease:FlxEase.circInOut
                        },
                        UpdateDamageAlphaVoid
                    );
                
                }

        }
        
        /*Wait the character until result screen.*/
        waitBool = true;

    }
    /*==================================================*/





    /*==================================================*/
    private function MovePointerVoid():Void{

        pointerFlxSprite.y =
            choiceTextObjectArray[selectIndexInt].y +
            (choiceTextObjectArray[selectIndexInt].height/2) - 8;

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateAlphaVoid(_valueFloat:Float):Void{

        alphaFloat = _valueFloat;

        /*forEach() is function to access every element of this children.*/
        forEach(function(_FlxSprite:FlxSprite){
            _FlxSprite.alpha = alphaFloat;
        });

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateDamageAlphaVoid(_valueFloat:Float):Void{ damageTextObjectArray[0].alpha = damageTextObjectArray[1].alpha = _valueFloat; }
    /*==================================================*/
    




    /*==================================================*/
    private function UpdateDamageYVoid(_valueFloat:Float):Void{ damageTextObjectArray[0].y = damageTextObjectArray[1].y = _valueFloat; }
    /*==================================================*/





    /*==================================================*/
    private function UpdatePlayerHealthVoid():Void{

        playerHealthTextObject.text = Std.string(playerHealthTextObject) + "/3";
        playerHealthTextObject.x = playerObjectPlayer.x + 4 - (playerHealthTextObject.width/2);

    }
    /*==================================================*/





}