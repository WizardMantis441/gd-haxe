#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9de8feef4ce25038_78_new,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","new",0xbf5d5a94,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",78,0x6d04e29d)
HX_LOCAL_STACK_FRAME(_hx_pos_9de8feef4ce25038_68_hasNext,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","hasNext",0xccb359a1,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.hasNext","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",68,0x6d04e29d)
HX_LOCAL_STACK_FRAME(_hx_pos_9de8feef4ce25038_71_next,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","next",0xb251e83f,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.next","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",71,0x6d04e29d)
namespace haxe{
namespace ds{
namespace _GenericStack{

void GenericStackIterator_hscript_Token_obj::__construct( ::haxe::ds::GenericCell_hscript_Token head){
            	HX_STACKFRAME(&_hx_pos_9de8feef4ce25038_78_new)
HXDLIN(  78)		this->current = head;
            	}

Dynamic GenericStackIterator_hscript_Token_obj::__CreateEmpty() { return new GenericStackIterator_hscript_Token_obj; }

void *GenericStackIterator_hscript_Token_obj::_hx_vtable = 0;

Dynamic GenericStackIterator_hscript_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > _hx_result = new GenericStackIterator_hscript_Token_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GenericStackIterator_hscript_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37a31c00;
}

bool GenericStackIterator_hscript_Token_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_9de8feef4ce25038_68_hasNext)
HXDLIN(  68)		return ::hx::IsNotNull( this->current );
            	}


 ::hscript::Token GenericStackIterator_hscript_Token_obj::next(){
            	HX_STACKFRAME(&_hx_pos_9de8feef4ce25038_71_next)
HXLINE(  72)		 ::hscript::Token result = this->current->elt;
HXLINE(  73)		this->current = this->current->next;
HXLINE(  74)		return result;
            	}



::hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__new( ::haxe::ds::GenericCell_hscript_Token head) {
	::hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > __this = new GenericStackIterator_hscript_Token_obj();
	__this->__construct(head);
	return __this;
}

::hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_hscript_Token head) {
	GenericStackIterator_hscript_Token_obj *__this = (GenericStackIterator_hscript_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericStackIterator_hscript_Token_obj), true, "haxe.ds._GenericStack.GenericStackIterator_hscript_Token"));
	*(void **)__this = GenericStackIterator_hscript_Token_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

GenericStackIterator_hscript_Token_obj::GenericStackIterator_hscript_Token_obj()
{
}

void GenericStackIterator_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_hscript_Token);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_END_CLASS();
}

void GenericStackIterator_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
}

::hx::Val GenericStackIterator_hscript_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericStackIterator_hscript_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericStackIterator_hscript_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hscript_Token */ ,(int)offsetof(GenericStackIterator_hscript_Token_obj,current),HX_("current",39,9c,e3,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericStackIterator_hscript_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStackIterator_hscript_Token_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class GenericStackIterator_hscript_Token_obj::__mClass;

void GenericStackIterator_hscript_Token_obj::__register()
{
	GenericStackIterator_hscript_Token_obj _hx_dummy;
	GenericStackIterator_hscript_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds._GenericStack.GenericStackIterator_hscript_Token",a2,c0,d7,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericStackIterator_hscript_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericStackIterator_hscript_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStackIterator_hscript_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStackIterator_hscript_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack
