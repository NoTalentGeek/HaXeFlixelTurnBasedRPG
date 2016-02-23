#include <hxcpp.h>

#ifndef INCLUDED_ObjectCoin
#include <ObjectCoin.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void ObjectCoin_obj::__construct(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat)
{
HX_STACK_FRAME("ObjectCoin","new",0x3aab1902,"ObjectCoin.new","ObjectCoin.hx",24,0x6b067cae)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__xFloat,"_xFloat")
HX_STACK_ARG(__o__yFloat,"_yFloat")
Float _xFloat = __o__xFloat.Default(0);
Float _yFloat = __o__yFloat.Default(0);
{
	HX_STACK_LINE(26)
	Float tmp = _xFloat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = _yFloat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(27)
	this->loadGraphic(HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"),false,(int)8,(int)8,null(),null());
}
;
	return null();
}

//ObjectCoin_obj::~ObjectCoin_obj() { }

Dynamic ObjectCoin_obj::__CreateEmpty() { return  new ObjectCoin_obj; }
hx::ObjectPtr< ObjectCoin_obj > ObjectCoin_obj::__new(hx::Null< Float >  __o__xFloat,hx::Null< Float >  __o__yFloat)
{  hx::ObjectPtr< ObjectCoin_obj > _result_ = new ObjectCoin_obj();
	_result_->__construct(__o__xFloat,__o__yFloat);
	return _result_;}

Dynamic ObjectCoin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectCoin_obj > _result_ = new ObjectCoin_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ObjectCoin_obj::kill( ){
{
		HX_STACK_FRAME("ObjectCoin","kill",0x191224bc,"ObjectCoin.kill","ObjectCoin.hx",36,0x6b067cae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->set_alive(false);
		HX_STACK_LINE(43)
		Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Float tmp1 = (tmp - (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectCoin.hx",41,0x6b067cae)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp2 = _Function_1_1::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Dynamic tmp3 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Dynamic tmp4 = this->KillFinishVoid_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectCoin.hx",46,0x6b067cae)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp3,false);
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp5 = _Function_1_2::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp2,((Float)0.66),tmp5);
	}
return null();
}


Void ObjectCoin_obj::KillFinishVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectCoin","KillFinishVoid",0x4992d543,"ObjectCoin.KillFinishVoid","ObjectCoin.hx",60,0x6b067cae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(60)
		this->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectCoin_obj,KillFinishVoid,(void))


ObjectCoin_obj::ObjectCoin_obj()
{
}

Dynamic ObjectCoin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"KillFinishVoid") ) { return KillFinishVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("KillFinishVoid","\xa5","\xbe","\x91","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectCoin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectCoin_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectCoin_obj::__mClass;

void ObjectCoin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectCoin","\x10","\x30","\xae","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectCoin_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

