package utils;
import flixel.FlxSprite;

class GJMenuSprite {
  function new() {}
  /**
  * @param Name - The name of the sprite, instead of doing sprite.loadGraphic since its not a single image. Its in an XML or PLIST [String]
  * @param xPos - [Not Required] Sets the X position of the sprite [Int / Float]
  * @param yPos - [Not Required] Sets the Y position of the sprite [Int / Float]
  * @param MouseDown - [Not Required] A Callback Function that runs when the mouse is clicked down on the sprite [Function]
  * @param MouseUp - [Not Required] A Callback Function that runs when the mouse is clicked down, then released on the sprite [Function]
  * @param MouseOver - [Not Required] A Callback Function that runs when the mouse is over the sprite [Function]
  * @param MouseOut - [Not Required] A Callback Function that runs when the mouse is no longer over the sprite. this means even if the mouse hasn't touched the sprite at all,
  it will still run the function. I think not sure.
  **/
  // public var sprite:FlxSprite;
  public function addMenuSprite(name:String, ?xPos:Float = 0, ?yPos:Float = 0) {
    var sprite = new FlxSprite(xPos,yPos); // since we don't have a way of loading it returns basically a HaxeFlixel Logo.
    return sprite;
  }
}

/*
 - So this will help make menu items like switching states or smth,
 - Have the Sprite using FlxMouseEventManager that allows us to control specific items, like when mouse is hovering over sprite.
 - be able to set functions in the new that will apply to the Manager
*/
