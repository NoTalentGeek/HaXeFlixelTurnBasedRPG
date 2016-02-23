#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::step__wav;

::String AssetPaths_obj::miss__wav;

::String AssetPaths_obj::lose__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::win__wav;

::String AssetPaths_obj::coin__wav;

::String AssetPaths_obj::select__wav;

::String AssetPaths_obj::combat__wav;

::String AssetPaths_obj::fled__wav;

::String AssetPaths_obj::hurt__wav;

::String AssetPaths_obj::tutorial__oep;

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::room_001__oel;

::String AssetPaths_obj::health__png;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::pointer__png;

::String AssetPaths_obj::enemy_1__png;

::String AssetPaths_obj::enemy_0__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::button__png;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::step__wav,HX_HCSTRING("step__wav","\x40","\x27","\x75","\xcf")},
	{hx::fsString,(void *) &AssetPaths_obj::miss__wav,HX_HCSTRING("miss__wav","\x90","\x5d","\xe0","\xe1")},
	{hx::fsString,(void *) &AssetPaths_obj::lose__wav,HX_HCSTRING("lose__wav","\x17","\x94","\x1e","\xcd")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{hx::fsString,(void *) &AssetPaths_obj::win__wav,HX_HCSTRING("win__wav","\x70","\x74","\x39","\x92")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__wav,HX_HCSTRING("coin__wav","\xdb","\x7e","\x01","\x5c")},
	{hx::fsString,(void *) &AssetPaths_obj::select__wav,HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8")},
	{hx::fsString,(void *) &AssetPaths_obj::combat__wav,HX_HCSTRING("combat__wav","\x58","\xb5","\xa5","\x01")},
	{hx::fsString,(void *) &AssetPaths_obj::fled__wav,HX_HCSTRING("fled__wav","\xc7","\xec","\x56","\x83")},
	{hx::fsString,(void *) &AssetPaths_obj::hurt__wav,HX_HCSTRING("hurt__wav","\x9d","\x8f","\x4c","\xae")},
	{hx::fsString,(void *) &AssetPaths_obj::tutorial__oep,HX_HCSTRING("tutorial__oep","\x1c","\x07","\x58","\xb4")},
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::room_001__oel,HX_HCSTRING("room_001__oel","\x89","\x39","\x9d","\xa8")},
	{hx::fsString,(void *) &AssetPaths_obj::health__png,HX_HCSTRING("health__png","\x6d","\xdf","\x86","\xa5")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__png,HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b")},
	{hx::fsString,(void *) &AssetPaths_obj::pointer__png,HX_HCSTRING("pointer__png","\xac","\x2f","\x2b","\x00")},
	{hx::fsString,(void *) &AssetPaths_obj::enemy_1__png,HX_HCSTRING("enemy_1__png","\x0f","\xc4","\x40","\xff")},
	{hx::fsString,(void *) &AssetPaths_obj::enemy_0__png,HX_HCSTRING("enemy_0__png","\xb0","\x67","\xe5","\x98")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d")},
	{hx::fsString,(void *) &AssetPaths_obj::button__png,HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac")},
	{hx::fsString,(void *) &AssetPaths_obj::player__png,HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3,HX_HCSTRING("HaxeFlixel_Tutorial_Game__mp3","\x1a","\xbe","\x6e","\xec")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,HX_HCSTRING("HaxeFlixel_Tutorial_Game__ogg","\xf9","\x3a","\x70","\xec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tutorial__oep,"tutorial__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy_1__png,"enemy_1__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy_0__png,"enemy_0__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3,"HaxeFlixel_Tutorial_Game__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,"HaxeFlixel_Tutorial_Game__ogg");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tutorial__oep,"tutorial__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy_1__png,"enemy_1__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy_0__png,"enemy_0__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3,"HaxeFlixel_Tutorial_Game__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,"HaxeFlixel_Tutorial_Game__ogg");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("step__wav","\x40","\x27","\x75","\xcf"),
	HX_HCSTRING("miss__wav","\x90","\x5d","\xe0","\xe1"),
	HX_HCSTRING("lose__wav","\x17","\x94","\x1e","\xcd"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	HX_HCSTRING("win__wav","\x70","\x74","\x39","\x92"),
	HX_HCSTRING("coin__wav","\xdb","\x7e","\x01","\x5c"),
	HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8"),
	HX_HCSTRING("combat__wav","\x58","\xb5","\xa5","\x01"),
	HX_HCSTRING("fled__wav","\xc7","\xec","\x56","\x83"),
	HX_HCSTRING("hurt__wav","\x9d","\x8f","\x4c","\xae"),
	HX_HCSTRING("tutorial__oep","\x1c","\x07","\x58","\xb4"),
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("room_001__oel","\x89","\x39","\x9d","\xa8"),
	HX_HCSTRING("health__png","\x6d","\xdf","\x86","\xa5"),
	HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b"),
	HX_HCSTRING("pointer__png","\xac","\x2f","\x2b","\x00"),
	HX_HCSTRING("enemy_1__png","\x0f","\xc4","\x40","\xff"),
	HX_HCSTRING("enemy_0__png","\xb0","\x67","\xe5","\x98"),
	HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d"),
	HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac"),
	HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("HaxeFlixel_Tutorial_Game__mp3","\x1a","\xbe","\x6e","\xec"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("HaxeFlixel_Tutorial_Game__ogg","\xf9","\x3a","\x70","\xec"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
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

void AssetPaths_obj::__boot()
{
	step__wav= HX_HCSTRING("assets/sounds/step.wav","\x29","\xa0","\xd3","\x5a");
	miss__wav= HX_HCSTRING("assets/sounds/miss.wav","\xd9","\xa3","\x6b","\x8d");
	lose__wav= HX_HCSTRING("assets/sounds/lose.wav","\x32","\xdb","\x1d","\x3e");
	sounds_go_here__txt= HX_HCSTRING("assets/sounds/sounds-go-here.txt","\x8d","\xb6","\x3d","\xa7");
	win__wav= HX_HCSTRING("assets/sounds/win.wav","\x9b","\x6f","\xbc","\xc5");
	coin__wav= HX_HCSTRING("assets/sounds/coin.wav","\xee","\x74","\x61","\x6a");
	select__wav= HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e");
	combat__wav= HX_HCSTRING("assets/sounds/combat.wav","\xd1","\x22","\x6e","\x57");
	fled__wav= HX_HCSTRING("assets/sounds/fled.wav","\x82","\x28","\xc9","\x3d");
	hurt__wav= HX_HCSTRING("assets/sounds/hurt.wav","\x6c","\x32","\x7c","\x8f");
	tutorial__oep= HX_HCSTRING("assets/data/tutorial.oep","\x43","\x3c","\x3a","\xc7");
	data_goes_here__txt= HX_HCSTRING("assets/data/data-goes-here.txt","\x5f","\x4b","\xb2","\x8e");
	room_001__oel= HX_HCSTRING("assets/data/room-001.oel","\xe0","\x98","\x2c","\x9a");
	health__png= HX_HCSTRING("assets/images/health.png","\x42","\x7f","\x55","\x20");
	coin__png= HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54");
	pointer__png= HX_HCSTRING("assets/images/pointer.png","\xad","\xe2","\xd4","\x86");
	enemy_1__png= HX_HCSTRING("assets/images/enemy-1.png","\x1c","\x21","\xe7","\xb6");
	enemy_0__png= HX_HCSTRING("assets/images/enemy-0.png","\x9b","\x8c","\x80","\x23");
	tiles__png= HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5");
	button__png= HX_HCSTRING("assets/images/button.png","\x98","\x1b","\xb6","\xcd");
	player__png= HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6");
	images_go_here__txt= HX_HCSTRING("assets/images/images-go-here.txt","\x0d","\x1d","\x45","\xa6");
	HaxeFlixel_Tutorial_Game__mp3= HX_HCSTRING("assets/music/HaxeFlixel_Tutorial_Game.mp3","\xae","\xd9","\x74","\xf8");
	music_goes_here__txt= HX_HCSTRING("assets/music/music-goes-here.txt","\x6b","\x32","\x60","\x47");
	HaxeFlixel_Tutorial_Game__ogg= HX_HCSTRING("assets/music/HaxeFlixel_Tutorial_Game.ogg","\x8d","\x56","\x76","\xf8");
}

