#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxActionMode
#include <flixel/ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxDPadMode
#include <flixel/ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace ui{

Void FlxVirtualPad_obj::__construct(::flixel::ui::FlxDPadMode DPad,::flixel::ui::FlxActionMode Action)
{
HX_STACK_FRAME("flixel.ui.FlxVirtualPad","new",0xc70c1fa4,"flixel.ui.FlxVirtualPad.new","flixel/ui/FlxVirtualPad.hx",43,0x865d16ec)
HX_STACK_THIS(this)
HX_STACK_ARG(DPad,"DPad")
HX_STACK_ARG(Action,"Action")
{
	HX_STACK_LINE(44)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(45)
	::flixel::math::FlxPoint tmp = this->scrollFactor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	tmp->set(null(),null());
	HX_STACK_LINE(47)
	bool tmp1 = (DPad == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(49)
		DPad = ::flixel::ui::FlxDPadMode_obj::FULL;
	}
	HX_STACK_LINE(51)
	bool tmp2 = (Action == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(53)
		Action = ::flixel::ui::FlxActionMode_obj::A_B_C;
	}
	HX_STACK_LINE(56)
	::flixel::group::FlxTypedSpriteGroup tmp3 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	this->dPad = tmp3;
	HX_STACK_LINE(57)
	::flixel::group::FlxTypedSpriteGroup tmp4 = this->dPad;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	tmp4->scrollFactor->set(null(),null());
	HX_STACK_LINE(59)
	::flixel::group::FlxTypedSpriteGroup tmp5 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	this->actions = tmp5;
	HX_STACK_LINE(60)
	::flixel::group::FlxTypedSpriteGroup tmp6 = this->actions;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	tmp6->scrollFactor->set(null(),null());
	HX_STACK_LINE(62)
	bool tmp7 = (DPad != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	if ((tmp7)){
		HX_STACK_LINE(62)
		switch( (int)(DPad->__Index())){
			case (int)1: {
				HX_STACK_LINE(65)
				::flixel::group::FlxTypedSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				int tmp10 = (tmp9 - (int)85);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(65)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)0,tmp10,(int)44,(int)45,HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(65)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(65)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				tmp8->add(tmp13);
				HX_STACK_LINE(66)
				::flixel::group::FlxTypedSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(66)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(66)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(66)
				::flixel::ui::FlxButton tmp18 = this->buttonDown = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(66)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(66)
				tmp14->add(tmp19);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(68)
				::flixel::group::FlxTypedSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				int tmp10 = (tmp9 - (int)45);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)0,tmp10,(int)44,(int)45,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				::flixel::ui::FlxButton tmp12 = this->buttonLeft = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(68)
				tmp8->add(tmp13);
				HX_STACK_LINE(69)
				::flixel::group::FlxTypedSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(69)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(69)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(69)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)42,tmp16,(int)44,(int)45,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(69)
				::flixel::ui::FlxButton tmp18 = this->buttonRight = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(69)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(69)
				tmp14->add(tmp19);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(71)
				::flixel::group::FlxTypedSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				int tmp10 = (tmp9 - (int)81);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(71)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)35,tmp10,(int)44,(int)45,HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(71)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(71)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(71)
				tmp8->add(tmp13);
				HX_STACK_LINE(72)
				::flixel::group::FlxTypedSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(72)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(72)
				::flixel::ui::FlxButton tmp18 = this->buttonLeft = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(72)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(72)
				tmp14->add(tmp19);
				HX_STACK_LINE(73)
				::flixel::group::FlxTypedSpriteGroup tmp20 = this->dPad;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(73)
				int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(73)
				int tmp22 = (tmp21 - (int)45);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(73)
				::flixel::ui::FlxButton tmp23 = this->createButton((int)69,tmp22,(int)44,(int)45,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(73)
				::flixel::ui::FlxButton tmp24 = this->buttonRight = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(73)
				::flixel::FlxSprite tmp25 = this->add(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(73)
				tmp20->add(tmp25);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(75)
				::flixel::group::FlxTypedSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(75)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				int tmp10 = (tmp9 - (int)116);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(75)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)35,tmp10,(int)44,(int)45,HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(75)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(75)
				tmp8->add(tmp13);
				HX_STACK_LINE(76)
				::flixel::group::FlxTypedSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(76)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(76)
				int tmp16 = (tmp15 - (int)81);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(76)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(76)
				::flixel::ui::FlxButton tmp18 = this->buttonLeft = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(76)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(76)
				tmp14->add(tmp19);
				HX_STACK_LINE(77)
				::flixel::group::FlxTypedSpriteGroup tmp20 = this->dPad;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(77)
				int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(77)
				int tmp22 = (tmp21 - (int)81);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(77)
				::flixel::ui::FlxButton tmp23 = this->createButton((int)69,tmp22,(int)44,(int)45,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(77)
				::flixel::ui::FlxButton tmp24 = this->buttonRight = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(77)
				::flixel::FlxSprite tmp25 = this->add(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(77)
				tmp20->add(tmp25);
				HX_STACK_LINE(78)
				::flixel::group::FlxTypedSpriteGroup tmp26 = this->dPad;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(78)
				int tmp27 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(78)
				int tmp28 = (tmp27 - (int)45);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(78)
				::flixel::ui::FlxButton tmp29 = this->createButton((int)35,tmp28,(int)44,(int)45,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(78)
				::flixel::ui::FlxButton tmp30 = this->buttonDown = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(78)
				::flixel::FlxSprite tmp31 = this->add(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(78)
				tmp26->add(tmp31);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
	HX_STACK_LINE(82)
	bool tmp8 = (Action != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	if ((tmp8)){
		HX_STACK_LINE(82)
		switch( (int)(Action->__Index())){
			case (int)1: {
				HX_STACK_LINE(85)
				::flixel::group::FlxTypedSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				int tmp11 = (tmp10 - (int)44);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,HX_HCSTRING("a","\x61","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(85)
				tmp9->add(tmp16);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(87)
				::flixel::group::FlxTypedSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				int tmp11 = (tmp10 - (int)44);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,HX_HCSTRING("a","\x61","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				tmp9->add(tmp16);
				HX_STACK_LINE(88)
				::flixel::group::FlxTypedSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(88)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(88)
				int tmp19 = (tmp18 - (int)86);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(88)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(88)
				int tmp21 = (tmp20 - (int)45);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(88)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,HX_HCSTRING("b","\x62","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(88)
				::flixel::ui::FlxButton tmp23 = this->buttonB = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(88)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(88)
				tmp17->add(tmp24);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(90)
				::flixel::group::FlxTypedSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(90)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(90)
				int tmp11 = (tmp10 - (int)128);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(90)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(90)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,HX_HCSTRING("a","\x61","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(90)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(90)
				tmp9->add(tmp16);
				HX_STACK_LINE(91)
				::flixel::group::FlxTypedSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(91)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				int tmp19 = (tmp18 - (int)86);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(91)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				int tmp21 = (tmp20 - (int)45);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(91)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,HX_HCSTRING("b","\x62","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(91)
				::flixel::ui::FlxButton tmp23 = this->buttonB = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(91)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(91)
				tmp17->add(tmp24);
				HX_STACK_LINE(92)
				::flixel::group::FlxTypedSpriteGroup tmp25 = this->actions;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(92)
				int tmp27 = (tmp26 - (int)44);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(92)
				int tmp28 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(92)
				int tmp29 = (tmp28 - (int)45);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(92)
				::flixel::ui::FlxButton tmp30 = this->createButton(tmp27,tmp29,(int)44,(int)45,HX_HCSTRING("c","\x63","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(92)
				::flixel::ui::FlxButton tmp31 = this->buttonC = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(92)
				::flixel::FlxSprite tmp32 = this->add(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(92)
				tmp25->add(tmp32);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(94)
				::flixel::group::FlxTypedSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				int tmp11 = (tmp10 - (int)86);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				int tmp13 = (tmp12 - (int)85);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,HX_HCSTRING("y","\x79","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(94)
				::flixel::ui::FlxButton tmp15 = this->buttonY = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(94)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(94)
				tmp9->add(tmp16);
				HX_STACK_LINE(95)
				::flixel::group::FlxTypedSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				int tmp19 = (tmp18 - (int)44);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(95)
				int tmp21 = (tmp20 - (int)85);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(95)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,HX_HCSTRING("x","\x78","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(95)
				::flixel::ui::FlxButton tmp23 = this->buttonX = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(95)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(95)
				tmp17->add(tmp24);
				HX_STACK_LINE(96)
				::flixel::group::FlxTypedSpriteGroup tmp25 = this->actions;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				int tmp27 = (tmp26 - (int)86);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(96)
				int tmp28 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(96)
				int tmp29 = (tmp28 - (int)45);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(96)
				::flixel::ui::FlxButton tmp30 = this->createButton(tmp27,tmp29,(int)44,(int)45,HX_HCSTRING("b","\x62","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(96)
				::flixel::ui::FlxButton tmp31 = this->buttonB = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(96)
				::flixel::FlxSprite tmp32 = this->add(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(96)
				tmp25->add(tmp32);
				HX_STACK_LINE(97)
				::flixel::group::FlxTypedSpriteGroup tmp33 = this->actions;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(97)
				int tmp34 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(97)
				int tmp35 = (tmp34 - (int)44);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(97)
				int tmp36 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(97)
				int tmp37 = (tmp36 - (int)45);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(97)
				::flixel::ui::FlxButton tmp38 = this->createButton(tmp35,tmp37,(int)44,(int)45,HX_HCSTRING("a","\x61","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(97)
				::flixel::ui::FlxButton tmp39 = this->buttonA = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(97)
				::flixel::FlxSprite tmp40 = this->add(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(97)
				tmp33->add(tmp40);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
}
;
	return null();
}

//FlxVirtualPad_obj::~FlxVirtualPad_obj() { }

Dynamic FlxVirtualPad_obj::__CreateEmpty() { return  new FlxVirtualPad_obj; }
hx::ObjectPtr< FlxVirtualPad_obj > FlxVirtualPad_obj::__new(::flixel::ui::FlxDPadMode DPad,::flixel::ui::FlxActionMode Action)
{  hx::ObjectPtr< FlxVirtualPad_obj > _result_ = new FlxVirtualPad_obj();
	_result_->__construct(DPad,Action);
	return _result_;}

Dynamic FlxVirtualPad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVirtualPad_obj > _result_ = new FlxVirtualPad_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxVirtualPad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxVirtualPad","destroy",0x76516e3e,"flixel.ui.FlxVirtualPad.destroy","flixel/ui/FlxVirtualPad.hx",103,0x865d16ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->super::destroy();
		HX_STACK_LINE(106)
		::flixel::group::FlxTypedSpriteGroup tmp = this->dPad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::flixel::group::FlxTypedSpriteGroup tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		this->dPad = tmp1;
		HX_STACK_LINE(107)
		::flixel::group::FlxTypedSpriteGroup tmp2 = this->actions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::flixel::group::FlxTypedSpriteGroup tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		this->actions = tmp3;
		HX_STACK_LINE(109)
		this->dPad = null();
		HX_STACK_LINE(110)
		this->actions = null();
		HX_STACK_LINE(111)
		this->buttonA = null();
		HX_STACK_LINE(112)
		this->buttonB = null();
		HX_STACK_LINE(113)
		this->buttonC = null();
		HX_STACK_LINE(114)
		this->buttonY = null();
		HX_STACK_LINE(115)
		this->buttonX = null();
		HX_STACK_LINE(116)
		this->buttonLeft = null();
		HX_STACK_LINE(117)
		this->buttonUp = null();
		HX_STACK_LINE(118)
		this->buttonDown = null();
		HX_STACK_LINE(119)
		this->buttonRight = null();
	}
return null();
}


::flixel::ui::FlxButton FlxVirtualPad_obj::createButton( Float X,Float Y,int Width,int Height,::String Graphic,Dynamic OnClick){
	HX_STACK_FRAME("flixel.ui.FlxVirtualPad","createButton",0xad434a4a,"flixel.ui.FlxVirtualPad.createButton","flixel/ui/FlxVirtualPad.hx",132,0x865d16ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(OnClick,"OnClick")
	HX_STACK_LINE(133)
	::flixel::ui::FlxButton tmp = ::flixel::ui::FlxButton_obj::__new(X,Y,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::flixel::ui::FlxButton button = tmp;		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(134)
	::flixel::graphics::frames::FlxFrame tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::flixel::graphics::frames::FlxAtlasFrames tmp2 = ::flixel::_system::FlxAssets_obj::getVirtualInputFrames();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::flixel::graphics::frames::FlxAtlasFrames _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		::String tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		::flixel::graphics::frames::FlxFrame tmp4 = _this->framesHash->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		tmp1 = tmp4;
	}
	HX_STACK_LINE(134)
	::flixel::graphics::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(135)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		int tmp6 = Width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		int tmp7 = Height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(135)
		point->_inPool = false;
		HX_STACK_LINE(135)
		tmp3 = point;
	}
	HX_STACK_LINE(135)
	::flixel::graphics::frames::FlxTileFrames tmp4 = ::flixel::graphics::frames::FlxTileFrames_obj::fromFrame(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	button->set_frames(tmp4);
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		int tmp5 = button->frameWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		button->set_width(tmp5);
		HX_STACK_LINE(136)
		int tmp6 = button->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		button->set_height(tmp6);
	}
	HX_STACK_LINE(137)
	button->set_solid(false);
	HX_STACK_LINE(138)
	button->set_immovable(true);
	HX_STACK_LINE(139)
	button->scrollFactor->set(null(),null());
	HX_STACK_LINE(142)
	button->ignoreDrawDebug = true;
	HX_STACK_LINE(145)
	bool tmp5 = (OnClick != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	if ((tmp5)){
		HX_STACK_LINE(147)
		button->onDown->callback = OnClick;
	}
	HX_STACK_LINE(150)
	::flixel::ui::FlxButton tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(150)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC6(FlxVirtualPad_obj,createButton,return )


FlxVirtualPad_obj::FlxVirtualPad_obj()
{
}

void FlxVirtualPad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVirtualPad);
	HX_MARK_MEMBER_NAME(buttonA,"buttonA");
	HX_MARK_MEMBER_NAME(buttonB,"buttonB");
	HX_MARK_MEMBER_NAME(buttonC,"buttonC");
	HX_MARK_MEMBER_NAME(buttonY,"buttonY");
	HX_MARK_MEMBER_NAME(buttonX,"buttonX");
	HX_MARK_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_MARK_MEMBER_NAME(buttonUp,"buttonUp");
	HX_MARK_MEMBER_NAME(buttonRight,"buttonRight");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(dPad,"dPad");
	HX_MARK_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxVirtualPad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonA,"buttonA");
	HX_VISIT_MEMBER_NAME(buttonB,"buttonB");
	HX_VISIT_MEMBER_NAME(buttonC,"buttonC");
	HX_VISIT_MEMBER_NAME(buttonY,"buttonY");
	HX_VISIT_MEMBER_NAME(buttonX,"buttonX");
	HX_VISIT_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_VISIT_MEMBER_NAME(buttonUp,"buttonUp");
	HX_VISIT_MEMBER_NAME(buttonRight,"buttonRight");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(dPad,"dPad");
	HX_VISIT_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxVirtualPad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { return dPad; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { return buttonA; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { return buttonB; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { return buttonC; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { return buttonY; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { return buttonX; }
		if (HX_FIELD_EQ(inName,"actions") ) { return actions; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { return buttonUp; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { return buttonLeft; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { return buttonRight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVirtualPad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { dPad=inValue.Cast< ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { buttonA=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { buttonB=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { buttonC=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { buttonY=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { buttonX=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast< ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { buttonUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { buttonLeft=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { buttonRight=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVirtualPad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1"));
	outFields->push(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"));
	outFields->push(HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42"));
	outFields->push(HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonA),HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonB),HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonC),HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonY),HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonX),HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonLeft),HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonUp),HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonRight),HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsObject /*::flixel::group::FlxTypedSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,dPad),HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42")},
	{hx::fsObject /*::flixel::group::FlxTypedSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,actions),HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca"),
	HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca"),
	HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca"),
	HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca"),
	HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca"),
	HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1"),
	HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),
	HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42"),
	HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("createButton","\x0e","\xa2","\x35","\xfc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVirtualPad_obj::__mClass;

void FlxVirtualPad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxVirtualPad","\xb2","\xbd","\x5a","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVirtualPad_obj >;
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
} // end namespace ui
