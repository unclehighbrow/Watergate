#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1225;
// Mono.Math.BigInteger
struct BigInteger_t1224;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5140 (ModulusRing_t1225 * __this, BigInteger_t1224 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5141 (ModulusRing_t1225 * __this, BigInteger_t1224 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1224 * ModulusRing_Multiply_m5142 (ModulusRing_t1225 * __this, BigInteger_t1224 * ___a, BigInteger_t1224 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1224 * ModulusRing_Difference_m5143 (ModulusRing_t1225 * __this, BigInteger_t1224 * ___a, BigInteger_t1224 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1224 * ModulusRing_Pow_m5144 (ModulusRing_t1225 * __this, BigInteger_t1224 * ___a, BigInteger_t1224 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1224 * ModulusRing_Pow_m5145 (ModulusRing_t1225 * __this, uint32_t ___b, BigInteger_t1224 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
