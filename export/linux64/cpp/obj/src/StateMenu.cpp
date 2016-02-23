#include <hxcpp.h>

#ifndef INCLUDED_StateMenu
#include <StateMenu.h>
#endif
#ifndef INCLUDED_StateOption
#include <StateOption.h>
#endif
#ifndef INCLUDED_StatePlay
#include <StatePlay.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif

Void StateMenu_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("StateMenu","new",0xab6d1d22,"StateMenu.new","StateMenu.hx",24,0x3fe85c8e)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(24)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
}
;
	return null();
}

//StateMenu_obj::~StateMenu_obj() { }

Dynamic StateMenu_obj::__CreateEmpty() { return  new StateMenu_obj; }
hx::ObjectPtr< StateMenu_obj > StateMenu_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< StateMenu_obj > _result_ = new StateMenu_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic StateMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateMenu_obj > _result_ = new StateMenu_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void StateMenu_obj::create( ){
{
		HX_STACK_FRAME("StateMenu","create",0xc308ff7a,"StateMenu.create","StateMenu.hx",48,0x3fe85c8e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::flixel::_system::FlxSound tmp1 = tmp->__Field(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(59)
			::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			tmp3->__Field(HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"), hx::paccDynamic )(HX_HCSTRING("assets/music/HaxeFlixel_Tutorial_Game.ogg","\x8d","\x56","\x76","\xf8"),(int)1,true,null());
		}
		HX_STACK_LINE(67)
		Dynamic tmp3 = this->ClickOptionVoid_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::flixel::ui::FlxButton tmp4 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Options","\x3e","\x5b","\x4f","\xad"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		this->optionFlxButton = tmp4;
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton tmp5 = this->optionFlxButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = (tmp7 + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		tmp5->set_x(tmp8);
		HX_STACK_LINE(69)
		::flixel::ui::FlxButton tmp9 = this->optionFlxButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		int tmp10 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		::flixel::ui::FlxButton tmp11 = this->optionFlxButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		Float tmp12 = tmp11->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		Float tmp14 = (tmp13 - (int)10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		tmp9->set_y(tmp14);
		HX_STACK_LINE(70)
		::flixel::_system::frontEnds::SoundFrontEnd tmp15 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		::flixel::_system::FlxSound tmp16 = tmp15->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		::flixel::ui::FlxButton tmp17 = this->optionFlxButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		tmp17->onUp->sound = tmp16;
		HX_STACK_LINE(74)
		Dynamic tmp18 = this->ClickPlayVoid_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(74)
		::flixel::ui::FlxButton tmp19 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(74)
		this->playFlxButton = tmp19;
		HX_STACK_LINE(75)
		::flixel::ui::FlxButton tmp20 = this->playFlxButton;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(75)
		int tmp21 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(75)
		Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(75)
		::flixel::ui::FlxButton tmp23 = this->playFlxButton;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(75)
		Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(75)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(75)
		Float tmp26 = (tmp25 - (int)10);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(75)
		tmp20->set_x(tmp26);
		HX_STACK_LINE(76)
		::flixel::ui::FlxButton tmp27 = this->playFlxButton;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(76)
		int tmp28 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(76)
		::flixel::ui::FlxButton tmp29 = this->playFlxButton;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(76)
		Float tmp30 = tmp29->get_height();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(76)
		Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(76)
		Float tmp32 = (tmp31 - (int)10);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(76)
		tmp27->set_y(tmp32);
		HX_STACK_LINE(77)
		::flixel::_system::frontEnds::SoundFrontEnd tmp33 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(77)
		::flixel::_system::FlxSound tmp34 = tmp33->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(77)
		::flixel::ui::FlxButton tmp35 = this->playFlxButton;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(77)
		tmp35->onUp->sound = tmp34;
		HX_STACK_LINE(81)
		::flixel::text::FlxText tmp36 = ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,HX_HCSTRING("HaxeFlixel\nTutorial\nGame","\x16","\x91","\x3e","\xb6"),(int)22,null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(81)
		this->titleFlxText = tmp36;
		HX_STACK_LINE(82)
		::flixel::text::FlxText tmp37 = this->titleFlxText;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(82)
		tmp37->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(83)
		::flixel::text::FlxText tmp38 = this->titleFlxText;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(83)
		tmp38->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(87)
		::flixel::ui::FlxButton tmp39 = this->optionFlxButton;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(87)
		this->add(tmp39);
		HX_STACK_LINE(88)
		::flixel::ui::FlxButton tmp40 = this->playFlxButton;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(88)
		this->add(tmp40);
		HX_STACK_LINE(89)
		::flixel::text::FlxText tmp41 = this->titleFlxText;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(89)
		this->add(tmp41);
		HX_STACK_LINE(98)
		int tmp42 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(98)
		int tmp43 = (tmp42 - (int)28);		HX_STACK_VAR(tmp43,"tmp43");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","StateMenu.hx",101,0x3fe85c8e)
			{
				HX_STACK_LINE(101)
				::openfl::_legacy::_system::System_obj::exit((int)0);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(97)
		::flixel::ui::FlxButton tmp44 = ::flixel::ui::FlxButton_obj::__new(tmp43,(int)8,HX_HCSTRING("X","\x58","\x00","\x00","\x00"), Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(97)
		this->exitFlxButton = tmp44;
		HX_STACK_LINE(104)
		::flixel::ui::FlxButton tmp45 = this->exitFlxButton;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(104)
		tmp45->loadGraphic(HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(105)
		::flixel::ui::FlxButton tmp46 = this->exitFlxButton;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(105)
		this->add(tmp46);
		HX_STACK_LINE(110)
		::flixel::FlxCamera tmp47 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(110)
		tmp47->fade((int)-16777216,((Float)0.33),true,null(),null());
		HX_STACK_LINE(112)
		this->super::create();
	}
return null();
}


Void StateMenu_obj::destroy( ){
{
		HX_STACK_FRAME("StateMenu","destroy",0xf7f202bc,"StateMenu.destroy","StateMenu.hx",123,0x3fe85c8e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		this->super::destroy();
		HX_STACK_LINE(127)
		::flixel::text::FlxText tmp = this->titleFlxText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::flixel::text::FlxText tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		this->titleFlxText = tmp1;
		HX_STACK_LINE(128)
		::flixel::ui::FlxButton tmp2 = this->playFlxButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		::flixel::ui::FlxButton tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		this->playFlxButton = tmp3;
		HX_STACK_LINE(129)
		::flixel::ui::FlxButton tmp4 = this->optionFlxButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		::flixel::ui::FlxButton tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		this->optionFlxButton = tmp5;
		HX_STACK_LINE(133)
		::flixel::ui::FlxButton tmp6 = this->exitFlxButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		::flixel::ui::FlxButton tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		this->exitFlxButton = tmp7;
	}
return null();
}


Void StateMenu_obj::ClickOptionVoid( ){
{
		HX_STACK_FRAME("StateMenu","ClickOptionVoid",0xfd463b73,"StateMenu.ClickOptionVoid","StateMenu.hx",146,0x3fe85c8e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","StateMenu.hx",149,0x3fe85c8e)
			{
				HX_STACK_LINE(149)
				::StateOption tmp1 = ::StateOption_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(149)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(149)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(149)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				if ((tmp4)){
					HX_STACK_LINE(149)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(149)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(148)
		tmp->fade((int)-16777216,((Float).33),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateMenu_obj,ClickOptionVoid,(void))

Void StateMenu_obj::ClickPlayVoid( ){
{
		HX_STACK_FRAME("StateMenu","ClickPlayVoid",0x0de6caf2,"StateMenu.ClickPlayVoid","StateMenu.hx",162,0x3fe85c8e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","StateMenu.hx",165,0x3fe85c8e)
			{
				HX_STACK_LINE(165)
				::StatePlay tmp1 = ::StatePlay_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(165)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(165)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(165)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(165)
				if ((tmp4)){
					HX_STACK_LINE(165)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(165)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(164)
		tmp->fade((int)-16777216,((Float).33),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateMenu_obj,ClickPlayVoid,(void))


StateMenu_obj::StateMenu_obj()
{
}

void StateMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateMenu);
	HX_MARK_MEMBER_NAME(optionFlxButton,"optionFlxButton");
	HX_MARK_MEMBER_NAME(playFlxButton,"playFlxButton");
	HX_MARK_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_MARK_MEMBER_NAME(exitFlxButton,"exitFlxButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StateMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(optionFlxButton,"optionFlxButton");
	HX_VISIT_MEMBER_NAME(playFlxButton,"playFlxButton");
	HX_VISIT_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_VISIT_MEMBER_NAME(exitFlxButton,"exitFlxButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StateMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { return titleFlxText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playFlxButton") ) { return playFlxButton; }
		if (HX_FIELD_EQ(inName,"exitFlxButton") ) { return exitFlxButton; }
		if (HX_FIELD_EQ(inName,"ClickPlayVoid") ) { return ClickPlayVoid_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"optionFlxButton") ) { return optionFlxButton; }
		if (HX_FIELD_EQ(inName,"ClickOptionVoid") ) { return ClickOptionVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { titleFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playFlxButton") ) { playFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitFlxButton") ) { exitFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"optionFlxButton") ) { optionFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optionFlxButton","\xcf","\xf1","\xea","\x33"));
	outFields->push(HX_HCSTRING("playFlxButton","\x70","\xcf","\x41","\x54"));
	outFields->push(HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"));
	outFields->push(HX_HCSTRING("exitFlxButton","\x06","\x91","\x74","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateMenu_obj,optionFlxButton),HX_HCSTRING("optionFlxButton","\xcf","\xf1","\xea","\x33")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateMenu_obj,playFlxButton),HX_HCSTRING("playFlxButton","\x70","\xcf","\x41","\x54")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateMenu_obj,titleFlxText),HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateMenu_obj,exitFlxButton),HX_HCSTRING("exitFlxButton","\x06","\x91","\x74","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optionFlxButton","\xcf","\xf1","\xea","\x33"),
	HX_HCSTRING("playFlxButton","\x70","\xcf","\x41","\x54"),
	HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"),
	HX_HCSTRING("exitFlxButton","\x06","\x91","\x74","\xaf"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("ClickOptionVoid","\xb1","\xd3","\x8b","\x8f"),
	HX_HCSTRING("ClickPlayVoid","\xb0","\x37","\x29","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class StateMenu_obj::__mClass;

void StateMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StateMenu","\x30","\xa4","\xd3","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StateMenu_obj >;
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

