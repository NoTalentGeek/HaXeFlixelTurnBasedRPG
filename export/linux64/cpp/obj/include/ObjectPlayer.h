#ifndef INCLUDED_ObjectPlayer
#define INCLUDED_ObjectPlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ObjectPlayer)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  ObjectPlayer_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef ObjectPlayer_obj OBJ_;
		ObjectPlayer_obj();
		Void __construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectPlayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectPlayer_obj > __new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectPlayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectPlayer","\xa0","\x43","\xd5","\xd9"); }

		::flixel::_system::FlxSound stepFlxSound;
		Float speedFloat;
		virtual Void destroy( );

		virtual Void update( Float _elapsedFloat);

		virtual Void MovementVoid( );
		Dynamic MovementVoid_dyn();

};


#endif /* INCLUDED_ObjectPlayer */ 
