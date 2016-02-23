#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::ALL;

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::END;

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::START;

HX_DEFINE_CREATE_ENUM(FlxWaveMode_obj)

int FlxWaveMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 2;
	if (inName==HX_HCSTRING("START","\x42","\xac","\xf9","\x01")) return 1;
	return super::__FindIndex(inName);
}

int FlxWaveMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("START","\x42","\xac","\xf9","\x01")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxWaveMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")) return ALL;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return END;
	if (inName==HX_HCSTRING("START","\x42","\xac","\xf9","\x01")) return START;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ALL","\x01","\x95","\x31","\x00"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWaveMode_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(FlxWaveMode_obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxWaveMode_obj::START,"START");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWaveMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWaveMode_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(FlxWaveMode_obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxWaveMode_obj::START,"START");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxWaveMode_obj::__mClass;

Dynamic __Create_FlxWaveMode_obj() { return new FlxWaveMode_obj; }

void FlxWaveMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.effects.chainable.FlxWaveMode","\x46","\x8c","\xcd","\x8e"), hx::TCanCast< FlxWaveMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxWaveMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWaveMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxWaveMode_obj::__boot()
{
hx::Static(ALL) = hx::CreateEnum< FlxWaveMode_obj >(HX_HCSTRING("ALL","\x01","\x95","\x31","\x00"),0);
hx::Static(END) = hx::CreateEnum< FlxWaveMode_obj >(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),2);
hx::Static(START) = hx::CreateEnum< FlxWaveMode_obj >(HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
