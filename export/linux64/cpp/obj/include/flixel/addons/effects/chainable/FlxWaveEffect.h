#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveDirection)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveMode)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES  FlxWaveEffect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxWaveEffect_obj OBJ_;
		FlxWaveEffect_obj();
		Void __construct(::flixel::addons::effects::chainable::FlxWaveMode Mode,hx::Null< int >  __o_Strength,hx::Null< Float >  __o_Center,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Wavelength,::flixel::addons::effects::chainable::FlxWaveDirection Direction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxWaveEffect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxWaveEffect_obj > __new(::flixel::addons::effects::chainable::FlxWaveMode Mode,hx::Null< int >  __o_Strength,hx::Null< Float >  __o_Center,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Wavelength,::flixel::addons::effects::chainable::FlxWaveDirection Direction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxWaveEffect_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		operator ::flixel::addons::effects::chainable::IFlxEffect_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxWaveEffect","\x1c","\xa0","\xde","\xd8"); }

		bool active;
		::flixel::math::FlxPoint offset;
		::flixel::addons::effects::chainable::FlxWaveMode mode;
		Float speed;
		Float center;
		::flixel::addons::effects::chainable::FlxWaveDirection direction;
		int wavelength;
		int strength;
		Float _time;
		::openfl::_legacy::geom::Point _flashPoint;
		::openfl::_legacy::geom::Rectangle _flashRect;
		::openfl::_legacy::display::BitmapData _pixels;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual ::openfl::_legacy::display::BitmapData apply( ::openfl::_legacy::display::BitmapData bitmapData);
		Dynamic apply_dyn();

		virtual Float calculateOffset( Float p);
		Dynamic calculateOffset_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect */ 
