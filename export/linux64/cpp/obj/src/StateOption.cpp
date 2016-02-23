#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_StateMenu
#include <StateMenu.h>
#endif
#ifndef INCLUDED_StateOption
#include <StateOption.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void StateOption_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("StateOption","new",0x04baf438,"StateOption.new","StateOption.hx",21,0x09347a38)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
}
;
	return null();
}

//StateOption_obj::~StateOption_obj() { }

Dynamic StateOption_obj::__CreateEmpty() { return  new StateOption_obj; }
hx::ObjectPtr< StateOption_obj > StateOption_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< StateOption_obj > _result_ = new StateOption_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic StateOption_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateOption_obj > _result_ = new StateOption_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void StateOption_obj::create( ){
{
		HX_STACK_FRAME("StateOption","create",0xa3463a24,"StateOption.create","StateOption.hx",51,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		Float tmp2 = (tmp1 + (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		int tmp4 = (tmp3 - (int)28);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		Dynamic tmp5 = this->ClickBack_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new(tmp2,tmp4,HX_HCSTRING("Back.","\x07","\x78","\xdb","\x40"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		this->backFlxButton = tmp6;
		HX_STACK_LINE(59)
		::flixel::_system::frontEnds::SoundFrontEnd tmp7 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		::flixel::_system::FlxSound tmp8 = tmp7->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		::flixel::ui::FlxButton tmp9 = this->backFlxButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		tmp9->onUp->sound = tmp8;
		HX_STACK_LINE(64)
		int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		Float tmp12 = (tmp11 - (int)90);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(65)
		int tmp14 = (tmp13 - (int)28);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		Dynamic tmp15 = this->ClickClearData_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(63)
		::flixel::ui::FlxButton tmp16 = ::flixel::ui::FlxButton_obj::__new(tmp12,tmp14,HX_HCSTRING("Clear Data.","\xb1","\x3b","\xac","\x76"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		this->clearDataFlxButton = tmp16;
		HX_STACK_LINE(69)
		::flixel::_system::frontEnds::SoundFrontEnd tmp17 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(69)
		::flixel::_system::FlxSound tmp18 = tmp17->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(69)
		::flixel::ui::FlxButton tmp19 = this->clearDataFlxButton;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(69)
		tmp19->onUp->sound = tmp18;
		HX_STACK_LINE(74)
		::flixel::text::FlxText tmp20 = ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,HX_HCSTRING("Options.","\x30","\x7b","\x20","\xf8"),(int)22,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(74)
		this->titleFlxText = tmp20;
		HX_STACK_LINE(75)
		::flixel::text::FlxText tmp21 = this->titleFlxText;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(75)
		tmp21->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(76)
		::flixel::text::FlxText tmp22 = this->titleFlxText;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(76)
		tmp22->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(80)
		::flixel::text::FlxText tmp23 = this->titleFlxText;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(80)
		Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(80)
		::flixel::text::FlxText tmp25 = this->titleFlxText;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(80)
		Float tmp26 = tmp25->get_height();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(80)
		Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(80)
		Float tmp28 = (tmp27 + (int)10);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(80)
		::flixel::text::FlxText tmp29 = ::flixel::text::FlxText_obj::__new((int)0,tmp28,(int)0,HX_HCSTRING("Volume.","\xf4","\x9c","\xc2","\xd6"),(int)8,null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(80)
		this->volumeFlxText = tmp29;
		HX_STACK_LINE(81)
		::flixel::text::FlxText tmp30 = this->volumeFlxText;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(81)
		tmp30->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(82)
		::flixel::text::FlxText tmp31 = this->volumeFlxText;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(82)
		tmp31->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(89)
		::flixel::text::FlxText tmp32 = this->volumeFlxText;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(89)
		Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(89)
		::flixel::text::FlxText tmp34 = this->volumeFlxText;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(89)
		Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(89)
		Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(89)
		Float tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(91)
		Dynamic tmp38 = this->ClickVolumeDown_dyn();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(87)
		::flixel::ui::FlxButton tmp39 = ::flixel::ui::FlxButton_obj::__new((int)8,tmp37,HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(87)
		this->volumeDownFlxButton = tmp39;
		HX_STACK_LINE(93)
		::flixel::ui::FlxButton tmp40 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(93)
		tmp40->loadGraphic(HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(94)
		::flixel::_system::frontEnds::SoundFrontEnd tmp41 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(94)
		::flixel::_system::FlxSound tmp42 = tmp41->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(94)
		::flixel::ui::FlxButton tmp43 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(94)
		tmp43->onUp->sound = tmp42;
		HX_STACK_LINE(99)
		int tmp44 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(99)
		int tmp45 = (tmp44 - (int)28);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(100)
		::flixel::ui::FlxButton tmp46 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(100)
		Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(102)
		Dynamic tmp48 = this->ClickVolumeUp_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(98)
		::flixel::ui::FlxButton tmp49 = ::flixel::ui::FlxButton_obj::__new(tmp45,tmp47,HX_HCSTRING("+","\x2b","\x00","\x00","\x00"),tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(98)
		this->volumeUpFlxButton = tmp49;
		HX_STACK_LINE(104)
		::flixel::ui::FlxButton tmp50 = this->volumeUpFlxButton;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(104)
		tmp50->loadGraphic(HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(105)
		::flixel::_system::frontEnds::SoundFrontEnd tmp51 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(105)
		::flixel::_system::FlxSound tmp52 = tmp51->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(105)
		::flixel::ui::FlxButton tmp53 = this->volumeUpFlxButton;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(105)
		tmp53->onUp->sound = tmp52;
		HX_STACK_LINE(110)
		::flixel::ui::FlxButton tmp54 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(110)
		Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(110)
		::flixel::ui::FlxButton tmp56 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(110)
		Float tmp57 = tmp56->get_width();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(110)
		Float tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(110)
		Float tmp59 = (tmp58 + (int)4);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(111)
		::flixel::ui::FlxButton tmp60 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(111)
		Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(113)
		int tmp62 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(113)
		int tmp63 = (tmp62 - (int)64);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(113)
		int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(114)
		::flixel::ui::FlxButton tmp65 = this->volumeUpFlxButton;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(114)
		Float tmp66 = tmp65->get_height();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(114)
		int tmp67 = ::Std_obj::_int(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(109)
		::flixel::ui::FlxBar tmp68 = ::flixel::ui::FlxBar_obj::__new(tmp59,tmp61,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,tmp64,tmp67,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(109)
		this->volumeFlxBar = tmp68;
		HX_STACK_LINE(116)
		::flixel::ui::FlxBar tmp69 = this->volumeFlxBar;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(116)
		tmp69->createFilledBar((int)-12171706,(int)-1,true,(int)-1);
		HX_STACK_LINE(127)
		::flixel::_system::frontEnds::SoundFrontEnd tmp70 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(127)
		Float tmp71 = tmp70->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(127)
		Float tmp72 = (tmp71 * (int)100);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(127)
		::String tmp73 = (tmp72 + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(125)
		::flixel::text::FlxText tmp74 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)200,tmp73,(int)8,null());		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(125)
		this->volumeAmountFlxText = tmp74;
		HX_STACK_LINE(130)
		::flixel::text::FlxText tmp75 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(130)
		tmp75->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(131)
		::flixel::text::FlxText tmp76 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(131)
		tmp76->set_borderColor((int)-12171706);
		HX_STACK_LINE(132)
		::flixel::text::FlxText tmp77 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(132)
		tmp77->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE);
		HX_STACK_LINE(133)
		::flixel::text::FlxText tmp78 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(133)
		tmp78->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(134)
		::flixel::text::FlxText tmp79 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(135)
		::flixel::ui::FlxBar tmp80 = this->volumeFlxBar;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(135)
		Float tmp81 = tmp80->y;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(136)
		::flixel::ui::FlxBar tmp82 = this->volumeFlxBar;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(136)
		Float tmp83 = tmp82->get_height();		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(136)
		Float tmp84 = (Float(tmp83) / Float((int)2));		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(135)
		Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(137)
		::flixel::text::FlxText tmp86 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(137)
		Float tmp87 = tmp86->get_height();		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(137)
		Float tmp88 = (Float(tmp87) / Float((int)2));		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(135)
		Float tmp89 = (tmp85 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(134)
		tmp79->set_y(tmp89);
		HX_STACK_LINE(145)
		::flixel::ui::FlxBar tmp90 = this->volumeFlxBar;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(145)
		Float tmp91 = tmp90->y;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(145)
		::flixel::ui::FlxBar tmp92 = this->volumeFlxBar;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(145)
		Float tmp93 = tmp92->get_height();		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(145)
		Float tmp94 = (tmp91 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(145)
		Float tmp95 = (tmp94 + (int)8);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(146)
		bool tmp96 = ::flixel::FlxG_obj::get_fullscreen();		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(146)
		::String tmp97;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(146)
		if ((tmp96)){
			HX_STACK_LINE(146)
			tmp97 = HX_HCSTRING("Fullscreen.","\x73","\x51","\x31","\x68");
		}
		else{
			HX_STACK_LINE(146)
			tmp97 = HX_HCSTRING("Windowed.","\xdf","\x5c","\x14","\x38");
		}
		HX_STACK_LINE(147)
		Dynamic tmp98 = this->ClickFullScreenVoid_dyn();		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(143)
		::flixel::ui::FlxButton tmp99 = ::flixel::ui::FlxButton_obj::__new((int)0,tmp95,tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(143)
		this->fullScreenButton = tmp99;
		HX_STACK_LINE(149)
		::flixel::ui::FlxButton tmp100 = this->fullScreenButton;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(149)
		tmp100->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(150)
		::flixel::ui::FlxButton tmp101 = this->fullScreenButton;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(150)
		this->add(tmp101);
		HX_STACK_LINE(156)
		::flixel::ui::FlxButton tmp102 = this->backFlxButton;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(156)
		this->add(tmp102);
		HX_STACK_LINE(157)
		::flixel::ui::FlxButton tmp103 = this->clearDataFlxButton;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(157)
		this->add(tmp103);
		HX_STACK_LINE(158)
		::flixel::text::FlxText tmp104 = this->titleFlxText;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(158)
		this->add(tmp104);
		HX_STACK_LINE(159)
		::flixel::text::FlxText tmp105 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(159)
		this->add(tmp105);
		HX_STACK_LINE(160)
		::flixel::ui::FlxButton tmp106 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(160)
		this->add(tmp106);
		HX_STACK_LINE(161)
		::flixel::ui::FlxBar tmp107 = this->volumeFlxBar;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(161)
		this->add(tmp107);
		HX_STACK_LINE(162)
		::flixel::text::FlxText tmp108 = this->volumeFlxText;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(162)
		this->add(tmp108);
		HX_STACK_LINE(163)
		::flixel::ui::FlxButton tmp109 = this->volumeUpFlxButton;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(163)
		this->add(tmp109);
		HX_STACK_LINE(168)
		::flixel::util::FlxSave tmp110 = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(168)
		this->saveFlxSave = tmp110;
		HX_STACK_LINE(169)
		::flixel::util::FlxSave tmp111 = this->saveFlxSave;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(169)
		tmp111->bind(HX_HCSTRING("HaXeFlixelTurnBasedRPG","\x95","\xa8","\x0c","\xe6"));
		HX_STACK_LINE(174)
		this->UpdateVolumeVoid();
		HX_STACK_LINE(175)
		::flixel::FlxCamera tmp112 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(175)
		tmp112->fade((int)-16777216,((Float)0.33),true,null(),null());
		HX_STACK_LINE(177)
		this->super::create();
	}
return null();
}


Void StateOption_obj::destroy( ){
{
		HX_STACK_FRAME("StateOption","destroy",0x4d481cd2,"StateOption.destroy","StateOption.hx",187,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		this->super::destroy();
		HX_STACK_LINE(193)
		::flixel::ui::FlxButton tmp = this->backFlxButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::flixel::ui::FlxButton tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		this->backFlxButton = tmp1;
		HX_STACK_LINE(194)
		::flixel::ui::FlxButton tmp2 = this->clearDataFlxButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		::flixel::ui::FlxButton tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		this->clearDataFlxButton = tmp3;
		HX_STACK_LINE(195)
		::flixel::text::FlxText tmp4 = this->titleFlxText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		::flixel::text::FlxText tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		this->titleFlxText = tmp5;
		HX_STACK_LINE(196)
		::flixel::text::FlxText tmp6 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		::flixel::text::FlxText tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		this->volumeAmountFlxText = tmp7;
		HX_STACK_LINE(197)
		::flixel::ui::FlxButton tmp8 = this->volumeDownFlxButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		::flixel::ui::FlxButton tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(197)
		this->volumeDownFlxButton = tmp9;
		HX_STACK_LINE(198)
		::flixel::text::FlxText tmp10 = this->volumeFlxText;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(198)
		::flixel::text::FlxText tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(198)
		this->volumeFlxText = tmp11;
		HX_STACK_LINE(199)
		::flixel::ui::FlxButton tmp12 = this->volumeUpFlxButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(199)
		::flixel::ui::FlxButton tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(199)
		this->volumeUpFlxButton = tmp13;
		HX_STACK_LINE(203)
		::flixel::util::FlxSave tmp14 = this->saveFlxSave;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(203)
		tmp14->destroy();
		HX_STACK_LINE(204)
		this->saveFlxSave = null();
		HX_STACK_LINE(208)
		::flixel::ui::FlxButton tmp15 = this->fullScreenButton;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(208)
		::flixel::ui::FlxButton tmp16 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(208)
		this->fullScreenButton = tmp16;
	}
return null();
}


Void StateOption_obj::ClickBack( ){
{
		HX_STACK_FRAME("StateOption","ClickBack",0x12e2bc47,"StateOption.ClickBack","StateOption.hx",221,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		::flixel::util::FlxSave tmp = this->saveFlxSave;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		tmp->close(null(),null());
		HX_STACK_LINE(224)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","StateOption.hx",226,0x09347a38)
			{
				HX_STACK_LINE(226)
				::StateMenu tmp2 = ::StateMenu_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(226)
				::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(226)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(226)
				::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(226)
				bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				if ((tmp5)){
					HX_STACK_LINE(226)
					::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					tmp6->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(224)
		tmp1->fade((int)-16777216,((Float)0.33),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,ClickBack,(void))

Void StateOption_obj::ClickClearData( ){
{
		HX_STACK_FRAME("StateOption","ClickClearData",0x21aaa837,"StateOption.ClickClearData","StateOption.hx",240,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(242)
		::flixel::util::FlxSave tmp = this->saveFlxSave;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		tmp->erase();
		HX_STACK_LINE(243)
		::flixel::_system::frontEnds::SoundFrontEnd tmp1 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		tmp1->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(((Float)0.5));
		HX_STACK_LINE(244)
		this->UpdateVolumeVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,ClickClearData,(void))

Void StateOption_obj::ClickVolumeDown( ){
{
		HX_STACK_FRAME("StateOption","ClickVolumeDown",0xcf537d7c,"StateOption.ClickVolumeDown","StateOption.hx",255,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(257)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) - ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(258)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		::flixel::util::FlxSave tmp1 = this->saveFlxSave;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		tmp1->data->__FieldRef(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")) = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
		HX_STACK_LINE(259)
		this->UpdateVolumeVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,ClickVolumeDown,(void))

Void StateOption_obj::ClickVolumeUp( ){
{
		HX_STACK_FRAME("StateOption","ClickVolumeUp",0xc41290f5,"StateOption.ClickVolumeUp","StateOption.hx",270,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::flixel::_system::frontEnds::SoundFrontEnd _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			Float tmp1 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + ((Float)0.1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(273)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		::flixel::util::FlxSave tmp1 = this->saveFlxSave;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		tmp1->data->__FieldRef(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")) = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
		HX_STACK_LINE(274)
		this->UpdateVolumeVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,ClickVolumeUp,(void))

Void StateOption_obj::UpdateVolumeVoid( ){
{
		HX_STACK_FRAME("StateOption","UpdateVolumeVoid",0x90e70eff,"StateOption.UpdateVolumeVoid","StateOption.hx",286,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		Float tmp1 = tmp->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		Float tmp2 = (tmp1 * (int)100);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		int volumeInt = tmp3;		HX_STACK_VAR(volumeInt,"volumeInt");
		HX_STACK_LINE(289)
		::flixel::ui::FlxBar tmp4 = this->volumeFlxBar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		int tmp5 = volumeInt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(289)
		tmp4->set_value(tmp5);
		HX_STACK_LINE(290)
		::flixel::text::FlxText tmp6 = this->volumeAmountFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		::String tmp7 = (volumeInt + HX_HCSTRING("%","\x25","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(290)
		tmp6->set_text(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,UpdateVolumeVoid,(void))

Void StateOption_obj::ClickFullScreenVoid( ){
{
		HX_STACK_FRAME("StateOption","ClickFullScreenVoid",0x6169316f,"StateOption.ClickFullScreenVoid","StateOption.hx",302,0x09347a38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		bool tmp = ::flixel::FlxG_obj::get_fullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		::flixel::FlxG_obj::set_fullscreen(tmp1);
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::flixel::ui::FlxButton tmp2 = this->fullScreenButton;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			::flixel::ui::FlxButton _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(305)
			bool tmp3 = ::flixel::FlxG_obj::get_fullscreen();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				tmp4 = HX_HCSTRING("Fullscreen.","\x73","\x51","\x31","\x68");
			}
			else{
				HX_STACK_LINE(305)
				tmp4 = HX_HCSTRING("Windowed.","\xdf","\x5c","\x14","\x38");
			}
			HX_STACK_LINE(305)
			::String Text = tmp4;		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(305)
			bool tmp5 = (_this->label == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			if ((tmp5)){
				HX_STACK_LINE(305)
				bool tmp6 = (Text != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				if ((tmp6)){
					HX_STACK_LINE(305)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(305)
					::flixel::math::FlxPoint tmp8 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(305)
					Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(305)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(305)
					::flixel::math::FlxPoint tmp12 = _this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(305)
					Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(305)
					::String tmp15 = Text;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(305)
					::flixel::text::FlxText tmp16 = ::flixel::text::FlxText_obj::__new(tmp10,tmp14,(int)80,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(305)
					_this->set_label(tmp16);
					HX_STACK_LINE(305)
					_this->label->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
					HX_STACK_LINE(305)
					Float tmp17 = _this->labelAlphas->__get(_this->status);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(305)
					_this->label->set_alpha(tmp17);
					HX_STACK_LINE(305)
					_this->label->drawFrame(true);
				}
			}
			else{
				HX_STACK_LINE(305)
				::String tmp6 = Text;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				_this->label->set_text(tmp6);
			}
			HX_STACK_LINE(305)
			Text;
		}
		HX_STACK_LINE(306)
		bool tmp2 = ::flixel::FlxG_obj::get_fullscreen();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::flixel::util::FlxSave tmp3 = this->saveFlxSave;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		tmp3->data->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateOption_obj,ClickFullScreenVoid,(void))


StateOption_obj::StateOption_obj()
{
}

void StateOption_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateOption);
	HX_MARK_MEMBER_NAME(backFlxButton,"backFlxButton");
	HX_MARK_MEMBER_NAME(clearDataFlxButton,"clearDataFlxButton");
	HX_MARK_MEMBER_NAME(saveFlxSave,"saveFlxSave");
	HX_MARK_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_MARK_MEMBER_NAME(volumeAmountFlxText,"volumeAmountFlxText");
	HX_MARK_MEMBER_NAME(volumeDownFlxButton,"volumeDownFlxButton");
	HX_MARK_MEMBER_NAME(volumeFlxBar,"volumeFlxBar");
	HX_MARK_MEMBER_NAME(volumeFlxText,"volumeFlxText");
	HX_MARK_MEMBER_NAME(volumeUpFlxButton,"volumeUpFlxButton");
	HX_MARK_MEMBER_NAME(fullScreenButton,"fullScreenButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StateOption_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backFlxButton,"backFlxButton");
	HX_VISIT_MEMBER_NAME(clearDataFlxButton,"clearDataFlxButton");
	HX_VISIT_MEMBER_NAME(saveFlxSave,"saveFlxSave");
	HX_VISIT_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_VISIT_MEMBER_NAME(volumeAmountFlxText,"volumeAmountFlxText");
	HX_VISIT_MEMBER_NAME(volumeDownFlxButton,"volumeDownFlxButton");
	HX_VISIT_MEMBER_NAME(volumeFlxBar,"volumeFlxBar");
	HX_VISIT_MEMBER_NAME(volumeFlxText,"volumeFlxText");
	HX_VISIT_MEMBER_NAME(volumeUpFlxButton,"volumeUpFlxButton");
	HX_VISIT_MEMBER_NAME(fullScreenButton,"fullScreenButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StateOption_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ClickBack") ) { return ClickBack_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"saveFlxSave") ) { return saveFlxSave; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { return titleFlxText; }
		if (HX_FIELD_EQ(inName,"volumeFlxBar") ) { return volumeFlxBar; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxButton") ) { return backFlxButton; }
		if (HX_FIELD_EQ(inName,"volumeFlxText") ) { return volumeFlxText; }
		if (HX_FIELD_EQ(inName,"ClickVolumeUp") ) { return ClickVolumeUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ClickClearData") ) { return ClickClearData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ClickVolumeDown") ) { return ClickVolumeDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullScreenButton") ) { return fullScreenButton; }
		if (HX_FIELD_EQ(inName,"UpdateVolumeVoid") ) { return UpdateVolumeVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"volumeUpFlxButton") ) { return volumeUpFlxButton; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearDataFlxButton") ) { return clearDataFlxButton; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"volumeAmountFlxText") ) { return volumeAmountFlxText; }
		if (HX_FIELD_EQ(inName,"volumeDownFlxButton") ) { return volumeDownFlxButton; }
		if (HX_FIELD_EQ(inName,"ClickFullScreenVoid") ) { return ClickFullScreenVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateOption_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"saveFlxSave") ) { saveFlxSave=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { titleFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeFlxBar") ) { volumeFlxBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxButton") ) { backFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeFlxText") ) { volumeFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullScreenButton") ) { fullScreenButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"volumeUpFlxButton") ) { volumeUpFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearDataFlxButton") ) { clearDataFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"volumeAmountFlxText") ) { volumeAmountFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeDownFlxButton") ) { volumeDownFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backFlxButton","\xdd","\x84","\x2b","\x2e"));
	outFields->push(HX_HCSTRING("clearDataFlxButton","\xad","\x1a","\x82","\x23"));
	outFields->push(HX_HCSTRING("saveFlxSave","\x12","\xcb","\xf4","\x68"));
	outFields->push(HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"));
	outFields->push(HX_HCSTRING("volumeAmountFlxText","\x0d","\xe5","\x83","\xb5"));
	outFields->push(HX_HCSTRING("volumeDownFlxButton","\x08","\xcd","\x14","\xbf"));
	outFields->push(HX_HCSTRING("volumeFlxBar","\xfb","\xf5","\xa4","\xf4"));
	outFields->push(HX_HCSTRING("volumeFlxText","\x85","\x2b","\x9b","\x27"));
	outFields->push(HX_HCSTRING("volumeUpFlxButton","\x6f","\x3a","\x5c","\x77"));
	outFields->push(HX_HCSTRING("fullScreenButton","\xad","\x3a","\x95","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateOption_obj,backFlxButton),HX_HCSTRING("backFlxButton","\xdd","\x84","\x2b","\x2e")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateOption_obj,clearDataFlxButton),HX_HCSTRING("clearDataFlxButton","\xad","\x1a","\x82","\x23")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(int)offsetof(StateOption_obj,saveFlxSave),HX_HCSTRING("saveFlxSave","\x12","\xcb","\xf4","\x68")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateOption_obj,titleFlxText),HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateOption_obj,volumeAmountFlxText),HX_HCSTRING("volumeAmountFlxText","\x0d","\xe5","\x83","\xb5")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateOption_obj,volumeDownFlxButton),HX_HCSTRING("volumeDownFlxButton","\x08","\xcd","\x14","\xbf")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(StateOption_obj,volumeFlxBar),HX_HCSTRING("volumeFlxBar","\xfb","\xf5","\xa4","\xf4")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateOption_obj,volumeFlxText),HX_HCSTRING("volumeFlxText","\x85","\x2b","\x9b","\x27")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateOption_obj,volumeUpFlxButton),HX_HCSTRING("volumeUpFlxButton","\x6f","\x3a","\x5c","\x77")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateOption_obj,fullScreenButton),HX_HCSTRING("fullScreenButton","\xad","\x3a","\x95","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backFlxButton","\xdd","\x84","\x2b","\x2e"),
	HX_HCSTRING("clearDataFlxButton","\xad","\x1a","\x82","\x23"),
	HX_HCSTRING("saveFlxSave","\x12","\xcb","\xf4","\x68"),
	HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"),
	HX_HCSTRING("volumeAmountFlxText","\x0d","\xe5","\x83","\xb5"),
	HX_HCSTRING("volumeDownFlxButton","\x08","\xcd","\x14","\xbf"),
	HX_HCSTRING("volumeFlxBar","\xfb","\xf5","\xa4","\xf4"),
	HX_HCSTRING("volumeFlxText","\x85","\x2b","\x9b","\x27"),
	HX_HCSTRING("volumeUpFlxButton","\x6f","\x3a","\x5c","\x77"),
	HX_HCSTRING("fullScreenButton","\xad","\x3a","\x95","\x81"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("ClickBack","\x6f","\x26","\xe3","\xc1"),
	HX_HCSTRING("ClickClearData","\x0f","\x6d","\x30","\xe5"),
	HX_HCSTRING("ClickVolumeDown","\xa4","\xf5","\xd9","\x20"),
	HX_HCSTRING("ClickVolumeUp","\x1d","\x2f","\x97","\x74"),
	HX_HCSTRING("UpdateVolumeVoid","\xd7","\xb9","\x09","\x95"),
	HX_HCSTRING("ClickFullScreenVoid","\x97","\xdd","\x92","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateOption_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateOption_obj::__mClass,"__mClass");
};

#endif

hx::Class StateOption_obj::__mClass;

void StateOption_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StateOption","\x46","\xb8","\x36","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StateOption_obj >;
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

