#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerScript
struct PlayerScript_t1;
// System.String
struct String_t;
// UnityEngine.Collision2D
struct Collision2D_t18;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerScript::.ctor()
extern "C" void PlayerScript__ctor_m0 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Start()
extern "C" void PlayerScript_Start_m1 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Update()
extern "C" void PlayerScript_Update_m2 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Move()
extern "C" void PlayerScript_Move_m3 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Attack()
extern "C" void PlayerScript_Attack_m4 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::setDirection(System.String)
extern "C" void PlayerScript_setDirection_m5 (PlayerScript_t1 * __this, String_t* ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::setAttacking(System.String)
extern "C" void PlayerScript_setAttacking_m6 (PlayerScript_t1 * __this, String_t* ___attackType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::updateSprite()
extern "C" void PlayerScript_updateSprite_m7 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void PlayerScript_OnCollisionEnter2D_m8 (PlayerScript_t1 * __this, Collision2D_t18 * ___coll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::MoveBack()
extern "C" void PlayerScript_MoveBack_m9 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Die()
extern "C" void PlayerScript_Die_m10 (PlayerScript_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
