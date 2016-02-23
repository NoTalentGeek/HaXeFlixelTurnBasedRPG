package;






import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
using flixel.util.FlxSpriteUtil;






class ObjectHUD extends FlxTypedGroup<FlxSprite>{






    private var backFlxSprite       :FlxSprite;
    private var healthFlxSprite     :FlxSprite;
    private var healthFlxText       :FlxText;
    private var moneyFlxSprite      :FlxSprite;
    private var moneyFlxText        :FlxText;
    





    /*==================================================*/
    public function new(){

        super();

        backFlxSprite = new FlxSprite().makeGraphic(FlxG.width, 20, FlxColor.BLACK);
        backFlxSprite.drawRect(0, 19, FlxG.width, 1, FlxColor.WHITE);

        healthFlxText = new FlxText(16, 2, 0, "3/3", 8);
        healthFlxText.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
        healthFlxSprite = new FlxSprite(
            4,
            healthFlxText.y + (healthFlxText.height/2) - 4,
            AssetPaths.health__png
        );



        moneyFlxText = new FlxText(0, 2, 0, "0", 8);
        moneyFlxText.alignment = RIGHT;
        moneyFlxText.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
        


        moneyFlxSprite = new FlxSprite(
            FlxG.width - 12,
            moneyFlxText.y + (moneyFlxText.height/2)  - 4,
            AssetPaths.coin__png
        );



        moneyFlxText.x = moneyFlxSprite.x - moneyFlxText.width - 4;
        



        add(backFlxSprite);
        add(healthFlxSprite);
        add(healthFlxText);
        add(moneyFlxSprite);
        add(moneyFlxText);
        
        /*Prevent HUD to be moved alongside with camera.*/
        forEach(function(_flxSprite:FlxSprite){
            _flxSprite.scrollFactor.set(0, 0);
        });

    }
    /*==================================================*/
    




    /*==================================================*/
    public function UpdateVoid(_healthInt:Int = 0, _moneyInt:Int = 0){

        healthFlxText.text = _healthInt + "/3";
        moneyFlxText.text = Std.string(_moneyInt);
        moneyFlxText.x = moneyFlxSprite.x - moneyFlxText.width - 4;

    }
    /*==================================================*/





}