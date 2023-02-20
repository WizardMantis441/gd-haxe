#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_93_fromInt,"flixel.util._FlxColor.FlxColor_Impl_","fromInt",0xdc40c740,"flixel.util._FlxColor.FlxColor_Impl_.fromInt","flixel/util/FlxColor.hx",93,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_106_fromRGB,"flixel.util._FlxColor.FlxColor_Impl_","fromRGB",0xdc47795e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGB","flixel/util/FlxColor.hx",106,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_121_fromRGBFloat,"flixel.util._FlxColor.FlxColor_Impl_","fromRGBFloat",0x9c52075e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGBFloat","flixel/util/FlxColor.hx",121,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_137_fromCMYK,"flixel.util._FlxColor.FlxColor_Impl_","fromCMYK",0xd85d276b,"flixel.util._FlxColor.FlxColor_Impl_.fromCMYK","flixel/util/FlxColor.hx",137,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_152_fromHSB,"flixel.util._FlxColor.FlxColor_Impl_","fromHSB",0xdc3fed48,"flixel.util._FlxColor.FlxColor_Impl_.fromHSB","flixel/util/FlxColor.hx",152,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_167_fromHSL,"flixel.util._FlxColor.FlxColor_Impl_","fromHSL",0xdc3fed52,"flixel.util._FlxColor.FlxColor_Impl_.fromHSL","flixel/util/FlxColor.hx",167,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_188_fromString,"flixel.util._FlxColor.FlxColor_Impl_","fromString",0x7279f720,"flixel.util._FlxColor.FlxColor_Impl_.fromString","flixel/util/FlxColor.hx",188,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_225_getHSBColorWheel,"flixel.util._FlxColor.FlxColor_Impl_","getHSBColorWheel",0xaedeb29e,"flixel.util._FlxColor.FlxColor_Impl_.getHSBColorWheel","flixel/util/FlxColor.hx",225,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_237_interpolate,"flixel.util._FlxColor.FlxColor_Impl_","interpolate",0x463d27dc,"flixel.util._FlxColor.FlxColor_Impl_.interpolate","flixel/util/FlxColor.hx",237,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_256_gradient,"flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",256,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_263_gradient,"flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",263,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_281_multiply,"flixel.util._FlxColor.FlxColor_Impl_","multiply",0xd3736029,"flixel.util._FlxColor.FlxColor_Impl_.multiply","flixel/util/FlxColor.hx",281,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_290_add,"flixel.util._FlxColor.FlxColor_Impl_","add",0x199e323c,"flixel.util._FlxColor.FlxColor_Impl_.add","flixel/util/FlxColor.hx",290,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_299_subtract,"flixel.util._FlxColor.FlxColor_Impl_","subtract",0x30f7f319,"flixel.util._FlxColor.FlxColor_Impl_.subtract","flixel/util/FlxColor.hx",299,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_310_getComplementHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getComplementHarmony",0xe82411cf,"flixel.util._FlxColor.FlxColor_Impl_.getComplementHarmony","flixel/util/FlxColor.hx",310,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_321_getAnalogousHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getAnalogousHarmony",0x6a6ddffa,"flixel.util._FlxColor.FlxColor_Impl_.getAnalogousHarmony","flixel/util/FlxColor.hx",321,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_336_getSplitComplementHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getSplitComplementHarmony",0x65102b17,"flixel.util._FlxColor.FlxColor_Impl_.getSplitComplementHarmony","flixel/util/FlxColor.hx",336,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_351_getTriadicHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getTriadicHarmony",0x8ea1774f,"flixel.util._FlxColor.FlxColor_Impl_.getTriadicHarmony","flixel/util/FlxColor.hx",351,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_365_to24Bit,"flixel.util._FlxColor.FlxColor_Impl_","to24Bit",0xaa37506b,"flixel.util._FlxColor.FlxColor_Impl_.to24Bit","flixel/util/FlxColor.hx",365,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_377_toHexString,"flixel.util._FlxColor.FlxColor_Impl_","toHexString",0x94bdbc2c,"flixel.util._FlxColor.FlxColor_Impl_.toHexString","flixel/util/FlxColor.hx",377,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_388_toWebString,"flixel.util._FlxColor.FlxColor_Impl_","toWebString",0x5e0aaea5,"flixel.util._FlxColor.FlxColor_Impl_.toWebString","flixel/util/FlxColor.hx",388,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_397_getColorInfo,"flixel.util._FlxColor.FlxColor_Impl_","getColorInfo",0x327dc480,"flixel.util._FlxColor.FlxColor_Impl_.getColorInfo","flixel/util/FlxColor.hx",397,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_416_getDarkened,"flixel.util._FlxColor.FlxColor_Impl_","getDarkened",0xd9fa3a4f,"flixel.util._FlxColor.FlxColor_Impl_.getDarkened","flixel/util/FlxColor.hx",416,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_430_getLightened,"flixel.util._FlxColor.FlxColor_Impl_","getLightened",0xe2b011ed,"flixel.util._FlxColor.FlxColor_Impl_.getLightened","flixel/util/FlxColor.hx",430,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_443_getInverted,"flixel.util._FlxColor.FlxColor_Impl_","getInverted",0x422fc6c6,"flixel.util._FlxColor.FlxColor_Impl_.getInverted","flixel/util/FlxColor.hx",443,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_460_setRGB,"flixel.util._FlxColor.FlxColor_Impl_","setRGB",0x421acf50,"flixel.util._FlxColor.FlxColor_Impl_.setRGB","flixel/util/FlxColor.hx",460,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_478_setRGBFloat,"flixel.util._FlxColor.FlxColor_Impl_","setRGBFloat",0x51a7e42c,"flixel.util._FlxColor.FlxColor_Impl_.setRGBFloat","flixel/util/FlxColor.hx",478,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_497_setCMYK,"flixel.util._FlxColor.FlxColor_Impl_","setCMYK",0x8b750539,"flixel.util._FlxColor.FlxColor_Impl_.setCMYK","flixel/util/FlxColor.hx",497,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_515_setHSB,"flixel.util._FlxColor.FlxColor_Impl_","setHSB",0x4213433a,"flixel.util._FlxColor.FlxColor_Impl_.setHSB","flixel/util/FlxColor.hx",515,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_531_setHSL,"flixel.util._FlxColor.FlxColor_Impl_","setHSL",0x42134344,"flixel.util._FlxColor.FlxColor_Impl_.setHSL","flixel/util/FlxColor.hx",531,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_541_setHSChromaMatch,"flixel.util._FlxColor.FlxColor_Impl_","setHSChromaMatch",0x8f5af4c7,"flixel.util._FlxColor.FlxColor_Impl_.setHSChromaMatch","flixel/util/FlxColor.hx",541,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_566__new,"flixel.util._FlxColor.FlxColor_Impl_","_new",0x4f82ece6,"flixel.util._FlxColor.FlxColor_Impl_._new","flixel/util/FlxColor.hx",566,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_576_getThis,"flixel.util._FlxColor.FlxColor_Impl_","getThis",0xa3c49faf,"flixel.util._FlxColor.FlxColor_Impl_.getThis","flixel/util/FlxColor.hx",576,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_581_validate,"flixel.util._FlxColor.FlxColor_Impl_","validate",0x3dca4e9b,"flixel.util._FlxColor.FlxColor_Impl_.validate","flixel/util/FlxColor.hx",581,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_589_get_red,"flixel.util._FlxColor.FlxColor_Impl_","get_red",0xab118b83,"flixel.util._FlxColor.FlxColor_Impl_.get_red","flixel/util/FlxColor.hx",589,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_594_get_green,"flixel.util._FlxColor.FlxColor_Impl_","get_green",0x6e5e3175,"flixel.util._FlxColor.FlxColor_Impl_.get_green","flixel/util/FlxColor.hx",594,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_599_get_blue,"flixel.util._FlxColor.FlxColor_Impl_","get_blue",0xf9ba7c28,"flixel.util._FlxColor.FlxColor_Impl_.get_blue","flixel/util/FlxColor.hx",599,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_604_get_alpha,"flixel.util._FlxColor.FlxColor_Impl_","get_alpha",0xf607ca10,"flixel.util._FlxColor.FlxColor_Impl_.get_alpha","flixel/util/FlxColor.hx",604,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_609_get_redFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_redFloat",0x28fb0f19,"flixel.util._FlxColor.FlxColor_Impl_.get_redFloat","flixel/util/FlxColor.hx",609,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_614_get_greenFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_greenFloat",0x97159be7,"flixel.util._FlxColor.FlxColor_Impl_.get_greenFloat","flixel/util/FlxColor.hx",614,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_619_get_blueFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_blueFloat",0x58cea854,"flixel.util._FlxColor.FlxColor_Impl_.get_blueFloat","flixel/util/FlxColor.hx",619,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_624_get_alphaFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_alphaFloat",0xe2f5f16c,"flixel.util._FlxColor.FlxColor_Impl_.get_alphaFloat","flixel/util/FlxColor.hx",624,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_628_set_red,"flixel.util._FlxColor.FlxColor_Impl_","set_red",0x9e131c8f,"flixel.util._FlxColor.FlxColor_Impl_.set_red","flixel/util/FlxColor.hx",628,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_636_set_green,"flixel.util._FlxColor.FlxColor_Impl_","set_green",0x51af1d81,"flixel.util._FlxColor.FlxColor_Impl_.set_green","flixel/util/FlxColor.hx",636,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_644_set_blue,"flixel.util._FlxColor.FlxColor_Impl_","set_blue",0xa817d59c,"flixel.util._FlxColor.FlxColor_Impl_.set_blue","flixel/util/FlxColor.hx",644,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_652_set_alpha,"flixel.util._FlxColor.FlxColor_Impl_","set_alpha",0xd958b61c,"flixel.util._FlxColor.FlxColor_Impl_.set_alpha","flixel/util/FlxColor.hx",652,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_660_set_redFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_redFloat",0x3df4328d,"flixel.util._FlxColor.FlxColor_Impl_.set_redFloat","flixel/util/FlxColor.hx",660,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_666_set_greenFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_greenFloat",0xb735845b,"flixel.util._FlxColor.FlxColor_Impl_.set_greenFloat","flixel/util/FlxColor.hx",666,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_672_set_blueFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_blueFloat",0x9dd48a60,"flixel.util._FlxColor.FlxColor_Impl_.set_blueFloat","flixel/util/FlxColor.hx",672,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_678_set_alphaFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_alphaFloat",0x0315d9e0,"flixel.util._FlxColor.FlxColor_Impl_.set_alphaFloat","flixel/util/FlxColor.hx",678,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_685_get_cyan,"flixel.util._FlxColor.FlxColor_Impl_","get_cyan",0xfa6d7eb1,"flixel.util._FlxColor.FlxColor_Impl_.get_cyan","flixel/util/FlxColor.hx",685,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_690_get_magenta,"flixel.util._FlxColor.FlxColor_Impl_","get_magenta",0xbba26d5b,"flixel.util._FlxColor.FlxColor_Impl_.get_magenta","flixel/util/FlxColor.hx",690,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_695_get_yellow,"flixel.util._FlxColor.FlxColor_Impl_","get_yellow",0xdee9d882,"flixel.util._FlxColor.FlxColor_Impl_.get_yellow","flixel/util/FlxColor.hx",695,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_700_get_black,"flixel.util._FlxColor.FlxColor_Impl_","get_black",0x8962f871,"flixel.util._FlxColor.FlxColor_Impl_.get_black","flixel/util/FlxColor.hx",700,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_704_set_cyan,"flixel.util._FlxColor.FlxColor_Impl_","set_cyan",0xa8cad825,"flixel.util._FlxColor.FlxColor_Impl_.set_cyan","flixel/util/FlxColor.hx",704,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_710_set_magenta,"flixel.util._FlxColor.FlxColor_Impl_","set_magenta",0xc60f7467,"flixel.util._FlxColor.FlxColor_Impl_.set_magenta","flixel/util/FlxColor.hx",710,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_716_set_yellow,"flixel.util._FlxColor.FlxColor_Impl_","set_yellow",0xe26776f6,"flixel.util._FlxColor.FlxColor_Impl_.set_yellow","flixel/util/FlxColor.hx",716,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_722_set_black,"flixel.util._FlxColor.FlxColor_Impl_","set_black",0x6cb3e47d,"flixel.util._FlxColor.FlxColor_Impl_.set_black","flixel/util/FlxColor.hx",722,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_728_get_hue,"flixel.util._FlxColor.FlxColor_Impl_","get_hue",0xab0a02ea,"flixel.util._FlxColor.FlxColor_Impl_.get_hue","flixel/util/FlxColor.hx",728,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_741_get_brightness,"flixel.util._FlxColor.FlxColor_Impl_","get_brightness",0x252b65df,"flixel.util._FlxColor.FlxColor_Impl_.get_brightness","flixel/util/FlxColor.hx",741,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_746_get_saturation,"flixel.util._FlxColor.FlxColor_Impl_","get_saturation",0xb65babe0,"flixel.util._FlxColor.FlxColor_Impl_.get_saturation","flixel/util/FlxColor.hx",746,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_751_get_lightness,"flixel.util._FlxColor.FlxColor_Impl_","get_lightness",0x5544981f,"flixel.util._FlxColor.FlxColor_Impl_.get_lightness","flixel/util/FlxColor.hx",751,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_755_set_hue,"flixel.util._FlxColor.FlxColor_Impl_","set_hue",0x9e0b93f6,"flixel.util._FlxColor.FlxColor_Impl_.set_hue","flixel/util/FlxColor.hx",755,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_761_set_saturation,"flixel.util._FlxColor.FlxColor_Impl_","set_saturation",0xd67b9454,"flixel.util._FlxColor.FlxColor_Impl_.set_saturation","flixel/util/FlxColor.hx",761,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_767_set_brightness,"flixel.util._FlxColor.FlxColor_Impl_","set_brightness",0x454b4e53,"flixel.util._FlxColor.FlxColor_Impl_.set_brightness","flixel/util/FlxColor.hx",767,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_773_set_lightness,"flixel.util._FlxColor.FlxColor_Impl_","set_lightness",0x9a4a7a2b,"flixel.util._FlxColor.FlxColor_Impl_.set_lightness","flixel/util/FlxColor.hx",773,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_779_set_rgb,"flixel.util._FlxColor.FlxColor_Impl_","set_rgb",0x9e131e4b,"flixel.util._FlxColor.FlxColor_Impl_.set_rgb","flixel/util/FlxColor.hx",779,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_787_get_rgb,"flixel.util._FlxColor.FlxColor_Impl_","get_rgb",0xab118d3f,"flixel.util._FlxColor.FlxColor_Impl_.get_rgb","flixel/util/FlxColor.hx",787,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_792_maxColor,"flixel.util._FlxColor.FlxColor_Impl_","maxColor",0x2d604224,"flixel.util._FlxColor.FlxColor_Impl_.maxColor","flixel/util/FlxColor.hx",792,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_797_minColor,"flixel.util._FlxColor.FlxColor_Impl_","minColor",0x7a7a5c76,"flixel.util._FlxColor.FlxColor_Impl_.minColor","flixel/util/FlxColor.hx",797,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_802_boundChannel,"flixel.util._FlxColor.FlxColor_Impl_","boundChannel",0x855280aa,"flixel.util._FlxColor.FlxColor_Impl_.boundChannel","flixel/util/FlxColor.hx",802,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_20_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",20,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_21_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",21,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_22_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",22,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_23_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",23,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_25_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",25,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_26_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",26,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_27_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",27,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_28_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",28,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_29_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",29,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_30_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",30,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_31_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",31,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_32_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",32,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_33_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",33,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_34_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",34,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_35_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",35,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_0c1a490149f50aaa_54_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_83_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",83,0x9335c333)
namespace flixel{
namespace util{
namespace _FlxColor{

void FlxColor_Impl__obj::__construct() { }

Dynamic FlxColor_Impl__obj::__CreateEmpty() { return new FlxColor_Impl__obj; }

void *FlxColor_Impl__obj::_hx_vtable = 0;

Dynamic FlxColor_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxColor_Impl__obj > _hx_result = new FlxColor_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxColor_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b84291f;
}

int FlxColor_Impl__obj::TRANSPARENT;

int FlxColor_Impl__obj::WHITE;

int FlxColor_Impl__obj::GRAY;

int FlxColor_Impl__obj::BLACK;

int FlxColor_Impl__obj::GREEN;

int FlxColor_Impl__obj::LIME;

int FlxColor_Impl__obj::YELLOW;

int FlxColor_Impl__obj::ORANGE;

int FlxColor_Impl__obj::RED;

int FlxColor_Impl__obj::PURPLE;

int FlxColor_Impl__obj::BLUE;

int FlxColor_Impl__obj::BROWN;

int FlxColor_Impl__obj::PINK;

int FlxColor_Impl__obj::MAGENTA;

int FlxColor_Impl__obj::CYAN;

 ::haxe::ds::StringMap FlxColor_Impl__obj::colorLookup;

 ::EReg FlxColor_Impl__obj::COLOR_REGEX;

int FlxColor_Impl__obj::fromInt(int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_93_fromInt)
HXDLIN(  93)		return ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(Value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromInt,return )

int FlxColor_Impl__obj::fromRGB(int Red,int Green,int Blue,::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_106_fromRGB)
HXLINE( 107)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 108)		{
HXLINE( 108)			color = (color & -16711681);
HXDLIN( 108)			int color1;
HXDLIN( 108)			if ((Red > 255)) {
HXLINE( 108)				color1 = 255;
            			}
            			else {
HXLINE( 108)				if ((Red < 0)) {
HXLINE( 108)					color1 = 0;
            				}
            				else {
HXLINE( 108)					color1 = Red;
            				}
            			}
HXDLIN( 108)			color = (color | (color1 << 16));
            		}
HXDLIN( 108)		{
HXLINE( 108)			color = (color & -65281);
HXDLIN( 108)			int color2;
HXDLIN( 108)			if ((Green > 255)) {
HXLINE( 108)				color2 = 255;
            			}
            			else {
HXLINE( 108)				if ((Green < 0)) {
HXLINE( 108)					color2 = 0;
            				}
            				else {
HXLINE( 108)					color2 = Green;
            				}
            			}
HXDLIN( 108)			color = (color | (color2 << 8));
            		}
HXDLIN( 108)		{
HXLINE( 108)			color = (color & -256);
HXDLIN( 108)			int color3;
HXDLIN( 108)			if ((Blue > 255)) {
HXLINE( 108)				color3 = 255;
            			}
            			else {
HXLINE( 108)				if ((Blue < 0)) {
HXLINE( 108)					color3 = 0;
            				}
            				else {
HXLINE( 108)					color3 = Blue;
            				}
            			}
HXDLIN( 108)			color = (color | color3);
            		}
HXDLIN( 108)		{
HXLINE( 108)			color = (color & 16777215);
HXDLIN( 108)			int color4;
HXDLIN( 108)			if ((Alpha > 255)) {
HXLINE( 108)				color4 = 255;
            			}
            			else {
HXLINE( 108)				if ((Alpha < 0)) {
HXLINE( 108)					color4 = 0;
            				}
            				else {
HXLINE( 108)					color4 = Alpha;
            				}
            			}
HXDLIN( 108)			color = (color | (color4 << 24));
            		}
HXDLIN( 108)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGB,return )

int FlxColor_Impl__obj::fromRGBFloat(Float Red,Float Green,Float Blue,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_121_fromRGBFloat)
HXLINE( 122)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 123)		{
HXLINE( 123)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 123)			color = (color & -16711681);
HXDLIN( 123)			int color1;
HXDLIN( 123)			if ((Value > 255)) {
HXLINE( 123)				color1 = 255;
            			}
            			else {
HXLINE( 123)				if ((Value < 0)) {
HXLINE( 123)					color1 = 0;
            				}
            				else {
HXLINE( 123)					color1 = Value;
            				}
            			}
HXDLIN( 123)			color = (color | (color1 << 16));
            		}
HXDLIN( 123)		{
HXLINE( 123)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 123)			color = (color & -65281);
HXDLIN( 123)			int color2;
HXDLIN( 123)			if ((Value1 > 255)) {
HXLINE( 123)				color2 = 255;
            			}
            			else {
HXLINE( 123)				if ((Value1 < 0)) {
HXLINE( 123)					color2 = 0;
            				}
            				else {
HXLINE( 123)					color2 = Value1;
            				}
            			}
HXDLIN( 123)			color = (color | (color2 << 8));
            		}
HXDLIN( 123)		{
HXLINE( 123)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 123)			color = (color & -256);
HXDLIN( 123)			int color3;
HXDLIN( 123)			if ((Value2 > 255)) {
HXLINE( 123)				color3 = 255;
            			}
            			else {
HXLINE( 123)				if ((Value2 < 0)) {
HXLINE( 123)					color3 = 0;
            				}
            				else {
HXLINE( 123)					color3 = Value2;
            				}
            			}
HXDLIN( 123)			color = (color | color3);
            		}
HXDLIN( 123)		{
HXLINE( 123)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 123)			color = (color & 16777215);
HXDLIN( 123)			int color4;
HXDLIN( 123)			if ((Value3 > 255)) {
HXLINE( 123)				color4 = 255;
            			}
            			else {
HXLINE( 123)				if ((Value3 < 0)) {
HXLINE( 123)					color4 = 0;
            				}
            				else {
HXLINE( 123)					color4 = Value3;
            				}
            			}
HXDLIN( 123)			color = (color | (color4 << 24));
            		}
HXDLIN( 123)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGBFloat,return )

int FlxColor_Impl__obj::fromCMYK(Float Cyan,Float Magenta,Float Yellow,Float Black,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_137_fromCMYK)
HXLINE( 138)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 139)		{
HXLINE( 139)			Float Value = ((( (Float)(1) ) - Cyan) * (( (Float)(1) ) - Black));
HXDLIN( 139)			{
HXLINE( 139)				int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 139)				color = (color & -16711681);
HXDLIN( 139)				int color1;
HXDLIN( 139)				if ((Value1 > 255)) {
HXLINE( 139)					color1 = 255;
            				}
            				else {
HXLINE( 139)					if ((Value1 < 0)) {
HXLINE( 139)						color1 = 0;
            					}
            					else {
HXLINE( 139)						color1 = Value1;
            					}
            				}
HXDLIN( 139)				color = (color | (color1 << 16));
            			}
            		}
HXDLIN( 139)		{
HXLINE( 139)			Float Value2 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 139)			{
HXLINE( 139)				int Value3 = ::Math_obj::round((Value2 * ( (Float)(255) )));
HXDLIN( 139)				color = (color & -65281);
HXDLIN( 139)				int color2;
HXDLIN( 139)				if ((Value3 > 255)) {
HXLINE( 139)					color2 = 255;
            				}
            				else {
HXLINE( 139)					if ((Value3 < 0)) {
HXLINE( 139)						color2 = 0;
            					}
            					else {
HXLINE( 139)						color2 = Value3;
            					}
            				}
HXDLIN( 139)				color = (color | (color2 << 8));
            			}
            		}
HXDLIN( 139)		{
HXLINE( 139)			Float Value4 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 139)			{
HXLINE( 139)				int Value5 = ::Math_obj::round((Value4 * ( (Float)(255) )));
HXDLIN( 139)				color = (color & -256);
HXDLIN( 139)				int color3;
HXDLIN( 139)				if ((Value5 > 255)) {
HXLINE( 139)					color3 = 255;
            				}
            				else {
HXLINE( 139)					if ((Value5 < 0)) {
HXLINE( 139)						color3 = 0;
            					}
            					else {
HXLINE( 139)						color3 = Value5;
            					}
            				}
HXDLIN( 139)				color = (color | color3);
            			}
            		}
HXDLIN( 139)		{
HXLINE( 139)			int Value6 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 139)			color = (color & 16777215);
HXDLIN( 139)			int color4;
HXDLIN( 139)			if ((Value6 > 255)) {
HXLINE( 139)				color4 = 255;
            			}
            			else {
HXLINE( 139)				if ((Value6 < 0)) {
HXLINE( 139)					color4 = 0;
            				}
            				else {
HXLINE( 139)					color4 = Value6;
            				}
            			}
HXDLIN( 139)			color = (color | (color4 << 24));
            		}
HXDLIN( 139)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,fromCMYK,return )

int FlxColor_Impl__obj::fromHSB(Float Hue,Float Saturation,Float Brightness,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_152_fromHSB)
HXLINE( 153)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 154)		Float chroma = (Brightness * Saturation);
HXDLIN( 154)		Float match = (Brightness - chroma);
HXDLIN( 154)		Float Hue1 = Hue;
HXDLIN( 154)		Float Chroma = chroma;
HXDLIN( 154)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 154)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 154)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 154)		Chroma = (Chroma + match);
HXDLIN( 154)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 154)				{
HXLINE( 154)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -16711681);
HXDLIN( 154)					int color1;
HXDLIN( 154)					if ((Value > 255)) {
HXLINE( 154)						color1 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value < 0)) {
HXLINE( 154)							color1 = 0;
            						}
            						else {
HXLINE( 154)							color1 = Value;
            						}
            					}
HXDLIN( 154)					color = (color | (color1 << 16));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -65281);
HXDLIN( 154)					int color2;
HXDLIN( 154)					if ((Value1 > 255)) {
HXLINE( 154)						color2 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value1 < 0)) {
HXLINE( 154)							color2 = 0;
            						}
            						else {
HXLINE( 154)							color2 = Value1;
            						}
            					}
HXDLIN( 154)					color = (color | (color2 << 8));
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 154)					color = (color & -256);
HXDLIN( 154)					int color3;
HXDLIN( 154)					if ((Value2 > 255)) {
HXLINE( 154)						color3 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value2 < 0)) {
HXLINE( 154)							color3 = 0;
            						}
            						else {
HXLINE( 154)							color3 = Value2;
            						}
            					}
HXDLIN( 154)					color = (color | color3);
            				}
HXDLIN( 154)				{
HXLINE( 154)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 154)					color = (color & 16777215);
HXDLIN( 154)					int color4;
HXDLIN( 154)					if ((Value3 > 255)) {
HXLINE( 154)						color4 = 255;
            					}
            					else {
HXLINE( 154)						if ((Value3 < 0)) {
HXLINE( 154)							color4 = 0;
            						}
            						else {
HXLINE( 154)							color4 = Value3;
            						}
            					}
HXDLIN( 154)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 154)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSB,return )

int FlxColor_Impl__obj::fromHSL(Float Hue,Float Saturation,Float Lightness,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_167_fromHSL)
HXLINE( 168)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 169)		Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Lightness) - ( (Float)(1) )))) * Saturation);
HXDLIN( 169)		Float match = (Lightness - (chroma / ( (Float)(2) )));
HXDLIN( 169)		Float Hue1 = Hue;
HXDLIN( 169)		Float Chroma = chroma;
HXDLIN( 169)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 169)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 169)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 169)		Chroma = (Chroma + match);
HXDLIN( 169)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 169)				{
HXLINE( 169)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -16711681);
HXDLIN( 169)					int color1;
HXDLIN( 169)					if ((Value > 255)) {
HXLINE( 169)						color1 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value < 0)) {
HXLINE( 169)							color1 = 0;
            						}
            						else {
HXLINE( 169)							color1 = Value;
            						}
            					}
HXDLIN( 169)					color = (color | (color1 << 16));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -65281);
HXDLIN( 169)					int color2;
HXDLIN( 169)					if ((Value1 > 255)) {
HXLINE( 169)						color2 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value1 < 0)) {
HXLINE( 169)							color2 = 0;
            						}
            						else {
HXLINE( 169)							color2 = Value1;
            						}
            					}
HXDLIN( 169)					color = (color | (color2 << 8));
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 169)					color = (color & -256);
HXDLIN( 169)					int color3;
HXDLIN( 169)					if ((Value2 > 255)) {
HXLINE( 169)						color3 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value2 < 0)) {
HXLINE( 169)							color3 = 0;
            						}
            						else {
HXLINE( 169)							color3 = Value2;
            						}
            					}
HXDLIN( 169)					color = (color | color3);
            				}
HXDLIN( 169)				{
HXLINE( 169)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 169)					color = (color & 16777215);
HXDLIN( 169)					int color4;
HXDLIN( 169)					if ((Value3 > 255)) {
HXLINE( 169)						color4 = 255;
            					}
            					else {
HXLINE( 169)						if ((Value3 < 0)) {
HXLINE( 169)							color4 = 0;
            						}
            						else {
HXLINE( 169)							color4 = Value3;
            						}
            					}
HXDLIN( 169)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 169)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSL,return )

 ::Dynamic FlxColor_Impl__obj::fromString(::String str){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_188_fromString)
HXLINE( 189)		 ::Dynamic result = null();
HXLINE( 190)		str = ::StringTools_obj::trim(str);
HXLINE( 192)		if (::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->match(str)) {
HXLINE( 194)			::String hexColor = (HX_("0x",48,2a,00,00) + ::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->matched(2));
HXLINE( 195)			result = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(::Std_obj::parseInt(hexColor));
HXLINE( 196)			if ((hexColor.length == 8)) {
HXLINE( 198)				int Value = ::Math_obj::round(( (Float)(255) ));
HXDLIN( 198)				result = (( (int)(result) ) & 16777215);
HXDLIN( 198)				int result1;
HXDLIN( 198)				if ((Value > 255)) {
HXLINE( 198)					result1 = 255;
            				}
            				else {
HXLINE( 198)					if ((Value < 0)) {
HXLINE( 198)						result1 = 0;
            					}
            					else {
HXLINE( 198)						result1 = Value;
            					}
            				}
HXDLIN( 198)				result = (( (int)(result) ) | (result1 << 24));
            			}
            		}
            		else {
HXLINE( 203)			str = str.toUpperCase();
HXLINE( 204)			{
HXLINE( 204)				 ::Dynamic key = ::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->keys();
HXDLIN( 204)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 204)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 206)					if ((key1.toUpperCase() == str)) {
HXLINE( 208)						result = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->get(key1));
HXLINE( 209)						goto _hx_goto_6;
            					}
            				}
            				_hx_goto_6:;
            			}
            		}
HXLINE( 214)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromString,return )

::Array< int > FlxColor_Impl__obj::getHSBColorWheel(::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_225_getHSBColorWheel)
HXDLIN( 225)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 225)		{
HXDLIN( 225)			int _g1 = 0;
HXDLIN( 225)			while((_g1 < 360)){
HXDLIN( 225)				_g1 = (_g1 + 1);
HXDLIN( 225)				int c = (_g1 - 1);
HXDLIN( 225)				_g->push(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(c) ),((Float)1.0),((Float)1.0),Alpha));
            			}
            		}
HXDLIN( 225)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getHSBColorWheel,return )

int FlxColor_Impl__obj::interpolate(int Color1,int Color2,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_237_interpolate)
HXLINE( 238)		int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXLINE( 239)		int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXLINE( 240)		int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXLINE( 241)		int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXLINE( 243)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 243)		{
HXLINE( 243)			color = (color & -16711681);
HXDLIN( 243)			int color1;
HXDLIN( 243)			if ((r > 255)) {
HXLINE( 243)				color1 = 255;
            			}
            			else {
HXLINE( 243)				if ((r < 0)) {
HXLINE( 243)					color1 = 0;
            				}
            				else {
HXLINE( 243)					color1 = r;
            				}
            			}
HXDLIN( 243)			color = (color | (color1 << 16));
            		}
HXDLIN( 243)		{
HXLINE( 243)			color = (color & -65281);
HXDLIN( 243)			int color2;
HXDLIN( 243)			if ((g > 255)) {
HXLINE( 243)				color2 = 255;
            			}
            			else {
HXLINE( 243)				if ((g < 0)) {
HXLINE( 243)					color2 = 0;
            				}
            				else {
HXLINE( 243)					color2 = g;
            				}
            			}
HXDLIN( 243)			color = (color | (color2 << 8));
            		}
HXDLIN( 243)		{
HXLINE( 243)			color = (color & -256);
HXDLIN( 243)			int color3;
HXDLIN( 243)			if ((b > 255)) {
HXLINE( 243)				color3 = 255;
            			}
            			else {
HXLINE( 243)				if ((b < 0)) {
HXLINE( 243)					color3 = 0;
            				}
            				else {
HXLINE( 243)					color3 = b;
            				}
            			}
HXDLIN( 243)			color = (color | color3);
            		}
HXDLIN( 243)		{
HXLINE( 243)			color = (color & 16777215);
HXDLIN( 243)			int color4;
HXDLIN( 243)			if ((a > 255)) {
HXLINE( 243)				color4 = 255;
            			}
            			else {
HXLINE( 243)				if ((a < 0)) {
HXLINE( 243)					color4 = 0;
            				}
            				else {
HXLINE( 243)					color4 = a;
            				}
            			}
HXDLIN( 243)			color = (color | (color4 << 24));
            		}
HXDLIN( 243)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,interpolate,return )

::Array< int > FlxColor_Impl__obj::gradient(int Color1,int Color2,int Steps, ::Dynamic Ease){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_256_gradient)
HXLINE( 257)		::Array< int > output = ::Array_obj< int >::__new();
HXLINE( 259)		if (::hx::IsNull( Ease )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			Float _hx_run(Float t){
            				HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_263_gradient)
HXLINE( 263)				return t;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 261)			Ease =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 267)		{
HXLINE( 267)			int _g = 0;
HXDLIN( 267)			int _g1 = Steps;
HXDLIN( 267)			while((_g < _g1)){
HXLINE( 267)				_g = (_g + 1);
HXDLIN( 267)				int step = (_g - 1);
HXLINE( 269)				Float Factor = ( (Float)(Ease((( (Float)(step) ) / ( (Float)((Steps - 1)) )))) );
HXDLIN( 269)				int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXDLIN( 269)				int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXDLIN( 269)				int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXDLIN( 269)				int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXDLIN( 269)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 269)				{
HXLINE( 269)					color = (color & -16711681);
HXDLIN( 269)					int color1;
HXDLIN( 269)					if ((r > 255)) {
HXLINE( 269)						color1 = 255;
            					}
            					else {
HXLINE( 269)						if ((r < 0)) {
HXLINE( 269)							color1 = 0;
            						}
            						else {
HXLINE( 269)							color1 = r;
            						}
            					}
HXDLIN( 269)					color = (color | (color1 << 16));
            				}
HXDLIN( 269)				{
HXLINE( 269)					color = (color & -65281);
HXDLIN( 269)					int color2;
HXDLIN( 269)					if ((g > 255)) {
HXLINE( 269)						color2 = 255;
            					}
            					else {
HXLINE( 269)						if ((g < 0)) {
HXLINE( 269)							color2 = 0;
            						}
            						else {
HXLINE( 269)							color2 = g;
            						}
            					}
HXDLIN( 269)					color = (color | (color2 << 8));
            				}
HXDLIN( 269)				{
HXLINE( 269)					color = (color & -256);
HXDLIN( 269)					int color3;
HXDLIN( 269)					if ((b > 255)) {
HXLINE( 269)						color3 = 255;
            					}
            					else {
HXLINE( 269)						if ((b < 0)) {
HXLINE( 269)							color3 = 0;
            						}
            						else {
HXLINE( 269)							color3 = b;
            						}
            					}
HXDLIN( 269)					color = (color | color3);
            				}
HXDLIN( 269)				{
HXLINE( 269)					color = (color & 16777215);
HXDLIN( 269)					int color4;
HXDLIN( 269)					if ((a > 255)) {
HXLINE( 269)						color4 = 255;
            					}
            					else {
HXLINE( 269)						if ((a < 0)) {
HXLINE( 269)							color4 = 0;
            						}
            						else {
HXLINE( 269)							color4 = a;
            						}
            					}
HXDLIN( 269)					color = (color | (color4 << 24));
            				}
HXDLIN( 269)				output[step] = color;
            			}
            		}
HXLINE( 272)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,gradient,return )

int FlxColor_Impl__obj::multiply(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_281_multiply)
HXDLIN( 281)		Float Red = ((( (Float)(((lhs >> 16) & 255)) ) / ( (Float)(255) )) * (( (Float)(((rhs >> 16) & 255)) ) / ( (Float)(255) )));
HXDLIN( 281)		Float Green = ((( (Float)(((lhs >> 8) & 255)) ) / ( (Float)(255) )) * (( (Float)(((rhs >> 8) & 255)) ) / ( (Float)(255) )));
HXDLIN( 281)		Float Blue = ((( (Float)((lhs & 255)) ) / ( (Float)(255) )) * (( (Float)((rhs & 255)) ) / ( (Float)(255) )));
HXDLIN( 281)		Float Alpha = ( (Float)(1) );
HXDLIN( 281)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 281)		{
HXDLIN( 281)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 281)			color = (color & -16711681);
HXDLIN( 281)			int color1;
HXDLIN( 281)			if ((Value > 255)) {
HXDLIN( 281)				color1 = 255;
            			}
            			else {
HXDLIN( 281)				if ((Value < 0)) {
HXDLIN( 281)					color1 = 0;
            				}
            				else {
HXDLIN( 281)					color1 = Value;
            				}
            			}
HXDLIN( 281)			color = (color | (color1 << 16));
            		}
HXDLIN( 281)		{
HXDLIN( 281)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 281)			color = (color & -65281);
HXDLIN( 281)			int color2;
HXDLIN( 281)			if ((Value1 > 255)) {
HXDLIN( 281)				color2 = 255;
            			}
            			else {
HXDLIN( 281)				if ((Value1 < 0)) {
HXDLIN( 281)					color2 = 0;
            				}
            				else {
HXDLIN( 281)					color2 = Value1;
            				}
            			}
HXDLIN( 281)			color = (color | (color2 << 8));
            		}
HXDLIN( 281)		{
HXDLIN( 281)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 281)			color = (color & -256);
HXDLIN( 281)			int color3;
HXDLIN( 281)			if ((Value2 > 255)) {
HXDLIN( 281)				color3 = 255;
            			}
            			else {
HXDLIN( 281)				if ((Value2 < 0)) {
HXDLIN( 281)					color3 = 0;
            				}
            				else {
HXDLIN( 281)					color3 = Value2;
            				}
            			}
HXDLIN( 281)			color = (color | color3);
            		}
HXDLIN( 281)		{
HXDLIN( 281)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 281)			color = (color & 16777215);
HXDLIN( 281)			int color4;
HXDLIN( 281)			if ((Value3 > 255)) {
HXDLIN( 281)				color4 = 255;
            			}
            			else {
HXDLIN( 281)				if ((Value3 < 0)) {
HXDLIN( 281)					color4 = 0;
            				}
            				else {
HXDLIN( 281)					color4 = Value3;
            				}
            			}
HXDLIN( 281)			color = (color | (color4 << 24));
            		}
HXDLIN( 281)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,multiply,return )

int FlxColor_Impl__obj::add(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_290_add)
HXDLIN( 290)		int Red = (((lhs >> 16) & 255) + ((rhs >> 16) & 255));
HXDLIN( 290)		int Green = (((lhs >> 8) & 255) + ((rhs >> 8) & 255));
HXDLIN( 290)		int Blue = ((lhs & 255) + (rhs & 255));
HXDLIN( 290)		int Alpha = 255;
HXDLIN( 290)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 290)		{
HXDLIN( 290)			color = (color & -16711681);
HXDLIN( 290)			int color1;
HXDLIN( 290)			if ((Red > 255)) {
HXDLIN( 290)				color1 = 255;
            			}
            			else {
HXDLIN( 290)				if ((Red < 0)) {
HXDLIN( 290)					color1 = 0;
            				}
            				else {
HXDLIN( 290)					color1 = Red;
            				}
            			}
HXDLIN( 290)			color = (color | (color1 << 16));
            		}
HXDLIN( 290)		{
HXDLIN( 290)			color = (color & -65281);
HXDLIN( 290)			int color2;
HXDLIN( 290)			if ((Green > 255)) {
HXDLIN( 290)				color2 = 255;
            			}
            			else {
HXDLIN( 290)				if ((Green < 0)) {
HXDLIN( 290)					color2 = 0;
            				}
            				else {
HXDLIN( 290)					color2 = Green;
            				}
            			}
HXDLIN( 290)			color = (color | (color2 << 8));
            		}
HXDLIN( 290)		{
HXDLIN( 290)			color = (color & -256);
HXDLIN( 290)			int color3;
HXDLIN( 290)			if ((Blue > 255)) {
HXDLIN( 290)				color3 = 255;
            			}
            			else {
HXDLIN( 290)				if ((Blue < 0)) {
HXDLIN( 290)					color3 = 0;
            				}
            				else {
HXDLIN( 290)					color3 = Blue;
            				}
            			}
HXDLIN( 290)			color = (color | color3);
            		}
HXDLIN( 290)		{
HXDLIN( 290)			color = (color & 16777215);
HXDLIN( 290)			int color4;
HXDLIN( 290)			if ((Alpha > 255)) {
HXDLIN( 290)				color4 = 255;
            			}
            			else {
HXDLIN( 290)				if ((Alpha < 0)) {
HXDLIN( 290)					color4 = 0;
            				}
            				else {
HXDLIN( 290)					color4 = Alpha;
            				}
            			}
HXDLIN( 290)			color = (color | (color4 << 24));
            		}
HXDLIN( 290)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,add,return )

int FlxColor_Impl__obj::subtract(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_299_subtract)
HXDLIN( 299)		int Red = (((lhs >> 16) & 255) - ((rhs >> 16) & 255));
HXDLIN( 299)		int Green = (((lhs >> 8) & 255) - ((rhs >> 8) & 255));
HXDLIN( 299)		int Blue = ((lhs & 255) - (rhs & 255));
HXDLIN( 299)		int Alpha = 255;
HXDLIN( 299)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 299)		{
HXDLIN( 299)			color = (color & -16711681);
HXDLIN( 299)			int color1;
HXDLIN( 299)			if ((Red > 255)) {
HXDLIN( 299)				color1 = 255;
            			}
            			else {
HXDLIN( 299)				if ((Red < 0)) {
HXDLIN( 299)					color1 = 0;
            				}
            				else {
HXDLIN( 299)					color1 = Red;
            				}
            			}
HXDLIN( 299)			color = (color | (color1 << 16));
            		}
HXDLIN( 299)		{
HXDLIN( 299)			color = (color & -65281);
HXDLIN( 299)			int color2;
HXDLIN( 299)			if ((Green > 255)) {
HXDLIN( 299)				color2 = 255;
            			}
            			else {
HXDLIN( 299)				if ((Green < 0)) {
HXDLIN( 299)					color2 = 0;
            				}
            				else {
HXDLIN( 299)					color2 = Green;
            				}
            			}
HXDLIN( 299)			color = (color | (color2 << 8));
            		}
HXDLIN( 299)		{
HXDLIN( 299)			color = (color & -256);
HXDLIN( 299)			int color3;
HXDLIN( 299)			if ((Blue > 255)) {
HXDLIN( 299)				color3 = 255;
            			}
            			else {
HXDLIN( 299)				if ((Blue < 0)) {
HXDLIN( 299)					color3 = 0;
            				}
            				else {
HXDLIN( 299)					color3 = Blue;
            				}
            			}
HXDLIN( 299)			color = (color | color3);
            		}
HXDLIN( 299)		{
HXDLIN( 299)			color = (color & 16777215);
HXDLIN( 299)			int color4;
HXDLIN( 299)			if ((Alpha > 255)) {
HXDLIN( 299)				color4 = 255;
            			}
            			else {
HXDLIN( 299)				if ((Alpha < 0)) {
HXDLIN( 299)					color4 = 0;
            				}
            				else {
HXDLIN( 299)					color4 = Alpha;
            				}
            			}
HXDLIN( 299)			color = (color | (color4 << 24));
            		}
HXDLIN( 299)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,subtract,return )

int FlxColor_Impl__obj::getComplementHarmony(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_310_getComplementHarmony)
HXDLIN( 310)		int _hx_tmp = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 180),0,350);
HXDLIN( 310)		return ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(_hx_tmp) ),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getComplementHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getAnalogousHarmony(int this1,::hx::Null< int >  __o_Threshold){
            		int Threshold = __o_Threshold.Default(30);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_321_getAnalogousHarmony)
HXLINE( 322)		int warmer = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) - Threshold),0,350);
HXDLIN( 322)		int warmer1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(warmer) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 323)		int colder = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + Threshold),0,350);
HXDLIN( 323)		int colder1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(colder) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 325)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("warmer",f2,95,03,ba),warmer1)
            			->setFixed(1,HX_("colder",91,61,7e,c6),colder1)
            			->setFixed(2,HX_("original",51,34,e8,e0),this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getAnalogousHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getSplitComplementHarmony(int this1,::hx::Null< int >  __o_Threshold){
            		int Threshold = __o_Threshold.Default(30);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_336_getSplitComplementHarmony)
HXLINE( 337)		int oppositeHue = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 180),0,350);
HXLINE( 338)		int warmer = ::flixel::math::FlxMath_obj::wrap((oppositeHue - Threshold),0,350);
HXDLIN( 338)		int warmer1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(warmer) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 339)		int colder = ::flixel::math::FlxMath_obj::wrap((oppositeHue + Threshold),0,350);
HXDLIN( 339)		int colder1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(colder) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 341)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("warmer",f2,95,03,ba),warmer1)
            			->setFixed(1,HX_("colder",91,61,7e,c6),colder1)
            			->setFixed(2,HX_("original",51,34,e8,e0),this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getSplitComplementHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getTriadicHarmony(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_351_getTriadicHarmony)
HXLINE( 352)		int triadic1 = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 120),0,359);
HXDLIN( 352)		int triadic11 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(triadic1) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 353)		int triadic2 = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(triadic11)) + 120),0,359);
HXDLIN( 353)		int triadic21 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(triadic2) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 355)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("color1",6e,c5,86,c6),this1)
            			->setFixed(1,HX_("color2",6f,c5,86,c6),triadic11)
            			->setFixed(2,HX_("color3",70,c5,86,c6),triadic21));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getTriadicHarmony,return )

int FlxColor_Impl__obj::to24Bit(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_365_to24Bit)
HXDLIN( 365)		return (this1 & 16777215);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,to24Bit,return )

::String FlxColor_Impl__obj::toHexString(int this1,::hx::Null< bool >  __o_Alpha,::hx::Null< bool >  __o_Prefix){
            		bool Alpha = __o_Alpha.Default(true);
            		bool Prefix = __o_Prefix.Default(true);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_377_toHexString)
HXDLIN( 377)		::String _hx_tmp;
HXDLIN( 377)		if (Prefix) {
HXDLIN( 377)			_hx_tmp = HX_("0x",48,2a,00,00);
            		}
            		else {
HXDLIN( 377)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN( 377)		::String _hx_tmp1;
HXDLIN( 377)		if (Alpha) {
HXDLIN( 377)			_hx_tmp1 = ::StringTools_obj::hex(((this1 >> 24) & 255),2);
            		}
            		else {
HXDLIN( 377)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
HXDLIN( 377)		::String _hx_tmp2 = ((_hx_tmp + _hx_tmp1) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 377)		::String _hx_tmp3 = (_hx_tmp2 + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 377)		return (_hx_tmp3 + ::StringTools_obj::hex((this1 & 255),2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,toHexString,return )

::String FlxColor_Impl__obj::toWebString(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_388_toWebString)
HXDLIN( 388)		::String _hx_tmp = (HX_("",00,00,00,00) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 388)		::String _hx_tmp1 = (_hx_tmp + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 388)		return (HX_("#",23,00,00,00) + (_hx_tmp1 + ::StringTools_obj::hex((this1 & 255),2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,toWebString,return )

::String FlxColor_Impl__obj::getColorInfo(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_397_getColorInfo)
HXLINE( 399)		::String result = HX_("0x",48,2a,00,00);
HXDLIN( 399)		::String result1 = ::StringTools_obj::hex(((this1 >> 24) & 255),2);
HXDLIN( 399)		::String result2 = ((result + result1) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 399)		::String result3 = (result2 + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 399)		::String result4 = ((result3 + ::StringTools_obj::hex((this1 & 255),2)) + HX_("\n",0a,00,00,00));
HXLINE( 401)		result4 = (result4 + ((((((((HX_("Alpha: ",64,15,67,7f) + ((this1 >> 24) & 255)) + HX_(" Red: ",f7,bd,55,45)) + ((this1 >> 16) & 255)) + HX_(" Green: ",e9,23,00,ae)) + ((this1 >> 8) & 255)) + HX_(" Blue: ",00,1c,26,13)) + (this1 & 255)) + HX_("\n",0a,00,00,00)));
HXLINE( 403)		::String result5 = ((HX_("Hue: ",3e,91,7c,c2) + ::flixel::math::FlxMath_obj::roundDecimal(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1),2)) + HX_(" Saturation: ",38,1b,be,c1));
HXDLIN( 403)		::String result6 = ((result5 + ::flixel::math::FlxMath_obj::roundDecimal(((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),2)) + HX_(" Brightness: ",f7,92,6f,4f));
HXDLIN( 403)		::String result7 = ((result6 + ::flixel::math::FlxMath_obj::roundDecimal(::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),2)) + HX_(" Lightness: ",13,68,ef,ba));
HXDLIN( 403)		result4 = (result4 + (result7 + ::flixel::math::FlxMath_obj::roundDecimal(((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )),2)));
HXLINE( 406)		return result4;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getColorInfo,return )

int FlxColor_Impl__obj::getDarkened(int this1,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.2));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_416_getDarkened)
HXLINE( 417)		Float lowerBound;
HXDLIN( 417)		if ((Factor < 0)) {
HXLINE( 417)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 417)			lowerBound = Factor;
            		}
HXDLIN( 417)		if ((lowerBound > 1)) {
HXLINE( 417)			Factor = ( (Float)(1) );
            		}
            		else {
HXLINE( 417)			Factor = lowerBound;
            		}
HXLINE( 418)		int output = this1;
HXLINE( 419)		{
HXLINE( 419)			Float Value = (((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )) * (( (Float)(1) ) - Factor));
HXDLIN( 419)			{
HXLINE( 419)				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);
HXDLIN( 419)				Float Alpha = (( (Float)(((output >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 419)				Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 419)				Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 419)				{
HXLINE( 419)					Float Hue1 = Hue;
HXDLIN( 419)					Float Chroma = chroma;
HXDLIN( 419)					Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 419)					Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 419)					Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 419)					Chroma = (Chroma + match);
HXDLIN( 419)					switch((int)(::Std_obj::_hx_int(hueD))){
            						case (int)0: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 419)							{
HXLINE( 419)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -16711681);
HXDLIN( 419)								int output1;
HXDLIN( 419)								if ((Value > 255)) {
HXLINE( 419)									output1 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value < 0)) {
HXLINE( 419)										output1 = 0;
            									}
            									else {
HXLINE( 419)										output1 = Value;
            									}
            								}
HXDLIN( 419)								output = (output | (output1 << 16));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -65281);
HXDLIN( 419)								int output2;
HXDLIN( 419)								if ((Value1 > 255)) {
HXLINE( 419)									output2 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value1 < 0)) {
HXLINE( 419)										output2 = 0;
            									}
            									else {
HXLINE( 419)										output2 = Value1;
            									}
            								}
HXDLIN( 419)								output = (output | (output2 << 8));
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 419)								output = (output & -256);
HXDLIN( 419)								int output3;
HXDLIN( 419)								if ((Value2 > 255)) {
HXLINE( 419)									output3 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value2 < 0)) {
HXLINE( 419)										output3 = 0;
            									}
            									else {
HXLINE( 419)										output3 = Value2;
            									}
            								}
HXDLIN( 419)								output = (output | output3);
            							}
HXDLIN( 419)							{
HXLINE( 419)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 419)								output = (output & 16777215);
HXDLIN( 419)								int output4;
HXDLIN( 419)								if ((Value3 > 255)) {
HXLINE( 419)									output4 = 255;
            								}
            								else {
HXLINE( 419)									if ((Value3 < 0)) {
HXLINE( 419)										output4 = 0;
            									}
            									else {
HXLINE( 419)										output4 = Value3;
            									}
            								}
HXDLIN( 419)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE( 420)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getDarkened,return )

int FlxColor_Impl__obj::getLightened(int this1,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.2));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_430_getLightened)
HXLINE( 431)		Float lowerBound;
HXDLIN( 431)		if ((Factor < 0)) {
HXLINE( 431)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 431)			lowerBound = Factor;
            		}
HXDLIN( 431)		if ((lowerBound > 1)) {
HXLINE( 431)			Factor = ( (Float)(1) );
            		}
            		else {
HXLINE( 431)			Factor = lowerBound;
            		}
HXLINE( 432)		int output = this1;
HXLINE( 433)		{
HXLINE( 433)			Float Value = (((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )) + ((( (Float)(1) ) - ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) ))) * Factor));
HXDLIN( 433)			{
HXLINE( 433)				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);
HXDLIN( 433)				Float Alpha = (( (Float)(((output >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 433)				Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 433)				Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 433)				{
HXLINE( 433)					Float Hue1 = Hue;
HXDLIN( 433)					Float Chroma = chroma;
HXDLIN( 433)					Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 433)					Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 433)					Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 433)					Chroma = (Chroma + match);
HXDLIN( 433)					switch((int)(::Std_obj::_hx_int(hueD))){
            						case (int)0: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 433)							{
HXLINE( 433)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -16711681);
HXDLIN( 433)								int output1;
HXDLIN( 433)								if ((Value > 255)) {
HXLINE( 433)									output1 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value < 0)) {
HXLINE( 433)										output1 = 0;
            									}
            									else {
HXLINE( 433)										output1 = Value;
            									}
            								}
HXDLIN( 433)								output = (output | (output1 << 16));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -65281);
HXDLIN( 433)								int output2;
HXDLIN( 433)								if ((Value1 > 255)) {
HXLINE( 433)									output2 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value1 < 0)) {
HXLINE( 433)										output2 = 0;
            									}
            									else {
HXLINE( 433)										output2 = Value1;
            									}
            								}
HXDLIN( 433)								output = (output | (output2 << 8));
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 433)								output = (output & -256);
HXDLIN( 433)								int output3;
HXDLIN( 433)								if ((Value2 > 255)) {
HXLINE( 433)									output3 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value2 < 0)) {
HXLINE( 433)										output3 = 0;
            									}
            									else {
HXLINE( 433)										output3 = Value2;
            									}
            								}
HXDLIN( 433)								output = (output | output3);
            							}
HXDLIN( 433)							{
HXLINE( 433)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 433)								output = (output & 16777215);
HXDLIN( 433)								int output4;
HXDLIN( 433)								if ((Value3 > 255)) {
HXLINE( 433)									output4 = 255;
            								}
            								else {
HXLINE( 433)									if ((Value3 < 0)) {
HXLINE( 433)										output4 = 0;
            									}
            									else {
HXLINE( 433)										output4 = Value3;
            									}
            								}
HXDLIN( 433)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE( 434)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getLightened,return )

int FlxColor_Impl__obj::getInverted(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_443_getInverted)
HXLINE( 444)		int oldAlpha = ((this1 >> 24) & 255);
HXLINE( 445)		int lhs = -1;
HXDLIN( 445)		int Red = (((lhs >> 16) & 255) - ((this1 >> 16) & 255));
HXDLIN( 445)		int Green = (((lhs >> 8) & 255) - ((this1 >> 8) & 255));
HXDLIN( 445)		int Blue = ((lhs & 255) - (this1 & 255));
HXDLIN( 445)		int Alpha = 255;
HXDLIN( 445)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 445)		{
HXLINE( 445)			color = (color & -16711681);
HXDLIN( 445)			int color1;
HXDLIN( 445)			if ((Red > 255)) {
HXLINE( 445)				color1 = 255;
            			}
            			else {
HXLINE( 445)				if ((Red < 0)) {
HXLINE( 445)					color1 = 0;
            				}
            				else {
HXLINE( 445)					color1 = Red;
            				}
            			}
HXDLIN( 445)			color = (color | (color1 << 16));
            		}
HXDLIN( 445)		{
HXLINE( 445)			color = (color & -65281);
HXDLIN( 445)			int color2;
HXDLIN( 445)			if ((Green > 255)) {
HXLINE( 445)				color2 = 255;
            			}
            			else {
HXLINE( 445)				if ((Green < 0)) {
HXLINE( 445)					color2 = 0;
            				}
            				else {
HXLINE( 445)					color2 = Green;
            				}
            			}
HXDLIN( 445)			color = (color | (color2 << 8));
            		}
HXDLIN( 445)		{
HXLINE( 445)			color = (color & -256);
HXDLIN( 445)			int color3;
HXDLIN( 445)			if ((Blue > 255)) {
HXLINE( 445)				color3 = 255;
            			}
            			else {
HXLINE( 445)				if ((Blue < 0)) {
HXLINE( 445)					color3 = 0;
            				}
            				else {
HXLINE( 445)					color3 = Blue;
            				}
            			}
HXDLIN( 445)			color = (color | color3);
            		}
HXDLIN( 445)		{
HXLINE( 445)			color = (color & 16777215);
HXDLIN( 445)			int color4;
HXDLIN( 445)			if ((Alpha > 255)) {
HXLINE( 445)				color4 = 255;
            			}
            			else {
HXLINE( 445)				if ((Alpha < 0)) {
HXLINE( 445)					color4 = 0;
            				}
            				else {
HXLINE( 445)					color4 = Alpha;
            				}
            			}
HXDLIN( 445)			color = (color | (color4 << 24));
            		}
HXDLIN( 445)		int output = color;
HXLINE( 446)		{
HXLINE( 446)			output = (output & 16777215);
HXDLIN( 446)			int output1;
HXDLIN( 446)			if ((oldAlpha > 255)) {
HXLINE( 446)				output1 = 255;
            			}
            			else {
HXLINE( 446)				if ((oldAlpha < 0)) {
HXLINE( 446)					output1 = 0;
            				}
            				else {
HXLINE( 446)					output1 = oldAlpha;
            				}
            			}
HXDLIN( 446)			output = (output | (output1 << 24));
            		}
HXLINE( 447)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getInverted,return )

int FlxColor_Impl__obj::setRGB(int this1,int Red,int Green,int Blue,::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_460_setRGB)
HXLINE( 461)		{
HXLINE( 461)			this1 = (this1 & -16711681);
HXDLIN( 461)			int this2;
HXDLIN( 461)			if ((Red > 255)) {
HXLINE( 461)				this2 = 255;
            			}
            			else {
HXLINE( 461)				if ((Red < 0)) {
HXLINE( 461)					this2 = 0;
            				}
            				else {
HXLINE( 461)					this2 = Red;
            				}
            			}
HXDLIN( 461)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 462)		{
HXLINE( 462)			this1 = (this1 & -65281);
HXDLIN( 462)			int this3;
HXDLIN( 462)			if ((Green > 255)) {
HXLINE( 462)				this3 = 255;
            			}
            			else {
HXLINE( 462)				if ((Green < 0)) {
HXLINE( 462)					this3 = 0;
            				}
            				else {
HXLINE( 462)					this3 = Green;
            				}
            			}
HXDLIN( 462)			this1 = (this1 | (this3 << 8));
            		}
HXLINE( 463)		{
HXLINE( 463)			this1 = (this1 & -256);
HXDLIN( 463)			int this4;
HXDLIN( 463)			if ((Blue > 255)) {
HXLINE( 463)				this4 = 255;
            			}
            			else {
HXLINE( 463)				if ((Blue < 0)) {
HXLINE( 463)					this4 = 0;
            				}
            				else {
HXLINE( 463)					this4 = Blue;
            				}
            			}
HXDLIN( 463)			this1 = (this1 | this4);
            		}
HXLINE( 464)		{
HXLINE( 464)			this1 = (this1 & 16777215);
HXDLIN( 464)			int this5;
HXDLIN( 464)			if ((Alpha > 255)) {
HXLINE( 464)				this5 = 255;
            			}
            			else {
HXLINE( 464)				if ((Alpha < 0)) {
HXLINE( 464)					this5 = 0;
            				}
            				else {
HXLINE( 464)					this5 = Alpha;
            				}
            			}
HXDLIN( 464)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 465)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGB,return )

int FlxColor_Impl__obj::setRGBFloat(int this1,Float Red,Float Green,Float Blue,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_478_setRGBFloat)
HXLINE( 479)		{
HXLINE( 479)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 479)			this1 = (this1 & -16711681);
HXDLIN( 479)			int this2;
HXDLIN( 479)			if ((Value > 255)) {
HXLINE( 479)				this2 = 255;
            			}
            			else {
HXLINE( 479)				if ((Value < 0)) {
HXLINE( 479)					this2 = 0;
            				}
            				else {
HXLINE( 479)					this2 = Value;
            				}
            			}
HXDLIN( 479)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 480)		{
HXLINE( 480)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 480)			this1 = (this1 & -65281);
HXDLIN( 480)			int this3;
HXDLIN( 480)			if ((Value1 > 255)) {
HXLINE( 480)				this3 = 255;
            			}
            			else {
HXLINE( 480)				if ((Value1 < 0)) {
HXLINE( 480)					this3 = 0;
            				}
            				else {
HXLINE( 480)					this3 = Value1;
            				}
            			}
HXDLIN( 480)			this1 = (this1 | (this3 << 8));
            		}
HXLINE( 481)		{
HXLINE( 481)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 481)			this1 = (this1 & -256);
HXDLIN( 481)			int this4;
HXDLIN( 481)			if ((Value2 > 255)) {
HXLINE( 481)				this4 = 255;
            			}
            			else {
HXLINE( 481)				if ((Value2 < 0)) {
HXLINE( 481)					this4 = 0;
            				}
            				else {
HXLINE( 481)					this4 = Value2;
            				}
            			}
HXDLIN( 481)			this1 = (this1 | this4);
            		}
HXLINE( 482)		{
HXLINE( 482)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 482)			this1 = (this1 & 16777215);
HXDLIN( 482)			int this5;
HXDLIN( 482)			if ((Value3 > 255)) {
HXLINE( 482)				this5 = 255;
            			}
            			else {
HXLINE( 482)				if ((Value3 < 0)) {
HXLINE( 482)					this5 = 0;
            				}
            				else {
HXLINE( 482)					this5 = Value3;
            				}
            			}
HXDLIN( 482)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 483)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGBFloat,return )

int FlxColor_Impl__obj::setCMYK(int this1,Float Cyan,Float Magenta,Float Yellow,Float Black,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_497_setCMYK)
HXLINE( 498)		{
HXLINE( 498)			Float Value = ((( (Float)(1) ) - Cyan) * (( (Float)(1) ) - Black));
HXDLIN( 498)			{
HXLINE( 498)				int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 498)				this1 = (this1 & -16711681);
HXDLIN( 498)				int this2;
HXDLIN( 498)				if ((Value1 > 255)) {
HXLINE( 498)					this2 = 255;
            				}
            				else {
HXLINE( 498)					if ((Value1 < 0)) {
HXLINE( 498)						this2 = 0;
            					}
            					else {
HXLINE( 498)						this2 = Value1;
            					}
            				}
HXDLIN( 498)				this1 = (this1 | (this2 << 16));
            			}
            		}
HXLINE( 499)		{
HXLINE( 499)			Float Value2 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 499)			{
HXLINE( 499)				int Value3 = ::Math_obj::round((Value2 * ( (Float)(255) )));
HXDLIN( 499)				this1 = (this1 & -65281);
HXDLIN( 499)				int this3;
HXDLIN( 499)				if ((Value3 > 255)) {
HXLINE( 499)					this3 = 255;
            				}
            				else {
HXLINE( 499)					if ((Value3 < 0)) {
HXLINE( 499)						this3 = 0;
            					}
            					else {
HXLINE( 499)						this3 = Value3;
            					}
            				}
HXDLIN( 499)				this1 = (this1 | (this3 << 8));
            			}
            		}
HXLINE( 500)		{
HXLINE( 500)			Float Value4 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 500)			{
HXLINE( 500)				int Value5 = ::Math_obj::round((Value4 * ( (Float)(255) )));
HXDLIN( 500)				this1 = (this1 & -256);
HXDLIN( 500)				int this4;
HXDLIN( 500)				if ((Value5 > 255)) {
HXLINE( 500)					this4 = 255;
            				}
            				else {
HXLINE( 500)					if ((Value5 < 0)) {
HXLINE( 500)						this4 = 0;
            					}
            					else {
HXLINE( 500)						this4 = Value5;
            					}
            				}
HXDLIN( 500)				this1 = (this1 | this4);
            			}
            		}
HXLINE( 501)		{
HXLINE( 501)			int Value6 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 501)			this1 = (this1 & 16777215);
HXDLIN( 501)			int this5;
HXDLIN( 501)			if ((Value6 > 255)) {
HXLINE( 501)				this5 = 255;
            			}
            			else {
HXLINE( 501)				if ((Value6 < 0)) {
HXLINE( 501)					this5 = 0;
            				}
            				else {
HXLINE( 501)					this5 = Value6;
            				}
            			}
HXDLIN( 501)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 502)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setCMYK,return )

int FlxColor_Impl__obj::setHSB(int this1,Float Hue,Float Saturation,Float Brightness,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_515_setHSB)
HXLINE( 516)		Float chroma = (Brightness * Saturation);
HXLINE( 517)		Float match = (Brightness - chroma);
HXLINE( 518)		Float Hue1 = Hue;
HXDLIN( 518)		Float Chroma = chroma;
HXDLIN( 518)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 518)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 518)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 518)		Chroma = (Chroma + match);
HXDLIN( 518)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 518)				{
HXLINE( 518)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -16711681);
HXDLIN( 518)					int this2;
HXDLIN( 518)					if ((Value > 255)) {
HXLINE( 518)						this2 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value < 0)) {
HXLINE( 518)							this2 = 0;
            						}
            						else {
HXLINE( 518)							this2 = Value;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -65281);
HXDLIN( 518)					int this3;
HXDLIN( 518)					if ((Value1 > 255)) {
HXLINE( 518)						this3 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value1 < 0)) {
HXLINE( 518)							this3 = 0;
            						}
            						else {
HXLINE( 518)							this3 = Value1;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & -256);
HXDLIN( 518)					int this4;
HXDLIN( 518)					if ((Value2 > 255)) {
HXLINE( 518)						this4 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value2 < 0)) {
HXLINE( 518)							this4 = 0;
            						}
            						else {
HXLINE( 518)							this4 = Value2;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | this4);
            				}
HXDLIN( 518)				{
HXLINE( 518)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 518)					this1 = (this1 & 16777215);
HXDLIN( 518)					int this5;
HXDLIN( 518)					if ((Value3 > 255)) {
HXLINE( 518)						this5 = 255;
            					}
            					else {
HXLINE( 518)						if ((Value3 < 0)) {
HXLINE( 518)							this5 = 0;
            						}
            						else {
HXLINE( 518)							this5 = Value3;
            						}
            					}
HXDLIN( 518)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 518)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSB,return )

int FlxColor_Impl__obj::setHSL(int this1,Float Hue,Float Saturation,Float Lightness,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_531_setHSL)
HXLINE( 532)		Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Lightness) - ( (Float)(1) )))) * Saturation);
HXLINE( 533)		Float match = (Lightness - (chroma / ( (Float)(2) )));
HXLINE( 534)		Float Hue1 = Hue;
HXDLIN( 534)		Float Chroma = chroma;
HXDLIN( 534)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 534)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 534)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 534)		Chroma = (Chroma + match);
HXDLIN( 534)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 534)				{
HXLINE( 534)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -16711681);
HXDLIN( 534)					int this2;
HXDLIN( 534)					if ((Value > 255)) {
HXLINE( 534)						this2 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value < 0)) {
HXLINE( 534)							this2 = 0;
            						}
            						else {
HXLINE( 534)							this2 = Value;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -65281);
HXDLIN( 534)					int this3;
HXDLIN( 534)					if ((Value1 > 255)) {
HXLINE( 534)						this3 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value1 < 0)) {
HXLINE( 534)							this3 = 0;
            						}
            						else {
HXLINE( 534)							this3 = Value1;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & -256);
HXDLIN( 534)					int this4;
HXDLIN( 534)					if ((Value2 > 255)) {
HXLINE( 534)						this4 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value2 < 0)) {
HXLINE( 534)							this4 = 0;
            						}
            						else {
HXLINE( 534)							this4 = Value2;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | this4);
            				}
HXDLIN( 534)				{
HXLINE( 534)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 534)					this1 = (this1 & 16777215);
HXDLIN( 534)					int this5;
HXDLIN( 534)					if ((Value3 > 255)) {
HXLINE( 534)						this5 = 255;
            					}
            					else {
HXLINE( 534)						if ((Value3 < 0)) {
HXLINE( 534)							this5 = 0;
            						}
            						else {
HXLINE( 534)							this5 = Value3;
            						}
            					}
HXDLIN( 534)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 534)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSL,return )

int FlxColor_Impl__obj::setHSChromaMatch(int this1,Float Hue,Float Saturation,Float Chroma,Float Match,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_541_setHSChromaMatch)
HXLINE( 542)		Hue = ::hx::Mod(Hue,360);
HXLINE( 543)		Float hueD = (Hue / ( (Float)(60) ));
HXLINE( 544)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + Match);
HXLINE( 545)		Chroma = (Chroma + Match);
HXLINE( 547)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 550)				{
HXLINE( 550)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 550)					this1 = (this1 & -16711681);
HXDLIN( 550)					int this2;
HXDLIN( 550)					if ((Value > 255)) {
HXLINE( 550)						this2 = 255;
            					}
            					else {
HXLINE( 550)						if ((Value < 0)) {
HXLINE( 550)							this2 = 0;
            						}
            						else {
HXLINE( 550)							this2 = Value;
            						}
            					}
HXDLIN( 550)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 550)				{
HXLINE( 550)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 550)					this1 = (this1 & -65281);
HXDLIN( 550)					int this3;
HXDLIN( 550)					if ((Value1 > 255)) {
HXLINE( 550)						this3 = 255;
            					}
            					else {
HXLINE( 550)						if ((Value1 < 0)) {
HXLINE( 550)							this3 = 0;
            						}
            						else {
HXLINE( 550)							this3 = Value1;
            						}
            					}
HXDLIN( 550)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 550)				{
HXLINE( 550)					int Value2 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 550)					this1 = (this1 & -256);
HXDLIN( 550)					int this4;
HXDLIN( 550)					if ((Value2 > 255)) {
HXLINE( 550)						this4 = 255;
            					}
            					else {
HXLINE( 550)						if ((Value2 < 0)) {
HXLINE( 550)							this4 = 0;
            						}
            						else {
HXLINE( 550)							this4 = Value2;
            						}
            					}
HXDLIN( 550)					this1 = (this1 | this4);
            				}
HXDLIN( 550)				{
HXLINE( 550)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 550)					this1 = (this1 & 16777215);
HXDLIN( 550)					int this5;
HXDLIN( 550)					if ((Value3 > 255)) {
HXLINE( 550)						this5 = 255;
            					}
            					else {
HXLINE( 550)						if ((Value3 < 0)) {
HXLINE( 550)							this5 = 0;
            						}
            						else {
HXLINE( 550)							this5 = Value3;
            						}
            					}
HXDLIN( 550)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 552)				{
HXLINE( 552)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 552)					this1 = (this1 & -16711681);
HXDLIN( 552)					int this2;
HXDLIN( 552)					if ((Value > 255)) {
HXLINE( 552)						this2 = 255;
            					}
            					else {
HXLINE( 552)						if ((Value < 0)) {
HXLINE( 552)							this2 = 0;
            						}
            						else {
HXLINE( 552)							this2 = Value;
            						}
            					}
HXDLIN( 552)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 552)				{
HXLINE( 552)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 552)					this1 = (this1 & -65281);
HXDLIN( 552)					int this3;
HXDLIN( 552)					if ((Value1 > 255)) {
HXLINE( 552)						this3 = 255;
            					}
            					else {
HXLINE( 552)						if ((Value1 < 0)) {
HXLINE( 552)							this3 = 0;
            						}
            						else {
HXLINE( 552)							this3 = Value1;
            						}
            					}
HXDLIN( 552)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 552)				{
HXLINE( 552)					int Value2 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 552)					this1 = (this1 & -256);
HXDLIN( 552)					int this4;
HXDLIN( 552)					if ((Value2 > 255)) {
HXLINE( 552)						this4 = 255;
            					}
            					else {
HXLINE( 552)						if ((Value2 < 0)) {
HXLINE( 552)							this4 = 0;
            						}
            						else {
HXLINE( 552)							this4 = Value2;
            						}
            					}
HXDLIN( 552)					this1 = (this1 | this4);
            				}
HXDLIN( 552)				{
HXLINE( 552)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 552)					this1 = (this1 & 16777215);
HXDLIN( 552)					int this5;
HXDLIN( 552)					if ((Value3 > 255)) {
HXLINE( 552)						this5 = 255;
            					}
            					else {
HXLINE( 552)						if ((Value3 < 0)) {
HXLINE( 552)							this5 = 0;
            						}
            						else {
HXLINE( 552)							this5 = Value3;
            						}
            					}
HXDLIN( 552)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 554)				{
HXLINE( 554)					int Value = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 554)					this1 = (this1 & -16711681);
HXDLIN( 554)					int this2;
HXDLIN( 554)					if ((Value > 255)) {
HXLINE( 554)						this2 = 255;
            					}
            					else {
HXLINE( 554)						if ((Value < 0)) {
HXLINE( 554)							this2 = 0;
            						}
            						else {
HXLINE( 554)							this2 = Value;
            						}
            					}
HXDLIN( 554)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 554)				{
HXLINE( 554)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 554)					this1 = (this1 & -65281);
HXDLIN( 554)					int this3;
HXDLIN( 554)					if ((Value1 > 255)) {
HXLINE( 554)						this3 = 255;
            					}
            					else {
HXLINE( 554)						if ((Value1 < 0)) {
HXLINE( 554)							this3 = 0;
            						}
            						else {
HXLINE( 554)							this3 = Value1;
            						}
            					}
HXDLIN( 554)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 554)				{
HXLINE( 554)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 554)					this1 = (this1 & -256);
HXDLIN( 554)					int this4;
HXDLIN( 554)					if ((Value2 > 255)) {
HXLINE( 554)						this4 = 255;
            					}
            					else {
HXLINE( 554)						if ((Value2 < 0)) {
HXLINE( 554)							this4 = 0;
            						}
            						else {
HXLINE( 554)							this4 = Value2;
            						}
            					}
HXDLIN( 554)					this1 = (this1 | this4);
            				}
HXDLIN( 554)				{
HXLINE( 554)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 554)					this1 = (this1 & 16777215);
HXDLIN( 554)					int this5;
HXDLIN( 554)					if ((Value3 > 255)) {
HXLINE( 554)						this5 = 255;
            					}
            					else {
HXLINE( 554)						if ((Value3 < 0)) {
HXLINE( 554)							this5 = 0;
            						}
            						else {
HXLINE( 554)							this5 = Value3;
            						}
            					}
HXDLIN( 554)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 556)				{
HXLINE( 556)					int Value = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 556)					this1 = (this1 & -16711681);
HXDLIN( 556)					int this2;
HXDLIN( 556)					if ((Value > 255)) {
HXLINE( 556)						this2 = 255;
            					}
            					else {
HXLINE( 556)						if ((Value < 0)) {
HXLINE( 556)							this2 = 0;
            						}
            						else {
HXLINE( 556)							this2 = Value;
            						}
            					}
HXDLIN( 556)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 556)				{
HXLINE( 556)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 556)					this1 = (this1 & -65281);
HXDLIN( 556)					int this3;
HXDLIN( 556)					if ((Value1 > 255)) {
HXLINE( 556)						this3 = 255;
            					}
            					else {
HXLINE( 556)						if ((Value1 < 0)) {
HXLINE( 556)							this3 = 0;
            						}
            						else {
HXLINE( 556)							this3 = Value1;
            						}
            					}
HXDLIN( 556)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 556)				{
HXLINE( 556)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 556)					this1 = (this1 & -256);
HXDLIN( 556)					int this4;
HXDLIN( 556)					if ((Value2 > 255)) {
HXLINE( 556)						this4 = 255;
            					}
            					else {
HXLINE( 556)						if ((Value2 < 0)) {
HXLINE( 556)							this4 = 0;
            						}
            						else {
HXLINE( 556)							this4 = Value2;
            						}
            					}
HXDLIN( 556)					this1 = (this1 | this4);
            				}
HXDLIN( 556)				{
HXLINE( 556)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 556)					this1 = (this1 & 16777215);
HXDLIN( 556)					int this5;
HXDLIN( 556)					if ((Value3 > 255)) {
HXLINE( 556)						this5 = 255;
            					}
            					else {
HXLINE( 556)						if ((Value3 < 0)) {
HXLINE( 556)							this5 = 0;
            						}
            						else {
HXLINE( 556)							this5 = Value3;
            						}
            					}
HXDLIN( 556)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 558)				{
HXLINE( 558)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 558)					this1 = (this1 & -16711681);
HXDLIN( 558)					int this2;
HXDLIN( 558)					if ((Value > 255)) {
HXLINE( 558)						this2 = 255;
            					}
            					else {
HXLINE( 558)						if ((Value < 0)) {
HXLINE( 558)							this2 = 0;
            						}
            						else {
HXLINE( 558)							this2 = Value;
            						}
            					}
HXDLIN( 558)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 558)				{
HXLINE( 558)					int Value1 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 558)					this1 = (this1 & -65281);
HXDLIN( 558)					int this3;
HXDLIN( 558)					if ((Value1 > 255)) {
HXLINE( 558)						this3 = 255;
            					}
            					else {
HXLINE( 558)						if ((Value1 < 0)) {
HXLINE( 558)							this3 = 0;
            						}
            						else {
HXLINE( 558)							this3 = Value1;
            						}
            					}
HXDLIN( 558)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 558)				{
HXLINE( 558)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 558)					this1 = (this1 & -256);
HXDLIN( 558)					int this4;
HXDLIN( 558)					if ((Value2 > 255)) {
HXLINE( 558)						this4 = 255;
            					}
            					else {
HXLINE( 558)						if ((Value2 < 0)) {
HXLINE( 558)							this4 = 0;
            						}
            						else {
HXLINE( 558)							this4 = Value2;
            						}
            					}
HXDLIN( 558)					this1 = (this1 | this4);
            				}
HXDLIN( 558)				{
HXLINE( 558)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 558)					this1 = (this1 & 16777215);
HXDLIN( 558)					int this5;
HXDLIN( 558)					if ((Value3 > 255)) {
HXLINE( 558)						this5 = 255;
            					}
            					else {
HXLINE( 558)						if ((Value3 < 0)) {
HXLINE( 558)							this5 = 0;
            						}
            						else {
HXLINE( 558)							this5 = Value3;
            						}
            					}
HXDLIN( 558)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 560)				{
HXLINE( 560)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 560)					this1 = (this1 & -16711681);
HXDLIN( 560)					int this2;
HXDLIN( 560)					if ((Value > 255)) {
HXLINE( 560)						this2 = 255;
            					}
            					else {
HXLINE( 560)						if ((Value < 0)) {
HXLINE( 560)							this2 = 0;
            						}
            						else {
HXLINE( 560)							this2 = Value;
            						}
            					}
HXDLIN( 560)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 560)				{
HXLINE( 560)					int Value1 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 560)					this1 = (this1 & -65281);
HXDLIN( 560)					int this3;
HXDLIN( 560)					if ((Value1 > 255)) {
HXLINE( 560)						this3 = 255;
            					}
            					else {
HXLINE( 560)						if ((Value1 < 0)) {
HXLINE( 560)							this3 = 0;
            						}
            						else {
HXLINE( 560)							this3 = Value1;
            						}
            					}
HXDLIN( 560)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 560)				{
HXLINE( 560)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 560)					this1 = (this1 & -256);
HXDLIN( 560)					int this4;
HXDLIN( 560)					if ((Value2 > 255)) {
HXLINE( 560)						this4 = 255;
            					}
            					else {
HXLINE( 560)						if ((Value2 < 0)) {
HXLINE( 560)							this4 = 0;
            						}
            						else {
HXLINE( 560)							this4 = Value2;
            						}
            					}
HXDLIN( 560)					this1 = (this1 | this4);
            				}
HXDLIN( 560)				{
HXLINE( 560)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 560)					this1 = (this1 & 16777215);
HXDLIN( 560)					int this5;
HXDLIN( 560)					if ((Value3 > 255)) {
HXLINE( 560)						this5 = 255;
            					}
            					else {
HXLINE( 560)						if ((Value3 < 0)) {
HXLINE( 560)							this5 = 0;
            						}
            						else {
HXLINE( 560)							this5 = Value3;
            						}
            					}
HXDLIN( 560)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXLINE( 563)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setHSChromaMatch,return )

int FlxColor_Impl__obj::_new(::hx::Null< int >  __o_Value){
            		int Value = __o_Value.Default(0);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_566__new)
HXDLIN( 566)		int this1 = Value;
HXDLIN( 566)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,_new,return )

int FlxColor_Impl__obj::getThis(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_576_getThis)
HXDLIN( 576)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getThis,return )

void FlxColor_Impl__obj::validate(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_581_validate)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,validate,(void))

int FlxColor_Impl__obj::get_red(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_589_get_red)
HXDLIN( 589)		return ((this1 >> 16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_red,return )

int FlxColor_Impl__obj::get_green(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_594_get_green)
HXDLIN( 594)		return ((this1 >> 8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_green,return )

int FlxColor_Impl__obj::get_blue(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_599_get_blue)
HXDLIN( 599)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blue,return )

int FlxColor_Impl__obj::get_alpha(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_604_get_alpha)
HXDLIN( 604)		return ((this1 >> 24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alpha,return )

Float FlxColor_Impl__obj::get_redFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_609_get_redFloat)
HXDLIN( 609)		return (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_redFloat,return )

Float FlxColor_Impl__obj::get_greenFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_614_get_greenFloat)
HXDLIN( 614)		return (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_greenFloat,return )

Float FlxColor_Impl__obj::get_blueFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_619_get_blueFloat)
HXDLIN( 619)		return (( (Float)((this1 & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blueFloat,return )

Float FlxColor_Impl__obj::get_alphaFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_624_get_alphaFloat)
HXDLIN( 624)		return (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alphaFloat,return )

int FlxColor_Impl__obj::set_red(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_628_set_red)
HXLINE( 630)		this1 = (this1 & -16711681);
HXLINE( 631)		int this2;
HXDLIN( 631)		if ((Value > 255)) {
HXLINE( 631)			this2 = 255;
            		}
            		else {
HXLINE( 631)			if ((Value < 0)) {
HXLINE( 631)				this2 = 0;
            			}
            			else {
HXLINE( 631)				this2 = Value;
            			}
            		}
HXDLIN( 631)		this1 = (this1 | (this2 << 16));
HXLINE( 632)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_red,return )

int FlxColor_Impl__obj::set_green(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_636_set_green)
HXLINE( 638)		this1 = (this1 & -65281);
HXLINE( 639)		int this2;
HXDLIN( 639)		if ((Value > 255)) {
HXLINE( 639)			this2 = 255;
            		}
            		else {
HXLINE( 639)			if ((Value < 0)) {
HXLINE( 639)				this2 = 0;
            			}
            			else {
HXLINE( 639)				this2 = Value;
            			}
            		}
HXDLIN( 639)		this1 = (this1 | (this2 << 8));
HXLINE( 640)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_green,return )

int FlxColor_Impl__obj::set_blue(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_644_set_blue)
HXLINE( 646)		this1 = (this1 & -256);
HXLINE( 647)		int this2;
HXDLIN( 647)		if ((Value > 255)) {
HXLINE( 647)			this2 = 255;
            		}
            		else {
HXLINE( 647)			if ((Value < 0)) {
HXLINE( 647)				this2 = 0;
            			}
            			else {
HXLINE( 647)				this2 = Value;
            			}
            		}
HXDLIN( 647)		this1 = (this1 | this2);
HXLINE( 648)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blue,return )

int FlxColor_Impl__obj::set_alpha(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_652_set_alpha)
HXLINE( 654)		this1 = (this1 & 16777215);
HXLINE( 655)		int this2;
HXDLIN( 655)		if ((Value > 255)) {
HXLINE( 655)			this2 = 255;
            		}
            		else {
HXLINE( 655)			if ((Value < 0)) {
HXLINE( 655)				this2 = 0;
            			}
            			else {
HXLINE( 655)				this2 = Value;
            			}
            		}
HXDLIN( 655)		this1 = (this1 | (this2 << 24));
HXLINE( 656)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alpha,return )

Float FlxColor_Impl__obj::set_redFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_660_set_redFloat)
HXLINE( 661)		{
HXLINE( 661)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 661)			this1 = (this1 & -16711681);
HXDLIN( 661)			int this2;
HXDLIN( 661)			if ((Value1 > 255)) {
HXLINE( 661)				this2 = 255;
            			}
            			else {
HXLINE( 661)				if ((Value1 < 0)) {
HXLINE( 661)					this2 = 0;
            				}
            				else {
HXLINE( 661)					this2 = Value1;
            				}
            			}
HXDLIN( 661)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 662)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_redFloat,return )

Float FlxColor_Impl__obj::set_greenFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_666_set_greenFloat)
HXLINE( 667)		{
HXLINE( 667)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 667)			this1 = (this1 & -65281);
HXDLIN( 667)			int this2;
HXDLIN( 667)			if ((Value1 > 255)) {
HXLINE( 667)				this2 = 255;
            			}
            			else {
HXLINE( 667)				if ((Value1 < 0)) {
HXLINE( 667)					this2 = 0;
            				}
            				else {
HXLINE( 667)					this2 = Value1;
            				}
            			}
HXDLIN( 667)			this1 = (this1 | (this2 << 8));
            		}
HXLINE( 668)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_greenFloat,return )

Float FlxColor_Impl__obj::set_blueFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_672_set_blueFloat)
HXLINE( 673)		{
HXLINE( 673)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 673)			this1 = (this1 & -256);
HXDLIN( 673)			int this2;
HXDLIN( 673)			if ((Value1 > 255)) {
HXLINE( 673)				this2 = 255;
            			}
            			else {
HXLINE( 673)				if ((Value1 < 0)) {
HXLINE( 673)					this2 = 0;
            				}
            				else {
HXLINE( 673)					this2 = Value1;
            				}
            			}
HXDLIN( 673)			this1 = (this1 | this2);
            		}
HXLINE( 674)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blueFloat,return )

Float FlxColor_Impl__obj::set_alphaFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_678_set_alphaFloat)
HXLINE( 679)		{
HXLINE( 679)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 679)			this1 = (this1 & 16777215);
HXDLIN( 679)			int this2;
HXDLIN( 679)			if ((Value1 > 255)) {
HXLINE( 679)				this2 = 255;
            			}
            			else {
HXLINE( 679)				if ((Value1 < 0)) {
HXLINE( 679)					this2 = 0;
            				}
            				else {
HXLINE( 679)					this2 = Value1;
            				}
            			}
HXDLIN( 679)			this1 = (this1 | (this2 << 24));
            		}
HXLINE( 680)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alphaFloat,return )

Float FlxColor_Impl__obj::get_cyan(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_685_get_cyan)
HXDLIN( 685)		return (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_cyan,return )

Float FlxColor_Impl__obj::get_magenta(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_690_get_magenta)
HXDLIN( 690)		return (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_magenta,return )

Float FlxColor_Impl__obj::get_yellow(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_695_get_yellow)
HXDLIN( 695)		return (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_yellow,return )

Float FlxColor_Impl__obj::get_black(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_700_get_black)
HXDLIN( 700)		return (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_black,return )

Float FlxColor_Impl__obj::set_cyan(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_704_set_cyan)
HXLINE( 705)		{
HXLINE( 705)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 705)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 705)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 705)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 705)			{
HXLINE( 705)				Float Value1 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 705)				{
HXLINE( 705)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 705)					this1 = (this1 & -16711681);
HXDLIN( 705)					int this2;
HXDLIN( 705)					if ((Value2 > 255)) {
HXLINE( 705)						this2 = 255;
            					}
            					else {
HXLINE( 705)						if ((Value2 < 0)) {
HXLINE( 705)							this2 = 0;
            						}
            						else {
HXLINE( 705)							this2 = Value2;
            						}
            					}
HXDLIN( 705)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 705)			{
HXLINE( 705)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 705)				{
HXLINE( 705)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 705)					this1 = (this1 & -65281);
HXDLIN( 705)					int this3;
HXDLIN( 705)					if ((Value4 > 255)) {
HXLINE( 705)						this3 = 255;
            					}
            					else {
HXLINE( 705)						if ((Value4 < 0)) {
HXLINE( 705)							this3 = 0;
            						}
            						else {
HXLINE( 705)							this3 = Value4;
            						}
            					}
HXDLIN( 705)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 705)			{
HXLINE( 705)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 705)				{
HXLINE( 705)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 705)					this1 = (this1 & -256);
HXDLIN( 705)					int this4;
HXDLIN( 705)					if ((Value6 > 255)) {
HXLINE( 705)						this4 = 255;
            					}
            					else {
HXLINE( 705)						if ((Value6 < 0)) {
HXLINE( 705)							this4 = 0;
            						}
            						else {
HXLINE( 705)							this4 = Value6;
            						}
            					}
HXDLIN( 705)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 705)			{
HXLINE( 705)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 705)				this1 = (this1 & 16777215);
HXDLIN( 705)				int this5;
HXDLIN( 705)				if ((Value7 > 255)) {
HXLINE( 705)					this5 = 255;
            				}
            				else {
HXLINE( 705)					if ((Value7 < 0)) {
HXLINE( 705)						this5 = 0;
            					}
            					else {
HXLINE( 705)						this5 = Value7;
            					}
            				}
HXDLIN( 705)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 706)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_cyan,return )

Float FlxColor_Impl__obj::set_magenta(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_710_set_magenta)
HXLINE( 711)		{
HXLINE( 711)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 711)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 711)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 711)			{
HXLINE( 711)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Black));
HXDLIN( 711)				{
HXLINE( 711)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 711)					this1 = (this1 & -16711681);
HXDLIN( 711)					int this2;
HXDLIN( 711)					if ((Value2 > 255)) {
HXLINE( 711)						this2 = 255;
            					}
            					else {
HXLINE( 711)						if ((Value2 < 0)) {
HXLINE( 711)							this2 = 0;
            						}
            						else {
HXLINE( 711)							this2 = Value2;
            						}
            					}
HXDLIN( 711)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 711)			{
HXLINE( 711)				Float Value3 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 711)				{
HXLINE( 711)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 711)					this1 = (this1 & -65281);
HXDLIN( 711)					int this3;
HXDLIN( 711)					if ((Value4 > 255)) {
HXLINE( 711)						this3 = 255;
            					}
            					else {
HXLINE( 711)						if ((Value4 < 0)) {
HXLINE( 711)							this3 = 0;
            						}
            						else {
HXLINE( 711)							this3 = Value4;
            						}
            					}
HXDLIN( 711)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 711)			{
HXLINE( 711)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 711)				{
HXLINE( 711)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 711)					this1 = (this1 & -256);
HXDLIN( 711)					int this4;
HXDLIN( 711)					if ((Value6 > 255)) {
HXLINE( 711)						this4 = 255;
            					}
            					else {
HXLINE( 711)						if ((Value6 < 0)) {
HXLINE( 711)							this4 = 0;
            						}
            						else {
HXLINE( 711)							this4 = Value6;
            						}
            					}
HXDLIN( 711)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 711)			{
HXLINE( 711)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 711)				this1 = (this1 & 16777215);
HXDLIN( 711)				int this5;
HXDLIN( 711)				if ((Value7 > 255)) {
HXLINE( 711)					this5 = 255;
            				}
            				else {
HXLINE( 711)					if ((Value7 < 0)) {
HXLINE( 711)						this5 = 0;
            					}
            					else {
HXLINE( 711)						this5 = Value7;
            					}
            				}
HXDLIN( 711)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 712)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_magenta,return )

Float FlxColor_Impl__obj::set_yellow(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_716_set_yellow)
HXLINE( 717)		{
HXLINE( 717)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 717)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 717)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 717)			{
HXLINE( 717)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Black));
HXDLIN( 717)				{
HXLINE( 717)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 717)					this1 = (this1 & -16711681);
HXDLIN( 717)					int this2;
HXDLIN( 717)					if ((Value2 > 255)) {
HXLINE( 717)						this2 = 255;
            					}
            					else {
HXLINE( 717)						if ((Value2 < 0)) {
HXLINE( 717)							this2 = 0;
            						}
            						else {
HXLINE( 717)							this2 = Value2;
            						}
            					}
HXDLIN( 717)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 717)			{
HXLINE( 717)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 717)				{
HXLINE( 717)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 717)					this1 = (this1 & -65281);
HXDLIN( 717)					int this3;
HXDLIN( 717)					if ((Value4 > 255)) {
HXLINE( 717)						this3 = 255;
            					}
            					else {
HXLINE( 717)						if ((Value4 < 0)) {
HXLINE( 717)							this3 = 0;
            						}
            						else {
HXLINE( 717)							this3 = Value4;
            						}
            					}
HXDLIN( 717)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 717)			{
HXLINE( 717)				Float Value5 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 717)				{
HXLINE( 717)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 717)					this1 = (this1 & -256);
HXDLIN( 717)					int this4;
HXDLIN( 717)					if ((Value6 > 255)) {
HXLINE( 717)						this4 = 255;
            					}
            					else {
HXLINE( 717)						if ((Value6 < 0)) {
HXLINE( 717)							this4 = 0;
            						}
            						else {
HXLINE( 717)							this4 = Value6;
            						}
            					}
HXDLIN( 717)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 717)			{
HXLINE( 717)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 717)				this1 = (this1 & 16777215);
HXDLIN( 717)				int this5;
HXDLIN( 717)				if ((Value7 > 255)) {
HXLINE( 717)					this5 = 255;
            				}
            				else {
HXLINE( 717)					if ((Value7 < 0)) {
HXLINE( 717)						this5 = 0;
            					}
            					else {
HXLINE( 717)						this5 = Value7;
            					}
            				}
HXDLIN( 717)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 718)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_yellow,return )

Float FlxColor_Impl__obj::set_black(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_722_set_black)
HXLINE( 723)		{
HXLINE( 723)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 723)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 723)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 723)			{
HXLINE( 723)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Value));
HXDLIN( 723)				{
HXLINE( 723)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 723)					this1 = (this1 & -16711681);
HXDLIN( 723)					int this2;
HXDLIN( 723)					if ((Value2 > 255)) {
HXLINE( 723)						this2 = 255;
            					}
            					else {
HXLINE( 723)						if ((Value2 < 0)) {
HXLINE( 723)							this2 = 0;
            						}
            						else {
HXLINE( 723)							this2 = Value2;
            						}
            					}
HXDLIN( 723)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 723)			{
HXLINE( 723)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Value));
HXDLIN( 723)				{
HXLINE( 723)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 723)					this1 = (this1 & -65281);
HXDLIN( 723)					int this3;
HXDLIN( 723)					if ((Value4 > 255)) {
HXLINE( 723)						this3 = 255;
            					}
            					else {
HXLINE( 723)						if ((Value4 < 0)) {
HXLINE( 723)							this3 = 0;
            						}
            						else {
HXLINE( 723)							this3 = Value4;
            						}
            					}
HXDLIN( 723)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 723)			{
HXLINE( 723)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Value));
HXDLIN( 723)				{
HXLINE( 723)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 723)					this1 = (this1 & -256);
HXDLIN( 723)					int this4;
HXDLIN( 723)					if ((Value6 > 255)) {
HXLINE( 723)						this4 = 255;
            					}
            					else {
HXLINE( 723)						if ((Value6 < 0)) {
HXLINE( 723)							this4 = 0;
            						}
            						else {
HXLINE( 723)							this4 = Value6;
            						}
            					}
HXDLIN( 723)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 723)			{
HXLINE( 723)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 723)				this1 = (this1 & 16777215);
HXDLIN( 723)				int this5;
HXDLIN( 723)				if ((Value7 > 255)) {
HXLINE( 723)					this5 = 255;
            				}
            				else {
HXLINE( 723)					if ((Value7 < 0)) {
HXLINE( 723)						this5 = 0;
            					}
            					else {
HXLINE( 723)						this5 = Value7;
            					}
            				}
HXDLIN( 723)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 724)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_black,return )

Float FlxColor_Impl__obj::get_hue(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_728_get_hue)
HXLINE( 729)		Float hueRad = ::Math_obj::atan2((::Math_obj::sqrt(( (Float)(3) )) * ((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(((( (Float)(2) ) * (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXLINE( 730)		Float hue = ( (Float)(0) );
HXLINE( 731)		if ((hueRad != 0)) {
HXLINE( 733)			hue = ((( (Float)(180) ) / ::Math_obj::PI) * ::Math_obj::atan2((::Math_obj::sqrt(( (Float)(3) )) * ((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(((( (Float)(2) ) * (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            		}
HXLINE( 736)		if ((hue < 0)) {
HXLINE( 736)			return (hue + 360);
            		}
            		else {
HXLINE( 736)			return hue;
            		}
HXDLIN( 736)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_hue,return )

Float FlxColor_Impl__obj::get_brightness(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_741_get_brightness)
HXDLIN( 741)		return ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_brightness,return )

Float FlxColor_Impl__obj::get_saturation(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_746_get_saturation)
HXDLIN( 746)		return ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_saturation,return )

Float FlxColor_Impl__obj::get_lightness(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_751_get_lightness)
HXDLIN( 751)		return ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_lightness,return )

Float FlxColor_Impl__obj::set_hue(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_755_set_hue)
HXLINE( 756)		{
HXLINE( 756)			Float Brightness = ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXDLIN( 756)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 756)			Float chroma = (Brightness * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 756)			Float match = (Brightness - chroma);
HXDLIN( 756)			{
HXLINE( 756)				Float Hue = Value;
HXDLIN( 756)				Float Chroma = chroma;
HXDLIN( 756)				Hue = ::hx::Mod(Hue,360);
HXDLIN( 756)				Float hueD = (Hue / ( (Float)(60) ));
HXDLIN( 756)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 756)				Chroma = (Chroma + match);
HXDLIN( 756)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 756)						{
HXLINE( 756)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -16711681);
HXDLIN( 756)							int this2;
HXDLIN( 756)							if ((Value > 255)) {
HXLINE( 756)								this2 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value < 0)) {
HXLINE( 756)									this2 = 0;
            								}
            								else {
HXLINE( 756)									this2 = Value;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -65281);
HXDLIN( 756)							int this3;
HXDLIN( 756)							if ((Value1 > 255)) {
HXLINE( 756)								this3 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value1 < 0)) {
HXLINE( 756)									this3 = 0;
            								}
            								else {
HXLINE( 756)									this3 = Value1;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & -256);
HXDLIN( 756)							int this4;
HXDLIN( 756)							if ((Value2 > 255)) {
HXLINE( 756)								this4 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value2 < 0)) {
HXLINE( 756)									this4 = 0;
            								}
            								else {
HXLINE( 756)									this4 = Value2;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | this4);
            						}
HXDLIN( 756)						{
HXLINE( 756)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 756)							this1 = (this1 & 16777215);
HXDLIN( 756)							int this5;
HXDLIN( 756)							if ((Value3 > 255)) {
HXLINE( 756)								this5 = 255;
            							}
            							else {
HXLINE( 756)								if ((Value3 < 0)) {
HXLINE( 756)									this5 = 0;
            								}
            								else {
HXLINE( 756)									this5 = Value3;
            								}
            							}
HXDLIN( 756)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 757)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_hue,return )

Float FlxColor_Impl__obj::set_saturation(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_761_set_saturation)
HXLINE( 762)		{
HXLINE( 762)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 762)			Float Brightness = ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXDLIN( 762)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 762)			Float chroma = (Brightness * Value);
HXDLIN( 762)			Float match = (Brightness - chroma);
HXDLIN( 762)			{
HXLINE( 762)				Float Hue1 = Hue;
HXDLIN( 762)				Float Chroma = chroma;
HXDLIN( 762)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 762)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 762)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 762)				Chroma = (Chroma + match);
HXDLIN( 762)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 762)						{
HXLINE( 762)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -16711681);
HXDLIN( 762)							int this2;
HXDLIN( 762)							if ((Value > 255)) {
HXLINE( 762)								this2 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value < 0)) {
HXLINE( 762)									this2 = 0;
            								}
            								else {
HXLINE( 762)									this2 = Value;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -65281);
HXDLIN( 762)							int this3;
HXDLIN( 762)							if ((Value1 > 255)) {
HXLINE( 762)								this3 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value1 < 0)) {
HXLINE( 762)									this3 = 0;
            								}
            								else {
HXLINE( 762)									this3 = Value1;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & -256);
HXDLIN( 762)							int this4;
HXDLIN( 762)							if ((Value2 > 255)) {
HXLINE( 762)								this4 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value2 < 0)) {
HXLINE( 762)									this4 = 0;
            								}
            								else {
HXLINE( 762)									this4 = Value2;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | this4);
            						}
HXDLIN( 762)						{
HXLINE( 762)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 762)							this1 = (this1 & 16777215);
HXDLIN( 762)							int this5;
HXDLIN( 762)							if ((Value3 > 255)) {
HXLINE( 762)								this5 = 255;
            							}
            							else {
HXLINE( 762)								if ((Value3 < 0)) {
HXLINE( 762)									this5 = 0;
            								}
            								else {
HXLINE( 762)									this5 = Value3;
            								}
            							}
HXDLIN( 762)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 763)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_saturation,return )

Float FlxColor_Impl__obj::set_brightness(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_767_set_brightness)
HXLINE( 768)		{
HXLINE( 768)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 768)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 768)			Float chroma = (Value * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 768)			Float match = (Value - chroma);
HXDLIN( 768)			{
HXLINE( 768)				Float Hue1 = Hue;
HXDLIN( 768)				Float Chroma = chroma;
HXDLIN( 768)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 768)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 768)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 768)				Chroma = (Chroma + match);
HXDLIN( 768)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 768)						{
HXLINE( 768)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -16711681);
HXDLIN( 768)							int this2;
HXDLIN( 768)							if ((Value > 255)) {
HXLINE( 768)								this2 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value < 0)) {
HXLINE( 768)									this2 = 0;
            								}
            								else {
HXLINE( 768)									this2 = Value;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -65281);
HXDLIN( 768)							int this3;
HXDLIN( 768)							if ((Value1 > 255)) {
HXLINE( 768)								this3 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value1 < 0)) {
HXLINE( 768)									this3 = 0;
            								}
            								else {
HXLINE( 768)									this3 = Value1;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & -256);
HXDLIN( 768)							int this4;
HXDLIN( 768)							if ((Value2 > 255)) {
HXLINE( 768)								this4 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value2 < 0)) {
HXLINE( 768)									this4 = 0;
            								}
            								else {
HXLINE( 768)									this4 = Value2;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | this4);
            						}
HXDLIN( 768)						{
HXLINE( 768)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 768)							this1 = (this1 & 16777215);
HXDLIN( 768)							int this5;
HXDLIN( 768)							if ((Value3 > 255)) {
HXLINE( 768)								this5 = 255;
            							}
            							else {
HXLINE( 768)								if ((Value3 < 0)) {
HXLINE( 768)									this5 = 0;
            								}
            								else {
HXLINE( 768)									this5 = Value3;
            								}
            							}
HXDLIN( 768)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 769)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_brightness,return )

Float FlxColor_Impl__obj::set_lightness(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_773_set_lightness)
HXLINE( 774)		{
HXLINE( 774)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 774)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 774)			Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 774)			Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 774)			{
HXLINE( 774)				Float Hue1 = Hue;
HXDLIN( 774)				Float Chroma = chroma;
HXDLIN( 774)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 774)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 774)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 774)				Chroma = (Chroma + match);
HXDLIN( 774)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 774)						{
HXLINE( 774)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -16711681);
HXDLIN( 774)							int this2;
HXDLIN( 774)							if ((Value > 255)) {
HXLINE( 774)								this2 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value < 0)) {
HXLINE( 774)									this2 = 0;
            								}
            								else {
HXLINE( 774)									this2 = Value;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -65281);
HXDLIN( 774)							int this3;
HXDLIN( 774)							if ((Value1 > 255)) {
HXLINE( 774)								this3 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value1 < 0)) {
HXLINE( 774)									this3 = 0;
            								}
            								else {
HXLINE( 774)									this3 = Value1;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & -256);
HXDLIN( 774)							int this4;
HXDLIN( 774)							if ((Value2 > 255)) {
HXLINE( 774)								this4 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value2 < 0)) {
HXLINE( 774)									this4 = 0;
            								}
            								else {
HXLINE( 774)									this4 = Value2;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | this4);
            						}
HXDLIN( 774)						{
HXLINE( 774)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 774)							this1 = (this1 & 16777215);
HXDLIN( 774)							int this5;
HXDLIN( 774)							if ((Value3 > 255)) {
HXLINE( 774)								this5 = 255;
            							}
            							else {
HXLINE( 774)								if ((Value3 < 0)) {
HXLINE( 774)									this5 = 0;
            								}
            								else {
HXLINE( 774)									this5 = Value3;
            								}
            							}
HXDLIN( 774)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 775)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_lightness,return )

int FlxColor_Impl__obj::set_rgb(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_779_set_rgb)
HXLINE( 781)		this1 = ((this1 & -16777216) | (value & 16777215));
HXLINE( 782)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_rgb,return )

int FlxColor_Impl__obj::get_rgb(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_787_get_rgb)
HXDLIN( 787)		return (this1 & 16777215);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_rgb,return )

Float FlxColor_Impl__obj::maxColor(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_792_maxColor)
HXDLIN( 792)		return ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,maxColor,return )

Float FlxColor_Impl__obj::minColor(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_797_minColor)
HXDLIN( 797)		return ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,minColor,return )

int FlxColor_Impl__obj::boundChannel(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_802_boundChannel)
HXDLIN( 802)		if ((Value > 255)) {
HXDLIN( 802)			return 255;
            		}
            		else {
HXDLIN( 802)			if ((Value < 0)) {
HXDLIN( 802)				return 0;
            			}
            			else {
HXDLIN( 802)				return Value;
            			}
            		}
HXDLIN( 802)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,boundChannel,return )


FlxColor_Impl__obj::FlxColor_Impl__obj()
{
}

bool FlxColor_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setRGB") ) { outValue = setRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSB") ) { outValue = setHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSL") ) { outValue = setHSL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { outValue = fromRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSB") ) { outValue = fromHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"to24Bit") ) { outValue = to24Bit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCMYK") ) { outValue = setCMYK_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getThis") ) { outValue = getThis_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_red") ) { outValue = get_red_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_red") ) { outValue = set_red_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_hue") ) { outValue = get_hue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_hue") ) { outValue = set_hue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_rgb") ) { outValue = set_rgb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { outValue = get_rgb_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromCMYK") ) { outValue = fromCMYK_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gradient") ) { outValue = gradient_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiply") ) { outValue = multiply_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_blue") ) { outValue = get_blue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blue") ) { outValue = set_blue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { outValue = get_cyan_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_cyan") ) { outValue = set_cyan_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxColor") ) { outValue = maxColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minColor") ) { outValue = minColor_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { outValue = get_green_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_green") ) { outValue = set_green_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { outValue = set_alpha_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_black") ) { outValue = get_black_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_black") ) { outValue = set_black_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_yellow") ) { outValue = get_yellow_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_yellow") ) { outValue = set_yellow_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHexString") ) { outValue = toHexString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toWebString") ) { outValue = toWebString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDarkened") ) { outValue = getDarkened_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInverted") ) { outValue = getInverted_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRGBFloat") ) { outValue = setRGBFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_magenta") ) { outValue = get_magenta_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_magenta") ) { outValue = set_magenta_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromRGBFloat") ) { outValue = fromRGBFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { outValue = getColorInfo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getLightened") ) { outValue = getLightened_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_redFloat") ) { outValue = get_redFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_redFloat") ) { outValue = set_redFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boundChannel") ) { outValue = boundChannel_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blueFloat") ) { outValue = get_blueFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blueFloat") ) { outValue = set_blueFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { outValue = get_lightness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { outValue = set_lightness_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_greenFloat") ) { outValue = get_greenFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alphaFloat") ) { outValue = get_alphaFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_greenFloat") ) { outValue = set_greenFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alphaFloat") ) { outValue = set_alphaFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_brightness") ) { outValue = get_brightness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_saturation") ) { outValue = get_saturation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { outValue = set_saturation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { outValue = set_brightness_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSBColorWheel") ) { outValue = getHSBColorWheel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSChromaMatch") ) { outValue = setHSChromaMatch_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { outValue = getTriadicHarmony_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { outValue = getAnalogousHarmony_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { outValue = getComplementHarmony_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { outValue = getSplitComplementHarmony_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxColor_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxColor_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::TRANSPARENT,HX_("TRANSPARENT",32,37,f6,f8)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::WHITE,HX_("WHITE",89,82,ab,47)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::GRAY,HX_("GRAY",e3,97,2c,2f)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BLACK,HX_("BLACK",9f,0d,e0,32)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::GREEN,HX_("GREEN",a3,46,db,17)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::LIME,HX_("LIME",15,df,73,32)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::YELLOW,HX_("YELLOW",74,4b,df,82)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::ORANGE,HX_("ORANGE",ee,5e,3f,f8)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::RED,HX_("RED",31,75,3e,00)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::PURPLE,HX_("PURPLE",3c,a2,0c,24)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BLUE,HX_("BLUE",9a,0a,da,2b)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BROWN,HX_("BROWN",56,06,e2,36)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::PINK,HX_("PINK",76,ba,18,35)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::MAGENTA,HX_("MAGENTA",09,8e,71,8e)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::CYAN,HX_("CYAN",23,0d,8d,2c)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxColor_Impl__obj::colorLookup,HX_("colorLookup",3d,34,de,1b)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &FlxColor_Impl__obj::COLOR_REGEX,HX_("COLOR_REGEX",6b,2b,e2,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxColor_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxColor_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#endif

::hx::Class FlxColor_Impl__obj::__mClass;

static ::String FlxColor_Impl__obj_sStaticFields[] = {
	HX_("TRANSPARENT",32,37,f6,f8),
	HX_("WHITE",89,82,ab,47),
	HX_("GRAY",e3,97,2c,2f),
	HX_("BLACK",9f,0d,e0,32),
	HX_("GREEN",a3,46,db,17),
	HX_("LIME",15,df,73,32),
	HX_("YELLOW",74,4b,df,82),
	HX_("ORANGE",ee,5e,3f,f8),
	HX_("RED",31,75,3e,00),
	HX_("PURPLE",3c,a2,0c,24),
	HX_("BLUE",9a,0a,da,2b),
	HX_("BROWN",56,06,e2,36),
	HX_("PINK",76,ba,18,35),
	HX_("MAGENTA",09,8e,71,8e),
	HX_("CYAN",23,0d,8d,2c),
	HX_("colorLookup",3d,34,de,1b),
	HX_("COLOR_REGEX",6b,2b,e2,09),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromRGB",c3,8f,01,58),
	HX_("fromRGBFloat",d9,a2,53,9a),
	HX_("fromCMYK",66,a9,76,9f),
	HX_("fromHSB",ad,03,fa,57),
	HX_("fromHSL",b7,03,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("getHSBColorWheel",99,27,93,2f),
	HX_("interpolate",c1,d4,32,1f),
	HX_("gradient",f0,39,3f,2a),
	HX_("multiply",24,e2,8c,9a),
	HX_("add",21,f2,49,00),
	HX_("subtract",14,75,11,f8),
	HX_("getComplementHarmony",4a,20,b6,d3),
	HX_("getAnalogousHarmony",df,79,e2,a4),
	HX_("getSplitComplementHarmony",bc,be,30,75),
	HX_("getTriadicHarmony",f4,5d,d3,ab),
	HX_("to24Bit",d0,66,f1,25),
	HX_("toHexString",11,69,b3,6d),
	HX_("toWebString",8a,5b,00,37),
	HX_("getColorInfo",fb,5f,7f,30),
	HX_("getDarkened",34,e7,ef,b2),
	HX_("getLightened",68,ad,b1,e0),
	HX_("getInverted",ab,73,25,1b),
	HX_("setRGB",8b,4c,6e,6f),
	HX_("setRGBFloat",11,91,9d,2a),
	HX_("setCMYK",9e,1b,2f,07),
	HX_("setHSB",75,c0,66,6f),
	HX_("setHSL",7f,c0,66,6f),
	HX_("setHSChromaMatch",c2,69,0f,10),
	HX_("_new",61,15,1f,3f),
	HX_("getThis",14,b6,7e,1f),
	HX_("validate",96,d0,e3,04),
	HX_("get_red",e8,a1,cb,26),
	HX_("get_green",1a,6b,96,dd),
	HX_("get_blue",23,fe,d3,c0),
	HX_("get_alpha",b5,03,40,65),
	HX_("get_redFloat",94,aa,fc,26),
	HX_("get_greenFloat",22,4c,51,4d),
	HX_("get_blueFloat",79,18,35,9c),
	HX_("get_alphaFloat",a7,a1,31,99),
	HX_("set_red",f4,32,cd,19),
	HX_("set_green",26,57,e7,c0),
	HX_("set_blue",97,57,31,6f),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_redFloat",08,ce,f5,3b),
	HX_("set_greenFloat",96,34,71,6d),
	HX_("set_blueFloat",85,fa,3a,e1),
	HX_("set_alphaFloat",1b,8a,51,b9),
	HX_("get_cyan",ac,00,87,c1),
	HX_("get_magenta",40,1a,98,94),
	HX_("get_yellow",3d,0f,e4,c0),
	HX_("get_black",16,32,9b,f8),
	HX_("set_cyan",20,5a,e4,6f),
	HX_("set_magenta",4c,21,05,9f),
	HX_("set_yellow",b1,ad,61,c4),
	HX_("set_black",22,1e,ec,db),
	HX_("get_hue",4f,19,c4,26),
	HX_("get_brightness",1a,16,67,db),
	HX_("get_saturation",1b,5c,97,6c),
	HX_("get_lightness",44,08,ab,98),
	HX_("set_hue",5b,aa,c5,19),
	HX_("set_saturation",8f,44,b7,8c),
	HX_("set_brightness",8e,fe,86,fb),
	HX_("set_lightness",50,ea,b0,dd),
	HX_("set_rgb",b0,34,cd,19),
	HX_("get_rgb",a4,a3,cb,26),
	HX_("maxColor",1f,c4,79,f4),
	HX_("minColor",71,de,93,41),
	HX_("boundChannel",25,1c,54,83),
	::String(null())
};

void FlxColor_Impl__obj::__register()
{
	FlxColor_Impl__obj _hx_dummy;
	FlxColor_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxColor.FlxColor_Impl_",09,b7,a9,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColor_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxColor_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxColor_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxColor_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxColor_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxColor_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxColor_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxColor_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_20_boot)
HXDLIN(  20)		TRANSPARENT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_21_boot)
HXDLIN(  21)		WHITE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_22_boot)
HXDLIN(  22)		GRAY = -8355712;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_23_boot)
HXDLIN(  23)		BLACK = -16777216;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_25_boot)
HXDLIN(  25)		GREEN = -16744448;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_26_boot)
HXDLIN(  26)		LIME = -16711936;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_27_boot)
HXDLIN(  27)		YELLOW = -256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_28_boot)
HXDLIN(  28)		ORANGE = -23296;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_29_boot)
HXDLIN(  29)		RED = -65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_30_boot)
HXDLIN(  30)		PURPLE = -8388480;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_31_boot)
HXDLIN(  31)		BLUE = -16776961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_32_boot)
HXDLIN(  32)		BROWN = -7650029;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_33_boot)
HXDLIN(  33)		PINK = -16181;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_34_boot)
HXDLIN(  34)		MAGENTA = -65281;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_35_boot)
HXDLIN(  35)		CYAN = -16711681;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0c1a490149f50aaa_54_boot)
HXDLIN(  54)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(HX_("TRANSPARENT",32,37,f6,f8),0);
HXDLIN(  54)			_g->set(HX_("WHITE",89,82,ab,47),-1);
HXDLIN(  54)			_g->set(HX_("GRAY",e3,97,2c,2f),-8355712);
HXDLIN(  54)			_g->set(HX_("BLACK",9f,0d,e0,32),-16777216);
HXDLIN(  54)			_g->set(HX_("GREEN",a3,46,db,17),-16744448);
HXDLIN(  54)			_g->set(HX_("LIME",15,df,73,32),-16711936);
HXDLIN(  54)			_g->set(HX_("YELLOW",74,4b,df,82),-256);
HXDLIN(  54)			_g->set(HX_("ORANGE",ee,5e,3f,f8),-23296);
HXDLIN(  54)			_g->set(HX_("RED",31,75,3e,00),-65536);
HXDLIN(  54)			_g->set(HX_("PURPLE",3c,a2,0c,24),-8388480);
HXDLIN(  54)			_g->set(HX_("BLUE",9a,0a,da,2b),-16776961);
HXDLIN(  54)			_g->set(HX_("BROWN",56,06,e2,36),-7650029);
HXDLIN(  54)			_g->set(HX_("PINK",76,ba,18,35),-16181);
HXDLIN(  54)			_g->set(HX_("MAGENTA",09,8e,71,8e),-65281);
HXDLIN(  54)			_g->set(HX_("CYAN",23,0d,8d,2c),-16711681);
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0c1a490149f50aaa_54_boot)
HXDLIN(  54)		colorLookup = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_83_boot)
HXDLIN(  83)		COLOR_REGEX =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(0x|#)(([A-F0-9]{2}){3,4})$",25,93,28,2c),HX_("i",69,00,00,00));
            	}
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxColor
