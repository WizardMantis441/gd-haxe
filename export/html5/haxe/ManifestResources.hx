package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_01_001-hd.pngR2i172708R3y5:IMAGER5R7R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_01_001-uhd.pngR2i386026R3R8R5R9R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_01_001.pngR2i46989R3R8R5R10R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_02_001-hd.pngR2i183307R3R8R5R11R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_02_001-uhd.pngR2i390044R3R8R5R12R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_02_001.pngR2i51242R3R8R5R13R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_03_001-hd.pngR2i179879R3R8R5R14R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_03_001-uhd.pngR2i708625R3R8R5R15R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_03_001.pngR2i49043R3R8R5R16R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_04_001-hd.pngR2i175390R3R8R5R17R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_04_001-uhd.pngR2i680210R3R8R5R18R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_04_001.pngR2i49162R3R8R5R19R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_05_001-hd.pngR2i185444R3R8R5R20R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_05_001-uhd.pngR2i716588R3R8R5R21R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_05_001.pngR2i51309R3R8R5R22R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_06_001-hd.pngR2i173984R3R8R5R23R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_06_001-uhd.pngR2i691317R3R8R5R24R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_06_001.pngR2i47991R3R8R5R25R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_07_001-hd.pngR2i177979R3R8R5R26R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_07_001-uhd.pngR2i694219R3R8R5R27R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_07_001.pngR2i46222R3R8R5R28R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_08_001-hd.pngR2i122911R3R8R5R29R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_08_001-uhd.pngR2i449397R3R8R5R30R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_08_001.pngR2i36685R3R8R5R31R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_09_001-hd.pngR2i136794R3R8R5R32R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_09_001-uhd.pngR2i466926R3R8R5R33R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_09_001.pngR2i41810R3R8R5R34R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_10_001-hd.pngR2i257991R3R8R5R35R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_10_001-uhd.pngR2i236852R3R8R5R36R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_10_001.pngR2i66150R3R8R5R37R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_11_001-hd.pngR2i182137R3R8R5R38R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_11_001-uhd.pngR2i669597R3R8R5R39R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_11_001.pngR2i49847R3R8R5R40R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_12_001-hd.pngR2i121453R3R8R5R41R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_12_001-uhd.pngR2i438249R3R8R5R42R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_12_001.pngR2i35335R3R8R5R43R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_13_001-hd.pngR2i5882R3R8R5R44R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_13_001-uhd.pngR2i22222R3R8R5R45R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_13_001.pngR2i4416R3R8R5R46R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_14_001-hd.pngR2i177155R3R8R5R47R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_14_001-uhd.pngR2i246025R3R8R5R48R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_14_001.pngR2i50254R3R8R5R49R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_15_001-hd.pngR2i88683R3R8R5R50R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_15_001-uhd.pngR2i133570R3R8R5R51R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_15_001.pngR2i25340R3R8R5R52R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_16_001-hd.pngR2i52439R3R8R5R53R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_16_001-uhd.pngR2i188513R3R8R5R54R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_16_001.pngR2i15621R3R8R5R55R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_17_001-hd.pngR2i91923R3R8R5R56R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_17_001-uhd.pngR2i137576R3R8R5R57R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_17_001.pngR2i28612R3R8R5R58R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_18_001-hd.pngR2i106161R3R8R5R59R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_18_001-uhd.pngR2i155872R3R8R5R60R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_18_001.pngR2i31393R3R8R5R61R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_19_001-hd.pngR2i106477R3R8R5R62R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_19_001-uhd.pngR2i155397R3R8R5R63R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_19_001.pngR2i32533R3R8R5R64R6tgoR0y53:assets%2Fimages%2Fbackgrounds%2Fgame_bg_20_001-hd.pngR2i74012R3R8R5R65R6tgoR0y54:assets%2Fimages%2Fbackgrounds%2Fgame_bg_20_001-uhd.pngR2i114473R3R8R5R66R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fgame_bg_20_001.pngR2i21425R3R8R5R67R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_01_001-hd.pngR2i10106R3R8R5R68R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_01_001-uhd.pngR2i37843R3R8R5R69R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_01_001.pngR2i2851R3R8R5R70R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_02_001-hd.pngR2i11186R3R8R5R71R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_02_001-uhd.pngR2i42907R3R8R5R72R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_02_001.pngR2i3459R3R8R5R73R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_03_001-hd.pngR2i10323R3R8R5R74R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_03_001-uhd.pngR2i38418R3R8R5R75R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_03_001.pngR2i2986R3R8R5R76R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_04_001-hd.pngR2i11312R3R8R5R77R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_04_001-uhd.pngR2i43378R3R8R5R78R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_04_001.pngR2i3548R3R8R5R79R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_05_001-hd.pngR2i12468R3R8R5R80R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_05_001-uhd.pngR2i46083R3R8R5R81R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_05_001.pngR2i3708R3R8R5R82R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_06_001-hd.pngR2i10524R3R8R5R83R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_06_001-uhd.pngR2i41585R3R8R5R84R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_06_001.pngR2i3131R3R8R5R85R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_07_001-hd.pngR2i12516R3R8R5R86R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_07_001-uhd.pngR2i46200R3R8R5R87R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_07_001.pngR2i3674R3R8R5R88R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_08_001-hd.pngR2i8565R3R8R5R89R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_08_001-uhd.pngR2i28586R3R8R5R90R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_08_001.pngR2i2834R3R8R5R91R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_08_2_001-hd.pngR2i1904R3R8R5R92R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_08_2_001-uhd.pngR2i5467R3R8R5R93R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_08_2_001.pngR2i825R3R8R5R94R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_09_001-hd.pngR2i7671R3R8R5R95R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_09_001-uhd.pngR2i26034R3R8R5R96R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_09_001.pngR2i2592R3R8R5R97R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_09_2_001-hd.pngR2i1388R3R8R5R98R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_09_2_001-uhd.pngR2i3845R3R8R5R99R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_09_2_001.pngR2i694R3R8R5R100R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_10_001-hd.pngR2i2801R3R8R5R101R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_10_001-uhd.pngR2i9137R3R8R5R102R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_10_001.pngR2i1054R3R8R5R103R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_10_2_001-hd.pngR2i595R3R8R5R104R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_10_2_001-uhd.pngR2i1606R3R8R5R105R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_10_2_001.pngR2i324R3R8R5R106R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_11_001-hd.pngR2i10863R3R8R5R107R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_11_001-uhd.pngR2i33318R3R8R5R108R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_11_001.pngR2i3802R3R8R5R109R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_11_2_001-hd.pngR2i1143R3R8R5R110R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_11_2_001-uhd.pngR2i3230R3R8R5R111R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_11_2_001.pngR2i482R3R8R5R112R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_12_001-hd.pngR2i11069R3R8R5R113R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_12_001-uhd.pngR2i260133R3R8R5R114R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_12_001.pngR2i3858R3R8R5R115R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_12_2_001-hd.pngR2i2841R3R8R5R116R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_12_2_001-uhd.pngR2i63584R3R8R5R117R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_12_2_001.pngR2i1209R3R8R5R118R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_13_001-hd.pngR2i9416R3R8R5R119R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_13_001-uhd.pngR2i27219R3R8R5R120R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_13_001.pngR2i3128R3R8R5R121R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_13_2_001-hd.pngR2i1516R3R8R5R122R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_13_2_001-uhd.pngR2i51261R3R8R5R123R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_13_2_001.pngR2i832R3R8R5R124R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_14_001-hd.pngR2i10808R3R8R5R125R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_14_001-uhd.pngR2i256319R3R8R5R126R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_14_001.pngR2i3829R3R8R5R127R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_14_2_001-hd.pngR2i2521R3R8R5R128R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_14_2_001-uhd.pngR2i76711R3R8R5R129R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_14_2_001.pngR2i1215R3R8R5R130R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_15_001-hd.pngR2i11428R3R8R5R131R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_15_001-uhd.pngR2i30080R3R8R5R132R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_15_001.pngR2i3640R3R8R5R133R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_15_2_001-hd.pngR2i4450R3R8R5R134R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_15_2_001-uhd.pngR2i59930R3R8R5R135R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_15_2_001.pngR2i1648R3R8R5R136R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_16_001-hd.pngR2i6970R3R8R5R137R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_16_001-uhd.pngR2i25442R3R8R5R138R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_16_001.pngR2i2046R3R8R5R139R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_16_2_001-hd.pngR2i4434R3R8R5R140R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_16_2_001-uhd.pngR2i61849R3R8R5R141R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_16_2_001.pngR2i1592R3R8R5R142R6tgoR0y54:assets%2Fimages%2Fgrounds%2FgroundSquare_17_001-hd.pngR2i8592R3R8R5R143R6tgoR0y55:assets%2Fimages%2Fgrounds%2FgroundSquare_17_001-uhd.pngR2i26151R3R8R5R144R6tgoR0y51:assets%2Fimages%2Fgrounds%2FgroundSquare_17_001.pngR2i2763R3R8R5R145R6tgoR0y56:assets%2Fimages%2Fgrounds%2FgroundSquare_17_2_001-hd.pngR2i6216R3R8R5R146R6tgoR0y57:assets%2Fimages%2Fgrounds%2FgroundSquare_17_2_001-uhd.pngR2i91090R3R8R5R147R6tgoR0y53:assets%2Fimages%2Fgrounds%2FgroundSquare_17_2_001.pngR2i2150R3R8R5R148R6tgoR0y36:assets%2Fimages%2Fimages-go-here.txtR2zR3R4R5R149R6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R150R6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R151R6tgoR2i2114R3y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3y9:pathGroupaR153y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R152R5y28:flixel%2Fsounds%2Fflixel.mp3R154aR156y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3y5:SOUNDR5R155R154aR153R155hgoR2i33629R3R158R5R157R154aR156R157hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R159R160y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R8R5R165R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R8R5R166R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Fbox.pngR2i912R3R8R5R167R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fbutton.pngR2i433R3R8R5R168R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_down.pngR2i446R3R8R5R169R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_left.pngR2i459R3R8R5R170R6tgoR0y49:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_right.pngR2i511R3R8R5R171R6tgoR0y46:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_up.pngR2i493R3R8R5R172R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fbutton_thin.pngR2i247R3R8R5R173R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fbutton_toggle.pngR2i534R3R8R5R174R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fcheck_box.pngR2i922R3R8R5R175R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fcheck_mark.pngR2i946R3R8R5R176R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fchrome.pngR2i253R3R8R5R177R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fchrome_flat.pngR2i212R3R8R5R178R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_inset.pngR2i192R3R8R5R179R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_light.pngR2i214R3R8R5R180R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fdropdown_mark.pngR2i156R3R8R5R181R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Ffinger_big.pngR2i1724R3R8R5R182R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Ffinger_small.pngR2i294R3R8R5R183R6tgoR0y38:flixel%2Fflixel-ui%2Fimg%2Fhilight.pngR2i129R3R8R5R184R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Finvis.pngR2i128R3R8R5R185R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fminus_mark.pngR2i136R3R8R5R186R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fplus_mark.pngR2i147R3R8R5R187R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Fradio.pngR2i191R3R8R5R188R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fradio_dot.pngR2i153R3R8R5R189R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fswatch.pngR2i185R3R8R5R190R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Ftab.pngR2i201R3R8R5R191R6tgoR0y39:flixel%2Fflixel-ui%2Fimg%2Ftab_back.pngR2i210R3R8R5R192R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Ftooltip_arrow.pngR2i18509R3R8R5R193R6tgoR0y39:flixel%2Fflixel-ui%2Fxml%2Fdefaults.xmlR2i1263R3R4R5R194R6tgoR0y53:flixel%2Fflixel-ui%2Fxml%2Fdefault_loading_screen.xmlR2i1953R3R4R5R195R6tgoR0y44:flixel%2Fflixel-ui%2Fxml%2Fdefault_popup.xmlR2i1848R3R4R5R196R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_hd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_uhd_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/backgrounds/game_bg_01_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_01_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_01_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_01_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_02_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_02_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_02_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_02_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_03_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_03_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_03_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_03_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_04_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_04_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_04_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_04_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_05_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_05_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_05_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_05_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_06_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_06_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_06_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_06_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_07_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_07_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_07_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_07_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_08_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_08_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_08_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_08_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_09_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_09_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_09_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_09_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_10_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_10_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_10_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_10_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_11_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_11_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_11_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_11_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_12_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_12_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_12_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_12_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_13_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_13_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_13_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_13_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_14_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_14_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_14_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_14_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_15_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_15_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_15_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_15_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_16_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_16_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_16_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_16_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_17_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_17_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_17_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_17_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_18_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_18_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_18_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_18_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_19_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_19_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_19_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_19_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_20_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_20_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/backgrounds/game_bg_20_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_game_bg_20_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_01_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_01_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_01_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_01_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_02_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_02_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_02_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_02_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_03_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_03_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_03_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_03_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_04_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_04_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_04_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_04_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_05_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_05_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_05_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_05_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_06_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_06_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_06_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_06_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_07_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_07_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_07_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_07_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_08_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_08_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_09_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_09_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_10_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_10_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_11_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_11_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_12_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_12_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_13_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_13_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_14_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_14_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_15_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_15_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_16_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_16_2_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_001_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_2_001-hd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_hd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_2_001-uhd.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_uhd_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grounds/groundSquare_17_2_001.png") @:noCompletion #if display private #end class __ASSET__assets_images_grounds_groundsquare_17_2_001_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,1,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_down.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_left.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_right.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_up.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_thin.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_toggle.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_flat.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_inset.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_light.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/dropdown_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_big.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_small.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/hilight.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/invis.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/minus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/plus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio_dot.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/swatch.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab_back.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tooltip_arrow.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends lime.graphics.Image {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/defaults.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_loading_screen.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_popup.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end

#end