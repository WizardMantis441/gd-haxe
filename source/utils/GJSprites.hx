package utils;

import flixel.FlxSprite;
import flixel.util.FlxAxes;
import flixel.addons.display.FlxBackdrop;

class GJSprites {
    public function new() {}
    /**
        @param Path - The Path to the Sprite [String]
        @param Axis - The Axis it wraps around [FlxAxes]
        @param SpacingX - [Not Required] The Pixels it moves to combat pixel gaps or any gaps in general [Int]
        @param SpacingY - [Not Required] The Pixels it moves to combat pixel gaps or any gaps in general [Int]
        @param Type - [Not Required] The Type of Sprite (none is just the smallest sprite with low detail). HD is bigger with more quality. UDH is very big with the best qualtiy [GJQualityType]
        @param ScrollX - [Not Required] The Velocity It travels, Positive Goes Right, Negitive goes Left. [Float or Int]
        @param ScrollY - [Not Required] The Velocity It travels, Positive Goes Right, Negitive goes Left. [Float or Int]
    **/
    public static function makeBackdrop(filePath:String, axis:FlxAxes = FlxAxes.XY, ?spacingX:Int = 0, ?spacingY:Int = 0,
    ?type:GJQualityType = GJQualityType.NONE, ?scrollX:Float = 0.0, ?scrollY:Float = 0.0) {
        var array = filePath.split('/');
        trace(array);
        trace(filePath);
        filePath += '/${array[array.length-1]}_001$type.png';
        trace(filePath);
        var backdrop:FlxBackdrop = new FlxBackdrop(Assets.load(IMAGE, filePath), axis, spacingX, spacingY);
        switch(type) {
            case NONE: //a
            case HD: backdrop.scale.set(0.5,0.5);
            case UHD: backdrop.scale.set(0.25,0.25);
        }
        backdrop.velocity.set(scrollX, scrollY);
        backdrop.updateHitbox();
        return backdrop;
    }

    /**
        @param Path - The Path to the Sprite [String]
        @param Y - [Not Required] The X Position to set to [Float / Int]
        @param X - [Not Required] The Y Position to set to [Float / Int]
        @param Type - [Not Required] The Type of Sprite (none is just the smallest sprite with low detail). HD is bigger with more quality. UDH is very big with the best qualtiy [GJQualityType]
    **/
    public static function makeSprite(filePath:String, ?posX:Float = 0, ?posY:Float = 0, ?type:GJQualityType = GJQualityType.NONE) {
        var array = filePath.split('/');
        filePath += '/${array[array.length-1]}_001$type.png';
        if (!Assets.exists(filePath)) return new FlxSprite(posX, posY);
        var sprite:FlxSprite = new FlxSprite(posX, posY).loadGraphic(Assets.load(IMAGE, filePath));
        switch(type) {
            case NONE: //a
            case HD: sprite.scale.set(0.5,0.5);
            case UHD: sprite.scale.set(0.25,0.25);
        }
        sprite.updateHitbox();
        return sprite;
    }
}
/**
    @param NONE - Is basically the lowest quality. Returns "".
    @param HD - More quality so more memory. Returns "-hd".
    @param UHD - Holy shit too much quality. Returns "-uhd".
**/
enum abstract GJQualityType(String) to String from String {
    var NONE = "";
    var HD = "-hd";
    var UHD = "-uhd";
}