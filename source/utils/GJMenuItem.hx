package utils;
import flixel.FlxSprite;

class GJMenuSprite {
  function new() {}
  /**
  * @param Name - The name of the sprite, instead of doing sprite.loadGraphic since its not a single image. Its in an XML or PLIST [String]
  * @param xPos - [Not Required] Sets the X position of the sprite [Int / Float]
  * @param yPos - [Not Required] Sets the Y position of the sprite [Int / Float]
  **/
  // public var sprite:FlxSprite;
  public function addMenuSprite(name:String, ?xPos:Float = 0, ?yPos:Float = 0) {
    var sprite = new FlxSprite(xPos,yPos); // since we don't have a way of loading it returns basically a HaxeFlixel Logo.
    sprite.frames = Assets.load(Paths.image("GJ_")); // fix later
    return sprite;
  }
}

enum abstract GJMenuType(String) to String from String {
  var playButton = "playButton";
}
