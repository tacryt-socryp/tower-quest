﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t368;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1717;
// UnityEngine.UI.IClipper[]
struct IClipperU5BU5D_t1977;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.IClipper>
struct IEqualityComparer_1_t1979;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.IClipper,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1978;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>
struct  Dictionary_2_t353  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::table
	Int32U5BU5D_t368* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::linkSlots
	LinkU5BU5D_t1717* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::keySlots
	IClipperU5BU5D_t1977* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::valueSlots
	Int32U5BU5D_t368* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::serialization_info
	SerializationInfo_t559 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t353_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>::<>f__am$cacheB
	Transform_1_t1978 * ___U3CU3Ef__amU24cacheB_15;
};
