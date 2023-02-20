#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#define INCLUDED_flixel_system_debug_watch_Tracker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Tracker)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Watch)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES Tracker_obj : public  ::flixel::_hx_system::debug::watch::Watch_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::watch::Watch_obj super;
		typedef Tracker_obj OBJ_;
		Tracker_obj();

	public:
		enum { _hx_ClassId = 0x62db3391 };

		void __construct(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.Tracker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.Tracker"); }
		static ::hx::ObjectPtr< Tracker_obj > __new(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		static ::hx::ObjectPtr< Tracker_obj > __alloc(::hx::Ctx *_hx_ctx,::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tracker_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tracker",98,07,5a,55); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_Tracker */ 
