#include <hxcpp.h>

#ifndef INCLUDED_ObjectFiniteStateMachine
#include <ObjectFiniteStateMachine.h>
#endif

Void ObjectFiniteStateMachine_obj::__construct(Dynamic initStateFunction)
{
HX_STACK_FRAME("ObjectFiniteStateMachine","new",0x70aa86f6,"ObjectFiniteStateMachine.new","ObjectFiniteStateMachine.hx",17,0x0d22093a)
HX_STACK_THIS(this)
HX_STACK_ARG(initStateFunction,"initStateFunction")
{
	HX_STACK_LINE(17)
	this->activeStateFunction = initStateFunction;
}
;
	return null();
}

//ObjectFiniteStateMachine_obj::~ObjectFiniteStateMachine_obj() { }

Dynamic ObjectFiniteStateMachine_obj::__CreateEmpty() { return  new ObjectFiniteStateMachine_obj; }
hx::ObjectPtr< ObjectFiniteStateMachine_obj > ObjectFiniteStateMachine_obj::__new(Dynamic initStateFunction)
{  hx::ObjectPtr< ObjectFiniteStateMachine_obj > _result_ = new ObjectFiniteStateMachine_obj();
	_result_->__construct(initStateFunction);
	return _result_;}

Dynamic ObjectFiniteStateMachine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectFiniteStateMachine_obj > _result_ = new ObjectFiniteStateMachine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ObjectFiniteStateMachine_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("ObjectFiniteStateMachine","UpdateVoid",0x44d49a47,"ObjectFiniteStateMachine.UpdateVoid","ObjectFiniteStateMachine.hx",21,0x0d22093a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		Dynamic tmp = this->activeStateFunction_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		if ((tmp1)){
			HX_STACK_LINE(21)
			this->activeStateFunction();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectFiniteStateMachine_obj,UpdateVoid,(void))


ObjectFiniteStateMachine_obj::ObjectFiniteStateMachine_obj()
{
}

void ObjectFiniteStateMachine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectFiniteStateMachine);
	HX_MARK_MEMBER_NAME(activeStateFunction,"activeStateFunction");
	HX_MARK_END_CLASS();
}

void ObjectFiniteStateMachine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeStateFunction,"activeStateFunction");
}

Dynamic ObjectFiniteStateMachine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activeStateFunction") ) { return activeStateFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectFiniteStateMachine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"activeStateFunction") ) { activeStateFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectFiniteStateMachine_obj,activeStateFunction),HX_HCSTRING("activeStateFunction","\xa3","\xc0","\xa1","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activeStateFunction","\xa3","\xc0","\xa1","\x0f"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectFiniteStateMachine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectFiniteStateMachine_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectFiniteStateMachine_obj::__mClass;

void ObjectFiniteStateMachine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectFiniteStateMachine","\x04","\x94","\x7a","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectFiniteStateMachine_obj >;
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

