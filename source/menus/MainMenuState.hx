package menus;

import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.util.FlxAxes;
import utils.GJSprites;

class MainMenuState extends FlxState {
	var bg:FlxBackdrop;
	var floor:FlxBackdrop;

	override public function create() {
		super.create();

		// bg = new FlxBackdrop('assets/images/backgrounds/game_bg_01_001.png', FlxAxes.X, 0, 0);
		// bg.velocity.x -= 100;
		// floor = new FlxBackdrop('assets/images/grounds/groundSquare_01_001.png', FlxAxes.X, 0, 0);
		// floor.velocity.x -= 750;
		bg = GJSprites.makeBackdrop('assets/images/backgrounds/game_bg_01', FlxAxes.X, 0, 0, NONE, -100);
		floor = GJSprites.makeBackdrop('assets/images/grounds/groundSquare_01', FlxAxes.X, 0, 0, NONE, -750);
		for (i in [bg, floor]) {
			i.setGraphicSize(Std.int(i.width * 2));
			i.y = FlxG.height - i.height;
			add(i);
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		if (FlxG.keys.justPressed.L) uhh();
	}

	var swap:Bool = false;
	function uhh() {
		swap = !swap;
		floor.destroy();
		floor = GJSprites.makeBackdrop('assets/images/grounds/groundSquare_01', FlxAxes.X, 0, 0, (swap) ? NONE:UHD, -750);
		floor.setGraphicSize(Std.int(floor.width * 2));
		floor.y = FlxG.height - floor.height;
		add(floor);
	}
}