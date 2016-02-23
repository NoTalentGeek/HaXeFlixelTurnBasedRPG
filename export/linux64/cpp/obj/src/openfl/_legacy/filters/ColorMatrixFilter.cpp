#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_ColorMatrixFilter
#include <openfl/_legacy/filters/ColorMatrixFilter.h>
#endif
namespace openfl{
namespace _legacy{
namespace filters{

Void ColorMatrixFilter_obj::__construct(Array< Float > matrix)
{
HX_STACK_FRAME("openfl._legacy.filters.ColorMatrixFilter","new",0xf1047a57,"openfl._legacy.filters.ColorMatrixFilter.new","openfl/_legacy/filters/ColorMatrixFilter.hx",10,0x96384b7c)
HX_STACK_THIS(this)
HX_STACK_ARG(matrix,"matrix")
{
	HX_STACK_LINE(12)
	super::__construct(HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"));
	HX_STACK_LINE(14)
	bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	if ((tmp)){
		HX_STACK_LINE(16)
		matrix = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0);
	}
	HX_STACK_LINE(20)
	this->matrix = matrix;
}
;
	return null();
}

//ColorMatrixFilter_obj::~ColorMatrixFilter_obj() { }

Dynamic ColorMatrixFilter_obj::__CreateEmpty() { return  new ColorMatrixFilter_obj; }
hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__new(Array< Float > matrix)
{  hx::ObjectPtr< ColorMatrixFilter_obj > _result_ = new ColorMatrixFilter_obj();
	_result_->__construct(matrix);
	return _result_;}

Dynamic ColorMatrixFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrixFilter_obj > _result_ = new ColorMatrixFilter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::filters::BitmapFilter ColorMatrixFilter_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.filters.ColorMatrixFilter","clone",0x460b6914,"openfl._legacy.filters.ColorMatrixFilter.clone","openfl/_legacy/filters/ColorMatrixFilter.hx",25,0x96384b7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::openfl::_legacy::filters::ColorMatrixFilter tmp = ::openfl::_legacy::filters::ColorMatrixFilter_obj::__new(this->matrix);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}



ColorMatrixFilter_obj::ColorMatrixFilter_obj()
{
}

void ColorMatrixFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixFilter);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	::openfl::_legacy::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrixFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	::openfl::_legacy::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColorMatrixFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorMatrixFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMatrixFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColorMatrixFilter_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorMatrixFilter_obj::__mClass;

void ColorMatrixFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filters.ColorMatrixFilter","\xe5","\x02","\xdd","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorMatrixFilter_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters
