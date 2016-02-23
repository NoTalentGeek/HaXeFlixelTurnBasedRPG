#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

//FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > _result_ = new FlxStringUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > _result_ = new FlxStringUtil_obj();
	_result_->__construct();
	return _result_;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",26,0x4e012e33)
	HX_STACK_ARG(StartTicks,"StartTicks")
	HX_STACK_ARG(EndTicks,"EndTicks")
	HX_STACK_LINE(27)
	int tmp = (EndTicks - StartTicks);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Float tmp2 = (Float(tmp1) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::String tmp3 = (tmp2 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",38,0x4e012e33)
	HX_STACK_ARG(Seconds,"Seconds")
	HX_STACK_ARG(ShowMS,"ShowMS")
{
		HX_STACK_LINE(39)
		Float tmp = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::String tmp2 = (tmp1 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::String timeString = tmp2;		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(40)
		Float tmp3 = Seconds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		int tmp5 = hx::Mod(tmp4,(int)60);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		int timeStringHelper = tmp5;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(41)
		bool tmp6 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		if ((tmp6)){
			HX_STACK_LINE(43)
			hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(45)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(46)
		bool tmp7 = ShowMS;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		if ((tmp7)){
			HX_STACK_LINE(48)
			hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
			HX_STACK_LINE(49)
			Float tmp8 = Seconds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			Float tmp9 = Seconds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(49)
			Float tmp12 = (tmp11 * (int)100);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			timeStringHelper = tmp13;
			HX_STACK_LINE(50)
			bool tmp14 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(50)
			if ((tmp14)){
				HX_STACK_LINE(52)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(54)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(57)
		::String tmp8 = timeString;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( cpp::ArrayBase AnyArray){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",68,0x4e012e33)
	HX_STACK_ARG(AnyArray,"AnyArray")
	HX_STACK_LINE(69)
	::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(70)
	bool tmp = (AnyArray != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp)){
		HX_STACK_LINE(70)
		tmp1 = (AnyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
	}
	else{
		HX_STACK_LINE(70)
		tmp1 = false;
	}
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(72)
		Dynamic tmp2 = AnyArray->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		string = tmp3;
		HX_STACK_LINE(73)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(74)
		int l = AnyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			if ((tmp5)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(77)
			int tmp6 = (i)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Dynamic tmp7 = AnyArray->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			::String tmp9 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			hx::AddEq(string,tmp9);
		}
	}
	HX_STACK_LINE(80)
	::String tmp2 = string;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",90,0x4e012e33)
	HX_STACK_ARG(AnyMap,"AnyMap")
	HX_STACK_LINE(91)
	::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(92)
	Dynamic tmp = AnyMap->keys();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(93)
			::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			hx::AddEq(string,tmp2);
			HX_STACK_LINE(94)
			hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
		}
;
	}
	HX_STACK_LINE(97)
	int tmp1 = (string.length - (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::String tmp2 = string.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",112,0x4e012e33)
	HX_STACK_ARG(Amount,"Amount")
	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
{
		HX_STACK_LINE(113)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(114)
		Float tmp = Amount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		int amount = tmp1;		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(115)
		::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(116)
		::String comma = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(117)
		::String zeroes = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp2 = (amount > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			if ((tmp3)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(120)
			bool tmp4 = (string.length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			if ((tmp4)){
				HX_STACK_LINE(120)
				tmp5 = (comma.length <= (int)0);
			}
			else{
				HX_STACK_LINE(120)
				tmp5 = false;
			}
			HX_STACK_LINE(120)
			if ((tmp5)){
				HX_STACK_LINE(122)
				bool tmp6 = EnglishStyle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				if ((tmp6)){
					HX_STACK_LINE(124)
					comma = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(128)
					comma = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
				}
			}
			HX_STACK_LINE(131)
			zeroes = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(132)
			int tmp6 = amount;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			Float tmp7 = (Float(amount) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			int tmp9 = (tmp8 * (int)1000);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			int tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			helper = tmp10;
			HX_STACK_LINE(133)
			Float tmp11 = (Float(amount) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(133)
			amount = tmp12;
			HX_STACK_LINE(134)
			bool tmp13 = (amount > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			if ((tmp13)){
				HX_STACK_LINE(136)
				bool tmp14 = (helper < (int)100);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(136)
				if ((tmp14)){
					HX_STACK_LINE(138)
					hx::AddEq(zeroes,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(140)
				bool tmp15 = (helper < (int)10);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(140)
				if ((tmp15)){
					HX_STACK_LINE(142)
					hx::AddEq(zeroes,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
			}
			HX_STACK_LINE(145)
			::String tmp14 = (zeroes + helper);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			::String tmp15 = comma;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(145)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(145)
			::String tmp17 = string;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(145)
			::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(145)
			string = tmp18;
		}
		HX_STACK_LINE(147)
		bool tmp2 = ShowDecimal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		if ((tmp2)){
			HX_STACK_LINE(149)
			Float tmp3 = (Amount * (int)100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			Float tmp5 = Amount;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			int tmp7 = (tmp6 * (int)100);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			int tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			amount = tmp8;
			HX_STACK_LINE(150)
			bool tmp9 = EnglishStyle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			if ((tmp9)){
				HX_STACK_LINE(150)
				tmp10 = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(150)
				tmp10 = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
			}
			HX_STACK_LINE(150)
			int tmp11 = amount;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(150)
			hx::AddEq(string,tmp12);
			HX_STACK_LINE(151)
			bool tmp13 = (amount < (int)10);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(151)
			if ((tmp13)){
				HX_STACK_LINE(153)
				hx::AddEq(string,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
		}
		HX_STACK_LINE(156)
		::String tmp3 = string;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::formatBytes( Float Bytes,hx::Null< int >  __o_Precision){
int Precision = __o_Precision.Default(2);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatBytes",0x92253a91,"flixel.util.FlxStringUtil.formatBytes","flixel/util/FlxStringUtil.hx",164,0x4e012e33)
	HX_STACK_ARG(Bytes,"Bytes")
	HX_STACK_ARG(Precision,"Precision")
{
		HX_STACK_LINE(165)
		Array< ::String > units = Array_obj< ::String >::__new().Add(HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50")).Add(HX_HCSTRING("kB","\x77","\x5d","\x00","\x00")).Add(HX_HCSTRING("MB","\x55","\x43","\x00","\x00")).Add(HX_HCSTRING("GB","\x1b","\x3e","\x00","\x00")).Add(HX_HCSTRING("TB","\x6e","\x49","\x00","\x00")).Add(HX_HCSTRING("PB","\xf2","\x45","\x00","\x00"));		HX_STACK_VAR(units,"units");
		HX_STACK_LINE(166)
		int curUnit = (int)0;		HX_STACK_VAR(curUnit,"curUnit");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp = (Bytes >= (int)1024);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(167)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			if ((tmp)){
				HX_STACK_LINE(167)
				int tmp2 = curUnit;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				int tmp3 = (units->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				tmp1 = (tmp2 < tmp4);
			}
			else{
				HX_STACK_LINE(167)
				tmp1 = false;
			}
			HX_STACK_LINE(167)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			if ((tmp2)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(169)
			hx::DivEq(Bytes,(int)1024);
			HX_STACK_LINE(170)
			(curUnit)++;
		}
		HX_STACK_LINE(172)
		Float tmp = Bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		int tmp1 = Precision;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		Float tmp2 = ::flixel::math::FlxMath_obj::roundDecimal(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		::String tmp3 = units->__get(curUnit);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatBytes,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",182,0x4e012e33)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(183)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::StringBuf output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			if ((tmp2)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(185)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Dynamic tmp5 = Input.charCodeAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(186)
			bool tmp6 = (c >= (int)48);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			if ((tmp6)){
				HX_STACK_LINE(186)
				tmp7 = (c <= (int)57);
			}
			else{
				HX_STACK_LINE(186)
				tmp7 = false;
			}
			HX_STACK_LINE(186)
			if ((tmp7)){
				HX_STACK_LINE(187)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(187)
				int tmp8 = c1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(187)
				output->b->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(190)
	::String tmp1 = output->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_HCSTRING("FFFFFF","\xc0","\x27","\x82","\x79"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",206,0x4e012e33)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Bold,"Bold")
	HX_STACK_ARG(Italic,"Italic")
	HX_STACK_ARG(Underlined,"Underlined")
{
		HX_STACK_LINE(207)
		::String tmp = (HX_HCSTRING("<font size='","\xc0","\x5b","\x1a","\xa4") + Size);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		::String tmp1 = (tmp + HX_HCSTRING("' color='#","\x2f","\x1d","\x64","\x33"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		::String tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		::String tmp4 = (tmp3 + HX_HCSTRING("'>","\x37","\x22","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		::String prefix = tmp4;		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(208)
		::String suffix = HX_HCSTRING("</font>","\x3c","\x82","\x5f","\x8e");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(210)
		bool tmp5 = Bold;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		if ((tmp5)){
			HX_STACK_LINE(212)
			::String tmp6 = (HX_HCSTRING("<b>","\xd8","\xdc","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			prefix = tmp6;
			HX_STACK_LINE(213)
			::String tmp7 = (suffix + HX_HCSTRING("</b>","\xcf","\xcc","\xcc","\x27"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			suffix = tmp7;
		}
		HX_STACK_LINE(215)
		bool tmp6 = Italic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		if ((tmp6)){
			HX_STACK_LINE(217)
			::String tmp7 = (HX_HCSTRING("<i>","\xf1","\xe2","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			prefix = tmp7;
			HX_STACK_LINE(218)
			::String tmp8 = (suffix + HX_HCSTRING("</i>","\xe8","\xd2","\xcc","\x27"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			suffix = tmp8;
		}
		HX_STACK_LINE(220)
		bool tmp7 = Underlined;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		if ((tmp7)){
			HX_STACK_LINE(222)
			::String tmp8 = (HX_HCSTRING("<u>","\x65","\xed","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(222)
			prefix = tmp8;
			HX_STACK_LINE(223)
			::String tmp9 = (suffix + HX_HCSTRING("</u>","\x5c","\xdd","\xcc","\x27"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			suffix = tmp9;
		}
		HX_STACK_LINE(226)
		::String tmp8 = (prefix + Text);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		::String tmp9 = suffix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(226)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getDomain( ::String url){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",265,0x4e012e33)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(266)
	int tmp = url.indexOf(HX_HCSTRING("://","\xda","\x2b","\x2c","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	int urlStart = tmp1;		HX_STACK_VAR(urlStart,"urlStart");
	HX_STACK_LINE(267)
	int tmp2 = urlStart;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	int tmp3 = url.indexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	int urlEnd = tmp3;		HX_STACK_VAR(urlEnd,"urlEnd");
	HX_STACK_LINE(268)
	int tmp4 = urlStart;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(268)
	int tmp5 = urlEnd;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(268)
	::String tmp6 = url.substring(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	::String home = tmp6;		HX_STACK_VAR(home,"home");
	HX_STACK_LINE(269)
	int tmp7 = home.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(269)
	int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(269)
	int LastDot = tmp8;		HX_STACK_VAR(LastDot,"LastDot");
	HX_STACK_LINE(270)
	int tmp9 = LastDot;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(270)
	int tmp10 = home.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(270)
	int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(270)
	int domEnd = tmp11;		HX_STACK_VAR(domEnd,"domEnd");
	HX_STACK_LINE(271)
	int tmp12 = domEnd;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(271)
	int tmp13 = home.length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(271)
	::String tmp14 = home.substring(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(271)
	home = tmp14;
	HX_STACK_LINE(272)
	::String tmp15 = home.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(272)
	home = tmp15;
	HX_STACK_LINE(273)
	bool tmp16 = (home == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(273)
	::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(273)
	if ((tmp16)){
		HX_STACK_LINE(273)
		tmp17 = HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78");
	}
	else{
		HX_STACK_LINE(273)
		tmp17 = home;
	}
	HX_STACK_LINE(273)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( Dynamic Obj1,Dynamic Obj2,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",285,0x4e012e33)
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(286)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(286)
			Dynamic tmp1 = Obj1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			if ((tmp2)){
				HX_STACK_LINE(286)
				cl = ((::hx::Class)(Obj1));
			}
			else{
				HX_STACK_LINE(286)
				Dynamic tmp3 = Obj1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				cl = tmp4;
			}
			HX_STACK_LINE(286)
			::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(286)
			bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			if ((tmp5)){
				HX_STACK_LINE(286)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(286)
				s = tmp7;
				HX_STACK_LINE(286)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				if ((tmp8)){
					HX_STACK_LINE(286)
					int tmp9 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(286)
					int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(286)
					::String tmp11 = s.substr(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					s = tmp11;
				}
			}
			HX_STACK_LINE(286)
			tmp = s;
		}
		HX_STACK_LINE(286)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(286)
			Dynamic tmp2 = Obj2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			if ((tmp3)){
				HX_STACK_LINE(286)
				cl = ((::hx::Class)(Obj2));
			}
			else{
				HX_STACK_LINE(286)
				Dynamic tmp4 = Obj2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				cl = tmp5;
			}
			HX_STACK_LINE(286)
			::hx::Class tmp4 = cl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			::String tmp5 = ::Type_obj::getClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			::String s = tmp5;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(286)
			bool tmp6 = (s != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			if ((tmp6)){
				HX_STACK_LINE(286)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(286)
				::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				s = tmp8;
				HX_STACK_LINE(286)
				bool tmp9 = Simple;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(286)
				if ((tmp9)){
					HX_STACK_LINE(286)
					int tmp10 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(286)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					::String tmp12 = s.substr(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(286)
					s = tmp12;
				}
			}
			HX_STACK_LINE(286)
			tmp1 = s;
		}
		HX_STACK_LINE(286)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

Array< int > FlxStringUtil_obj::toIntArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",297,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(298)
	bool tmp = (Data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	if ((tmp)){
		HX_STACK_LINE(298)
		tmp1 = (Data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(298)
		tmp1 = false;
	}
	HX_STACK_LINE(298)
	if ((tmp1)){
		HX_STACK_LINE(300)
		Array< ::String > strArray = Data.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(301)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			while((true)){
				HX_STACK_LINE(302)
				bool tmp2 = (_g < strArray->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(302)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(302)
				if ((tmp3)){
					HX_STACK_LINE(302)
					break;
				}
				HX_STACK_LINE(302)
				::String tmp4 = strArray->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(302)
				::String str = tmp4;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(302)
				++(_g);
				HX_STACK_LINE(304)
				::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(304)
				iArray->push(tmp6);
			}
		}
		HX_STACK_LINE(306)
		return iArray;
	}
	HX_STACK_LINE(308)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

Array< Float > FlxStringUtil_obj::toFloatArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",318,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(319)
	bool tmp = (Data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	if ((tmp)){
		HX_STACK_LINE(319)
		tmp1 = (Data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(319)
		tmp1 = false;
	}
	HX_STACK_LINE(319)
	if ((tmp1)){
		HX_STACK_LINE(321)
		Array< ::String > strArray = Data.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(322)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(323)
			while((true)){
				HX_STACK_LINE(323)
				bool tmp2 = (_g < strArray->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(323)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(323)
				if ((tmp3)){
					HX_STACK_LINE(323)
					break;
				}
				HX_STACK_LINE(323)
				::String tmp4 = strArray->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(323)
				::String str = tmp4;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(323)
				++(_g);
				HX_STACK_LINE(325)
				::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(325)
				Float tmp6 = ::Std_obj::parseFloat(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(325)
				fArray->push(tmp6);
			}
		}
		HX_STACK_LINE(327)
		return fArray;
	}
	HX_STACK_LINE(329)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",341,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Invert,"Invert")
{
		HX_STACK_LINE(342)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(343)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(344)
		::String csv = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(345)
		Float tmp = (Float(Data->length) / Float(Width));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		int Height = tmp1;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(346)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(347)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			bool tmp2 = (row < Height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			if ((tmp3)){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(351)
			column = (int)0;
			HX_STACK_LINE(353)
			while((true)){
				HX_STACK_LINE(353)
				bool tmp4 = (column < Width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(353)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(353)
				if ((tmp5)){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(355)
				int tmp6 = Data->__get(offset);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(355)
				index = tmp6;
				HX_STACK_LINE(357)
				bool tmp7 = Invert;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(357)
				if ((tmp7)){
					HX_STACK_LINE(359)
					bool tmp8 = (index == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(359)
					if ((tmp8)){
						HX_STACK_LINE(361)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(363)
						bool tmp9 = (index == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(363)
						if ((tmp9)){
							HX_STACK_LINE(365)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(369)
				bool tmp8 = (column == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				if ((tmp8)){
					HX_STACK_LINE(371)
					bool tmp9 = (row == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(371)
					if ((tmp9)){
						HX_STACK_LINE(373)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(377)
						::String tmp10 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + index);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(377)
						hx::AddEq(csv,tmp10);
					}
				}
				else{
					HX_STACK_LINE(382)
					::String tmp9 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + index);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(382)
					hx::AddEq(csv,tmp9);
				}
				HX_STACK_LINE(385)
				(column)++;
				HX_STACK_LINE(386)
				(offset)++;
			}
			HX_STACK_LINE(389)
			(row)++;
		}
		HX_STACK_LINE(392)
		::String tmp2 = csv;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",406,0x4e012e33)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(ColorMap,"ColorMap")
{
		HX_STACK_LINE(407)
		bool tmp = (Scale < (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		if ((tmp)){
			HX_STACK_LINE(409)
			Scale = (int)1;
		}
		HX_STACK_LINE(413)
		bool tmp1 = (Scale > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(415)
			::openfl::_legacy::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(416)
			int tmp2 = Bitmap->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			int tmp3 = Scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			int tmp5 = Bitmap->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			int tmp6 = Scale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp4,tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			Bitmap = tmp8;
			HX_STACK_LINE(419)
			int tmp9 = bd->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(419)
			int bdW = tmp9;		HX_STACK_VAR(bdW,"bdW");
			HX_STACK_LINE(420)
			int tmp10 = bd->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(420)
			int bdH = tmp10;		HX_STACK_VAR(bdH,"bdH");
			HX_STACK_LINE(421)
			int pCol = (int)0;		HX_STACK_VAR(pCol,"pCol");
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(423)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(423)
					bool tmp11 = (_g < bdW);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(423)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(423)
					if ((tmp12)){
						HX_STACK_LINE(423)
						break;
					}
					HX_STACK_LINE(423)
					int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(423)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(425)
					{
						HX_STACK_LINE(425)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(425)
						while((true)){
							HX_STACK_LINE(425)
							bool tmp14 = (_g1 < bdH);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(425)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(425)
							if ((tmp15)){
								HX_STACK_LINE(425)
								break;
							}
							HX_STACK_LINE(425)
							int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(425)
							int j = tmp16;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(427)
							int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(427)
							int tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(427)
							int tmp19 = bd->getPixel(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(427)
							pCol = tmp19;
							HX_STACK_LINE(429)
							{
								HX_STACK_LINE(429)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(429)
								while((true)){
									HX_STACK_LINE(429)
									bool tmp20 = (_g2 < Scale);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(429)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(429)
									if ((tmp21)){
										HX_STACK_LINE(429)
										break;
									}
									HX_STACK_LINE(429)
									int tmp22 = (_g2)++;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(429)
									int k = tmp22;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(431)
									{
										HX_STACK_LINE(431)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(431)
										while((true)){
											HX_STACK_LINE(431)
											bool tmp23 = (_g3 < Scale);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(431)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(431)
											if ((tmp24)){
												HX_STACK_LINE(431)
												break;
											}
											HX_STACK_LINE(431)
											int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(431)
											int m = tmp25;		HX_STACK_VAR(m,"m");
											HX_STACK_LINE(433)
											int tmp26 = (i * Scale);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(433)
											int tmp27 = k;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(433)
											int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(433)
											int tmp29 = (j * Scale);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(433)
											int tmp30 = m;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(433)
											int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(433)
											int tmp32 = pCol;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(433)
											Bitmap->setPixel(tmp28,tmp31,tmp32);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(445)
		bool tmp2 = (ColorMap != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		if ((tmp2)){
			HX_STACK_LINE(447)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(447)
			int _g = ColorMap->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			while((true)){
				HX_STACK_LINE(447)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(447)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(447)
				if ((tmp4)){
					HX_STACK_LINE(447)
					break;
				}
				HX_STACK_LINE(447)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(447)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(449)
				int tmp6 = ColorMap->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(449)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(449)
				int tmp8 = (int(tmp7) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(449)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(449)
				ColorMap[i] = tmp9;
			}
		}
		HX_STACK_LINE(454)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(455)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(456)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(457)
		::String csv = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(458)
		int tmp3 = Bitmap->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		int bitmapWidth = tmp3;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(459)
		int tmp4 = Bitmap->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(459)
		int bitmapHeight = tmp4;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(461)
		while((true)){
			HX_STACK_LINE(461)
			bool tmp5 = (row < bitmapHeight);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(461)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(461)
			if ((tmp6)){
				HX_STACK_LINE(461)
				break;
			}
			HX_STACK_LINE(463)
			column = (int)0;
			HX_STACK_LINE(465)
			while((true)){
				HX_STACK_LINE(465)
				bool tmp7 = (column < bitmapWidth);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(465)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(465)
				if ((tmp8)){
					HX_STACK_LINE(465)
					break;
				}
				HX_STACK_LINE(468)
				int tmp9 = column;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(468)
				int tmp10 = row;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(468)
				int tmp11 = Bitmap->getPixel(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(468)
				pixel = tmp11;
				HX_STACK_LINE(470)
				bool tmp12 = (ColorMap != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(470)
				if ((tmp12)){
					HX_STACK_LINE(472)
					int tmp13 = pixel;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(472)
					int tmp14 = ColorMap->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(472)
					pixel = tmp14;
				}
				else{
					HX_STACK_LINE(474)
					bool tmp13 = Invert;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(474)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(474)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(474)
					if ((tmp14)){
						HX_STACK_LINE(474)
						tmp15 = (pixel > (int)0);
					}
					else{
						HX_STACK_LINE(474)
						tmp15 = false;
					}
					HX_STACK_LINE(474)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(474)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(474)
					if ((tmp16)){
						HX_STACK_LINE(474)
						bool tmp18 = Invert;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(474)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(474)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(474)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(474)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(474)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(474)
						if ((tmp23)){
							HX_STACK_LINE(474)
							tmp17 = (pixel == (int)0);
						}
						else{
							HX_STACK_LINE(474)
							tmp17 = false;
						}
					}
					else{
						HX_STACK_LINE(474)
						tmp17 = true;
					}
					HX_STACK_LINE(474)
					if ((tmp17)){
						HX_STACK_LINE(476)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(480)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(484)
				bool tmp13 = (column == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(484)
				if ((tmp13)){
					HX_STACK_LINE(486)
					bool tmp14 = (row == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(486)
					if ((tmp14)){
						HX_STACK_LINE(488)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(492)
						::String tmp15 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + pixel);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(492)
						hx::AddEq(csv,tmp15);
					}
				}
				else{
					HX_STACK_LINE(497)
					::String tmp14 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + pixel);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(497)
					hx::AddEq(csv,tmp14);
				}
				HX_STACK_LINE(500)
				(column)++;
			}
			HX_STACK_LINE(503)
			(row)++;
		}
		HX_STACK_LINE(506)
		::String tmp5 = csv;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(506)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",520,0x4e012e33)
	HX_STACK_ARG(ImageFile,"ImageFile")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(ColorMap,"ColorMap")
{
		HX_STACK_LINE(521)
		::openfl::_legacy::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(523)
		Dynamic tmp = ImageFile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		if ((tmp1)){
			HX_STACK_LINE(525)
			::openfl::_legacy::display::BitmapData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				::String id = ImageFile;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(525)
				::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(525)
				bool tmp4 = ::openfl::_legacy::Assets_obj::exists(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(525)
				if ((tmp4)){
					HX_STACK_LINE(525)
					::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(525)
					tmp2 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp5,false);
				}
				else{
					HX_STACK_LINE(525)
					{
						HX_STACK_LINE(525)
						::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(525)
						::String tmp6 = (HX_HCSTRING("Could not find a BitmapData asset with ID '","\x5f","\x79","\xa9","\x21") + id);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(525)
						::String tmp7 = (tmp6 + HX_HCSTRING("'.","\x27","\x22","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(525)
						::flixel::_system::debug::log::LogStyle tmp8 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(525)
						tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp7,tmp8,true);
					}
					HX_STACK_LINE(525)
					tmp2 = null();
				}
			}
			HX_STACK_LINE(525)
			tempBitmapData = tmp2;
		}
		else{
			HX_STACK_LINE(529)
			Dynamic tmp2 = ImageFile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(529)
			Dynamic tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			::openfl::_legacy::display::BitmapData tmp4 = tmp3->__Field(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(529)
			tempBitmapData = tmp4;
		}
		HX_STACK_LINE(532)
		::openfl::_legacy::display::BitmapData tmp2 = tempBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		bool tmp3 = Invert;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		int tmp4 = Scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		::String tmp5 = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tmp2,tmp3,tmp4,ColorMap);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(532)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString( Array< ::Dynamic > LabelValuePairs){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",542,0x4e012e33)
	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
	HX_STACK_LINE(543)
	::String output = HX_HCSTRING("(","\x28","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(544)
	{
		HX_STACK_LINE(544)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		while((true)){
			HX_STACK_LINE(544)
			bool tmp = (_g < LabelValuePairs->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(544)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(544)
			if ((tmp1)){
				HX_STACK_LINE(544)
				break;
			}
			HX_STACK_LINE(544)
			::flixel::util::LabelValuePair tmp2 = LabelValuePairs->__get(_g).StaticCast< ::flixel::util::LabelValuePair >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(544)
			::flixel::util::LabelValuePair pair = tmp2;		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(544)
			++(_g);
			HX_STACK_LINE(546)
			::String tmp3 = (pair->label + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(546)
			hx::AddEq(output,tmp3);
			HX_STACK_LINE(547)
			Dynamic value = pair->value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(548)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(548)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(548)
			if ((tmp5)){
				HX_STACK_LINE(550)
				Float tmp6 = ((Float)(value));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(550)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp7 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(550)
				int tmp8 = tmp7->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(550)
				Float tmp9 = ::flixel::math::FlxMath_obj::roundDecimal(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(550)
				value = tmp9;
			}
			HX_STACK_LINE(552)
			Dynamic tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(552)
			::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			::String tmp8 = (tmp7 + HX_HCSTRING(" | ","\x44","\xb4","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			hx::AddEq(output,tmp8);
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				::flixel::util::FlxPool_flixel_util_LabelValuePair tmp9 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(553)
				::flixel::util::LabelValuePair tmp10 = pair;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(553)
				tmp9->put(tmp10);
			}
		}
	}
	HX_STACK_LINE(556)
	int tmp = (output.length - (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(556)
	::String tmp1 = output.substr((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(556)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(556)
	output = tmp2;
	HX_STACK_LINE(557)
	::String tmp3 = (output + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(557)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )

bool FlxStringUtil_obj::contains( ::String s,::String str){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","contains",0x45000522,"flixel.util.FlxStringUtil.contains","flixel/util/FlxStringUtil.hx",561,0x4e012e33)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(562)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	int tmp1 = s.indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,contains,return )

::String FlxStringUtil_obj::remove( ::String s,::String sub){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","remove",0xf6fd7087,"flixel.util.FlxStringUtil.remove","flixel/util/FlxStringUtil.hx",569,0x4e012e33)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(sub,"sub")
	HX_STACK_LINE(570)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	::String tmp1 = sub;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	::String tmp2 = ::StringTools_obj::replace(tmp,tmp1,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(570)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,remove,return )

::String FlxStringUtil_obj::insert( ::String s,int pos,::String insertion){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","insert",0x9052177c,"flixel.util.FlxStringUtil.insert","flixel/util/FlxStringUtil.hx",577,0x4e012e33)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(insertion,"insertion")
	HX_STACK_LINE(578)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	::String tmp1 = s.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	::String tmp2 = insertion;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(578)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(578)
	int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(578)
	::String tmp5 = s.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(578)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(578)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,insert,return )

Array< ::String > FlxStringUtil_obj::sortAlphabetically( Array< ::String > list){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","sortAlphabetically",0xf5002ac6,"flixel.util.FlxStringUtil.sortAlphabetically","flixel/util/FlxStringUtil.hx",582,0x4e012e33)
	HX_STACK_ARG(list,"list")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::String a,::String b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/util/FlxStringUtil.hx",584,0x4e012e33)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(585)
			::String tmp = a.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(585)
			a = tmp;
			HX_STACK_LINE(586)
			::String tmp1 = b.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			b = tmp1;
			HX_STACK_LINE(587)
			bool tmp2 = (a < b);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(587)
			if ((tmp2)){
				HX_STACK_LINE(587)
				return (int)-1;
			}
			HX_STACK_LINE(588)
			bool tmp3 = (a > b);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			if ((tmp3)){
				HX_STACK_LINE(588)
				return (int)1;
			}
			HX_STACK_LINE(589)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(583)
	list->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(591)
	return list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,sortAlphabetically,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

bool FlxStringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"insert") ) { outValue = insert_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { outValue = getDomain_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { outValue = formatTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { outValue = htmlFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { outValue = toIntArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { outValue = arrayToCSV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { outValue = imageToCSV_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { outValue = formatTicks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatArray") ) { outValue = formatArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { outValue = formatMoney_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatBytes") ) { outValue = formatBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { outValue = bitmapToCSV_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { outValue = filterDigits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { outValue = toFloatArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { outValue = sameClassName_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { outValue = getDebugString_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { outValue = formatStringMap_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortAlphabetically") ) { outValue = sortAlphabetically_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStringUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("formatTicks","\xbf","\x87","\x47","\xc9"),
	HX_HCSTRING("formatTime","\xe4","\xee","\x61","\x0c"),
	HX_HCSTRING("formatArray","\xe2","\xc6","\xa8","\xde"),
	HX_HCSTRING("formatStringMap","\x14","\x64","\x33","\x33"),
	HX_HCSTRING("formatMoney","\x89","\x13","\x79","\xc5"),
	HX_HCSTRING("formatBytes","\xb4","\x61","\xb1","\x76"),
	HX_HCSTRING("filterDigits","\xfe","\x37","\x80","\xc1"),
	HX_HCSTRING("htmlFormat","\x02","\xfb","\x4f","\xcb"),
	HX_HCSTRING("getDomain","\x7a","\x3a","\xd7","\xa9"),
	HX_HCSTRING("sameClassName","\x5d","\x52","\x26","\x79"),
	HX_HCSTRING("toIntArray","\xc5","\x22","\x29","\xe0"),
	HX_HCSTRING("toFloatArray","\xb8","\x73","\x07","\xe6"),
	HX_HCSTRING("arrayToCSV","\xb2","\x30","\x3a","\x0e"),
	HX_HCSTRING("bitmapToCSV","\x9c","\x56","\x63","\x54"),
	HX_HCSTRING("imageToCSV","\xb0","\xdf","\xda","\x1f"),
	HX_HCSTRING("getDebugString","\x8e","\x42","\x41","\xa1"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("sortAlphabetically","\x03","\x7e","\x3c","\x7b"),
	::String(null()) };

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxStringUtil","\xcb","\x21","\xbd","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxStringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxStringUtil_obj >;
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
} // end namespace util
