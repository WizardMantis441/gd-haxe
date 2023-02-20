#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_menus_MainMenuState
#include <menus/MainMenuState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cff0770ecdcd20d_8_new,"menus.MainMenuState","new",0xc2a4e8d1,"menus.MainMenuState.new","menus/MainMenuState.hx",8,0x5833adc0)
HX_LOCAL_STACK_FRAME(_hx_pos_3cff0770ecdcd20d_12_create,"menus.MainMenuState","create",0x6a2e6b2b,"menus.MainMenuState.create","menus/MainMenuState.hx",12,0x5833adc0)
HX_LOCAL_STACK_FRAME(_hx_pos_3cff0770ecdcd20d_27_update,"menus.MainMenuState","update",0x75248a38,"menus.MainMenuState.update","menus/MainMenuState.hx",27,0x5833adc0)
namespace menus{

void MainMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_3cff0770ecdcd20d_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0043613d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0043613d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_3cff0770ecdcd20d_12_create)
HXLINE(  13)		this->super::create();
HXLINE(  15)		this->bg =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,HX_("assets/images/backgrounds/game_bg_01_001.png",d0,44,41,b6),1,0,0);
HXLINE(  16)		 ::flixel::addons::display::FlxBackdrop fh = this->bg;
HXDLIN(  16)		fh->velocity->set_x((fh->velocity->x - ( (Float)(75) )));
HXLINE(  17)		this->floor =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,HX_("assets/images/grounds/groundSquare_01_001.png",fb,01,35,76),1,0,0);
HXLINE(  18)		 ::flixel::addons::display::FlxBackdrop fh1 = this->floor;
HXDLIN(  18)		fh1->velocity->set_x((fh1->velocity->x - ( (Float)(350) )));
HXLINE(  19)		{
HXLINE(  19)			{
HXLINE(  19)				 ::flixel::addons::display::FlxBackdrop i = this->bg;
HXLINE(  20)				i->setGraphicSize(::Std_obj::_hx_int((i->get_width() * ((Float)1.5))),null());
HXLINE(  21)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  21)				i->set_y((( (Float)(_hx_tmp) ) - i->get_height()));
HXLINE(  22)				this->add(i);
            			}
HXLINE(  19)			{
HXLINE(  19)				 ::flixel::addons::display::FlxBackdrop i1 = this->floor;
HXLINE(  20)				i1->setGraphicSize(::Std_obj::_hx_int((i1->get_width() * ((Float)1.5))),null());
HXLINE(  21)				int _hx_tmp1 = ::flixel::FlxG_obj::height;
HXDLIN(  21)				i1->set_y((( (Float)(_hx_tmp1) ) - i1->get_height()));
HXLINE(  22)				this->add(i1);
            			}
            		}
            	}


void MainMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3cff0770ecdcd20d_27_update)
HXDLIN(  27)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "menus.MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(floor,"floor");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(floor,"floor");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { return ::hx::Val( floor ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { floor=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("floor",cc,d1,96,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(MainMenuState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(MainMenuState_obj,floor),HX_("floor",cc,d1,96,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("floor",cc,d1,96,02),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MainMenuState_obj::__mClass;

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("menus.MainMenuState",5f,2c,52,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace menus
