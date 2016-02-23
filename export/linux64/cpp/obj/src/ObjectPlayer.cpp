#include <hxcpp.h>

#ifndef INCLUDED_ObjectPlayer
#include <ObjectPlayer.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void ObjectPlayer_obj::__construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat)
{
HX_STACK_FRAME("ObjectPlayer","new",0x000b3492,"ObjectPlayer.new","ObjectPlayer.hx",21,0xec7c031e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__xFloat,"_xFloat")
HX_STACK_ARG(__o__yFloat,"_yFloat")
Float _xFloat = __o__xFloat.Default(0);
Float _yFloat = __o__yFloat.Default(0);
{
	HX_STACK_LINE(27)
	this->speedFloat = ((Float)200);
	HX_STACK_LINE(36)
	Float tmp = _xFloat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = _yFloat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(37)
	this->loadGraphic(HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectPlayer.hx",41,0xec7c031e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp2->set((int)1,tmp3);
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectPlayer.hx",42,0xec7c031e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		tmp2->set((int)16,tmp3);
	}
	HX_STACK_LINE(46)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	tmp2->add(HX_HCSTRING("AnimationDown","\x66","\x35","\xaa","\x7c"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)6,false,null(),null());
	HX_STACK_LINE(47)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	tmp3->add(HX_HCSTRING("AnimationLeftRight","\xd1","\x0e","\xf8","\x88"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)3).Add((int)5),(int)6,false,null(),null());
	HX_STACK_LINE(48)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	tmp4->add(HX_HCSTRING("AnimationUp","\x5f","\x9a","\xc4","\x19"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)6).Add((int)8),(int)6,false,null(),null());
	HX_STACK_LINE(52)
	::flixel::math::FlxPoint tmp5 = this->drag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	::flixel::math::FlxPoint tmp6 = this->drag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	Float tmp7 = tmp6->set_y((int)1600);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	tmp5->set_x(tmp7);
	HX_STACK_LINE(53)
	this->setSize((int)8,(int)14);
	HX_STACK_LINE(54)
	::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	tmp8->set((int)4,(int)2);
	HX_STACK_LINE(58)
	::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(58)
	::flixel::_system::FlxSound tmp10 = tmp9->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/step.wav","\x29","\xa0","\xd3","\x5a"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	this->stepFlxSound = tmp10;
}
;
	return null();
}

//ObjectPlayer_obj::~ObjectPlayer_obj() { }

Dynamic ObjectPlayer_obj::__CreateEmpty() { return  new ObjectPlayer_obj; }
hx::ObjectPtr< ObjectPlayer_obj > ObjectPlayer_obj::__new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat)
{  hx::ObjectPtr< ObjectPlayer_obj > _result_ = new ObjectPlayer_obj();
	_result_->__construct(__o__xFloat,__o__yFloat);
	return _result_;}

Dynamic ObjectPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectPlayer_obj > _result_ = new ObjectPlayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ObjectPlayer_obj::destroy( ){
{
		HX_STACK_FRAME("ObjectPlayer","destroy",0xa7c8922c,"ObjectPlayer.destroy","ObjectPlayer.hx",68,0xec7c031e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->super::destroy();
		HX_STACK_LINE(71)
		::flixel::_system::FlxSound tmp = this->stepFlxSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::flixel::_system::FlxSound tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		this->stepFlxSound = tmp1;
	}
return null();
}


Void ObjectPlayer_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("ObjectPlayer","update",0x2e114d17,"ObjectPlayer.update","ObjectPlayer.hx",82,0xec7c031e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(84)
		this->MovementVoid();
		HX_STACK_LINE(85)
		Float tmp = _elapsedFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		this->super::update(tmp);
	}
return null();
}


Void ObjectPlayer_obj::MovementVoid( ){
{
		HX_STACK_FRAME("ObjectPlayer","MovementVoid",0xbaba09d1,"ObjectPlayer.MovementVoid","ObjectPlayer.hx",96,0xec7c031e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		bool downBool = false;		HX_STACK_VAR(downBool,"downBool");
		HX_STACK_LINE(99)
		bool leftBool = false;		HX_STACK_VAR(leftBool,"leftBool");
		HX_STACK_LINE(100)
		bool rightBool = false;		HX_STACK_VAR(rightBool,"rightBool");
		HX_STACK_LINE(101)
		bool upBool = false;		HX_STACK_VAR(upBool,"upBool");
		HX_STACK_LINE(105)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = tmp->checkKeyArrayState(Array_obj< int >::__new().Add((int)40).Add((int)83),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		downBool = tmp1;
		HX_STACK_LINE(106)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		bool tmp3 = tmp2->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		leftBool = tmp3;
		HX_STACK_LINE(107)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		bool tmp5 = tmp4->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		rightBool = tmp5;
		HX_STACK_LINE(108)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		bool tmp7 = tmp6->checkKeyArrayState(Array_obj< int >::__new().Add((int)38).Add((int)87),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		upBool = tmp7;
		HX_STACK_LINE(129)
		bool tmp8 = leftBool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		if ((tmp8)){
			HX_STACK_LINE(129)
			tmp9 = rightBool;
		}
		else{
			HX_STACK_LINE(129)
			tmp9 = false;
		}
		HX_STACK_LINE(129)
		if ((tmp9)){
			HX_STACK_LINE(129)
			bool tmp10 = rightBool = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			leftBool = tmp10;
		}
		HX_STACK_LINE(130)
		bool tmp10 = upBool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		if ((tmp10)){
			HX_STACK_LINE(130)
			tmp11 = downBool;
		}
		else{
			HX_STACK_LINE(130)
			tmp11 = false;
		}
		HX_STACK_LINE(130)
		if ((tmp11)){
			HX_STACK_LINE(130)
			bool tmp12 = downBool = false;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			upBool = tmp12;
		}
		HX_STACK_LINE(135)
		bool tmp12 = downBool;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(135)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(135)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(135)
		if ((tmp14)){
			HX_STACK_LINE(136)
			tmp15 = leftBool;
		}
		else{
			HX_STACK_LINE(135)
			tmp15 = true;
		}
		HX_STACK_LINE(135)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(135)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(135)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(135)
		if ((tmp17)){
			HX_STACK_LINE(137)
			tmp18 = rightBool;
		}
		else{
			HX_STACK_LINE(135)
			tmp18 = true;
		}
		HX_STACK_LINE(135)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(135)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(135)
		if ((tmp19)){
			HX_STACK_LINE(138)
			tmp20 = upBool;
		}
		else{
			HX_STACK_LINE(135)
			tmp20 = true;
		}
		HX_STACK_LINE(134)
		if ((tmp20)){
			HX_STACK_LINE(141)
			Float moveDegreeFloat = (int)0;		HX_STACK_VAR(moveDegreeFloat,"moveDegreeFloat");
			HX_STACK_LINE(143)
			bool tmp21 = upBool;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(143)
			if ((tmp21)){
				HX_STACK_LINE(145)
				moveDegreeFloat = (int)-90;
				HX_STACK_LINE(149)
				bool tmp22 = leftBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(149)
				if ((tmp22)){
					HX_STACK_LINE(149)
					hx::SubEq(moveDegreeFloat,(int)45);
				}
				else{
					HX_STACK_LINE(150)
					bool tmp23 = rightBool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(150)
					if ((tmp23)){
						HX_STACK_LINE(150)
						hx::AddEq(moveDegreeFloat,(int)45);
					}
				}
				HX_STACK_LINE(154)
				this->set_facing((int)256);
			}
			else{
				HX_STACK_LINE(157)
				bool tmp22 = downBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(157)
				if ((tmp22)){
					HX_STACK_LINE(159)
					moveDegreeFloat = (int)90;
					HX_STACK_LINE(163)
					bool tmp23 = leftBool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(163)
					if ((tmp23)){
						HX_STACK_LINE(163)
						hx::AddEq(moveDegreeFloat,(int)45);
					}
					else{
						HX_STACK_LINE(164)
						bool tmp24 = rightBool;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(164)
						if ((tmp24)){
							HX_STACK_LINE(164)
							hx::SubEq(moveDegreeFloat,(int)45);
						}
					}
					HX_STACK_LINE(168)
					this->set_facing((int)4096);
				}
				else{
					HX_STACK_LINE(171)
					bool tmp23 = leftBool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(171)
					if ((tmp23)){
						HX_STACK_LINE(173)
						moveDegreeFloat = (int)180;
						HX_STACK_LINE(174)
						this->set_facing((int)1);
					}
					else{
						HX_STACK_LINE(177)
						bool tmp24 = rightBool;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(177)
						if ((tmp24)){
							HX_STACK_LINE(179)
							moveDegreeFloat = (int)0;
							HX_STACK_LINE(180)
							this->set_facing((int)16);
						}
					}
				}
			}
			HX_STACK_LINE(184)
			::flixel::math::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(184)
			Float tmp23 = this->speedFloat;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(184)
			tmp22->set(tmp23,(int)0);
			HX_STACK_LINE(185)
			::flixel::math::FlxPoint tmp24 = this->velocity;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(185)
			::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				::flixel::math::FlxPoint tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp27 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(185)
					::flixel::math::FlxPoint tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(185)
					::flixel::math::FlxPoint tmp29 = tmp28->set((int)0,(int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(185)
					::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(185)
					point->_inPool = false;
					HX_STACK_LINE(185)
					tmp26 = point;
				}
				HX_STACK_LINE(185)
				::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(185)
				point->_weak = true;
				HX_STACK_LINE(185)
				tmp25 = point;
			}
			HX_STACK_LINE(185)
			Float tmp26 = moveDegreeFloat;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(185)
			tmp24->rotate(tmp25,tmp26);
			HX_STACK_LINE(187)
			::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(187)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(187)
			bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(187)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(187)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(187)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(187)
			if ((tmp31)){
				HX_STACK_LINE(187)
				::flixel::math::FlxPoint tmp33 = this->velocity;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(187)
				::flixel::math::FlxPoint tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(187)
				::flixel::math::FlxPoint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(187)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(187)
				tmp32 = (tmp36 != (int)0);
			}
			else{
				HX_STACK_LINE(187)
				tmp32 = true;
			}
			HX_STACK_LINE(187)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(187)
			if ((tmp32)){
				HX_STACK_LINE(187)
				int tmp34 = this->touching;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(187)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(187)
				tmp33 = (tmp35 == (int)0);
			}
			else{
				HX_STACK_LINE(187)
				tmp33 = false;
			}
			HX_STACK_LINE(187)
			if ((tmp33)){
				HX_STACK_LINE(188)
				::flixel::_system::FlxSound tmp34 = this->stepFlxSound;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(188)
				tmp34->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					int tmp35 = this->facing;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(190)
					int _g = tmp35;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(190)
					int tmp36 = _g;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(190)
					switch( (int)(tmp36)){
						case (int)1: case (int)16: {
							HX_STACK_LINE(193)
							::flixel::animation::FlxAnimationController tmp37 = this->animation;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(193)
							tmp37->play(HX_HCSTRING("AnimationLeftRight","\xd1","\x0e","\xf8","\x88"),null(),null(),null());
						}
						;break;
						case (int)256: {
							HX_STACK_LINE(195)
							::flixel::animation::FlxAnimationController tmp37 = this->animation;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(195)
							tmp37->play(HX_HCSTRING("AnimationUp","\x5f","\x9a","\xc4","\x19"),null(),null(),null());
						}
						;break;
						case (int)4096: {
							HX_STACK_LINE(197)
							::flixel::animation::FlxAnimationController tmp37 = this->animation;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(197)
							tmp37->play(HX_HCSTRING("AnimationDown","\x66","\x35","\xaa","\x7c"),null(),null(),null());
						}
						;break;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(204)
			::flixel::animation::FlxAnimationController tmp21 = this->animation;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(204)
			::flixel::animation::FlxAnimation tmp22 = tmp21->_curAnim;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(204)
			bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(204)
			if ((tmp23)){
				HX_STACK_LINE(206)
				::flixel::animation::FlxAnimationController tmp24 = this->animation;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(206)
				tmp24->_curAnim->set_curFrame((int)0);
				HX_STACK_LINE(207)
				::flixel::animation::FlxAnimationController tmp25 = this->animation;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(207)
				tmp25->_curAnim->pause();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPlayer_obj,MovementVoid,(void))


ObjectPlayer_obj::ObjectPlayer_obj()
{
}

void ObjectPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPlayer);
	HX_MARK_MEMBER_NAME(stepFlxSound,"stepFlxSound");
	HX_MARK_MEMBER_NAME(speedFloat,"speedFloat");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectPlayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepFlxSound,"stepFlxSound");
	HX_VISIT_MEMBER_NAME(speedFloat,"speedFloat");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectPlayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { return speedFloat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stepFlxSound") ) { return stepFlxSound; }
		if (HX_FIELD_EQ(inName,"MovementVoid") ) { return MovementVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { speedFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stepFlxSound") ) { stepFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52"));
	outFields->push(HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectPlayer_obj,stepFlxSound),HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52")},
	{hx::fsFloat,(int)offsetof(ObjectPlayer_obj,speedFloat),HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52"),
	HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("MovementVoid","\x43","\x84","\xf2","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPlayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPlayer_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPlayer_obj::__mClass;

void ObjectPlayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectPlayer","\xa0","\x43","\xd5","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPlayer_obj >;
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

