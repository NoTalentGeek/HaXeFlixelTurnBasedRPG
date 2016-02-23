#ifndef INCLUDED_StateGameOver
#define INCLUDED_StateGameOver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(StateGameOver)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  StateGameOver_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef StateGameOver_obj OBJ_;
		StateGameOver_obj();
		Void __construct(bool _winBool,int _scoreInt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="StateGameOver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StateGameOver_obj > __new(bool _winBool,int _scoreInt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StateGameOver_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StateGameOver","\x77","\x0d","\xfa","\x26"); }

		::flixel::text::FlxText hiScoreFlxText;
		::flixel::ui::FlxButton mainMenuFlxButton;
		::flixel::text::FlxText messageFlxText;
		int scoreInt;
		::flixel::FlxSprite scoreFlxSprite;
		::flixel::text::FlxText scoreFlxText;
		::flixel::text::FlxText titleFlxText;
		bool winBool;
		virtual Void create( );

		virtual Void destroy( );

		virtual int CheckHighScoreInt( int _scoreInt);
		Dynamic CheckHighScoreInt_dyn();

		virtual Void ClickMainMenuVoid( );
		Dynamic ClickMainMenuVoid_dyn();

};


#endif /* INCLUDED_StateGameOver */ 
