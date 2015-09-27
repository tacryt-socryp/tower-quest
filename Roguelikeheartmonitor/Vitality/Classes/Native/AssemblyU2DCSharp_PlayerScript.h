#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t5;
// UnityEngine.Sprite
struct Sprite_t6;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t7;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"

// PlayerScript
struct  PlayerScript_t1  : public MonoBehaviour_t2
{
	// System.Single PlayerScript::speed
	float ___speed_2;
	// System.Int32 PlayerScript::damage
	int32_t ___damage_3;
	// System.Int32 PlayerScript::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 PlayerScript::currentHealth
	int32_t ___currentHealth_5;
	// UnityEngine.Vector2 PlayerScript::dir
	Vector2_t3  ___dir_6;
	// UnityEngine.Vector2 PlayerScript::lastDir
	Vector2_t3  ___lastDir_7;
	// System.Int32 PlayerScript::leftRight
	int32_t ___leftRight_8;
	// UnityEngine.GameObject PlayerScript::basicHit
	GameObject_t4 * ___basicHit_9;
	// System.Single PlayerScript::basicHitDist
	float ___basicHitDist_10;
	// System.Boolean PlayerScript::attackNextFrame
	bool ___attackNextFrame_11;
	// UnityEngine.SpriteRenderer PlayerScript::spriteRend
	SpriteRenderer_t5 * ___spriteRend_12;
	// UnityEngine.Sprite PlayerScript::standingLeft
	Sprite_t6 * ___standingLeft_13;
	// UnityEngine.Sprite[] PlayerScript::walkingLeft
	SpriteU5BU5D_t7* ___walkingLeft_14;
	// UnityEngine.Sprite PlayerScript::standingRight
	Sprite_t6 * ___standingRight_15;
	// UnityEngine.Sprite[] PlayerScript::walkingRight
	SpriteU5BU5D_t7* ___walkingRight_16;
	// System.Single PlayerScript::animSpeed
	float ___animSpeed_17;
	// UnityEngine.Color PlayerScript::startingColor
	Color_t8  ___startingColor_18;
};
struct PlayerScript_t1_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayerScript::<>f__switch$map0
	Dictionary_2_t9 * ___U3CU3Ef__switchU24map0_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayerScript::<>f__switch$map1
	Dictionary_2_t9 * ___U3CU3Ef__switchU24map1_20;
};
