package;





import flash.filters.ColorMatrixFilter;
import flash.geom.Matrix;
import flash.geom.Point;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxWaveEffect;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;





enum EnumOutcome{
    DEFEAT;
    ESCAPE;
    NONE;
    VICTORY;
}





class ObjectHUDCombat extends FlxTypedGroup<FlxSprite>{





    /*GUI for after combat finished.*/
    public var outcomeEnumOutcome   (default, null)     :EnumOutcome;
    public var passedObjectEnemy                        :ObjectEnemy;
    public var playerHealthInt      (default, null)     :Int;



    /*Sprite for combat HUD interface*/
    private var backFlxSprite       :FlxSprite;
    private var enemyObjectEnemy    :ObjectEnemy;
    private var playerObjectPlayer  :ObjectPlayer;



    /*Variables to track enemy health.*/
    private var enemyHealthFlxBar       :FlxBar;
    private var enemyHealthInt          :Int;
    private var enemyHealthMaxInt       :Int;



    /*Show the player current health.*/
    private var playerHealthFlxText:FlxText;



    /*FlxText array to show damage dealt and/or missed damage.*/
    private var damageFlxTextArray:Array<FlxText>;
    


    /*Others.*/
    private var alphaFloat              :Float = 0;         /*Float number to handle transition float in or float out.*/
    private var choiceFlxTextArray      :Array<FlxText>;    /*Whether the player want to fight or flee.*/
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
    private var winFlxSound             :FlxSound;





    /*==================================================*/
    public function new(){

        super();
        screenFlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
        var waveFlxWaveEffect = new FlxWaveEffect(FlxWaveMode.ALL, 4, -1, 4);
        var waveFlxEffectSprite = new FlxEffectSprite(screenFlxSprite, [waveFlxWaveEffect]);



        /*Create a background object.*/
        backFlxSprite = new FlxSprite().makeGraphic(
            120, 120, FlxColor.WHITE
        );
        backFlxSprite.drawRect(1, 1, 118, 44, FlxColor.BLACK);
        backFlxSprite.drawRect(1, 46, 118, 73, FlxColor.BLACK);
        backFlxSprite.screenCenter();



        playerObjectPlayer = new ObjectPlayer(backFlxSprite.x + 36, backFlxSprite.y + 16);
        playerObjectPlayer.active = false;
        playerObjectPlayer.animation.frameIndex = 3;
        playerObjectPlayer.facing = FlxObject.RIGHT;



        enemyObjectEnemy = new ObjectEnemy(backFlxSprite.x + 76, backFlxSprite.y + 16, 0);
        enemyObjectEnemy.active = false;
        enemyObjectEnemy.animation.frameIndex = 3;
        enemyObjectEnemy.facing = FlxObject.LEFT;



        playerHealthFlxText = new FlxText(0, playerObjectPlayer.y + playerObjectPlayer.height  + 2, 0, "3/3", 8);
        playerHealthFlxText.alignment = "center";
        playerHealthFlxText.x = playerObjectPlayer.x + 4 - (playerHealthFlxText.width/2);



        enemyHealthFlxBar = new FlxBar(
            enemyObjectEnemy.x - 6,
            playerHealthFlxText.y,
            LEFT_TO_RIGHT,
            20, 10
        );
        enemyHealthFlxBar.createFilledBar(
            0xffdc143c,
            FlxColor.YELLOW,
            true,
            FlxColor.YELLOW
        );



        /*Create choices and then add them to the group.*/
        choiceFlxTextArray = new Array<FlxText>();
        choiceFlxTextArray.push(new FlxText(backFlxSprite.x + 30, backFlxSprite.y + 48, 85, "FIGHT", 22));
        choiceFlxTextArray.push(new FlxText(backFlxSprite.x + 30, choiceFlxTextArray[0].y + choiceFlxTextArray[0].height +  8, 85, "FLEE", 22));

        pointerFlxSprite = new FlxSprite(
            backFlxSprite.x + 10,
            choiceFlxTextArray[0].y + (choiceFlxTextArray[0].height / 2) - 8,
            AssetPaths.pointer__png
        );
        pointerFlxSprite.visible = false;
        


        damageFlxTextArray = new Array<FlxText>();
        damageFlxTextArray.push(new FlxText(0, 0, 40));
        damageFlxTextArray.push(new FlxText(0, 0, 40));
        


        resultTextObject = new FlxText(backFlxSprite.x + 2, backFlxSprite.y + 9, 116, "", 18);
        resultTextObject.alignment = "center";
        resultTextObject.color = FlxColor.YELLOW;
        resultTextObject.setBorderStyle(SHADOW, FlxColor.GRAY);
        resultTextObject.visible = false;
        


        add(waveFlxEffectSprite);
        add(backFlxSprite);
        add(playerObjectPlayer);
        add(enemyObjectEnemy);
        add(playerHealthFlxText);
        add(enemyHealthFlxBar);
        for(textObject in damageFlxTextArray){
            textObject.alignment = "center";
            textObject.color = FlxColor.WHITE;
            textObject.setBorderStyle(SHADOW, FlxColor.RED);
            textObject.visible = false;
            add(textObject);
        }
        add(choiceFlxTextArray[0]);
        add(choiceFlxTextArray[1]);
        add(pointerFlxSprite);
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
    override public function destroy() {

        super.destroy();
        
        backFlxSprite           = FlxDestroyUtil.destroy(backFlxSprite);
        choiceFlxTextArray      = FlxDestroyUtil.destroyArray(choiceFlxTextArray);
        damageFlxTextArray      = FlxDestroyUtil.destroyArray(damageFlxTextArray);
        enemyObjectEnemy        = FlxDestroyUtil.destroy(enemyObjectEnemy);
        passedObjectEnemy       = FlxDestroyUtil.destroy(passedObjectEnemy);
        playerHealthFlxText     = FlxDestroyUtil.destroy(playerHealthFlxText);
        playerObjectPlayer      = FlxDestroyUtil.destroy(playerObjectPlayer);
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
    override public function update(_elapsedFloat:Float){

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
                    if(selectIndexInt == 1){ selectIndexInt = 0; }
                    else{ selectIndexInt++; }
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

        super.update(_elapsedFloat);

    }
    /*==================================================*/






    /*==================================================*/
    private function DoneDamageInVoid(_){

        FlxTween.num(1, 0, 0.66, { 
            ease:FlxEase.circInOut, 
            onComplete:DoneDamageOutVoid,
            startDelay:1
        }, UpdateDamageAlphaVoid);
    
    }
    /*==================================================*/





    /*==================================================*/
    private function DoneDamageOutVoid(_){

        damageFlxTextArray[0].text = "";
        damageFlxTextArray[0].visible = false;
        damageFlxTextArray[1].text = "";
        damageFlxTextArray[1].visible = false;
        
        if(playerHealthInt <= 0){

            /*If the player's health is 0, we show the defeat message on the screen and fade it in.*/
            loseFlxSound.play();
            outcomeEnumOutcome = DEFEAT;
            resultTextObject.alpha = 0;
            resultTextObject.text = "DEFEAT!";
            resultTextObject.visible = true;
            FlxTween.tween(resultTextObject, { alpha:1 }, 0.66, { ease:FlxEase.circInOut, onComplete:DoneResultInVoid });
        
        }
        else if(enemyHealthInt <= 0){

            /*If the enemy's health is 0, we show the victory message.*/
            outcomeEnumOutcome = VICTORY;
            resultTextObject.alpha = 0;
            resultTextObject.text = "VICTORY!";
            resultTextObject.visible = true;
            winFlxSound.play();
            FlxTween.tween(resultTextObject, { alpha:1 }, 0.66, { ease:FlxEase.circInOut, onComplete:DoneResultInVoid });
        
        }
        else{

            /*Both are still alive, so we reset and have the player pick their next action.*/
            pointerFlxSprite.visible = true;
            waitBool = false;

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function DoneResultInVoid(_){

        FlxTween.num(
            1, 0, 0.66,
            { ease:FlxEase.circOut, onComplete:FinishFadeOutVoid, startDelay:1 },
            UpdateDamageAlphaVoid
        );
    
    }
    /*==================================================*/





    /*==================================================*/
    private function EnemyAttackVoid(){

        /*ObjectEnemy has 30% chance to hit the player.*/
        if(FlxG.random.bool(30)){

            /*If enemy hits the player give an animation.*/
            hurtFlxSound.play();
            damageFlxTextArray[0].text = "1";
            playerHealthInt --;
            UpdatePlayerHealthVoid();
            FlxG.camera.flash(FlxColor.WHITE, .2);
            FlxG.camera.shake(0.01, 0.2);

        }
        /*ObjectEnemy misses.*/
        else{

            damageFlxTextArray[0].text = "MISS!";
            missFlxSound.play();

        }
        
        /*Setup combat text and animation.*/
        damageFlxTextArray[0].x = playerObjectPlayer.x + 2 - (damageFlxTextArray[0].width/2);
        damageFlxTextArray[0].y = playerObjectPlayer.y + 4 - (damageFlxTextArray[0].height/2);
        damageFlxTextArray[0].alpha = 0;
        damageFlxTextArray[0].visible = true;

    }
    /*==================================================*/





    /*==================================================*/
    private function FinishFadeInVoid(_){

        active = true;
        pointerFlxSprite.visible = true;
        selectFlxSound.play();
        waitBool = false;

    }
    /*==================================================*/





    /*==================================================*/
    private function FinishFadeOutVoid(_){

        active = false;
        visible = false;

    }
    /*==================================================*/





    /*==================================================*/
    public function InitCombatVoid(_playerHealthInt:Int, _passedObjectEnemy:ObjectEnemy){

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
        
        combatFlxSound.play();
        passedObjectEnemy = _passedObjectEnemy;
        playerHealthInt = _playerHealthInt;
        
        UpdatePlayerHealthVoid();
        
        enemyHealthFlxBar.value = 100;
        enemyHealthMaxInt = enemyHealthInt = (passedObjectEnemy.enemyTypeInt + 1) * 2;
        enemyObjectEnemy.ChangeEnemyVoid(passedObjectEnemy.enemyTypeInt);
        
        outcomeEnumOutcome = NONE;
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
                onComplete:FinishFadeInVoid
            },
            UpdateAlphaVoid
        );
        
    }
    /*==================================================*/





    /*==================================================*/
    private function MakeChoiceVoid(){

        /*Hide the pointer sprite.*/
        pointerFlxSprite.visible = false;

        /*Check which action is selected.*/
        switch(selectIndexInt){

            /*Fight was picked.*/
            case 0:
                /*The player has a chance of 85% to hit the enemy.*/
                if(FlxG.random.bool(85)){

                    /*If hit deal one damage to the enemy and then set damage indicator.*/
                    damageFlxTextArray[1].text = "1";
                    FlxTween.tween(enemyObjectEnemy, { x: enemyObjectEnemy.x + 4 }, 0.1, { onComplete: function(_){
                        FlxTween.tween(enemyObjectEnemy, { x: enemyObjectEnemy.x - 4 }, 0.1);
                    }});
                    hurtFlxSound.play();
                    enemyHealthInt --;

                    /*Change the enemy health bar.*/
                    enemyHealthFlxBar.value = (enemyHealthInt/enemyHealthMaxInt)*100;

                }
                /*The player attack is missed.*/
                else{

                    damageFlxTextArray[1].text = "MISS!";
                    missFlxSound.play();

                }
                
                /*Position the damage text over the enemy, and set it's alpha to 0 but it's visible to true (so that it gets draw called on it).*/
                damageFlxTextArray[1].x = enemyObjectEnemy.x + 2 - (damageFlxTextArray[1].width/2);
                damageFlxTextArray[1].y = enemyObjectEnemy.y + 4 - (damageFlxTextArray[1].height/2);
                damageFlxTextArray[1].alpha = 0;
                damageFlxTextArray[1].visible = true;
                
                /*If enemy is still alive then it will try to counter player's attack.*/
                if(enemyHealthInt > 0){
                    EnemyAttackVoid();
                }
                
                /*Setup 2 tweens to allow the damage indicators to fade in and float up from the sprites.*/
                FlxTween.num(
                    damageFlxTextArray[0].y,
                    damageFlxTextArray[0].y - 12,
                    1,
                    { ease:FlxEase.circOut },
                    UpdateDamageYVoid
                );
                FlxTween.num(
                    0,
                    1,
                    0.2,
                    {
                        ease:FlxEase.circInOut,
                        onComplete:DoneDamageInVoid
                    },
                    UpdateDamageAlphaVoid
                );
                
            case 1:
                
                /*Give player chance of 50% to escape the current battle.*/
                if(FlxG.random.bool(50)){

                    /*Trigger escape success message with a tween animation.*/
                    fledFlxSound.play();
                    outcomeEnumOutcome = ESCAPE;
                    resultTextObject.alpha = 0;
                    resultTextObject.text = "ESCAPED!";
                    resultTextObject.visible = true;
                    FlxTween.tween(
                        resultTextObject,
                        { alpha:1 },
                        0.66,
                        {
                            ease:FlxEase.circInOut,
                            onComplete:DoneResultInVoid
                        }
                    );
                
                }
                /*Failed to escape.*/
                else{

                    /*ObjectEnemy get a free hit if the player failed to flee.*/
                    EnemyAttackVoid();
                    FlxTween.num(
                        damageFlxTextArray[0].y,
                        damageFlxTextArray[0].y - 12,
                        1,
                        { ease:FlxEase.circOut },
                        UpdateDamageYVoid
                    );
                    FlxTween.num(
                        0,
                        1,
                        0.2,
                        {
                            ease:FlxEase.circInOut,
                            onComplete:DoneDamageInVoid
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
    private function MovePointerVoid(){

        pointerFlxSprite.y =
            choiceFlxTextArray[selectIndexInt].y +
            (choiceFlxTextArray[selectIndexInt].height/2) - 8;

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateAlphaVoid(_valueFloat:Float){

        alphaFloat = _valueFloat;

        /*forEach() is function to access every element of this children.*/
        forEach(function(_FlxSprite:FlxSprite){
            _FlxSprite.alpha = alphaFloat;
        });

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateDamageAlphaVoid(_valueFloat:Float){ damageFlxTextArray[0].alpha = damageFlxTextArray[1].alpha = _valueFloat; }
    /*==================================================*/
    




    /*==================================================*/
    private function UpdateDamageYVoid(_valueFloat:Float){ damageFlxTextArray[0].y = damageFlxTextArray[1].y = _valueFloat; }
    /*==================================================*/





    /*==================================================*/
    private function UpdatePlayerHealthVoid(){

        playerHealthFlxText.text = playerHealthInt+ "/3";
        playerHealthFlxText.x = playerObjectPlayer.x + 4 - (playerHealthFlxText.width/2);

    }
    /*==================================================*/





}