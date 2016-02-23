#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicCloseButton
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void Window_obj::__construct(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.Window","new",0x5aefd38a,"flixel.system.debug.Window.new","flixel/system/debug/Window.hx",98,0xb8dfd4e5)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(__o_Closable,"Closable")
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool Resizable = __o_Resizable.Default(true);
bool Closable = __o_Closable.Default(false);
{
	HX_STACK_LINE(99)
	super::__construct();
	HX_STACK_LINE(101)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new((int)50,(int)30);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	this->minSize = tmp;
	HX_STACK_LINE(103)
	Float tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	this->_width = tmp3;
	HX_STACK_LINE(104)
	Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	this->_height = tmp6;
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle tmp7 = Bounds;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	this->updateBounds(tmp7);
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(106)
	this->_drag = tmp8;
	HX_STACK_LINE(107)
	this->_resizable = Resizable;
	HX_STACK_LINE(109)
	::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)2,true,(int)-16777216,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(109)
	this->_shadow = tmp10;
	HX_STACK_LINE(110)
	::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)1,true,(int)-580952225,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(110)
	::openfl::_legacy::display::Bitmap tmp12 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(110)
	this->_background = tmp12;
	HX_STACK_LINE(111)
	::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(111)
	::openfl::_legacy::display::Bitmap tmp14 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(111)
	this->_header = tmp14;
	HX_STACK_LINE(112)
	::openfl::_legacy::display::Bitmap tmp15 = this->_background;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(112)
	::openfl::_legacy::display::Bitmap tmp16 = this->_header;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(112)
	Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(112)
	tmp15->set_y(tmp17);
	HX_STACK_LINE(114)
	::openfl::_legacy::text::TextField tmp18 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(114)
	this->_title = tmp18;
	HX_STACK_LINE(115)
	::openfl::_legacy::text::TextField tmp19 = this->_title;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(115)
	tmp19->set_x((int)2);
	HX_STACK_LINE(116)
	::openfl::_legacy::text::TextField tmp20 = this->_title;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(116)
	tmp20->set_y((int)-1);
	HX_STACK_LINE(117)
	::openfl::_legacy::text::TextField tmp21 = this->_title;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(117)
	tmp21->set_alpha(((Float)0.8));
	HX_STACK_LINE(118)
	::openfl::_legacy::text::TextField tmp22 = this->_title;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(118)
	tmp22->set_height((int)20);
	HX_STACK_LINE(119)
	::openfl::_legacy::text::TextField tmp23 = this->_title;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(119)
	tmp23->set_selectable(false);
	HX_STACK_LINE(120)
	::openfl::_legacy::text::TextField tmp24 = this->_title;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(120)
	tmp24->set_multiline(false);
	HX_STACK_LINE(121)
	::openfl::_legacy::text::TextField tmp25 = this->_title;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(121)
	tmp25->set_embedFonts(true);
	HX_STACK_LINE(122)
	::openfl::_legacy::text::TextField tmp26 = this->_title;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(122)
	::String tmp27 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(122)
	::openfl::_legacy::text::TextFormat tmp28 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp27,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(122)
	tmp26->set_defaultTextFormat(tmp28);
	HX_STACK_LINE(123)
	::openfl::_legacy::text::TextField tmp29 = this->_title;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(123)
	::String tmp30 = Title;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(123)
	tmp29->set_text(tmp30);
	HX_STACK_LINE(125)
	::openfl::_legacy::display::Bitmap tmp31 = this->_shadow;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(125)
	this->addChild(tmp31);
	HX_STACK_LINE(126)
	::openfl::_legacy::display::Bitmap tmp32 = this->_background;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(126)
	this->addChild(tmp32);
	HX_STACK_LINE(127)
	::openfl::_legacy::display::Bitmap tmp33 = this->_header;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(127)
	this->addChild(tmp33);
	HX_STACK_LINE(128)
	::openfl::_legacy::text::TextField tmp34 = this->_title;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(128)
	this->addChild(tmp34);
	HX_STACK_LINE(130)
	bool tmp35 = (Icon != null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(130)
	if ((tmp35)){
		HX_STACK_LINE(132)
		::openfl::_legacy::display::BitmapData tmp36 = Icon;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(132)
		::flixel::_system::debug::DebuggerUtil_obj::fixSize(tmp36);
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Bitmap tmp37 = ::openfl::_legacy::display::Bitmap_obj::__new(Icon,null(),null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Bitmap _icon = tmp37;		HX_STACK_VAR(_icon,"_icon");
		HX_STACK_LINE(134)
		_icon->set_x((int)5);
		HX_STACK_LINE(135)
		_icon->set_y((int)2);
		HX_STACK_LINE(136)
		_icon->set_alpha(((Float)0.8));
		HX_STACK_LINE(137)
		::openfl::_legacy::text::TextField tmp38 = this->_title;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(137)
		Float tmp39 = _icon->get_x();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(137)
		Float tmp40 = _icon->get_width();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(137)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(137)
		Float tmp42 = (tmp41 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(137)
		tmp38->set_x(tmp42);
		HX_STACK_LINE(138)
		::openfl::_legacy::display::Bitmap tmp43 = _icon;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(138)
		this->addChild(tmp43);
	}
	HX_STACK_LINE(141)
	bool tmp36 = this->_resizable;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(141)
	if ((tmp36)){
		HX_STACK_LINE(143)
		::flixel::_system::debug::_Window::GraphicWindowHandle tmp37 = ::flixel::_system::debug::_Window::GraphicWindowHandle_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(143)
		::openfl::_legacy::display::BitmapData tmp38 = ::flixel::_system::debug::DebuggerUtil_obj::fixSize(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(143)
		::openfl::_legacy::display::Bitmap tmp39 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp38,null(),null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(143)
		this->_handle = tmp39;
		HX_STACK_LINE(144)
		::openfl::_legacy::display::Bitmap tmp40 = this->_handle;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(144)
		this->addChild(tmp40);
	}
	HX_STACK_LINE(147)
	bool tmp37 = Closable;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(147)
	if ((tmp37)){
		HX_STACK_LINE(149)
		::flixel::_system::debug::_Window::GraphicCloseButton tmp38 = ::flixel::_system::debug::_Window::GraphicCloseButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(149)
		Dynamic tmp39 = this->close_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(149)
		::flixel::_system::ui::FlxSystemButton tmp40 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp38,tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(149)
		this->_closeButton = tmp40;
		HX_STACK_LINE(150)
		::flixel::_system::ui::FlxSystemButton tmp41 = this->_closeButton;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(150)
		tmp41->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.8));
		HX_STACK_LINE(151)
		::flixel::_system::ui::FlxSystemButton tmp42 = this->_closeButton;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(151)
		this->addChild(tmp42);
	}
	else{
		HX_STACK_LINE(155)
		int tmp38 = ::flixel::_system::debug::Window_obj::WINDOW_AMOUNT;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(155)
		this->_id = tmp38;
		HX_STACK_LINE(156)
		this->loadSaveData();
		HX_STACK_LINE(157)
		(::flixel::_system::debug::Window_obj::WINDOW_AMOUNT)++;
	}
	HX_STACK_LINE(160)
	int tmp38 = this->_width;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(160)
	bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(160)
	bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(160)
	bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(160)
	if ((tmp40)){
		HX_STACK_LINE(160)
		int tmp42 = this->_height;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(160)
		int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(160)
		tmp41 = (tmp43 != (int)0);
	}
	else{
		HX_STACK_LINE(160)
		tmp41 = true;
	}
	HX_STACK_LINE(160)
	if ((tmp41)){
		HX_STACK_LINE(162)
		this->updateSize();
	}
	HX_STACK_LINE(164)
	this->bound();
	HX_STACK_LINE(166)
	::String tmp42 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(166)
	Dynamic tmp43 = this->init_dyn();		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(166)
	this->addEventListener(tmp42,tmp43,null(),null(),null());
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(Title,Icon,__o_Width,__o_Height,__o_Resizable,Bounds,__o_Closable);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","destroy",0x5fb40d24,"flixel.system.debug.Window.destroy","flixel/system/debug/Window.hx",173,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		this->minSize = null();
		HX_STACK_LINE(175)
		this->maxSize = null();
		HX_STACK_LINE(176)
		this->_bounds = null();
		HX_STACK_LINE(177)
		::openfl::_legacy::display::Bitmap tmp = this->_shadow;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(179)
			::openfl::_legacy::display::Bitmap tmp2 = this->_shadow;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(181)
		this->_shadow = null();
		HX_STACK_LINE(182)
		::openfl::_legacy::display::Bitmap tmp2 = this->_background;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		if ((tmp3)){
			HX_STACK_LINE(184)
			::openfl::_legacy::display::Bitmap tmp4 = this->_background;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			this->removeChild(tmp4);
		}
		HX_STACK_LINE(186)
		this->_background = null();
		HX_STACK_LINE(187)
		::openfl::_legacy::display::Bitmap tmp4 = this->_header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		if ((tmp5)){
			HX_STACK_LINE(189)
			::openfl::_legacy::display::Bitmap tmp6 = this->_header;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			this->removeChild(tmp6);
		}
		HX_STACK_LINE(191)
		this->_header = null();
		HX_STACK_LINE(192)
		::openfl::_legacy::text::TextField tmp6 = this->_title;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		if ((tmp7)){
			HX_STACK_LINE(194)
			::openfl::_legacy::text::TextField tmp8 = this->_title;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			this->removeChild(tmp8);
		}
		HX_STACK_LINE(196)
		this->_title = null();
		HX_STACK_LINE(197)
		::openfl::_legacy::display::Bitmap tmp8 = this->_handle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(197)
		if ((tmp9)){
			HX_STACK_LINE(199)
			::openfl::_legacy::display::Bitmap tmp10 = this->_handle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(199)
			this->removeChild(tmp10);
		}
		HX_STACK_LINE(201)
		this->_handle = null();
		HX_STACK_LINE(202)
		this->_drag = null();
		HX_STACK_LINE(203)
		::flixel::_system::ui::FlxSystemButton tmp10 = this->_closeButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(203)
		::flixel::_system::ui::FlxSystemButton tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(203)
		this->_closeButton = tmp11;
		HX_STACK_LINE(205)
		::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(205)
		::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(205)
		::openfl::_legacy::display::Stage stage = tmp13;		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(206)
		::String tmp14 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(206)
		bool tmp15 = stage->hasEventListener(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(206)
		if ((tmp15)){
			HX_STACK_LINE(208)
			::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(208)
			Dynamic tmp17 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(208)
			stage->removeEventListener(tmp16,tmp17,null());
		}
		HX_STACK_LINE(210)
		::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		bool tmp17 = this->hasEventListener(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(210)
		if ((tmp17)){
			HX_STACK_LINE(212)
			::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(212)
			Dynamic tmp19 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(212)
			this->removeEventListener(tmp18,tmp19,null());
		}
		HX_STACK_LINE(214)
		::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(214)
		bool tmp19 = stage->hasEventListener(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(214)
		if ((tmp19)){
			HX_STACK_LINE(216)
			::String tmp20 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(216)
			Dynamic tmp21 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(216)
			stage->removeEventListener(tmp20,tmp21,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

Void Window_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.Window","resize",0x4ec62d0a,"flixel.system.debug.Window.resize","flixel/system/debug/Window.hx",227,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(228)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		this->_width = tmp2;
		HX_STACK_LINE(229)
		Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		this->_height = tmp5;
		HX_STACK_LINE(230)
		this->updateSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::reposition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.Window","reposition",0x0fe38572,"flixel.system.debug.Window.reposition","flixel/system/debug/Window.hx",240,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(241)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		this->set_x(tmp);
		HX_STACK_LINE(242)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		this->set_y(tmp1);
		HX_STACK_LINE(243)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,reposition,(void))

Void Window_obj::updateBounds( ::openfl::_legacy::geom::Rectangle Bounds){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateBounds",0x436474f4,"flixel.system.debug.Window.updateBounds","flixel/system/debug/Window.hx",247,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(248)
		this->_bounds = Bounds;
		HX_STACK_LINE(249)
		::openfl::_legacy::geom::Rectangle tmp = this->_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		if ((tmp1)){
			HX_STACK_LINE(251)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			::openfl::_legacy::geom::Rectangle tmp4 = this->_bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			Float tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			this->maxSize = tmp6;
		}
		else{
			HX_STACK_LINE(255)
			::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(((Float)1.79e+308),((Float)1.79e+308));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			this->maxSize = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,updateBounds,(void))

Void Window_obj::setVisible( bool Value){
{
		HX_STACK_FRAME("flixel.system.debug.Window","setVisible",0x6084b306,"flixel.system.debug.Window.setVisible","flixel/system/debug/Window.hx",260,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(261)
		bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		this->set_visible(tmp);
		HX_STACK_LINE(262)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		int tmp2 = this->_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		bool tmp3 = this->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		hx::IndexRef((tmp1->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic )).mPtr,tmp2) = tmp3;
		HX_STACK_LINE(263)
		::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		tmp4->flush(null(),null());
		HX_STACK_LINE(265)
		::flixel::_system::ui::FlxSystemButton tmp5 = this->toggleButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(265)
		if ((tmp6)){
			HX_STACK_LINE(267)
			::flixel::_system::ui::FlxSystemButton tmp7 = this->toggleButton;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			bool tmp8 = this->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(267)
			tmp7->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp9);
		}
		HX_STACK_LINE(269)
		bool tmp7 = this->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(269)
		if ((tmp7)){
			HX_STACK_LINE(271)
			::openfl::_legacy::display::DisplayObjectContainer tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			tmp8->addChild(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setVisible,(void))

Void Window_obj::toggleVisible( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","toggleVisible",0x493d16e8,"flixel.system.debug.Window.toggleVisible","flixel/system/debug/Window.hx",276,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		this->setVisible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toggleVisible,(void))

Void Window_obj::putOnTop( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","putOnTop",0xbb5abdfd,"flixel.system.debug.Window.putOnTop","flixel/system/debug/Window.hx",281,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		::openfl::_legacy::display::DisplayObjectContainer tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		tmp->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,putOnTop,(void))

Void Window_obj::loadSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","loadSaveData",0x8d0923e3,"flixel.system.debug.Window.loadSaveData","flixel/system/debug/Window.hx",286,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		bool tmp1 = (tmp->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(289)
			::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			int tmp3 = this->_id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			bool tmp4 = tmp2->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic )->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			this->set_visible(tmp4);
		}
		else{
			HX_STACK_LINE(293)
			this->initSaveData();
			HX_STACK_LINE(294)
			this->loadSaveData();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,loadSaveData,(void))

Void Window_obj::initSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","initSaveData",0x7856becd,"flixel.system.debug.Window.initSaveData","flixel/system/debug/Window.hx",299,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		Array< bool > settings = Array_obj< bool >::__new();		HX_STACK_VAR(settings,"settings");
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(301)
			while((true)){
				HX_STACK_LINE(301)
				bool tmp = (_g < (int)10);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(301)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(301)
				if ((tmp1)){
					HX_STACK_LINE(301)
					break;
				}
				HX_STACK_LINE(301)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(301)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(303)
				settings[i] = true;
			}
		}
		HX_STACK_LINE(305)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		tmp->data->__FieldRef(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85")) = settings;
		HX_STACK_LINE(306)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		tmp1->flush(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,initSaveData,(void))

Void Window_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","update",0xcd50591f,"flixel.system.debug.Window.update","flixel/system/debug/Window.hx",309,0xb8dfd4e5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

Void Window_obj::init( ::openfl::_legacy::events::Event E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","init",0x33a1fca6,"flixel.system.debug.Window.init","flixel/system/debug/Window.hx",317,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(321)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(324)
			return null();
		}
		HX_STACK_LINE(326)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(328)
		::openfl::_legacy::display::Stage tmp4 = this->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		Dynamic tmp6 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(329)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(329)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		Dynamic tmp9 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(332)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(332)
		Dynamic tmp11 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(332)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,init,(void))

Void Window_obj::onMouseMove( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseMove",0xdd6abbe1,"flixel.system.debug.Window.onMouseMove","flixel/system/debug/Window.hx",339,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(341)
		Float tmp = this->get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		if ((tmp1)){
			HX_STACK_LINE(341)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(341)
			tmp2 = this->get_mouseX();
		}
		HX_STACK_LINE(341)
		Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
		HX_STACK_LINE(342)
		Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(342)
		bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(342)
		if ((tmp4)){
			HX_STACK_LINE(342)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(342)
			tmp5 = this->get_mouseY();
		}
		HX_STACK_LINE(342)
		Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
		HX_STACK_LINE(344)
		::openfl::_legacy::display::DisplayObjectContainer tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		bool tmp7 = tmp6->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		if ((tmp8)){
			HX_STACK_LINE(346)
			bool tmp9 = this->_overHeader = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(346)
			this->_overHandle = tmp9;
			HX_STACK_LINE(347)
			return null();
		}
		HX_STACK_LINE(350)
		bool tmp9 = this->_dragging;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(350)
		if ((tmp9)){
			HX_STACK_LINE(352)
			this->_overHeader = true;
			HX_STACK_LINE(353)
			::openfl::_legacy::display::DisplayObjectContainer tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(353)
			Float tmp11 = tmp10->get_mouseX();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(353)
			::openfl::_legacy::geom::Point tmp12 = this->_drag;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(353)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(353)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(353)
			::openfl::_legacy::display::DisplayObjectContainer tmp15 = this->get_parent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(353)
			Float tmp16 = tmp15->get_mouseY();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(353)
			::openfl::_legacy::geom::Point tmp17 = this->_drag;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(353)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(353)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(353)
			this->reposition(tmp14,tmp19);
		}
		else{
			HX_STACK_LINE(355)
			bool tmp10 = this->_resizing;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(355)
			if ((tmp10)){
				HX_STACK_LINE(357)
				this->_overHandle = true;
				HX_STACK_LINE(358)
				Float tmp11 = mouseX;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp12 = this->_drag;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(358)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(358)
				Float tmp15 = mouseY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp16 = this->_drag;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(358)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(358)
				Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(358)
				this->resize(tmp14,tmp18);
			}
			else{
				HX_STACK_LINE(360)
				bool tmp11 = (mouseX >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(360)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(360)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(360)
				if ((tmp12)){
					HX_STACK_LINE(360)
					Float tmp14 = mouseX;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(360)
					int tmp15 = this->_width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(360)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(360)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(360)
					tmp13 = (tmp14 <= tmp17);
				}
				else{
					HX_STACK_LINE(360)
					tmp13 = false;
				}
				HX_STACK_LINE(360)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(360)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(360)
				if ((tmp14)){
					HX_STACK_LINE(360)
					tmp15 = (mouseY >= (int)0);
				}
				else{
					HX_STACK_LINE(360)
					tmp15 = false;
				}
				HX_STACK_LINE(360)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(360)
				if ((tmp15)){
					HX_STACK_LINE(360)
					Float tmp17 = mouseY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(360)
					int tmp18 = this->_height;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(360)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(360)
					tmp16 = (tmp17 <= tmp19);
				}
				else{
					HX_STACK_LINE(360)
					tmp16 = false;
				}
				HX_STACK_LINE(360)
				if ((tmp16)){
					HX_STACK_LINE(362)
					Float tmp17 = mouseX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(362)
					::openfl::_legacy::display::Bitmap tmp18 = this->_header;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(362)
					Float tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(362)
					bool tmp20 = (tmp17 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(362)
					if ((tmp20)){
						HX_STACK_LINE(362)
						Float tmp22 = mouseY;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(362)
						::openfl::_legacy::display::Bitmap tmp23 = this->_header;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(362)
						::openfl::_legacy::display::Bitmap tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(362)
						Float tmp25 = tmp24->get_height();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(362)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(362)
						tmp21 = (tmp22 <= tmp26);
					}
					else{
						HX_STACK_LINE(362)
						tmp21 = false;
					}
					HX_STACK_LINE(362)
					this->_overHeader = tmp21;
					HX_STACK_LINE(363)
					bool tmp22 = this->_resizable;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(363)
					if ((tmp22)){
						HX_STACK_LINE(365)
						Float tmp23 = mouseX;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(365)
						int tmp24 = this->_width;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(365)
						::openfl::_legacy::display::Bitmap tmp25 = this->_handle;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(365)
						Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(365)
						Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(365)
						bool tmp28 = (tmp23 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(365)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(365)
						if ((tmp28)){
							HX_STACK_LINE(365)
							Float tmp30 = mouseY;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(365)
							int tmp31 = this->_height;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(365)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(365)
							::openfl::_legacy::display::Bitmap tmp33 = this->_handle;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(365)
							::openfl::_legacy::display::Bitmap tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(365)
							Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(365)
							Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(365)
							Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(365)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(365)
							tmp29 = (tmp30 >= tmp38);
						}
						else{
							HX_STACK_LINE(365)
							tmp29 = false;
						}
						HX_STACK_LINE(365)
						this->_overHandle = tmp29;
					}
				}
				else{
					HX_STACK_LINE(370)
					bool tmp17 = this->_overHeader = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(370)
					this->_overHandle = tmp17;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseMove,(void))

Void Window_obj::onMouseDown( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseDown",0xd777d132,"flixel.system.debug.Window.onMouseDown","flixel/system/debug/Window.hx",378,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(379)
		bool tmp = this->_overHeader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		if ((tmp)){
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(381)
				::openfl::_legacy::display::DisplayObjectContainer tmp1 = this->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(381)
				tmp1->addChild(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(382)
			this->_dragging = true;
			HX_STACK_LINE(383)
			Float tmp1 = this->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			::openfl::_legacy::geom::Point tmp2 = this->_drag;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			tmp2->x = tmp1;
			HX_STACK_LINE(384)
			Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			::openfl::_legacy::geom::Point tmp4 = this->_drag;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			tmp4->y = tmp3;
		}
		else{
			HX_STACK_LINE(386)
			bool tmp1 = this->_overHandle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(386)
			if ((tmp1)){
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::openfl::_legacy::display::DisplayObjectContainer tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(388)
					tmp2->addChild(hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(389)
				this->_resizing = true;
				HX_STACK_LINE(390)
				int tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				Float tmp3 = this->get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				::openfl::_legacy::geom::Point tmp5 = this->_drag;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(390)
				tmp5->x = tmp4;
				HX_STACK_LINE(391)
				int tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				Float tmp7 = this->get_mouseY();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(391)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				::openfl::_legacy::geom::Point tmp9 = this->_drag;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(391)
				tmp9->y = tmp8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseDown,(void))

Void Window_obj::onMouseUp( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseUp",0x62a36b2b,"flixel.system.debug.Window.onMouseUp","flixel/system/debug/Window.hx",399,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(400)
		this->_dragging = false;
		HX_STACK_LINE(401)
		this->_resizing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseUp,(void))

Void Window_obj::bound( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","bound",0xf2ff51e8,"flixel.system.debug.Window.bound","flixel/system/debug/Window.hx",410,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(411)
		::openfl::_legacy::geom::Rectangle tmp = this->_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		if ((tmp1)){
			HX_STACK_LINE(413)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				Float tmp3 = this->get_x();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(413)
				Float Value = tmp3;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(413)
				::openfl::_legacy::geom::Rectangle tmp4 = this->_bounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(413)
				Float tmp5 = tmp4->get_left();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				Dynamic Min = tmp5;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(413)
				::openfl::_legacy::geom::Rectangle tmp6 = this->_bounds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(413)
				Float tmp7 = tmp6->get_right();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(413)
				int tmp8 = this->_width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(413)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(413)
				Dynamic Max = tmp9;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(413)
				bool tmp10 = (Min != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(413)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(413)
				if ((tmp10)){
					HX_STACK_LINE(413)
					tmp11 = (Value < Min);
				}
				else{
					HX_STACK_LINE(413)
					tmp11 = false;
				}
				HX_STACK_LINE(413)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(413)
				if ((tmp11)){
					HX_STACK_LINE(413)
					tmp12 = Min;
				}
				else{
					HX_STACK_LINE(413)
					tmp12 = Value;
				}
				HX_STACK_LINE(413)
				Float lowerBound = tmp12;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(413)
				bool tmp13 = (Max != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(413)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(413)
				if ((tmp13)){
					HX_STACK_LINE(413)
					tmp14 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(413)
					tmp14 = false;
				}
				HX_STACK_LINE(413)
				if ((tmp14)){
					HX_STACK_LINE(413)
					tmp2 = Max;
				}
				else{
					HX_STACK_LINE(413)
					tmp2 = lowerBound;
				}
			}
			HX_STACK_LINE(413)
			this->set_x(tmp2);
			HX_STACK_LINE(414)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(414)
				Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(414)
				::openfl::_legacy::geom::Rectangle tmp5 = this->_bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(414)
				Float tmp6 = tmp5->get_top();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(414)
				Dynamic Min = tmp6;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(414)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(414)
				Float tmp8 = tmp7->get_bottom();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(414)
				int tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(414)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				Dynamic Max = tmp10;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(414)
				bool tmp11 = (Min != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(414)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(414)
				if ((tmp11)){
					HX_STACK_LINE(414)
					tmp12 = (Value < Min);
				}
				else{
					HX_STACK_LINE(414)
					tmp12 = false;
				}
				HX_STACK_LINE(414)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(414)
				if ((tmp12)){
					HX_STACK_LINE(414)
					tmp13 = Min;
				}
				else{
					HX_STACK_LINE(414)
					tmp13 = Value;
				}
				HX_STACK_LINE(414)
				Float lowerBound = tmp13;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(414)
				bool tmp14 = (Max != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(414)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(414)
				if ((tmp14)){
					HX_STACK_LINE(414)
					tmp15 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(414)
					tmp15 = false;
				}
				HX_STACK_LINE(414)
				if ((tmp15)){
					HX_STACK_LINE(414)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(414)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(414)
			this->set_y(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,bound,(void))

Void Window_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateSize",0x6f89a180,"flixel.system.debug.Window.updateSize","flixel/system/debug/Window.hx",422,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(423)
			Float Value = tmp1;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Point tmp2 = this->minSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(423)
			Dynamic Min = tmp2->x;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Point tmp3 = this->maxSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			Dynamic Max = tmp3->x;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(423)
			bool tmp4 = (Min != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(423)
			if ((tmp4)){
				HX_STACK_LINE(423)
				tmp5 = (Value < Min);
			}
			else{
				HX_STACK_LINE(423)
				tmp5 = false;
			}
			HX_STACK_LINE(423)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			if ((tmp5)){
				HX_STACK_LINE(423)
				tmp6 = Min;
			}
			else{
				HX_STACK_LINE(423)
				tmp6 = Value;
			}
			HX_STACK_LINE(423)
			Float lowerBound = tmp6;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(423)
			bool tmp7 = (Max != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(423)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(423)
			if ((tmp7)){
				HX_STACK_LINE(423)
				tmp8 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(423)
				tmp8 = false;
			}
			HX_STACK_LINE(423)
			if ((tmp8)){
				HX_STACK_LINE(423)
				tmp = Max;
			}
			else{
				HX_STACK_LINE(423)
				tmp = lowerBound;
			}
		}
		HX_STACK_LINE(423)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		this->_width = tmp1;
		HX_STACK_LINE(424)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(424)
			Float Value = tmp3;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(424)
			::openfl::_legacy::geom::Point tmp4 = this->minSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(424)
			Dynamic Min = tmp4->y;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(424)
			::openfl::_legacy::geom::Point tmp5 = this->maxSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(424)
			Dynamic Max = tmp5->y;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(424)
			bool tmp6 = (Min != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(424)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(424)
			if ((tmp6)){
				HX_STACK_LINE(424)
				tmp7 = (Value < Min);
			}
			else{
				HX_STACK_LINE(424)
				tmp7 = false;
			}
			HX_STACK_LINE(424)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(424)
			if ((tmp7)){
				HX_STACK_LINE(424)
				tmp8 = Min;
			}
			else{
				HX_STACK_LINE(424)
				tmp8 = Value;
			}
			HX_STACK_LINE(424)
			Float lowerBound = tmp8;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(424)
			bool tmp9 = (Max != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(424)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(424)
			if ((tmp9)){
				HX_STACK_LINE(424)
				tmp10 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(424)
				tmp10 = false;
			}
			HX_STACK_LINE(424)
			if ((tmp10)){
				HX_STACK_LINE(424)
				tmp2 = Max;
			}
			else{
				HX_STACK_LINE(424)
				tmp2 = lowerBound;
			}
		}
		HX_STACK_LINE(424)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		this->_height = tmp3;
		HX_STACK_LINE(426)
		::openfl::_legacy::display::Bitmap tmp4 = this->_header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		tmp4->set_scaleX(tmp5);
		HX_STACK_LINE(427)
		::openfl::_legacy::display::Bitmap tmp6 = this->_background;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(427)
		tmp6->set_scaleX(tmp7);
		HX_STACK_LINE(428)
		::openfl::_legacy::display::Bitmap tmp8 = this->_background;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(428)
		int tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(428)
		::openfl::_legacy::display::Bitmap tmp10 = this->_header;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(428)
		Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(428)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(428)
		tmp8->set_scaleY(tmp12);
		HX_STACK_LINE(429)
		::openfl::_legacy::display::Bitmap tmp13 = this->_shadow;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(429)
		int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(429)
		tmp13->set_scaleX(tmp14);
		HX_STACK_LINE(430)
		::openfl::_legacy::display::Bitmap tmp15 = this->_shadow;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(430)
		int tmp16 = this->_height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(430)
		tmp15->set_y(tmp16);
		HX_STACK_LINE(431)
		::openfl::_legacy::text::TextField tmp17 = this->_title;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(431)
		int tmp18 = this->_width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(431)
		int tmp19 = (tmp18 - (int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(431)
		tmp17->set_width(tmp19);
		HX_STACK_LINE(432)
		bool tmp20 = this->_resizable;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(432)
		if ((tmp20)){
			HX_STACK_LINE(434)
			::openfl::_legacy::display::Bitmap tmp21 = this->_handle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(434)
			int tmp22 = this->_width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(434)
			::openfl::_legacy::display::Bitmap tmp23 = this->_handle;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(434)
			Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(434)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(434)
			tmp21->set_x(tmp25);
			HX_STACK_LINE(435)
			::openfl::_legacy::display::Bitmap tmp26 = this->_handle;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(435)
			int tmp27 = this->_height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(435)
			::openfl::_legacy::display::Bitmap tmp28 = this->_handle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(435)
			Float tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(435)
			Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(435)
			tmp26->set_y(tmp30);
		}
		HX_STACK_LINE(437)
		::flixel::_system::ui::FlxSystemButton tmp21 = this->_closeButton;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(437)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(437)
		if ((tmp22)){
			HX_STACK_LINE(439)
			::flixel::_system::ui::FlxSystemButton tmp23 = this->_closeButton;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(439)
			int tmp24 = this->_width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(439)
			::flixel::_system::ui::FlxSystemButton tmp25 = this->_closeButton;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(439)
			Float tmp26 = tmp25->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(439)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(439)
			Float tmp28 = (tmp27 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(439)
			tmp23->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp28);
			HX_STACK_LINE(440)
			::flixel::_system::ui::FlxSystemButton tmp29 = this->_closeButton;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(440)
			tmp29->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,updateSize,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","close",0x8465b962,"flixel.system.debug.Window.close","flixel/system/debug/Window.hx",445,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		this->destroy();
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(448)
			::flixel::_system::debug::FlxDebugger _this = tmp->debugger;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(448)
			bool tmp1 = _this->__Field(HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(448)
			if ((tmp1)){
				HX_STACK_LINE(448)
				_this->__Field(HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				Array< ::Dynamic > array = _this->__Field(HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"), hx::paccDynamic );		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(448)
				int tmp2 = array->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(448)
				int index = tmp2;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(448)
				bool tmp3 = (index != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(448)
				if ((tmp3)){
					HX_STACK_LINE(448)
					int tmp4 = (array->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(448)
					::flixel::_system::debug::Window tmp5 = array->__get(tmp4).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(448)
					array[index] = tmp5;
					HX_STACK_LINE(448)
					array->pop().StaticCast< ::flixel::_system::debug::Window >();
					HX_STACK_LINE(448)
					array;
				}
				else{
					HX_STACK_LINE(448)
					array;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

int Window_obj::BG_COLOR;

int Window_obj::HEADER_COLOR;

Float Window_obj::HEADER_ALPHA;

int Window_obj::HEADER_HEIGHT;

int Window_obj::WINDOW_AMOUNT;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(toggleButton,"toggleButton");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_closeButton,"_closeButton");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_id,"_id");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(toggleButton,"toggleButton");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_closeButton,"_closeButton");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_handle") ) { return _handle; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return putOnTop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { return _resizable; }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return _overHeader; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return _overHandle; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { return toggleButton; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { return _closeButton; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSaveData") ) { return loadSaveData_dyn(); }
		if (HX_FIELD_EQ(inName,"initSaveData") ) { return initSaveData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { outValue = WINDOW_AMOUNT; return true;  }
	}
	return false;
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { toggleButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { _closeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { WINDOW_AMOUNT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"));
	outFields->push(HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"));
	outFields->push(HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"));
	outFields->push(HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"));
	outFields->push(HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"));
	outFields->push(HX_HCSTRING("_handle","\x47","\x95","\x74","\x26"));
	outFields->push(HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"));
	outFields->push(HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5"));
	outFields->push(HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70"));
	outFields->push(HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"));
	outFields->push(HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"));
	outFields->push(HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"));
	outFields->push(HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04"));
	outFields->push(HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,minSize),HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,toggleButton),HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f")},
	{hx::fsInt,(int)offsetof(Window_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Window_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Window_obj,_bounds),HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_background),HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_header),HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_shadow),HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Window_obj,_title),HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_handle),HX_HCSTRING("_handle","\x47","\x95","\x74","\x26")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,_closeButton),HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHeader),HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHandle),HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,_drag),HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5")},
	{hx::fsBool,(int)offsetof(Window_obj,_dragging),HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizing),HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizable),HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04")},
	{hx::fsInt,(int)offsetof(Window_obj,_id),HX_HCSTRING("_id","\xfa","\x71","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Window_obj::BG_COLOR,HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b")},
	{hx::fsInt,(void *) &Window_obj::HEADER_COLOR,HX_HCSTRING("HEADER_COLOR","\xd1","\xcd","\x7c","\x95")},
	{hx::fsFloat,(void *) &Window_obj::HEADER_ALPHA,HX_HCSTRING("HEADER_ALPHA","\xcc","\x03","\xb7","\x6c")},
	{hx::fsInt,(void *) &Window_obj::HEADER_HEIGHT,HX_HCSTRING("HEADER_HEIGHT","\x99","\x8b","\x7c","\x73")},
	{hx::fsInt,(void *) &Window_obj::WINDOW_AMOUNT,HX_HCSTRING("WINDOW_AMOUNT","\x87","\x6d","\x2e","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"),
	HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"),
	HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"),
	HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"),
	HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"),
	HX_HCSTRING("_handle","\x47","\x95","\x74","\x26"),
	HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"),
	HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5"),
	HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70"),
	HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"),
	HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"),
	HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"),
	HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("putOnTop","\x67","\x79","\x64","\x2e"),
	HX_HCSTRING("loadSaveData","\x4d","\xdc","\x85","\xaf"),
	HX_HCSTRING("initSaveData","\x37","\x77","\xd3","\x9a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_MARK_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_VISIT_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#endif

hx::Class Window_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b"),
	HX_HCSTRING("HEADER_COLOR","\xd1","\xcd","\x7c","\x95"),
	HX_HCSTRING("HEADER_ALPHA","\xcc","\x03","\xb7","\x6c"),
	HX_HCSTRING("HEADER_HEIGHT","\x99","\x8b","\x7c","\x73"),
	HX_HCSTRING("WINDOW_AMOUNT","\x87","\x6d","\x2e","\x4a"),
	::String(null()) };

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Window","\x98","\x06","\x51","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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

void Window_obj::__boot()
{
	BG_COLOR= (int)-580952225;
	HEADER_COLOR= (int)-1157627904;
	HEADER_ALPHA= ((Float)0.8);
	HEADER_HEIGHT= (int)15;
	WINDOW_AMOUNT= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
