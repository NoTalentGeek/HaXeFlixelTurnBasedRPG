#ifndef INCLUDED_ObjectCoin
#define INCLUDED_ObjectCoin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ObjectCoin)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  ObjectCoin_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef ObjectCoin_obj OBJ_;
		ObjectCoin_obj();
		Void __construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectCoin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectCoin_obj > __new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectCoin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectCoin","\x10","\x30","\xae","\xba"); }

		virtual Void kill( );

		virtual Void KillFinishVoid( ::flixel::tweens::FlxTween _);
		Dynamic KillFinishVoid_dyn();

};


#endif /* INCLUDED_ObjectCoin */ 
