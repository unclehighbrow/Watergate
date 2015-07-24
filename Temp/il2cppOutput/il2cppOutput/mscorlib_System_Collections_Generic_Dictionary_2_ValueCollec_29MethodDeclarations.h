#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
struct Enumerator_t2964;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2956;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18693_gshared (Enumerator_t2964 * __this, Dictionary_2_t2956 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m18693(__this, ___host, method) (( void (*) (Enumerator_t2964 *, Dictionary_2_t2956 *, const MethodInfo*))Enumerator__ctor_m18693_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18694_gshared (Enumerator_t2964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18694(__this, method) (( Object_t * (*) (Enumerator_t2964 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m18695_gshared (Enumerator_t2964 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18695(__this, method) (( void (*) (Enumerator_t2964 *, const MethodInfo*))Enumerator_Dispose_m18695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18696_gshared (Enumerator_t2964 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18696(__this, method) (( bool (*) (Enumerator_t2964 *, const MethodInfo*))Enumerator_MoveNext_m18696_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m18697_gshared (Enumerator_t2964 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18697(__this, method) (( uint8_t (*) (Enumerator_t2964 *, const MethodInfo*))Enumerator_get_Current_m18697_gshared)(__this, method)
