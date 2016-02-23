#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#define INCLUDED_flixel_addons_effects_chainable_FlxWaveMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveMode)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class FlxWaveMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxWaveMode_obj OBJ_;

	public:
		FlxWaveMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.effects.chainable.FlxWaveMode","\x46","\x8c","\xcd","\x8e"); }
		::String __ToString() const { return HX_HCSTRING("FlxWaveMode.","\x40","\x18","\xb3","\x03") + tag; }

		static ::flixel::addons::effects::chainable::FlxWaveMode ALL;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode ALL_dyn() { return ALL; }
		static ::flixel::addons::effects::chainable::FlxWaveMode END;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode END_dyn() { return END; }
		static ::flixel::addons::effects::chainable::FlxWaveMode START;
		static inline ::flixel::addons::effects::chainable::FlxWaveMode START_dyn() { return START; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxWaveMode */ 
