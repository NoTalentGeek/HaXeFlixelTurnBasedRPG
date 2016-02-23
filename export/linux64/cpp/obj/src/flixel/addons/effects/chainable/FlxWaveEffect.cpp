#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#include <flixel/addons/effects/chainable/FlxWaveEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

Void FlxWaveEffect_obj::__construct(::flixel::addons::effects::chainable::FlxWaveMode Mode,hx::Null< int >  __o_Strength,hx::Null< Float >  __o_Center,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Wavelength,::flixel::addons::effects::chainable::FlxWaveDirection Direction)
{
HX_STACK_FRAME("flixel.addons.effects.chainable.FlxWaveEffect","new",0xc67d1d26,"flixel.addons.effects.chainable.FlxWaveEffect.new","flixel/addons/effects/chainable/FlxWaveEffect.hx",17,0x614f926c)
HX_STACK_THIS(this)
HX_STACK_ARG(Mode,"Mode")
HX_STACK_ARG(__o_Strength,"Strength")
HX_STACK_ARG(__o_Center,"Center")
HX_STACK_ARG(__o_Speed,"Speed")
HX_STACK_ARG(__o_Wavelength,"Wavelength")
HX_STACK_ARG(Direction,"Direction")
int Strength = __o_Strength.Default(10);
Float Center = __o_Center.Default(-1);
Float Speed = __o_Speed.Default(3);
int Wavelength = __o_Wavelength.Default(5);
{
	HX_STACK_LINE(50)
	this->_time = ((Float)0);
	HX_STACK_LINE(19)
	this->active = true;
	HX_STACK_LINE(76)
	this->strength = Strength;
	HX_STACK_LINE(77)
	bool tmp = (Mode == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::flixel::addons::effects::chainable::FlxWaveMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		tmp1 = ::flixel::addons::effects::chainable::FlxWaveMode_obj::ALL;
	}
	else{
		HX_STACK_LINE(77)
		tmp1 = Mode;
	}
	HX_STACK_LINE(77)
	this->mode = tmp1;
	HX_STACK_LINE(78)
	this->speed = Speed;
	HX_STACK_LINE(79)
	this->wavelength = Wavelength;
	HX_STACK_LINE(80)
	bool tmp2 = (Direction != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::flixel::addons::effects::chainable::FlxWaveDirection tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	if ((tmp2)){
		HX_STACK_LINE(80)
		tmp3 = Direction;
	}
	else{
		HX_STACK_LINE(80)
		tmp3 = ::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL;
	}
	HX_STACK_LINE(80)
	this->direction = tmp3;
	HX_STACK_LINE(81)
	this->center = Center;
	HX_STACK_LINE(82)
	bool tmp4 = (Center < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	if ((tmp4)){
		HX_STACK_LINE(84)
		this->center = ((Float)0.5);
	}
	else{
		HX_STACK_LINE(86)
		bool tmp5 = (Center > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(88)
			this->center = (int)1;
		}
	}
	HX_STACK_LINE(91)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(91)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(91)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(91)
		point->_inPool = false;
		HX_STACK_LINE(91)
		tmp5 = point;
	}
	HX_STACK_LINE(91)
	this->offset = tmp5;
	HX_STACK_LINE(92)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	this->_flashPoint = tmp6;
	HX_STACK_LINE(93)
	::openfl::_legacy::geom::Rectangle tmp7 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	this->_flashRect = tmp7;
}
;
	return null();
}

//FlxWaveEffect_obj::~FlxWaveEffect_obj() { }

Dynamic FlxWaveEffect_obj::__CreateEmpty() { return  new FlxWaveEffect_obj; }
hx::ObjectPtr< FlxWaveEffect_obj > FlxWaveEffect_obj::__new(::flixel::addons::effects::chainable::FlxWaveMode Mode,hx::Null< int >  __o_Strength,hx::Null< Float >  __o_Center,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Wavelength,::flixel::addons::effects::chainable::FlxWaveDirection Direction)
{  hx::ObjectPtr< FlxWaveEffect_obj > _result_ = new FlxWaveEffect_obj();
	_result_->__construct(Mode,__o_Strength,__o_Center,__o_Speed,__o_Wavelength,Direction);
	return _result_;}

Dynamic FlxWaveEffect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxWaveEffect_obj > _result_ = new FlxWaveEffect_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *FlxWaveEffect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::addons::effects::chainable::IFlxEffect_obj)) return operator ::flixel::addons::effects::chainable::IFlxEffect_obj *();
	return super::__ToInterface(inType);
}

FlxWaveEffect_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxWaveEffect_obj >(this); }
FlxWaveEffect_obj::operator ::flixel::addons::effects::chainable::IFlxEffect_obj *()
	{ return new ::flixel::addons::effects::chainable::IFlxEffect_delegate_< FlxWaveEffect_obj >(this); }
Void FlxWaveEffect_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.effects.chainable.FlxWaveEffect","destroy",0x289c54c0,"flixel.addons.effects.chainable.FlxWaveEffect.destroy","flixel/addons/effects/chainable/FlxWaveEffect.hx",97,0x614f926c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->_flashPoint = null();
		HX_STACK_LINE(99)
		this->_flashRect = null();
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		this->offset = tmp1;
		HX_STACK_LINE(102)
		::openfl::_legacy::display::BitmapData tmp2 = this->_pixels;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		::openfl::_legacy::display::BitmapData tmp3 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		this->_pixels = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWaveEffect_obj,destroy,(void))

Void FlxWaveEffect_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.effects.chainable.FlxWaveEffect","update",0xff93f903,"flixel.addons.effects.chainable.FlxWaveEffect.update","flixel/addons/effects/chainable/FlxWaveEffect.hx",106,0x614f926c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(107)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		Float tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		hx::AddEq(this->_time,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,update,(void))

::openfl::_legacy::display::BitmapData FlxWaveEffect_obj::apply( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.addons.effects.chainable.FlxWaveEffect","apply",0xc0e60fb4,"flixel.addons.effects.chainable.FlxWaveEffect.apply","flixel/addons/effects/chainable/FlxWaveEffect.hx",111,0x614f926c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(112)
	::flixel::addons::effects::chainable::FlxWaveDirection tmp = this->direction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	bool tmp1 = (tmp == ::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(112)
		tmp2 = this->strength;
	}
	else{
		HX_STACK_LINE(112)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(112)
	int horizontalStrength = tmp2;		HX_STACK_VAR(horizontalStrength,"horizontalStrength");
	HX_STACK_LINE(113)
	::flixel::addons::effects::chainable::FlxWaveDirection tmp3 = this->direction;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	bool tmp4 = (tmp3 == ::flixel::addons::effects::chainable::FlxWaveDirection_obj::VERTICAL);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	if ((tmp4)){
		HX_STACK_LINE(113)
		tmp5 = this->strength;
	}
	else{
		HX_STACK_LINE(113)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(113)
	int verticalStrength = tmp5;		HX_STACK_VAR(verticalStrength,"verticalStrength");
	HX_STACK_LINE(114)
	::flixel::math::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	int tmp7 = horizontalStrength;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(114)
	int tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(114)
	int tmp9 = verticalStrength;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(114)
	tmp6->set(tmp8,tmp10);
	HX_STACK_LINE(116)
	::openfl::_legacy::display::BitmapData tmp11 = this->_pixels;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(116)
	bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(116)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(116)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(116)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(116)
	if ((tmp14)){
		HX_STACK_LINE(116)
		::openfl::_legacy::display::BitmapData tmp16 = this->_pixels;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(116)
		::openfl::_legacy::display::BitmapData tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(116)
		::openfl::_legacy::display::BitmapData tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(116)
		int tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(116)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(116)
		int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(116)
		int tmp22 = bitmapData->get_width();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(116)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(116)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(116)
		int tmp25 = (horizontalStrength * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(116)
		int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(116)
		int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(116)
		int tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(116)
		int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(116)
		int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(116)
		tmp15 = (tmp21 < tmp30);
	}
	else{
		HX_STACK_LINE(116)
		tmp15 = true;
	}
	HX_STACK_LINE(116)
	bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(116)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(116)
	if ((tmp16)){
		HX_STACK_LINE(116)
		::openfl::_legacy::display::BitmapData tmp18 = this->_pixels;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(116)
		::openfl::_legacy::display::BitmapData tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(116)
		int tmp20 = tmp19->get_height();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(116)
		int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(116)
		int tmp22 = bitmapData->get_height();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(116)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(116)
		int tmp24 = (verticalStrength * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(116)
		int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(116)
		int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(116)
		int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(116)
		tmp17 = (tmp21 < tmp27);
	}
	else{
		HX_STACK_LINE(116)
		tmp17 = true;
	}
	HX_STACK_LINE(116)
	if ((tmp17)){
		HX_STACK_LINE(118)
		int tmp18 = bitmapData->get_width();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(118)
		int tmp19 = (horizontalStrength * (int)2);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(118)
		int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(118)
		int tmp21 = bitmapData->get_height();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(118)
		int tmp22 = (verticalStrength * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(118)
		int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(118)
		::openfl::_legacy::display::BitmapData tmp24 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp20,tmp23,true,(int)0,null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(118)
		this->_pixels = tmp24;
	}
	else{
		HX_STACK_LINE(122)
		::openfl::_legacy::display::BitmapData tmp18 = this->_pixels;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(122)
		::openfl::_legacy::display::BitmapData tmp19 = this->_pixels;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(122)
		::openfl::_legacy::geom::Rectangle tmp20 = tmp19->get_rect();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(122)
		tmp18->fillRect(tmp20,(int)0);
	}
	HX_STACK_LINE(125)
	::flixel::addons::effects::chainable::FlxWaveDirection tmp18 = this->direction;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(125)
	bool tmp19 = (tmp18 == ::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(125)
	int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(125)
	if ((tmp19)){
		HX_STACK_LINE(125)
		tmp20 = bitmapData->get_height();
	}
	else{
		HX_STACK_LINE(125)
		tmp20 = bitmapData->get_width();
	}
	HX_STACK_LINE(125)
	int length = tmp20;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(126)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(127)
	while((true)){
		HX_STACK_LINE(127)
		bool tmp21 = (p < length);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		if ((tmp22)){
			HX_STACK_LINE(127)
			break;
		}
		HX_STACK_LINE(129)
		Float pixelOffset = (int)0;		HX_STACK_VAR(pixelOffset,"pixelOffset");
		HX_STACK_LINE(130)
		int tmp23 = length;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(130)
		Float tmp24 = this->center;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(130)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(130)
		Float offsetP = tmp25;		HX_STACK_VAR(offsetP,"offsetP");
		HX_STACK_LINE(131)
		int size = (int)1;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::flixel::addons::effects::chainable::FlxWaveMode tmp26 = this->mode;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(132)
			::flixel::addons::effects::chainable::FlxWaveMode _g = tmp26;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(135)
					int tmp27 = this->strength;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(135)
					offsetP = tmp27;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(138)
					bool tmp27 = (p <= offsetP);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(138)
					if ((tmp27)){
						HX_STACK_LINE(140)
						Float tmp28 = (Float(p) / Float(offsetP));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(140)
						Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(140)
						int tmp30 = this->strength;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(140)
						Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(140)
						offsetP = tmp31;
					}
					else{
						HX_STACK_LINE(144)
						int tmp28 = (length - p);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(144)
						size = tmp28;
						HX_STACK_LINE(145)
						offsetP = (int)0;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(149)
					bool tmp27 = (p >= offsetP);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(149)
					if ((tmp27)){
						HX_STACK_LINE(151)
						Float tmp28 = (Float(p) / Float(length));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(151)
						Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(151)
						Float tmp30 = this->center;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(151)
						Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(151)
						Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(151)
						Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(151)
						int tmp34 = this->strength;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(151)
						Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(151)
						offsetP = tmp35;
					}
					else{
						HX_STACK_LINE(155)
						Float tmp28 = offsetP;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(155)
						int tmp29 = ::Math_obj::ceil(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(155)
						size = tmp29;
						HX_STACK_LINE(156)
						offsetP = (int)0;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(160)
		Float tmp26 = offsetP;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(160)
		Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int tmp28 = p;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(160)
			int tmp29 = this->wavelength;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(160)
			Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(160)
			Float tmp31 = this->_time;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(160)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(160)
			Float f = tmp32;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(160)
			hx::MultEq(f,((Float)0.3183098862));
			HX_STACK_LINE(160)
			bool tmp33 = (f > (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(160)
			if ((tmp33)){
				HX_STACK_LINE(160)
				Float tmp34 = f;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(160)
				int tmp35 = ::Math_obj::ceil(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(160)
				int tmp36 = (int(tmp35) >> int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(160)
				int tmp37 = (int(tmp36) << int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(160)
				hx::SubEq(f,tmp37);
			}
			else{
				HX_STACK_LINE(160)
				bool tmp34 = (f < (int)-1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(160)
				if ((tmp34)){
					HX_STACK_LINE(160)
					Float tmp35 = f;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(160)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(160)
					int tmp37 = ::Math_obj::ceil(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(160)
					int tmp38 = (int(tmp37) >> int((int)1));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(160)
					int tmp39 = (int(tmp38) << int((int)1));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(160)
					hx::AddEq(f,tmp39);
				}
			}
			HX_STACK_LINE(160)
			bool tmp34 = (f > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(160)
			if ((tmp34)){
				HX_STACK_LINE(160)
				Float tmp35 = f;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(160)
				Float tmp36 = f;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(160)
				Float tmp37 = f;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(160)
				Float tmp38 = ((Float)-7.2);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(160)
				Float tmp39 = (f * ((Float)3.6));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(160)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(160)
				Float tmp41 = (tmp37 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(160)
				Float tmp42 = (((Float)0.5) + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(160)
				Float tmp43 = (tmp36 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(160)
				Float tmp44 = (((Float)3.1) + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(160)
				tmp27 = (tmp35 * tmp44);
			}
			else{
				HX_STACK_LINE(160)
				Float tmp35 = f;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(160)
				Float tmp36 = f;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(160)
				Float tmp37 = f;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(160)
				Float tmp38 = (f * ((Float)3.6));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(160)
				Float tmp39 = (((Float)7.2) + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(160)
				Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(160)
				Float tmp41 = (((Float)0.5) + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(160)
				Float tmp42 = (tmp36 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(160)
				Float tmp43 = (((Float)3.1) - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(160)
				tmp27 = (tmp35 * tmp43);
			}
		}
		HX_STACK_LINE(160)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(160)
		pixelOffset = tmp28;
		HX_STACK_LINE(162)
		::flixel::addons::effects::chainable::FlxWaveDirection tmp29 = this->direction;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(162)
		bool tmp30 = (tmp29 == ::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(162)
		if ((tmp30)){
			HX_STACK_LINE(164)
			::openfl::_legacy::geom::Point tmp31 = this->_flashPoint;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(164)
			int tmp32 = this->strength;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(164)
			Float tmp33 = pixelOffset;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(164)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(164)
			int tmp35 = p;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(164)
			tmp31->setTo(tmp34,tmp35);
			HX_STACK_LINE(165)
			::openfl::_legacy::geom::Rectangle tmp36 = this->_flashRect;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(165)
			int tmp37 = p;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(165)
			int tmp38 = bitmapData->get_width();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(165)
			int tmp39 = size;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(165)
			tmp36->setTo((int)0,tmp37,tmp38,tmp39);
		}
		else{
			HX_STACK_LINE(169)
			::openfl::_legacy::geom::Point tmp31 = this->_flashPoint;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(169)
			int tmp32 = p;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(169)
			int tmp33 = this->strength;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(169)
			Float tmp34 = pixelOffset;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(169)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(169)
			tmp31->setTo(tmp32,tmp35);
			HX_STACK_LINE(170)
			::openfl::_legacy::geom::Rectangle tmp36 = this->_flashRect;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(170)
			int tmp37 = p;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(170)
			int tmp38 = size;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(170)
			int tmp39 = bitmapData->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(170)
			tmp36->setTo(tmp37,(int)0,tmp38,tmp39);
		}
		HX_STACK_LINE(172)
		::openfl::_legacy::display::BitmapData tmp31 = this->_pixels;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(172)
		::openfl::_legacy::display::BitmapData tmp32 = bitmapData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(172)
		::openfl::_legacy::geom::Rectangle tmp33 = this->_flashRect;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(172)
		::openfl::_legacy::geom::Point tmp34 = this->_flashPoint;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(172)
		tmp31->copyPixels(tmp32,tmp33,tmp34,null(),null(),null());
		HX_STACK_LINE(174)
		hx::AddEq(p,size);
	}
	HX_STACK_LINE(176)
	bitmapData->dispose();
	HX_STACK_LINE(178)
	::openfl::_legacy::display::BitmapData tmp21 = this->_pixels;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(178)
	::openfl::_legacy::display::BitmapData tmp22 = tmp21->clone();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(178)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,apply,return )

Float FlxWaveEffect_obj::calculateOffset( Float p){
	HX_STACK_FRAME("flixel.addons.effects.chainable.FlxWaveEffect","calculateOffset",0x0d360f5f,"flixel.addons.effects.chainable.FlxWaveEffect.calculateOffset","flixel/addons/effects/chainable/FlxWaveEffect.hx",182,0x614f926c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(183)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		Float tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		int tmp2 = this->wavelength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Float tmp4 = this->_time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		Float f = tmp5;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(183)
		hx::MultEq(f,((Float)0.3183098862));
		HX_STACK_LINE(183)
		bool tmp6 = (f > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		if ((tmp6)){
			HX_STACK_LINE(183)
			Float tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(183)
			int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			int tmp9 = (int(tmp8) >> int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			int tmp10 = (int(tmp9) << int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			hx::SubEq(f,tmp10);
		}
		else{
			HX_STACK_LINE(183)
			bool tmp7 = (f < (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(183)
			if ((tmp7)){
				HX_STACK_LINE(183)
				Float tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(183)
				int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(183)
				int tmp11 = (int(tmp10) >> int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(183)
				int tmp12 = (int(tmp11) << int((int)1));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(183)
				hx::AddEq(f,tmp12);
			}
		}
		HX_STACK_LINE(183)
		bool tmp7 = (f > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		if ((tmp7)){
			HX_STACK_LINE(183)
			Float tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			Float tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			Float tmp10 = f;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			Float tmp11 = ((Float)-7.2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(183)
			Float tmp12 = (f * ((Float)3.6));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(183)
			Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			Float tmp15 = (((Float)0.5) + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(183)
			Float tmp16 = (tmp9 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			Float tmp17 = (((Float)3.1) + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			tmp = (tmp8 * tmp17);
		}
		else{
			HX_STACK_LINE(183)
			Float tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			Float tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			Float tmp10 = f;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			Float tmp11 = (f * ((Float)3.6));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(183)
			Float tmp12 = (((Float)7.2) + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(183)
			Float tmp14 = (((Float)0.5) + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			Float tmp15 = (tmp9 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(183)
			Float tmp16 = (((Float)3.1) - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			tmp = (tmp8 * tmp16);
		}
	}
	HX_STACK_LINE(183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,calculateOffset,return )


FlxWaveEffect_obj::FlxWaveEffect_obj()
{
}

void FlxWaveEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxWaveEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(wavelength,"wavelength");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_END_CLASS();
}

void FlxWaveEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(wavelength,"wavelength");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
}

Dynamic FlxWaveEffect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wavelength") ) { return wavelength; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculateOffset") ) { return calculateOffset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxWaveEffect_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::flixel::addons::effects::chainable::FlxWaveMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::flixel::addons::effects::chainable::FlxWaveDirection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wavelength") ) { wavelength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxWaveEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("wavelength","\x5f","\x8b","\x56","\xb4"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	outFields->push(HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_pixels","\xcc","\x00","\x21","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxWaveEffect_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxWaveEffect_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::addons::effects::chainable::FlxWaveMode*/ ,(int)offsetof(FlxWaveEffect_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{hx::fsObject /*::flixel::addons::effects::chainable::FlxWaveDirection*/ ,(int)offsetof(FlxWaveEffect_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsInt,(int)offsetof(FlxWaveEffect_obj,wavelength),HX_HCSTRING("wavelength","\x5f","\x8b","\x56","\xb4")},
	{hx::fsInt,(int)offsetof(FlxWaveEffect_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,_time),HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxWaveEffect_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxWaveEffect_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxWaveEffect_obj,_pixels),HX_HCSTRING("_pixels","\xcc","\x00","\x21","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("wavelength","\x5f","\x8b","\x56","\xb4"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_pixels","\xcc","\x00","\x21","\xfb"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("calculateOffset","\x99","\xb1","\x69","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWaveEffect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWaveEffect_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxWaveEffect_obj::__mClass;

void FlxWaveEffect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.effects.chainable.FlxWaveEffect","\x34","\x52","\x5a","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxWaveEffect_obj >;
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
} // end namespace addons
} // end namespace effects
} // end namespace chainable
