#include <hxcpp.h>

#ifndef INCLUDED_EnumOutcome
#include <EnumOutcome.h>
#endif
#ifndef INCLUDED_ObjectEnemy
#include <ObjectEnemy.h>
#endif
#ifndef INCLUDED_ObjectHUDCombat
#include <ObjectHUDCombat.h>
#endif
#ifndef INCLUDED_ObjectPlayer
#include <ObjectPlayer.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#include <flixel/addons/effects/chainable/FlxWaveEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_ColorMatrixFilter
#include <openfl/_legacy/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

Void ObjectHUDCombat_obj::__construct()
{
HX_STACK_FRAME("ObjectHUDCombat","new",0xab907c5e,"ObjectHUDCombat.new","ObjectHUDCombat.hx",40,0x5b75b8d2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(90)
	this->waitBool = true;
	HX_STACK_LINE(78)
	this->alphaFloat = ((Float)0);
	HX_STACK_LINE(100)
	super::__construct(null());
	HX_STACK_LINE(101)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	::flixel::FlxSprite tmp3 = tmp->makeGraphic(tmp1,tmp2,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	this->screenFlxSprite = tmp3;
	HX_STACK_LINE(102)
	::flixel::addons::effects::chainable::FlxWaveEffect tmp4 = ::flixel::addons::effects::chainable::FlxWaveEffect_obj::__new(::flixel::addons::effects::chainable::FlxWaveMode_obj::ALL,(int)4,(int)-1,(int)4,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	::flixel::addons::effects::chainable::FlxWaveEffect waveFlxWaveEffect = tmp4;		HX_STACK_VAR(waveFlxWaveEffect,"waveFlxWaveEffect");
	HX_STACK_LINE(103)
	::flixel::FlxSprite tmp5 = this->screenFlxSprite;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	::flixel::addons::effects::chainable::FlxEffectSprite tmp6 = ::flixel::addons::effects::chainable::FlxEffectSprite_obj::__new(tmp5,Array_obj< ::flixel::addons::effects::chainable::IFlxEffect >::__new().Add(waveFlxWaveEffect));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	::flixel::addons::effects::chainable::FlxEffectSprite waveFlxEffectSprite = tmp6;		HX_STACK_VAR(waveFlxEffectSprite,"waveFlxEffectSprite");
	HX_STACK_LINE(108)
	::flixel::FlxSprite tmp7 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(108)
	::flixel::FlxSprite tmp8 = tmp7->makeGraphic((int)120,(int)120,(int)-1,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(108)
	this->backFlxSprite = tmp8;
	HX_STACK_LINE(111)
	::flixel::FlxSprite tmp9 = this->backFlxSprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	::flixel::util::FlxSpriteUtil_obj::drawRect(tmp9,(int)1,(int)1,(int)118,(int)44,(int)-16777216,null(),null());
	HX_STACK_LINE(112)
	::flixel::FlxSprite tmp10 = this->backFlxSprite;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(112)
	::flixel::util::FlxSpriteUtil_obj::drawRect(tmp10,(int)1,(int)46,(int)118,(int)73,(int)-16777216,null(),null());
	HX_STACK_LINE(113)
	::flixel::FlxSprite tmp11 = this->backFlxSprite;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(113)
	tmp11->screenCenter(null());
	HX_STACK_LINE(117)
	::flixel::FlxSprite tmp12 = this->backFlxSprite;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(117)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(117)
	Float tmp14 = (tmp13 + (int)36);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	::flixel::FlxSprite tmp15 = this->backFlxSprite;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(117)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(117)
	Float tmp17 = (tmp16 + (int)16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(117)
	::ObjectPlayer tmp18 = ::ObjectPlayer_obj::__new(tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(117)
	this->playerObjectPlayer = tmp18;
	HX_STACK_LINE(118)
	::ObjectPlayer tmp19 = this->playerObjectPlayer;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(118)
	tmp19->set_active(false);
	HX_STACK_LINE(119)
	::ObjectPlayer tmp20 = this->playerObjectPlayer;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(119)
	tmp20->animation->set_frameIndex((int)3);
	HX_STACK_LINE(120)
	::ObjectPlayer tmp21 = this->playerObjectPlayer;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(120)
	tmp21->set_facing((int)16);
	HX_STACK_LINE(124)
	::flixel::FlxSprite tmp22 = this->backFlxSprite;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(124)
	Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(124)
	Float tmp24 = (tmp23 + (int)76);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(124)
	::flixel::FlxSprite tmp25 = this->backFlxSprite;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(124)
	Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(124)
	Float tmp27 = (tmp26 + (int)16);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(124)
	::ObjectEnemy tmp28 = ::ObjectEnemy_obj::__new(tmp24,tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(124)
	this->enemyObjectEnemy = tmp28;
	HX_STACK_LINE(125)
	::ObjectEnemy tmp29 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(125)
	tmp29->set_active(false);
	HX_STACK_LINE(126)
	::ObjectEnemy tmp30 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(126)
	tmp30->animation->set_frameIndex((int)3);
	HX_STACK_LINE(127)
	::ObjectEnemy tmp31 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(127)
	tmp31->set_facing((int)1);
	HX_STACK_LINE(131)
	::ObjectPlayer tmp32 = this->playerObjectPlayer;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(131)
	Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(131)
	::ObjectPlayer tmp34 = this->playerObjectPlayer;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(131)
	Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(131)
	Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(131)
	Float tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(131)
	::flixel::text::FlxText tmp38 = ::flixel::text::FlxText_obj::__new((int)0,tmp37,(int)0,HX_HCSTRING("3/3","\x17","\xdc","\x26","\x00"),(int)8,null());		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(131)
	this->playerHealthFlxText = tmp38;
	HX_STACK_LINE(132)
	::flixel::text::FlxText tmp39 = this->playerHealthFlxText;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(132)
	tmp39->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	HX_STACK_LINE(133)
	::flixel::text::FlxText tmp40 = this->playerHealthFlxText;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(133)
	::ObjectPlayer tmp41 = this->playerObjectPlayer;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(133)
	Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(133)
	Float tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(133)
	::flixel::text::FlxText tmp44 = this->playerHealthFlxText;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(133)
	Float tmp45 = tmp44->get_width();		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(133)
	Float tmp46 = (Float(tmp45) / Float((int)2));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(133)
	Float tmp47 = (tmp43 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(133)
	tmp40->set_x(tmp47);
	HX_STACK_LINE(138)
	::ObjectEnemy tmp48 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(138)
	Float tmp49 = tmp48->x;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(138)
	Float tmp50 = (tmp49 - (int)6);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(139)
	::flixel::text::FlxText tmp51 = this->playerHealthFlxText;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(139)
	Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(137)
	::flixel::ui::FlxBar tmp53 = ::flixel::ui::FlxBar_obj::__new(tmp50,tmp52,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,(int)20,(int)10,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(137)
	this->enemyHealthFlxBar = tmp53;
	HX_STACK_LINE(143)
	::flixel::ui::FlxBar tmp54 = this->enemyHealthFlxBar;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(143)
	tmp54->createFilledBar((int)-2354116,(int)-256,true,(int)-256);
	HX_STACK_LINE(153)
	this->choiceFlxTextArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(154)
	::flixel::FlxSprite tmp55 = this->backFlxSprite;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(154)
	Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(154)
	Float tmp57 = (tmp56 + (int)30);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(154)
	::flixel::FlxSprite tmp58 = this->backFlxSprite;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(154)
	Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(154)
	Float tmp60 = (tmp59 + (int)48);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(154)
	::flixel::text::FlxText tmp61 = ::flixel::text::FlxText_obj::__new(tmp57,tmp60,(int)85,HX_HCSTRING("FIGHT","\xb0","\x4d","\x83","\x7e"),(int)22,null());		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(154)
	this->choiceFlxTextArray->push(tmp61);
	HX_STACK_LINE(155)
	::flixel::FlxSprite tmp62 = this->backFlxSprite;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(155)
	Float tmp63 = tmp62->x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(155)
	Float tmp64 = (tmp63 + (int)30);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(155)
	::flixel::text::FlxText tmp65 = this->choiceFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(155)
	Float tmp66 = tmp65->y;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(155)
	::flixel::text::FlxText tmp67 = this->choiceFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(155)
	Float tmp68 = tmp67->get_height();		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(155)
	Float tmp69 = (tmp66 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(155)
	Float tmp70 = (tmp69 + (int)8);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(155)
	::flixel::text::FlxText tmp71 = ::flixel::text::FlxText_obj::__new(tmp64,tmp70,(int)85,HX_HCSTRING("FLEE","\x26","\xd7","\x7e","\x2e"),(int)22,null());		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(155)
	this->choiceFlxTextArray->push(tmp71);
	HX_STACK_LINE(158)
	::flixel::FlxSprite tmp72 = this->backFlxSprite;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(158)
	Float tmp73 = tmp72->x;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(158)
	Float tmp74 = (tmp73 + (int)10);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(159)
	::flixel::text::FlxText tmp75 = this->choiceFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(159)
	Float tmp76 = tmp75->y;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(159)
	::flixel::text::FlxText tmp77 = this->choiceFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(159)
	Float tmp78 = tmp77->get_height();		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(159)
	Float tmp79 = (Float(tmp78) / Float((int)2));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(159)
	Float tmp80 = (tmp76 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(159)
	Float tmp81 = (tmp80 - (int)8);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(157)
	::flixel::FlxSprite tmp82 = ::flixel::FlxSprite_obj::__new(tmp74,tmp81,HX_HCSTRING("assets/images/pointer.png","\xad","\xe2","\xd4","\x86"));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(157)
	this->pointerFlxSprite = tmp82;
	HX_STACK_LINE(162)
	::flixel::FlxSprite tmp83 = this->pointerFlxSprite;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(162)
	tmp83->set_visible(false);
	HX_STACK_LINE(166)
	this->damageFlxTextArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(167)
	::flixel::text::FlxText tmp84 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)40,null(),null(),null());		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(167)
	this->damageFlxTextArray->push(tmp84);
	HX_STACK_LINE(168)
	::flixel::text::FlxText tmp85 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)40,null(),null(),null());		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(168)
	this->damageFlxTextArray->push(tmp85);
	HX_STACK_LINE(172)
	::flixel::FlxSprite tmp86 = this->backFlxSprite;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(172)
	Float tmp87 = tmp86->x;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(172)
	Float tmp88 = (tmp87 + (int)2);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(172)
	::flixel::FlxSprite tmp89 = this->backFlxSprite;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(172)
	Float tmp90 = tmp89->y;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(172)
	Float tmp91 = (tmp90 + (int)9);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(172)
	::flixel::text::FlxText tmp92 = ::flixel::text::FlxText_obj::__new(tmp88,tmp91,(int)116,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)18,null());		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(172)
	this->resultTextObject = tmp92;
	HX_STACK_LINE(173)
	::flixel::text::FlxText tmp93 = this->resultTextObject;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(173)
	tmp93->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	HX_STACK_LINE(174)
	::flixel::text::FlxText tmp94 = this->resultTextObject;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(174)
	tmp94->set_color((int)-256);
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::flixel::text::FlxText tmp95 = this->resultTextObject;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(175)
		::flixel::text::FlxText _this = tmp95;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(175)
		Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
		HX_STACK_LINE(175)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(175)
		_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW);
		HX_STACK_LINE(175)
		_this->set_borderColor((int)-8355712);
		HX_STACK_LINE(175)
		Float tmp96 = Size;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(175)
		_this->set_borderSize(tmp96);
		HX_STACK_LINE(175)
		Float tmp97 = Quality;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(175)
		_this->set_borderQuality(tmp97);
		HX_STACK_LINE(175)
		_this;
	}
	HX_STACK_LINE(176)
	::flixel::text::FlxText tmp95 = this->resultTextObject;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(176)
	tmp95->set_visible(false);
	HX_STACK_LINE(180)
	::flixel::addons::effects::chainable::FlxEffectSprite tmp96 = waveFlxEffectSprite;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(180)
	this->add(tmp96);
	HX_STACK_LINE(181)
	::flixel::FlxSprite tmp97 = this->backFlxSprite;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(181)
	this->add(tmp97);
	HX_STACK_LINE(182)
	::ObjectPlayer tmp98 = this->playerObjectPlayer;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(182)
	this->add(tmp98);
	HX_STACK_LINE(183)
	::ObjectEnemy tmp99 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(183)
	this->add(tmp99);
	HX_STACK_LINE(184)
	::flixel::text::FlxText tmp100 = this->playerHealthFlxText;		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(184)
	this->add(tmp100);
	HX_STACK_LINE(185)
	::flixel::ui::FlxBar tmp101 = this->enemyHealthFlxBar;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(185)
	this->add(tmp101);
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		Array< ::Dynamic > _g1 = this->damageFlxTextArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp102 = (_g < _g1->length);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(186)
			bool tmp103 = !(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(186)
			if ((tmp103)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			::flixel::text::FlxText tmp104 = _g1->__get(_g).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(186)
			::flixel::text::FlxText textObject = tmp104;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(186)
			++(_g);
			HX_STACK_LINE(187)
			textObject->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(188)
			textObject->set_color((int)-1);
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
				HX_STACK_LINE(189)
				Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
				HX_STACK_LINE(189)
				textObject->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW);
				HX_STACK_LINE(189)
				textObject->set_borderColor((int)-65536);
				HX_STACK_LINE(189)
				Float tmp105 = Size;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(189)
				textObject->set_borderSize(tmp105);
				HX_STACK_LINE(189)
				Float tmp106 = Quality;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(189)
				textObject->set_borderQuality(tmp106);
				HX_STACK_LINE(189)
				textObject;
			}
			HX_STACK_LINE(190)
			textObject->set_visible(false);
			HX_STACK_LINE(191)
			::flixel::text::FlxText tmp105 = textObject;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(191)
			this->add(tmp105);
		}
	}
	HX_STACK_LINE(193)
	::flixel::text::FlxText tmp102 = this->choiceFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(193)
	this->add(tmp102);
	HX_STACK_LINE(194)
	::flixel::text::FlxText tmp103 = this->choiceFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(194)
	this->add(tmp103);
	HX_STACK_LINE(195)
	::flixel::FlxSprite tmp104 = this->pointerFlxSprite;		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(195)
	this->add(tmp104);
	HX_STACK_LINE(196)
	::flixel::text::FlxText tmp105 = this->resultTextObject;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(196)
	this->add(tmp105);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Void run(::flixel::FlxSprite _FlxSprite){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectHUDCombat.hx",200,0x5b75b8d2)
		HX_STACK_ARG(_FlxSprite,"_FlxSprite")
		{
			HX_STACK_LINE(201)
			_FlxSprite->scrollFactor->set(null(),null());
			HX_STACK_LINE(202)
			_FlxSprite->set_alpha((int)0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(200)
	this->forEach( Dynamic(new _Function_1_1()),null());
	HX_STACK_LINE(207)
	this->set_active(false);
	HX_STACK_LINE(208)
	this->set_visible(false);
	HX_STACK_LINE(212)
	::flixel::_system::frontEnds::SoundFrontEnd tmp106 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(212)
	::flixel::_system::FlxSound tmp107 = tmp106->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/combat.wav","\xd1","\x22","\x6e","\x57"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(212)
	this->combatFlxSound = tmp107;
	HX_STACK_LINE(213)
	::flixel::_system::frontEnds::SoundFrontEnd tmp108 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(213)
	::flixel::_system::FlxSound tmp109 = tmp108->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/fled.wav","\x82","\x28","\xc9","\x3d"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(213)
	this->fledFlxSound = tmp109;
	HX_STACK_LINE(214)
	::flixel::_system::frontEnds::SoundFrontEnd tmp110 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(214)
	::flixel::_system::FlxSound tmp111 = tmp110->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/hurt.wav","\x6c","\x32","\x7c","\x8f"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(214)
	this->hurtFlxSound = tmp111;
	HX_STACK_LINE(215)
	::flixel::_system::frontEnds::SoundFrontEnd tmp112 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(215)
	::flixel::_system::FlxSound tmp113 = tmp112->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/lose.wav","\x32","\xdb","\x1d","\x3e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(215)
	this->loseFlxSound = tmp113;
	HX_STACK_LINE(216)
	::flixel::_system::frontEnds::SoundFrontEnd tmp114 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(216)
	::flixel::_system::FlxSound tmp115 = tmp114->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/miss.wav","\xd9","\xa3","\x6b","\x8d"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(216)
	this->missFlxSound = tmp115;
	HX_STACK_LINE(217)
	::flixel::_system::frontEnds::SoundFrontEnd tmp116 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(217)
	::flixel::_system::FlxSound tmp117 = tmp116->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/select.wav","\x99","\x31","\xec","\x2e"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(217)
	this->selectFlxSound = tmp117;
	HX_STACK_LINE(218)
	::flixel::_system::frontEnds::SoundFrontEnd tmp118 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(218)
	::flixel::_system::FlxSound tmp119 = tmp118->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/win.wav","\x9b","\x6f","\xbc","\xc5"),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(218)
	this->winFlxSound = tmp119;
}
;
	return null();
}

//ObjectHUDCombat_obj::~ObjectHUDCombat_obj() { }

Dynamic ObjectHUDCombat_obj::__CreateEmpty() { return  new ObjectHUDCombat_obj; }
hx::ObjectPtr< ObjectHUDCombat_obj > ObjectHUDCombat_obj::__new()
{  hx::ObjectPtr< ObjectHUDCombat_obj > _result_ = new ObjectHUDCombat_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectHUDCombat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectHUDCombat_obj > _result_ = new ObjectHUDCombat_obj();
	_result_->__construct();
	return _result_;}

Void ObjectHUDCombat_obj::destroy( ){
{
		HX_STACK_FRAME("ObjectHUDCombat","destroy",0xe2bbaff8,"ObjectHUDCombat.destroy","ObjectHUDCombat.hx",228,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		this->super::destroy();
		HX_STACK_LINE(232)
		::flixel::FlxSprite tmp = this->backFlxSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::flixel::FlxSprite tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		this->backFlxSprite = tmp1;
		HX_STACK_LINE(233)
		this->choiceFlxTextArray = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->choiceFlxTextArray);
		HX_STACK_LINE(234)
		this->damageFlxTextArray = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->damageFlxTextArray);
		HX_STACK_LINE(235)
		::ObjectEnemy tmp2 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		::ObjectEnemy tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		this->enemyObjectEnemy = tmp3;
		HX_STACK_LINE(236)
		::ObjectEnemy tmp4 = this->passedObjectEnemy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		::ObjectEnemy tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		this->passedObjectEnemy = tmp5;
		HX_STACK_LINE(237)
		::flixel::text::FlxText tmp6 = this->playerHealthFlxText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		::flixel::text::FlxText tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		this->playerHealthFlxText = tmp7;
		HX_STACK_LINE(238)
		::ObjectPlayer tmp8 = this->playerObjectPlayer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		::ObjectPlayer tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		this->playerObjectPlayer = tmp9;
		HX_STACK_LINE(239)
		::flixel::FlxSprite tmp10 = this->pointerFlxSprite;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		::flixel::FlxSprite tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		this->pointerFlxSprite = tmp11;
		HX_STACK_LINE(240)
		::flixel::text::FlxText tmp12 = this->resultTextObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(240)
		::flixel::text::FlxText tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(240)
		this->resultTextObject = tmp13;
		HX_STACK_LINE(242)
		::flixel::_system::FlxSound tmp14 = this->combatFlxSound;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		::flixel::_system::FlxSound tmp15 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(242)
		this->combatFlxSound = tmp15;
		HX_STACK_LINE(243)
		::flixel::_system::FlxSound tmp16 = this->fledFlxSound;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(243)
		::flixel::_system::FlxSound tmp17 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(243)
		this->fledFlxSound = tmp17;
		HX_STACK_LINE(244)
		::flixel::_system::FlxSound tmp18 = this->hurtFlxSound;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(244)
		::flixel::_system::FlxSound tmp19 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(244)
		this->hurtFlxSound = tmp19;
		HX_STACK_LINE(245)
		::flixel::_system::FlxSound tmp20 = this->loseFlxSound;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(245)
		::flixel::_system::FlxSound tmp21 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(245)
		this->loseFlxSound = tmp21;
		HX_STACK_LINE(246)
		::flixel::_system::FlxSound tmp22 = this->missFlxSound;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(246)
		::flixel::_system::FlxSound tmp23 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(246)
		this->missFlxSound = tmp23;
		HX_STACK_LINE(247)
		::flixel::_system::FlxSound tmp24 = this->selectFlxSound;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(247)
		::flixel::_system::FlxSound tmp25 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(247)
		this->selectFlxSound = tmp25;
		HX_STACK_LINE(248)
		::flixel::_system::FlxSound tmp26 = this->winFlxSound;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(248)
		::flixel::_system::FlxSound tmp27 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(248)
		this->winFlxSound = tmp27;
	}
return null();
}


Void ObjectHUDCombat_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("ObjectHUDCombat","update",0x38a9eccb,"ObjectHUDCombat.update","ObjectHUDCombat.hx",258,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(260)
		bool tmp = this->waitBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(265)
			bool downBool = false;		HX_STACK_VAR(downBool,"downBool");
			HX_STACK_LINE(266)
			bool fireBool = false;		HX_STACK_VAR(fireBool,"fireBool");
			HX_STACK_LINE(267)
			bool upBool = false;		HX_STACK_VAR(upBool,"upBool");
			HX_STACK_LINE(270)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				{
					HX_STACK_LINE(270)
					::String s = HX_HCSTRING("S","\x53","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(270)
					::String tmp4 = s.toUpperCase();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(270)
					s = tmp4;
					HX_STACK_LINE(270)
					::haxe::ds::StringMap tmp5 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(270)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					if ((tmp7)){
						HX_STACK_LINE(270)
						::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(270)
						::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(270)
						Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(270)
						tmp3 = tmp10;
					}
					else{
						HX_STACK_LINE(270)
						tmp3 = (int)-1;
					}
				}
				HX_STACK_LINE(270)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(270)
				{
					HX_STACK_LINE(270)
					::String s = HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(270)
					::String tmp5 = s.toUpperCase();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(270)
					s = tmp5;
					HX_STACK_LINE(270)
					::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(270)
					if ((tmp8)){
						HX_STACK_LINE(270)
						::haxe::ds::StringMap tmp9 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(270)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(270)
						Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(270)
						tmp4 = tmp11;
					}
					else{
						HX_STACK_LINE(270)
						tmp4 = (int)-1;
					}
				}
				HX_STACK_LINE(270)
				Array< int > KeyArray = Array_obj< int >::__new().Add(tmp3).Add(tmp4);		HX_STACK_VAR(KeyArray,"KeyArray");
				HX_STACK_LINE(270)
				::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				tmp2 = tmp5->checkKeyArrayState(KeyArray,(int)-1);
			}
			HX_STACK_LINE(270)
			if ((tmp2)){
				HX_STACK_LINE(270)
				downBool = true;
			}
			else{
				HX_STACK_LINE(271)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						::String s = HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff");		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(271)
						::String tmp5 = s.toUpperCase();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(271)
						s = tmp5;
						HX_STACK_LINE(271)
						::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(271)
						::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(271)
						bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(271)
						if ((tmp8)){
							HX_STACK_LINE(271)
							::haxe::ds::StringMap tmp9 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(271)
							::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(271)
							Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(271)
							tmp4 = tmp11;
						}
						else{
							HX_STACK_LINE(271)
							tmp4 = (int)-1;
						}
					}
					HX_STACK_LINE(271)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						::String s = HX_HCSTRING("X","\x58","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(271)
						::String tmp6 = s.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(271)
						s = tmp6;
						HX_STACK_LINE(271)
						::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(271)
						::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(271)
						bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(271)
						if ((tmp9)){
							HX_STACK_LINE(271)
							::haxe::ds::StringMap tmp10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(271)
							::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(271)
							Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(271)
							tmp5 = tmp12;
						}
						else{
							HX_STACK_LINE(271)
							tmp5 = (int)-1;
						}
					}
					HX_STACK_LINE(271)
					Array< int > KeyArray = Array_obj< int >::__new().Add(tmp4).Add(tmp5);		HX_STACK_VAR(KeyArray,"KeyArray");
					HX_STACK_LINE(271)
					::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(271)
					tmp3 = tmp6->checkKeyArrayState(KeyArray,(int)-1);
				}
				HX_STACK_LINE(271)
				if ((tmp3)){
					HX_STACK_LINE(271)
					fireBool = true;
				}
				else{
					HX_STACK_LINE(272)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(272)
						{
							HX_STACK_LINE(272)
							::String s = HX_HCSTRING("W","\x57","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(272)
							::String tmp6 = s.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(272)
							s = tmp6;
							HX_STACK_LINE(272)
							::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(272)
							::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(272)
							bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(272)
							if ((tmp9)){
								HX_STACK_LINE(272)
								::haxe::ds::StringMap tmp10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(272)
								::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(272)
								Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(272)
								tmp5 = tmp12;
							}
							else{
								HX_STACK_LINE(272)
								tmp5 = (int)-1;
							}
						}
						HX_STACK_LINE(272)
						int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(272)
						{
							HX_STACK_LINE(272)
							::String s = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(272)
							::String tmp7 = s.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(272)
							s = tmp7;
							HX_STACK_LINE(272)
							::haxe::ds::StringMap tmp8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(272)
							::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(272)
							bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(272)
							if ((tmp10)){
								HX_STACK_LINE(272)
								::haxe::ds::StringMap tmp11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(272)
								::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(272)
								Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(272)
								tmp6 = tmp13;
							}
							else{
								HX_STACK_LINE(272)
								tmp6 = (int)-1;
							}
						}
						HX_STACK_LINE(272)
						Array< int > KeyArray = Array_obj< int >::__new().Add(tmp5).Add(tmp6);		HX_STACK_VAR(KeyArray,"KeyArray");
						HX_STACK_LINE(272)
						::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(272)
						tmp4 = tmp7->checkKeyArrayState(KeyArray,(int)-1);
					}
					HX_STACK_LINE(272)
					if ((tmp4)){
						HX_STACK_LINE(272)
						upBool = true;
					}
				}
			}
			HX_STACK_LINE(275)
			bool tmp3 = downBool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			if ((tmp3)){
				HX_STACK_LINE(278)
				int tmp4 = this->selectIndexInt;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				bool tmp5 = (tmp4 == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(278)
				if ((tmp5)){
					HX_STACK_LINE(278)
					this->selectIndexInt = (int)0;
				}
				else{
					HX_STACK_LINE(279)
					(this->selectIndexInt)++;
				}
				HX_STACK_LINE(280)
				::flixel::_system::FlxSound tmp6 = this->selectFlxSound;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				HX_STACK_LINE(281)
				this->MovePointerVoid();
			}
			else{
				HX_STACK_LINE(284)
				bool tmp4 = fireBool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(284)
				if ((tmp4)){
					HX_STACK_LINE(286)
					::flixel::_system::FlxSound tmp5 = this->selectFlxSound;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					tmp5->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
					HX_STACK_LINE(290)
					this->MakeChoiceVoid();
				}
				else{
					HX_STACK_LINE(293)
					bool tmp5 = upBool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(293)
					if ((tmp5)){
						HX_STACK_LINE(296)
						int tmp6 = this->selectIndexInt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(296)
						bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(296)
						if ((tmp7)){
							HX_STACK_LINE(296)
							this->selectIndexInt = (int)1;
						}
						else{
							HX_STACK_LINE(297)
							(this->selectIndexInt)--;
						}
						HX_STACK_LINE(298)
						::flixel::_system::FlxSound tmp8 = this->selectFlxSound;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(298)
						tmp8->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
						HX_STACK_LINE(299)
						this->MovePointerVoid();
					}
				}
			}
		}
		HX_STACK_LINE(339)
		Float tmp2 = _elapsedFloat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		this->super::update(tmp2);
	}
return null();
}


Void ObjectHUDCombat_obj::DoneDamageInVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectHUDCombat","DoneDamageInVoid",0xde1d24ac,"ObjectHUDCombat.DoneDamageInVoid","ObjectHUDCombat.hx",350,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(353)
		Dynamic tmp = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		Dynamic tmp1 = this->DoneDamageOutVoid_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",352,0x5b75b8d2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp,false);
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp1,false);
					__result->Add(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3") , ((Dynamic)((int)1)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(352)
		Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		Dynamic tmp3 = this->UpdateDamageAlphaVoid_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		::flixel::tweens::FlxTween_obj::num((int)1,(int)0,((Float)0.66),tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,DoneDamageInVoid,(void))

Void ObjectHUDCombat_obj::DoneDamageOutVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectHUDCombat","DoneDamageOutVoid",0x76e6e4cf,"ObjectHUDCombat.DoneDamageOutVoid","ObjectHUDCombat.hx",366,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(368)
		::flixel::text::FlxText tmp = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(369)
		::flixel::text::FlxText tmp1 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(369)
		tmp1->set_visible(false);
		HX_STACK_LINE(370)
		::flixel::text::FlxText tmp2 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(371)
		::flixel::text::FlxText tmp3 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(371)
		tmp3->set_visible(false);
		HX_STACK_LINE(373)
		int tmp4 = this->playerHealthInt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		if ((tmp5)){
			HX_STACK_LINE(376)
			::flixel::_system::FlxSound tmp6 = this->loseFlxSound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
			HX_STACK_LINE(377)
			this->outcomeEnumOutcome = ::EnumOutcome_obj::DEFEAT;
			HX_STACK_LINE(378)
			::flixel::text::FlxText tmp7 = this->resultTextObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(378)
			tmp7->set_alpha((int)0);
			HX_STACK_LINE(379)
			::flixel::text::FlxText tmp8 = this->resultTextObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(379)
			tmp8->set_text(HX_HCSTRING("DEFEAT!","\xce","\x60","\x2d","\x1e"));
			HX_STACK_LINE(380)
			::flixel::text::FlxText tmp9 = this->resultTextObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(380)
			tmp9->set_visible(true);
			HX_STACK_LINE(381)
			::flixel::text::FlxText tmp10 = this->resultTextObject;		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",381,0x5b75b8d2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(381)
			Dynamic tmp11 = _Function_2_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			Dynamic tmp12 = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			Dynamic tmp13 = this->DoneResultInVoid_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_2_2{
				inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",381,0x5b75b8d2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp12,false);
						__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp13,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(381)
			Dynamic tmp14 = _Function_2_2::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			::flixel::tweens::FlxTween_obj::tween(tmp10,tmp11,((Float)0.66),tmp14);
		}
		else{
			HX_STACK_LINE(384)
			int tmp6 = this->enemyHealthInt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			bool tmp7 = (tmp6 <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			if ((tmp7)){
				HX_STACK_LINE(387)
				this->outcomeEnumOutcome = ::EnumOutcome_obj::VICTORY;
				HX_STACK_LINE(388)
				::flixel::text::FlxText tmp8 = this->resultTextObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(388)
				tmp8->set_alpha((int)0);
				HX_STACK_LINE(389)
				::flixel::text::FlxText tmp9 = this->resultTextObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(389)
				tmp9->set_text(HX_HCSTRING("VICTORY!","\x2f","\x7c","\x99","\x6e"));
				HX_STACK_LINE(390)
				::flixel::text::FlxText tmp10 = this->resultTextObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				tmp10->set_visible(true);
				HX_STACK_LINE(391)
				::flixel::_system::FlxSound tmp11 = this->winFlxSound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(391)
				tmp11->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				HX_STACK_LINE(392)
				::flixel::text::FlxText tmp12 = this->resultTextObject;		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",392,0x5b75b8d2)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(392)
				Dynamic tmp13 = _Function_3_1::Block();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(392)
				Dynamic tmp14 = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(392)
				Dynamic tmp15 = this->DoneResultInVoid_dyn();		HX_STACK_VAR(tmp15,"tmp15");
				struct _Function_3_2{
					inline static Dynamic Block( Dynamic &tmp15,Dynamic &tmp14){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",392,0x5b75b8d2)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp14,false);
							__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp15,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(392)
				Dynamic tmp16 = _Function_3_2::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(392)
				::flixel::tweens::FlxTween_obj::tween(tmp12,tmp13,((Float)0.66),tmp16);
			}
			else{
				HX_STACK_LINE(398)
				::flixel::FlxSprite tmp8 = this->pointerFlxSprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(398)
				tmp8->set_visible(true);
				HX_STACK_LINE(399)
				this->waitBool = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,DoneDamageOutVoid,(void))

Void ObjectHUDCombat_obj::DoneResultInVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectHUDCombat","DoneResultInVoid",0x0468039a,"ObjectHUDCombat.DoneResultInVoid","ObjectHUDCombat.hx",411,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(415)
		Dynamic tmp = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		Dynamic tmp1 = this->FinishFadeOutVoid_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",415,0x5b75b8d2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp,false);
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp1,false);
					__result->Add(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3") , ((Dynamic)((int)1)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(415)
		Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		Dynamic tmp3 = this->UpdateDamageAlphaVoid_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		::flixel::tweens::FlxTween_obj::num((int)1,(int)0,((Float)0.66),tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,DoneResultInVoid,(void))

Void ObjectHUDCombat_obj::EnemyAttackVoid( ){
{
		HX_STACK_FRAME("ObjectHUDCombat","EnemyAttackVoid",0x1818e882,"ObjectHUDCombat.EnemyAttackVoid","ObjectHUDCombat.hx",427,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		Float tmp1 = tmp->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		bool tmp2 = (tmp1 < (int)30);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		if ((tmp2)){
			HX_STACK_LINE(433)
			::flixel::_system::FlxSound tmp3 = this->hurtFlxSound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(433)
			tmp3->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
			HX_STACK_LINE(434)
			::flixel::text::FlxText tmp4 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			tmp4->set_text(HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
			HX_STACK_LINE(435)
			(this->playerHealthInt)--;
			HX_STACK_LINE(436)
			this->UpdatePlayerHealthVoid();
			HX_STACK_LINE(437)
			::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(437)
			tmp5->flash((int)-1,((Float).2),null(),null());
			HX_STACK_LINE(438)
			::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			tmp6->shake(((Float)0.01),((Float)0.2),null(),null(),null());
		}
		else{
			HX_STACK_LINE(444)
			::flixel::text::FlxText tmp3 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(444)
			tmp3->set_text(HX_HCSTRING("MISS!","\xa5","\x81","\x5a","\x86"));
			HX_STACK_LINE(445)
			::flixel::_system::FlxSound tmp4 = this->missFlxSound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			tmp4->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(450)
		::flixel::text::FlxText tmp3 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		::ObjectPlayer tmp4 = this->playerObjectPlayer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		Float tmp6 = (tmp5 + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(450)
		::flixel::text::FlxText tmp7 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(450)
		Float tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(450)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(450)
		tmp3->set_x(tmp10);
		HX_STACK_LINE(451)
		::flixel::text::FlxText tmp11 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(451)
		::ObjectPlayer tmp12 = this->playerObjectPlayer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(451)
		Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(451)
		Float tmp14 = (tmp13 + (int)4);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(451)
		::flixel::text::FlxText tmp15 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(451)
		Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(451)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(451)
		Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(451)
		tmp11->set_y(tmp18);
		HX_STACK_LINE(452)
		::flixel::text::FlxText tmp19 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(452)
		tmp19->set_alpha((int)0);
		HX_STACK_LINE(453)
		::flixel::text::FlxText tmp20 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(453)
		tmp20->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectHUDCombat_obj,EnemyAttackVoid,(void))

Void ObjectHUDCombat_obj::FinishFadeInVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectHUDCombat","FinishFadeInVoid",0xa6e4240a,"ObjectHUDCombat.FinishFadeInVoid","ObjectHUDCombat.hx",463,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(465)
		this->set_active(true);
		HX_STACK_LINE(466)
		::flixel::FlxSprite tmp = this->pointerFlxSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(466)
		tmp->set_visible(true);
		HX_STACK_LINE(467)
		::flixel::_system::FlxSound tmp1 = this->selectFlxSound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		tmp1->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		HX_STACK_LINE(468)
		this->waitBool = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,FinishFadeInVoid,(void))

Void ObjectHUDCombat_obj::FinishFadeOutVoid( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("ObjectHUDCombat","FinishFadeOutVoid",0x5c3f57b1,"ObjectHUDCombat.FinishFadeOutVoid","ObjectHUDCombat.hx",478,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(480)
		this->set_active(false);
		HX_STACK_LINE(481)
		this->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,FinishFadeOutVoid,(void))

Void ObjectHUDCombat_obj::InitCombatVoid( int _playerHealthInt,::ObjectEnemy _passedObjectEnemy){
{
		HX_STACK_FRAME("ObjectHUDCombat","InitCombatVoid",0xb4fd69ba,"ObjectHUDCombat.InitCombatVoid","ObjectHUDCombat.hx",491,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_playerHealthInt,"_playerHealthInt")
		HX_STACK_ARG(_passedObjectEnemy,"_passedObjectEnemy")
		HX_STACK_LINE(496)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		::openfl::_legacy::display::Sprite tmp1 = tmp->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("ObjectHUDCombat.hx","\xd2","\xb8","\x75","\x5b"),496,HX_HCSTRING("ObjectHUDCombat","\x6c","\xb5","\x0f","\xa3"),HX_HCSTRING("InitCombatVoid","\xf8","\x70","\x91","\xb4"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(497)
		::flixel::FlxSprite tmp3 = this->screenFlxSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		::openfl::_legacy::display::BitmapData tmp4 = tmp3->get_pixels();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		::openfl::_legacy::display::Sprite tmp6 = tmp5->canvas;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		::openfl::_legacy::geom::Matrix tmp7 = ::openfl::_legacy::geom::Matrix_obj::__new((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		tmp4->draw(tmp6,tmp7,null(),null(),null(),null());
		HX_STACK_LINE(500)
		Float tmp8 = ((Float)0.333333333333333315);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(500)
		Float redColorFloat = tmp8;		HX_STACK_VAR(redColorFloat,"redColorFloat");
		HX_STACK_LINE(501)
		Float tmp9 = ((Float)0.5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		Float greenColorFloat = tmp9;		HX_STACK_VAR(greenColorFloat,"greenColorFloat");
		HX_STACK_LINE(502)
		Float tmp10 = ((Float)0.166666666666666657);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(502)
		Float blueColorFloat = tmp10;		HX_STACK_VAR(blueColorFloat,"blueColorFloat");
		HX_STACK_LINE(503)
		::flixel::FlxSprite tmp11 = this->screenFlxSprite;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(503)
		::openfl::_legacy::display::BitmapData tmp12 = tmp11->get_pixels();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(504)
		::flixel::FlxSprite tmp13 = this->screenFlxSprite;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(504)
		::openfl::_legacy::display::BitmapData tmp14 = tmp13->get_pixels();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(505)
		::flixel::FlxSprite tmp15 = this->screenFlxSprite;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(505)
		::openfl::_legacy::display::BitmapData tmp16 = tmp15->get_pixels();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(505)
		::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_rect();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(506)
		::openfl::_legacy::geom::Point tmp18 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(507)
		::openfl::_legacy::filters::ColorMatrixFilter tmp19 = ::openfl::_legacy::filters::ColorMatrixFilter_obj::__new(Array_obj< Float >::__new().Add(redColorFloat).Add(greenColorFloat).Add(blueColorFloat).Add((int)0).Add((int)0).Add(redColorFloat).Add(greenColorFloat).Add(blueColorFloat).Add((int)0).Add((int)0).Add(redColorFloat).Add(greenColorFloat).Add(blueColorFloat).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(503)
		tmp12->applyFilter(tmp14,tmp17,tmp18,tmp19);
		HX_STACK_LINE(525)
		::flixel::_system::FlxSound tmp20 = this->combatFlxSound;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(525)
		tmp20->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		HX_STACK_LINE(526)
		this->passedObjectEnemy = _passedObjectEnemy;
		HX_STACK_LINE(527)
		this->playerHealthInt = _playerHealthInt;
		HX_STACK_LINE(529)
		this->UpdatePlayerHealthVoid();
		HX_STACK_LINE(531)
		::flixel::ui::FlxBar tmp21 = this->enemyHealthFlxBar;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(531)
		tmp21->set_value((int)100);
		HX_STACK_LINE(532)
		::ObjectEnemy tmp22 = this->passedObjectEnemy;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(532)
		int tmp23 = tmp22->enemyTypeInt;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(532)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(532)
		int tmp25 = (tmp24 * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(532)
		int tmp26 = this->enemyHealthInt = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(532)
		this->enemyHealthMaxInt = tmp26;
		HX_STACK_LINE(533)
		::ObjectEnemy tmp27 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(533)
		::ObjectEnemy tmp28 = this->passedObjectEnemy;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(533)
		int tmp29 = tmp28->enemyTypeInt;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(533)
		tmp27->ChangeEnemyVoid(tmp29);
		HX_STACK_LINE(535)
		this->outcomeEnumOutcome = ::EnumOutcome_obj::NONE;
		HX_STACK_LINE(536)
		::flixel::FlxSprite tmp30 = this->pointerFlxSprite;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(536)
		tmp30->set_visible(false);
		HX_STACK_LINE(537)
		::flixel::text::FlxText tmp31 = this->resultTextObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(537)
		tmp31->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(538)
		::flixel::text::FlxText tmp32 = this->resultTextObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(538)
		tmp32->set_visible(false);
		HX_STACK_LINE(539)
		this->selectIndexInt = (int)0;
		HX_STACK_LINE(540)
		this->waitBool = true;
		HX_STACK_LINE(541)
		this->MovePointerVoid();
		HX_STACK_LINE(543)
		this->set_visible(true);
		HX_STACK_LINE(549)
		Dynamic tmp33 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(550)
		Dynamic tmp34 = this->FinishFadeInVoid_dyn();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp34){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",548,0x5b75b8d2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp33,false);
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp34,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(548)
		Dynamic tmp35 = _Function_1_1::Block(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(552)
		Dynamic tmp36 = this->UpdateAlphaVoid_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(546)
		::flixel::tweens::FlxTween_obj::num((int)0,(int)1,((Float)0.66),tmp35,tmp36);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectHUDCombat_obj,InitCombatVoid,(void))

Void ObjectHUDCombat_obj::MakeChoiceVoid( ){
{
		HX_STACK_FRAME("ObjectHUDCombat","MakeChoiceVoid",0x25f833c5,"ObjectHUDCombat.MakeChoiceVoid","ObjectHUDCombat.hx",563,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(563)
		::ObjectHUDCombat _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(566)
		::flixel::FlxSprite tmp = this->pointerFlxSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		tmp->set_visible(false);
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			int tmp1 = this->selectIndexInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(569)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			switch( (int)(tmp2)){
				case (int)0: {
					HX_STACK_LINE(574)
					::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(574)
					Float tmp4 = tmp3->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(574)
					bool tmp5 = (tmp4 < (int)85);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(574)
					if ((tmp5)){
						HX_STACK_LINE(577)
						::flixel::text::FlxText tmp6 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(577)
						tmp6->set_text(HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
						HX_STACK_LINE(578)
						::ObjectEnemy tmp7 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(578)
						::ObjectEnemy tmp8 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(578)
						Float tmp10 = (tmp9 + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						struct _Function_4_1{
							inline static Dynamic Block( Float &tmp10){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",578,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp10,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(578)
						Dynamic tmp11 = _Function_4_1::Block(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						struct _Function_4_2{
							inline static Dynamic Block( ::ObjectHUDCombat &_g1){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",578,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,::ObjectHUDCombat,_g1)
									int __ArgCount() const { return 1; }
									Void run(::flixel::tweens::FlxTween _){
										HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","ObjectHUDCombat.hx",578,0x5b75b8d2)
										HX_STACK_ARG(_,"_")
										{
											HX_STACK_LINE(579)
											::ObjectEnemy tmp12 = _g1->enemyObjectEnemy;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(579)
											Float tmp13 = _g1->enemyObjectEnemy->x;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(579)
											Float tmp14 = (tmp13 - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
											struct _Function_6_1{
												inline static Dynamic Block( Float &tmp14){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",579,0x5b75b8d2)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp14,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(579)
											Dynamic tmp15 = _Function_6_1::Block(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(579)
											::flixel::tweens::FlxTween_obj::tween(tmp12,tmp15,((Float)0.1),null());
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") ,  Dynamic(new _Function_5_1(_g1)),true);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(578)
						Dynamic tmp12 = _Function_4_2::Block(_g1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(578)
						::flixel::tweens::FlxTween_obj::tween(tmp7,tmp11,((Float)0.1),tmp12);
						HX_STACK_LINE(581)
						::flixel::_system::FlxSound tmp13 = this->hurtFlxSound;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(581)
						tmp13->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
						HX_STACK_LINE(582)
						(this->enemyHealthInt)--;
						HX_STACK_LINE(585)
						::flixel::ui::FlxBar tmp14 = this->enemyHealthFlxBar;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(585)
						int tmp15 = this->enemyHealthMaxInt;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(585)
						int tmp16 = this->enemyHealthInt;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(585)
						Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(585)
						Float tmp18 = (tmp17 * (int)100);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(585)
						tmp14->set_value(tmp18);
					}
					else{
						HX_STACK_LINE(591)
						::flixel::text::FlxText tmp6 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(591)
						tmp6->set_text(HX_HCSTRING("MISS!","\xa5","\x81","\x5a","\x86"));
						HX_STACK_LINE(592)
						::flixel::_system::FlxSound tmp7 = this->missFlxSound;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(592)
						tmp7->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
					}
					HX_STACK_LINE(597)
					::flixel::text::FlxText tmp6 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(597)
					::ObjectEnemy tmp7 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(597)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(597)
					Float tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(597)
					::flixel::text::FlxText tmp10 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(597)
					Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(597)
					Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(597)
					Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(597)
					tmp6->set_x(tmp13);
					HX_STACK_LINE(598)
					::flixel::text::FlxText tmp14 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(598)
					::ObjectEnemy tmp15 = this->enemyObjectEnemy;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(598)
					Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(598)
					Float tmp17 = (tmp16 + (int)4);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(598)
					::flixel::text::FlxText tmp18 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(598)
					Float tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(598)
					Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(598)
					Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(598)
					tmp14->set_y(tmp21);
					HX_STACK_LINE(599)
					::flixel::text::FlxText tmp22 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(599)
					tmp22->set_alpha((int)0);
					HX_STACK_LINE(600)
					::flixel::text::FlxText tmp23 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(600)
					tmp23->set_visible(true);
					HX_STACK_LINE(603)
					int tmp24 = this->enemyHealthInt;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(603)
					bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(603)
					if ((tmp25)){
						HX_STACK_LINE(604)
						this->EnemyAttackVoid();
					}
					HX_STACK_LINE(609)
					::flixel::text::FlxText tmp26 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(609)
					Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(610)
					::flixel::text::FlxText tmp28 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(610)
					Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(610)
					Float tmp30 = (tmp29 - (int)12);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(612)
					Dynamic tmp31 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp31,"tmp31");
					struct _Function_3_1{
						inline static Dynamic Block( Dynamic &tmp31){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",612,0x5b75b8d2)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp31,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(612)
					Dynamic tmp32 = _Function_3_1::Block(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(613)
					Dynamic tmp33 = this->UpdateDamageYVoid_dyn();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(608)
					::flixel::tweens::FlxTween_obj::num(tmp27,tmp30,(int)1,tmp32,tmp33);
					HX_STACK_LINE(620)
					Dynamic tmp34 = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(621)
					Dynamic tmp35 = this->DoneDamageInVoid_dyn();		HX_STACK_VAR(tmp35,"tmp35");
					struct _Function_3_2{
						inline static Dynamic Block( Dynamic &tmp34,Dynamic &tmp35){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",619,0x5b75b8d2)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp34,false);
								__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp35,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(619)
					Dynamic tmp36 = _Function_3_2::Block(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(623)
					Dynamic tmp37 = this->UpdateDamageAlphaVoid_dyn();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(615)
					::flixel::tweens::FlxTween_obj::num((int)0,(int)1,((Float)0.2),tmp36,tmp37);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(629)
					::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(629)
					Float tmp4 = tmp3->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(629)
					bool tmp5 = (tmp4 < (int)50);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(629)
					if ((tmp5)){
						HX_STACK_LINE(632)
						::flixel::_system::FlxSound tmp6 = this->fledFlxSound;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(632)
						tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
						HX_STACK_LINE(633)
						this->outcomeEnumOutcome = ::EnumOutcome_obj::ESCAPE;
						HX_STACK_LINE(634)
						::flixel::text::FlxText tmp7 = this->resultTextObject;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(634)
						tmp7->set_alpha((int)0);
						HX_STACK_LINE(635)
						::flixel::text::FlxText tmp8 = this->resultTextObject;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(635)
						tmp8->set_text(HX_HCSTRING("ESCAPED!","\x1e","\xcd","\x18","\x52"));
						HX_STACK_LINE(636)
						::flixel::text::FlxText tmp9 = this->resultTextObject;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(636)
						tmp9->set_visible(true);
						HX_STACK_LINE(638)
						::flixel::text::FlxText tmp10 = this->resultTextObject;		HX_STACK_VAR(tmp10,"tmp10");
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",639,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(639)
						Dynamic tmp11 = _Function_4_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(642)
						Dynamic tmp12 = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(643)
						Dynamic tmp13 = this->DoneResultInVoid_dyn();		HX_STACK_VAR(tmp13,"tmp13");
						struct _Function_4_2{
							inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",641,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp12,false);
									__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp13,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(641)
						Dynamic tmp14 = _Function_4_2::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(637)
						::flixel::tweens::FlxTween_obj::tween(tmp10,tmp11,((Float)0.66),tmp14);
					}
					else{
						HX_STACK_LINE(652)
						this->EnemyAttackVoid();
						HX_STACK_LINE(654)
						::flixel::text::FlxText tmp6 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(654)
						Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(655)
						::flixel::text::FlxText tmp8 = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(655)
						Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(655)
						Float tmp10 = (tmp9 - (int)12);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(657)
						Dynamic tmp11 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &tmp11){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",657,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp11,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(657)
						Dynamic tmp12 = _Function_4_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(658)
						Dynamic tmp13 = this->UpdateDamageYVoid_dyn();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(653)
						::flixel::tweens::FlxTween_obj::num(tmp7,tmp10,(int)1,tmp12,tmp13);
						HX_STACK_LINE(665)
						Dynamic tmp14 = ::flixel::tweens::FlxEase_obj::circInOut_dyn();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(666)
						Dynamic tmp15 = this->DoneDamageInVoid_dyn();		HX_STACK_VAR(tmp15,"tmp15");
						struct _Function_4_2{
							inline static Dynamic Block( Dynamic &tmp15,Dynamic &tmp14){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectHUDCombat.hx",664,0x5b75b8d2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp14,false);
									__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp15,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(664)
						Dynamic tmp16 = _Function_4_2::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(668)
						Dynamic tmp17 = this->UpdateDamageAlphaVoid_dyn();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(660)
						::flixel::tweens::FlxTween_obj::num((int)0,(int)1,((Float)0.2),tmp16,tmp17);
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(676)
		this->waitBool = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectHUDCombat_obj,MakeChoiceVoid,(void))

Void ObjectHUDCombat_obj::MovePointerVoid( ){
{
		HX_STACK_FRAME("ObjectHUDCombat","MovePointerVoid",0x8340e7fe,"ObjectHUDCombat.MovePointerVoid","ObjectHUDCombat.hx",686,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(688)
		::flixel::FlxSprite tmp = this->pointerFlxSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(689)
		int tmp1 = this->selectIndexInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(689)
		::flixel::text::FlxText tmp2 = this->choiceFlxTextArray->__get(tmp1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(689)
		Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(690)
		int tmp4 = this->selectIndexInt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(690)
		::flixel::text::FlxText tmp5 = this->choiceFlxTextArray->__get(tmp4).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(690)
		Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(690)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(689)
		Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(689)
		Float tmp9 = (tmp8 - (int)8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(688)
		tmp->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectHUDCombat_obj,MovePointerVoid,(void))

Void ObjectHUDCombat_obj::UpdateAlphaVoid( Float _valueFloat){
{
		HX_STACK_FRAME("ObjectHUDCombat","UpdateAlphaVoid",0xf6722767,"ObjectHUDCombat.UpdateAlphaVoid","ObjectHUDCombat.hx",700,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_valueFloat,"_valueFloat")
		HX_STACK_LINE(700)
		::ObjectHUDCombat _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(702)
		this->alphaFloat = _valueFloat;

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::ObjectHUDCombat,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::FlxSprite _FlxSprite){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectHUDCombat.hx",705,0x5b75b8d2)
			HX_STACK_ARG(_FlxSprite,"_FlxSprite")
			{
				HX_STACK_LINE(706)
				Float tmp = _g->alphaFloat;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(706)
				_FlxSprite->set_alpha(tmp);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(705)
		this->forEach( Dynamic(new _Function_1_1(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,UpdateAlphaVoid,(void))

Void ObjectHUDCombat_obj::UpdateDamageAlphaVoid( Float _valueFloat){
{
		HX_STACK_FRAME("ObjectHUDCombat","UpdateDamageAlphaVoid",0x45234eb8,"ObjectHUDCombat.UpdateDamageAlphaVoid","ObjectHUDCombat.hx",717,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_valueFloat,"_valueFloat")
		HX_STACK_LINE(717)
		::flixel::text::FlxText tmp = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		::flixel::text::FlxText tmp1 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		Float tmp2 = _valueFloat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		Float tmp3 = tmp1->set_alpha(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		tmp->set_alpha(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,UpdateDamageAlphaVoid,(void))

Void ObjectHUDCombat_obj::UpdateDamageYVoid( Float _valueFloat){
{
		HX_STACK_FRAME("ObjectHUDCombat","UpdateDamageYVoid",0x8c8ee653,"ObjectHUDCombat.UpdateDamageYVoid","ObjectHUDCombat.hx",725,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_valueFloat,"_valueFloat")
		HX_STACK_LINE(725)
		::flixel::text::FlxText tmp = this->damageFlxTextArray->__get((int)0).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(725)
		::flixel::text::FlxText tmp1 = this->damageFlxTextArray->__get((int)1).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(725)
		Float tmp2 = _valueFloat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		Float tmp3 = tmp1->set_y(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(725)
		tmp->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectHUDCombat_obj,UpdateDamageYVoid,(void))

Void ObjectHUDCombat_obj::UpdatePlayerHealthVoid( ){
{
		HX_STACK_FRAME("ObjectHUDCombat","UpdatePlayerHealthVoid",0x17d8ebdc,"ObjectHUDCombat.UpdatePlayerHealthVoid","ObjectHUDCombat.hx",733,0x5b75b8d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(735)
		::flixel::text::FlxText tmp = this->playerHealthFlxText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		int tmp1 = this->playerHealthInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		::String tmp2 = (tmp1 + HX_HCSTRING("/3","\x24","\x29","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(735)
		tmp->set_text(tmp2);
		HX_STACK_LINE(736)
		::flixel::text::FlxText tmp3 = this->playerHealthFlxText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(736)
		::ObjectPlayer tmp4 = this->playerObjectPlayer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(736)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(736)
		Float tmp6 = (tmp5 + (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(736)
		::flixel::text::FlxText tmp7 = this->playerHealthFlxText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(736)
		Float tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(736)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(736)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(736)
		tmp3->set_x(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectHUDCombat_obj,UpdatePlayerHealthVoid,(void))


ObjectHUDCombat_obj::ObjectHUDCombat_obj()
{
}

void ObjectHUDCombat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectHUDCombat);
	HX_MARK_MEMBER_NAME(outcomeEnumOutcome,"outcomeEnumOutcome");
	HX_MARK_MEMBER_NAME(passedObjectEnemy,"passedObjectEnemy");
	HX_MARK_MEMBER_NAME(playerHealthInt,"playerHealthInt");
	HX_MARK_MEMBER_NAME(backFlxSprite,"backFlxSprite");
	HX_MARK_MEMBER_NAME(enemyObjectEnemy,"enemyObjectEnemy");
	HX_MARK_MEMBER_NAME(playerObjectPlayer,"playerObjectPlayer");
	HX_MARK_MEMBER_NAME(enemyHealthFlxBar,"enemyHealthFlxBar");
	HX_MARK_MEMBER_NAME(enemyHealthInt,"enemyHealthInt");
	HX_MARK_MEMBER_NAME(enemyHealthMaxInt,"enemyHealthMaxInt");
	HX_MARK_MEMBER_NAME(playerHealthFlxText,"playerHealthFlxText");
	HX_MARK_MEMBER_NAME(damageFlxTextArray,"damageFlxTextArray");
	HX_MARK_MEMBER_NAME(alphaFloat,"alphaFloat");
	HX_MARK_MEMBER_NAME(choiceFlxTextArray,"choiceFlxTextArray");
	HX_MARK_MEMBER_NAME(combatFlxSound,"combatFlxSound");
	HX_MARK_MEMBER_NAME(fledFlxSound,"fledFlxSound");
	HX_MARK_MEMBER_NAME(hurtFlxSound,"hurtFlxSound");
	HX_MARK_MEMBER_NAME(loseFlxSound,"loseFlxSound");
	HX_MARK_MEMBER_NAME(missFlxSound,"missFlxSound");
	HX_MARK_MEMBER_NAME(pointerFlxSprite,"pointerFlxSprite");
	HX_MARK_MEMBER_NAME(resultTextObject,"resultTextObject");
	HX_MARK_MEMBER_NAME(screenFlxSprite,"screenFlxSprite");
	HX_MARK_MEMBER_NAME(selectIndexInt,"selectIndexInt");
	HX_MARK_MEMBER_NAME(selectFlxSound,"selectFlxSound");
	HX_MARK_MEMBER_NAME(waitBool,"waitBool");
	HX_MARK_MEMBER_NAME(winFlxSound,"winFlxSound");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectHUDCombat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outcomeEnumOutcome,"outcomeEnumOutcome");
	HX_VISIT_MEMBER_NAME(passedObjectEnemy,"passedObjectEnemy");
	HX_VISIT_MEMBER_NAME(playerHealthInt,"playerHealthInt");
	HX_VISIT_MEMBER_NAME(backFlxSprite,"backFlxSprite");
	HX_VISIT_MEMBER_NAME(enemyObjectEnemy,"enemyObjectEnemy");
	HX_VISIT_MEMBER_NAME(playerObjectPlayer,"playerObjectPlayer");
	HX_VISIT_MEMBER_NAME(enemyHealthFlxBar,"enemyHealthFlxBar");
	HX_VISIT_MEMBER_NAME(enemyHealthInt,"enemyHealthInt");
	HX_VISIT_MEMBER_NAME(enemyHealthMaxInt,"enemyHealthMaxInt");
	HX_VISIT_MEMBER_NAME(playerHealthFlxText,"playerHealthFlxText");
	HX_VISIT_MEMBER_NAME(damageFlxTextArray,"damageFlxTextArray");
	HX_VISIT_MEMBER_NAME(alphaFloat,"alphaFloat");
	HX_VISIT_MEMBER_NAME(choiceFlxTextArray,"choiceFlxTextArray");
	HX_VISIT_MEMBER_NAME(combatFlxSound,"combatFlxSound");
	HX_VISIT_MEMBER_NAME(fledFlxSound,"fledFlxSound");
	HX_VISIT_MEMBER_NAME(hurtFlxSound,"hurtFlxSound");
	HX_VISIT_MEMBER_NAME(loseFlxSound,"loseFlxSound");
	HX_VISIT_MEMBER_NAME(missFlxSound,"missFlxSound");
	HX_VISIT_MEMBER_NAME(pointerFlxSprite,"pointerFlxSprite");
	HX_VISIT_MEMBER_NAME(resultTextObject,"resultTextObject");
	HX_VISIT_MEMBER_NAME(screenFlxSprite,"screenFlxSprite");
	HX_VISIT_MEMBER_NAME(selectIndexInt,"selectIndexInt");
	HX_VISIT_MEMBER_NAME(selectFlxSound,"selectFlxSound");
	HX_VISIT_MEMBER_NAME(waitBool,"waitBool");
	HX_VISIT_MEMBER_NAME(winFlxSound,"winFlxSound");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectHUDCombat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitBool") ) { return waitBool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaFloat") ) { return alphaFloat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"winFlxSound") ) { return winFlxSound; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fledFlxSound") ) { return fledFlxSound; }
		if (HX_FIELD_EQ(inName,"hurtFlxSound") ) { return hurtFlxSound; }
		if (HX_FIELD_EQ(inName,"loseFlxSound") ) { return loseFlxSound; }
		if (HX_FIELD_EQ(inName,"missFlxSound") ) { return missFlxSound; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxSprite") ) { return backFlxSprite; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyHealthInt") ) { return enemyHealthInt; }
		if (HX_FIELD_EQ(inName,"combatFlxSound") ) { return combatFlxSound; }
		if (HX_FIELD_EQ(inName,"selectIndexInt") ) { return selectIndexInt; }
		if (HX_FIELD_EQ(inName,"selectFlxSound") ) { return selectFlxSound; }
		if (HX_FIELD_EQ(inName,"InitCombatVoid") ) { return InitCombatVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"MakeChoiceVoid") ) { return MakeChoiceVoid_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerHealthInt") ) { return playerHealthInt; }
		if (HX_FIELD_EQ(inName,"screenFlxSprite") ) { return screenFlxSprite; }
		if (HX_FIELD_EQ(inName,"EnemyAttackVoid") ) { return EnemyAttackVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"MovePointerVoid") ) { return MovePointerVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateAlphaVoid") ) { return UpdateAlphaVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enemyObjectEnemy") ) { return enemyObjectEnemy; }
		if (HX_FIELD_EQ(inName,"pointerFlxSprite") ) { return pointerFlxSprite; }
		if (HX_FIELD_EQ(inName,"resultTextObject") ) { return resultTextObject; }
		if (HX_FIELD_EQ(inName,"DoneDamageInVoid") ) { return DoneDamageInVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"DoneResultInVoid") ) { return DoneResultInVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"FinishFadeInVoid") ) { return FinishFadeInVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"passedObjectEnemy") ) { return passedObjectEnemy; }
		if (HX_FIELD_EQ(inName,"enemyHealthFlxBar") ) { return enemyHealthFlxBar; }
		if (HX_FIELD_EQ(inName,"enemyHealthMaxInt") ) { return enemyHealthMaxInt; }
		if (HX_FIELD_EQ(inName,"DoneDamageOutVoid") ) { return DoneDamageOutVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"FinishFadeOutVoid") ) { return FinishFadeOutVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDamageYVoid") ) { return UpdateDamageYVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"outcomeEnumOutcome") ) { return outcomeEnumOutcome; }
		if (HX_FIELD_EQ(inName,"playerObjectPlayer") ) { return playerObjectPlayer; }
		if (HX_FIELD_EQ(inName,"damageFlxTextArray") ) { return damageFlxTextArray; }
		if (HX_FIELD_EQ(inName,"choiceFlxTextArray") ) { return choiceFlxTextArray; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"playerHealthFlxText") ) { return playerHealthFlxText; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UpdateDamageAlphaVoid") ) { return UpdateDamageAlphaVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"UpdatePlayerHealthVoid") ) { return UpdatePlayerHealthVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectHUDCombat_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"waitBool") ) { waitBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaFloat") ) { alphaFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"winFlxSound") ) { winFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fledFlxSound") ) { fledFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hurtFlxSound") ) { hurtFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loseFlxSound") ) { loseFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missFlxSound") ) { missFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backFlxSprite") ) { backFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyHealthInt") ) { enemyHealthInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"combatFlxSound") ) { combatFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectIndexInt") ) { selectIndexInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectFlxSound") ) { selectFlxSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerHealthInt") ) { playerHealthInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenFlxSprite") ) { screenFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enemyObjectEnemy") ) { enemyObjectEnemy=inValue.Cast< ::ObjectEnemy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointerFlxSprite") ) { pointerFlxSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resultTextObject") ) { resultTextObject=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"passedObjectEnemy") ) { passedObjectEnemy=inValue.Cast< ::ObjectEnemy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyHealthFlxBar") ) { enemyHealthFlxBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyHealthMaxInt") ) { enemyHealthMaxInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"outcomeEnumOutcome") ) { outcomeEnumOutcome=inValue.Cast< ::EnumOutcome >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerObjectPlayer") ) { playerObjectPlayer=inValue.Cast< ::ObjectPlayer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"damageFlxTextArray") ) { damageFlxTextArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"choiceFlxTextArray") ) { choiceFlxTextArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"playerHealthFlxText") ) { playerHealthFlxText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectHUDCombat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outcomeEnumOutcome","\x1f","\xac","\x6a","\x86"));
	outFields->push(HX_HCSTRING("passedObjectEnemy","\x79","\xc9","\x65","\x1c"));
	outFields->push(HX_HCSTRING("playerHealthInt","\x12","\xe6","\xf3","\x2d"));
	outFields->push(HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17"));
	outFields->push(HX_HCSTRING("enemyObjectEnemy","\xa1","\xc9","\xcd","\xf2"));
	outFields->push(HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6"));
	outFields->push(HX_HCSTRING("enemyHealthFlxBar","\xa5","\x1c","\xf2","\x5e"));
	outFields->push(HX_HCSTRING("enemyHealthInt","\x4b","\x2a","\xef","\x5d"));
	outFields->push(HX_HCSTRING("enemyHealthMaxInt","\xcf","\x9c","\x0e","\xd6"));
	outFields->push(HX_HCSTRING("playerHealthFlxText","\xe2","\x84","\x0b","\x66"));
	outFields->push(HX_HCSTRING("damageFlxTextArray","\xe9","\x41","\x58","\xc4"));
	outFields->push(HX_HCSTRING("alphaFloat","\x5e","\x19","\x3c","\x23"));
	outFields->push(HX_HCSTRING("choiceFlxTextArray","\xdb","\x13","\x27","\x72"));
	outFields->push(HX_HCSTRING("combatFlxSound","\x51","\xfb","\x65","\x8a"));
	outFields->push(HX_HCSTRING("fledFlxSound","\x42","\xd3","\x6f","\x11"));
	outFields->push(HX_HCSTRING("hurtFlxSound","\x2c","\x1a","\x9f","\x0f"));
	outFields->push(HX_HCSTRING("loseFlxSound","\xf2","\x9d","\x8b","\x75"));
	outFields->push(HX_HCSTRING("missFlxSound","\x19","\x46","\x48","\x3b"));
	outFields->push(HX_HCSTRING("pointerFlxSprite","\x9a","\x95","\x25","\x19"));
	outFields->push(HX_HCSTRING("resultTextObject","\x89","\x02","\xfa","\x33"));
	outFields->push(HX_HCSTRING("screenFlxSprite","\x0b","\xcd","\x92","\xf3"));
	outFields->push(HX_HCSTRING("selectIndexInt","\x19","\x14","\xce","\x1f"));
	outFields->push(HX_HCSTRING("selectFlxSound","\x19","\x0e","\x27","\xbd"));
	outFields->push(HX_HCSTRING("waitBool","\x3f","\xe9","\xfd","\x49"));
	outFields->push(HX_HCSTRING("winFlxSound","\x39","\xbb","\x50","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EnumOutcome*/ ,(int)offsetof(ObjectHUDCombat_obj,outcomeEnumOutcome),HX_HCSTRING("outcomeEnumOutcome","\x1f","\xac","\x6a","\x86")},
	{hx::fsObject /*::ObjectEnemy*/ ,(int)offsetof(ObjectHUDCombat_obj,passedObjectEnemy),HX_HCSTRING("passedObjectEnemy","\x79","\xc9","\x65","\x1c")},
	{hx::fsInt,(int)offsetof(ObjectHUDCombat_obj,playerHealthInt),HX_HCSTRING("playerHealthInt","\x12","\xe6","\xf3","\x2d")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUDCombat_obj,backFlxSprite),HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17")},
	{hx::fsObject /*::ObjectEnemy*/ ,(int)offsetof(ObjectHUDCombat_obj,enemyObjectEnemy),HX_HCSTRING("enemyObjectEnemy","\xa1","\xc9","\xcd","\xf2")},
	{hx::fsObject /*::ObjectPlayer*/ ,(int)offsetof(ObjectHUDCombat_obj,playerObjectPlayer),HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(ObjectHUDCombat_obj,enemyHealthFlxBar),HX_HCSTRING("enemyHealthFlxBar","\xa5","\x1c","\xf2","\x5e")},
	{hx::fsInt,(int)offsetof(ObjectHUDCombat_obj,enemyHealthInt),HX_HCSTRING("enemyHealthInt","\x4b","\x2a","\xef","\x5d")},
	{hx::fsInt,(int)offsetof(ObjectHUDCombat_obj,enemyHealthMaxInt),HX_HCSTRING("enemyHealthMaxInt","\xcf","\x9c","\x0e","\xd6")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(ObjectHUDCombat_obj,playerHealthFlxText),HX_HCSTRING("playerHealthFlxText","\xe2","\x84","\x0b","\x66")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectHUDCombat_obj,damageFlxTextArray),HX_HCSTRING("damageFlxTextArray","\xe9","\x41","\x58","\xc4")},
	{hx::fsFloat,(int)offsetof(ObjectHUDCombat_obj,alphaFloat),HX_HCSTRING("alphaFloat","\x5e","\x19","\x3c","\x23")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectHUDCombat_obj,choiceFlxTextArray),HX_HCSTRING("choiceFlxTextArray","\xdb","\x13","\x27","\x72")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,combatFlxSound),HX_HCSTRING("combatFlxSound","\x51","\xfb","\x65","\x8a")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,fledFlxSound),HX_HCSTRING("fledFlxSound","\x42","\xd3","\x6f","\x11")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,hurtFlxSound),HX_HCSTRING("hurtFlxSound","\x2c","\x1a","\x9f","\x0f")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,loseFlxSound),HX_HCSTRING("loseFlxSound","\xf2","\x9d","\x8b","\x75")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,missFlxSound),HX_HCSTRING("missFlxSound","\x19","\x46","\x48","\x3b")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUDCombat_obj,pointerFlxSprite),HX_HCSTRING("pointerFlxSprite","\x9a","\x95","\x25","\x19")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(ObjectHUDCombat_obj,resultTextObject),HX_HCSTRING("resultTextObject","\x89","\x02","\xfa","\x33")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ObjectHUDCombat_obj,screenFlxSprite),HX_HCSTRING("screenFlxSprite","\x0b","\xcd","\x92","\xf3")},
	{hx::fsInt,(int)offsetof(ObjectHUDCombat_obj,selectIndexInt),HX_HCSTRING("selectIndexInt","\x19","\x14","\xce","\x1f")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,selectFlxSound),HX_HCSTRING("selectFlxSound","\x19","\x0e","\x27","\xbd")},
	{hx::fsBool,(int)offsetof(ObjectHUDCombat_obj,waitBool),HX_HCSTRING("waitBool","\x3f","\xe9","\xfd","\x49")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(ObjectHUDCombat_obj,winFlxSound),HX_HCSTRING("winFlxSound","\x39","\xbb","\x50","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outcomeEnumOutcome","\x1f","\xac","\x6a","\x86"),
	HX_HCSTRING("passedObjectEnemy","\x79","\xc9","\x65","\x1c"),
	HX_HCSTRING("playerHealthInt","\x12","\xe6","\xf3","\x2d"),
	HX_HCSTRING("backFlxSprite","\xf0","\xfe","\xe0","\x17"),
	HX_HCSTRING("enemyObjectEnemy","\xa1","\xc9","\xcd","\xf2"),
	HX_HCSTRING("playerObjectPlayer","\x81","\x3c","\xb2","\xe6"),
	HX_HCSTRING("enemyHealthFlxBar","\xa5","\x1c","\xf2","\x5e"),
	HX_HCSTRING("enemyHealthInt","\x4b","\x2a","\xef","\x5d"),
	HX_HCSTRING("enemyHealthMaxInt","\xcf","\x9c","\x0e","\xd6"),
	HX_HCSTRING("playerHealthFlxText","\xe2","\x84","\x0b","\x66"),
	HX_HCSTRING("damageFlxTextArray","\xe9","\x41","\x58","\xc4"),
	HX_HCSTRING("alphaFloat","\x5e","\x19","\x3c","\x23"),
	HX_HCSTRING("choiceFlxTextArray","\xdb","\x13","\x27","\x72"),
	HX_HCSTRING("combatFlxSound","\x51","\xfb","\x65","\x8a"),
	HX_HCSTRING("fledFlxSound","\x42","\xd3","\x6f","\x11"),
	HX_HCSTRING("hurtFlxSound","\x2c","\x1a","\x9f","\x0f"),
	HX_HCSTRING("loseFlxSound","\xf2","\x9d","\x8b","\x75"),
	HX_HCSTRING("missFlxSound","\x19","\x46","\x48","\x3b"),
	HX_HCSTRING("pointerFlxSprite","\x9a","\x95","\x25","\x19"),
	HX_HCSTRING("resultTextObject","\x89","\x02","\xfa","\x33"),
	HX_HCSTRING("screenFlxSprite","\x0b","\xcd","\x92","\xf3"),
	HX_HCSTRING("selectIndexInt","\x19","\x14","\xce","\x1f"),
	HX_HCSTRING("selectFlxSound","\x19","\x0e","\x27","\xbd"),
	HX_HCSTRING("waitBool","\x3f","\xe9","\xfd","\x49"),
	HX_HCSTRING("winFlxSound","\x39","\xbb","\x50","\xa7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("DoneDamageInVoid","\x6a","\xf7","\x2f","\xf0"),
	HX_HCSTRING("DoneDamageOutVoid","\x51","\x78","\x4c","\x35"),
	HX_HCSTRING("DoneResultInVoid","\x58","\xd6","\x7a","\x16"),
	HX_HCSTRING("EnemyAttackVoid","\x84","\x37","\x0b","\xba"),
	HX_HCSTRING("FinishFadeInVoid","\xc8","\xf6","\xf6","\xb8"),
	HX_HCSTRING("FinishFadeOutVoid","\x33","\xeb","\xa4","\x1a"),
	HX_HCSTRING("InitCombatVoid","\xf8","\x70","\x91","\xb4"),
	HX_HCSTRING("MakeChoiceVoid","\x03","\x3b","\x8c","\x25"),
	HX_HCSTRING("MovePointerVoid","\x00","\x37","\x33","\x25"),
	HX_HCSTRING("UpdateAlphaVoid","\x69","\x76","\x64","\x98"),
	HX_HCSTRING("UpdateDamageAlphaVoid","\x3a","\xcb","\x65","\x5b"),
	HX_HCSTRING("UpdateDamageYVoid","\xd5","\x79","\xf4","\x4a"),
	HX_HCSTRING("UpdatePlayerHealthVoid","\x1a","\x61","\xc3","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectHUDCombat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectHUDCombat_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectHUDCombat_obj::__mClass;

void ObjectHUDCombat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectHUDCombat","\x6c","\xb5","\x0f","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectHUDCombat_obj >;
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

