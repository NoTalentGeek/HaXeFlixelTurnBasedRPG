#ifndef INCLUDED_flixel_ui_FlxDPadMode
#define INCLUDED_flixel_ui_FlxDPadMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,ui,FlxDPadMode)
namespace flixel{
namespace ui{


class FlxDPadMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxDPadMode_obj OBJ_;

	public:
		FlxDPadMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.ui.FlxDPadMode","\x7c","\x4d","\xaa","\x88"); }
		::String __ToString() const { return HX_HCSTRING("FlxDPadMode.","\xea","\x9e","\xd0","\xbf") + tag; }

		static ::flixel::ui::FlxDPadMode FULL;
		static inline ::flixel::ui::FlxDPadMode FULL_dyn() { return FULL; }
		static ::flixel::ui::FlxDPadMode LEFT_RIGHT;
		static inline ::flixel::ui::FlxDPadMode LEFT_RIGHT_dyn() { return LEFT_RIGHT; }
		static ::flixel::ui::FlxDPadMode NONE;
		static inline ::flixel::ui::FlxDPadMode NONE_dyn() { return NONE; }
		static ::flixel::ui::FlxDPadMode UP_DOWN;
		static inline ::flixel::ui::FlxDPadMode UP_DOWN_dyn() { return UP_DOWN; }
		static ::flixel::ui::FlxDPadMode UP_LEFT_RIGHT;
		static inline ::flixel::ui::FlxDPadMode UP_LEFT_RIGHT_dyn() { return UP_LEFT_RIGHT; }
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxDPadMode */ 
