#ifndef INCLUDED_EnumOutcome
#define INCLUDED_EnumOutcome

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumOutcome)


class EnumOutcome_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumOutcome_obj OBJ_;

	public:
		EnumOutcome_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumOutcome","\x71","\xdf","\xe2","\xc7"); }
		::String __ToString() const { return HX_HCSTRING("EnumOutcome.","\x9d","\xa3","\xa0","\x1e") + tag; }

		static ::EnumOutcome DEFEAT;
		static inline ::EnumOutcome DEFEAT_dyn() { return DEFEAT; }
		static ::EnumOutcome ESCAPE;
		static inline ::EnumOutcome ESCAPE_dyn() { return ESCAPE; }
		static ::EnumOutcome NONE;
		static inline ::EnumOutcome NONE_dyn() { return NONE; }
		static ::EnumOutcome VICTORY;
		static inline ::EnumOutcome VICTORY_dyn() { return VICTORY; }
};


#endif /* INCLUDED_EnumOutcome */ 
