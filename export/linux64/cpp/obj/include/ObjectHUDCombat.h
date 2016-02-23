#ifndef INCLUDED_ObjectHUDCombat
#define INCLUDED_ObjectHUDCombat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(EnumOutcome)
HX_DECLARE_CLASS0(ObjectEnemy)
HX_DECLARE_CLASS0(ObjectHUDCombat)
HX_DECLARE_CLASS0(ObjectPlayer)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  ObjectHUDCombat_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef ObjectHUDCombat_obj OBJ_;
		ObjectHUDCombat_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectHUDCombat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectHUDCombat_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectHUDCombat_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectHUDCombat","\x6c","\xb5","\x0f","\xa3"); }

		::EnumOutcome outcomeEnumOutcome;
		::ObjectEnemy passedObjectEnemy;
		int playerHealthInt;
		::flixel::FlxSprite backFlxSprite;
		::ObjectEnemy enemyObjectEnemy;
		::ObjectPlayer playerObjectPlayer;
		::flixel::ui::FlxBar enemyHealthFlxBar;
		int enemyHealthInt;
		int enemyHealthMaxInt;
		::flixel::text::FlxText playerHealthFlxText;
		Array< ::Dynamic > damageFlxTextArray;
		Float alphaFloat;
		Array< ::Dynamic > choiceFlxTextArray;
		::flixel::_system::FlxSound combatFlxSound;
		::flixel::_system::FlxSound fledFlxSound;
		::flixel::_system::FlxSound hurtFlxSound;
		::flixel::_system::FlxSound loseFlxSound;
		::flixel::_system::FlxSound missFlxSound;
		::flixel::FlxSprite pointerFlxSprite;
		::flixel::text::FlxText resultTextObject;
		::flixel::FlxSprite screenFlxSprite;
		int selectIndexInt;
		::flixel::_system::FlxSound selectFlxSound;
		bool waitBool;
		::flixel::_system::FlxSound winFlxSound;
		virtual Void destroy( );

		virtual Void update( Float _elapsedFloat);

		virtual Void DoneDamageInVoid( ::flixel::tweens::FlxTween _);
		Dynamic DoneDamageInVoid_dyn();

		virtual Void DoneDamageOutVoid( ::flixel::tweens::FlxTween _);
		Dynamic DoneDamageOutVoid_dyn();

		virtual Void DoneResultInVoid( ::flixel::tweens::FlxTween _);
		Dynamic DoneResultInVoid_dyn();

		virtual Void EnemyAttackVoid( );
		Dynamic EnemyAttackVoid_dyn();

		virtual Void FinishFadeInVoid( ::flixel::tweens::FlxTween _);
		Dynamic FinishFadeInVoid_dyn();

		virtual Void FinishFadeOutVoid( ::flixel::tweens::FlxTween _);
		Dynamic FinishFadeOutVoid_dyn();

		virtual Void InitCombatVoid( int _playerHealthInt,::ObjectEnemy _passedObjectEnemy);
		Dynamic InitCombatVoid_dyn();

		virtual Void MakeChoiceVoid( );
		Dynamic MakeChoiceVoid_dyn();

		virtual Void MovePointerVoid( );
		Dynamic MovePointerVoid_dyn();

		virtual Void UpdateAlphaVoid( Float _valueFloat);
		Dynamic UpdateAlphaVoid_dyn();

		virtual Void UpdateDamageAlphaVoid( Float _valueFloat);
		Dynamic UpdateDamageAlphaVoid_dyn();

		virtual Void UpdateDamageYVoid( Float _valueFloat);
		Dynamic UpdateDamageYVoid_dyn();

		virtual Void UpdatePlayerHealthVoid( );
		Dynamic UpdatePlayerHealthVoid_dyn();

};


#endif /* INCLUDED_ObjectHUDCombat */ 
