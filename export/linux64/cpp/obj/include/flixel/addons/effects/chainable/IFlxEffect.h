#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#define INCLUDED_flixel_addons_effects_chainable_IFlxEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES  IFlxEffect_obj : public ::flixel::util::IFlxDestroyable_obj{
	public:
		typedef ::flixel::util::IFlxDestroyable_obj super;
		typedef IFlxEffect_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void update( Float elapsed)=0;
virtual Dynamic update_dyn()=0;
		virtual ::openfl::_legacy::display::BitmapData apply( ::openfl::_legacy::display::BitmapData bitmapData)=0;
virtual Dynamic apply_dyn()=0;
};



template<typename IMPL>
class IFlxEffect_delegate_ : public IFlxEffect_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxEffect_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void update( Float elapsed) { return mDelegate->update(elapsed);}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
		::openfl::_legacy::display::BitmapData apply( ::openfl::_legacy::display::BitmapData bitmapData) { return mDelegate->apply(bitmapData);}
		Dynamic apply_dyn() { return mDelegate->apply_dyn();}
		Void destroy( ) { return mDelegate->destroy();}
		Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_IFlxEffect */ 
