#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#include <flixel/system/GraphicVirtualInput.h>
#endif
#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace _system{

Void FlxAssets_obj::__construct()
{
	return null();
}

//FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::drawLogo( ::openfl::_legacy::display::Graphics graph){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",113,0xd3ac1356)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_LINE(115)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(116)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(117)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(118)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(119)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(120)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(121)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(122)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(123)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(124)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(125)
		graph->endFill();
		HX_STACK_LINE(128)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(129)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(130)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(131)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(132)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(133)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(134)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(135)
		graph->endFill();
		HX_STACK_LINE(138)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(139)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(140)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(141)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(142)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(143)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(144)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(145)
		graph->endFill();
		HX_STACK_LINE(148)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(149)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(150)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(151)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(152)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(153)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(154)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(155)
		graph->endFill();
		HX_STACK_LINE(158)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(159)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(160)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(161)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(162)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(163)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(164)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(165)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",169,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(170)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = ::openfl::_legacy::Assets_obj::exists(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(171)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		return tmp3;
	}
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		::String tmp3 = (HX_HCSTRING("Could not find a BitmapData asset with ID '","\x5f","\x79","\xa9","\x21") + id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		::String tmp4 = (tmp3 + HX_HCSTRING("'.","\x27","\x22","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::flixel::_system::debug::log::LogStyle tmp5 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp4,tmp5,true);
	}
	HX_STACK_LINE(173)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapFromClass( ::hx::Class source){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapFromClass",0x223d9eaf,"flixel.system.FlxAssets.getBitmapFromClass","flixel/system/FlxAssets.hx",183,0xd3ac1356)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(184)
	::hx::Class tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	::openfl::_legacy::display::BitmapData tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapFromClass,return )

::openfl::_legacy::display::BitmapData FlxAssets_obj::resolveBitmapData( Dynamic Graphic){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveBitmapData",0x02df705f,"flixel.system.FlxAssets.resolveBitmapData","flixel/system/FlxAssets.hx",198,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_LINE(199)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	if ((tmp1)){
		HX_STACK_LINE(201)
		::openfl::_legacy::display::BitmapData tmp2 = ((::openfl::_legacy::display::BitmapData)(Graphic));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		return tmp2;
	}
	else{
		HX_STACK_LINE(203)
		Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		if ((tmp3)){
			HX_STACK_LINE(205)
			::hx::Class tmp4 = ((::hx::Class)(Graphic));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			::openfl::_legacy::display::BitmapData tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			return tmp5;
		}
		else{
			HX_STACK_LINE(207)
			Dynamic tmp4 = Graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			if ((tmp5)){
				HX_STACK_LINE(209)
				Dynamic tmp6 = Graphic;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(209)
				bool tmp7 = ::openfl::_legacy::Assets_obj::exists(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(209)
				::openfl::_legacy::display::BitmapData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				if ((tmp7)){
					HX_STACK_LINE(209)
					Dynamic tmp9 = Graphic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					tmp8 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp9,false);
				}
				else{
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						::flixel::_system::frontEnds::LogFrontEnd tmp9 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(209)
						::String tmp10 = (HX_HCSTRING("Could not find a BitmapData asset with ID '","\x5f","\x79","\xa9","\x21") + Graphic);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(209)
						::String tmp11 = (tmp10 + HX_HCSTRING("'.","\x27","\x22","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(209)
						::flixel::_system::debug::log::LogStyle tmp12 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(209)
						tmp9->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp11,tmp12,true);
					}
					HX_STACK_LINE(209)
					tmp8 = null();
				}
				HX_STACK_LINE(209)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(212)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,resolveBitmapData,return )

::String FlxAssets_obj::resolveKey( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.system.FlxAssets","resolveKey",0xd790f639,"flixel.system.FlxAssets.resolveKey","flixel/system/FlxAssets.hx",227,0xd3ac1356)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(228)
	bool tmp = (Key != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	if ((tmp)){
		HX_STACK_LINE(230)
		::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		return tmp1;
	}
	HX_STACK_LINE(233)
	Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	if ((tmp2)){
		HX_STACK_LINE(235)
		::String tmp3 = Key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		return tmp3;
	}
	else{
		HX_STACK_LINE(237)
		Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		if ((tmp4)){
			HX_STACK_LINE(239)
			::hx::Class tmp5 = ((::hx::Class)(Graphic));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			return tmp6;
		}
		else{
			HX_STACK_LINE(241)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(241)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			if ((tmp6)){
				HX_STACK_LINE(243)
				Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(246)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,resolveKey,return )

::openfl::_legacy::media::Sound FlxAssets_obj::getSound( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",250,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(251)
	::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(255)
	extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
	HX_STACK_LINE(257)
	::String tmp = (id + extension);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	::openfl::_legacy::media::Sound tmp1 = ::openfl::_legacy::Assets_obj::getSound(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAssets_obj::getVirtualInputFrames( ){
	HX_STACK_FRAME("flixel.system.FlxAssets","getVirtualInputFrames",0xfe1716d5,"flixel.system.FlxAssets.getVirtualInputFrames","flixel/system/FlxAssets.hx",261,0xd3ac1356)
	HX_STACK_LINE(262)
	::flixel::graphics::FlxGraphic tmp = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::_system::GraphicVirtualInput >(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	::flixel::graphics::FlxGraphic graphic = tmp;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(263)
	::flixel::graphics::FlxGraphic tmp1 = graphic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	::flixel::_system::VirtualInputData tmp2 = ::flixel::_system::VirtualInputData_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(263)
	::flixel::graphics::frames::FlxAtlasFrames tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(263)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,getVirtualInputFrames,return )


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolveKey") ) { outValue = resolveKey_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = FONT_DEFAULT; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = FONT_DEBUGGER; return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolveBitmapData") ) { outValue = resolveBitmapData_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapFromClass") ) { outValue = getBitmapFromClass_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getVirtualInputFrames") ) { outValue = getVirtualInputFrames_dyn(); return true;  }
	}
	return false;
}

bool FlxAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2")},
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

hx::Class FlxAssets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2"),
	HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea"),
	HX_HCSTRING("drawLogo","\x8f","\x49","\x21","\x5c"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBitmapFromClass","\x89","\xdc","\x79","\xc1"),
	HX_HCSTRING("resolveBitmapData","\xc5","\x2b","\x67","\xfa"),
	HX_HCSTRING("resolveKey","\x13","\xca","\xae","\xf6"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getVirtualInputFrames","\x3b","\x7d","\x77","\x6e"),
	::String(null()) };

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxAssets","\x88","\x16","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAssets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAssets_obj >;
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

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_HCSTRING("Nokia Cellphone FC Small","\xd6","\x2f","\x44","\xca");
	FONT_DEBUGGER= HX_HCSTRING("Monsterrat","\x2b","\x92","\x73","\x63");
}

} // end namespace flixel
} // end namespace system
