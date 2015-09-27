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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t853;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t658;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t854;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t750;
// System.Security.Cryptography.Oid
struct Oid_t855;
// System.Byte[]
struct ByteU5BU5D_t601;
// System.Security.Cryptography.DSA
struct DSA_t659;
// System.Security.Cryptography.RSA
struct RSA_t652;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4375 (PublicKey_t853 * __this, X509Certificate_t658 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t854 * PublicKey_get_EncodedKeyValue_m4376 (PublicKey_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t854 * PublicKey_get_EncodedParameters_m4377 (PublicKey_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t750 * PublicKey_get_Key_m4378 (PublicKey_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t855 * PublicKey_get_Oid_m4379 (PublicKey_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t601* PublicKey_GetUnsignedBigInteger_m4380 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t659 * PublicKey_DecodeDSA_m4381 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___rawPublicKey, ByteU5BU5D_t601* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t652 * PublicKey_DecodeRSA_m4382 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
