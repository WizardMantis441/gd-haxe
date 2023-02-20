#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_BackdropBlitMode
#include <flixel/addons/display/BackdropBlitMode.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3781a4bff19fd598_23_new,"flixel.addons.display.FlxBackdrop","new",0xbcdf9a65,"flixel.addons.display.FlxBackdrop.new","flixel/addons/display/FlxBackdrop.hx",23,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_84_destroy,"flixel.addons.display.FlxBackdrop","destroy",0x54bfdd7f,"flixel.addons.display.FlxBackdrop.destroy","flixel/addons/display/FlxBackdrop.hx",84,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_93_draw,"flixel.addons.display.FlxBackdrop","draw",0x8035265f,"flixel.addons.display.FlxBackdrop.draw","flixel/addons/display/FlxBackdrop.hx",93,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_138_isOnScreen,"flixel.addons.display.FlxBackdrop","isOnScreen",0x4896f490,"flixel.addons.display.FlxBackdrop.isOnScreen","flixel/addons/display/FlxBackdrop.hx",138,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_158_drawToLargestCamera,"flixel.addons.display.FlxBackdrop","drawToLargestCamera",0x6e8e72c7,"flixel.addons.display.FlxBackdrop.drawToLargestCamera","flixel/addons/display/FlxBackdrop.hx",158,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_181_isSimpleRenderBlit,"flixel.addons.display.FlxBackdrop","isSimpleRenderBlit",0xdbe89d22,"flixel.addons.display.FlxBackdrop.isSimpleRenderBlit","flixel/addons/display/FlxBackdrop.hx",181,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_190_drawSimple,"flixel.addons.display.FlxBackdrop","drawSimple",0xa1202ff1,"flixel.addons.display.FlxBackdrop.drawSimple","flixel/addons/display/FlxBackdrop.hx",190,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_261_drawComplex,"flixel.addons.display.FlxBackdrop","drawComplex",0x27d68191,"flixel.addons.display.FlxBackdrop.drawComplex","flixel/addons/display/FlxBackdrop.hx",261,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_372_getFrameScreenBounds,"flixel.addons.display.FlxBackdrop","getFrameScreenBounds",0x9cf539b3,"flixel.addons.display.FlxBackdrop.getFrameScreenBounds","flixel/addons/display/FlxBackdrop.hx",372,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_394_modMin,"flixel.addons.display.FlxBackdrop","modMin",0xb5715f0b,"flixel.addons.display.FlxBackdrop.modMin","flixel/addons/display/FlxBackdrop.hx",394,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_399_modMax,"flixel.addons.display.FlxBackdrop","modMax",0xb571581d,"flixel.addons.display.FlxBackdrop.modMax","flixel/addons/display/FlxBackdrop.hx",399,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_403_regenGraphic,"flixel.addons.display.FlxBackdrop","regenGraphic",0xe958a2c6,"flixel.addons.display.FlxBackdrop.regenGraphic","flixel/addons/display/FlxBackdrop.hx",403,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_512_matchPrevDrawParams,"flixel.addons.display.FlxBackdrop","matchPrevDrawParams",0x1aa31767,"flixel.addons.display.FlxBackdrop.matchPrevDrawParams","flixel/addons/display/FlxBackdrop.hx",512,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_524_setDrawParams,"flixel.addons.display.FlxBackdrop","setDrawParams",0xcdfb16f1,"flixel.addons.display.FlxBackdrop.setDrawParams","flixel/addons/display/FlxBackdrop.hx",524,0x7f3b228c)
namespace flixel{
namespace addons{
namespace display{

void FlxBackdrop_obj::__construct( ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY){
            		int repeatAxes = __o_repeatAxes.Default(17);
            		int spacingX = __o_spacingX.Default(0);
            		int spacingY = __o_spacingY.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_3781a4bff19fd598_23_new)
HXLINE(  55)		this->_prevDrawParams =  ::Dynamic(::hx::Anon_obj::Create(9)
            			->setFixed(0,HX_("spacingX",75,df,11,f2),((Float)0.0))
            			->setFixed(1,HX_("spacingY",76,df,11,f2),((Float)0.0))
            			->setFixed(2,HX_("repeatAxes",20,26,dd,06),17)
            			->setFixed(3,HX_("tilesX",33,d7,28,1e),-1)
            			->setFixed(4,HX_("tilesY",34,d7,28,1e),-1)
            			->setFixed(5,HX_("angle",d3,43,e2,22),((Float)0.0))
            			->setFixed(6,HX_("scaleX",8e,ea,25,3c),((Float)0.0))
            			->setFixed(7,HX_("scaleY",8f,ea,25,3c),((Float)0.0))
            			->setFixed(8,HX_("graphicKey",d7,ff,d1,76),null()));
HXLINE(  53)		this->_blitGraphic = null();
HXLINE(  52)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  52)		point->_inPool = false;
HXDLIN(  52)		this->_blitOffset = point;
HXLINE(  50)		this->blitMode = ::flixel::addons::display::BackdropBlitMode_obj::AUTO_dyn();
HXLINE(  43)		this->drawBlit = ::flixel::FlxG_obj::renderBlit;
HXLINE(  33)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  33)		this->spacing = this1;
HXLINE(  28)		this->repeatAxes = 17;
HXLINE(  77)		super::__construct(0,0,graphic);
HXLINE(  79)		this->repeatAxes = repeatAxes;
HXLINE(  80)		{
HXLINE(  80)			 ::flixel::math::FlxBasePoint this11 = this->spacing;
HXDLIN(  80)			this11->set_x(( (Float)(spacingX) ));
HXDLIN(  80)			this11->set_y(( (Float)(spacingY) ));
            		}
            	}

Dynamic FlxBackdrop_obj::__CreateEmpty() { return new FlxBackdrop_obj; }

void *FlxBackdrop_obj::_hx_vtable = 0;

Dynamic FlxBackdrop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBackdrop_obj > _hx_result = new FlxBackdrop_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxBackdrop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5ae97639) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5ae97639;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxBackdrop_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_84_destroy)
HXLINE(  85)		this->spacing = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->spacing)) );
HXLINE(  86)		this->_blitOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_blitOffset)) );
HXLINE(  87)		this->_blitGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_blitGraphic)) );
HXLINE(  89)		this->super::destroy();
            	}


void FlxBackdrop_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_93_draw)
HXLINE(  94)		if ((this->repeatAxes == 0)) {
HXLINE(  96)			this->super::draw();
HXLINE(  97)			return;
            		}
HXLINE( 100)		this->checkEmptyFrame();
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if ((this->alpha != 0)) {
HXLINE( 102)			_hx_tmp = (this->_frame->type == 2);
            		}
            		else {
HXLINE( 102)			_hx_tmp = true;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 103)			return;
            		}
HXLINE( 105)		bool _hx_tmp1;
HXDLIN( 105)		if (!((this->scale->x <= 0))) {
HXLINE( 105)			_hx_tmp1 = (this->scale->y <= 0);
            		}
            		else {
HXLINE( 105)			_hx_tmp1 = true;
            		}
HXDLIN( 105)		if (_hx_tmp1) {
HXLINE( 106)			return;
            		}
HXLINE( 108)		if (this->dirty) {
HXLINE( 109)			this->calcFrame(this->useFramePixels);
            		}
HXLINE( 111)		if (this->drawBlit) {
HXLINE( 113)			this->drawToLargestCamera();
            		}
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 116)			while((_g < _g1->length)){
HXLINE( 116)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 116)				_g = (_g + 1);
HXLINE( 118)				bool _hx_tmp;
HXDLIN( 118)				bool _hx_tmp1;
HXDLIN( 118)				if (camera->visible) {
HXLINE( 118)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 118)					_hx_tmp1 = true;
            				}
HXDLIN( 118)				if (!(_hx_tmp1)) {
HXLINE( 118)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 118)					_hx_tmp = true;
            				}
HXDLIN( 118)				if (_hx_tmp) {
HXLINE( 119)					continue;
            				}
HXLINE( 121)				if (this->isSimpleRender(camera)) {
HXLINE( 122)					this->drawSimple(camera);
            				}
            				else {
HXLINE( 124)					this->drawComplex(camera);
            				}
            			}
            		}
            	}


bool FlxBackdrop_obj::isOnScreen( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_138_isOnScreen)
HXLINE( 139)		if ((this->repeatAxes == 17)) {
HXLINE( 140)			return true;
            		}
HXLINE( 142)		if ((this->repeatAxes == 0)) {
HXLINE( 143)			return this->super::isOnScreen(camera);
            		}
HXLINE( 145)		if (::hx::IsNull( camera )) {
HXLINE( 146)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 148)		 ::flixel::math::FlxRect bounds = this->getScreenBounds(this->_rect,camera);
HXLINE( 149)		 ::flixel::math::FlxRect view = camera->getViewRect(null());
HXLINE( 150)		int this1 = this->repeatAxes;
HXDLIN( 150)		bool _hx_tmp;
HXDLIN( 150)		if ((this1 != 1)) {
HXLINE( 150)			_hx_tmp = (this1 == 17);
            		}
            		else {
HXLINE( 150)			_hx_tmp = true;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 150)			bounds->x = view->x;
            		}
HXLINE( 151)		int this2 = this->repeatAxes;
HXDLIN( 151)		bool _hx_tmp1;
HXDLIN( 151)		if ((this2 != 16)) {
HXLINE( 151)			_hx_tmp1 = (this2 == 17);
            		}
            		else {
HXLINE( 151)			_hx_tmp1 = true;
            		}
HXDLIN( 151)		if (_hx_tmp1) {
HXLINE( 151)			bounds->y = view->y;
            		}
HXLINE( 152)		if (!(view->_inPool)) {
HXLINE( 152)			view->_inPool = true;
HXDLIN( 152)			view->_weak = false;
HXDLIN( 152)			::flixel::math::FlxRect_obj::_pool->putUnsafe(view);
            		}
HXLINE( 154)		bool contained;
HXDLIN( 154)		bool contained1;
HXDLIN( 154)		bool contained2;
HXDLIN( 154)		if (((bounds->x + bounds->width) > camera->viewOffsetX)) {
HXLINE( 154)			contained2 = (bounds->x < camera->viewOffsetWidth);
            		}
            		else {
HXLINE( 154)			contained2 = false;
            		}
HXDLIN( 154)		if (contained2) {
HXLINE( 154)			contained1 = ((bounds->y + bounds->height) > camera->viewOffsetY);
            		}
            		else {
HXLINE( 154)			contained1 = false;
            		}
HXDLIN( 154)		if (contained1) {
HXLINE( 154)			contained = (bounds->y < camera->viewOffsetHeight);
            		}
            		else {
HXLINE( 154)			contained = false;
            		}
HXDLIN( 154)		if (bounds->_weak) {
HXLINE( 154)			if (!(bounds->_inPool)) {
HXLINE( 154)				bounds->_inPool = true;
HXDLIN( 154)				bounds->_weak = false;
HXDLIN( 154)				::flixel::math::FlxRect_obj::_pool->putUnsafe(bounds);
            			}
            		}
HXDLIN( 154)		return contained;
            	}


void FlxBackdrop_obj::drawToLargestCamera(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_158_drawToLargestCamera)
HXLINE( 159)		 ::flixel::FlxCamera largest = null();
HXLINE( 160)		Float largestArea = ((Float)0.0);
HXLINE( 161)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 161)		_this->x = ( (Float)(0) );
HXDLIN( 161)		_this->y = ( (Float)(0) );
HXDLIN( 161)		_this->width = ( (Float)(0) );
HXDLIN( 161)		_this->height = ( (Float)(0) );
HXDLIN( 161)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 161)		rect->_inPool = false;
HXDLIN( 161)		 ::flixel::math::FlxRect view = rect;
HXLINE( 162)		{
HXLINE( 162)			int _g = 0;
HXDLIN( 162)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 162)			while((_g < _g1->length)){
HXLINE( 162)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 162)				_g = (_g + 1);
HXLINE( 164)				bool _hx_tmp;
HXDLIN( 164)				bool _hx_tmp1;
HXDLIN( 164)				if (camera->visible) {
HXLINE( 164)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 164)					_hx_tmp1 = true;
            				}
HXDLIN( 164)				if (!(_hx_tmp1)) {
HXLINE( 164)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 164)					_hx_tmp = true;
            				}
HXDLIN( 164)				if (_hx_tmp) {
HXLINE( 165)					continue;
            				}
HXLINE( 167)				camera->getViewRect(view);
HXLINE( 168)				if (((view->width * view->height) > largestArea)) {
HXLINE( 170)					largest = camera;
HXLINE( 171)					largestArea = (view->width * view->height);
            				}
            			}
            		}
HXLINE( 174)		if (!(view->_inPool)) {
HXLINE( 174)			view->_inPool = true;
HXDLIN( 174)			view->_weak = false;
HXDLIN( 174)			::flixel::math::FlxRect_obj::_pool->putUnsafe(view);
            		}
HXLINE( 176)		if (::hx::IsNotNull( largest )) {
HXLINE( 177)			this->regenGraphic(largest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBackdrop_obj,drawToLargestCamera,(void))

bool FlxBackdrop_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_181_isSimpleRenderBlit)
HXLINE( 182)		if ((this->repeatAxes == 0)) {
HXLINE( 183)			return this->super::isSimpleRenderBlit(camera);
            		}
HXLINE( 185)		bool _hx_tmp;
HXDLIN( 185)		if (!(this->super::isSimpleRenderBlit(camera))) {
HXLINE( 185)			_hx_tmp = this->drawBlit;
            		}
            		else {
HXLINE( 185)			_hx_tmp = true;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 186)			if (::hx::IsNotNull( camera )) {
HXLINE( 186)				return this->isPixelPerfectRender(camera);
            			}
            			else {
HXLINE( 186)				return ( (bool)(this->pixelPerfectRender) );
            			}
            		}
            		else {
HXLINE( 185)			return false;
            		}
HXDLIN( 185)		return false;
            	}


void FlxBackdrop_obj::drawSimple( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_190_drawSimple)
HXLINE( 191)		if ((this->repeatAxes == 0)) {
HXLINE( 193)			this->super::drawSimple(camera);
HXLINE( 194)			return;
            		}
HXLINE( 197)		bool drawDirect = !(this->drawBlit);
HXLINE( 198)		 ::flixel::graphics::FlxGraphic graphic;
HXDLIN( 198)		if (this->drawBlit) {
HXLINE( 198)			graphic = this->_blitGraphic;
            		}
            		else {
HXLINE( 198)			graphic = this->graphic;
            		}
HXLINE( 199)		 ::flixel::graphics::frames::FlxFrame frame;
HXDLIN( 199)		if (this->drawBlit) {
HXLINE( 199)			frame = this->_blitGraphic->get_imageFrame()->get_frame();
            		}
            		else {
HXLINE( 199)			frame = this->_frame;
            		}
HXLINE( 202)		Float x = frame->frame->width;
HXDLIN( 202)		Float y = frame->frame->height;
HXDLIN( 202)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 202)		point->_inPool = false;
HXDLIN( 202)		 ::flixel::math::FlxBasePoint tileSize = point;
HXLINE( 203)		if (drawDirect) {
HXLINE( 204)			 ::flixel::math::FlxBasePoint point = this->spacing;
HXDLIN( 204)			{
HXLINE( 204)				Float y = point->y;
HXDLIN( 204)				tileSize->set_x((tileSize->x + point->x));
HXDLIN( 204)				tileSize->set_y((tileSize->y + y));
            			}
HXDLIN( 204)			if (point->_weak) {
HXLINE( 204)				point->put();
            			}
            		}
HXLINE( 206)		{
HXLINE( 206)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 206)			 ::flixel::math::FlxBasePoint point1 = this->offset;
HXDLIN( 206)			{
HXLINE( 206)				Float y1 = point1->y;
HXDLIN( 206)				this1->set_x((this1->x - point1->x));
HXDLIN( 206)				this1->set_y((this1->y - y1));
            			}
HXDLIN( 206)			if (point1->_weak) {
HXLINE( 206)				point1->put();
            			}
            		}
HXLINE( 207)		int tilesX = 1;
HXLINE( 208)		int tilesY = 1;
HXLINE( 209)		if ((this->repeatAxes != 0)) {
HXLINE( 211)			 ::flixel::math::FlxRect view = camera->getViewRect(null());
HXLINE( 212)			int this1 = this->repeatAxes;
HXDLIN( 212)			bool _hx_tmp;
HXDLIN( 212)			if ((this1 != 1)) {
HXLINE( 212)				_hx_tmp = (this1 == 17);
            			}
            			else {
HXLINE( 212)				_hx_tmp = true;
            			}
HXDLIN( 212)			if (_hx_tmp) {
HXLINE( 214)				Float left = this->modMin((this->_point->x + this->frameWidth),tileSize->x,view->x);
HXDLIN( 214)				Float left1 = (left - ( (Float)(this->frameWidth) ));
HXLINE( 215)				Float right = this->modMax(this->_point->x,tileSize->x,(view->x + view->width));
HXDLIN( 215)				Float right1 = (right + tileSize->x);
HXLINE( 216)				tilesX = ::Math_obj::round(((right1 - left1) / tileSize->x));
HXLINE( 217)				Float origTileSizeX = (this->frameWidth + this->spacing->x);
HXLINE( 218)				{
HXLINE( 218)					 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 218)					Float x = this->modMin((this->_point->x + this->frameWidth),origTileSizeX,view->x);
HXDLIN( 218)					this1->set_x((x - ( (Float)(this->frameWidth) )));
            				}
            			}
HXLINE( 221)			int this2 = this->repeatAxes;
HXDLIN( 221)			bool _hx_tmp1;
HXDLIN( 221)			if ((this2 != 16)) {
HXLINE( 221)				_hx_tmp1 = (this2 == 17);
            			}
            			else {
HXLINE( 221)				_hx_tmp1 = true;
            			}
HXDLIN( 221)			if (_hx_tmp1) {
HXLINE( 223)				Float top = this->modMin((this->_point->y + this->frameHeight),tileSize->y,view->y);
HXDLIN( 223)				Float top1 = (top - ( (Float)(this->frameHeight) ));
HXLINE( 224)				Float bottom = this->modMax(this->_point->y,tileSize->y,(view->y + view->height));
HXDLIN( 224)				Float bottom1 = (bottom + tileSize->y);
HXLINE( 225)				tilesY = ::Math_obj::round(((bottom1 - top1) / tileSize->y));
HXLINE( 226)				Float origTileSizeY = (this->frameHeight + this->spacing->y);
HXLINE( 227)				{
HXLINE( 227)					 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 227)					Float y = this->modMin((this->_point->y + this->frameHeight),origTileSizeY,view->y);
HXDLIN( 227)					this1->set_y((y - ( (Float)(this->frameHeight) )));
            				}
            			}
            		}
HXLINE( 231)		if (this->drawBlit) {
HXLINE( 232)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 232)			 ::flixel::math::FlxBasePoint point = this->_blitOffset;
HXDLIN( 232)			{
HXLINE( 232)				Float y = point->y;
HXDLIN( 232)				this1->set_x((this1->x + point->x));
HXDLIN( 232)				this1->set_y((this1->y + y));
            			}
HXDLIN( 232)			if (point->_weak) {
HXLINE( 232)				point->put();
            			}
            		}
HXLINE( 234)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 235)			this->calcFrame(true);
            		}
HXLINE( 237)		camera->buffer->lock();
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			int _g1 = tilesX;
HXDLIN( 239)			while((_g < _g1)){
HXLINE( 239)				_g = (_g + 1);
HXDLIN( 239)				int tileX = (_g - 1);
HXLINE( 241)				{
HXLINE( 241)					int _g1 = 0;
HXDLIN( 241)					int _g2 = tilesY;
HXDLIN( 241)					while((_g1 < _g2)){
HXLINE( 241)						_g1 = (_g1 + 1);
HXDLIN( 241)						int tileY = (_g1 - 1);
HXLINE( 244)						this->_flashPoint->setTo((this->_point->x + (tileSize->x * ( (Float)(tileX) ))),(this->_point->y + (tileSize->y * ( (Float)(tileY) ))));
HXLINE( 246)						if (this->isPixelPerfectRender(camera)) {
HXLINE( 248)							this->_flashPoint->x = ( (Float)(::Math_obj::floor(this->_flashPoint->x)) );
HXLINE( 249)							this->_flashPoint->y = ( (Float)(::Math_obj::floor(this->_flashPoint->y)) );
            						}
HXLINE( 252)						 ::openfl::display::BitmapData pixels;
HXDLIN( 252)						if (this->drawBlit) {
HXLINE( 252)							pixels = this->_blitGraphic->bitmap;
            						}
            						else {
HXLINE( 252)							pixels = this->framePixels;
            						}
HXLINE( 253)						camera->copyPixels(frame,pixels,pixels->rect,this->_flashPoint,this->colorTransform,this->blend,this->antialiasing,null());
            					}
            				}
            			}
            		}
HXLINE( 257)		camera->buffer->unlock(null());
            	}


void FlxBackdrop_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_3781a4bff19fd598_261_drawComplex)
HXLINE( 262)		if ((this->repeatAxes == 0)) {
HXLINE( 264)			this->super::drawComplex(camera);
HXLINE( 265)			return;
            		}
HXLINE( 268)		bool drawDirect = !(this->drawBlit);
HXLINE( 269)		 ::flixel::graphics::FlxGraphic graphic;
HXDLIN( 269)		if (this->drawBlit) {
HXLINE( 269)			graphic = this->_blitGraphic;
            		}
            		else {
HXLINE( 269)			graphic = this->graphic;
            		}
HXLINE( 270)		 ::flixel::graphics::frames::FlxFrame frame;
HXDLIN( 270)		if (this->drawBlit) {
HXLINE( 270)			frame = this->_blitGraphic->get_imageFrame()->get_frame();
            		}
            		else {
HXLINE( 270)			frame = this->_frame;
            		}
HXLINE( 272)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 272)		bool _hx_tmp;
HXDLIN( 272)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 272)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 272)			_hx_tmp = doFlipX;
            		}
HXDLIN( 272)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 272)		bool _hx_tmp1;
HXDLIN( 272)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 272)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 272)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 272)		frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 273)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 276)		Float x = frame->frame->width;
HXDLIN( 276)		Float y = frame->frame->height;
HXDLIN( 276)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 276)		point->_inPool = false;
HXDLIN( 276)		 ::flixel::math::FlxBasePoint tileSize = point;
HXLINE( 278)		if (drawDirect) {
HXLINE( 280)			{
HXLINE( 280)				Float y = ((frame->frame->height + this->spacing->y) * this->scale->y);
HXDLIN( 280)				tileSize->set_x(((frame->frame->width + this->spacing->x) * this->scale->x));
HXDLIN( 280)				tileSize->set_y(y);
            			}
HXLINE( 286)			this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 288)			if ((this->bakedRotationAngle <= 0)) {
HXLINE( 290)				if (this->_angleChanged) {
HXLINE( 290)					Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 290)					this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 290)					this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 290)					this->_angleChanged = false;
            				}
HXLINE( 292)				if ((this->angle != 0)) {
HXLINE( 293)					 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 293)					Float cos = this->_cosAngle;
HXDLIN( 293)					Float sin = this->_sinAngle;
HXDLIN( 293)					Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 293)					_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 293)					_this->a = a1;
HXDLIN( 293)					Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 293)					_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 293)					_this->c = c1;
HXDLIN( 293)					Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 293)					_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 293)					_this->tx = tx1;
            				}
            			}
            		}
HXLINE( 297)		 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = null();
HXLINE( 298)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 300)			bool isColored;
HXDLIN( 300)			if ((this->alpha == 1)) {
HXLINE( 300)				isColored = (this->color != 16777215);
            			}
            			else {
HXLINE( 300)				isColored = true;
            			}
HXLINE( 301)			bool hasColorOffsets;
HXDLIN( 301)			if (::hx::IsNotNull( this->colorTransform )) {
HXLINE( 301)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(this->colorTransform);
            			}
            			else {
HXLINE( 301)				hasColorOffsets = false;
            			}
HXLINE( 302)			drawItem = camera->startQuadBatch(graphic,isColored,hasColorOffsets,this->blend,this->antialiasing,this->shader);
            		}
            		else {
HXLINE( 306)			camera->buffer->lock();
            		}
HXLINE( 309)		{
HXLINE( 309)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 309)			 ::flixel::math::FlxBasePoint point1 = this->offset;
HXDLIN( 309)			{
HXLINE( 309)				Float y1 = point1->y;
HXDLIN( 309)				this1->set_x((this1->x - point1->x));
HXDLIN( 309)				this1->set_y((this1->y - y1));
            			}
HXDLIN( 309)			if (point1->_weak) {
HXLINE( 309)				point1->put();
            			}
            		}
HXLINE( 310)		int tilesX = 1;
HXLINE( 311)		int tilesY = 1;
HXLINE( 312)		if ((this->repeatAxes != 0)) {
HXLINE( 314)			 ::flixel::math::FlxRect view = camera->getViewRect(null());
HXLINE( 315)			 ::flixel::math::FlxRect bounds = this->getScreenBounds(null(),camera);
HXLINE( 316)			int this1 = this->repeatAxes;
HXDLIN( 316)			bool _hx_tmp;
HXDLIN( 316)			if ((this1 != 1)) {
HXLINE( 316)				_hx_tmp = (this1 == 17);
            			}
            			else {
HXLINE( 316)				_hx_tmp = true;
            			}
HXDLIN( 316)			if (_hx_tmp) {
HXLINE( 318)				Float origTileSizeX = ((this->frameWidth + this->spacing->x) * this->scale->x);
HXLINE( 319)				Float left = this->modMin((bounds->x + bounds->width),origTileSizeX,view->x);
HXDLIN( 319)				Float left1 = (left - bounds->width);
HXLINE( 320)				Float right = (this->modMax(bounds->x,origTileSizeX,(view->x + view->width)) + origTileSizeX);
HXLINE( 321)				tilesX = ::Math_obj::round(((right - left1) / tileSize->x));
HXLINE( 322)				this->_point->set_x(((left1 + this->_point->x) - bounds->x));
            			}
HXLINE( 325)			int this2 = this->repeatAxes;
HXDLIN( 325)			bool _hx_tmp1;
HXDLIN( 325)			if ((this2 != 16)) {
HXLINE( 325)				_hx_tmp1 = (this2 == 17);
            			}
            			else {
HXLINE( 325)				_hx_tmp1 = true;
            			}
HXDLIN( 325)			if (_hx_tmp1) {
HXLINE( 327)				Float origTileSizeY = ((this->frameHeight + this->spacing->y) * this->scale->y);
HXLINE( 328)				Float top = this->modMin((bounds->y + bounds->height),origTileSizeY,view->y);
HXDLIN( 328)				Float top1 = (top - bounds->height);
HXLINE( 329)				Float bottom = (this->modMax(bounds->y,origTileSizeY,(view->y + view->height)) + origTileSizeY);
HXLINE( 330)				tilesY = ::Math_obj::round(((bottom - top1) / tileSize->y));
HXLINE( 331)				this->_point->set_y(((top1 + this->_point->y) - bounds->y));
            			}
HXLINE( 333)			if (!(view->_inPool)) {
HXLINE( 333)				view->_inPool = true;
HXDLIN( 333)				view->_weak = false;
HXDLIN( 333)				::flixel::math::FlxRect_obj::_pool->putUnsafe(view);
            			}
HXLINE( 334)			if (!(bounds->_inPool)) {
HXLINE( 334)				bounds->_inPool = true;
HXDLIN( 334)				bounds->_weak = false;
HXDLIN( 334)				::flixel::math::FlxRect_obj::_pool->putUnsafe(bounds);
            			}
            		}
HXLINE( 336)		{
HXLINE( 336)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 336)			 ::flixel::math::FlxBasePoint point2 = this->origin;
HXDLIN( 336)			{
HXLINE( 336)				Float y2 = point2->y;
HXDLIN( 336)				this2->set_x((this2->x + point2->x));
HXDLIN( 336)				this2->set_y((this2->y + y2));
            			}
HXDLIN( 336)			if (point2->_weak) {
HXLINE( 336)				point2->put();
            			}
            		}
HXLINE( 337)		if (this->drawBlit) {
HXLINE( 338)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 338)			 ::flixel::math::FlxBasePoint point = this->_blitOffset;
HXDLIN( 338)			{
HXLINE( 338)				Float y = point->y;
HXDLIN( 338)				this1->set_x((this1->x + point->x));
HXDLIN( 338)				this1->set_y((this1->y + y));
            			}
HXDLIN( 338)			if (point->_weak) {
HXLINE( 338)				point->put();
            			}
            		}
HXLINE( 340)		 ::flixel::math::FlxMatrix mat =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 341)		{
HXLINE( 341)			int _g = 0;
HXDLIN( 341)			int _g1 = tilesX;
HXDLIN( 341)			while((_g < _g1)){
HXLINE( 341)				_g = (_g + 1);
HXDLIN( 341)				int tileX = (_g - 1);
HXLINE( 343)				{
HXLINE( 343)					int _g1 = 0;
HXDLIN( 343)					int _g2 = tilesY;
HXDLIN( 343)					while((_g1 < _g2)){
HXLINE( 343)						_g1 = (_g1 + 1);
HXDLIN( 343)						int tileY = (_g1 - 1);
HXLINE( 345)						mat->copyFrom(this->_matrix);
HXLINE( 347)						mat->translate((this->_point->x + (tileSize->x * ( (Float)(tileX) ))),(this->_point->y + (tileSize->y * ( (Float)(tileY) ))));
HXLINE( 349)						if (this->isPixelPerfectRender(camera)) {
HXLINE( 351)							mat->tx = ( (Float)(::Math_obj::floor(mat->tx)) );
HXLINE( 352)							mat->ty = ( (Float)(::Math_obj::floor(mat->ty)) );
            						}
HXLINE( 355)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 357)							 ::openfl::display::BitmapData pixels;
HXDLIN( 357)							if (this->drawBlit) {
HXLINE( 357)								pixels = this->_blitGraphic->bitmap;
            							}
            							else {
HXLINE( 357)								pixels = this->framePixels;
            							}
HXLINE( 358)							camera->drawPixels(frame,pixels,mat,this->colorTransform,this->blend,this->antialiasing,this->shader);
            						}
            						else {
HXLINE( 362)							drawItem->addQuad(frame,mat,this->colorTransform);
            						}
            					}
            				}
            			}
            		}
HXLINE( 367)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 368)			camera->buffer->unlock(null());
            		}
            	}


 ::flixel::math::FlxRect FlxBackdrop_obj::getFrameScreenBounds( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_372_getFrameScreenBounds)
HXLINE( 373)		if (this->drawBlit) {
HXLINE( 375)			 ::flixel::math::FlxRect frame = this->_blitGraphic->get_imageFrame()->get_frame()->frame;
HXLINE( 376)			Float X = this->x;
HXDLIN( 376)			Float Y = this->y;
HXDLIN( 376)			Float Width = frame->width;
HXDLIN( 376)			Float Height = frame->height;
HXDLIN( 376)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 376)			_this->x = X;
HXDLIN( 376)			_this->y = Y;
HXDLIN( 376)			_this->width = Width;
HXDLIN( 376)			_this->height = Height;
HXDLIN( 376)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 376)			rect->_inPool = false;
HXDLIN( 376)			return rect;
            		}
HXLINE( 379)		Float X = this->x;
HXDLIN( 379)		Float Y = this->y;
HXDLIN( 379)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 379)		_this->x = X;
HXDLIN( 379)		_this->y = Y;
HXDLIN( 379)		_this->width = ( (Float)(0) );
HXDLIN( 379)		_this->height = ( (Float)(0) );
HXDLIN( 379)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 379)		rect->_inPool = false;
HXDLIN( 379)		 ::flixel::math::FlxRect newRect = rect;
HXLINE( 381)		if (this->pixelPerfectPosition) {
HXLINE( 382)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN( 382)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN( 382)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN( 382)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE( 383)		Float x = (this->origin->x * this->scale->x);
HXDLIN( 383)		Float y = (this->origin->y * this->scale->y);
HXDLIN( 383)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 383)		point->_inPool = false;
HXDLIN( 383)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 383)		point1->_weak = true;
HXDLIN( 383)		 ::flixel::math::FlxBasePoint scaledOrigin = point1;
HXLINE( 384)		 ::flixel::math::FlxRect newRect1 = newRect;
HXDLIN( 384)		Float newRect2 = newRect1->x;
HXDLIN( 384)		Float _hx_tmp = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->x * this->scrollFactor->x)))) ) - this->offset->x);
HXDLIN( 384)		newRect1->x = (newRect2 + ((_hx_tmp + this->origin->x) - scaledOrigin->x));
HXLINE( 385)		 ::flixel::math::FlxRect newRect3 = newRect;
HXDLIN( 385)		Float newRect4 = newRect3->y;
HXDLIN( 385)		Float _hx_tmp1 = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->y * this->scrollFactor->y)))) ) - this->offset->y);
HXDLIN( 385)		newRect3->y = (newRect4 + ((_hx_tmp1 + this->origin->y) - scaledOrigin->y));
HXLINE( 386)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 387)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN( 387)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN( 387)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN( 387)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE( 388)		{
HXLINE( 388)			Float Height = (( (Float)(this->frameHeight) ) * ::Math_obj::abs(this->scale->y));
HXDLIN( 388)			newRect->width = (( (Float)(this->frameWidth) ) * ::Math_obj::abs(this->scale->x));
HXDLIN( 388)			newRect->height = Height;
            		}
HXLINE( 389)		return newRect->getRotatedBounds(this->angle,scaledOrigin,newRect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,getFrameScreenBounds,return )

Float FlxBackdrop_obj::modMin(Float value,Float step,Float min){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_394_modMin)
HXDLIN( 394)		return (value - (( (Float)(::Math_obj::floor(((value - min) / step))) ) * step));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBackdrop_obj,modMin,return )

Float FlxBackdrop_obj::modMax(Float value,Float step,Float max){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_399_modMax)
HXDLIN( 399)		return (value - (( (Float)(::Math_obj::ceil(((value - max) / step))) ) * step));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBackdrop_obj,modMax,return )

void FlxBackdrop_obj::regenGraphic( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_403_regenGraphic)
HXLINE( 405)		Float x = ((this->frameWidth + this->spacing->x) * this->scale->x);
HXDLIN( 405)		Float y = ((this->frameHeight + this->spacing->y) * this->scale->y);
HXDLIN( 405)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 405)		point->_inPool = false;
HXDLIN( 405)		 ::flixel::math::FlxBasePoint tileSize = point;
HXLINE( 410)		 ::flixel::math::FlxRect view = camera->getViewRect(null());
HXLINE( 411)		int tilesX = 1;
HXLINE( 412)		int tilesY = 1;
HXLINE( 413)		if ((this->repeatAxes != 0)) {
HXLINE( 416)			 ::flixel::addons::display::BackdropBlitMode _g = this->blitMode;
HXDLIN( 416)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 419)					int this1 = this->repeatAxes;
HXDLIN( 419)					bool _hx_tmp;
HXDLIN( 419)					if ((this1 != 1)) {
HXLINE( 419)						_hx_tmp = (this1 == 17);
            					}
            					else {
HXLINE( 419)						_hx_tmp = true;
            					}
HXDLIN( 419)					if (_hx_tmp) {
HXLINE( 419)						tilesX = (::Math_obj::ceil((view->width / tileSize->x)) + 1);
            					}
HXLINE( 420)					int this2 = this->repeatAxes;
HXDLIN( 420)					bool _hx_tmp1;
HXDLIN( 420)					if ((this2 != 16)) {
HXLINE( 420)						_hx_tmp1 = (this2 == 17);
            					}
            					else {
HXLINE( 420)						_hx_tmp1 = true;
            					}
HXDLIN( 420)					if (_hx_tmp1) {
HXLINE( 420)						tilesY = (::Math_obj::ceil((view->height / tileSize->y)) + 1);
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 425)					int _g1 = _g->_hx_getInt(0);
HXDLIN( 425)					int _g2 = _g->_hx_getInt(1);
HXDLIN( 425)					if ((_g1 == 1)) {
HXLINE( 425)						if ((_g2 != 1)) {
HXLINE( 425)							int maxX = _g1;
HXDLIN( 425)							int maxY = _g2;
HXDLIN( 425)							{
HXLINE( 426)								int this1 = this->repeatAxes;
HXDLIN( 426)								bool _hx_tmp;
HXDLIN( 426)								if ((this1 != 1)) {
HXLINE( 426)									_hx_tmp = (this1 == 17);
            								}
            								else {
HXLINE( 426)									_hx_tmp = true;
            								}
HXDLIN( 426)								if (_hx_tmp) {
HXLINE( 426)									int b = (::Math_obj::ceil((view->width / tileSize->x)) + 1);
HXDLIN( 426)									if ((maxX < b)) {
HXLINE( 426)										tilesX = maxX;
            									}
            									else {
HXLINE( 426)										tilesX = b;
            									}
            								}
HXLINE( 427)								int this2 = this->repeatAxes;
HXDLIN( 427)								bool _hx_tmp1;
HXDLIN( 427)								if ((this2 != 16)) {
HXLINE( 427)									_hx_tmp1 = (this2 == 17);
            								}
            								else {
HXLINE( 427)									_hx_tmp1 = true;
            								}
HXDLIN( 427)								if (_hx_tmp1) {
HXLINE( 427)									int b = (::Math_obj::ceil((view->height / tileSize->y)) + 1);
HXDLIN( 427)									if ((maxY < b)) {
HXLINE( 427)										tilesY = maxY;
            									}
            									else {
HXLINE( 427)										tilesY = b;
            									}
            								}
            							}
            						}
            					}
            					else {
HXLINE( 425)						int maxX = _g1;
HXDLIN( 425)						int maxY = _g2;
HXDLIN( 425)						{
HXLINE( 426)							int this1 = this->repeatAxes;
HXDLIN( 426)							bool _hx_tmp;
HXDLIN( 426)							if ((this1 != 1)) {
HXLINE( 426)								_hx_tmp = (this1 == 17);
            							}
            							else {
HXLINE( 426)								_hx_tmp = true;
            							}
HXDLIN( 426)							if (_hx_tmp) {
HXLINE( 426)								int b = (::Math_obj::ceil((view->width / tileSize->x)) + 1);
HXDLIN( 426)								if ((maxX < b)) {
HXLINE( 426)									tilesX = maxX;
            								}
            								else {
HXLINE( 426)									tilesX = b;
            								}
            							}
HXLINE( 427)							int this2 = this->repeatAxes;
HXDLIN( 427)							bool _hx_tmp1;
HXDLIN( 427)							if ((this2 != 16)) {
HXLINE( 427)								_hx_tmp1 = (this2 == 17);
            							}
            							else {
HXLINE( 427)								_hx_tmp1 = true;
            							}
HXDLIN( 427)							if (_hx_tmp1) {
HXLINE( 427)								int b = (::Math_obj::ceil((view->height / tileSize->y)) + 1);
HXDLIN( 427)								if ((maxY < b)) {
HXLINE( 427)									tilesY = maxY;
            								}
            								else {
HXLINE( 427)									tilesY = b;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 422)					int _g1 = _g->_hx_getInt(0);
HXDLIN( 422)					if ((_g1 != 1)) {
HXLINE( 422)						int max = _g1;
HXDLIN( 422)						{
HXLINE( 423)							int this1 = this->repeatAxes;
HXDLIN( 423)							bool _hx_tmp;
HXDLIN( 423)							if ((this1 != 1)) {
HXLINE( 423)								_hx_tmp = (this1 == 17);
            							}
            							else {
HXLINE( 423)								_hx_tmp = true;
            							}
HXDLIN( 423)							if (_hx_tmp) {
HXLINE( 423)								int b = (::Math_obj::ceil((view->width / tileSize->x)) + 1);
HXDLIN( 423)								if ((max < b)) {
HXLINE( 423)									tilesX = max;
            								}
            								else {
HXLINE( 423)									tilesX = b;
            								}
            							}
HXLINE( 424)							int this2 = this->repeatAxes;
HXDLIN( 424)							bool _hx_tmp1;
HXDLIN( 424)							if ((this2 != 16)) {
HXLINE( 424)								_hx_tmp1 = (this2 == 17);
            							}
            							else {
HXLINE( 424)								_hx_tmp1 = true;
            							}
HXDLIN( 424)							if (_hx_tmp1) {
HXLINE( 424)								int b = (::Math_obj::ceil((view->height / tileSize->y)) + 1);
HXDLIN( 424)								if ((max < b)) {
HXLINE( 424)									tilesY = max;
            								}
            								else {
HXLINE( 424)									tilesY = b;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 428)					int _g1 = _g->_hx_getInt(0);
HXDLIN( 428)					if ((_g1 == 1)) {
HXLINE( 419)						int this1 = this->repeatAxes;
HXDLIN( 419)						bool _hx_tmp;
HXDLIN( 419)						if ((this1 != 1)) {
HXLINE( 419)							_hx_tmp = (this1 == 17);
            						}
            						else {
HXLINE( 419)							_hx_tmp = true;
            						}
HXDLIN( 419)						if (_hx_tmp) {
HXLINE( 419)							tilesX = (::Math_obj::ceil((view->width / tileSize->x)) + 1);
            						}
HXLINE( 420)						int this2 = this->repeatAxes;
HXDLIN( 420)						bool _hx_tmp1;
HXDLIN( 420)						if ((this2 != 16)) {
HXLINE( 420)							_hx_tmp1 = (this2 == 17);
            						}
            						else {
HXLINE( 420)							_hx_tmp1 = true;
            						}
HXDLIN( 420)						if (_hx_tmp1) {
HXLINE( 420)							tilesY = (::Math_obj::ceil((view->height / tileSize->y)) + 1);
            						}
            					}
            					else {
HXLINE( 428)						int portions = _g1;
HXDLIN( 428)						{
HXLINE( 429)							int this1 = this->repeatAxes;
HXDLIN( 429)							bool _hx_tmp;
HXDLIN( 429)							if ((this1 != 1)) {
HXLINE( 429)								_hx_tmp = (this1 == 17);
            							}
            							else {
HXLINE( 429)								_hx_tmp = true;
            							}
HXDLIN( 429)							if (_hx_tmp) {
HXLINE( 429)								int this1 = this->repeatAxes;
HXDLIN( 429)								bool tilesX1;
HXDLIN( 429)								if ((this1 != 1)) {
HXLINE( 429)									tilesX1 = (this1 == 17);
            								}
            								else {
HXLINE( 429)									tilesX1 = true;
            								}
HXDLIN( 429)								if (tilesX1) {
HXLINE( 429)									tilesX = ::Math_obj::ceil((((view->width / tileSize->x) / ( (Float)(portions) )) + 1));
            								}
            								else {
HXLINE( 429)									tilesX = 1;
            								}
            							}
HXLINE( 430)							int this2 = this->repeatAxes;
HXDLIN( 430)							bool _hx_tmp1;
HXDLIN( 430)							if ((this2 != 16)) {
HXLINE( 430)								_hx_tmp1 = (this2 == 17);
            							}
            							else {
HXLINE( 430)								_hx_tmp1 = true;
            							}
HXDLIN( 430)							if (_hx_tmp1) {
HXLINE( 430)								int this1 = this->repeatAxes;
HXDLIN( 430)								bool tilesY1;
HXDLIN( 430)								if ((this1 != 16)) {
HXLINE( 430)									tilesY1 = (this1 == 17);
            								}
            								else {
HXLINE( 430)									tilesY1 = true;
            								}
HXDLIN( 430)								if (tilesY1) {
HXLINE( 430)									tilesY = ::Math_obj::ceil((((view->height / tileSize->y) / ( (Float)(portions) )) + 1));
            								}
            								else {
HXLINE( 430)									tilesY = 1;
            								}
            							}
            						}
            					}
            				}
            				break;
            			}
            		}
HXLINE( 434)		if (!(view->_inPool)) {
HXLINE( 434)			view->_inPool = true;
HXDLIN( 434)			view->_weak = false;
HXDLIN( 434)			::flixel::math::FlxRect_obj::_pool->putUnsafe(view);
            		}
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		bool _hx_tmp1;
HXDLIN( 436)		bool _hx_tmp2;
HXDLIN( 436)		bool _hx_tmp3;
HXDLIN( 436)		bool _hx_tmp4;
HXDLIN( 436)		bool _hx_tmp5;
HXDLIN( 436)		bool _hx_tmp6;
HXDLIN( 436)		bool _hx_tmp7;
HXDLIN( 436)		if (::hx::IsEq( this->_prevDrawParams->__Field(HX_("graphicKey",d7,ff,d1,76),::hx::paccDynamic),this->graphic->key )) {
HXLINE( 436)			_hx_tmp7 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("tilesX",33,d7,28,1e),::hx::paccDynamic),tilesX );
            		}
            		else {
HXLINE( 436)			_hx_tmp7 = false;
            		}
HXDLIN( 436)		if (_hx_tmp7) {
HXLINE( 436)			_hx_tmp6 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("tilesY",34,d7,28,1e),::hx::paccDynamic),tilesY );
            		}
            		else {
HXLINE( 436)			_hx_tmp6 = false;
            		}
HXDLIN( 436)		if (_hx_tmp6) {
HXLINE( 436)			_hx_tmp5 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("scaleX",8e,ea,25,3c),::hx::paccDynamic),this->scale->x );
            		}
            		else {
HXLINE( 436)			_hx_tmp5 = false;
            		}
HXDLIN( 436)		if (_hx_tmp5) {
HXLINE( 436)			_hx_tmp4 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("scaleY",8f,ea,25,3c),::hx::paccDynamic),this->scale->y );
            		}
            		else {
HXLINE( 436)			_hx_tmp4 = false;
            		}
HXDLIN( 436)		if (_hx_tmp4) {
HXLINE( 436)			_hx_tmp3 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("spacingX",75,df,11,f2),::hx::paccDynamic),this->spacing->x );
            		}
            		else {
HXLINE( 436)			_hx_tmp3 = false;
            		}
HXDLIN( 436)		if (_hx_tmp3) {
HXLINE( 436)			_hx_tmp2 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("spacingY",76,df,11,f2),::hx::paccDynamic),this->spacing->y );
            		}
            		else {
HXLINE( 436)			_hx_tmp2 = false;
            		}
HXDLIN( 436)		if (_hx_tmp2) {
HXLINE( 436)			_hx_tmp1 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("repeatAxes",20,26,dd,06),::hx::paccDynamic),this->repeatAxes );
            		}
            		else {
HXLINE( 436)			_hx_tmp1 = false;
            		}
HXDLIN( 436)		if (_hx_tmp1) {
HXLINE( 436)			_hx_tmp = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("angle",d3,43,e2,22),::hx::paccDynamic),this->angle );
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 438)			tileSize->put();
HXLINE( 439)			return;
            		}
HXLINE( 441)		{
HXLINE( 441)			this->_prevDrawParams->__SetField(HX_("graphicKey",d7,ff,d1,76),this->graphic->key,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("tilesX",33,d7,28,1e),tilesX,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("tilesY",34,d7,28,1e),tilesY,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("scaleX",8e,ea,25,3c),this->scale->x,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("scaleY",8f,ea,25,3c),this->scale->y,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("spacingX",75,df,11,f2),this->spacing->x,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("spacingY",76,df,11,f2),this->spacing->y,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("repeatAxes",20,26,dd,06),this->repeatAxes,::hx::paccDynamic);
HXDLIN( 441)			this->_prevDrawParams->__SetField(HX_("angle",d3,43,e2,22),this->angle,::hx::paccDynamic);
            		}
HXLINE( 443)		{
HXLINE( 443)			 ::flixel::math::FlxBasePoint this1 = this->_blitOffset;
HXDLIN( 443)			this1->set_x(( (Float)(0) ));
HXDLIN( 443)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 444)		int graphicSizeX = ::Math_obj::ceil((( (Float)(tilesX) ) * tileSize->x));
HXLINE( 445)		int graphicSizeY = ::Math_obj::ceil((( (Float)(tilesY) ) * tileSize->y));
HXLINE( 446)		if ((this->repeatAxes != 17)) {
HXLINE( 448)			 ::flixel::math::FlxRect screenBounds = this->getScreenBounds(null(),null());
HXLINE( 449)			 ::flixel::math::FlxBasePoint screenPos = this->getScreenPosition(null(),null());
HXLINE( 450)			int this1 = this->repeatAxes;
HXDLIN( 450)			bool _hx_tmp;
HXDLIN( 450)			if ((this1 != 1)) {
HXLINE( 450)				_hx_tmp = (this1 == 17);
            			}
            			else {
HXLINE( 450)				_hx_tmp = true;
            			}
HXDLIN( 450)			if (!(_hx_tmp)) {
HXLINE( 452)				graphicSizeX = ::Math_obj::ceil(screenBounds->width);
HXLINE( 453)				this->_blitOffset->set_x((screenBounds->x - screenPos->x));
            			}
HXLINE( 456)			int this2 = this->repeatAxes;
HXDLIN( 456)			bool _hx_tmp1;
HXDLIN( 456)			if ((this2 != 16)) {
HXLINE( 456)				_hx_tmp1 = (this2 == 17);
            			}
            			else {
HXLINE( 456)				_hx_tmp1 = true;
            			}
HXDLIN( 456)			if (!(_hx_tmp1)) {
HXLINE( 458)				graphicSizeY = ::Math_obj::ceil(screenBounds->height);
HXLINE( 459)				this->_blitOffset->set_y((screenBounds->y - screenPos->y));
            			}
HXLINE( 461)			if (!(screenBounds->_inPool)) {
HXLINE( 461)				screenBounds->_inPool = true;
HXDLIN( 461)				screenBounds->_weak = false;
HXDLIN( 461)				::flixel::math::FlxRect_obj::_pool->putUnsafe(screenBounds);
            			}
HXLINE( 462)			screenPos->put();
            		}
HXLINE( 465)		bool _hx_tmp8;
HXDLIN( 465)		if (::hx::IsNotNull( this->_blitGraphic )) {
HXLINE( 465)			if ((this->_blitGraphic->width == graphicSizeX)) {
HXLINE( 465)				_hx_tmp8 = (this->_blitGraphic->height != graphicSizeY);
            			}
            			else {
HXLINE( 465)				_hx_tmp8 = true;
            			}
            		}
            		else {
HXLINE( 465)			_hx_tmp8 = true;
            		}
HXDLIN( 465)		if (_hx_tmp8) {
HXLINE( 467)			this->_blitGraphic = ::flixel::FlxG_obj::bitmap->create(graphicSizeX,graphicSizeY,0,true,null());
            		}
HXLINE( 470)		 ::openfl::display::BitmapData pixels = this->_blitGraphic->bitmap;
HXLINE( 471)		pixels->lock();
HXLINE( 473)		pixels->fillRect(pixels->rect,0);
HXLINE( 474)		this->animation->set_frameIndex(0);
HXLINE( 475)		this->calcFrame(true);
HXLINE( 477)		this->_matrix->identity();
HXLINE( 478)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 479)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 480)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 482)			if (this->_angleChanged) {
HXLINE( 482)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 482)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 482)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 482)				this->_angleChanged = false;
            			}
HXLINE( 483)			if ((this->angle != 0)) {
HXLINE( 484)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 484)				Float cos = this->_cosAngle;
HXDLIN( 484)				Float sin = this->_sinAngle;
HXDLIN( 484)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 484)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 484)				_this->a = a1;
HXDLIN( 484)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 484)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 484)				_this->c = c1;
HXDLIN( 484)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 484)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 484)				_this->tx = tx1;
            			}
            		}
HXLINE( 487)		this->_matrix->translate(this->origin->x,this->origin->y);
HXLINE( 488)		this->_matrix->translate(-(this->_blitOffset->x),-(this->_blitOffset->y));
HXLINE( 489)		{
HXLINE( 489)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 489)			Float y1 = this->_matrix->ty;
HXDLIN( 489)			this2->set_x(this->_matrix->tx);
HXDLIN( 489)			this2->set_y(y1);
            		}
HXLINE( 493)		int bufferX;
HXDLIN( 493)		bool bufferX1;
HXDLIN( 493)		int this3 = this->repeatAxes;
HXDLIN( 493)		bool bufferX2;
HXDLIN( 493)		if ((this3 != 1)) {
HXLINE( 493)			bufferX2 = (this3 == 17);
            		}
            		else {
HXLINE( 493)			bufferX2 = true;
            		}
HXDLIN( 493)		if (bufferX2) {
HXLINE( 493)			bufferX1 = (this->angle != 0);
            		}
            		else {
HXLINE( 493)			bufferX1 = false;
            		}
HXDLIN( 493)		if (bufferX1) {
HXLINE( 493)			bufferX = 1;
            		}
            		else {
HXLINE( 493)			bufferX = 0;
            		}
HXLINE( 494)		int bufferY;
HXDLIN( 494)		bool bufferY1;
HXDLIN( 494)		int this4 = this->repeatAxes;
HXDLIN( 494)		bool bufferY2;
HXDLIN( 494)		if ((this4 != 16)) {
HXLINE( 494)			bufferY2 = (this4 == 17);
            		}
            		else {
HXLINE( 494)			bufferY2 = true;
            		}
HXDLIN( 494)		if (bufferY2) {
HXLINE( 494)			bufferY1 = (this->angle != 0);
            		}
            		else {
HXLINE( 494)			bufferY1 = false;
            		}
HXDLIN( 494)		if (bufferY1) {
HXLINE( 494)			bufferY = 1;
            		}
            		else {
HXLINE( 494)			bufferY = 0;
            		}
HXLINE( 495)		{
HXLINE( 495)			int _g = -(bufferX);
HXDLIN( 495)			int _g1 = (tilesX + bufferX);
HXDLIN( 495)			while((_g < _g1)){
HXLINE( 495)				_g = (_g + 1);
HXDLIN( 495)				int tileX = (_g - 1);
HXLINE( 497)				{
HXLINE( 497)					int _g1 = -(bufferY);
HXDLIN( 497)					int _g2 = (tilesY + bufferY);
HXDLIN( 497)					while((_g1 < _g2)){
HXLINE( 497)						_g1 = (_g1 + 1);
HXDLIN( 497)						int tileY = (_g1 - 1);
HXLINE( 499)						this->_matrix->tx = (this->_point->x + (( (Float)(tileX) ) * tileSize->x));
HXLINE( 500)						this->_matrix->ty = (this->_point->y + (( (Float)(tileY) ) * tileSize->y));
HXLINE( 501)						pixels->draw(this->framePixels,this->_matrix,null(),null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 505)		pixels->unlock(null());
HXLINE( 507)		tileSize->put();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,regenGraphic,(void))

bool FlxBackdrop_obj::matchPrevDrawParams(int tilesX,int tilesY){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_512_matchPrevDrawParams)
HXDLIN( 512)		bool _hx_tmp;
HXDLIN( 512)		bool _hx_tmp1;
HXDLIN( 512)		bool _hx_tmp2;
HXDLIN( 512)		bool _hx_tmp3;
HXDLIN( 512)		bool _hx_tmp4;
HXDLIN( 512)		bool _hx_tmp5;
HXDLIN( 512)		bool _hx_tmp6;
HXDLIN( 512)		if (::hx::IsEq( this->_prevDrawParams->__Field(HX_("graphicKey",d7,ff,d1,76),::hx::paccDynamic),this->graphic->key )) {
HXDLIN( 512)			_hx_tmp6 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("tilesX",33,d7,28,1e),::hx::paccDynamic),tilesX );
            		}
            		else {
HXDLIN( 512)			_hx_tmp6 = false;
            		}
HXDLIN( 512)		if (_hx_tmp6) {
HXDLIN( 512)			_hx_tmp5 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("tilesY",34,d7,28,1e),::hx::paccDynamic),tilesY );
            		}
            		else {
HXDLIN( 512)			_hx_tmp5 = false;
            		}
HXDLIN( 512)		if (_hx_tmp5) {
HXDLIN( 512)			_hx_tmp4 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("scaleX",8e,ea,25,3c),::hx::paccDynamic),this->scale->x );
            		}
            		else {
HXDLIN( 512)			_hx_tmp4 = false;
            		}
HXDLIN( 512)		if (_hx_tmp4) {
HXDLIN( 512)			_hx_tmp3 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("scaleY",8f,ea,25,3c),::hx::paccDynamic),this->scale->y );
            		}
            		else {
HXDLIN( 512)			_hx_tmp3 = false;
            		}
HXDLIN( 512)		if (_hx_tmp3) {
HXDLIN( 512)			_hx_tmp2 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("spacingX",75,df,11,f2),::hx::paccDynamic),this->spacing->x );
            		}
            		else {
HXDLIN( 512)			_hx_tmp2 = false;
            		}
HXDLIN( 512)		if (_hx_tmp2) {
HXDLIN( 512)			_hx_tmp1 = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("spacingY",76,df,11,f2),::hx::paccDynamic),this->spacing->y );
            		}
            		else {
HXDLIN( 512)			_hx_tmp1 = false;
            		}
HXDLIN( 512)		if (_hx_tmp1) {
HXDLIN( 512)			_hx_tmp = ::hx::IsEq( this->_prevDrawParams->__Field(HX_("repeatAxes",20,26,dd,06),::hx::paccDynamic),this->repeatAxes );
            		}
            		else {
HXDLIN( 512)			_hx_tmp = false;
            		}
HXDLIN( 512)		if (_hx_tmp) {
HXLINE( 520)			return ::hx::IsEq( this->_prevDrawParams->__Field(HX_("angle",d3,43,e2,22),::hx::paccDynamic),this->angle );
            		}
            		else {
HXDLIN( 512)			return false;
            		}
HXDLIN( 512)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBackdrop_obj,matchPrevDrawParams,return )

void FlxBackdrop_obj::setDrawParams(int tilesX,int tilesY){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_524_setDrawParams)
HXLINE( 525)		this->_prevDrawParams->__SetField(HX_("graphicKey",d7,ff,d1,76),this->graphic->key,::hx::paccDynamic);
HXLINE( 526)		this->_prevDrawParams->__SetField(HX_("tilesX",33,d7,28,1e),tilesX,::hx::paccDynamic);
HXLINE( 527)		this->_prevDrawParams->__SetField(HX_("tilesY",34,d7,28,1e),tilesY,::hx::paccDynamic);
HXLINE( 528)		this->_prevDrawParams->__SetField(HX_("scaleX",8e,ea,25,3c),this->scale->x,::hx::paccDynamic);
HXLINE( 529)		this->_prevDrawParams->__SetField(HX_("scaleY",8f,ea,25,3c),this->scale->y,::hx::paccDynamic);
HXLINE( 530)		this->_prevDrawParams->__SetField(HX_("spacingX",75,df,11,f2),this->spacing->x,::hx::paccDynamic);
HXLINE( 531)		this->_prevDrawParams->__SetField(HX_("spacingY",76,df,11,f2),this->spacing->y,::hx::paccDynamic);
HXLINE( 532)		this->_prevDrawParams->__SetField(HX_("repeatAxes",20,26,dd,06),this->repeatAxes,::hx::paccDynamic);
HXLINE( 533)		this->_prevDrawParams->__SetField(HX_("angle",d3,43,e2,22),this->angle,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBackdrop_obj,setDrawParams,(void))


::hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new( ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY) {
	::hx::ObjectPtr< FlxBackdrop_obj > __this = new FlxBackdrop_obj();
	__this->__construct(graphic,__o_repeatAxes,__o_spacingX,__o_spacingY);
	return __this;
}

::hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY) {
	FlxBackdrop_obj *__this = (FlxBackdrop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBackdrop_obj), true, "flixel.addons.display.FlxBackdrop"));
	*(void **)__this = FlxBackdrop_obj::_hx_vtable;
	__this->__construct(graphic,__o_repeatAxes,__o_spacingX,__o_spacingY);
	return __this;
}

FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(repeatAxes,"repeatAxes");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(drawBlit,"drawBlit");
	HX_MARK_MEMBER_NAME(blitMode,"blitMode");
	HX_MARK_MEMBER_NAME(_blitOffset,"_blitOffset");
	HX_MARK_MEMBER_NAME(_blitGraphic,"_blitGraphic");
	HX_MARK_MEMBER_NAME(_prevDrawParams,"_prevDrawParams");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(repeatAxes,"repeatAxes");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(drawBlit,"drawBlit");
	HX_VISIT_MEMBER_NAME(blitMode,"blitMode");
	HX_VISIT_MEMBER_NAME(_blitOffset,"_blitOffset");
	HX_VISIT_MEMBER_NAME(_blitGraphic,"_blitGraphic");
	HX_VISIT_MEMBER_NAME(_prevDrawParams,"_prevDrawParams");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBackdrop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"modMin") ) { return ::hx::Val( modMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"modMax") ) { return ::hx::Val( modMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return ::hx::Val( spacing ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawBlit") ) { return ::hx::Val( drawBlit ); }
		if (HX_FIELD_EQ(inName,"blitMode") ) { return ::hx::Val( blitMode ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"repeatAxes") ) { return ::hx::Val( repeatAxes ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return ::hx::Val( drawSimple_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_blitOffset") ) { return ::hx::Val( _blitOffset ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_blitGraphic") ) { return ::hx::Val( _blitGraphic ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDrawParams") ) { return ::hx::Val( setDrawParams_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_prevDrawParams") ) { return ::hx::Val( _prevDrawParams ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return ::hx::Val( isSimpleRenderBlit_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawToLargestCamera") ) { return ::hx::Val( drawToLargestCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"matchPrevDrawParams") ) { return ::hx::Val( matchPrevDrawParams_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getFrameScreenBounds") ) { return ::hx::Val( getFrameScreenBounds_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBackdrop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawBlit") ) { drawBlit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMode") ) { blitMode=inValue.Cast<  ::flixel::addons::display::BackdropBlitMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"repeatAxes") ) { repeatAxes=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_blitOffset") ) { _blitOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_blitGraphic") ) { _blitGraphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_prevDrawParams") ) { _prevDrawParams=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("repeatAxes",20,26,dd,06));
	outFields->push(HX_("spacing",83,33,bb,91));
	outFields->push(HX_("drawBlit",59,e2,82,55));
	outFields->push(HX_("blitMode",38,f6,8b,69));
	outFields->push(HX_("_blitOffset",c7,a6,22,4f));
	outFields->push(HX_("_blitGraphic",f4,98,d1,8b));
	outFields->push(HX_("_prevDrawParams",dc,cf,e7,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBackdrop_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,repeatAxes),HX_("repeatAxes",20,26,dd,06)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxBackdrop_obj,spacing),HX_("spacing",83,33,bb,91)},
	{::hx::fsBool,(int)offsetof(FlxBackdrop_obj,drawBlit),HX_("drawBlit",59,e2,82,55)},
	{::hx::fsObject /*  ::flixel::addons::display::BackdropBlitMode */ ,(int)offsetof(FlxBackdrop_obj,blitMode),HX_("blitMode",38,f6,8b,69)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxBackdrop_obj,_blitOffset),HX_("_blitOffset",c7,a6,22,4f)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxBackdrop_obj,_blitGraphic),HX_("_blitGraphic",f4,98,d1,8b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBackdrop_obj,_prevDrawParams),HX_("_prevDrawParams",dc,cf,e7,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBackdrop_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBackdrop_obj_sMemberFields[] = {
	HX_("repeatAxes",20,26,dd,06),
	HX_("spacing",83,33,bb,91),
	HX_("drawBlit",59,e2,82,55),
	HX_("blitMode",38,f6,8b,69),
	HX_("_blitOffset",c7,a6,22,4f),
	HX_("_blitGraphic",f4,98,d1,8b),
	HX_("_prevDrawParams",dc,cf,e7,01),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("drawToLargestCamera",c2,8e,8b,b9),
	HX_("isSimpleRenderBlit",87,59,b0,df),
	HX_("drawSimple",56,7f,42,fa),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("getFrameScreenBounds",58,99,70,ef),
	HX_("modMin",f0,d7,b4,c0),
	HX_("modMax",02,d1,b4,c0),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("matchPrevDrawParams",62,33,a0,65),
	HX_("setDrawParams",ac,b4,b6,d0),
	::String(null()) };

::hx::Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	FlxBackdrop_obj _hx_dummy;
	FlxBackdrop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxBackdrop",f3,83,47,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBackdrop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBackdrop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBackdrop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBackdrop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
