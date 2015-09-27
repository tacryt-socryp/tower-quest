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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t624;
// Mono.Math.BigInteger
struct BigInteger_t625;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3148 (ModulusRing_t624 * __this, BigInteger_t625 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3149 (ModulusRing_t624 * __this, BigInteger_t625 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Multiply_m3150 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Difference_m3151 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Pow_m3152 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Pow_m3153 (ModulusRing_t624 * __this, uint32_t ___b, BigInteger_t625 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
