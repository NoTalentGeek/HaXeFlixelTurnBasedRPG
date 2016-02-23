#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
namespace flixel{
namespace tweens{

Void FlxTweenManager_obj::__construct()
{
HX_STACK_FRAME("flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",686,0x5d58d691)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(691)
	this->_tweens = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(695)
	super::__construct();
	HX_STACK_LINE(696)
	this->set_visible(false);
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(697)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1);
	}
}
;
	return null();
}

//FlxTweenManager_obj::~FlxTweenManager_obj() { }

Dynamic FlxTweenManager_obj::__CreateEmpty() { return  new FlxTweenManager_obj; }
hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new()
{  hx::ObjectPtr< FlxTweenManager_obj > _result_ = new FlxTweenManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTweenManager_obj > _result_ = new FlxTweenManager_obj();
	_result_->__construct();
	return _result_;}

::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::QuadPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::QuadPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::LinearPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::LinearPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::CircularMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::CircularMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::CubicMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::CubicMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::QuadMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::QuadMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::motion::LinearMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::motion::LinearMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::misc::ColorTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::misc::ColorTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::misc::AngleTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::misc::AngleTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

::flixel::tweens::FlxTween FlxTweenManager_obj::add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_FlxTween",0xdb4849d9,"flixel.tweens.FlxTweenManager.add_flixel_tweens_FlxTween","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::FlxTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::FlxTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_FlxTween,return )

::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::misc::NumTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::misc::NumTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",746,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(748)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		if ((tmp)){
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		::flixel::tweens::misc::VarTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(755)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(757)
			Tween->start();
		}
		HX_STACK_LINE(759)
		::flixel::tweens::misc::VarTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

Void FlxTweenManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",701,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(702)
		this->super::destroy();
		HX_STACK_LINE(703)
		{
			HX_STACK_LINE(703)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(703)
			Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(703)
			tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


Void FlxTweenManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",707,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(709)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(711)
		{
			HX_STACK_LINE(711)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(711)
			Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(711)
			while((true)){
				HX_STACK_LINE(711)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(711)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(711)
				if ((tmp1)){
					HX_STACK_LINE(711)
					break;
				}
				HX_STACK_LINE(711)
				::flixel::tweens::FlxTween tmp2 = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(711)
				::flixel::tweens::FlxTween tween = tmp2;		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(711)
				++(_g);
				HX_STACK_LINE(713)
				bool tmp3 = tween->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(713)
				if ((tmp3)){
					HX_STACK_LINE(715)
					Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(715)
					tween->update(tmp4);
					HX_STACK_LINE(716)
					bool tmp5 = tween->finished;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(716)
					if ((tmp5)){
						HX_STACK_LINE(718)
						bool tmp6 = (finishedTweens == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(718)
						if ((tmp6)){
							HX_STACK_LINE(720)
							finishedTweens = Array_obj< ::Dynamic >::__new();
						}
						HX_STACK_LINE(722)
						::flixel::tweens::FlxTween tmp7 = tween;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(722)
						finishedTweens->push(tmp7);
					}
				}
			}
		}
		HX_STACK_LINE(727)
		bool tmp = (finishedTweens != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(727)
		if ((tmp)){
			HX_STACK_LINE(729)
			while((true)){
				HX_STACK_LINE(729)
				bool tmp1 = (finishedTweens->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(729)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(729)
				if ((tmp2)){
					HX_STACK_LINE(729)
					break;
				}
				HX_STACK_LINE(731)
				::flixel::tweens::FlxTween tmp3 = finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(731)
				tmp3->finish();
			}
		}
	}
return null();
}


::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",771,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(772)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(772)
		if ((tmp)){
			HX_STACK_LINE(774)
			return null();
		}
		HX_STACK_LINE(777)
		Tween->set_active(false);
		HX_STACK_LINE(779)
		bool tmp1 = Destroy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(779)
		if ((tmp1)){
			HX_STACK_LINE(781)
			Tween->destroy();
		}
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			Array< ::Dynamic > array = this->_tweens;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(784)
			::flixel::tweens::FlxTween tmp2 = Tween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			int tmp3 = array->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(784)
			int index = tmp3;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(784)
			bool tmp4 = (index != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			if ((tmp4)){
				HX_STACK_LINE(784)
				int tmp5 = (array->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(784)
				::flixel::tweens::FlxTween tmp6 = array->__get(tmp5).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(784)
				array[index] = tmp6;
				HX_STACK_LINE(784)
				array->pop().StaticCast< ::flixel::tweens::FlxTween >();
				HX_STACK_LINE(784)
				array;
			}
			else{
				HX_STACK_LINE(784)
				array;
			}
		}
		HX_STACK_LINE(786)
		::flixel::tweens::FlxTween tmp2 = Tween;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(786)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,remove,return )

Void FlxTweenManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",793,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(793)
		while((true)){
			HX_STACK_LINE(793)
			int tmp = this->_tweens->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(793)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(793)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(793)
			if ((tmp2)){
				HX_STACK_LINE(793)
				break;
			}
			HX_STACK_LINE(795)
			::flixel::tweens::FlxTween tmp3 = this->_tweens->__get((int)0).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(795)
			this->remove(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))


FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTweenManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTween") ) { return add_flixel_tweens_FlxTween_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return add_flixel_tweens_misc_NumTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return add_flixel_tweens_misc_VarTween_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return add_flixel_tweens_motion_QuadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return add_flixel_tweens_misc_ColorTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return add_flixel_tweens_misc_AngleTween_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return add_flixel_tweens_motion_LinearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return add_flixel_tweens_motion_QuadMotion_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return add_flixel_tweens_motion_CubicMotion_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return add_flixel_tweens_motion_LinearMotion_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return add_flixel_tweens_motion_CircularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_tweens_motion_QuadPath","\xa3","\xdd","\xde","\xe6"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearPath","\x81","\x31","\xfc","\x6c"),
	HX_HCSTRING("add_flixel_tweens_motion_CircularMotion","\xcc","\xa0","\x91","\x11"),
	HX_HCSTRING("add_flixel_tweens_motion_CubicMotion","\xe9","\x1f","\xbd","\xda"),
	HX_HCSTRING("add_flixel_tweens_motion_QuadMotion","\xb4","\xf9","\x16","\x5f"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearMotion","\x12","\x81","\x17","\xa6"),
	HX_HCSTRING("add_flixel_tweens_misc_ColorTween","\xe9","\xfc","\x82","\x19"),
	HX_HCSTRING("add_flixel_tweens_misc_AngleTween","\x79","\x54","\x9c","\xf8"),
	HX_HCSTRING("add_flixel_tweens_FlxTween","\xeb","\x31","\x6d","\x84"),
	HX_HCSTRING("add_flixel_tweens_misc_NumTween","\xe6","\xce","\x88","\x53"),
	HX_HCSTRING("add_flixel_tweens_misc_VarTween","\xa5","\xe6","\x37","\xdd"),
	HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxTweenManager","\xc0","\x41","\x37","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTweenManager_obj >;
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
} // end namespace tweens
