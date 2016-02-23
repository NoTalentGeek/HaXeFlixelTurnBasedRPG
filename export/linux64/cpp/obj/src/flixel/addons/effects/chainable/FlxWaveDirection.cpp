#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxWaveDirection FlxWaveDirection_obj::HORIZONTAL;

::flixel::addons::effects::chainable::FlxWaveDirection FlxWaveDirection_obj::VERTICAL;

HX_DEFINE_CREATE_ENUM(FlxWaveDirection_obj)

int FlxWaveDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return 0;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return 1;
	return super::__FindIndex(inName);
}

int FlxWaveDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return 0;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxWaveDirection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return HORIZONTAL;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWaveDirection_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxWaveDirection_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWaveDirection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWaveDirection_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxWaveDirection_obj::VERTICAL,"VERTICAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxWaveDirection_obj::__mClass;

Dynamic __Create_FlxWaveDirection_obj() { return new FlxWaveDirection_obj; }

void FlxWaveDirection_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.effects.chainable.FlxWaveDirection","\x7c","\x92","\xbb","\x6f"), hx::TCanCast< FlxWaveDirection_obj >,sStaticFields,sMemberFields,
	&__Create_FlxWaveDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWaveDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxWaveDirection_obj::__boot()
{
hx::Static(HORIZONTAL) = hx::CreateEnum< FlxWaveDirection_obj >(HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),0);
hx::Static(VERTICAL) = hx::CreateEnum< FlxWaveDirection_obj >(HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
