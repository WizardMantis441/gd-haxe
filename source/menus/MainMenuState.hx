package menus;

import flixel.util.FlxColor;
import flixel.math.FlxMath;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.util.FlxAxes;
class MainMenuState extends State {
	var bg:FlxBackdrop;
	var floor:FlxBackdrop;

	var c = Assets.load(JSON, Paths.json("data/colors"));
	override public function create() {
		super.create();
		FlxSprite.defaultAntialiasing = true;

		bg = new FlxBackdrop(Paths.getGJsprites("game_bg_01", NONE, BG), FlxAxes.X, 0, 0);
		bg.velocity.x -= 100;
		floor = new FlxBackdrop(Paths.getGJsprites("groundSquare_01", NONE, GROUND), FlxAxes.X, 0, 0);
		floor.velocity.x -= 750;
		for (i in [bg, floor]) {
			i.color = c.colors[0];
			i.antialiasing = true;
			i.setGraphicSize(Std.int(i.width * 2));
			i.y = FlxG.height - i.height;
			add(i);
			tweenLoop(i);
		}
		floor.y += 50;
	}

	function tweenLoop(spr, ?beforNum:Int = 0) {
		var num = FlxMath.wrap(beforNum+1, 0, c.colors.length-1);
		FlxTween.color(spr, 5.0, c.colors[0], c.colors[num], {onComplete: function (twm:FlxTween) {
			num++;
			tweenLoop(spr, num);
		}});
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}
}