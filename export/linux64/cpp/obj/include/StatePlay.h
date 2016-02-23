#ifndef INCLUDED_StatePlay
#define INCLUDED_StatePlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(ObjectCoin)
HX_DECLARE_CLASS0(ObjectEnemy)
HX_DECLARE_CLASS0(ObjectHUD)
HX_DECLARE_CLASS0(ObjectHUDCombat)
HX_DECLARE_CLASS0(ObjectPlayer)
HX_DECLARE_CLASS0(StatePlay)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  StatePlay_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef StatePlay_obj OBJ_;
		StatePlay_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="StatePlay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StatePlay_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatePlay_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StatePlay","\x85","\x8c","\xd4","\xce"); }

		::flixel::_system::FlxSound coinFlxCoin;
		::flixel::group::FlxTypedGroup coinFlxTypedGroup;
		bool endingBool;
		::flixel::group::FlxTypedGroup enemyFlxTypedGroup;
		int healthInt;
		::ObjectHUD hudObjectHUD;
		::ObjectHUDCombat hudObjectHUDCombat;
		bool inCombatBool;
		::flixel::addons::editors::ogmo::FlxOgmoLoader mapFlxOgmoLoader;
		int moneyInt;
		bool pauseBool;
		::ObjectPlayer playerObjectPlayer;
		::flixel::tile::FlxTilemap wallFlxTilemap;
		bool winBool;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( Float _elapsedFloat);

		virtual Void CheckEnemyVisionVoid( ::ObjectEnemy _passedObjectEnemy);
		Dynamic CheckEnemyVisionVoid_dyn();

		virtual Void CollisionCoinPlayerVoid( ::ObjectPlayer _playerObjectPlayer,::ObjectCoin _coinObjectCoin);
		Dynamic CollisionCoinPlayerVoid_dyn();

		virtual Void CollisionEnemyPlayerVoid( ::ObjectPlayer _playerObjectPlayer,::ObjectEnemy _enemyObjectEnemy);
		Dynamic CollisionEnemyPlayerVoid_dyn();

		virtual Void DoneFadeOutVoid( );
		Dynamic DoneFadeOutVoid_dyn();

		virtual Void PlaceEntityVoid( ::String _entityNameString,::Xml _entityDataXml);
		Dynamic PlaceEntityVoid_dyn();

		virtual Void StartCombatVoid( ::ObjectEnemy _enemyObjectEnemy);
		Dynamic StartCombatVoid_dyn();

};


#endif /* INCLUDED_StatePlay */ 
