#include <hxcpp.h>

#ifndef INCLUDED_EnumOutcome
#include <EnumOutcome.h>
#endif

::EnumOutcome EnumOutcome_obj::DEFEAT;

::EnumOutcome EnumOutcome_obj::ESCAPE;

::EnumOutcome EnumOutcome_obj::NONE;

::EnumOutcome EnumOutcome_obj::VICTORY;

HX_DEFINE_CREATE_ENUM(EnumOutcome_obj)

int EnumOutcome_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DEFEAT","\xf3","\x13","\x64","\x19")) return 0;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return 1;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 2;
	if (inName==HX_HCSTRING("VICTORY","\xb2","\x3f","\xde","\xf3")) return 3;
	return super::__FindIndex(inName);
}

int EnumOutcome_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DEFEAT","\xf3","\x13","\x64","\x19")) return 0;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("VICTORY","\xb2","\x3f","\xde","\xf3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumOutcome_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DEFEAT","\xf3","\x13","\x64","\x19")) return DEFEAT;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return ESCAPE;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("VICTORY","\xb2","\x3f","\xde","\xf3")) return VICTORY;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFEAT","\xf3","\x13","\x64","\x19"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("VICTORY","\xb2","\x3f","\xde","\xf3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumOutcome_obj::DEFEAT,"DEFEAT");
	HX_MARK_MEMBER_NAME(EnumOutcome_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(EnumOutcome_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(EnumOutcome_obj::VICTORY,"VICTORY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumOutcome_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumOutcome_obj::DEFEAT,"DEFEAT");
	HX_VISIT_MEMBER_NAME(EnumOutcome_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(EnumOutcome_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(EnumOutcome_obj::VICTORY,"VICTORY");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumOutcome_obj::__mClass;

Dynamic __Create_EnumOutcome_obj() { return new EnumOutcome_obj; }

void EnumOutcome_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumOutcome","\x71","\xdf","\xe2","\xc7"), hx::TCanCast< EnumOutcome_obj >,sStaticFields,sMemberFields,
	&__Create_EnumOutcome_obj, &__Create,
	&super::__SGetClass(), &CreateEnumOutcome_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumOutcome_obj::__boot()
{
hx::Static(DEFEAT) = hx::CreateEnum< EnumOutcome_obj >(HX_HCSTRING("DEFEAT","\xf3","\x13","\x64","\x19"),0);
hx::Static(ESCAPE) = hx::CreateEnum< EnumOutcome_obj >(HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),1);
hx::Static(NONE) = hx::CreateEnum< EnumOutcome_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),2);
hx::Static(VICTORY) = hx::CreateEnum< EnumOutcome_obj >(HX_HCSTRING("VICTORY","\xb2","\x3f","\xde","\xf3"),3);
}


