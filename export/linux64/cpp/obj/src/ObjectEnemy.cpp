#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_ObjectEnemy
#include <ObjectEnemy.h>
#endif
#ifndef INCLUDED_ObjectFiniteStateMachine
#include <ObjectFiniteStateMachine.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
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

Void ObjectEnemy_obj::__construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat,int _enemyTypeInt)
{
HX_STACK_FRAME("ObjectEnemy","new",0x7fd0905b,"ObjectEnemy.new","ObjectEnemy.hx",17,0x8808f375)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__xFloat,"_xFloat")
HX_STACK_ARG(__o__yFloat,"_yFloat")
HX_STACK_ARG(_enemyTypeInt,"_enemyTypeInt")
Float _xFloat = __o__xFloat.Default(0);
Float _yFloat = __o__yFloat.Default(0);
{
	HX_STACK_LINE(30)
	this->speedFloat = ((Float)80);
	HX_STACK_LINE(29)
	this->seePlayerBool = false;
	HX_STACK_LINE(43)
	Float tmp = _xFloat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = _yFloat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(44)
	this->enemyTypeInt = _enemyTypeInt;
	HX_STACK_LINE(46)
	int tmp2 = this->enemyTypeInt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::String tmp4 = (HX_HCSTRING("assets/images/enemy-","\xd0","\xc6","\x05","\x40") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	::String tmp5 = (tmp4 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	this->loadGraphic(tmp5,true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(52)
	::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	tmp6->add(HX_HCSTRING("AnimationDown","\x66","\x35","\xaa","\x7c"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)6,false,null(),null());
	HX_STACK_LINE(58)
	::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	tmp7->add(HX_HCSTRING("AnimationLeftRight","\xd1","\x0e","\xf8","\x88"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)3).Add((int)5),(int)6,false,null(),null());
	HX_STACK_LINE(64)
	::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	tmp8->add(HX_HCSTRING("AnimationUp","\x5f","\x9a","\xc4","\x19"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)6).Add((int)8),(int)6,false,null(),null());
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::haxe::ds::IntMap tmp9 = this->_facingFlip;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectEnemy.hx",70,0x8808f375)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(70)
		tmp9->set((int)1,tmp10);
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::haxe::ds::IntMap tmp9 = this->_facingFlip;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectEnemy.hx",71,0x8808f375)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		tmp9->set((int)16,tmp10);
	}
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp9 = this->drag;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp10 = this->drag;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	Float tmp11 = tmp10->set_y((int)10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(73)
	tmp9->set_x(tmp11);
	HX_STACK_LINE(74)
	this->set_height((int)14);
	HX_STACK_LINE(75)
	this->idleVoidTimerFloat = (int)0;
	HX_STACK_LINE(76)
	::flixel::math::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(76)
	tmp12->set_x((int)4);
	HX_STACK_LINE(77)
	::flixel::math::FlxPoint tmp13 = this->offset;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	tmp13->set_y((int)2);
	HX_STACK_LINE(78)
	this->set_width((int)8);
	HX_STACK_LINE(80)
	Dynamic tmp14 = this->IdleVoid_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(80)
	::ObjectFiniteStateMachine tmp15 = ::ObjectFiniteStateMachine_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(80)
	this->objectFiniteStateMachine = tmp15;
	HX_STACK_LINE(81)
	::flixel::math::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(81)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(81)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(81)
		::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(81)
		Float tmp19 = X;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(81)
		Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(81)
		::flixel::math::FlxPoint tmp21 = tmp18->set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(81)
		::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(81)
		point->_inPool = false;
		HX_STACK_LINE(81)
		tmp16 = point;
	}
	HX_STACK_LINE(81)
	this->playerPositionFlxPoint = tmp16;
	HX_STACK_LINE(83)
	::flixel::_system::frontEnds::SoundFrontEnd tmp17 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(83)
	::flixel::_system::FlxSound tmp18 = tmp17->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/step.wav","\x29","\xa0","\xd3","\x5a"),((Float)0.4),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(83)
	this->stepFlxSound = tmp18;
	HX_STACK_LINE(84)
	::flixel::_system::FlxSound tmp19 = this->stepFlxSound;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(84)
	Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(84)
	Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(84)
	::flixel::FlxCamera tmp22 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(84)
	::flixel::FlxObject tmp23 = tmp22->target;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(84)
	int tmp24 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(84)
	Float tmp25 = (tmp24 * ((Float)0.6));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(84)
	tmp19->__Field(HX_HCSTRING("proximity","\x3f","\xc9","\x25","\x82"), hx::paccDynamic )(tmp20,tmp21,tmp23,tmp25,null());
}
;
	return null();
}

//ObjectEnemy_obj::~ObjectEnemy_obj() { }

Dynamic ObjectEnemy_obj::__CreateEmpty() { return  new ObjectEnemy_obj; }
hx::ObjectPtr< ObjectEnemy_obj > ObjectEnemy_obj::__new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat,int _enemyTypeInt)
{  hx::ObjectPtr< ObjectEnemy_obj > _result_ = new ObjectEnemy_obj();
	_result_->__construct(__o__xFloat,__o__yFloat,_enemyTypeInt);
	return _result_;}

Dynamic ObjectEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectEnemy_obj > _result_ = new ObjectEnemy_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectEnemy_obj::destroy( ){
{
		HX_STACK_FRAME("ObjectEnemy","destroy",0x20620675,"ObjectEnemy.destroy","ObjectEnemy.hx",94,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::destroy();
		HX_STACK_LINE(97)
		::flixel::_system::FlxSound tmp = this->stepFlxSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::flixel::_system::FlxSound tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		this->stepFlxSound = tmp1;
	}
return null();
}


Void ObjectEnemy_obj::draw( ){
{
		HX_STACK_FRAME("ObjectEnemy","draw",0x501b67a9,"ObjectEnemy.draw","ObjectEnemy.hx",107,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		if ((tmp4)){
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			tmp5 = (tmp9 != (int)0);
		}
		else{
			HX_STACK_LINE(109)
			tmp5 = true;
		}
		HX_STACK_LINE(109)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		if ((tmp5)){
			HX_STACK_LINE(110)
			int tmp7 = this->touching;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			tmp6 = (tmp8 != (int)0);
		}
		else{
			HX_STACK_LINE(109)
			tmp6 = false;
		}
		HX_STACK_LINE(108)
		if ((tmp6)){
			HX_STACK_LINE(113)
			::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			::flixel::math::FlxPoint tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			bool tmp13 = (tmp9 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			if ((tmp13)){
				HX_STACK_LINE(115)
				::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(115)
				Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(115)
				bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(115)
				if ((tmp16)){
					HX_STACK_LINE(115)
					this->set_facing((int)1);
				}
				else{
					HX_STACK_LINE(116)
					this->set_facing((int)16);
				}
			}
			else{
				HX_STACK_LINE(121)
				::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				if ((tmp16)){
					HX_STACK_LINE(121)
					this->set_facing((int)256);
				}
				else{
					HX_STACK_LINE(122)
					this->set_facing((int)4096);
				}
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				int tmp14 = this->facing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(126)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(126)
				int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(126)
				switch( (int)(tmp15)){
					case (int)4096: {
						HX_STACK_LINE(129)
						::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(129)
						tmp16->play(HX_HCSTRING("AnimationDown","\x66","\x35","\xaa","\x7c"),null(),null(),null());
					}
					;break;
					case (int)1: case (int)16: {
						HX_STACK_LINE(131)
						::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(131)
						tmp16->play(HX_HCSTRING("AnimationLeftRight","\xd1","\x0e","\xf8","\x88"),null(),null(),null());
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(133)
						::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(133)
						tmp16->play(HX_HCSTRING("AnimationUp","\x5f","\x9a","\xc4","\x19"),null(),null(),null());
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(139)
		this->super::draw();
	}
return null();
}


Void ObjectEnemy_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("ObjectEnemy","update",0xc2b2b4ee,"ObjectEnemy.update","ObjectEnemy.hx",149,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(150)
		bool tmp = ::flixel::effects::FlxFlicker_obj::isFlickering(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		if ((tmp)){
			HX_STACK_LINE(150)
			return null();
		}
		HX_STACK_LINE(152)
		::ObjectFiniteStateMachine tmp1 = this->objectFiniteStateMachine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		tmp1->UpdateVoid();
		HX_STACK_LINE(153)
		Float tmp2 = _elapsedFloat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		this->super::update(tmp2);
		HX_STACK_LINE(156)
		::flixel::math::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		if ((tmp7)){
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			tmp8 = (tmp12 != (int)0);
		}
		else{
			HX_STACK_LINE(156)
			tmp8 = true;
		}
		HX_STACK_LINE(156)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		if ((tmp8)){
			HX_STACK_LINE(157)
			int tmp10 = this->touching;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(157)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			tmp9 = (tmp11 == (int)0);
		}
		else{
			HX_STACK_LINE(156)
			tmp9 = false;
		}
		HX_STACK_LINE(155)
		if ((tmp9)){
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::flixel::_system::FlxSound tmp10 = this->stepFlxSound;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(160)
				::flixel::_system::FlxSound _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(160)
				Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(160)
				int tmp12 = this->frameWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(160)
				Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(160)
				Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(160)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(160)
				Float X = tmp16;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(160)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(160)
				_this->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = X;
				HX_STACK_LINE(160)
				_this->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = Y;
			}
			HX_STACK_LINE(161)
			::flixel::_system::FlxSound tmp10 = this->stepFlxSound;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			tmp10->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
	}
return null();
}


Void ObjectEnemy_obj::ChangeEnemyVoid( int _enemyTypeInt){
{
		HX_STACK_FRAME("ObjectEnemy","ChangeEnemyVoid",0x9473ba87,"ObjectEnemy.ChangeEnemyVoid","ObjectEnemy.hx",172,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enemyTypeInt,"_enemyTypeInt")
		HX_STACK_LINE(174)
		int tmp = this->enemyTypeInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		int tmp1 = _enemyTypeInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		if ((tmp2)){
			HX_STACK_LINE(176)
			this->enemyTypeInt = _enemyTypeInt;
			HX_STACK_LINE(178)
			int tmp3 = this->enemyTypeInt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			::String tmp5 = (HX_HCSTRING("assets/images/enemy-","\xd0","\xc6","\x05","\x40") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			::String tmp6 = (tmp5 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			this->loadGraphic(tmp6,true,(int)16,(int)16,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectEnemy_obj,ChangeEnemyVoid,(void))

Void ObjectEnemy_obj::ChaseVoid( ){
{
		HX_STACK_FRAME("ObjectEnemy","ChaseVoid",0x1ca04a3d,"ObjectEnemy.ChaseVoid","ObjectEnemy.hx",193,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		bool tmp = this->seePlayerBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		if ((tmp1)){
			HX_STACK_LINE(195)
			Dynamic tmp2 = this->IdleVoid_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			::ObjectFiniteStateMachine tmp3 = this->objectFiniteStateMachine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(195)
			tmp3->activeStateFunction = tmp2;
		}
		else{
			HX_STACK_LINE(196)
			::flixel::math::FlxPoint tmp2 = this->playerPositionFlxPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			Float tmp3 = this->speedFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			::flixel::math::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp2,tmp4,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectEnemy_obj,ChaseVoid,(void))

Void ObjectEnemy_obj::IdleVoid( ){
{
		HX_STACK_FRAME("ObjectEnemy","IdleVoid",0x8177decd,"ObjectEnemy.IdleVoid","ObjectEnemy.hx",206,0x8808f375)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		bool tmp = this->seePlayerBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		if ((tmp)){
			HX_STACK_LINE(208)
			Dynamic tmp1 = this->ChaseVoid_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(208)
			::ObjectFiniteStateMachine tmp2 = this->objectFiniteStateMachine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			tmp2->activeStateFunction = tmp1;
		}
		else{
			HX_STACK_LINE(209)
			Float tmp1 = this->idleVoidTimerFloat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(209)
			bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			if ((tmp2)){
				HX_STACK_LINE(211)
				::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(211)
				Float tmp4 = tmp3->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(211)
				bool tmp5 = (tmp4 < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(211)
				if ((tmp5)){
					HX_STACK_LINE(213)
					this->moveDirectionFloat = (int)-1;
					HX_STACK_LINE(214)
					::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(214)
					Float tmp8 = tmp7->set_y((int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(214)
					tmp6->set_x(tmp8);
				}
				else{
					HX_STACK_LINE(219)
					::flixel::math::FlxRandom tmp6 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(219)
					int tmp7 = tmp6->_int((int)0,(int)8,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(219)
					int tmp8 = (tmp7 * (int)45);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(219)
					this->moveDirectionFloat = tmp8;
					HX_STACK_LINE(221)
					::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					Float tmp10 = this->speedFloat;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(221)
					tmp9->set(tmp11,(int)0);
					HX_STACK_LINE(222)
					::flixel::math::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					{
						HX_STACK_LINE(222)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(222)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(222)
						::flixel::math::FlxPoint tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						{
							HX_STACK_LINE(222)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp15 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(222)
							::flixel::math::FlxPoint tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(222)
							Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(222)
							Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(222)
							::flixel::math::FlxPoint tmp19 = tmp16->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(222)
							::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(222)
							point->_inPool = false;
							HX_STACK_LINE(222)
							tmp14 = point;
						}
						HX_STACK_LINE(222)
						::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(222)
						point->_weak = true;
						HX_STACK_LINE(222)
						tmp13 = point;
					}
					HX_STACK_LINE(222)
					Float tmp14 = this->moveDirectionFloat;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(222)
					tmp12->rotate(tmp13,tmp14);
				}
				HX_STACK_LINE(226)
				::flixel::math::FlxRandom tmp6 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				int tmp7 = tmp6->_int((int)1,(int)4,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				this->idleVoidTimerFloat = tmp7;
			}
			else{
				HX_STACK_LINE(229)
				Float tmp3 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				hx::SubEq(this->idleVoidTimerFloat,tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectEnemy_obj,IdleVoid,(void))


ObjectEnemy_obj::ObjectEnemy_obj()
{
}

void ObjectEnemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectEnemy);
	HX_MARK_MEMBER_NAME(idleVoidTimerFloat,"idleVoidTimerFloat");
	HX_MARK_MEMBER_NAME(moveDirectionFloat,"moveDirectionFloat");
	HX_MARK_MEMBER_NAME(objectFiniteStateMachine,"objectFiniteStateMachine");
	HX_MARK_MEMBER_NAME(stepFlxSound,"stepFlxSound");
	HX_MARK_MEMBER_NAME(enemyTypeInt,"enemyTypeInt");
	HX_MARK_MEMBER_NAME(playerPositionFlxPoint,"playerPositionFlxPoint");
	HX_MARK_MEMBER_NAME(seePlayerBool,"seePlayerBool");
	HX_MARK_MEMBER_NAME(speedFloat,"speedFloat");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectEnemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idleVoidTimerFloat,"idleVoidTimerFloat");
	HX_VISIT_MEMBER_NAME(moveDirectionFloat,"moveDirectionFloat");
	HX_VISIT_MEMBER_NAME(objectFiniteStateMachine,"objectFiniteStateMachine");
	HX_VISIT_MEMBER_NAME(stepFlxSound,"stepFlxSound");
	HX_VISIT_MEMBER_NAME(enemyTypeInt,"enemyTypeInt");
	HX_VISIT_MEMBER_NAME(playerPositionFlxPoint,"playerPositionFlxPoint");
	HX_VISIT_MEMBER_NAME(seePlayerBool,"seePlayerBool");
	HX_VISIT_MEMBER_NAME(speedFloat,"speedFloat");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IdleVoid") ) { return IdleVoid_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ChaseVoid") ) { return ChaseVoid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { return speedFloat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stepFlxSound") ) { return stepFlxSound; }
		if (HX_FIELD_EQ(inName,"enemyTypeInt") ) { return enemyTypeInt; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"seePlayerBool") ) { return seePlayerBool; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ChangeEnemyVoid") ) { return ChangeEnemyVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"idleVoidTimerFloat") ) { return idleVoidTimerFloat; }
		if (HX_FIELD_EQ(inName,"moveDirectionFloat") ) { return moveDirectionFloat; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerPositionFlxPoint") ) { return playerPositionFlxPoint; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"objectFiniteStateMachine") ) { return objectFiniteStateMachine; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { speedFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stepFlxSound") ) { stepFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyTypeInt") ) { enemyTypeInt=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"seePlayerBool") ) { seePlayerBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"idleVoidTimerFloat") ) { idleVoidTimerFloat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveDirectionFloat") ) { moveDirectionFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerPositionFlxPoint") ) { playerPositionFlxPoint=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"objectFiniteStateMachine") ) { objectFiniteStateMachine=inValue.Cast< ::ObjectFiniteStateMachine >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("idleVoidTimerFloat","\x3f","\xda","\x41","\xff"));
	outFields->push(HX_HCSTRING("moveDirectionFloat","\xce","\xa1","\x6f","\xa5"));
	outFields->push(HX_HCSTRING("objectFiniteStateMachine","\xe4","\x97","\x16","\xf9"));
	outFields->push(HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52"));
	outFields->push(HX_HCSTRING("enemyTypeInt","\xed","\x30","\x30","\xcd"));
	outFields->push(HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad"));
	outFields->push(HX_HCSTRING("seePlayerBool","\x9e","\x55","\x4d","\xb8"));
	outFields->push(HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ObjectEnemy_obj,idleVoidTimerFloat),HX_HCSTRING("idleVoidTimerFloat","\x3f","\xda","\x41","\xff")},
	{hx::fsFloat,(int)offsetof(ObjectEnemy_obj,moveDirectionFloat),HX_HCSTRING("moveDirectionFloat","\xce","\xa1","\x6f","\xa5")},
	{hx::fsObject /*::ObjectFiniteStateMachine*/ ,(int)offsetof(ObjectEnemy_obj,objectFiniteStateMachine),HX_HCSTRING("objectFiniteStateMachine","\xe4","\x97","\x16","\xf9")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectEnemy_obj,stepFlxSound),HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52")},
	{hx::fsInt,(int)offsetof(ObjectEnemy_obj,enemyTypeInt),HX_HCSTRING("enemyTypeInt","\xed","\x30","\x30","\xcd")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(ObjectEnemy_obj,playerPositionFlxPoint),HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad")},
	{hx::fsBool,(int)offsetof(ObjectEnemy_obj,seePlayerBool),HX_HCSTRING("seePlayerBool","\x9e","\x55","\x4d","\xb8")},
	{hx::fsFloat,(int)offsetof(ObjectEnemy_obj,speedFloat),HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("idleVoidTimerFloat","\x3f","\xda","\x41","\xff"),
	HX_HCSTRING("moveDirectionFloat","\xce","\xa1","\x6f","\xa5"),
	HX_HCSTRING("objectFiniteStateMachine","\xe4","\x97","\x16","\xf9"),
	HX_HCSTRING("stepFlxSound","\x69","\xaa","\x6c","\x52"),
	HX_HCSTRING("enemyTypeInt","\xed","\x30","\x30","\xcd"),
	HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad"),
	HX_HCSTRING("seePlayerBool","\x9e","\x55","\x4d","\xb8"),
	HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ChangeEnemyVoid","\x0c","\x6e","\x99","\xc9"),
	HX_HCSTRING("ChaseVoid","\x02","\xdc","\xfe","\x8e"),
	HX_HCSTRING("IdleVoid","\xa8","\x6c","\xf5","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectEnemy_obj::__mClass;

void ObjectEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectEnemy","\xe9","\xc6","\xdc","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectEnemy_obj >;
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

