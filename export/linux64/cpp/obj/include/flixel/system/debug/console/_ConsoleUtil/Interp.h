#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#define INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS5(flixel,_system,debug,console,_ConsoleUtil,Interp)
HX_DECLARE_CLASS1(hscript,Interp)
namespace flixel{
namespace _system{
namespace debug{
namespace console{
namespace _ConsoleUtil{


class HXCPP_CLASS_ATTRIBUTES  Interp_obj : public ::hscript::Interp_obj{
	public:
		typedef ::hscript::Interp_obj super;
		typedef Interp_obj OBJ_;
		Interp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console._ConsoleUtil.Interp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Interp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Interp","\xf4","\xed","\x1a","\xd3"); }

		virtual Dynamic get( Dynamic o,::String f);

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
} // end namespace _ConsoleUtil

#endif /* INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp */ 
