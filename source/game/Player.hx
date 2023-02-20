package game;

import flixel.FlxSprite;

class Player extends FlxSprite {
    var isPlayer:Bool = true;
    var sprite:Int = 0;
    var color1:Int = 0;
    var color2:Int = 0;
    var trail:Int = 0;
    var hasGlow:Bool = false;
    var death:Int = 0;

    var iconCube:Int = 0;
    var iconShip:Int = 0;
    var iconBall:Int = 0;
    var iconUfo:Int = 0;
    var iconWave:Int = 0;
    var iconRobot:Int = 0;
    var iconSpider:Int = 0;


	override public function new() {
		super.create();
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}
}
