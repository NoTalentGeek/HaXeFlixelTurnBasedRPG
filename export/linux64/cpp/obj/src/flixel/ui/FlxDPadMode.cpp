#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxDPadMode
#include <flixel/ui/FlxDPadMode.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxDPadMode FlxDPadMode_obj::FULL;

::flixel::ui::FlxDPadMode FlxDPadMode_obj::LEFT_RIGHT;

::flixel::ui::FlxDPadMode FlxDPadMode_obj::NONE;

::flixel::ui::FlxDPadMode FlxDPadMode_obj::UP_DOWN;

::flixel::ui::FlxDPadMode FlxDPadMode_obj::UP_LEFT_RIGHT;

HX_DEFINE_CREATE_ENUM(FlxDPadMode_obj)

int FlxDPadMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return 4;
	if (inName==HX_HCSTRING("LEFT_RIGHT","\x44","\x9a","\x3c","\x9d")) return 2;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("UP_DOWN","\x06","\x28","\x6d","\xab")) return 1;
	if (inName==HX_HCSTRING("UP_LEFT_RIGHT","\xe8","\x54","\x82","\x24")) return 3;
	return super::__FindIndex(inName);
}

int FlxDPadMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return 0;
	if (inName==HX_HCSTRING("LEFT_RIGHT","\x44","\x9a","\x3c","\x9d")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("UP_DOWN","\x06","\x28","\x6d","\xab")) return 0;
	if (inName==HX_HCSTRING("UP_LEFT_RIGHT","\xe8","\x54","\x82","\x24")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxDPadMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return FULL;
	if (inName==HX_HCSTRING("LEFT_RIGHT","\x44","\x9a","\x3c","\x9d")) return LEFT_RIGHT;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("UP_DOWN","\x06","\x28","\x6d","\xab")) return UP_DOWN;
	if (inName==HX_HCSTRING("UP_LEFT_RIGHT","\xe8","\x54","\x82","\x24")) return UP_LEFT_RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("UP_DOWN","\x06","\x28","\x6d","\xab"),
	HX_HCSTRING("LEFT_RIGHT","\x44","\x9a","\x3c","\x9d"),
	HX_HCSTRING("UP_LEFT_RIGHT","\xe8","\x54","\x82","\x24"),
	HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDPadMode_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(FlxDPadMode_obj::LEFT_RIGHT,"LEFT_RIGHT");
	HX_MARK_MEMBER_NAME(FlxDPadMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxDPadMode_obj::UP_DOWN,"UP_DOWN");
	HX_MARK_MEMBER_NAME(FlxDPadMode_obj::UP_LEFT_RIGHT,"UP_LEFT_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::LEFT_RIGHT,"LEFT_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::UP_DOWN,"UP_DOWN");
	HX_VISIT_MEMBER_NAME(FlxDPadMode_obj::UP_LEFT_RIGHT,"UP_LEFT_RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxDPadMode_obj::__mClass;

Dynamic __Create_FlxDPadMode_obj() { return new FlxDPadMode_obj; }

void FlxDPadMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.ui.FlxDPadMode","\x7c","\x4d","\xaa","\x88"), hx::TCanCast< FlxDPadMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxDPadMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDPadMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxDPadMode_obj::__boot()
{
hx::Static(FULL) = hx::CreateEnum< FlxDPadMode_obj >(HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),4);
hx::Static(LEFT_RIGHT) = hx::CreateEnum< FlxDPadMode_obj >(HX_HCSTRING("LEFT_RIGHT","\x44","\x9a","\x3c","\x9d"),2);
hx::Static(NONE) = hx::CreateEnum< FlxDPadMode_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(UP_DOWN) = hx::CreateEnum< FlxDPadMode_obj >(HX_HCSTRING("UP_DOWN","\x06","\x28","\x6d","\xab"),1);
hx::Static(UP_LEFT_RIGHT) = hx::CreateEnum< FlxDPadMode_obj >(HX_HCSTRING("UP_LEFT_RIGHT","\xe8","\x54","\x82","\x24"),3);
}


} // end namespace flixel
} // end namespace ui
