#ifndef INCLUDED_ObjectHUD
#define INCLUDED_ObjectHUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(ObjectHUD)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  ObjectHUD_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef ObjectHUD_obj OBJ_;
		ObjectHUD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectHUD")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectHUD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectHUD_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectHUD","\x18","\xcf","\x4c","\xe5"); }

		::flixel::FlxSprite backFlxSprite;
		::flixel::FlxSprite healthFlxSprite;
		::flixel::text::FlxText healthFlxText;
		::flixel::FlxSprite moneyFlxSprite;
		::flixel::text::FlxText moneyFlxText;
		virtual Void UpdateVoid( hx::Null< int >  _healthInt,hx::Null< int >  _moneyInt);
		Dynamic UpdateVoid_dyn();

};


#endif /* INCLUDED_ObjectHUD */ 
