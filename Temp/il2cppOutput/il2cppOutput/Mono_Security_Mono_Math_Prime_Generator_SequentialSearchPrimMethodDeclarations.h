#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1232;
// Mono.Math.BigInteger
struct BigInteger_t1224;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m5211 (SequentialSearchPrimeGeneratorBase_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1224 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m5212 (SequentialSearchPrimeGeneratorBase_t1232 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1224 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m5213 (SequentialSearchPrimeGeneratorBase_t1232 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1224 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m5214 (SequentialSearchPrimeGeneratorBase_t1232 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m5215 (SequentialSearchPrimeGeneratorBase_t1232 * __this, BigInteger_t1224 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
