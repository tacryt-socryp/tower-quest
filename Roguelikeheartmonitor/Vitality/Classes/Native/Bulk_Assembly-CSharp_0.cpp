#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// PlayerScript
struct PlayerScript_t1;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t5;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t20;
// System.String
struct String_t;
// UnityEngine.Collision2D
struct Collision2D_t18;
// hitBoxScript
struct hitBoxScript_t14;
// basicEnemyScript
struct basicEnemyScript_t10;
// drawHealthScript
struct drawHealthScript_t11;
// dummyEnemyScript
struct dummyEnemyScript_t12;
// followObject
struct followObject_t13;
// projectileScript
struct projectileScript_t15;
// setOrientation
struct setOrientation_t16;
// shootRepeating
struct shootRepeating_t17;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerScript.h"
#include "AssemblyU2DCSharp_PlayerScriptMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Sprite.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D.h"
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "AssemblyU2DCSharp_hitBoxScript.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_basicEnemyScript.h"
#include "AssemblyU2DCSharp_basicEnemyScriptMethodDeclarations.h"
#include "AssemblyU2DCSharp_drawHealthScript.h"
#include "AssemblyU2DCSharp_drawHealthScriptMethodDeclarations.h"
#include "AssemblyU2DCSharp_dummyEnemyScript.h"
#include "AssemblyU2DCSharp_dummyEnemyScriptMethodDeclarations.h"
#include "AssemblyU2DCSharp_followObject.h"
#include "AssemblyU2DCSharp_followObjectMethodDeclarations.h"
#include "AssemblyU2DCSharp_hitBoxScriptMethodDeclarations.h"
#include "AssemblyU2DCSharp_projectileScript.h"
#include "AssemblyU2DCSharp_projectileScriptMethodDeclarations.h"
#include "AssemblyU2DCSharp_setOrientation.h"
#include "AssemblyU2DCSharp_setOrientationMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "AssemblyU2DCSharp_shootRepeating.h"
#include "AssemblyU2DCSharp_shootRepeatingMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m86_gshared (Component_t25 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m86(__this, method) (( Object_t * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m86_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t5_m46(__this, method) (( SpriteRenderer_t5 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m86_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t20_m48(__this, method) (( Rigidbody2D_t20 * (*) (Component_t25 *, const MethodInfo*))Component_GetComponent_TisObject_t_m86_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m87_gshared (GameObject_t4 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m87(__this, method) (( Object_t * (*) (GameObject_t4 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m87_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<hitBoxScript>()
#define GameObject_GetComponent_TishitBoxScript_t14_m67(__this, method) (( hitBoxScript_t14 * (*) (GameObject_t4 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m87_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m88_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m88(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m88_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<PlayerScript>()
#define Object_FindObjectOfType_TisPlayerScript_t1_m72(__this /* static, unused */, method) (( PlayerScript_t1 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m88_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.GameObject::GetComponent<projectileScript>()
#define GameObject_GetComponent_TisprojectileScript_t15_m85(__this, method) (( projectileScript_t15 * (*) (GameObject_t4 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m87_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerScript::.ctor()
extern "C" void PlayerScript__ctor_m0 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (1.0f);
		__this->___damage_3 = 1;
		__this->___maxHealth_4 = ((int32_t)10);
		__this->___currentHealth_5 = ((int32_t)9);
		Vector2_t3  L_0 = Vector2_get_zero_m43(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___dir_6 = L_0;
		Vector2_t3  L_1 = Vector2_get_right_m44(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastDir_7 = L_1;
		__this->___leftRight_8 = 1;
		__this->___animSpeed_17 = (0.5f);
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Start()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern "C" void PlayerScript_Start_m1 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		__this->___spriteRend_12 = L_0;
		SpriteRenderer_t5 * L_1 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		NullCheck(L_1);
		Color_t8  L_2 = SpriteRenderer_get_color_m47(L_1, /*hidden argument*/NULL);
		__this->___startingColor_18 = L_2;
		return;
	}
}
// System.Void PlayerScript::Update()
extern "C" void PlayerScript_Update_m2 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	{
		PlayerScript_Move_m3(__this, /*hidden argument*/NULL);
		PlayerScript_Attack_m4(__this, /*hidden argument*/NULL);
		PlayerScript_updateSprite_m7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Move()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern "C" void PlayerScript_Move_m3 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t19  V_0 = {0};
	Vector3_t19  V_1 = {0};
	{
		Rigidbody2D_t20 * L_0 = Component_GetComponent_TisRigidbody2D_t20_m48(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		Transform_t21 * L_1 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t19  L_2 = Transform_get_position_m50(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___x_1);
		Transform_t21 * L_4 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t19  L_5 = Transform_get_position_m50(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___y_2);
		Vector2_t3  L_7 = {0};
		Vector2__ctor_m51(&L_7, L_3, L_6, /*hidden argument*/NULL);
		Vector2_t3  L_8 = (__this->___dir_6);
		float L_9 = (__this->___speed_2);
		Vector2_t3  L_10 = Vector2_op_Multiply_m52(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector2_t3  L_11 = Vector2_op_Addition_m53(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_MovePosition_m54(L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Attack()
extern "C" void PlayerScript_Attack_m4 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___attackNextFrame_11);
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		GameObject_t4 * L_1 = (__this->___basicHit_9);
		Transform_t21 * L_2 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t19  L_3 = Transform_get_position_m50(L_2, /*hidden argument*/NULL);
		Vector2_t3 * L_4 = &(__this->___lastDir_7);
		float L_5 = (L_4->___x_1);
		Vector2_t3 * L_6 = &(__this->___lastDir_7);
		float L_7 = (L_6->___y_2);
		Vector3_t19  L_8 = {0};
		Vector3__ctor_m55(&L_8, L_5, L_7, (0.0f), /*hidden argument*/NULL);
		float L_9 = (__this->___basicHitDist_10);
		Vector3_t19  L_10 = Vector3_op_Multiply_m56(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t19  L_11 = Vector3_op_Addition_m57(NULL /*static, unused*/, L_3, L_10, /*hidden argument*/NULL);
		Quaternion_t22  L_12 = Quaternion_get_identity_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m59(NULL /*static, unused*/, L_1, L_11, L_12, /*hidden argument*/NULL);
		__this->___attackNextFrame_11 = 0;
	}

IL_005e:
	{
		return;
	}
}
// System.Void PlayerScript::setDirection(System.String)
extern TypeInfo* PlayerScript_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m60_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void PlayerScript_setDirection_m5 (PlayerScript_t1 * __this, String_t* ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerScript_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Dictionary_2_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m60_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t9 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___direction;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0142;
		}
	}
	{
		Dictionary_2_t9 * L_2 = ((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_19;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t9 * L_3 = (Dictionary_2_t9 *)il2cpp_codegen_object_new (Dictionary_2_t9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m60(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m60_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t9 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral0, 0);
		Dictionary_2_t9 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral1, 1);
		Dictionary_2_t9 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral2, 2);
		Dictionary_2_t9 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral3, 3);
		Dictionary_2_t9 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral4, 4);
		Dictionary_2_t9 * L_9 = V_1;
		((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_19 = L_9;
	}

IL_005b:
	{
		Dictionary_2_t9 * L_10 = ((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_19;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_00b2;
		}
		if (L_13 == 2)
		{
			goto IL_00d8;
		}
		if (L_13 == 3)
		{
			goto IL_0105;
		}
		if (L_13 == 4)
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0142;
	}

IL_008c:
	{
		Vector2_t3  L_14 = {0};
		Vector2__ctor_m51(&L_14, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___dir_6 = L_14;
		Vector2_t3  L_15 = (__this->___dir_6);
		__this->___lastDir_7 = L_15;
		goto IL_0142;
	}

IL_00b2:
	{
		Vector2_t3  L_16 = {0};
		Vector2__ctor_m51(&L_16, (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___dir_6 = L_16;
		Vector2_t3  L_17 = (__this->___dir_6);
		__this->___lastDir_7 = L_17;
		goto IL_0142;
	}

IL_00d8:
	{
		Vector2_t3  L_18 = {0};
		Vector2__ctor_m51(&L_18, (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___dir_6 = L_18;
		Vector2_t3  L_19 = (__this->___dir_6);
		__this->___lastDir_7 = L_19;
		__this->___leftRight_8 = (-1);
		goto IL_0142;
	}

IL_0105:
	{
		Vector2_t3  L_20 = {0};
		Vector2__ctor_m51(&L_20, (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___dir_6 = L_20;
		Vector2_t3  L_21 = (__this->___dir_6);
		__this->___lastDir_7 = L_21;
		__this->___leftRight_8 = 1;
		goto IL_0142;
	}

IL_0132:
	{
		Vector2_t3  L_22 = Vector2_get_zero_m43(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___dir_6 = L_22;
		goto IL_0142;
	}

IL_0142:
	{
		return;
	}
}
// System.Void PlayerScript::setAttacking(System.String)
extern TypeInfo* PlayerScript_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m60_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral5;
extern "C" void PlayerScript_setAttacking_m6 (PlayerScript_t1 * __this, String_t* ___attackType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerScript_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Dictionary_2_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m60_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t9 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___attackType;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t9 * L_2 = ((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_20;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t9 * L_3 = (Dictionary_2_t9 *)il2cpp_codegen_object_new (Dictionary_2_t9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m60(L_3, 1, /*hidden argument*/Dictionary_2__ctor_m60_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t9 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral5, 0);
		Dictionary_2_t9 * L_5 = V_1;
		((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_20 = L_5;
	}

IL_002b:
	{
		Dictionary_2_t9 * L_6 = ((PlayerScript_t1_StaticFields*)PlayerScript_t1_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_20;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_6, L_7, (&V_2));
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0054;
	}

IL_0048:
	{
		__this->___attackNextFrame_11 = 1;
		goto IL_0060;
	}

IL_0054:
	{
		__this->___attackNextFrame_11 = 0;
		goto IL_0060;
	}

IL_0060:
	{
		return;
	}
}
// System.Void PlayerScript::updateSprite()
extern TypeInfo* Mathf_t23_il2cpp_TypeInfo_var;
extern "C" void PlayerScript_updateSprite_m7 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___leftRight_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_006a;
		}
	}
	{
		Vector2_t3  L_1 = (__this->___dir_6);
		Vector2_t3  L_2 = Vector2_get_zero_m43(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Vector2_op_Equality_m61(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		SpriteRenderer_t5 * L_4 = (__this->___spriteRend_12);
		Sprite_t6 * L_5 = (__this->___standingLeft_13);
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m62(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_0037:
	{
		SpriteRenderer_t5 * L_6 = (__this->___spriteRend_12);
		SpriteU5BU5D_t7* L_7 = (__this->___walkingLeft_14);
		int32_t L_8 = Time_get_frameCount_m63(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___animSpeed_17);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t23_il2cpp_TypeInfo_var);
		float L_10 = bankers_roundf(((float)((float)(((float)((float)L_8)))*(float)L_9)));
		SpriteU5BU5D_t7* L_11 = (__this->___walkingLeft_14);
		NullCheck(L_11);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)(((int32_t)((int32_t)L_10)))%(int32_t)(((int32_t)((int32_t)(((Array_t *)L_11)->max_length)))))));
		int32_t L_12 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_10)))%(int32_t)(((int32_t)((int32_t)(((Array_t *)L_11)->max_length))))));
		NullCheck(L_6);
		SpriteRenderer_set_sprite_m62(L_6, (*(Sprite_t6 **)(Sprite_t6 **)SZArrayLdElema(L_7, L_12, sizeof(Sprite_t6 *))), /*hidden argument*/NULL);
	}

IL_0065:
	{
		goto IL_00c3;
	}

IL_006a:
	{
		Vector2_t3  L_13 = (__this->___dir_6);
		Vector2_t3  L_14 = Vector2_get_zero_m43(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_15 = Vector2_op_Equality_m61(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0095;
		}
	}
	{
		SpriteRenderer_t5 * L_16 = (__this->___spriteRend_12);
		Sprite_t6 * L_17 = (__this->___standingRight_15);
		NullCheck(L_16);
		SpriteRenderer_set_sprite_m62(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_0095:
	{
		SpriteRenderer_t5 * L_18 = (__this->___spriteRend_12);
		SpriteU5BU5D_t7* L_19 = (__this->___walkingRight_16);
		int32_t L_20 = Time_get_frameCount_m63(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = (__this->___animSpeed_17);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t23_il2cpp_TypeInfo_var);
		float L_22 = bankers_roundf(((float)((float)(((float)((float)L_20)))*(float)L_21)));
		SpriteU5BU5D_t7* L_23 = (__this->___walkingRight_16);
		NullCheck(L_23);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)(((int32_t)((int32_t)L_22)))%(int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length)))))));
		int32_t L_24 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_22)))%(int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length))))));
		NullCheck(L_18);
		SpriteRenderer_set_sprite_m62(L_18, (*(Sprite_t6 **)(Sprite_t6 **)SZArrayLdElema(L_19, L_24, sizeof(Sprite_t6 *))), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		return;
	}
}
// System.Void PlayerScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void PlayerScript_OnCollisionEnter2D_m8 (PlayerScript_t1 * __this, Collision2D_t18 * ___coll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	hitBoxScript_t14 * V_0 = {0};
	Vector3_t19  V_1 = {0};
	Vector3_t19  V_2 = {0};
	Vector2_t3  V_3 = {0};
	Vector3_t19  V_4 = {0};
	Vector3_t19  V_5 = {0};
	Vector3_t19  V_6 = {0};
	Vector3_t19  V_7 = {0};
	{
		Collision2D_t18 * L_0 = ___coll;
		NullCheck(L_0);
		GameObject_t4 * L_1 = Collision2D_get_gameObject_m64(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m65(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m66(NULL /*static, unused*/, L_2, _stringLiteral6, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0132;
		}
	}
	{
		Collision2D_t18 * L_4 = ___coll;
		NullCheck(L_4);
		GameObject_t4 * L_5 = Collision2D_get_gameObject_m64(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		hitBoxScript_t14 * L_6 = GameObject_GetComponent_TishitBoxScript_t14_m67(L_5, /*hidden argument*/GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var);
		V_0 = L_6;
		hitBoxScript_t14 * L_7 = V_0;
		bool L_8 = Object_op_Implicit_m68(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_9 = (__this->___currentHealth_5);
		hitBoxScript_t14 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___damage_2);
		__this->___currentHealth_5 = ((int32_t)((int32_t)L_9-(int32_t)L_11));
		SpriteRenderer_t5 * L_12 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_13 = {0};
		Color__ctor_m69(&L_13, (0.7f), (0.2f), (0.2f), /*hidden argument*/NULL);
		NullCheck(L_12);
		SpriteRenderer_set_color_m70(L_12, L_13, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m71(__this, _stringLiteral7, (0.2f), /*hidden argument*/NULL);
		int32_t L_14 = (__this->___currentHealth_5);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		PlayerScript_Die_m10(__this, /*hidden argument*/NULL);
	}

IL_0085:
	{
		Rigidbody2D_t20 * L_15 = Component_GetComponent_TisRigidbody2D_t20_m48(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		Transform_t21 * L_16 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t19  L_17 = Transform_get_position_m50(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = ((&V_1)->___x_1);
		Transform_t21 * L_19 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t19  L_20 = Transform_get_position_m50(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___y_2);
		Vector2_t3  L_22 = {0};
		Vector2__ctor_m51(&L_22, L_18, L_21, /*hidden argument*/NULL);
		Transform_t21 * L_23 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t19  L_24 = Transform_get_position_m50(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		float L_25 = ((&V_4)->___x_1);
		PlayerScript_t1 * L_26 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_26);
		Transform_t21 * L_27 = Component_get_transform_m49(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t19  L_28 = Transform_get_position_m50(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___x_1);
		Transform_t21 * L_30 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t19  L_31 = Transform_get_position_m50(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___y_2);
		PlayerScript_t1 * L_33 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_33);
		Transform_t21 * L_34 = Component_get_transform_m49(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t19  L_35 = Transform_get_position_m50(L_34, /*hidden argument*/NULL);
		V_7 = L_35;
		float L_36 = ((&V_7)->___y_2);
		Vector2__ctor_m51((&V_3), ((float)((float)L_25-(float)L_29)), ((float)((float)L_32-(float)L_36)), /*hidden argument*/NULL);
		Vector2_t3  L_37 = Vector2_get_normalized_m73((&V_3), /*hidden argument*/NULL);
		Vector2_t3  L_38 = Vector2_op_Multiply_m52(NULL /*static, unused*/, L_37, (0.1f), /*hidden argument*/NULL);
		Vector2_t3  L_39 = Vector2_op_Addition_m53(NULL /*static, unused*/, L_22, L_38, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_MovePosition_m54(L_15, L_39, /*hidden argument*/NULL);
	}

IL_0132:
	{
		return;
	}
}
// System.Void PlayerScript::MoveBack()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern "C" void PlayerScript_MoveBack_m9 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_1 = (__this->___startingColor_18);
		NullCheck(L_0);
		SpriteRenderer_set_color_m70(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Die()
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" void PlayerScript_Die_m10 (PlayerScript_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m74(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void basicEnemyScript::.ctor()
extern "C" void basicEnemyScript__ctor_m11 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	{
		__this->___health_2 = ((int32_t)10);
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void basicEnemyScript::Start()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void basicEnemyScript_Start_m12 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_InvokeRepeating_m75(__this, _stringLiteral9, (3.0f), (2.5f), /*hidden argument*/NULL);
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		NullCheck(L_0);
		Color_t8  L_1 = SpriteRenderer_get_color_m47(L_0, /*hidden argument*/NULL);
		__this->___startingColor_4 = L_1;
		return;
	}
}
// System.Void basicEnemyScript::Update()
extern "C" void basicEnemyScript_Update_m13 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void basicEnemyScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void basicEnemyScript_OnCollisionEnter2D_m14 (basicEnemyScript_t10 * __this, Collision2D_t18 * ___coll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	hitBoxScript_t14 * V_0 = {0};
	Vector3_t19  V_1 = {0};
	Vector3_t19  V_2 = {0};
	Vector2_t3  V_3 = {0};
	Vector3_t19  V_4 = {0};
	Vector3_t19  V_5 = {0};
	Vector3_t19  V_6 = {0};
	Vector3_t19  V_7 = {0};
	{
		Collision2D_t18 * L_0 = ___coll;
		NullCheck(L_0);
		GameObject_t4 * L_1 = Collision2D_get_gameObject_m64(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m65(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m66(NULL /*static, unused*/, L_2, _stringLiteral10, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0132;
		}
	}
	{
		Collision2D_t18 * L_4 = ___coll;
		NullCheck(L_4);
		GameObject_t4 * L_5 = Collision2D_get_gameObject_m64(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		hitBoxScript_t14 * L_6 = GameObject_GetComponent_TishitBoxScript_t14_m67(L_5, /*hidden argument*/GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var);
		V_0 = L_6;
		hitBoxScript_t14 * L_7 = V_0;
		bool L_8 = Object_op_Implicit_m68(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_9 = (__this->___health_2);
		hitBoxScript_t14 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___damage_2);
		__this->___health_2 = ((int32_t)((int32_t)L_9-(int32_t)L_11));
		int32_t L_12 = (__this->___health_2);
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		basicEnemyScript_Die_m17(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		SpriteRenderer_t5 * L_13 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_14 = {0};
		Color__ctor_m69(&L_14, (0.7f), (0.2f), (0.2f), /*hidden argument*/NULL);
		NullCheck(L_13);
		SpriteRenderer_set_color_m70(L_13, L_14, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m71(__this, _stringLiteral7, (0.2f), /*hidden argument*/NULL);
	}

IL_0085:
	{
		Rigidbody2D_t20 * L_15 = Component_GetComponent_TisRigidbody2D_t20_m48(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		Transform_t21 * L_16 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t19  L_17 = Transform_get_position_m50(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = ((&V_1)->___x_1);
		Transform_t21 * L_19 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t19  L_20 = Transform_get_position_m50(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___y_2);
		Vector2_t3  L_22 = {0};
		Vector2__ctor_m51(&L_22, L_18, L_21, /*hidden argument*/NULL);
		Transform_t21 * L_23 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t19  L_24 = Transform_get_position_m50(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		float L_25 = ((&V_4)->___x_1);
		PlayerScript_t1 * L_26 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_26);
		Transform_t21 * L_27 = Component_get_transform_m49(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t19  L_28 = Transform_get_position_m50(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___x_1);
		Transform_t21 * L_30 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t19  L_31 = Transform_get_position_m50(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___y_2);
		PlayerScript_t1 * L_33 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_33);
		Transform_t21 * L_34 = Component_get_transform_m49(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t19  L_35 = Transform_get_position_m50(L_34, /*hidden argument*/NULL);
		V_7 = L_35;
		float L_36 = ((&V_7)->___y_2);
		Vector2__ctor_m51((&V_3), ((float)((float)L_25-(float)L_29)), ((float)((float)L_32-(float)L_36)), /*hidden argument*/NULL);
		Vector2_t3  L_37 = Vector2_get_normalized_m73((&V_3), /*hidden argument*/NULL);
		Vector2_t3  L_38 = Vector2_op_Multiply_m52(NULL /*static, unused*/, L_37, (0.1f), /*hidden argument*/NULL);
		Vector2_t3  L_39 = Vector2_op_Addition_m53(NULL /*static, unused*/, L_22, L_38, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_MovePosition_m54(L_15, L_39, /*hidden argument*/NULL);
	}

IL_0132:
	{
		return;
	}
}
// System.Void basicEnemyScript::Attack()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void basicEnemyScript_Attack_m15 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t4 * L_0 = (__this->___basicHit_3);
		Transform_t21 * L_1 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t19  L_2 = Transform_get_position_m50(L_1, /*hidden argument*/NULL);
		Quaternion_t22  L_3 = Quaternion_get_identity_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m59(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m71(__this, _stringLiteral7, (0.2f), /*hidden argument*/NULL);
		SpriteRenderer_t5 * L_4 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_5 = {0};
		Color__ctor_m69(&L_5, (0.6f), (0.6f), (0.99f), /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_m70(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void basicEnemyScript::MoveBack()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern "C" void basicEnemyScript_MoveBack_m16 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_1 = (__this->___startingColor_4);
		NullCheck(L_0);
		SpriteRenderer_set_color_m70(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void basicEnemyScript::Die()
extern "C" void basicEnemyScript_Die_m17 (basicEnemyScript_t10 * __this, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void drawHealthScript::.ctor()
extern "C" void drawHealthScript__ctor_m18 (drawHealthScript_t11 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void drawHealthScript::Start()
extern "C" void drawHealthScript_Start_m19 (drawHealthScript_t11 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void drawHealthScript::Update()
extern "C" void drawHealthScript_Update_m20 (drawHealthScript_t11 * __this, const MethodInfo* method)
{
	{
		Vector3_t19  L_0 = Vector3_get_zero_m78(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t19  L_1 = {0};
		Vector3__ctor_m55(&L_1, (100.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		Color_t8  L_2 = Color_get_green_m79(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m80(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void dummyEnemyScript::.ctor()
extern "C" void dummyEnemyScript__ctor_m21 (dummyEnemyScript_t12 * __this, const MethodInfo* method)
{
	{
		__this->___health_3 = ((int32_t)10);
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void dummyEnemyScript::Start()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern "C" void dummyEnemyScript_Start_m22 (dummyEnemyScript_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		NullCheck(L_0);
		Color_t8  L_1 = SpriteRenderer_get_color_m47(L_0, /*hidden argument*/NULL);
		__this->___startingColor_2 = L_1;
		return;
	}
}
// System.Void dummyEnemyScript::Update()
extern "C" void dummyEnemyScript_Update_m23 (dummyEnemyScript_t12 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void dummyEnemyScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void dummyEnemyScript_OnCollisionEnter2D_m24 (dummyEnemyScript_t12 * __this, Collision2D_t18 * ___coll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	hitBoxScript_t14 * V_0 = {0};
	Vector3_t19  V_1 = {0};
	Vector3_t19  V_2 = {0};
	Vector2_t3  V_3 = {0};
	Vector3_t19  V_4 = {0};
	Vector3_t19  V_5 = {0};
	Vector3_t19  V_6 = {0};
	Vector3_t19  V_7 = {0};
	{
		Collision2D_t18 * L_0 = ___coll;
		NullCheck(L_0);
		GameObject_t4 * L_1 = Collision2D_get_gameObject_m64(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m65(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m66(NULL /*static, unused*/, L_2, _stringLiteral10, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0132;
		}
	}
	{
		Collision2D_t18 * L_4 = ___coll;
		NullCheck(L_4);
		GameObject_t4 * L_5 = Collision2D_get_gameObject_m64(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		hitBoxScript_t14 * L_6 = GameObject_GetComponent_TishitBoxScript_t14_m67(L_5, /*hidden argument*/GameObject_GetComponent_TishitBoxScript_t14_m67_MethodInfo_var);
		V_0 = L_6;
		hitBoxScript_t14 * L_7 = V_0;
		bool L_8 = Object_op_Implicit_m68(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_9 = (__this->___health_3);
		hitBoxScript_t14 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___damage_2);
		__this->___health_3 = ((int32_t)((int32_t)L_9-(int32_t)L_11));
		SpriteRenderer_t5 * L_12 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_13 = {0};
		Color__ctor_m69(&L_13, (0.7f), (0.2f), (0.2f), /*hidden argument*/NULL);
		NullCheck(L_12);
		SpriteRenderer_set_color_m70(L_12, L_13, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m71(__this, _stringLiteral7, (0.2f), /*hidden argument*/NULL);
		int32_t L_14 = (__this->___health_3);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		dummyEnemyScript_Die_m26(__this, /*hidden argument*/NULL);
	}

IL_0085:
	{
		Rigidbody2D_t20 * L_15 = Component_GetComponent_TisRigidbody2D_t20_m48(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		Transform_t21 * L_16 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t19  L_17 = Transform_get_position_m50(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = ((&V_1)->___x_1);
		Transform_t21 * L_19 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t19  L_20 = Transform_get_position_m50(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___y_2);
		Vector2_t3  L_22 = {0};
		Vector2__ctor_m51(&L_22, L_18, L_21, /*hidden argument*/NULL);
		Transform_t21 * L_23 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t19  L_24 = Transform_get_position_m50(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		float L_25 = ((&V_4)->___x_1);
		PlayerScript_t1 * L_26 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_26);
		Transform_t21 * L_27 = Component_get_transform_m49(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t19  L_28 = Transform_get_position_m50(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = ((&V_5)->___x_1);
		Transform_t21 * L_30 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t19  L_31 = Transform_get_position_m50(L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = ((&V_6)->___y_2);
		PlayerScript_t1 * L_33 = Object_FindObjectOfType_TisPlayerScript_t1_m72(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPlayerScript_t1_m72_MethodInfo_var);
		NullCheck(L_33);
		Transform_t21 * L_34 = Component_get_transform_m49(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t19  L_35 = Transform_get_position_m50(L_34, /*hidden argument*/NULL);
		V_7 = L_35;
		float L_36 = ((&V_7)->___y_2);
		Vector2__ctor_m51((&V_3), ((float)((float)L_25-(float)L_29)), ((float)((float)L_32-(float)L_36)), /*hidden argument*/NULL);
		Vector2_t3  L_37 = Vector2_get_normalized_m73((&V_3), /*hidden argument*/NULL);
		Vector2_t3  L_38 = Vector2_op_Multiply_m52(NULL /*static, unused*/, L_37, (0.1f), /*hidden argument*/NULL);
		Vector2_t3  L_39 = Vector2_op_Addition_m53(NULL /*static, unused*/, L_22, L_38, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_MovePosition_m54(L_15, L_39, /*hidden argument*/NULL);
	}

IL_0132:
	{
		return;
	}
}
// System.Void dummyEnemyScript::MoveBack()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var;
extern "C" void dummyEnemyScript_MoveBack_m25 (dummyEnemyScript_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t5 * L_0 = Component_GetComponent_TisSpriteRenderer_t5_m46(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t5_m46_MethodInfo_var);
		Color_t8  L_1 = (__this->___startingColor_2);
		NullCheck(L_0);
		SpriteRenderer_set_color_m70(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void dummyEnemyScript::Die()
extern "C" void dummyEnemyScript_Die_m26 (dummyEnemyScript_t12 * __this, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followObject::.ctor()
extern "C" void followObject__ctor_m27 (followObject_t13 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (0.1f);
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followObject::Start()
extern "C" void followObject_Start_m28 (followObject_t13 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void followObject::Update()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern "C" void followObject_Update_m29 (followObject_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t20 * L_0 = Component_GetComponent_TisRigidbody2D_t20_m48(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		Transform_t21 * L_1 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t19  L_2 = Transform_get_position_m50(L_1, /*hidden argument*/NULL);
		GameObject_t4 * L_3 = (__this->___follow_3);
		NullCheck(L_3);
		Transform_t21 * L_4 = GameObject_get_transform_m81(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t19  L_5 = Transform_get_position_m50(L_4, /*hidden argument*/NULL);
		Transform_t21 * L_6 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t19  L_7 = Transform_get_position_m50(L_6, /*hidden argument*/NULL);
		Vector3_t19  L_8 = Vector3_op_Subtraction_m82(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		float L_9 = (__this->___speed_2);
		Vector3_t19  L_10 = Vector3_op_Multiply_m56(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t19  L_11 = Vector3_op_Addition_m57(NULL /*static, unused*/, L_2, L_10, /*hidden argument*/NULL);
		Vector2_t3  L_12 = Vector2_op_Implicit_m83(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_MovePosition_m54(L_0, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void hitBoxScript::.ctor()
extern "C" void hitBoxScript__ctor_m30 (hitBoxScript_t14 * __this, const MethodInfo* method)
{
	{
		__this->___damage_2 = ((int32_t)10);
		__this->___deathHastCome_3 = 1;
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void hitBoxScript::Start()
extern "C" void hitBoxScript_Start_m31 (hitBoxScript_t14 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void hitBoxScript::Update()
extern "C" void hitBoxScript_Update_m32 (hitBoxScript_t14 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___deathHastCome_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GameObject_t4 * L_1 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_2 = (__this->___deathHastCome_3);
		__this->___deathHastCome_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		return;
	}
}
// System.Void projectileScript::.ctor()
extern "C" void projectileScript__ctor_m33 (projectileScript_t15 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void projectileScript::Start()
extern "C" void projectileScript_Start_m34 (projectileScript_t15 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void projectileScript::Update()
extern "C" void projectileScript_Update_m35 (projectileScript_t15 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void setOrientation::.ctor()
extern "C" void setOrientation__ctor_m36 (setOrientation_t16 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void setOrientation::Start()
extern "C" void setOrientation_Start_m37 (setOrientation_t16 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___o_2);
		Screen_set_orientation_m84(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void setOrientation::Update()
extern "C" void setOrientation_Update_m38 (setOrientation_t16 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void shootRepeating::.ctor()
extern "C" void shootRepeating__ctor_m39 (shootRepeating_t17 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m45(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shootRepeating::Start()
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void shootRepeating_Start_m40 (shootRepeating_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___frequency_5);
		MonoBehaviour_InvokeRepeating_m75(__this, _stringLiteral11, (0.0f), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shootRepeating::Update()
extern "C" void shootRepeating_Update_m41 (shootRepeating_t17 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void shootRepeating::Shoot()
extern TypeInfo* GameObject_t4_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisprojectileScript_t15_m85_MethodInfo_var;
extern "C" void shootRepeating_Shoot_m42 (shootRepeating_t17 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GameObject_GetComponent_TisprojectileScript_t15_m85_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4 * V_0 = {0};
	{
		GameObject_t4 * L_0 = (__this->___projectile_6);
		Transform_t21 * L_1 = Component_get_transform_m49(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t19  L_2 = Transform_get_position_m50(L_1, /*hidden argument*/NULL);
		Vector2_t3 * L_3 = &(__this->___offset_2);
		float L_4 = (L_3->___x_1);
		Vector2_t3 * L_5 = &(__this->___offset_2);
		float L_6 = (L_5->___y_2);
		Vector3_t19  L_7 = {0};
		Vector3__ctor_m55(&L_7, L_4, L_6, (0.0f), /*hidden argument*/NULL);
		Vector3_t19  L_8 = Vector3_op_Addition_m57(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		Quaternion_t22  L_9 = Quaternion_get_identity_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t24 * L_10 = Object_Instantiate_m59(NULL /*static, unused*/, L_0, L_8, L_9, /*hidden argument*/NULL);
		V_0 = ((GameObject_t4 *)IsInstSealed(L_10, GameObject_t4_il2cpp_TypeInfo_var));
		GameObject_t4 * L_11 = V_0;
		NullCheck(L_11);
		projectileScript_t15 * L_12 = GameObject_GetComponent_TisprojectileScript_t15_m85(L_11, /*hidden argument*/GameObject_GetComponent_TisprojectileScript_t15_m85_MethodInfo_var);
		float L_13 = (__this->___speed_4);
		NullCheck(L_12);
		L_12->___speed_3 = L_13;
		GameObject_t4 * L_14 = V_0;
		NullCheck(L_14);
		projectileScript_t15 * L_15 = GameObject_GetComponent_TisprojectileScript_t15_m85(L_14, /*hidden argument*/GameObject_GetComponent_TisprojectileScript_t15_m85_MethodInfo_var);
		Vector2_t3  L_16 = (__this->___direction_3);
		NullCheck(L_15);
		L_15->___direction_2 = L_16;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
