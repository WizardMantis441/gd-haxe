#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10b8a2091f17fcad_165_new,"openfl.display.SimpleButton","new",0x26b2c720,"openfl.display.SimpleButton.new","openfl/display/SimpleButton.hx",165,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_196___getBounds,"openfl.display.SimpleButton","__getBounds",0xf4f40f4b,"openfl.display.SimpleButton.__getBounds","openfl/display/SimpleButton.hx",196,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_209___getRenderBounds,"openfl.display.SimpleButton","__getRenderBounds",0x52d157c1,"openfl.display.SimpleButton.__getRenderBounds","openfl/display/SimpleButton.hx",209,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_231___getCursor,"openfl.display.SimpleButton","__getCursor",0xcdbf17ac,"openfl.display.SimpleButton.__getCursor","openfl/display/SimpleButton.hx",231,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_236___hitTest,"openfl.display.SimpleButton","__hitTest",0x74e237e5,"openfl.display.SimpleButton.__hitTest","openfl/display/SimpleButton.hx",236,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_285___hitTestMask,"openfl.display.SimpleButton","__hitTestMask",0xa5bbfb71,"openfl.display.SimpleButton.__hitTestMask","openfl/display/SimpleButton.hx",285,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_297___setStageReference,"openfl.display.SimpleButton","__setStageReference",0xb9ee5c0f,"openfl.display.SimpleButton.__setStageReference","openfl/display/SimpleButton.hx",297,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_312___setTransformDirty,"openfl.display.SimpleButton","__setTransformDirty",0x5e2c91e8,"openfl.display.SimpleButton.__setTransformDirty","openfl/display/SimpleButton.hx",312,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_327___update,"openfl.display.SimpleButton","__update",0xc35f8269,"openfl.display.SimpleButton.__update","openfl/display/SimpleButton.hx",327,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_345___updateTransforms,"openfl.display.SimpleButton","__updateTransforms",0xafb59550,"openfl.display.SimpleButton.__updateTransforms","openfl/display/SimpleButton.hx",345,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_362_get_downState,"openfl.display.SimpleButton","get_downState",0xc54404e6,"openfl.display.SimpleButton.get_downState","openfl/display/SimpleButton.hx",362,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_366_set_downState,"openfl.display.SimpleButton","set_downState",0x0a49e6f2,"openfl.display.SimpleButton.set_downState","openfl/display/SimpleButton.hx",366,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_377_get_hitTestState,"openfl.display.SimpleButton","get_hitTestState",0xed3a2955,"openfl.display.SimpleButton.get_hitTestState","openfl/display/SimpleButton.hx",377,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_381_set_hitTestState,"openfl.display.SimpleButton","set_hitTestState",0x437c16c9,"openfl.display.SimpleButton.set_hitTestState","openfl/display/SimpleButton.hx",381,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_401_get_overState,"openfl.display.SimpleButton","get_overState",0x12efbeb4,"openfl.display.SimpleButton.get_overState","openfl/display/SimpleButton.hx",401,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_405_set_overState,"openfl.display.SimpleButton","set_overState",0x57f5a0c0,"openfl.display.SimpleButton.set_overState","openfl/display/SimpleButton.hx",405,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_415_get_soundTransform,"openfl.display.SimpleButton","get_soundTransform",0x1d7d70a6,"openfl.display.SimpleButton.get_soundTransform","openfl/display/SimpleButton.hx",415,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_425_set_soundTransform,"openfl.display.SimpleButton","set_soundTransform",0xfa2ca31a,"openfl.display.SimpleButton.set_soundTransform","openfl/display/SimpleButton.hx",425,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_432_get_upState,"openfl.display.SimpleButton","get_upState",0x4aceac8d,"openfl.display.SimpleButton.get_upState","openfl/display/SimpleButton.hx",432,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_436_set_upState,"openfl.display.SimpleButton","set_upState",0x553bb399,"openfl.display.SimpleButton.set_upState","openfl/display/SimpleButton.hx",436,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_446_set___currentState,"openfl.display.SimpleButton","set___currentState",0xc32592b5,"openfl.display.SimpleButton.set___currentState","openfl/display/SimpleButton.hx",446,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_503___this_onMouseDown,"openfl.display.SimpleButton","__this_onMouseDown",0x383f91c7,"openfl.display.SimpleButton.__this_onMouseDown","openfl/display/SimpleButton.hx",503,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_510___this_onMouseOut,"openfl.display.SimpleButton","__this_onMouseOut",0x6c31fac9,"openfl.display.SimpleButton.__this_onMouseOut","openfl/display/SimpleButton.hx",510,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_520___this_onMouseOver,"openfl.display.SimpleButton","__this_onMouseOver",0x3f8a2ab9,"openfl.display.SimpleButton.__this_onMouseOver","openfl/display/SimpleButton.hx",520,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_533___this_onMouseUp,"openfl.display.SimpleButton","__this_onMouseUp",0xd7286c80,"openfl.display.SimpleButton.__this_onMouseUp","openfl/display/SimpleButton.hx",533,0x4b6b858e)
namespace openfl{
namespace display{

void SimpleButton_obj::__construct( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_165_new)
HXLINE( 166)		super::__construct();
HXLINE( 168)		this->_hx___drawableType = 6;
HXLINE( 169)		this->enabled = true;
HXLINE( 170)		this->trackAsMenu = false;
HXLINE( 171)		this->useHandCursor = true;
HXLINE( 173)		 ::openfl::display::DisplayObject _hx_tmp;
HXDLIN( 173)		if (::hx::IsNotNull( upState )) {
HXLINE( 173)			_hx_tmp = upState;
            		}
            		else {
HXLINE( 173)			_hx_tmp =  ::openfl::display::DisplayObject_obj::__alloc( HX_CTX );
            		}
HXDLIN( 173)		this->_hx___upState = _hx_tmp;
HXLINE( 174)		this->_hx___overState = overState;
HXLINE( 175)		this->_hx___downState = downState;
HXLINE( 176)		 ::openfl::display::DisplayObject _hx_tmp1;
HXDLIN( 176)		if (::hx::IsNotNull( hitTestState )) {
HXLINE( 176)			_hx_tmp1 = hitTestState;
            		}
            		else {
HXLINE( 176)			_hx_tmp1 =  ::openfl::display::DisplayObject_obj::__alloc( HX_CTX );
            		}
HXDLIN( 176)		this->set_hitTestState(_hx_tmp1);
HXLINE( 178)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->_hx___this_onMouseDown_dyn(),null(),null(),null());
HXLINE( 179)		this->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->_hx___this_onMouseOut_dyn(),null(),null(),null());
HXLINE( 180)		this->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->_hx___this_onMouseOver_dyn(),null(),null(),null());
HXLINE( 181)		this->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->_hx___this_onMouseUp_dyn(),null(),null(),null());
HXLINE( 183)		this->_hx___tabEnabled = true;
HXLINE( 184)		this->set___currentState(this->_hx___upState);
HXLINE( 186)		if (::hx::IsNotNull( ::openfl::display::SimpleButton_obj::_hx___constructor )) {
HXLINE( 188)			 ::Dynamic method = ::openfl::display::SimpleButton_obj::_hx___constructor;
HXLINE( 189)			::openfl::display::SimpleButton_obj::_hx___constructor = null();
HXLINE( 191)			method(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic SimpleButton_obj::__CreateEmpty() { return new SimpleButton_obj; }

void *SimpleButton_obj::_hx_vtable = 0;

Dynamic SimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleButton_obj > _hx_result = new SimpleButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a9c7d56) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0a9c7d56;
		}
	} else {
		return inClassId==(int)0x0c89e854 || inClassId==(int)0x6b353933;
	}
}

void SimpleButton_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_196___getBounds)
HXLINE( 197)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 199)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 201)		{
HXLINE( 201)			 ::openfl::geom::Matrix local = this->_hx___currentState->_hx___transform;
HXDLIN( 201)			childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 201)			childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 201)			childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 201)			childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 201)			childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 201)			childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            		}
HXLINE( 203)		this->_hx___currentState->_hx___getBounds(rect,childWorldTransform);
HXLINE( 205)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void SimpleButton_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_209___getRenderBounds)
HXLINE( 210)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 212)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 213)			return;
            		}
            		else {
HXLINE( 217)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 220)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 222)		{
HXLINE( 222)			 ::openfl::geom::Matrix local = this->_hx___currentState->_hx___transform;
HXDLIN( 222)			childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 222)			childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 222)			childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 222)			childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 222)			childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 222)			childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            		}
HXLINE( 224)		this->_hx___currentState->_hx___getRenderBounds(rect,childWorldTransform);
HXLINE( 226)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


::String SimpleButton_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_231___getCursor)
HXDLIN( 231)		bool _hx_tmp;
HXDLIN( 231)		bool _hx_tmp1;
HXDLIN( 231)		if (this->useHandCursor) {
HXDLIN( 231)			_hx_tmp1 = !(this->_hx___ignoreEvent);
            		}
            		else {
HXDLIN( 231)			_hx_tmp1 = false;
            		}
HXDLIN( 231)		if (_hx_tmp1) {
HXDLIN( 231)			_hx_tmp = this->enabled;
            		}
            		else {
HXDLIN( 231)			_hx_tmp = false;
            		}
HXDLIN( 231)		if (_hx_tmp) {
HXDLIN( 231)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXDLIN( 231)			return null();
            		}
HXDLIN( 231)		return null();
            	}


bool SimpleButton_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_236___hitTest)
HXLINE( 237)		bool hitTest = false;
HXLINE( 239)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 241)			if (this->get_hitTestState()->_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 243)				if (::hx::IsNotNull( stack )) {
HXLINE( 245)					if ((stack->length == 0)) {
HXLINE( 247)						stack[0] = hitObject;
            					}
            					else {
HXLINE( 251)						stack[(stack->length - 1)] = hitObject;
            					}
            				}
HXLINE( 255)				if (interactiveOnly) {
HXLINE( 255)					hitTest = this->mouseEnabled;
            				}
            				else {
HXLINE( 255)					hitTest = true;
            				}
            			}
            		}
            		else {
HXLINE( 258)			if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 260)				bool _hx_tmp;
HXDLIN( 260)				bool _hx_tmp1;
HXDLIN( 260)				bool _hx_tmp2;
HXDLIN( 260)				if (hitObject->get_visible()) {
HXLINE( 260)					_hx_tmp2 = this->_hx___isMask;
            				}
            				else {
HXLINE( 260)					_hx_tmp2 = true;
            				}
HXDLIN( 260)				if (!(_hx_tmp2)) {
HXLINE( 260)					if (interactiveOnly) {
HXLINE( 260)						_hx_tmp1 = !(this->mouseEnabled);
            					}
            					else {
HXLINE( 260)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 260)					_hx_tmp1 = true;
            				}
HXDLIN( 260)				if (!(_hx_tmp1)) {
HXLINE( 260)					if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 260)						_hx_tmp = !(this->get_mask()->_hx___hitTestMask(x,y));
            					}
            					else {
HXLINE( 260)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 260)					_hx_tmp = true;
            				}
HXDLIN( 260)				if (_hx_tmp) {
HXLINE( 262)					hitTest = false;
            				}
            				else {
HXLINE( 264)					if (this->_hx___currentState->_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 266)						hitTest = interactiveOnly;
            					}
            				}
            			}
            		}
HXLINE( 273)		if (::hx::IsNotNull( stack )) {
HXLINE( 275)			while(true){
HXLINE( 275)				bool _hx_tmp;
HXDLIN( 275)				if ((stack->length > 1)) {
HXLINE( 275)					_hx_tmp = ::hx::IsInstanceEq( stack->__get((stack->length - 1)).StaticCast<  ::openfl::display::DisplayObject >(),stack->__get((stack->length - 2)).StaticCast<  ::openfl::display::DisplayObject >() );
            				}
            				else {
HXLINE( 275)					_hx_tmp = false;
            				}
HXDLIN( 275)				if (!(_hx_tmp)) {
HXLINE( 275)					goto _hx_goto_4;
            				}
HXLINE( 277)				stack->pop().StaticCast<  ::openfl::display::DisplayObject >();
            			}
            			_hx_goto_4:;
            		}
HXLINE( 281)		return hitTest;
            	}


bool SimpleButton_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_285___hitTestMask)
HXLINE( 286)		bool hitTest = false;
HXLINE( 288)		if (this->_hx___currentState->_hx___hitTestMask(x,y)) {
HXLINE( 290)			hitTest = true;
            		}
HXLINE( 293)		return hitTest;
            	}


void SimpleButton_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_297___setStageReference)
HXLINE( 298)		this->super::_hx___setStageReference(stage);
HXLINE( 300)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 302)			this->_hx___currentState->_hx___setStageReference(stage);
            		}
HXLINE( 305)		bool _hx_tmp;
HXDLIN( 305)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 305)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 305)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 305)			_hx_tmp = false;
            		}
HXDLIN( 305)		if (_hx_tmp) {
HXLINE( 307)			this->get_hitTestState()->_hx___setStageReference(stage);
            		}
            	}


void SimpleButton_obj::_hx___setTransformDirty(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_312___setTransformDirty)
HXLINE( 313)		this->super::_hx___setTransformDirty();
HXLINE( 315)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 317)			this->_hx___currentState->_hx___setTransformDirty();
            		}
HXLINE( 320)		bool _hx_tmp;
HXDLIN( 320)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 320)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 320)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 320)			_hx_tmp = false;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 322)			this->get_hitTestState()->_hx___setTransformDirty();
            		}
            	}


void SimpleButton_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_327___update)
HXLINE( 328)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 330)		if (updateChildren) {
HXLINE( 332)			if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 334)				this->_hx___currentState->_hx___update(transformOnly,true);
            			}
HXLINE( 337)			bool _hx_tmp;
HXDLIN( 337)			if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 337)				 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 337)				_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            			}
            			else {
HXLINE( 337)				_hx_tmp = false;
            			}
HXDLIN( 337)			if (_hx_tmp) {
HXLINE( 339)				this->get_hitTestState()->_hx___update(transformOnly,true);
            			}
            		}
            	}


void SimpleButton_obj::_hx___updateTransforms( ::openfl::geom::Matrix overrideTransform){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_345___updateTransforms)
HXLINE( 346)		this->super::_hx___updateTransforms(overrideTransform);
HXLINE( 348)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 350)			this->_hx___currentState->_hx___updateTransforms(null());
            		}
HXLINE( 353)		bool _hx_tmp;
HXDLIN( 353)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 353)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 353)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 353)			_hx_tmp = false;
            		}
HXDLIN( 353)		if (_hx_tmp) {
HXLINE( 355)			this->get_hitTestState()->_hx___updateTransforms(null());
            		}
            	}


 ::openfl::display::DisplayObject SimpleButton_obj::get_downState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_362_get_downState)
HXDLIN( 362)		return this->_hx___downState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_downState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_downState( ::openfl::display::DisplayObject downState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_366_set_downState)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if (::hx::IsNotNull( this->_hx___downState )) {
HXLINE( 367)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___downState );
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 369)			this->set___currentState(this->_hx___downState);
            		}
HXLINE( 372)		return (this->_hx___downState = downState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_downState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_hitTestState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_377_get_hitTestState)
HXDLIN( 377)		return this->_hx___hitTestState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_hitTestState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_hitTestState( ::openfl::display::DisplayObject hitTestState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_381_set_hitTestState)
HXLINE( 382)		bool _hx_tmp;
HXDLIN( 382)		if (::hx::IsNotNull( this->_hx___hitTestState )) {
HXLINE( 382)			_hx_tmp = ::hx::IsInstanceNotEq( this->_hx___hitTestState,hitTestState );
            		}
            		else {
HXLINE( 382)			_hx_tmp = false;
            		}
HXDLIN( 382)		if (_hx_tmp) {
HXLINE( 384)			bool _hx_tmp;
HXDLIN( 384)			bool _hx_tmp1;
HXDLIN( 384)			 ::openfl::display::DisplayObject _hx_tmp2 = this->_hx___hitTestState;
HXDLIN( 384)			if (::hx::IsInstanceNotEq( _hx_tmp2,this->get_downState() )) {
HXLINE( 384)				 ::openfl::display::DisplayObject _hx_tmp = this->_hx___hitTestState;
HXDLIN( 384)				_hx_tmp1 = ::hx::IsInstanceNotEq( _hx_tmp,this->get_upState() );
            			}
            			else {
HXLINE( 384)				_hx_tmp1 = false;
            			}
HXDLIN( 384)			if (_hx_tmp1) {
HXLINE( 384)				 ::openfl::display::DisplayObject _hx_tmp1 = this->_hx___hitTestState;
HXDLIN( 384)				_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->get_overState() );
            			}
            			else {
HXLINE( 384)				_hx_tmp = false;
            			}
HXDLIN( 384)			if (_hx_tmp) {
HXLINE( 386)				this->_hx___hitTestState->_hx___renderParent = null();
            			}
            		}
HXLINE( 390)		if (::hx::IsNotNull( hitTestState )) {
HXLINE( 392)			hitTestState->_hx___renderParent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 393)			if (!(hitTestState->_hx___renderDirty)) {
HXLINE( 393)				hitTestState->_hx___renderDirty = true;
HXDLIN( 393)				hitTestState->_hx___setParentRenderDirty();
            			}
            		}
HXLINE( 396)		return (this->_hx___hitTestState = hitTestState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_hitTestState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_overState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_401_get_overState)
HXDLIN( 401)		return this->_hx___overState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_overState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_overState( ::openfl::display::DisplayObject overState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_405_set_overState)
HXLINE( 406)		bool _hx_tmp;
HXDLIN( 406)		if (::hx::IsNotNull( this->_hx___overState )) {
HXLINE( 406)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___overState );
            		}
            		else {
HXLINE( 406)			_hx_tmp = false;
            		}
HXDLIN( 406)		if (_hx_tmp) {
HXLINE( 408)			this->set___currentState(overState);
            		}
HXLINE( 411)		return (this->_hx___overState = overState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_overState,return )

 ::openfl::media::SoundTransform SimpleButton_obj::get_soundTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_415_get_soundTransform)
HXLINE( 416)		if (::hx::IsNull( this->_hx___soundTransform )) {
HXLINE( 418)			this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 421)		return  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,this->_hx___soundTransform->volume,this->_hx___soundTransform->pan);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform SimpleButton_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_425_set_soundTransform)
HXLINE( 426)		this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,value->volume,value->pan);
HXLINE( 427)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_soundTransform,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_upState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_432_get_upState)
HXDLIN( 432)		return this->_hx___upState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_upState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_upState( ::openfl::display::DisplayObject upState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_436_set_upState)
HXLINE( 437)		bool _hx_tmp;
HXDLIN( 437)		if (::hx::IsNotNull( this->_hx___upState )) {
HXLINE( 437)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___upState );
            		}
            		else {
HXLINE( 437)			_hx_tmp = false;
            		}
HXDLIN( 437)		if (_hx_tmp) {
HXLINE( 439)			this->set___currentState(upState);
            		}
HXLINE( 442)		return (this->_hx___upState = upState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_upState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set___currentState( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_446_set___currentState)
HXLINE( 447)		bool _hx_tmp;
HXDLIN( 447)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 447)			 ::openfl::display::DisplayObject _hx_tmp1 = this->_hx___currentState;
HXDLIN( 447)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->get_hitTestState() );
            		}
            		else {
HXLINE( 447)			_hx_tmp = false;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 449)			this->_hx___currentState->_hx___renderParent = null();
            		}
HXLINE( 452)		bool _hx_tmp1;
HXDLIN( 452)		if (::hx::IsNotNull( value )) {
HXLINE( 452)			_hx_tmp1 = ::hx::IsNotNull( value->parent );
            		}
            		else {
HXLINE( 452)			_hx_tmp1 = false;
            		}
HXDLIN( 452)		if (_hx_tmp1) {
HXLINE( 454)			value->parent->removeChild(value);
            		}
HXLINE( 465)		if (::hx::IsInstanceNotEq( value,this->_hx___currentState )) {
HXLINE( 486)			if (::hx::IsNotNull( value )) {
HXLINE( 488)				value->_hx___renderParent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 489)				if (!(value->_hx___renderDirty)) {
HXLINE( 489)					value->_hx___renderDirty = true;
HXDLIN( 489)					value->_hx___setParentRenderDirty();
            				}
            			}
HXLINE( 492)			if (!(this->_hx___renderDirty)) {
HXLINE( 492)				this->_hx___renderDirty = true;
HXDLIN( 492)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE( 495)		this->_hx___currentState = value;
HXLINE( 497)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set___currentState,return )

void SimpleButton_obj::_hx___this_onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_503___this_onMouseDown)
HXDLIN( 503)		if (this->enabled) {
HXLINE( 505)			this->set___currentState(this->get_downState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseDown,(void))

void SimpleButton_obj::_hx___this_onMouseOut( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_510___this_onMouseOut)
HXLINE( 511)		this->_hx___ignoreEvent = false;
HXLINE( 513)		 ::openfl::display::DisplayObject _hx_tmp = this->get_upState();
HXDLIN( 513)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_hx___currentState )) {
HXLINE( 515)			this->set___currentState(this->get_upState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseOut,(void))

void SimpleButton_obj::_hx___this_onMouseOver( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_520___this_onMouseOver)
HXLINE( 521)		if (event->buttonDown) {
HXLINE( 523)			this->_hx___ignoreEvent = true;
            		}
HXLINE( 526)		bool _hx_tmp;
HXDLIN( 526)		bool _hx_tmp1;
HXDLIN( 526)		bool _hx_tmp2;
HXDLIN( 526)		 ::openfl::display::DisplayObject _hx_tmp3 = this->get_overState();
HXDLIN( 526)		if (::hx::IsInstanceNotEq( _hx_tmp3,this->_hx___currentState )) {
HXLINE( 526)			_hx_tmp2 = ::hx::IsNotNull( this->get_overState() );
            		}
            		else {
HXLINE( 526)			_hx_tmp2 = false;
            		}
HXDLIN( 526)		if (_hx_tmp2) {
HXLINE( 526)			_hx_tmp1 = !(this->_hx___ignoreEvent);
            		}
            		else {
HXLINE( 526)			_hx_tmp1 = false;
            		}
HXDLIN( 526)		if (_hx_tmp1) {
HXLINE( 526)			_hx_tmp = this->enabled;
            		}
            		else {
HXLINE( 526)			_hx_tmp = false;
            		}
HXDLIN( 526)		if (_hx_tmp) {
HXLINE( 528)			this->set___currentState(this->get_overState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseOver,(void))

void SimpleButton_obj::_hx___this_onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_533___this_onMouseUp)
HXLINE( 534)		this->_hx___ignoreEvent = false;
HXLINE( 536)		bool _hx_tmp;
HXDLIN( 536)		if (this->enabled) {
HXLINE( 536)			_hx_tmp = ::hx::IsNotNull( this->get_overState() );
            		}
            		else {
HXLINE( 536)			_hx_tmp = false;
            		}
HXDLIN( 536)		if (_hx_tmp) {
HXLINE( 538)			this->set___currentState(this->get_overState());
            		}
            		else {
HXLINE( 542)			this->set___currentState(this->get_upState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseUp,(void))

 ::Dynamic SimpleButton_obj::_hx___constructor;


::hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState) {
	::hx::ObjectPtr< SimpleButton_obj > __this = new SimpleButton_obj();
	__this->__construct(upState,overState,downState,hitTestState);
	return __this;
}

::hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState) {
	SimpleButton_obj *__this = (SimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleButton_obj), true, "openfl.display.SimpleButton"));
	*(void **)__this = SimpleButton_obj::_hx_vtable;
	__this->__construct(upState,overState,downState,hitTestState);
	return __this;
}

SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(_hx___currentState,"__currentState");
	HX_MARK_MEMBER_NAME(_hx___downState,"__downState");
	HX_MARK_MEMBER_NAME(_hx___hitTestState,"__hitTestState");
	HX_MARK_MEMBER_NAME(_hx___ignoreEvent,"__ignoreEvent");
	HX_MARK_MEMBER_NAME(_hx___overState,"__overState");
	HX_MARK_MEMBER_NAME(_hx___previousStates,"__previousStates");
	HX_MARK_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(_hx___upState,"__upState");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(_hx___currentState,"__currentState");
	HX_VISIT_MEMBER_NAME(_hx___downState,"__downState");
	HX_VISIT_MEMBER_NAME(_hx___hitTestState,"__hitTestState");
	HX_VISIT_MEMBER_NAME(_hx___ignoreEvent,"__ignoreEvent");
	HX_VISIT_MEMBER_NAME(_hx___overState,"__overState");
	HX_VISIT_MEMBER_NAME(_hx___previousStates,"__previousStates");
	HX_VISIT_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(_hx___upState,"__upState");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SimpleButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upState() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_downState() ); }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_overState() ); }
		if (HX_FIELD_EQ(inName,"__upState") ) { return ::hx::Val( _hx___upState ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return ::hx::Val( trackAsMenu ); }
		if (HX_FIELD_EQ(inName,"__downState") ) { return ::hx::Val( _hx___downState ); }
		if (HX_FIELD_EQ(inName,"__overState") ) { return ::hx::Val( _hx___overState ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_upState") ) { return ::hx::Val( get_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return ::hx::Val( set_upState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hitTestState() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return ::hx::Val( useHandCursor ); }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { return ::hx::Val( _hx___ignoreEvent ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_downState") ) { return ::hx::Val( get_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return ::hx::Val( set_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_overState") ) { return ::hx::Val( get_overState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_overState") ) { return ::hx::Val( set_overState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTransform() ); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { return ::hx::Val( _hx___currentState ); }
		if (HX_FIELD_EQ(inName,"__hitTestState") ) { return ::hx::Val( _hx___hitTestState ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { return ::hx::Val( _hx___previousStates ); }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return ::hx::Val( _hx___soundTransform ); }
		if (HX_FIELD_EQ(inName,"get_hitTestState") ) { return ::hx::Val( get_hitTestState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hitTestState") ) { return ::hx::Val( set_hitTestState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseUp") ) { return ::hx::Val( _hx___this_onMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOut") ) { return ::hx::Val( _hx___this_onMouseOut_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return ::hx::Val( _hx___updateTransforms_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return ::hx::Val( get_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return ::hx::Val( set_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___currentState") ) { return ::hx::Val( set___currentState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseDown") ) { return ::hx::Val( _hx___this_onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOver") ) { return ::hx::Val( _hx___this_onMouseOver_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return ::hx::Val( _hx___setTransformDirty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { outValue = ( _hx___constructor ); return true; }
	}
	return false;
}

::hx::Val SimpleButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_upState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_downState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_overState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"__upState") ) { _hx___upState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__downState") ) { _hx___downState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__overState") ) { _hx___overState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hitTestState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { _hx___ignoreEvent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_soundTransform(inValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___currentState(inValue.Cast<  ::openfl::display::DisplayObject >()) );_hx___currentState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hitTestState") ) { _hx___hitTestState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { _hx___previousStates=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { _hx___constructor=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("hitTestState",8c,6b,9d,a1));
	outFields->push(HX_("overState",1d,04,cd,e7));
	outFields->push(HX_("soundTransform",9d,ee,de,22));
	outFields->push(HX_("trackAsMenu",9c,24,df,da));
	outFields->push(HX_("upState",b6,95,80,e0));
	outFields->push(HX_("useHandCursor",cc,da,ae,89));
	outFields->push(HX_("__currentState",38,de,d7,eb));
	outFields->push(HX_("__downState",2f,93,4d,c8));
	outFields->push(HX_("__hitTestState",ac,ee,5d,c2));
	outFields->push(HX_("__ignoreEvent",88,9e,cf,e1));
	outFields->push(HX_("__overState",fd,4c,f9,15));
	outFields->push(HX_("__previousStates",f9,17,d2,28));
	outFields->push(HX_("__soundTransform",bd,79,1e,57));
	outFields->push(HX_("__upState",96,e6,ce,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleButton_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,trackAsMenu),HX_("trackAsMenu",9c,24,df,da)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,useHandCursor),HX_("useHandCursor",cc,da,ae,89)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___currentState),HX_("__currentState",38,de,d7,eb)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___downState),HX_("__downState",2f,93,4d,c8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___hitTestState),HX_("__hitTestState",ac,ee,5d,c2)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,_hx___ignoreEvent),HX_("__ignoreEvent",88,9e,cf,e1)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___overState),HX_("__overState",fd,4c,f9,15)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SimpleButton_obj,_hx___previousStates),HX_("__previousStates",f9,17,d2,28)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(SimpleButton_obj,_hx___soundTransform),HX_("__soundTransform",bd,79,1e,57)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___upState),HX_("__upState",96,e6,ce,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SimpleButton_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SimpleButton_obj::_hx___constructor,HX_("__constructor",da,6d,3d,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SimpleButton_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("trackAsMenu",9c,24,df,da),
	HX_("useHandCursor",cc,da,ae,89),
	HX_("__currentState",38,de,d7,eb),
	HX_("__downState",2f,93,4d,c8),
	HX_("__hitTestState",ac,ee,5d,c2),
	HX_("__ignoreEvent",88,9e,cf,e1),
	HX_("__overState",fd,4c,f9,15),
	HX_("__previousStates",f9,17,d2,28),
	HX_("__soundTransform",bd,79,1e,57),
	HX_("__upState",96,e6,ce,61),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setTransformDirty",28,1b,24,99),
	HX_("__update",29,f1,34,2f),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("get_downState",26,1e,85,5b),
	HX_("set_downState",32,00,8b,a0),
	HX_("get_hitTestState",15,58,3c,a6),
	HX_("set_hitTestState",89,45,7e,fc),
	HX_("get_overState",f4,d7,30,a9),
	HX_("set_overState",00,ba,36,ee),
	HX_("get_soundTransform",66,cf,78,be),
	HX_("set_soundTransform",da,01,28,9b),
	HX_("get_upState",cd,f5,7a,66),
	HX_("set_upState",d9,fc,e7,70),
	HX_("set___currentState",75,f1,20,64),
	HX_("__this_onMouseDown",87,f0,3a,d9),
	HX_("__this_onMouseOut",09,b4,18,95),
	HX_("__this_onMouseOver",79,89,85,e0),
	HX_("__this_onMouseUp",40,9b,2a,90),
	::String(null()) };

static void SimpleButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::_hx___constructor,"__constructor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SimpleButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::_hx___constructor,"__constructor");
};

#endif

::hx::Class SimpleButton_obj::__mClass;

static ::String SimpleButton_obj_sStaticFields[] = {
	HX_("__constructor",da,6d,3d,e0),
	::String(null())
};

void SimpleButton_obj::__register()
{
	SimpleButton_obj _hx_dummy;
	SimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.SimpleButton",2e,f7,40,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleButton_obj::__SetStatic;
	__mClass->mMarkFunc = SimpleButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SimpleButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
