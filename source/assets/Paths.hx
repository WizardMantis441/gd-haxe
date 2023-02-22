package assets;
import sys.FileSystem;

class Paths {
	public static function assetsPath(path:String) {
        return FileSystem.absolutePath('assets/$path');
    }
    public static function image(path:String) {
        return assetsPath('images/$path.png');
    }
    public static function sound(path:String) {
        return assetsPath('sounds/$path.ogg');
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
}