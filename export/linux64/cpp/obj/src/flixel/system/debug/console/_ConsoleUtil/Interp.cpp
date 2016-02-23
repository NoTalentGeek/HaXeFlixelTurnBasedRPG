#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{
namespace _ConsoleUtil{

Void Interp_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.console._ConsoleUtil.Interp","new",0x56cfaa5b,"flixel.system.debug.console._ConsoleUtil.Interp.new","flixel/system/debug/console/ConsoleUtil.hx",153,0x2e8bcde6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(153)
	super::__construct();
}
;
	return null();
}

//Interp_obj::~Interp_obj() { }

Dynamic Interp_obj::__CreateEmpty() { return  new Interp_obj; }
hx::ObjectPtr< Interp_obj > Interp_obj::__new()
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Interp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Interp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("flixel.system.debug.console._ConsoleUtil.Interp","get",0x56ca5a91,"flixel.system.debug.console._ConsoleUtil.Interp.get","flixel/system/debug/console/ConsoleUtil.hx",156,0x2e8bcde6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(157)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	if ((tmp)){
		HX_STACK_LINE(158)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(159)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	return tmp3;
}


Dynamic Interp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("flixel.system.debug.console._ConsoleUtil.Interp","set",0x56d3759d,"flixel.system.debug.console._ConsoleUtil.Interp.set","flixel/system/debug/console/ConsoleUtil.hx",163,0x2e8bcde6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(164)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(165)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(166)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
	HX_STACK_LINE(167)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	return tmp4;
}



Interp_obj::Interp_obj()
{
}

Dynamic Interp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#endif

hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console._ConsoleUtil.Interp","\xe9","\xe0","\xc6","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interp_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
} // end namespace _ConsoleUtil
