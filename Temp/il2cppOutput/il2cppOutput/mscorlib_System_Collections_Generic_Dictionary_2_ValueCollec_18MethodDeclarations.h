#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
struct Enumerator_t2812;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2803;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16811_gshared (Enumerator_t2812 * __this, Dictionary_2_t2803 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m16811(__this, ___host, method) (( void (*) (Enumerator_t2812 *, Dictionary_2_t2803 *, const MethodInfo*))Enumerator__ctor_m16811_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16812_gshared (Enumerator_t2812 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16812(__this, method) (( Object_t * (*) (Enumerator_t2812 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m16813_gshared (Enumerator_t2812 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16813(__this, method) (( void (*) (Enumerator_t2812 *, const MethodInfo*))Enumerator_Dispose_m16813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16814_gshared (Enumerator_t2812 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16814(__this, method) (( bool (*) (Enumerator_t2812 *, const MethodInfo*))Enumerator_MoveNext_m16814_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m16815_gshared (Enumerator_t2812 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16815(__this, method) (( int64_t (*) (Enumerator_t2812 *, const MethodInfo*))Enumerator_get_Current_m16815_gshared)(__this, method)
