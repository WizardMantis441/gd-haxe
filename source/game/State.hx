package game;
import flixel.addons.ui.FlxUIState;
class State extends FlxUIState {
    override function create() {
        super.create();
        Mem.clear();
    }
    override function destroy() {
        super.destroy();
    }
}