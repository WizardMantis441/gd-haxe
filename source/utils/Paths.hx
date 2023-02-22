package utils;
import sys.FileSystem;

class Paths {
	public static function assetsPath(path:String) {
        return FileSystem.absolutePath('assets/$path');
    }
    public static function image(path:String) {
        return assetsPath(Assets.load(IMAGE, 'images/$path.png'));
    }
    public static function sound(path:String) {
        return assetsPath(Assets.load(SOUND, 'sounds/$path.ogg'));
    }
    public static function music(path:String) {
        return assetsPath('music/$path.ogg');
    }
    public static function json(path:String) {
        return assetsPath('$path.json');
    }
    public static function levels(path:String) {
        return assetsPath('Levels/$path');
    }
    /**
        @param File - The Folder name of the GD Sprite, the rest should be handled by GJSprites, if not using GJSprites, then this does not return .png [String]
        @param Type - The Type of sprite, ex: the Ground or Background. [GJSpriteType]
    **/
    public static function getGJsprites(file:String, ?type:GJSpriteType = GJSpriteType.GROUND) {
        return assetsPath('images/$type/$file');
    }
}

enum abstract GJSpriteType(String) to String from String {
    var GROUND = "grounds";
    var BG = "backgrounds";
}