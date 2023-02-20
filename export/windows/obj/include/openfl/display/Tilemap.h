#ifndef INCLUDED_openfl_display_Tilemap
#define INCLUDED_openfl_display_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DBuffer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Tilemap_obj : public  ::openfl::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::display::DisplayObject_obj super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();

	public:
		enum { _hx_ClassId = 0x2aebe7dc };

		void __construct(int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Tilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Tilemap"); }
		static ::hx::ObjectPtr< Tilemap_obj > __new(int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing);
		static ::hx::ObjectPtr< Tilemap_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Tilemap",0e,18,e0,12); }

		bool tileAlphaEnabled;
		bool tileBlendModeEnabled;
		bool tileColorTransformEnabled;
		bool smoothing;
		 ::openfl::display::TileContainer _hx___group;
		 ::openfl::display::Tileset _hx___tileset;
		 ::openfl::display::_internal::Context3DBuffer _hx___buffer;
		bool _hx___bufferDirty;
		int _hx___height;
		int _hx___width;
		 ::openfl::display::Tile addTile( ::openfl::display::Tile tile);
		::Dynamic addTile_dyn();

		 ::openfl::display::Tile addTileAt( ::openfl::display::Tile tile,int index);
		::Dynamic addTileAt_dyn();

		::Array< ::Dynamic> addTiles(::Array< ::Dynamic> tiles);
		::Dynamic addTiles_dyn();

		bool contains( ::openfl::display::Tile tile);
		::Dynamic contains_dyn();

		 ::openfl::display::Tile getTileAt(int index);
		::Dynamic getTileAt_dyn();

		int getTileIndex( ::openfl::display::Tile tile);
		::Dynamic getTileIndex_dyn();

		 ::openfl::display::TileContainer getTiles();
		::Dynamic getTiles_dyn();

		 ::openfl::display::Tile removeTile( ::openfl::display::Tile tile);
		::Dynamic removeTile_dyn();

		 ::openfl::display::Tile removeTileAt(int index);
		::Dynamic removeTileAt_dyn();

		void removeTiles(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic removeTiles_dyn();

		void setTileIndex( ::openfl::display::Tile tile,int index);
		::Dynamic setTileIndex_dyn();

		void setTiles( ::openfl::display::TileContainer group);
		::Dynamic setTiles_dyn();

		void sortTiles( ::Dynamic compareFunction);
		::Dynamic sortTiles_dyn();

		void swapTiles( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2);
		::Dynamic swapTiles_dyn();

		void swapTilesAt(int index1,int index2);
		::Dynamic swapTilesAt_dyn();

		void _hx___enterFrame(int deltaTime);

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		void _hx___renderFlash();
		::Dynamic _hx___renderFlash_dyn();

		Float get_height();

		Float set_height(Float value);

		int get_numTiles();
		::Dynamic get_numTiles_dyn();

		 ::openfl::display::Tileset get_tileset();
		::Dynamic get_tileset_dyn();

		 ::openfl::display::Tileset set_tileset( ::openfl::display::Tileset value);
		::Dynamic set_tileset_dyn();

		Float get_width();

		Float set_width(Float value);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Tilemap */ 
