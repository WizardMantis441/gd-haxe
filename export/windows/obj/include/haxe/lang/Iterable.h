#ifndef INCLUDED_haxe_lang_Iterable
#define INCLUDED_haxe_lang_Iterable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,lang,Iterable)
HX_DECLARE_CLASS2(haxe,lang,Iterator)

namespace haxe{
namespace lang{


class HXCPP_CLASS_ATTRIBUTES Iterable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		::Dynamic (::hx::Object :: *_hx_iterator)(); 
		static inline ::Dynamic iterator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::lang::Iterable_obj *>(_hx_.mPtr->_hx_getInterface(0x1f692be6)))->_hx_iterator)();
		}
};

} // end namespace haxe
} // end namespace lang

#endif /* INCLUDED_haxe_lang_Iterable */ 
