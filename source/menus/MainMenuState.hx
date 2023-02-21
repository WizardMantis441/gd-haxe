package menus;

import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.util.FlxAxes;

class MainMenuState extends FlxState {
	var bg:FlxBackdrop;
	var floor:FlxBackdrop;

	override public function create() {
		super.create();

		bg = new FlxBackdrop('assets/images/backgrounds/game_bg_01_001.png', FlxAxes.X, 0, 0);
		bg.velocity.x -= 100;
		floor = new FlxBackdrop('assets/images/grounds/groundSquare_01_001.png', FlxAxes.X, 0, 0);
		floor.velocity.x -= 750;
		for (i in [bg, floor]) {
			i.setGraphicSize(Std.int(i.width * 2));
			i.y = FlxG.height - i.height;
			add(i);
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
	}
}