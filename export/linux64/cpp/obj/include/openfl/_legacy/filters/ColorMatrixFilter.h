#ifndef INCLUDED_openfl__legacy_filters_ColorMatrixFilter
#define INCLUDED_openfl__legacy_filters_ColorMatrixFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,ColorMatrixFilter)
namespace openfl{
namespace _legacy{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  ColorMatrixFilter_obj : public ::openfl::_legacy::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::_legacy::filters::BitmapFilter_obj super;
		typedef ColorMatrixFilter_obj OBJ_;
		ColorMatrixFilter_obj();
		Void __construct(Array< Float > matrix);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.filters.ColorMatrixFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColorMatrixFilter_obj > __new(Array< Float > matrix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorMatrixFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"); }

		Array< Float > matrix;
		virtual ::openfl::_legacy::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters

#endif /* INCLUDED_openfl__legacy_filters_ColorMatrixFilter */ 
