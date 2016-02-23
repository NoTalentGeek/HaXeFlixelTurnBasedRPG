#ifndef INCLUDED_StateOption
#define INCLUDED_StateOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(StateOption)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  StateOption_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef StateOption_obj OBJ_;
		StateOption_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="StateOption")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StateOption_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StateOption_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StateOption","\x46","\xb8","\x36","\x8a"); }

		::flixel::ui::FlxButton backFlxButton;
		::flixel::ui::FlxButton clearDataFlxButton;
		::flixel::util::FlxSave saveFlxSave;
		::flixel::text::FlxText titleFlxText;
		::flixel::text::FlxText volumeAmountFlxText;
		::flixel::ui::FlxButton volumeDownFlxButton;
		::flixel::ui::FlxBar volumeFlxBar;
		::flixel::text::FlxText volumeFlxText;
		::flixel::ui::FlxButton volumeUpFlxButton;
		::flixel::ui::FlxButton fullScreenButton;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void ClickBack( );
		Dynamic ClickBack_dyn();

		virtual Void ClickClearData( );
		Dynamic ClickClearData_dyn();

		virtual Void ClickVolumeDown( );
		Dynamic ClickVolumeDown_dyn();

		virtual Void ClickVolumeUp( );
		Dynamic ClickVolumeUp_dyn();

		virtual Void UpdateVolumeVoid( );
		Dynamic UpdateVolumeVoid_dyn();

		virtual Void ClickFullScreenVoid( );
		Dynamic ClickFullScreenVoid_dyn();

};


#endif /* INCLUDED_StateOption */ 
