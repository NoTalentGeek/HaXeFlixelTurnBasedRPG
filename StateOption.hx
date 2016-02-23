package;





import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxSave;





class StateOption extends FlxState{





    /*Define our screen elements.*/
    private var backFlxButton           :FlxButton;
    private var clearDataFlxButton      :FlxButton;
    private var saveFlxSave             :FlxSave;       /*Save object to reference settings.*/
    private var titleFlxText            :FlxText;
    private var volumeAmountFlxText     :FlxText;
    private var volumeDownFlxButton     :FlxButton;
    private var volumeFlxBar            :FlxBar;
    private var volumeFlxText           :FlxText;
    private var volumeUpFlxButton       :FlxButton;



    #if desktop

        private var fullScreenButton:FlxButton;

    #end





    /*==================================================*/
    override public function create(){

        backFlxButton = new FlxButton(
            (FlxG.width/2) + 10,
            FlxG.height - 28,
            "Back.",
            ClickBack
        );
        backFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);



        clearDataFlxButton = new FlxButton(
            (FlxG.width/2) - 90,
            FlxG.height - 28,
            "Clear Data.",
            ClickClearData
        );
        clearDataFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);



        /*Setup and add our object to the screen*/
        titleFlxText = new FlxText(0, 20, 0, "Options.", 22);
        titleFlxText.alignment = CENTER;
        titleFlxText.screenCenter(FlxAxes.X);



        volumeFlxText = new FlxText(0, titleFlxText.y + titleFlxText.height + 10, 0, "Volume.", 8);
        volumeFlxText.alignment = CENTER;
        volumeFlxText.screenCenter(FlxAxes.X);



        /*Set the volume button to be smaller than the main button.*/
        volumeDownFlxButton = new FlxButton(
            8,
            volumeFlxText.y + volumeFlxText.height + 2,
            "-",
            ClickVolumeDown
        );
        volumeDownFlxButton.loadGraphic(AssetPaths.button__png, true, 20,20);
        volumeDownFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);



        volumeUpFlxButton = new FlxButton(
            FlxG.width - 28,
            volumeDownFlxButton.y,
            "+",
            ClickVolumeUp
        );
        volumeUpFlxButton.loadGraphic(AssetPaths.button__png, true, 20,20);
        volumeUpFlxButton.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);



        volumeFlxBar = new FlxBar(
            volumeDownFlxButton.x + volumeDownFlxButton.width + 4,
            volumeDownFlxButton.y,
            LEFT_TO_RIGHT,
            Std.int(FlxG.width - 64),
            Std.int(volumeUpFlxButton.height)
        );
        volumeFlxBar.createFilledBar(
            0xff464646,
            FlxColor.WHITE,
            true,
            FlxColor.WHITE
        );



        volumeAmountFlxText = new FlxText(
            0, 0, 200,
            (FlxG.sound.volume*100) + "%",
            8
        );
        volumeAmountFlxText.alignment = CENTER;
        volumeAmountFlxText.borderColor = 0xff464646;
        volumeAmountFlxText.borderStyle = FlxTextBorderStyle.OUTLINE;
        volumeAmountFlxText.screenCenter(FlxAxes.X);
        volumeAmountFlxText.y =
            volumeFlxBar.y +
            (volumeFlxBar.height/2) -
            (volumeAmountFlxText.height/2);



        #if desktop

            fullScreenButton = new FlxButton(
                0,
                volumeFlxBar.y + volumeFlxBar.height + 8,
                FlxG.fullscreen ? "Fullscreen." : "Windowed.",
                ClickFullScreenVoid
            );
            fullScreenButton.screenCenter(FlxAxes.X);
            add(fullScreenButton);

        #end



        add(backFlxButton);
        add(clearDataFlxButton);
        add(titleFlxText);
        add(volumeAmountFlxText);
        add(volumeDownFlxButton);
        add(volumeFlxBar);
        add(volumeFlxText);
        add(volumeUpFlxButton);



        /*Bind our save object.*/
        saveFlxSave = new FlxSave();
        saveFlxSave.bind("HaXeFlixelTurnBasedRPG");



        /*Update the var so that it reflects the current volume of the program.*/
        UpdateVolumeVoid();
        FlxG.camera.fade(FlxColor.BLACK, 0.33, true);
        
        super.create();

    }
    /*==================================================*/





    /*==================================================*/
    override public function destroy(){

        super.destroy();



        backFlxButton           = FlxDestroyUtil.destroy(backFlxButton);
        clearDataFlxButton      = FlxDestroyUtil.destroy(clearDataFlxButton);
        titleFlxText            = FlxDestroyUtil.destroy(titleFlxText);
        volumeAmountFlxText     = FlxDestroyUtil.destroy(volumeAmountFlxText);
        volumeDownFlxButton     = FlxDestroyUtil.destroy(volumeDownFlxButton);
        volumeFlxText           = FlxDestroyUtil.destroy(volumeFlxText);
        volumeUpFlxButton       = FlxDestroyUtil.destroy(volumeUpFlxButton);



        saveFlxSave.destroy();
        saveFlxSave             = null;

        #if desktop

            fullScreenButton    = FlxDestroyUtil.destroy(fullScreenButton);

        #end

    }
    /*==================================================*/





    /*==================================================
    Call back function to go back to the main state.*/
    private function ClickBack(){

        saveFlxSave.close();
        FlxG.camera.fade(FlxColor.BLACK, 0.33, false, function(){

            FlxG.switchState(new StateMenu());

        });

    }
    /*==================================================*/





    /*==================================================
    Call back function to clear user data so that in the next time the application start
        the appliction does not load the previous session settings.*/
    private function ClickClearData(){

        saveFlxSave.erase();
        FlxG.sound.volume = 0.5;
        UpdateVolumeVoid();

    }
    /*==================================================*/

    



    /*==================================================
    Call back function to lower down the volume.*/
    private function ClickVolumeDown(){

        FlxG.sound.volume       -= 0.1;
        saveFlxSave.data.volume = FlxG.sound.volume;
        UpdateVolumeVoid();

    }
    /*==================================================*/





    /*==================================================
    Call back function to increase volume level.*/
    private function ClickVolumeUp(){

        FlxG.sound.volume       += 0.1;
        saveFlxSave.data.volume = FlxG.sound.volume;
        UpdateVolumeVoid();

    }
    /*==================================================*/





    /*==================================================
    Sync the shape, position, and value between the FlxBar and the
        volume value.*/
    private function UpdateVolumeVoid(){

        var volumeInt:Int           = Math.round(FlxG.sound.volume*100);
        volumeFlxBar.value          = volumeInt;
        volumeAmountFlxText.text    = volumeInt + "%";

    }
    /*==================================================*/





    #if desktop

        /*==================================================*/
        private function ClickFullScreenVoid(){

            FlxG.fullscreen             = !FlxG.fullscreen;
            fullScreenButton.text       = FlxG.fullscreen ? "Fullscreen." : "Windowed.";
            saveFlxSave.data.fullscreen = FlxG.fullscreen;

        }
        /*==================================================*/

    #end





}