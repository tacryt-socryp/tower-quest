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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1161;
// System.Security.Cryptography.Rijndael
struct Rijndael_t677;
// System.Byte[]
struct ByteU5BU5D_t368;
// System.UInt32[]
struct UInt32U5BU5D_t534;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m6901 (RijndaelTransform_t1161 * __this, Rijndael_t677 * ___algo, bool ___encryption, ByteU5BU5D_t368* ___key, ByteU5BU5D_t368* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m6902 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m6903 (RijndaelTransform_t1161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m6904 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___input, ByteU5BU5D_t368* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m6905 (RijndaelTransform_t1161 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m6906 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m6907 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m6908 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m6909 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m6910 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m6911 (RijndaelTransform_t1161 * __this, ByteU5BU5D_t368* ___indata, ByteU5BU5D_t368* ___outdata, UInt32U5BU5D_t534* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
