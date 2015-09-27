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
#include "UnityEngine_UnityEngine_Vector2.h"

// shootRepeating
struct  shootRepeating_t17  : public MonoBehaviour_t2
{
	// UnityEngine.Vector2 shootRepeating::offset
	Vector2_t3  ___offset_2;
	// UnityEngine.Vector2 shootRepeating::direction
	Vector2_t3  ___direction_3;
	// System.Single shootRepeating::speed
	float ___speed_4;
	// System.Single shootRepeating::frequency
	float ___frequency_5;
	// UnityEngine.GameObject shootRepeating::projectile
	GameObject_t4 * ___projectile_6;
};
