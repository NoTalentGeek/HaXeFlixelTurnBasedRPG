#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#define INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveDirection)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class FlxWaveDirection_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxWaveDirection_obj OBJ_;

	public:
		FlxWaveDirection_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.effects.chainable.FlxWaveDirection","\x7c","\x92","\xbb","\x6f"); }
		::String __ToString() const { return HX_HCSTRING("FlxWaveDirection.","\x1a","\xfc","\x89","\x88") + tag; }

		static ::flixel::addons::effects::chainable::FlxWaveDirection HORIZONTAL;
		static inline ::flixel::addons::effects::chainable::FlxWaveDirection HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::flixel::addons::effects::chainable::FlxWaveDirection VERTICAL;
		static inline ::flixel::addons::effects::chainable::FlxWaveDirection VERTICAL_dyn() { return VERTICAL; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection */ 
