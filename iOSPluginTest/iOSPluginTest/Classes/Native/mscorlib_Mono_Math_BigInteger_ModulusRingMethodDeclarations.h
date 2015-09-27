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
struct ModulusRing_t750;
// Mono.Math.BigInteger
struct BigInteger_t751;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4217 (ModulusRing_t750 * __this, BigInteger_t751 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4218 (ModulusRing_t750 * __this, BigInteger_t751 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t751 * ModulusRing_Multiply_m4219 (ModulusRing_t750 * __this, BigInteger_t751 * ___a, BigInteger_t751 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t751 * ModulusRing_Difference_m4220 (ModulusRing_t750 * __this, BigInteger_t751 * ___a, BigInteger_t751 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t751 * ModulusRing_Pow_m4221 (ModulusRing_t750 * __this, BigInteger_t751 * ___a, BigInteger_t751 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t751 * ModulusRing_Pow_m4222 (ModulusRing_t750 * __this, uint32_t ___b, BigInteger_t751 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
