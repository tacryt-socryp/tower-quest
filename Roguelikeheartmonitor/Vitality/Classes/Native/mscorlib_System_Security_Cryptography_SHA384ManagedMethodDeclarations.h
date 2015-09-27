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

// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t1464;
// System.Byte[]
struct ByteU5BU5D_t601;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA384Managed::.ctor()
extern "C" void SHA384Managed__ctor_m8889 (SHA384Managed_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize(System.Boolean)
extern "C" void SHA384Managed_Initialize_m8890 (SHA384Managed_t1464 * __this, bool ___reuse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize()
extern "C" void SHA384Managed_Initialize_m8891 (SHA384Managed_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA384Managed_HashCore_m8892 (SHA384Managed_t1464 * __this, ByteU5BU5D_t601* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA384Managed::HashFinal()
extern "C" ByteU5BU5D_t601* SHA384Managed_HashFinal_m8893 (SHA384Managed_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::update(System.Byte)
extern "C" void SHA384Managed_update_m8894 (SHA384Managed_t1464 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processWord(System.Byte[],System.Int32)
extern "C" void SHA384Managed_processWord_m8895 (SHA384Managed_t1464 * __this, ByteU5BU5D_t601* ___input, int32_t ___inOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA384Managed_unpackWord_m8896 (SHA384Managed_t1464 * __this, uint64_t ___word, ByteU5BU5D_t601* ___output, int32_t ___outOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::adjustByteCounts()
extern "C" void SHA384Managed_adjustByteCounts_m8897 (SHA384Managed_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processLength(System.UInt64,System.UInt64)
extern "C" void SHA384Managed_processLength_m8898 (SHA384Managed_t1464 * __this, uint64_t ___lowW, uint64_t ___hiW, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processBlock()
extern "C" void SHA384Managed_processBlock_m8899 (SHA384Managed_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
