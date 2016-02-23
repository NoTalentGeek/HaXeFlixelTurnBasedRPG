#include <hxcpp.h>

#ifndef INCLUDED_EnumOutcome
#include <EnumOutcome.h>
#endif
#ifndef INCLUDED_ObjectCoin
#include <ObjectCoin.h>
#endif
#ifndef INCLUDED_ObjectEnemy
#include <ObjectEnemy.h>
#endif
#ifndef INCLUDED_ObjectHUD
#include <ObjectHUD.h>
#endif
#ifndef INCLUDED_ObjectHUDCombat
#include <ObjectHUDCombat.h>
#endif
#ifndef INCLUDED_ObjectPlayer
#include <ObjectPlayer.h>
#endif
#ifndef INCLUDED_StateGameOver
#include <StateGameOver.h>
#endif
#ifndef INCLUDED_StatePlay
#include <StatePlay.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
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

Void StatePlay_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("StatePlay","new",0x951153f7,"StatePlay.new","StatePlay.hx",24,0x0f979759)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(39)
	this->moneyInt = (int)0;
	HX_STACK_LINE(37)
	this->inCombatBool = false;
	HX_STACK_LINE(34)
	this->healthInt = (int)3;
	HX_STACK_LINE(24)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
}
;
	return null();
}

//StatePlay_obj::~StatePlay_obj() { }

Dynamic StatePlay_obj::__CreateEmpty() { return  new StatePlay_obj; }
hx::ObjectPtr< StatePlay_obj > StatePlay_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< StatePlay_obj > _result_ = new StatePlay_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic StatePlay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatePlay_obj > _result_ = new StatePlay_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void StatePlay_obj::create( ){
{
		HX_STACK_FRAME("StatePlay","create",0xb634fbc5,"StatePlay.create","StatePlay.hx",58,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		this->coinFlxTypedGroup = tmp;
		HX_STACK_LINE(61)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		this->enemyFlxTypedGroup = tmp1;
		HX_STACK_LINE(62)
		::ObjectHUD tmp2 = ::ObjectHUD_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		this->hudObjectHUD = tmp2;
		HX_STACK_LINE(63)
		::ObjectHUDCombat tmp3 = ::ObjectHUDCombat_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		this->hudObjectHUDCombat = tmp3;
		HX_STACK_LINE(67)
		::ObjectPlayer tmp4 = ::ObjectPlayer_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		this->playerObjectPlayer = tmp4;
		HX_STACK_LINE(68)
		::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		::ObjectPlayer tmp6 = this->playerObjectPlayer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		tmp5->follow(tmp6,::flixel::FlxCameraFollowStyle_obj::TOPDOWN,(int)1);
		HX_STACK_LINE(72)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp7 = ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__new(HX_HCSTRING("assets/data/room-001.oel","\xe0","\x98","\x2c","\x9a"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		this->mapFlxOgmoLoader = tmp7;
		HX_STACK_LINE(73)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp8 = this->mapFlxOgmoLoader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		Dynamic tmp9 = this->PlaceEntityVoid_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		tmp8->loadEntities(tmp9,HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
		HX_STACK_LINE(77)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp10 = this->mapFlxOgmoLoader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		::flixel::tile::FlxTilemap tmp11 = tmp10->loadTilemap(HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5"),(int)16,(int)16,HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		this->wallFlxTilemap = tmp11;
		HX_STACK_LINE(83)
		::flixel::tile::FlxTilemap tmp12 = this->wallFlxTilemap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		tmp12->follow(null(),null(),null());
		HX_STACK_LINE(84)
		::flixel::tile::FlxTilemap tmp13 = this->wallFlxTilemap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		tmp13->setTileProperties((int)1,(int)0,null(),null(),null());
		HX_STACK_LINE(85)
		::flixel::tile::FlxTilemap tmp14 = this->wallFlxTilemap;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		tmp14->setTileProperties((int)2,(int)4369,null(),null(),null());
		HX_STACK_LINE(89)
		::flixel::tile::FlxTilemap tmp15 = this->wallFlxTilemap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(89)
		this->add(tmp15);
		HX_STACK_LINE(90)
		::flixel::group::FlxTypedGroup tmp16 = this->coinFlxTypedGroup;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(90)
		this->add(tmp16);
		HX_STACK_LINE(91)
		::flixel::group::FlxTypedGroup tmp17 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		this->add(tmp17);
		HX_STACK_LINE(92)
		::ObjectPlayer tmp18 = this->playerObjectPlayer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(92)
		this->add(tmp18);
		HX_STACK_LINE(93)
		::ObjectHUD tmp19 = this->hudObjectHUD;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(93)
		this->add(tmp19);
		HX_STACK_LINE(94)
		::ObjectHUDCombat tmp20 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(94)
		this->add(tmp20);
		HX_STACK_LINE(109)
		::flixel::input::mouse::FlxMouse tmp21 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(109)
		tmp21->set_visible(false);
		HX_STACK_LINE(115)
		::flixel::_system::frontEnds::SoundFrontEnd tmp22 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(115)
		::flixel::_system::FlxSound tmp23 = tmp22->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/coin.wav","\xee","\x74","\x61","\x6a"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(115)
		this->coinFlxCoin = tmp23;
		HX_STACK_LINE(116)
		::flixel::FlxCamera tmp24 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(116)
		tmp24->fade((int)-16777216,((Float).33),true,null(),null());
		HX_STACK_LINE(118)
		this->super::create();
	}
return null();
}


Void StatePlay_obj::destroy( ){
{
		HX_STACK_FRAME("StatePlay","destroy",0xcb42c811,"StatePlay.destroy","StatePlay.hx",128,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->super::destroy();
		HX_STACK_LINE(132)
		::flixel::_system::FlxSound tmp = this->coinFlxCoin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		::flixel::_system::FlxSound tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		this->coinFlxCoin = tmp1;
		HX_STACK_LINE(133)
		::flixel::group::FlxTypedGroup tmp2 = this->coinFlxTypedGroup;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::flixel::group::FlxTypedGroup tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		this->coinFlxTypedGroup = tmp3;
		HX_STACK_LINE(134)
		::flixel::group::FlxTypedGroup tmp4 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::flixel::group::FlxTypedGroup tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		this->enemyFlxTypedGroup = tmp5;
		HX_STACK_LINE(135)
		::ObjectHUD tmp6 = this->hudObjectHUD;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		::ObjectHUD tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		this->hudObjectHUD = tmp7;
		HX_STACK_LINE(136)
		::ObjectHUDCombat tmp8 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		::ObjectHUDCombat tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		this->hudObjectHUDCombat = tmp9;
		HX_STACK_LINE(137)
		::ObjectPlayer tmp10 = this->playerObjectPlayer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		::ObjectPlayer tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		this->playerObjectPlayer = tmp11;
		HX_STACK_LINE(138)
		::flixel::tile::FlxTilemap tmp12 = this->wallFlxTilemap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(138)
		::flixel::tile::FlxTilemap tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(138)
		this->wallFlxTilemap = tmp13;
	}
return null();
}


Void StatePlay_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("StatePlay","update",0xc12b1ad2,"StatePlay.update","StatePlay.hx",154,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(156)
		Float tmp = _elapsedFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		this->super::update(tmp);
		HX_STACK_LINE(158)
		bool tmp1 = this->endingBool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(160)
		bool tmp2 = this->inCombatBool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		if ((tmp3)){
			HX_STACK_LINE(162)
			::ObjectPlayer tmp4 = this->playerObjectPlayer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			::flixel::tile::FlxTilemap tmp5 = this->wallFlxTilemap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			Dynamic tmp6 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			::flixel::FlxG_obj::overlap(tmp4,tmp5,null(),tmp6);
			HX_STACK_LINE(163)
			::ObjectPlayer tmp7 = this->playerObjectPlayer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			::flixel::group::FlxTypedGroup tmp8 = this->coinFlxTypedGroup;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(163)
			Dynamic tmp9 = this->CollisionCoinPlayerVoid_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			::flixel::FlxG_obj::overlap(tmp7,tmp8,tmp9,null());
			HX_STACK_LINE(164)
			::flixel::group::FlxTypedGroup tmp10 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			::flixel::tile::FlxTilemap tmp11 = this->wallFlxTilemap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(164)
			Dynamic tmp12 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(164)
			::flixel::FlxG_obj::overlap(tmp10,tmp11,null(),tmp12);
			HX_STACK_LINE(165)
			::flixel::group::FlxTypedGroup tmp13 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(165)
			Dynamic tmp14 = this->CheckEnemyVisionVoid_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(165)
			tmp13->forEachAlive(tmp14,null());
			HX_STACK_LINE(166)
			::ObjectPlayer tmp15 = this->playerObjectPlayer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(166)
			::flixel::group::FlxTypedGroup tmp16 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(166)
			Dynamic tmp17 = this->CollisionEnemyPlayerVoid_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(166)
			::flixel::FlxG_obj::overlap(tmp15,tmp16,tmp17,null());
		}
		else{
			HX_STACK_LINE(169)
			::ObjectHUDCombat tmp4 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			bool tmp5 = tmp4->visible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			if ((tmp6)){
				HX_STACK_LINE(171)
				::ObjectHUDCombat tmp7 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(171)
				this->healthInt = tmp7->playerHealthInt;
				HX_STACK_LINE(172)
				::ObjectHUD tmp8 = this->hudObjectHUD;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				int tmp9 = this->healthInt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				int tmp10 = this->moneyInt;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				tmp8->UpdateVoid(tmp9,tmp10);
				HX_STACK_LINE(174)
				::ObjectHUDCombat tmp11 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				::EnumOutcome tmp12 = tmp11->outcomeEnumOutcome;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				bool tmp13 = (tmp12 == ::EnumOutcome_obj::DEFEAT);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				if ((tmp13)){
					HX_STACK_LINE(176)
					this->endingBool = true;
					HX_STACK_LINE(177)
					::flixel::FlxCamera tmp14 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(177)
					Dynamic tmp15 = this->DoneFadeOutVoid_dyn();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(177)
					tmp14->fade((int)-16777216,((Float).33),false,tmp15,null());
				}
				else{
					HX_STACK_LINE(182)
					::ObjectHUDCombat tmp14 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					::EnumOutcome tmp15 = tmp14->outcomeEnumOutcome;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					bool tmp16 = (tmp15 == ::EnumOutcome_obj::VICTORY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					if ((tmp16)){
						HX_STACK_LINE(184)
						::ObjectHUDCombat tmp17 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(184)
						tmp17->passedObjectEnemy->kill();
						HX_STACK_LINE(186)
						::ObjectHUDCombat tmp18 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(186)
						int tmp19 = tmp18->passedObjectEnemy->enemyTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(186)
						bool tmp20 = (tmp19 == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(186)
						if ((tmp20)){
							HX_STACK_LINE(187)
							this->endingBool = true;
							HX_STACK_LINE(188)
							this->winBool = true;
							HX_STACK_LINE(189)
							::flixel::FlxCamera tmp21 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(189)
							Dynamic tmp22 = this->DoneFadeOutVoid_dyn();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(189)
							tmp21->fade((int)-16777216,((Float).33),false,tmp22,null());
						}
					}
					else{
						HX_STACK_LINE(193)
						Float Duration = (int)1;		HX_STACK_VAR(Duration,"Duration");
						HX_STACK_LINE(193)
						Float Interval = ((Float)0.04);		HX_STACK_VAR(Interval,"Interval");
						HX_STACK_LINE(193)
						bool EndVisibility = true;		HX_STACK_VAR(EndVisibility,"EndVisibility");
						HX_STACK_LINE(193)
						bool ForceRestart = true;		HX_STACK_VAR(ForceRestart,"ForceRestart");
						HX_STACK_LINE(193)
						::ObjectHUDCombat tmp17 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(193)
						::ObjectEnemy tmp18 = tmp17->passedObjectEnemy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(193)
						Float tmp19 = Duration;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(193)
						Float tmp20 = Interval;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(193)
						bool tmp21 = EndVisibility;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(193)
						bool tmp22 = ForceRestart;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(193)
						::flixel::effects::FlxFlicker_obj::flicker(tmp18,tmp19,tmp20,tmp21,tmp22,null(),null());
					}
					HX_STACK_LINE(203)
					::flixel::group::FlxTypedGroup tmp17 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(203)
					tmp17->set_active(true);
					HX_STACK_LINE(204)
					this->inCombatBool = false;
					HX_STACK_LINE(205)
					::ObjectPlayer tmp18 = this->playerObjectPlayer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(205)
					tmp18->set_active(true);
				}
			}
		}
	}
return null();
}


Void StatePlay_obj::CheckEnemyVisionVoid( ::ObjectEnemy _passedObjectEnemy){
{
		HX_STACK_FRAME("StatePlay","CheckEnemyVisionVoid",0x4d0dd685,"StatePlay.CheckEnemyVisionVoid","StatePlay.hx",219,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_passedObjectEnemy,"_passedObjectEnemy")
		HX_STACK_LINE(221)
		::flixel::tile::FlxTilemap tmp = this->wallFlxTilemap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp1 = _passedObjectEnemy->getMidpoint(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		::ObjectPlayer tmp2 = this->playerObjectPlayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp3 = tmp2->getMidpoint(null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		bool tmp4 = tmp->ray(tmp1,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		if ((tmp4)){
			HX_STACK_LINE(223)
			_passedObjectEnemy->seePlayerBool = true;
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::flixel::math::FlxPoint _this = _passedObjectEnemy->playerPositionFlxPoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(224)
				::ObjectPlayer tmp5 = this->playerObjectPlayer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(224)
				::flixel::math::FlxPoint tmp6 = tmp5->getMidpoint(null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(224)
				::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(224)
				Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(224)
				_this->set_x(tmp7);
				HX_STACK_LINE(224)
				Float tmp8 = point->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(224)
				_this->set_y(tmp8);
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					bool tmp9 = point->_weak;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(224)
					if ((tmp9)){
						HX_STACK_LINE(224)
						point->put();
					}
				}
				HX_STACK_LINE(224)
				_this;
			}
		}
		else{
			HX_STACK_LINE(227)
			_passedObjectEnemy->seePlayerBool = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,CheckEnemyVisionVoid,(void))

Void StatePlay_obj::CollisionCoinPlayerVoid( ::ObjectPlayer _playerObjectPlayer,::ObjectCoin _coinObjectCoin){
{
		HX_STACK_FRAME("StatePlay","CollisionCoinPlayerVoid",0x32bf194f,"StatePlay.CollisionCoinPlayerVoid","StatePlay.hx",237,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_playerObjectPlayer,"_playerObjectPlayer")
		HX_STACK_ARG(_coinObjectCoin,"_coinObjectCoin")
		HX_STACK_LINE(239)
		bool tmp = _playerObjectPlayer->alive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		if ((tmp1)){
			HX_STACK_LINE(239)
			tmp2 = _playerObjectPlayer->exists;
		}
		else{
			HX_STACK_LINE(239)
			tmp2 = false;
		}
		HX_STACK_LINE(239)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		if ((tmp3)){
			HX_STACK_LINE(239)
			tmp4 = _coinObjectCoin->alive;
		}
		else{
			HX_STACK_LINE(239)
			tmp4 = false;
		}
		HX_STACK_LINE(239)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		if ((tmp4)){
			HX_STACK_LINE(239)
			tmp5 = _coinObjectCoin->exists;
		}
		else{
			HX_STACK_LINE(239)
			tmp5 = false;
		}
		HX_STACK_LINE(239)
		if ((tmp5)){
			HX_STACK_LINE(241)
			_coinObjectCoin->kill();
			HX_STACK_LINE(242)
			::flixel::_system::FlxSound tmp6 = this->coinFlxCoin;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			HX_STACK_LINE(243)
			::ObjectHUD tmp7 = this->hudObjectHUD;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(243)
			int tmp8 = this->healthInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(243)
			int tmp9 = this->moneyInt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(243)
			tmp7->UpdateVoid(tmp8,tmp9);
			HX_STACK_LINE(244)
			(this->moneyInt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StatePlay_obj,CollisionCoinPlayerVoid,(void))

Void StatePlay_obj::CollisionEnemyPlayerVoid( ::ObjectPlayer _playerObjectPlayer,::ObjectEnemy _enemyObjectEnemy){
{
		HX_STACK_FRAME("StatePlay","CollisionEnemyPlayerVoid",0xadde8694,"StatePlay.CollisionEnemyPlayerVoid","StatePlay.hx",257,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_playerObjectPlayer,"_playerObjectPlayer")
		HX_STACK_ARG(_enemyObjectEnemy,"_enemyObjectEnemy")
		HX_STACK_LINE(260)
		::ObjectEnemy tmp = _enemyObjectEnemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = ::flixel::effects::FlxFlicker_obj::isFlickering(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		if ((tmp4)){
			HX_STACK_LINE(261)
			tmp5 = _enemyObjectEnemy->alive;
		}
		else{
			HX_STACK_LINE(260)
			tmp5 = false;
		}
		HX_STACK_LINE(260)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		if ((tmp6)){
			HX_STACK_LINE(262)
			tmp7 = _enemyObjectEnemy->exists;
		}
		else{
			HX_STACK_LINE(260)
			tmp7 = false;
		}
		HX_STACK_LINE(260)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		if ((tmp8)){
			HX_STACK_LINE(263)
			tmp9 = _playerObjectPlayer->alive;
		}
		else{
			HX_STACK_LINE(260)
			tmp9 = false;
		}
		HX_STACK_LINE(260)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(260)
		if ((tmp9)){
			HX_STACK_LINE(264)
			tmp10 = _playerObjectPlayer->exists;
		}
		else{
			HX_STACK_LINE(260)
			tmp10 = false;
		}
		HX_STACK_LINE(259)
		if ((tmp10)){
			HX_STACK_LINE(265)
			::ObjectEnemy tmp11 = _enemyObjectEnemy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(265)
			this->StartCombatVoid(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StatePlay_obj,CollisionEnemyPlayerVoid,(void))

Void StatePlay_obj::DoneFadeOutVoid( ){
{
		HX_STACK_FRAME("StatePlay","DoneFadeOutVoid",0x76ffad7b,"StatePlay.DoneFadeOutVoid","StatePlay.hx",275,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(275)
		bool tmp = this->winBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		int tmp1 = this->moneyInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		::StateGameOver tmp2 = ::StateGameOver_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(275)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		if ((tmp5)){
			HX_STACK_LINE(275)
			::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			tmp6->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatePlay_obj,DoneFadeOutVoid,(void))

Void StatePlay_obj::PlaceEntityVoid( ::String _entityNameString,::Xml _entityDataXml){
{
		HX_STACK_FRAME("StatePlay","PlaceEntityVoid",0xfa7e39b5,"StatePlay.PlaceEntityVoid","StatePlay.hx",283,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_entityNameString,"_entityNameString")
		HX_STACK_ARG(_entityDataXml,"_entityDataXml")
		HX_STACK_LINE(285)
		::String tmp = _entityDataXml->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		int xInt = tmp1;		HX_STACK_VAR(xInt,"xInt");
		HX_STACK_LINE(286)
		::String tmp2 = _entityDataXml->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		int yInt = tmp3;		HX_STACK_VAR(yInt,"yInt");
		HX_STACK_LINE(288)
		bool tmp4 = (_entityNameString == HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(288)
		if ((tmp4)){
			HX_STACK_LINE(290)
			::ObjectPlayer tmp5 = this->playerObjectPlayer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			int tmp6 = xInt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			tmp5->set_x(tmp6);
			HX_STACK_LINE(291)
			::ObjectPlayer tmp7 = this->playerObjectPlayer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			int tmp8 = yInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			tmp7->set_y(tmp8);
		}
		else{
			HX_STACK_LINE(294)
			bool tmp5 = (_entityNameString == HX_HCSTRING("coin","\x91","\xb5","\xc4","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			if ((tmp5)){
				HX_STACK_LINE(296)
				::flixel::group::FlxTypedGroup tmp6 = this->coinFlxTypedGroup;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				int tmp7 = (xInt + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(296)
				int tmp8 = (yInt + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(296)
				::ObjectCoin tmp9 = ::ObjectCoin_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				tmp6->add(tmp9);
			}
			else{
				HX_STACK_LINE(299)
				bool tmp6 = (_entityNameString == HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				if ((tmp6)){
					HX_STACK_LINE(301)
					::flixel::group::FlxTypedGroup tmp7 = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					int tmp8 = (xInt + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					int tmp9 = yInt;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(301)
					::String tmp10 = _entityDataXml->get(HX_HCSTRING("etype","\x9f","\x89","\x81","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(301)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(301)
					::ObjectEnemy tmp12 = ::ObjectEnemy_obj::__new(tmp8,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(301)
					tmp7->add(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StatePlay_obj,PlaceEntityVoid,(void))

Void StatePlay_obj::StartCombatVoid( ::ObjectEnemy _enemyObjectEnemy){
{
		HX_STACK_FRAME("StatePlay","StartCombatVoid",0x5b37c2a1,"StatePlay.StartCombatVoid","StatePlay.hx",313,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enemyObjectEnemy,"_enemyObjectEnemy")
		HX_STACK_LINE(315)
		this->inCombatBool = true;
		HX_STACK_LINE(316)
		::flixel::group::FlxTypedGroup tmp = this->enemyFlxTypedGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		tmp->set_active(false);
		HX_STACK_LINE(317)
		::ObjectPlayer tmp1 = this->playerObjectPlayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		tmp1->set_active(false);
		HX_STACK_LINE(319)
		::ObjectHUDCombat tmp2 = this->hudObjectHUDCombat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		int tmp3 = this->healthInt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		::ObjectEnemy tmp4 = _enemyObjectEnemy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		tmp2->InitCombatVoid(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,StartCombatVoid,(void))


StatePlay_obj::StatePlay_obj()
{
}

void StatePlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatePlay);
	HX_MARK_MEMBER_NAME(coinFlxCoin,"coinFlxCoin");
	HX_MARK_MEMBER_NAME(coinFlxTypedGroup,"coinFlxTypedGroup");
	HX_MARK_MEMBER_NAME(endingBool,"endingBool");
	HX_MARK_MEMBER_NAME(enemyFlxTypedGroup,"enemyFlxTypedGroup");
	HX_MARK_MEMBER_NAME(healthInt,"healthInt");
	HX_MARK_MEMBER_NAME(hudObjectHUD,"hudObjectHUD");
	HX_MARK_MEMBER_NAME(hudObjectHUDCombat,"hudObjectHUDCombat");
	HX_MARK_MEMBER_NAME(inCombatBool,"inCombatBool");
	HX_MARK_MEMBER_NAME(mapFlxOgmoLoader,"mapFlxOgmoLoader");
	HX_MARK_MEMBER_NAME(moneyInt,"moneyInt");
	HX_MARK_MEMBER_NAME(pauseBool,"pauseBool");
	HX_MARK_MEMBER_NAME(playerObjectPlayer,"playerObjectPlayer");
	HX_MARK_MEMBER_NAME(wallFlxTilemap,"wallFlxTilemap");
	HX_MARK_MEMBER_NAME(winBool,"winBool");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatePlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(coinFlxCoin,"coinFlxCoin");
	HX_VISIT_MEMBER_NAME(coinFlxTypedGroup,"coinFlxTypedGroup");
	HX_VISIT_MEMBER_NAME(endingBool,"endingBool");
	HX_VISIT_MEMBER_NAME(enemyFlxTypedGroup,"enemyFlxTypedGroup");
	HX_VISIT_MEMBER_NAME(healthInt,"healthInt");
	HX_VISIT_MEMBER_NAME(hudObjectHUD,"hudObjectHUD");
	HX_VISIT_MEMBER_NAME(hudObjectHUDCombat,"hudObjectHUDCombat");
	HX_VISIT_MEMBER_NAME(inCombatBool,"inCombatBool");
	HX_VISIT_MEMBER_NAME(mapFlxOgmoLoader,"mapFlxOgmoLoader");
	HX_VISIT_MEMBER_NAME(moneyInt,"moneyInt");
	HX_VISIT_MEMBER_NAME(pauseBool,"pauseBool");
	HX_VISIT_MEMBER_NAME(playerObjectPlayer,"playerObjectPlayer");
	HX_VISIT_MEMBER_NAME(wallFlxTilemap,"wallFlxTilemap");
	HX_VISIT_MEMBER_NAME(winBool,"winBool");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatePlay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winBool") ) { return winBool; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moneyInt") ) { return moneyInt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthInt") ) { return healthInt; }
		if (HX_FIELD_EQ(inName,"pauseBool") ) { return pauseBool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endingBool") ) { return endingBool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coinFlxCoin") ) { return coinFlxCoin; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hudObjectHUD") ) { return hudObjectHUD; }
		if (HX_FIELD_EQ(inName,"inCombatBool") ) { return inCombatBool; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wallFlxTilemap") ) { return wallFlxTilemap; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DoneFadeOutVoid") ) { return DoneFadeOutVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"PlaceEntityVoid") ) { return PlaceEntityVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"StartCombatVoid") ) { return StartCombatVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapFlxOgmoLoader") ) { return mapFlxOgmoLoader; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"coinFlxTypedGroup") ) { return coinFlxTypedGroup; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemyFlxTypedGroup") ) { return enemyFlxTypedGroup; }
		if (HX_FIELD_EQ(inName,"hudObjectHUDCombat") ) { return hudObjectHUDCombat; }
		if (HX_FIELD_EQ(inName,"playerObjectPlayer") ) { return playerObjectPlayer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CheckEnemyVisionVoid") ) { return CheckEnemyVisionVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"CollisionCoinPlayerVoid") ) { return CollisionCoinPlayerVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"CollisionEnemyPlayerVoid") ) { return CollisionEnemyPlayerVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatePlay_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"winBool") ) { winBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moneyInt") ) { moneyInt=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthInt") ) { healthInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseBool") ) { pauseBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endingBool") ) { endingBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coinFlxCoin") ) { coinFlxCoin=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hudObjectHUD") ) { hudObjectHUD=inValue.Cast< ::ObjectHUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inCombatBool") ) { inCombatBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wallFlxTilemap") ) { wallFlxTilemap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapFlxOgmoLoader") ) { mapFlxOgmoLoader=inValue.Cast< ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"coinFlxTypedGroup") ) { coinFlxTypedGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemyFlxTypedGroup") ) { enemyFlxTypedGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hudObjectHUDCombat") ) { hudObjectHUDCombat=inValue.Cast< ::ObjectHUDCombat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerObjectPlayer") ) { playerObjectPlayer=inValue.Cast< ::ObjectPlayer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatePlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("coinFlxCoin","\x92","\x7d","\x1b","\x21"));
	outFields->push(HX_HCSTRING("coinFlxTypedGroup","\x36","\x31","\xe7","\x5e"));
	outFields->push(HX_HCSTRING("endingBool","\xb1","\xd3","\x9a","\x5c"));
	outFields->push(HX_HCSTRING("enemyFlxTypedGroup","\x1f","\xee","\x4d","\x2a"));
	outFields->push(HX_HCSTRING("healthInt","\xb3","\xe5","\x97","\x42"));
	outFields->push(HX_HCSTRING("hudObjectHUD","\x81","\x2f","\xcf","\x9d"));
	outFields->push(HX_HCSTRING("hudObjectHUDCombat","\x95","\xca","\xe7","\xc3"));
	outFields->push(HX_HCSTRING("inCombatBool","\xc3","\xfa","\xff","\x25"));
	outFields->push(HX_HCSTRING("mapFlxOgmoLoader","\x03","\x69","\xbd","\xcb"));
	outFields->push(HX_HCSTRING("moneyInt","\x8f","\xf2","\x35","\xd5"));
	outFields->push(HX_HCSTRING("pauseBool","\x40","\x3a","\x82","\x45"));
	outFields->push(HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6"));
	outFields->push(HX_HCSTRING("wallFlxTilemap","\x86","\x77","\xd3","\x7b"));
	outFields->push(HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(StatePlay_obj,coinFlxCoin),HX_HCSTRING("coinFlxCoin","\x92","\x7d","\x1b","\x21")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(StatePlay_obj,coinFlxTypedGroup),HX_HCSTRING("coinFlxTypedGroup","\x36","\x31","\xe7","\x5e")},
	{hx::fsBool,(int)offsetof(StatePlay_obj,endingBool),HX_HCSTRING("endingBool","\xb1","\xd3","\x9a","\x5c")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(StatePlay_obj,enemyFlxTypedGroup),HX_HCSTRING("enemyFlxTypedGroup","\x1f","\xee","\x4d","\x2a")},
	{hx::fsInt,(int)offsetof(StatePlay_obj,healthInt),HX_HCSTRING("healthInt","\xb3","\xe5","\x97","\x42")},
	{hx::fsObject /*::ObjectHUD*/ ,(int)offsetof(StatePlay_obj,hudObjectHUD),HX_HCSTRING("hudObjectHUD","\x81","\x2f","\xcf","\x9d")},
	{hx::fsObject /*::ObjectHUDCombat*/ ,(int)offsetof(StatePlay_obj,hudObjectHUDCombat),HX_HCSTRING("hudObjectHUDCombat","\x95","\xca","\xe7","\xc3")},
	{hx::fsBool,(int)offsetof(StatePlay_obj,inCombatBool),HX_HCSTRING("inCombatBool","\xc3","\xfa","\xff","\x25")},
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(StatePlay_obj,mapFlxOgmoLoader),HX_HCSTRING("mapFlxOgmoLoader","\x03","\x69","\xbd","\xcb")},
	{hx::fsInt,(int)offsetof(StatePlay_obj,moneyInt),HX_HCSTRING("moneyInt","\x8f","\xf2","\x35","\xd5")},
	{hx::fsBool,(int)offsetof(StatePlay_obj,pauseBool),HX_HCSTRING("pauseBool","\x40","\x3a","\x82","\x45")},
	{hx::fsObject /*::ObjectPlayer*/ ,(int)offsetof(StatePlay_obj,playerObjectPlayer),HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(StatePlay_obj,wallFlxTilemap),HX_HCSTRING("wallFlxTilemap","\x86","\x77","\xd3","\x7b")},
	{hx::fsBool,(int)offsetof(StatePlay_obj,winBool),HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("coinFlxCoin","\x92","\x7d","\x1b","\x21"),
	HX_HCSTRING("coinFlxTypedGroup","\x36","\x31","\xe7","\x5e"),
	HX_HCSTRING("endingBool","\xb1","\xd3","\x9a","\x5c"),
	HX_HCSTRING("enemyFlxTypedGroup","\x1f","\xee","\x4d","\x2a"),
	HX_HCSTRING("healthInt","\xb3","\xe5","\x97","\x42"),
	HX_HCSTRING("hudObjectHUD","\x81","\x2f","\xcf","\x9d"),
	HX_HCSTRING("hudObjectHUDCombat","\x95","\xca","\xe7","\xc3"),
	HX_HCSTRING("inCombatBool","\xc3","\xfa","\xff","\x25"),
	HX_HCSTRING("mapFlxOgmoLoader","\x03","\x69","\xbd","\xcb"),
	HX_HCSTRING("moneyInt","\x8f","\xf2","\x35","\xd5"),
	HX_HCSTRING("pauseBool","\x40","\x3a","\x82","\x45"),
	HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6"),
	HX_HCSTRING("wallFlxTilemap","\x86","\x77","\xd3","\x7b"),
	HX_HCSTRING("winBool","\x66","\x96","\xfb","\xd1"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("CheckEnemyVisionVoid","\xfc","\xd3","\x3c","\x0a"),
	HX_HCSTRING("CollisionCoinPlayerVoid","\x38","\xa0","\xf4","\xef"),
	HX_HCSTRING("CollisionEnemyPlayerVoid","\x8b","\x0b","\x7f","\x7f"),
	HX_HCSTRING("DoneFadeOutVoid","\x64","\xa3","\xff","\x95"),
	HX_HCSTRING("PlaceEntityVoid","\x9e","\x2f","\x7e","\x19"),
	HX_HCSTRING("StartCombatVoid","\x8a","\xb8","\x37","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatePlay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatePlay_obj::__mClass,"__mClass");
};

#endif

hx::Class StatePlay_obj::__mClass;

void StatePlay_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StatePlay","\x85","\x8c","\xd4","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatePlay_obj >;
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

