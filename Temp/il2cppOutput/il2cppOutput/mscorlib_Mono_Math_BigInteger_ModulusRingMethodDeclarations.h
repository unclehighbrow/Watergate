#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1422;
// Mono.Math.BigInteger
struct BigInteger_t1421;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m7013 (ModulusRing_t1422 * __this, BigInteger_t1421 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m7014 (ModulusRing_t1422 * __this, BigInteger_t1421 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1421 * ModulusRing_Multiply_m7015 (ModulusRing_t1422 * __this, BigInteger_t1421 * ___a, BigInteger_t1421 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1421 * ModulusRing_Difference_m7016 (ModulusRing_t1422 * __this, BigInteger_t1421 * ___a, BigInteger_t1421 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1421 * ModulusRing_Pow_m7017 (ModulusRing_t1422 * __this, BigInteger_t1421 * ___a, BigInteger_t1421 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1421 * ModulusRing_Pow_m7018 (ModulusRing_t1422 * __this, uint32_t ___b, BigInteger_t1421 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
