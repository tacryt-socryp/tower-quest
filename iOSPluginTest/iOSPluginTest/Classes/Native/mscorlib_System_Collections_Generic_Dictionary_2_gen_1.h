#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t410;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1457;
// System.String[]
struct StringU5BU5D_t180;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t147;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1459;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
struct Transform_1_t1499;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct  Dictionary_2_t148  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::table
	Int32U5BU5D_t410* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::linkSlots
	LinkU5BU5D_t1457* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::keySlots
	StringU5BU5D_t180* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::valueSlots
	GUIStyleU5BU5D_t147* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::serialization_info
	SerializationInfo_t236 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t148_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<>f__am$cacheB
	Transform_1_t1499 * ___U3CU3Ef__amU24cacheB_11;
};
