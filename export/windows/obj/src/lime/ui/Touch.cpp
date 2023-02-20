#include <hxcpp.h>

#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_25_new,"lime.ui.Touch","new",0xc7f37270,"lime.ui.Touch.new","lime/ui/Touch.hx",25,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_11_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",11,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_12_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",12,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_13_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",13,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_14_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",14,0xf69781a0)
namespace lime{
namespace ui{

void Touch_obj::__construct(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device){
            	HX_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_25_new)
HXLINE(  26)		this->x = x;
HXLINE(  27)		this->y = y;
HXLINE(  28)		this->id = id;
HXLINE(  29)		this->dx = dx;
HXLINE(  30)		this->dy = dy;
HXLINE(  31)		this->pressure = pressure;
HXLINE(  32)		this->device = device;
            	}

Dynamic Touch_obj::__CreateEmpty() { return new Touch_obj; }

void *Touch_obj::_hx_vtable = 0;

Dynamic Touch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Touch_obj > _hx_result = new Touch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Touch_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x081aca96;
}

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onCancel;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onEnd;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onMove;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onStart;


Touch_obj::Touch_obj()
{
}

::hx::Val Touch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return ::hx::Val( pressure ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Touch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { outValue = ( onEnd ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { outValue = ( onMove ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { outValue = ( onStart ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { outValue = ( onCancel ); return true; }
	}
	return false;
}

::hx::Val Touch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { onEnd=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { onCancel=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
	}
	return false;
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("pressure",c5,ab,1d,70));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Touch_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Touch_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsFloat,(int)offsetof(Touch_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsFloat,(int)offsetof(Touch_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsInt,(int)offsetof(Touch_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(Touch_obj,pressure),HX_("pressure",c5,ab,1d,70)},
	{::hx::fsFloat,(int)offsetof(Touch_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Touch_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Touch_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Touch_Void */ ,(void *) &Touch_obj::onCancel,HX_("onCancel",f9,e3,e0,97)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Touch_Void */ ,(void *) &Touch_obj::onEnd,HX_("onEnd",fc,97,64,32)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Touch_Void */ ,(void *) &Touch_obj::onMove,HX_("onMove",d0,eb,ea,ea)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Touch_Void */ ,(void *) &Touch_obj::onStart,HX_("onStart",c3,12,49,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Touch_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("id",db,5b,00,00),
	HX_("pressure",c5,ab,1d,70),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

static void Touch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::onCancel,"onCancel");
	HX_MARK_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_MARK_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_MARK_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Touch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::onCancel,"onCancel");
	HX_VISIT_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_VISIT_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_VISIT_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#endif

::hx::Class Touch_obj::__mClass;

static ::String Touch_obj_sStaticFields[] = {
	HX_("onCancel",f9,e3,e0,97),
	HX_("onEnd",fc,97,64,32),
	HX_("onMove",d0,eb,ea,ea),
	HX_("onStart",c3,12,49,1a),
	::String(null())
};

void Touch_obj::__register()
{
	Touch_obj _hx_dummy;
	Touch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui.Touch",7e,ba,55,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Touch_obj::__GetStatic;
	__mClass->mSetStaticField = &Touch_obj::__SetStatic;
	__mClass->mMarkFunc = Touch_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Touch_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Touch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Touch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Touch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Touch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Touch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Touch_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_11_boot)
HXDLIN(  11)		onCancel =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_12_boot)
HXDLIN(  12)		onEnd =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_13_boot)
HXDLIN(  13)		onMove =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_14_boot)
HXDLIN(  14)		onStart =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace ui
