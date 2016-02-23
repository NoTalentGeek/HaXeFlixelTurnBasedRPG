#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxActionMode
#include <flixel/ui/FlxActionMode.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxActionMode FlxActionMode_obj::A;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B_C;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B_X_Y;

::flixel::ui::FlxActionMode FlxActionMode_obj::NONE;

HX_DEFINE_CREATE_ENUM(FlxActionMode_obj)

int FlxActionMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return 1;
	if (inName==HX_HCSTRING("A_B","\x84","\xa5","\x31","\x00")) return 2;
	if (inName==HX_HCSTRING("A_B_C","\x88","\x61","\x09","\xac")) return 3;
	if (inName==HX_HCSTRING("A_B_X_Y","\xf7","\x15","\x5b","\xca")) return 4;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	return super::__FindIndex(inName);
}

int FlxActionMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("A_B","\x84","\xa5","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("A_B_C","\x88","\x61","\x09","\xac")) return 0;
	if (inName==HX_HCSTRING("A_B_X_Y","\xf7","\x15","\x5b","\xca")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxActionMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return A;
	if (inName==HX_HCSTRING("A_B","\x84","\xa5","\x31","\x00")) return A_B;
	if (inName==HX_HCSTRING("A_B_C","\x88","\x61","\x09","\xac")) return A_B_C;
	if (inName==HX_HCSTRING("A_B_X_Y","\xf7","\x15","\x5b","\xca")) return A_B_X_Y;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("A_B","\x84","\xa5","\x31","\x00"),
	HX_HCSTRING("A_B_C","\x88","\x61","\x09","\xac"),
	HX_HCSTRING("A_B_X_Y","\xf7","\x15","\x5b","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxActionMode_obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxActionMode_obj::A_B,"A_B");
	HX_MARK_MEMBER_NAME(FlxActionMode_obj::A_B_C,"A_B_C");
	HX_MARK_MEMBER_NAME(FlxActionMode_obj::A_B_X_Y,"A_B_X_Y");
	HX_MARK_MEMBER_NAME(FlxActionMode_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::A_B,"A_B");
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::A_B_C,"A_B_C");
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::A_B_X_Y,"A_B_X_Y");
	HX_VISIT_MEMBER_NAME(FlxActionMode_obj::NONE,"NONE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxActionMode_obj::__mClass;

Dynamic __Create_FlxActionMode_obj() { return new FlxActionMode_obj; }

void FlxActionMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.ui.FlxActionMode","\xe3","\x87","\x3a","\x2d"), hx::TCanCast< FlxActionMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxActionMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxActionMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxActionMode_obj::__boot()
{
hx::Static(A) = hx::CreateEnum< FlxActionMode_obj >(HX_HCSTRING("A","\x41","\x00","\x00","\x00"),1);
hx::Static(A_B) = hx::CreateEnum< FlxActionMode_obj >(HX_HCSTRING("A_B","\x84","\xa5","\x31","\x00"),2);
hx::Static(A_B_C) = hx::CreateEnum< FlxActionMode_obj >(HX_HCSTRING("A_B_C","\x88","\x61","\x09","\xac"),3);
hx::Static(A_B_X_Y) = hx::CreateEnum< FlxActionMode_obj >(HX_HCSTRING("A_B_X_Y","\xf7","\x15","\x5b","\xca"),4);
hx::Static(NONE) = hx::CreateEnum< FlxActionMode_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
}


} // end namespace flixel
} // end namespace ui
