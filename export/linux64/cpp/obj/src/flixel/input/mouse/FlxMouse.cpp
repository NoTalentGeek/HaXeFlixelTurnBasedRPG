#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::openfl::_legacy::display::Sprite CursorContainer)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouse","new",0x1251bd04,"flixel.input.mouse.FlxMouse.new","flixel/input/mouse/FlxMouse.hx",34,0xe4e80b89)
HX_STACK_THIS(this)
HX_STACK_ARG(CursorContainer,"CursorContainer")
{
	HX_STACK_LINE(126)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(125)
	this->_lastY = (int)0;
	HX_STACK_LINE(124)
	this->_lastX = (int)0;
	HX_STACK_LINE(119)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(118)
	this->_wheelUsed = false;
	HX_STACK_LINE(116)
	this->_cursor = null();
	HX_STACK_LINE(55)
	this->useSystemCursor = false;
	HX_STACK_LINE(51)
	this->visible = true;
	HX_STACK_LINE(40)
	this->wheel = (int)0;
	HX_STACK_LINE(357)
	super::__construct();
	HX_STACK_LINE(358)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(359)
	::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	tmp->set_mouseChildren(false);
	HX_STACK_LINE(360)
	::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	tmp1->set_mouseEnabled(false);
	HX_STACK_LINE(362)
	::flixel::input::mouse::FlxMouseButton tmp2 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	this->_leftButton = tmp2;
	HX_STACK_LINE(364)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(364)
	this->_stage = tmp4;
	HX_STACK_LINE(365)
	::openfl::_legacy::display::Stage tmp5 = this->_stage;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(365)
	::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(365)
	::flixel::input::mouse::FlxMouseButton tmp7 = this->_leftButton;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(365)
	Dynamic tmp8 = tmp7->onDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(365)
	tmp5->addEventListener(tmp6,tmp8,null(),null(),null());
	HX_STACK_LINE(366)
	::openfl::_legacy::display::Stage tmp9 = this->_stage;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(366)
	::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(366)
	::flixel::input::mouse::FlxMouseButton tmp11 = this->_leftButton;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(366)
	Dynamic tmp12 = tmp11->onUp_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(366)
	tmp9->addEventListener(tmp10,tmp12,null(),null(),null());
	HX_STACK_LINE(369)
	::flixel::input::mouse::FlxMouseButton tmp13 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(369)
	this->_middleButton = tmp13;
	HX_STACK_LINE(370)
	::flixel::input::mouse::FlxMouseButton tmp14 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(370)
	this->_rightButton = tmp14;
	HX_STACK_LINE(372)
	::openfl::_legacy::display::Stage tmp15 = this->_stage;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(372)
	::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(372)
	::flixel::input::mouse::FlxMouseButton tmp17 = this->_middleButton;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(372)
	Dynamic tmp18 = tmp17->onDown_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(372)
	tmp15->addEventListener(tmp16,tmp18,null(),null(),null());
	HX_STACK_LINE(373)
	::openfl::_legacy::display::Stage tmp19 = this->_stage;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(373)
	::String tmp20 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(373)
	::flixel::input::mouse::FlxMouseButton tmp21 = this->_middleButton;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(373)
	Dynamic tmp22 = tmp21->onUp_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(373)
	tmp19->addEventListener(tmp20,tmp22,null(),null(),null());
	HX_STACK_LINE(374)
	::openfl::_legacy::display::Stage tmp23 = this->_stage;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(374)
	::String tmp24 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(374)
	::flixel::input::mouse::FlxMouseButton tmp25 = this->_rightButton;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(374)
	Dynamic tmp26 = tmp25->onDown_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(374)
	tmp23->addEventListener(tmp24,tmp26,null(),null(),null());
	HX_STACK_LINE(375)
	::openfl::_legacy::display::Stage tmp27 = this->_stage;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(375)
	::String tmp28 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(375)
	::flixel::input::mouse::FlxMouseButton tmp29 = this->_rightButton;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(375)
	Dynamic tmp30 = tmp29->onUp_dyn();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(375)
	tmp27->addEventListener(tmp28,tmp30,null(),null(),null());
	HX_STACK_LINE(377)
	::openfl::_legacy::display::Stage tmp31 = this->_stage;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(377)
	::String tmp32 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(377)
	Dynamic tmp33 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(377)
	tmp31->addEventListener(tmp32,tmp33,null(),null(),null());
	HX_STACK_LINE(380)
	::openfl::_legacy::display::Stage tmp34 = this->_stage;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(380)
	::String tmp35 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(380)
	Dynamic tmp36 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(380)
	tmp34->addEventListener(tmp35,tmp36,null(),null(),null());
	HX_STACK_LINE(382)
	{
		HX_STACK_LINE(382)
		::flixel::_system::frontEnds::SignalFrontEnd tmp37 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(382)
		Dynamic tmp38 = this->onGameStart_dyn();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(382)
		tmp37->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp38);
	}
	HX_STACK_LINE(383)
	::openfl::_legacy::ui::Mouse_obj::hide();
}
;
	return null();
}

//FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::openfl::_legacy::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(CursorContainer);
	return _result_;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxMouse_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxMouse_obj >(this); }
FlxMouse_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxMouse_obj >(this); }
Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","load",0xf3e8bd02,"flixel.input.mouse.FlxMouse.load","flixel/input/mouse/FlxMouse.hx",153,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(XOffset,"XOffset")
	HX_STACK_ARG(YOffset,"YOffset")
{
		HX_STACK_LINE(155)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(157)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			::openfl::_legacy::display::Bitmap tmp3 = this->_cursor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp2,tmp3);
		}
		HX_STACK_LINE(161)
		bool tmp2 = (Graphic == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		if ((tmp2)){
			HX_STACK_LINE(163)
			::flixel::input::mouse::_FlxMouse::GraphicCursor tmp3 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			Graphic = tmp3;
		}
		HX_STACK_LINE(166)
		Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		if ((tmp4)){
			HX_STACK_LINE(168)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			::openfl::_legacy::display::Bitmap tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			this->_cursor = tmp6;
		}
		else{
			HX_STACK_LINE(170)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			if ((tmp6)){
				HX_STACK_LINE(172)
				::openfl::_legacy::display::Bitmap tmp7 = ::openfl::_legacy::display::Bitmap_obj::__new(((::openfl::_legacy::display::BitmapData)(Graphic)),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				this->_cursor = tmp7;
			}
			else{
				HX_STACK_LINE(174)
				Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(174)
				if ((tmp8)){
					HX_STACK_LINE(176)
					::openfl::_legacy::display::BitmapData tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::String id = Graphic;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(176)
						::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(176)
						bool tmp11 = ::openfl::_legacy::Assets_obj::exists(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp12,false);
						}
						else{
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::flixel::_system::frontEnds::LogFrontEnd tmp12 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(176)
								::String tmp13 = (HX_HCSTRING("Could not find a BitmapData asset with ID '","\x5f","\x79","\xa9","\x21") + id);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::String tmp14 = (tmp13 + HX_HCSTRING("'.","\x27","\x22","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::flixel::_system::debug::log::LogStyle tmp15 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								tmp12->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp14,tmp15,true);
							}
							HX_STACK_LINE(176)
							tmp9 = null();
						}
					}
					HX_STACK_LINE(176)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this->_cursor = tmp10;
				}
				else{
					HX_STACK_LINE(180)
					::flixel::input::mouse::_FlxMouse::GraphicCursor tmp9 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					this->_cursor = tmp10;
				}
			}
		}
		HX_STACK_LINE(183)
		::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		int tmp6 = XOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		tmp5->set_x(tmp6);
		HX_STACK_LINE(184)
		::openfl::_legacy::display::Bitmap tmp7 = this->_cursor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		int tmp8 = YOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		tmp7->set_y(tmp8);
		HX_STACK_LINE(185)
		::openfl::_legacy::display::Bitmap tmp9 = this->_cursor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(185)
		Float tmp10 = Scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(185)
		tmp9->set_scaleX(tmp10);
		HX_STACK_LINE(186)
		::openfl::_legacy::display::Bitmap tmp11 = this->_cursor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		Float tmp12 = Scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		tmp11->set_scaleY(tmp12);
		HX_STACK_LINE(215)
		::openfl::_legacy::display::Sprite tmp13 = this->cursorContainer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		::openfl::_legacy::display::Bitmap tmp14 = this->_cursor;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(215)
		tmp13->addChild(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","unload",0x5a7132db,"flixel.input.mouse.FlxMouse.unload","flixel/input/mouse/FlxMouse.hx",224,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp1)){
			HX_STACK_LINE(227)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(229)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(233)
				::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(233)
				::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(233)
				::openfl::_legacy::display::Bitmap tmp6 = ::flixel::util::FlxDestroyUtil_obj::removeChild(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				this->_cursor = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","destroy",0x77a13b9e,"flixel.input.mouse.FlxMouse.destroy","flixel/input/mouse/FlxMouse.hx",303,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		::openfl::_legacy::display::Stage tmp = this->_stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(306)
			::openfl::_legacy::display::Stage tmp2 = this->_stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(306)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(306)
			::flixel::input::mouse::FlxMouseButton tmp4 = this->_leftButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			Dynamic tmp5 = tmp4->onDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			tmp2->removeEventListener(tmp3,tmp5,null());
			HX_STACK_LINE(307)
			::openfl::_legacy::display::Stage tmp6 = this->_stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			::flixel::input::mouse::FlxMouseButton tmp8 = this->_leftButton;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			Dynamic tmp9 = tmp8->onUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(307)
			tmp6->removeEventListener(tmp7,tmp9,null());
			HX_STACK_LINE(310)
			::openfl::_legacy::display::Stage tmp10 = this->_stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(310)
			::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(310)
			::flixel::input::mouse::FlxMouseButton tmp12 = this->_middleButton;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(310)
			Dynamic tmp13 = tmp12->onDown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(310)
			tmp10->removeEventListener(tmp11,tmp13,null());
			HX_STACK_LINE(311)
			::openfl::_legacy::display::Stage tmp14 = this->_stage;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(311)
			::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(311)
			::flixel::input::mouse::FlxMouseButton tmp16 = this->_middleButton;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(311)
			Dynamic tmp17 = tmp16->onUp_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(311)
			tmp14->removeEventListener(tmp15,tmp17,null());
			HX_STACK_LINE(312)
			::openfl::_legacy::display::Stage tmp18 = this->_stage;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(312)
			::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(312)
			::flixel::input::mouse::FlxMouseButton tmp20 = this->_rightButton;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(312)
			Dynamic tmp21 = tmp20->onDown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(312)
			tmp18->removeEventListener(tmp19,tmp21,null());
			HX_STACK_LINE(313)
			::openfl::_legacy::display::Stage tmp22 = this->_stage;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(313)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(313)
			::flixel::input::mouse::FlxMouseButton tmp24 = this->_rightButton;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(313)
			Dynamic tmp25 = tmp24->onUp_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(313)
			tmp22->removeEventListener(tmp23,tmp25,null());
			HX_STACK_LINE(315)
			::openfl::_legacy::display::Stage tmp26 = this->_stage;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(315)
			::String tmp27 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(315)
			Dynamic tmp28 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(315)
			tmp26->removeEventListener(tmp27,tmp28,null());
			HX_STACK_LINE(318)
			::openfl::_legacy::display::Stage tmp29 = this->_stage;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(318)
			::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(318)
			Dynamic tmp31 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(318)
			tmp29->removeEventListener(tmp30,tmp31,null());
		}
		HX_STACK_LINE(321)
		this->cursorContainer = null();
		HX_STACK_LINE(322)
		this->_cursor = null();
		HX_STACK_LINE(328)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_leftButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		::flixel::input::mouse::FlxMouseButton tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		this->_leftButton = tmp3;
		HX_STACK_LINE(330)
		::flixel::input::mouse::FlxMouseButton tmp4 = this->_middleButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		::flixel::input::mouse::FlxMouseButton tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		this->_middleButton = tmp5;
		HX_STACK_LINE(331)
		::flixel::input::mouse::FlxMouseButton tmp6 = this->_rightButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		::flixel::input::mouse::FlxMouseButton tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(331)
		this->_rightButton = tmp7;
		HX_STACK_LINE(334)
		::openfl::_legacy::display::BitmapData tmp8 = this->_cursorBitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(334)
		::openfl::_legacy::display::BitmapData tmp9 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		this->_cursorBitmapData = tmp9;
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(335)
			Dynamic tmp11 = this->onGameStart_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(335)
			tmp10->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,destroy,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","reset",0xe595a773,"flixel.input.mouse.FlxMouse.reset","flixel/input/mouse/FlxMouse.hx",342,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(343)
		::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		tmp->reset();
		HX_STACK_LINE(346)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		tmp1->reset();
		HX_STACK_LINE(347)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_rightButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		tmp2->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","update",0x7bea17e5,"flixel.input.mouse.FlxMouse.update","flixel/input/mouse/FlxMouse.hx",391,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(393)
			Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(393)
			Float newX = tmp1;		HX_STACK_VAR(newX,"newX");
			HX_STACK_LINE(393)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(393)
			Float tmp3 = tmp2->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(393)
			Float newY = tmp3;		HX_STACK_VAR(newY,"newY");
			HX_STACK_LINE(393)
			Float tmp4 = newX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			::flixel::_system::scaleModes::BaseScaleMode tmp5 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			Float tmp6 = tmp5->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(393)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(393)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(393)
			this->_globalScreenX = tmp8;
			HX_STACK_LINE(393)
			Float tmp9 = newY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(393)
			::flixel::_system::scaleModes::BaseScaleMode tmp10 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(393)
			Float tmp11 = tmp10->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(393)
			Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			this->_globalScreenY = tmp13;
			HX_STACK_LINE(393)
			this->updatePositions();
		}
		HX_STACK_LINE(396)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		if ((tmp)){
			HX_STACK_LINE(398)
			::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(398)
			Float tmp3 = tmp2->get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			tmp1->set_x(tmp3);
			HX_STACK_LINE(399)
			::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			Float tmp6 = tmp5->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			tmp4->set_y(tmp6);
		}
		HX_STACK_LINE(404)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		tmp1->update();
		HX_STACK_LINE(406)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_middleButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		tmp2->update();
		HX_STACK_LINE(407)
		::flixel::input::mouse::FlxMouseButton tmp3 = this->_rightButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		tmp3->update();
		HX_STACK_LINE(411)
		bool tmp4 = this->_wheelUsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		if ((tmp5)){
			HX_STACK_LINE(413)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(415)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocus",0xede20cdd,"flixel.input.mouse.FlxMouse.onFocus","flixel/input/mouse/FlxMouse.hx",422,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		this->reset();
		HX_STACK_LINE(426)
		bool tmp = this->useSystemCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		this->set_useSystemCursor(tmp);
		HX_STACK_LINE(428)
		bool tmp1 = this->_visibleWhenFocusLost;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		this->set_visible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocusLost",0xc7f71561,"flixel.input.mouse.FlxMouse.onFocusLost","flixel/input/mouse/FlxMouse.hx",436,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		this->_visibleWhenFocusLost = tmp;
		HX_STACK_LINE(440)
		bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(440)
		if ((tmp1)){
			HX_STACK_LINE(442)
			this->set_visible(false);
		}
		HX_STACK_LINE(445)
		::openfl::_legacy::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onGameStart",0x61da7695,"flixel.input.mouse.FlxMouse.onGameStart","flixel/input/mouse/FlxMouse.hx",451,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		this->set_visible(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseWheel",0xdc642911,"flixel.input.mouse.FlxMouse.onMouseWheel","flixel/input/mouse/FlxMouse.hx",461,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(463)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(463)
		bool tmp1 = tmp->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		if ((tmp1)){
			HX_STACK_LINE(463)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			::flixel::FlxGame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			tmp2 = tmp4->debugger->__Field(HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(463)
			tmp2 = false;
		}
		HX_STACK_LINE(463)
		if ((tmp2)){
			HX_STACK_LINE(466)
			return null();
		}
		HX_STACK_LINE(470)
		this->_wheelUsed = true;
		HX_STACK_LINE(471)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseLeave( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseLeave",0x84fd296d,"flixel.input.mouse.FlxMouse.onMouseLeave","flixel/input/mouse/FlxMouse.hx",480,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(481)
		::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		tmp->onUp(null());
		HX_STACK_LINE(482)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		tmp1->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressed",0x4652635d,"flixel.input.mouse.FlxMouse.get_pressed","flixel/input/mouse/FlxMouse.hx",486,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(486)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	{
		HX_STACK_LINE(486)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(486)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(486)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(486)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(486)
		if ((tmp3)){
			HX_STACK_LINE(486)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(486)
			tmp = true;
		}
	}
	HX_STACK_LINE(486)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressed",0x70091811,"flixel.input.mouse.FlxMouse.get_justPressed","flixel/input/mouse/FlxMouse.hx",487,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(487)
	::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(487)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(487)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleased",0x9ec2046e,"flixel.input.mouse.FlxMouse.get_justReleased","flixel/input/mouse/FlxMouse.hx",488,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedRight",0x90e8c73f,"flixel.input.mouse.FlxMouse.get_pressedRight","flixel/input/mouse/FlxMouse.hx",491,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(491)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(491)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_rightButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(491)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(491)
		if ((tmp3)){
			HX_STACK_LINE(491)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(491)
			tmp = true;
		}
	}
	HX_STACK_LINE(491)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedRight",0xa8a2860b,"flixel.input.mouse.FlxMouse.get_justPressedRight","flixel/input/mouse/FlxMouse.hx",492,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(492)
	::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(492)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(492)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(492)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedRight",0x8742a88e,"flixel.input.mouse.FlxMouse.get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",493,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(493)
	::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(493)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(493)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(493)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedMiddle",0x38fe0e92,"flixel.input.mouse.FlxMouse.get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",495,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(495)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(495)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(495)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(495)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		if ((tmp3)){
			HX_STACK_LINE(495)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(495)
			tmp = true;
		}
	}
	HX_STACK_LINE(495)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedMiddle",0xe3cb4246,"flixel.input.mouse.FlxMouse.get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",496,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(496)
	::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedMiddle",0xd1495263,"flixel.input.mouse.FlxMouse.get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",497,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(497)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showSystemCursor",0xf4551c9e,"flixel.input.mouse.FlxMouse.showSystemCursor","flixel/input/mouse/FlxMouse.hx",504,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(508)
		::openfl::_legacy::ui::Mouse_obj::show();
		HX_STACK_LINE(509)
		::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		tmp->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideSystemCursor",0xb5438fe3,"flixel.input.mouse.FlxMouse.hideSystemCursor","flixel/input/mouse/FlxMouse.hx",517,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(525)
		::openfl::_legacy::ui::Mouse_obj::hide();
		HX_STACK_LINE(527)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(529)
			::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(529)
			tmp1->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_useSystemCursor",0x074e74d3,"flixel.input.mouse.FlxMouse.set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",535,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(536)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	if ((tmp)){
		HX_STACK_LINE(538)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(542)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(544)
	bool tmp1 = this->useSystemCursor = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_visible",0xb9fd1039,"flixel.input.mouse.FlxMouse.set_visible","flixel/input/mouse/FlxMouse.hx",548,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(549)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	if ((tmp)){
		HX_STACK_LINE(551)
		bool tmp1 = this->useSystemCursor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		if ((tmp1)){
			HX_STACK_LINE(553)
			::openfl::_legacy::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(557)
			::openfl::_legacy::display::Bitmap tmp2 = this->_cursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(557)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(557)
			if ((tmp3)){
				HX_STACK_LINE(559)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(562)
			::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			tmp4->set_visible(true);
			HX_STACK_LINE(563)
			::openfl::_legacy::ui::Mouse_obj::hide();
		}
	}
	else{
		HX_STACK_LINE(576)
		::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		tmp1->set_visible(false);
		HX_STACK_LINE(577)
		::openfl::_legacy::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(587)
	bool tmp1 = this->visible = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

::flixel::_system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","record",0xf2d1086d,"flixel.input.mouse.FlxMouse.record","flixel/input/mouse/FlxMouse.hx",593,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	int tmp = this->_lastX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	int tmp1 = this->_globalScreenX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(594)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(594)
	if ((tmp3)){
		HX_STACK_LINE(594)
		int tmp5 = this->_lastY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(594)
		int tmp8 = this->_globalScreenY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(594)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(594)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(594)
		tmp4 = (tmp7 == tmp10);
	}
	else{
		HX_STACK_LINE(594)
		tmp4 = false;
	}
	HX_STACK_LINE(594)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(594)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(594)
	if ((tmp5)){
		HX_STACK_LINE(595)
		::flixel::input::mouse::FlxMouseButton tmp7 = this->_leftButton;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(595)
		::flixel::input::mouse::FlxMouseButton tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(595)
		::flixel::input::mouse::FlxMouseButton tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(595)
		::flixel::input::mouse::FlxMouseButton _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(595)
		bool tmp10 = (_this->current == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(595)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(595)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(595)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(595)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(595)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(595)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(595)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(595)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(595)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(595)
		if ((tmp19)){
			HX_STACK_LINE(595)
			tmp6 = (_this->current == (int)-1);
		}
		else{
			HX_STACK_LINE(595)
			tmp6 = true;
		}
	}
	else{
		HX_STACK_LINE(594)
		tmp6 = false;
	}
	HX_STACK_LINE(594)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(594)
	if ((tmp6)){
		HX_STACK_LINE(595)
		int tmp8 = this->_lastWheel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(595)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(595)
		int tmp10 = this->wheel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(595)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(595)
		tmp7 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(594)
		tmp7 = false;
	}
	HX_STACK_LINE(594)
	if ((tmp7)){
		HX_STACK_LINE(597)
		return null();
	}
	HX_STACK_LINE(599)
	int tmp8 = this->_globalScreenX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(599)
	this->_lastX = tmp8;
	HX_STACK_LINE(600)
	int tmp9 = this->_globalScreenY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(600)
	this->_lastY = tmp9;
	HX_STACK_LINE(601)
	int tmp10 = this->wheel;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(601)
	this->_lastWheel = tmp10;
	HX_STACK_LINE(602)
	int tmp11 = this->_lastX;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(602)
	int tmp12 = this->_lastY;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(602)
	::flixel::input::mouse::FlxMouseButton tmp13 = this->_leftButton;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(602)
	int tmp14 = tmp13->current;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(602)
	int tmp15 = this->_lastWheel;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(602)
	::flixel::_system::replay::MouseRecord tmp16 = ::flixel::_system::replay::MouseRecord_obj::__new(tmp11,tmp12,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(602)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

Void FlxMouse_obj::playback( ::flixel::_system::replay::MouseRecord Record){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","playback",0xaadcd2f7,"flixel.input.mouse.FlxMouse.playback","flixel/input/mouse/FlxMouse.hx",606,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(607)
		::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		tmp->current = Record->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );
		HX_STACK_LINE(608)
		this->wheel = Record->__Field(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"), hx::paccDynamic );
		HX_STACK_LINE(609)
		this->_globalScreenX = Record->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(610)
		this->_globalScreenY = Record->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(611)
		this->updatePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { if (inCallProp == hx::paccAlways) return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_pressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { if (inCallProp == hx::paccAlways) return get_justPressedRight(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { if (inCallProp == hx::paccAlways) return get_justReleasedRight(); }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp == hx::paccAlways) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"));
	outFields->push(HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("pressedRight","\xda","\xdd","\x81","\x58"));
	outFields->push(HX_HCSTRING("justPressedRight","\x26","\x86","\x9a","\xc0"));
	outFields->push(HX_HCSTRING("justReleasedRight","\x13","\xc0","\x4a","\x68"));
	outFields->push(HX_HCSTRING("pressedMiddle","\x97","\xbf","\x58","\x17"));
	outFields->push(HX_HCSTRING("justPressedMiddle","\xcb","\x59","\xd3","\xc4"));
	outFields->push(HX_HCSTRING("justReleasedMiddle","\x3e","\xcf","\x55","\xd7"));
	outFields->push(HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"));
	outFields->push(HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"));
	outFields->push(HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"));
	outFields->push(HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"));
	outFields->push(HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"));
	outFields->push(HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"));
	outFields->push(HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"));
	outFields->push(HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"));
	outFields->push(HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouse_obj,wheel),HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxMouse_obj,cursorContainer),HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,useSystemCursor),HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_leftButton),HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_middleButton),HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_rightButton),HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxMouse_obj,_cursor),HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxMouse_obj,_cursorBitmapData),HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_wheelUsed),HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_visibleWhenFocusLost),HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastX),HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastY),HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastWheel),HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(int)offsetof(FlxMouse_obj,_stage),HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"),
	HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"),
	HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"),
	HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"),
	HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"),
	HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"),
	HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"),
	HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"),
	HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"),
	HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onGameStart","\xf1","\x45","\x69","\xdb"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMouseLeave","\x91","\xca","\x63","\x68"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_pressedRight","\x63","\xca","\x20","\x5d"),
	HX_HCSTRING("get_justPressedRight","\x2f","\xeb","\x04","\xdf"),
	HX_HCSTRING("get_justReleasedRight","\xea","\xc2","\xf8","\xe6"),
	HX_HCSTRING("get_pressedMiddle","\xee","\xca","\xc8","\x1d"),
	HX_HCSTRING("get_justPressedMiddle","\xa2","\x5c","\x81","\x43"),
	HX_HCSTRING("get_justReleasedMiddle","\x87","\x48","\xea","\x30"),
	HX_HCSTRING("showSystemCursor","\xc2","\x1f","\x8d","\xc0"),
	HX_HCSTRING("hideSystemCursor","\x07","\x93","\x7b","\x81"),
	HX_HCSTRING("set_useSystemCursor","\x2f","\x00","\x86","\xc1"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouse","\x12","\x2b","\x6e","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
