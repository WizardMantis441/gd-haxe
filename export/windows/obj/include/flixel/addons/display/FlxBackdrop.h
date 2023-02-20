#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#define INCLUDED_flixel_addons_display_FlxBackdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,BackdropBlitMode)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxBackdrop_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxBackdrop_obj OBJ_;
		FlxBackdrop_obj();

	public:
		enum { _hx_ClassId = 0x5ae97639 };

		void __construct( ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxBackdrop")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxBackdrop"); }
		static ::hx::ObjectPtr< FlxBackdrop_obj > __new( ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY);
		static ::hx::ObjectPtr< FlxBackdrop_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic graphic,::hx::Null< int >  __o_repeatAxes,::hx::Null< int >  __o_spacingX,::hx::Null< int >  __o_spacingY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBackdrop_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBackdrop",48,8c,ad,31); }

		int repeatAxes;
		 ::flixel::math::FlxBasePoint spacing;
		bool drawBlit;
		 ::flixel::addons::display::BackdropBlitMode blitMode;
		 ::flixel::math::FlxBasePoint _blitOffset;
		 ::flixel::graphics::FlxGraphic _blitGraphic;
		 ::Dynamic _prevDrawParams;
		void destroy();

		void draw();

		bool isOnScreen( ::flixel::FlxCamera camera);

		void drawToLargestCamera();
		::Dynamic drawToLargestCamera_dyn();

		bool isSimpleRenderBlit( ::flixel::FlxCamera camera);

		void drawSimple( ::flixel::FlxCamera camera);

		void drawComplex( ::flixel::FlxCamera camera);

		 ::flixel::math::FlxRect getFrameScreenBounds( ::flixel::FlxCamera camera);
		::Dynamic getFrameScreenBounds_dyn();

		Float modMin(Float value,Float step,Float min);
		::Dynamic modMin_dyn();

		Float modMax(Float value,Float step,Float max);
		::Dynamic modMax_dyn();

		void regenGraphic( ::flixel::FlxCamera camera);
		::Dynamic regenGraphic_dyn();

		bool matchPrevDrawParams(int tilesX,int tilesY);
		::Dynamic matchPrevDrawParams_dyn();

		void setDrawParams(int tilesX,int tilesY);
		::Dynamic setDrawParams_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxBackdrop */ 
