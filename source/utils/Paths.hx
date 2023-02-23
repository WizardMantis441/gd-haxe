package utils;
import sys.FileSystem;

class Paths {
	public static function assetsPath(path:String) {
        return FileSystem.absolutePath('assets/$path');
    }
    public static function image(path:String) {
        return Assets.load(IMAGE, assetsPath('images/$path.png'));
    }
    public static function sound(path:String) {
        return Assets.load(SOUND, assetsPath('sounds/$path.ogg'));
    }
    public static function music(path:String) {
        return Assets.load(SOUND, assetsPath('music/$path.ogg'));
    }
    public static function json(path:String) {
        return assetsPath('$path.json');
    }
    public static function levels(path:String) {
        return assetsPath('levels/$path');
    }
    /**
        @param File - The Folder name of the GD Sprite, the rest should be handled by GJSprites, if not using GJSprites, then this does not return .png [String]
        @param qual - The quality, meaning if it is HD or UHD, or just normal quality. [GJQualityType]
        @param Type - The Type of sprite, ex: the Ground or Background. [GJSpriteType]
    **/
    public static function getGJsprites(file:String, ?qual:GJQualityType = GJQualityType.NONE, ?type:GJSpriteType = GJSpriteType.GROUND) {
        file += '/${file}_001$qual.png';
        trace(file);
        trace('images/$type/$file');
        return Assets.load(IMAGE, assetsPath('images/$type/$file'));
    }
}

enum abstract GJSpriteType(String) to String from String {
    var GROUND = "grounds";
    var BG = "backgrounds";
}
enum abstract GJQualityType(String) to String from String {
    var NONE = "";
    var HD = "";
    var UHD = "";
}