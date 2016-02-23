#include <hxcpp.h>

#ifndef INCLUDED_StateGameOver
#include <StateGameOver.h>
#endif
#ifndef INCLUDED_StateMenu
#include <StateMenu.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

Void StateGameOver_obj::__construct(bool _winBool,int _scoreInt)
{
HX_STACK_FRAME("StateGameOver","new",0x04ef35e9,"StateGameOver.new","StateGameOver.hx",28,0xd7d7b9a7)
HX_STACK_THIS(this)
HX_STACK_ARG(_winBool,"_winBool")
HX_STACK_ARG(_scoreInt,"_scoreInt")
{
	HX_STACK_LINE(37)
	this->scoreInt = (int)0;
	HX_STACK_LINE(53)
	this->scoreInt = _scoreInt;
	HX_STACK_LINE(54)
	this->winBool = _winBool;
	HX_STACK_LINE(55)
	super::__construct(null());
}
;
	return null();
}

//StateGameOver_obj::~StateGameOver_obj() { }

Dynamic StateGameOver_obj::__CreateEmpty() { return  new StateGameOver_obj; }
hx::ObjectPtr< StateGameOver_obj > StateGameOver_obj::__new(bool _winBool,int _scoreInt)
{  hx::ObjectPtr< StateGameOver_obj > _result_ = new StateGameOver_obj();
	_result_->__construct(_winBool,_scoreInt);
	return _result_;}

Dynamic StateGameOver_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateGameOver_obj > _result_ = new StateGameOver_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void StateGameOver_obj::create( ){
{
		HX_STACK_FRAME("StateGameOver","create",0x276f5d13,"StateGameOver.create","StateGameOver.hx",65,0xd7d7b9a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		tmp->set_visible(true);
		HX_STACK_LINE(77)
		bool tmp1 = this->winBool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		if ((tmp1)){
			HX_STACK_LINE(77)
			tmp2 = HX_HCSTRING("You win!","\x86","\x62","\xe4","\x6d");
		}
		else{
			HX_STACK_LINE(77)
			tmp2 = HX_HCSTRING("Game Over!","\x9f","\x0d","\xf2","\x9a");
		}
		HX_STACK_LINE(75)
		::flixel::text::FlxText tmp3 = ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,tmp2,(int)22,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		this->titleFlxText = tmp3;
		HX_STACK_LINE(80)
		::flixel::text::FlxText tmp4 = this->titleFlxText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		tmp4->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(81)
		::flixel::text::FlxText tmp5 = this->titleFlxText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		tmp5->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(82)
		::flixel::text::FlxText tmp6 = this->titleFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		this->add(tmp6);
		HX_STACK_LINE(88)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		Float tmp9 = (tmp8 - (int)18);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,tmp9,(int)0,HX_HCSTRING("Final score: ","\xae","\xf7","\xb0","\xe2"),(int)8,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		this->messageFlxText = tmp10;
		HX_STACK_LINE(93)
		::flixel::text::FlxText tmp11 = this->messageFlxText;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		tmp11->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(94)
		::flixel::text::FlxText tmp12 = this->messageFlxText;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		tmp12->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(95)
		::flixel::text::FlxText tmp13 = this->messageFlxText;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		this->add(tmp13);
		HX_STACK_LINE(100)
		int tmp14 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(100)
		Float tmp16 = (tmp15 - (int)8);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(99)
		::flixel::FlxSprite tmp17 = ::flixel::FlxSprite_obj::__new(tmp16,(int)0,HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(99)
		this->scoreFlxSprite = tmp17;
		HX_STACK_LINE(104)
		::flixel::FlxSprite tmp18 = this->scoreFlxSprite;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(104)
		tmp18->screenCenter(::flixel::util::FlxAxes_obj::Y);
		HX_STACK_LINE(105)
		::flixel::FlxSprite tmp19 = this->scoreFlxSprite;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(105)
		this->add(tmp19);
		HX_STACK_LINE(110)
		int tmp20 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(110)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(112)
		int tmp22 = this->scoreInt;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(112)
		::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(109)
		::flixel::text::FlxText tmp24 = ::flixel::text::FlxText_obj::__new(tmp21,(int)0,(int)0,tmp23,(int)8,null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(109)
		this->scoreFlxText = tmp24;
		HX_STACK_LINE(115)
		::flixel::text::FlxText tmp25 = this->scoreFlxText;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(115)
		tmp25->screenCenter(::flixel::util::FlxAxes_obj::Y);
		HX_STACK_LINE(116)
		::flixel::text::FlxText tmp26 = this->scoreFlxText;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(116)
		this->add(tmp26);
		HX_STACK_LINE(120)
		int tmp27 = this->scoreInt;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(120)
		int tmp28 = this->CheckHighScoreInt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(120)
		int _hiScore = tmp28;		HX_STACK_VAR(_hiScore,"_hiScore");
		HX_STACK_LINE(123)
		int tmp29 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(123)
		Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(123)
		Float tmp31 = (tmp30 + (int)10);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(125)
		::String tmp32 = (HX_HCSTRING("Hi - score: ","\xc6","\x25","\xb8","\x15") + _hiScore);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(121)
		::flixel::text::FlxText tmp33 = ::flixel::text::FlxText_obj::__new((int)0,tmp31,(int)0,tmp32,(int)8,null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(121)
		this->hiScoreFlxText = tmp33;
		HX_STACK_LINE(128)
		::flixel::text::FlxText tmp34 = this->hiScoreFlxText;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(128)
		tmp34->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(129)
		::flixel::text::FlxText tmp35 = this->hiScoreFlxText;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(129)
		tmp35->screenCenter(::flixel::util::FlxAxes_obj::Y);
		HX_STACK_LINE(130)
		::flixel::text::FlxText tmp36 = this->hiScoreFlxText;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(130)
		this->add(tmp36);
		HX_STACK_LINE(136)
		int tmp37 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(136)
		int tmp38 = (tmp37 - (int)32);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(138)
		Dynamic tmp39 = this->ClickMainMenuVoid_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(134)
		::flixel::ui::FlxButton tmp40 = ::flixel::ui::FlxButton_obj::__new((int)0,tmp38,HX_HCSTRING("Main menu.","\xa8","\xde","\xf7","\xe8"),tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(134)
		this->mainMenuFlxButton = tmp40;
		HX_STACK_LINE(140)
		::flixel::ui::FlxButton tmp41 = this->mainMenuFlxButton;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(140)
		tmp41->screenCenter(::flixel::util::FlxAxes_obj::X);
		HX_STACK_LINE(141)
		::flixel::_system::frontEnds::SoundFrontEnd tmp42 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(141)
		::flixel::_system::FlxSound tmp43 = tmp42->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(141)
		::flixel::ui::FlxButton tmp44 = this->mainMenuFlxButton;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(141)
		tmp44->onUp->sound = tmp43;
		HX_STACK_LINE(142)
		::flixel::ui::FlxButton tmp45 = this->mainMenuFlxButton;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(142)
		this->add(tmp45);
		HX_STACK_LINE(146)
		::flixel::FlxCamera tmp46 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(146)
		tmp46->fade((int)-16777216,((Float)0.33),true,null(),null());
		HX_STACK_LINE(148)
		this->super::create();
	}
return null();
}


Void StateGameOver_obj::destroy( ){
{
		HX_STACK_FRAME("StateGameOver","destroy",0x6d1d8b03,"StateGameOver.destroy","StateGameOver.hx",158,0xd7d7b9a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		::flixel::ui::FlxButton tmp = this->mainMenuFlxButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		::flixel::ui::FlxButton tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		this->mainMenuFlxButton = tmp1;
		HX_STACK_LINE(161)
		::flixel::text::FlxText tmp2 = this->messageFlxText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::flixel::text::FlxText tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		this->messageFlxText = tmp3;
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp4 = this->scoreFlxSprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		this->scoreFlxSprite = tmp5;
		HX_STACK_LINE(163)
		::flixel::text::FlxText tmp6 = this->scoreFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		::flixel::text::FlxText tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		this->scoreFlxText = tmp7;
		HX_STACK_LINE(164)
		::flixel::text::FlxText tmp8 = this->titleFlxText;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		::flixel::text::FlxText tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		this->titleFlxText = tmp9;
	}
return null();
}


int StateGameOver_obj::CheckHighScoreInt( int _scoreInt){
	HX_STACK_FRAME("StateGameOver","CheckHighScoreInt",0x79342a50,"StateGameOver.CheckHighScoreInt","StateGameOver.hx",178,0xd7d7b9a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scoreInt,"_scoreInt")
	HX_STACK_LINE(180)
	int tempScoreInt = _scoreInt;		HX_STACK_VAR(tempScoreInt,"tempScoreInt");
	HX_STACK_LINE(181)
	::flixel::util::FlxSave tmp = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::flixel::util::FlxSave saveFlxSave = tmp;		HX_STACK_VAR(saveFlxSave,"saveFlxSave");
	HX_STACK_LINE(183)
	bool tmp1 = saveFlxSave->bind(HX_HCSTRING("HaXeFlixelTurnBasedRPG","\x95","\xa8","\x0c","\xe6"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(185)
		bool tmp2 = (saveFlxSave->data->__Field(HX_HCSTRING("hiscore","\xb1","\x94","\x0a","\x59"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		if ((tmp2)){
			HX_STACK_LINE(187)
			bool tmp3 = (saveFlxSave->data->__Field(HX_HCSTRING("hiscore","\xb1","\x94","\x0a","\x59"), hx::paccDynamic ) > tempScoreInt);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			if ((tmp3)){
				HX_STACK_LINE(189)
				tempScoreInt = saveFlxSave->data->__Field(HX_HCSTRING("hiscore","\xb1","\x94","\x0a","\x59"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(194)
				saveFlxSave->data->__FieldRef(HX_HCSTRING("hiscore","\xb1","\x94","\x0a","\x59")) = tempScoreInt;
			}
		}
	}
	HX_STACK_LINE(202)
	saveFlxSave->close(null(),null());
	HX_STACK_LINE(204)
	int tmp2 = tempScoreInt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(StateGameOver_obj,CheckHighScoreInt,return )

Void StateGameOver_obj::ClickMainMenuVoid( ){
{
		HX_STACK_FRAME("StateGameOver","ClickMainMenuVoid",0xe3f1bd7d,"StateGameOver.ClickMainMenuVoid","StateGameOver.hx",214,0xd7d7b9a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","StateGameOver.hx",217,0xd7d7b9a7)
			{
				HX_STACK_LINE(217)
				::StateMenu tmp1 = ::StateMenu_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(217)
				::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(217)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(217)
				if ((tmp4)){
					HX_STACK_LINE(217)
					::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(217)
					tmp5->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(216)
		tmp->fade((int)-16777216,((Float).33),false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StateGameOver_obj,ClickMainMenuVoid,(void))


StateGameOver_obj::StateGameOver_obj()
{
}

void StateGameOver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateGameOver);
	HX_MARK_MEMBER_NAME(hiScoreFlxText,"hiScoreFlxText");
	HX_MARK_MEMBER_NAME(mainMenuFlxButton,"mainMenuFlxButton");
	HX_MARK_MEMBER_NAME(messageFlxText,"messageFlxText");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(scoreFlxSprite,"scoreFlxSprite");
	HX_MARK_MEMBER_NAME(scoreFlxText,"scoreFlxText");
	HX_MARK_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_MARK_MEMBER_NAME(winBool,"winBool");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StateGameOver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hiScoreFlxText,"hiScoreFlxText");
	HX_VISIT_MEMBER_NAME(mainMenuFlxButton,"mainMenuFlxButton");
	HX_VISIT_MEMBER_NAME(messageFlxText,"messageFlxText");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(scoreFlxSprite,"scoreFlxSprite");
	HX_VISIT_MEMBER_NAME(scoreFlxText,"scoreFlxText");
	HX_VISIT_MEMBER_NAME(titleFlxText,"titleFlxText");
	HX_VISIT_MEMBER_NAME(winBool,"winBool");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StateGameOver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winBool") ) { return winBool; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { return scoreInt; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreFlxText") ) { return scoreFlxText; }
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { return titleFlxText; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hiScoreFlxText") ) { return hiScoreFlxText; }
		if (HX_FIELD_EQ(inName,"messageFlxText") ) { return messageFlxText; }
		if (HX_FIELD_EQ(inName,"scoreFlxSprite") ) { return scoreFlxSprite; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mainMenuFlxButton") ) { return mainMenuFlxButton; }
		if (HX_FIELD_EQ(inName,"CheckHighScoreInt") ) { return CheckHighScoreInt_dyn(); }
		if (HX_FIELD_EQ(inName,"ClickMainMenuVoid") ) { return ClickMainMenuVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateGameOver_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"winBool") ) { winBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { scoreInt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scoreFlxText") ) { scoreFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleFlxText") ) { titleFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hiScoreFlxText") ) { hiScoreFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"messageFlxText") ) { messageFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreFlxSprite") ) { scoreFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mainMenuFlxButton") ) { mainMenuFlxButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateGameOver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hiScoreFlxText","\xae","\x25","\x75","\x97"));
	outFields->push(HX_HCSTRING("mainMenuFlxButton","\x6c","\x92","\x94","\x85"));
	outFields->push(HX_HCSTRING("messageFlxText","\x38","\x27","\x38","\xff"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("scoreFlxSprite","\x65","\x68","\x3f","\x75"));
	outFields->push(HX_HCSTRING("scoreFlxText","\x0d","\x81","\x05","\x1d"));
	outFields->push(HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"));
	outFields->push(HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateGameOver_obj,hiScoreFlxText),HX_HCSTRING("hiScoreFlxText","\xae","\x25","\x75","\x97")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(StateGameOver_obj,mainMenuFlxButton),HX_HCSTRING("mainMenuFlxButton","\x6c","\x92","\x94","\x85")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateGameOver_obj,messageFlxText),HX_HCSTRING("messageFlxText","\x38","\x27","\x38","\xff")},
	{hx::fsInt,(int)offsetof(StateGameOver_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(StateGameOver_obj,scoreFlxSprite),HX_HCSTRING("scoreFlxSprite","\x65","\x68","\x3f","\x75")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateGameOver_obj,scoreFlxText),HX_HCSTRING("scoreFlxText","\x0d","\x81","\x05","\x1d")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(StateGameOver_obj,titleFlxText),HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33")},
	{hx::fsBool,(int)offsetof(StateGameOver_obj,winBool),HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hiScoreFlxText","\xae","\x25","\x75","\x97"),
	HX_HCSTRING("mainMenuFlxButton","\x6c","\x92","\x94","\x85"),
	HX_HCSTRING("messageFlxText","\x38","\x27","\x38","\xff"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("scoreFlxSprite","\x65","\x68","\x3f","\x75"),
	HX_HCSTRING("scoreFlxText","\x0d","\x81","\x05","\x1d"),
	HX_HCSTRING("titleFlxText","\x87","\x53","\xc7","\x33"),
	HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("CheckHighScoreInt","\x07","\x87","\xa9","\xba"),
	HX_HCSTRING("ClickMainMenuVoid","\x34","\x1a","\x67","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateGameOver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateGameOver_obj::__mClass,"__mClass");
};

#endif

hx::Class StateGameOver_obj::__mClass;

void StateGameOver_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StateGameOver","\x77","\x0d","\xfa","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StateGameOver_obj >;
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

