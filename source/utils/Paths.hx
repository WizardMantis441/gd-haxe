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
}

enum abstract GJSpriteType(String) to String from String {
    var GROUND = "grounds";
    var BG = "backgrounds";
}