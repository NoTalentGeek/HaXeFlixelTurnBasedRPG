#ifndef INCLUDED_ObjectEnemy
#define INCLUDED_ObjectEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ObjectEnemy)
HX_DECLARE_CLASS0(ObjectFiniteStateMachine)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)


class HXCPP_CLASS_ATTRIBUTES  ObjectEnemy_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef ObjectEnemy_obj OBJ_;
		ObjectEnemy_obj();
		Void __construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat,int _enemyTypeInt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectEnemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectEnemy_obj > __new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat,int _enemyTypeInt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectEnemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectEnemy","\xe9","\xc6","\xdc","\xc3"); }

		Float idleVoidTimerFloat;
		Float moveDirectionFloat;
		::ObjectFiniteStateMachine objectFiniteStateMachine;
		::flixel::_system::FlxSound stepFlxSound;
		int enemyTypeInt;
		::flixel::math::FlxPoint playerPositionFlxPoint;
		bool seePlayerBool;
		Float speedFloat;
		virtual Void destroy( );

		virtual Void draw( );

		virtual Void update( Float _elapsedFloat);

		virtual Void ChangeEnemyVoid( int _enemyTypeInt);
		Dynamic ChangeEnemyVoid_dyn();

		virtual Void ChaseVoid( );
		Dynamic ChaseVoid_dyn();

		virtual Void IdleVoid( );
		Dynamic IdleVoid_dyn();

};


#endif /* INCLUDED_ObjectEnemy */ 
