#ifndef INCLUDED_ObjectFiniteStateMachine
#define INCLUDED_ObjectFiniteStateMachine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ObjectFiniteStateMachine)


class HXCPP_CLASS_ATTRIBUTES  ObjectFiniteStateMachine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectFiniteStateMachine_obj OBJ_;
		ObjectFiniteStateMachine_obj();
		Void __construct(Dynamic initStateFunction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectFiniteStateMachine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectFiniteStateMachine_obj > __new(Dynamic initStateFunction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectFiniteStateMachine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectFiniteStateMachine","\x04","\x94","\x7a","\x71"); }

		Dynamic activeStateFunction;
		Dynamic &activeStateFunction_dyn() { return activeStateFunction;}
		virtual Void UpdateVoid( );
		Dynamic UpdateVoid_dyn();

};


#endif /* INCLUDED_ObjectFiniteStateMachine */ 
