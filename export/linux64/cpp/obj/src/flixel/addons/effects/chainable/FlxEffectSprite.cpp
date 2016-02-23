#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

Void FlxEffectSprite_obj::__construct(::flixel::FlxSprite Target,Array< ::flixel::addons::effects::chainable::IFlxEffect > Effects)
{
HX_STACK_FRAME("flixel.addons.effects.chainable.FlxEffectSprite","new",0xb885f1f2,"flixel.addons.effects.chainable.FlxEffectSprite.new","flixel/addons/effects/chainable/FlxEffectSprite.hx",20,0xbae4f7a0)
HX_STACK_THIS(this)
HX_STACK_ARG(Target,"Target")
HX_STACK_ARG(Effects,"Effects")
{
	HX_STACK_LINE(25)
	this->effectsEnabled = true;
	HX_STACK_LINE(52)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(54)
	this->target = Target;
	HX_STACK_LINE(55)
	bool tmp = (Effects != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(55)
		this->effects = Effects;
	}
	else{
		HX_STACK_LINE(55)
		this->effects = Array_obj< ::flixel::addons::effects::chainable::IFlxEffect >::__new();
	}
	HX_STACK_LINE(57)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(57)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(57)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(57)
		point->_inPool = false;
		HX_STACK_LINE(57)
		tmp1 = point;
	}
	HX_STACK_LINE(57)
	this->_effectOffset = tmp1;
}
;
	return null();
}

//FlxEffectSprite_obj::~FlxEffectSprite_obj() { }

Dynamic FlxEffectSprite_obj::__CreateEmpty() { return  new FlxEffectSprite_obj; }
hx::ObjectPtr< FlxEffectSprite_obj > FlxEffectSprite_obj::__new(::flixel::FlxSprite Target,Array< ::flixel::addons::effects::chainable::IFlxEffect > Effects)
{  hx::ObjectPtr< FlxEffectSprite_obj > _result_ = new FlxEffectSprite_obj();
	_result_->__construct(Target,Effects);
	return _result_;}

Dynamic FlxEffectSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEffectSprite_obj > _result_ = new FlxEffectSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxEffectSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.effects.chainable.FlxEffectSprite","destroy",0x275d7f8c,"flixel.addons.effects.chainable.FlxEffectSprite.destroy","flixel/addons/effects/chainable/FlxEffectSprite.hx",65,0xbae4f7a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->effects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->effects);
		HX_STACK_LINE(67)
		::flixel::math::FlxPoint tmp = this->_effectOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		this->_effectOffset = tmp1;
		HX_STACK_LINE(68)
		this->target = null();
		HX_STACK_LINE(70)
		this->super::destroy();
	}
return null();
}


::flixel::math::FlxPoint FlxEffectSprite_obj::getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.addons.effects.chainable.FlxEffectSprite","getScreenPosition",0x7753907d,"flixel.addons.effects.chainable.FlxEffectSprite.getScreenPosition","flixel/addons/effects/chainable/FlxEffectSprite.hx",81,0xbae4f7a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp = point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::flixel::FlxCamera tmp1 = Camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp2 = this->super::getScreenPosition(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp3 = this->_effectOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	return tmp4;
}


Void FlxEffectSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.effects.chainable.FlxEffectSprite","draw",0xb61b6a32,"flixel.addons.effects.chainable.FlxEffectSprite.draw","flixel/addons/effects/chainable/FlxEffectSprite.hx",86,0xbae4f7a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		::flixel::FlxSprite tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = tmp->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(89)
			::flixel::FlxSprite tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			tmp2->drawFrame(null());
		}
		HX_STACK_LINE(92)
		::flixel::FlxSprite tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::openfl::_legacy::display::BitmapData tmp3 = tmp2->framePixels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		if ((tmp4)){
			HX_STACK_LINE(93)
			return this->super::draw();
		}
		HX_STACK_LINE(95)
		::openfl::_legacy::display::BitmapData tmp5 = this->get_pixels();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		if ((tmp7)){
			HX_STACK_LINE(95)
			::openfl::_legacy::display::BitmapData tmp9 = this->get_pixels();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			::openfl::_legacy::display::BitmapData tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			::openfl::_legacy::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			int tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp15 = this->target;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(95)
			int tmp18 = tmp17->framePixels->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			tmp8 = (tmp14 == tmp20);
		}
		else{
			HX_STACK_LINE(95)
			tmp8 = false;
		}
		HX_STACK_LINE(95)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		if ((tmp8)){
			HX_STACK_LINE(95)
			::openfl::_legacy::display::BitmapData tmp10 = this->get_pixels();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			::openfl::_legacy::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			int tmp12 = tmp11->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			int tmp16 = tmp15->framePixels->get_height();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(95)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(95)
			tmp9 = (tmp13 == tmp17);
		}
		else{
			HX_STACK_LINE(95)
			tmp9 = false;
		}
		HX_STACK_LINE(95)
		if ((tmp9)){
			HX_STACK_LINE(97)
			::openfl::_legacy::display::BitmapData tmp10 = this->get_pixels();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			::openfl::_legacy::display::BitmapData tmp11 = this->get_pixels();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(97)
			::openfl::_legacy::geom::Rectangle tmp12 = tmp11->get_rect();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			tmp10->fillRect(tmp12,(int)0);
			HX_STACK_LINE(98)
			::openfl::_legacy::display::BitmapData tmp13 = this->get_pixels();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(98)
			::flixel::FlxSprite tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(98)
			::openfl::_legacy::display::BitmapData tmp15 = tmp14->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			tmp13->draw(tmp15,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(102)
			::openfl::_legacy::display::BitmapData tmp10 = this->get_pixels();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			::flixel::util::FlxDestroyUtil_obj::dispose(tmp10);
			HX_STACK_LINE(103)
			::flixel::FlxSprite tmp11 = this->target;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			::openfl::_legacy::display::BitmapData tmp12 = tmp11->framePixels->clone();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			this->set_pixels(tmp12);
		}
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp10 = this->_effectOffset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		tmp10->set((int)0,(int)0);
		HX_STACK_LINE(108)
		bool tmp11 = this->effectsEnabled;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		if ((tmp11)){
			HX_STACK_LINE(110)
			::openfl::_legacy::display::BitmapData tmp12 = this->get_pixels();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(110)
			tmp12->lock();
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(111)
				Array< ::flixel::addons::effects::chainable::IFlxEffect > _g1 = this->effects;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(111)
					bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(111)
					if ((tmp14)){
						HX_STACK_LINE(111)
						break;
					}
					HX_STACK_LINE(111)
					::flixel::addons::effects::chainable::IFlxEffect tmp15 = _g1->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(111)
					::flixel::addons::effects::chainable::IFlxEffect effect = tmp15;		HX_STACK_VAR(effect,"effect");
					HX_STACK_LINE(111)
					++(_g);
					HX_STACK_LINE(113)
					bool tmp16 = effect->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(113)
					if ((tmp16)){
						HX_STACK_LINE(115)
						::openfl::_legacy::display::BitmapData tmp17 = this->get_pixels();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(115)
						::openfl::_legacy::display::BitmapData tmp18 = effect->apply(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(115)
						this->set_pixels(tmp18);
						HX_STACK_LINE(116)
						bool tmp19 = (effect->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(116)
						if ((tmp19)){
							HX_STACK_LINE(118)
							::flixel::math::FlxPoint tmp20 = this->_effectOffset;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(118)
							::flixel::math::FlxPoint tmp21 = effect->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(118)
							tmp20->addPoint(tmp21);
						}
					}
				}
			}
			HX_STACK_LINE(122)
			::openfl::_legacy::display::BitmapData tmp13 = this->get_pixels();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			tmp13->unlock(null());
			HX_STACK_LINE(123)
			::openfl::_legacy::display::BitmapData tmp14 = this->get_pixels();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(123)
			::openfl::_legacy::geom::Rectangle tmp15 = tmp14->get_rect();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(123)
			this->_flashRect = tmp15;
		}
		HX_STACK_LINE(126)
		this->super::draw();
	}
return null();
}


Void FlxEffectSprite_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.effects.chainable.FlxEffectSprite","update",0xaa9f2bb7,"flixel.addons.effects.chainable.FlxEffectSprite.update","flixel/addons/effects/chainable/FlxEffectSprite.hx",133,0xbae4f7a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(134)
		::flixel::FlxSprite tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		::flixel::FlxSprite tmp1 = tmp->animation->_sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		int tmp2 = tmp1->numFrames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		bool tmp3 = (tmp2 > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		if ((tmp3)){
			HX_STACK_LINE(136)
			::flixel::FlxSprite tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			tmp4->updateAnimation(tmp5);
		}
		HX_STACK_LINE(139)
		bool tmp4 = this->effectsEnabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		if ((tmp4)){
			HX_STACK_LINE(141)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			Array< ::flixel::addons::effects::chainable::IFlxEffect > _g1 = this->effects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			while((true)){
				HX_STACK_LINE(141)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				if ((tmp6)){
					HX_STACK_LINE(141)
					break;
				}
				HX_STACK_LINE(141)
				::flixel::addons::effects::chainable::IFlxEffect tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				::flixel::addons::effects::chainable::IFlxEffect effect = tmp7;		HX_STACK_VAR(effect,"effect");
				HX_STACK_LINE(141)
				++(_g);
				HX_STACK_LINE(143)
				bool tmp8 = effect->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				if ((tmp8)){
					HX_STACK_LINE(145)
					Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(145)
					effect->update(tmp9);
				}
			}
		}
		HX_STACK_LINE(150)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		this->super::update(tmp5);
	}
return null();
}



FlxEffectSprite_obj::FlxEffectSprite_obj()
{
}

void FlxEffectSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxEffectSprite);
	HX_MARK_MEMBER_NAME(effectsEnabled,"effectsEnabled");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(effects,"effects");
	HX_MARK_MEMBER_NAME(_effectOffset,"_effectOffset");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxEffectSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(effectsEnabled,"effectsEnabled");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(effects,"effects");
	HX_VISIT_MEMBER_NAME(_effectOffset,"_effectOffset");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxEffectSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { return effects; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_effectOffset") ) { return _effectOffset; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"effectsEnabled") ) { return effectsEnabled; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEffectSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { effects=inValue.Cast< Array< ::flixel::addons::effects::chainable::IFlxEffect > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_effectOffset") ) { _effectOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"effectsEnabled") ) { effectsEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEffectSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("effectsEnabled","\xdf","\x43","\x75","\x92"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e"));
	outFields->push(HX_HCSTRING("_effectOffset","\xe3","\xbb","\x8d","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxEffectSprite_obj,effectsEnabled),HX_HCSTRING("effectsEnabled","\xdf","\x43","\x75","\x92")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxEffectSprite_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Array< ::flixel::addons::effects::chainable::IFlxEffect >*/ ,(int)offsetof(FlxEffectSprite_obj,effects),HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxEffectSprite_obj,_effectOffset),HX_HCSTRING("_effectOffset","\xe3","\xbb","\x8d","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("effectsEnabled","\xdf","\x43","\x75","\x92"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e"),
	HX_HCSTRING("_effectOffset","\xe3","\xbb","\x8d","\x8d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEffectSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEffectSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxEffectSprite_obj::__mClass;

void FlxEffectSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.effects.chainable.FlxEffectSprite","\x00","\xd1","\x0d","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxEffectSprite_obj >;
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
