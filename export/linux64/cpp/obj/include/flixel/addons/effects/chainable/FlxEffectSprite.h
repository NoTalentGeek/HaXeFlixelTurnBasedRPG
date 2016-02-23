#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#define INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxEffectSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES  FlxEffectSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxEffectSprite_obj OBJ_;
		FlxEffectSprite_obj();
		Void __construct(::flixel::FlxSprite Target,Array< ::flixel::addons::effects::chainable::IFlxEffect > Effects);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxEffectSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxEffectSprite_obj > __new(::flixel::FlxSprite Target,Array< ::flixel::addons::effects::chainable::IFlxEffect > Effects);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxEffectSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxEffectSprite","\xe8","\x68","\xaf","\x66"); }

		bool effectsEnabled;
		::flixel::FlxSprite target;
		Array< ::flixel::addons::effects::chainable::IFlxEffect > effects;
		::flixel::math::FlxPoint _effectOffset;
		virtual Void destroy( );

		virtual ::flixel::math::FlxPoint getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera);

		virtual Void draw( );

		virtual Void update( Float elapsed);

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite */ 
