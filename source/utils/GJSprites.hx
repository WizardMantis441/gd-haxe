package utils;

import flixel.FlxSprite;
import flixel.util.FlxAxes;
import flixel.addons.display.FlxBackdrop;
import openfl.utils.Assets;

class GJSprites {
    public function new() {}
    /**
        @param Path - The Path to the Sprite [String]
        @param Axis - The Axis it wraps around [FlxAxes]
        @param SpacingX - [Not Required] The Pixels it moves to combat pixel gaps or any gaps in general [Int]
        @param SpacingY - [Not Required] The Pixels it moves to combat pixel gaps or any gaps in general [Int]
        @param Type - [Not Required] The Type of Sprite (none is just the smallest sprite with low detail). HD is bigger with more quality. UDH is very big with the best qualtiy [GJSpriteType]
        @param ScrollX - [Not Required] The Velocity It travels, Positive Goes Right, Negitive goes Left. [Float or Int]
        @param ScrollY - [Not Required] The Velocity It travels, Positive Goes Right, Negitive goes Left. [Float or Int]
    **/
    public static function makeBackdrop(filePath:String, axis:FlxAxes = FlxAxes.XY, ?spacingX:Int = 0, ?spacingY:Int = 0,
    ?type:GJSpriteType = GJSpriteType.NONE, ?scrollX:Float = 0.0, ?scrollY:Float = 0.0) {
        var array = filePath.split('/');
        filePath += '/${array[array.length-1]}_001$type.png';
        if (!Assets.exists(filePath)) return new FlxBackdrop();
        var backdrop:FlxBackdrop = new FlxBackdrop(filePath, axis, spacingX, spacingY);
        switch(type) {
            case NONE: //a
            case HD: backdrop.scale.set(0.5,0.5);
            case UHD: //a
        }
        backdrop.velocity.set(scrollX, scrollY);
        backdrop.updateHitbox();
        return backdrop;
    }

    public static function makeSprite(filePath:String, ?posX:Float = 0, ?posY:Float = 0, ?type:GJSpriteType = GJSpriteType.NONE) {
        var array = filePath.split('/');
        filePath += '/${array[array.length-1]}_001$type.png';
        if (!Assets.exists(filePath)) return new FlxSprite();
        var sprite:FlxSprite = new FlxSprite(posX, posY).loadGraphic(filePath);
        switch(type) {
            case NONE: //a
            case HD: sprite.scale.set(0.5,0.5);
            case UHD: //a
        }
        sprite.updateHitbox();
        return sprite;
    }
}

enum abstract GJSpriteType(String) {
	var NONE = "";
	var HD = "-hd";
	var UHD = "-uhd";
	var self(get, never):GJSpriteType;
	
	inline function get_self():GJSpriteType return cast this;

	inline function get_none() return self == NONE;
	inline function get_hd() return self == HD;
	inline function get_uhd() return self == UHD;
	
	public function toString():String {
		return switch self {
			case NONE: "none";
			case HD: "-hd";
			case UHD: "-uhd";
		}
	}
	public static function fromString(type:String):GJSpriteType {
		return switch type.toLowerCase() {
			case "none": NONE;
			case "hd": HD;
			case "uhd": UHD;
			default : throw 'Type $type does not exist';
		}
	}
}