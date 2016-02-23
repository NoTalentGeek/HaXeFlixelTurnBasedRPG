#include <hxcpp.h>

#ifndef INCLUDED_ObjectHUD
#include <ObjectHUD.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void ObjectHUD_obj::__construct()
{
HX_STACK_FRAME("ObjectHUD","new",0x5db9dc0a,"ObjectHUD.new","ObjectHUD.hx",39,0x555ef2a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	super::__construct(null());
	HX_STACK_LINE(43)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::flixel::FlxSprite tmp2 = tmp->makeGraphic(tmp1,(int)20,(int)-16777216,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->backFlxSprite = tmp2;
	HX_STACK_LINE(44)
	::flixel::FlxSprite tmp3 = this->backFlxSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	::flixel::util::FlxSpriteUtil_obj::drawRect(tmp3,(int)0,(int)19,tmp4,(int)1,(int)-1,null(),null());
	HX_STACK_LINE(46)
	::flixel::text::FlxText tmp5 = ::flixel::text::FlxText_obj::__new((int)16,(int)2,(int)0,HX_HCSTRING("3/3","\x17","\xdc","\x26","\x00"),(int)8,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	this->healthFlxText = tmp5;
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp6 = this->healthFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		::flixel::text::FlxText _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW);
		HX_STACK_LINE(47)
		_this->set_borderColor((int)-8355712);
		HX_STACK_LINE(47)
		_this->set_borderSize((int)1);
		HX_STACK_LINE(47)
		_this->set_borderQuality((int)1);
		HX_STACK_LINE(47)
		_this;
	}
	HX_STACK_LINE(50)
	::flixel::text::FlxText tmp6 = this->healthFlxText;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	::flixel::text::FlxText tmp8 = this->healthFlxText;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	::flixel::FlxSprite tmp13 = ::flixel::FlxSprite_obj::__new((int)4,tmp12,HX_HCSTRING("assets/images/health.png","\x42","\x7f","\x55","\x20"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(48)
	this->healthFlxSprite = tmp13;
	HX_STACK_LINE(56)
	::flixel::text::FlxText tmp14 = ::flixel::text::FlxText_obj::__new((int)0,(int)2,(int)0,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)8,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(56)
	this->moneyFlxText = tmp14;
	HX_STACK_LINE(57)
	::flixel::text::FlxText tmp15 = this->moneyFlxText;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(57)
	tmp15->set_alignment(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::flixel::text::FlxText tmp16 = this->moneyFlxText;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(58)
		::flixel::text::FlxText _this = tmp16;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(58)
		_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW);
		HX_STACK_LINE(58)
		_this->set_borderColor((int)-8355712);
		HX_STACK_LINE(58)
		_this->set_borderSize((int)1);
		HX_STACK_LINE(58)
		_this->set_borderQuality((int)1);
		HX_STACK_LINE(58)
		_this;
	}
	HX_STACK_LINE(63)
	int tmp16 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(63)
	int tmp17 = (tmp16 - (int)12);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(64)
	::flixel::text::FlxText tmp18 = this->moneyFlxText;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(64)
	Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(64)
	::flixel::text::FlxText tmp20 = this->moneyFlxText;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(64)
	Float tmp21 = tmp20->get_height();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(64)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(64)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(64)
	Float tmp24 = (tmp23 - (int)4);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(62)
	::flixel::FlxSprite tmp25 = ::flixel::FlxSprite_obj::__new(tmp17,tmp24,HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(62)
	this->moneyFlxSprite = tmp25;
	HX_STACK_LINE(70)
	::flixel::text::FlxText tmp26 = this->moneyFlxText;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(70)
	::flixel::FlxSprite tmp27 = this->moneyFlxSprite;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(70)
	Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(70)
	::flixel::text::FlxText tmp29 = this->moneyFlxText;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(70)
	Float tmp30 = tmp29->get_width();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(70)
	Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(70)
	Float tmp32 = (tmp31 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(70)
	tmp26->set_x(tmp32);
	HX_STACK_LINE(75)
	::flixel::FlxSprite tmp33 = this->backFlxSprite;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(75)
	this->add(tmp33);
	HX_STACK_LINE(76)
	::flixel::FlxSprite tmp34 = this->healthFlxSprite;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(76)
	this->add(tmp34);
	HX_STACK_LINE(77)
	::flixel::text::FlxText tmp35 = this->healthFlxText;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(77)
	this->add(tmp35);
	HX_STACK_LINE(78)
	::flixel::FlxSprite tmp36 = this->moneyFlxSprite;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(78)
	this->add(tmp36);
	HX_STACK_LINE(79)
	::flixel::text::FlxText tmp37 = this->moneyFlxText;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(79)
	this->add(tmp37);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Void run(::flixel::FlxSprite _flxSprite){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectHUD.hx",83,0x555ef2a6)
		HX_STACK_ARG(_flxSprite,"_flxSprite")
		{
			HX_STACK_LINE(83)
			_flxSprite->scrollFactor->set((int)0,(int)0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(82)
	this->forEach( Dynamic(new _Function_1_1()),null());
}
;
	return null();
}

//ObjectHUD_obj::~ObjectHUD_obj() { }

Dynamic ObjectHUD_obj::__CreateEmpty() { return  new ObjectHUD_obj; }
hx::ObjectPtr< ObjectHUD_obj > ObjectHUD_obj::__new()
{  hx::ObjectPtr< ObjectHUD_obj > _result_ = new ObjectHUD_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectHUD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectHUD_obj > _result_ = new ObjectHUD_obj();
	_result_->__construct();
	return _result_;}

Void ObjectHUD_obj::UpdateVoid( hx::Null< int >  __o__healthInt,hx::Null< int >  __o__moneyInt){
int _healthInt = __o__healthInt.Default(0);
int _moneyInt = __o__moneyInt.Default(0);
	HX_STACK_FRAME("ObjectHUD","UpdateVoid",0xdf7acfb3,"ObjectHUD.UpdateVoid","ObjectHUD.hx",94,0x555ef2a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_healthInt,"_healthInt")
	HX_STACK_ARG(_moneyInt,"_moneyInt")
{
		HX_STACK_LINE(96)
		::flixel::text::FlxText tmp = this->healthFlxText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::String tmp1 = (_healthInt + HX_HCSTRING("/3","\x24","\x29","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp->set_text(tmp1);
		HX_STACK_LINE(97)
		::flixel::text::FlxText tmp2 = this->moneyFlxText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		int tmp3 = _moneyInt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		tmp2->set_text(tmp4);
		HX_STACK_LINE(98)
		::flixel::text::FlxText tmp5 = this->moneyFlxText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::flixel::FlxSprite tmp6 = this->moneyFlxSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		::flixel::text::FlxText tmp8 = this->moneyFlxText;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		Float tmp9 = tmp8->get_width();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		tmp5->set_x(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectHUD_obj,UpdateVoid,(void))


ObjectHUD_obj::ObjectHUD_obj()
{
}

void ObjectHUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectHUD);
	HX_MARK_MEMBER_NAME(backFlxSprite,"backFlxSprite");
	HX_MARK_MEMBER_NAME(healthFlxSprite,"healthFlxSprite");
	HX_MARK_MEMBER_NAME(healthFlxText,"healthFlxText");
	HX_MARK_MEMBER_NAME(moneyFlxSprite,"moneyFlxSprite");
	HX_MARK_MEMBER_NAME(moneyFlxText,"moneyFlxText");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectHUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backFlxSprite,"backFlxSprite");
	HX_VISIT_MEMBER_NAME(healthFlxSprite,"healthFlxSprite");
	HX_VISIT_MEMBER_NAME(healthFlxText,"healthFlxText");
	HX_VISIT_MEMBER_NAME(moneyFlxSprite,"moneyFlxSprite");
	HX_VISIT_MEMBER_NAME(moneyFlxText,"moneyFlxText");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectHUD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moneyFlxText") ) { return moneyFlxText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxSprite") ) { return backFlxSprite; }
		if (HX_FIELD_EQ(inName,"healthFlxText") ) { return healthFlxText; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moneyFlxSprite") ) { return moneyFlxSprite; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"healthFlxSprite") ) { return healthFlxSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectHUD_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"moneyFlxText") ) { moneyFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxSprite") ) { backFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthFlxText") ) { healthFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moneyFlxSprite") ) { moneyFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"healthFlxSprite") ) { healthFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectHUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17"));
	outFields->push(HX_HCSTRING("healthFlxSprite","\xdb","\xb9","\xda","\x47"));
	outFields->push(HX_HCSTRING("healthFlxText","\x03","\x69","\x9e","\xe9"));
	outFields->push(HX_HCSTRING("moneyFlxSprite","\xb7","\xd3","\xfb","\x62"));
	outFields->push(HX_HCSTRING("moneyFlxText","\xdf","\x13","\x5a","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUD_obj,backFlxSprite),HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUD_obj,healthFlxSprite),HX_HCSTRING("healthFlxSprite","\xdb","\xb9","\xda","\x47")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(ObjectHUD_obj,healthFlxText),HX_HCSTRING("healthFlxText","\x03","\x69","\x9e","\xe9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUD_obj,moneyFlxSprite),HX_HCSTRING("moneyFlxSprite","\xb7","\xd3","\xfb","\x62")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(ObjectHUD_obj,moneyFlxText),HX_HCSTRING("moneyFlxText","\xdf","\x13","\x5a","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17"),
	HX_HCSTRING("healthFlxSprite","\xdb","\xb9","\xda","\x47"),
	HX_HCSTRING("healthFlxText","\x03","\x69","\x9e","\xe9"),
	HX_HCSTRING("moneyFlxSprite","\xb7","\xd3","\xfb","\x62"),
	HX_HCSTRING("moneyFlxText","\xdf","\x13","\x5a","\x9e"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectHUD_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectHUD_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectHUD_obj::__mClass;

void ObjectHUD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectHUD","\x18","\xcf","\x4c","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectHUD_obj >;
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

