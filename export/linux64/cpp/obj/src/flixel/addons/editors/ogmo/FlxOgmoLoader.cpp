#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace ogmo{

Void FlxOgmoLoader_obj::__construct(Dynamic LevelData)
{
HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","new",0x7241dd6e,"flixel.addons.editors.ogmo.FlxOgmoLoader.new","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",30,0xc7bbc002)
HX_STACK_THIS(this)
HX_STACK_ARG(LevelData,"LevelData")
{
	HX_STACK_LINE(32)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(35)
	Dynamic tmp = LevelData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(37)
		Dynamic tmp2 = LevelData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::String tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		str = tmp3;
	}
	else{
		HX_STACK_LINE(40)
		Dynamic tmp2 = LevelData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(42)
			Dynamic tmp4 = LevelData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			::String tmp5 = ::openfl::_legacy::Assets_obj::getText(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			str = tmp5;
		}
	}
	HX_STACK_LINE(45)
	::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	::Xml tmp3 = ::haxe::xml::Parser_obj::parse(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	this->_xml = tmp3;
	HX_STACK_LINE(46)
	::Xml tmp4 = this->_xml;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	::Xml tmp5 = tmp4->firstElement();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	::haxe::xml::Fast tmp6 = ::haxe::xml::Fast_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->_fastXml = tmp6;
	HX_STACK_LINE(48)
	::haxe::xml::Fast tmp7 = this->_fastXml;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	::String tmp8 = tmp7->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	this->width = tmp9;
	HX_STACK_LINE(49)
	::haxe::xml::Fast tmp10 = this->_fastXml;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	::String tmp11 = tmp10->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(49)
	Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	this->height = tmp12;
}
;
	return null();
}

//FlxOgmoLoader_obj::~FlxOgmoLoader_obj() { }

Dynamic FlxOgmoLoader_obj::__CreateEmpty() { return  new FlxOgmoLoader_obj; }
hx::ObjectPtr< FlxOgmoLoader_obj > FlxOgmoLoader_obj::__new(Dynamic LevelData)
{  hx::ObjectPtr< FlxOgmoLoader_obj > _result_ = new FlxOgmoLoader_obj();
	_result_->__construct(LevelData);
	return _result_;}

Dynamic FlxOgmoLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxOgmoLoader_obj > _result_ = new FlxOgmoLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tile::FlxTilemap FlxOgmoLoader_obj::loadTilemap( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::String __o_TileLayer){
int TileWidth = __o_TileWidth.Default(16);
int TileHeight = __o_TileHeight.Default(16);
::String TileLayer = __o_TileLayer.Default(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadTilemap",0xf1a379b6,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadTilemap","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",67,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(TileLayer,"TileLayer")
{
		HX_STACK_LINE(68)
		::flixel::tile::FlxTilemap tmp = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::flixel::tile::FlxTilemap tileMap = tmp;		HX_STACK_VAR(tileMap,"tileMap");
		HX_STACK_LINE(69)
		::haxe::xml::Fast tmp1 = this->_fastXml;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::String tmp2 = TileLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		::haxe::xml::Fast tmp3 = tmp1->node->resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		::String tmp4 = tmp3->get_innerData();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		Dynamic tmp5 = TileGraphic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		int tmp6 = TileWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		int tmp7 = TileHeight;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		tileMap->loadMapFromCSV(tmp4,tmp5,tmp6,tmp7,null(),null(),null(),null());
		HX_STACK_LINE(70)
		::flixel::tile::FlxTilemap tmp8 = tileMap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxOgmoLoader_obj,loadTilemap,return )

Void FlxOgmoLoader_obj::loadEntities( Dynamic EntityLoadCallback,::String __o_EntityLayer){
::String EntityLayer = __o_EntityLayer.Default(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadEntities",0x787963b9,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadEntities","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",93,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EntityLoadCallback,"EntityLoadCallback")
	HX_STACK_ARG(EntityLayer,"EntityLayer")
{
		HX_STACK_LINE(94)
		::haxe::xml::Fast tmp = this->_fastXml;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::String tmp1 = EntityLayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::haxe::xml::Fast tmp2 = tmp->node->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::haxe::xml::Fast actors = tmp2;		HX_STACK_VAR(actors,"actors");
		HX_STACK_LINE(97)
		Dynamic tmp3 = actors->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
			::haxe::xml::Fast a = __it->next();
			{
				HX_STACK_LINE(99)
				::String tmp4 = a->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				::Xml tmp5 = a->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				EntityLoadCallback(tmp4,tmp5).Cast< Void >();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmoLoader_obj,loadEntities,(void))

Void FlxOgmoLoader_obj::loadRectangles( Dynamic RectLoadCallback,::String __o_RectLayer){
::String RectLayer = __o_RectLayer.Default(HX_HCSTRING("rectangles","\x64","\xd5","\xbc","\x33"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadRectangles",0x3448f0dc,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadRectangles","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",111,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectLoadCallback,"RectLoadCallback")
	HX_STACK_ARG(RectLayer,"RectLayer")
{
		HX_STACK_LINE(112)
		::haxe::xml::Fast tmp = this->_fastXml;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::String tmp1 = RectLayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		::haxe::xml::Fast tmp2 = tmp->node->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::haxe::xml::Fast rects = tmp2;		HX_STACK_VAR(rects,"rects");
		HX_STACK_LINE(114)
		Dynamic tmp3 = rects->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
			::haxe::xml::Fast r = __it->next();
			{
				HX_STACK_LINE(116)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					::String tmp5 = r->x->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					Float X = tmp6;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(116)
					::String tmp7 = r->x->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(116)
					Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(116)
					Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(116)
					::String tmp9 = r->x->get(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(116)
					Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					Float Width = tmp10;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(116)
					::String tmp11 = r->x->get(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(116)
					Float Height = tmp12;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(116)
					::flixel::math::FlxRect tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp14 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						::flixel::math::FlxRect tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(116)
						_this->x = X;
						HX_STACK_LINE(116)
						_this->y = Y;
						HX_STACK_LINE(116)
						_this->width = Width;
						HX_STACK_LINE(116)
						_this->height = Height;
						HX_STACK_LINE(116)
						tmp13 = _this;
					}
					HX_STACK_LINE(116)
					::flixel::math::FlxRect rect = tmp13;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(116)
					rect->_inPool = false;
					HX_STACK_LINE(116)
					tmp4 = rect;
				}
				HX_STACK_LINE(116)
				RectLoadCallback(tmp4).Cast< Void >();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmoLoader_obj,loadRectangles,(void))

::String FlxOgmoLoader_obj::getProperty( ::String name){
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","getProperty",0xada2d619,"flixel.addons.editors.ogmo.FlxOgmoLoader.getProperty","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",128,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(129)
	::haxe::xml::Fast tmp = this->_fastXml;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	::String tmp2 = tmp->att->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxOgmoLoader_obj,getProperty,return )


FlxOgmoLoader_obj::FlxOgmoLoader_obj()
{
}

void FlxOgmoLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxOgmoLoader);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	HX_MARK_MEMBER_NAME(_fastXml,"_fastXml");
	HX_MARK_END_CLASS();
}

void FlxOgmoLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	HX_VISIT_MEMBER_NAME(_fastXml,"_fastXml");
}

Dynamic FlxOgmoLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fastXml") ) { return _fastXml; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTilemap") ) { return loadTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return getProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEntities") ) { return loadEntities_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadRectangles") ) { return loadRectangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxOgmoLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fastXml") ) { _fastXml=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxOgmoLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_xml","\xd8","\xb2","\x26","\x3f"));
	outFields->push(HX_HCSTRING("_fastXml","\x1c","\x46","\xe8","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxOgmoLoader_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxOgmoLoader_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(FlxOgmoLoader_obj,_xml),HX_HCSTRING("_xml","\xd8","\xb2","\x26","\x3f")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(FlxOgmoLoader_obj,_fastXml),HX_HCSTRING("_fastXml","\x1c","\x46","\xe8","\x17")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("_xml","\xd8","\xb2","\x26","\x3f"),
	HX_HCSTRING("_fastXml","\x1c","\x46","\xe8","\x17"),
	HX_HCSTRING("loadTilemap","\xa8","\xae","\x2c","\x16"),
	HX_HCSTRING("loadEntities","\x87","\x82","\xfe","\x4b"),
	HX_HCSTRING("loadRectangles","\x2a","\xdf","\x6d","\xca"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxOgmoLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxOgmoLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxOgmoLoader_obj::__mClass;

void FlxOgmoLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.ogmo.FlxOgmoLoader","\x7c","\x4e","\x17","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxOgmoLoader_obj >;
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
} // end namespace addons
} // end namespace editors
} // end namespace ogmo
