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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// basicEnemyScript
struct  basicEnemyScript_t10  : public MonoBehaviour_t2
{
	// System.Int32 basicEnemyScript::health
	int32_t ___health_2;
	// UnityEngine.GameObject basicEnemyScript::basicHit
	GameObject_t4 * ___basicHit_3;
	// UnityEngine.Color basicEnemyScript::startingColor
	Color_t8  ___startingColor_4;
};
