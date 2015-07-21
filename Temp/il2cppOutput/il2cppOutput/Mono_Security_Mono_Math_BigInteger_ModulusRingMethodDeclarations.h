#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1224;
// Mono.Math.BigInteger
struct BigInteger_t1223;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5132 (ModulusRing_t1224 * __this, BigInteger_t1223 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5133 (ModulusRing_t1224 * __this, BigInteger_t1223 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1223 * ModulusRing_Multiply_m5134 (ModulusRing_t1224 * __this, BigInteger_t1223 * ___a, BigInteger_t1223 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1223 * ModulusRing_Difference_m5135 (ModulusRing_t1224 * __this, BigInteger_t1223 * ___a, BigInteger_t1223 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1223 * ModulusRing_Pow_m5136 (ModulusRing_t1224 * __this, BigInteger_t1223 * ___a, BigInteger_t1223 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1223 * ModulusRing_Pow_m5137 (ModulusRing_t1224 * __this, uint32_t ___b, BigInteger_t1223 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
