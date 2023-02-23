package menus;

import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.util.FlxAxes;
import game.State;

class MainMenuState extends State {
	var bg:FlxBackdrop;
	var floor:FlxBackdrop;

	override public function create() {
		super.create();
		FlxSprite.defaultAntialiasing = true;

		bg = new FlxBackdrop(Paths.getGJsprites("game_bg_01", NONE, BG), FlxAxes.X, 0, 0);
		bg.velocity.x -= 100;
		floor = new FlxBackdrop(Paths.getGJsprites("groundSquare_01", NONE, GROUND), FlxAxes.X, 0, 0);
		floor.velocity.x -= 750;
		for (i in [bg, floor]) {
			i.antialiasing = true;
			i.setGraphicSize(Std.int(i.width * 2));
			i.y = FlxG.height - i.height;
			add(i);
		}
		floor.y += 50;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}
}