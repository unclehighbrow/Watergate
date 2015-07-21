#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
struct Enumerator_t2963;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2955;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18685_gshared (Enumerator_t2963 * __this, Dictionary_2_t2955 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m18685(__this, ___host, method) (( void (*) (Enumerator_t2963 *, Dictionary_2_t2955 *, const MethodInfo*))Enumerator__ctor_m18685_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18686_gshared (Enumerator_t2963 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18686(__this, method) (( Object_t * (*) (Enumerator_t2963 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m18687_gshared (Enumerator_t2963 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18687(__this, method) (( void (*) (Enumerator_t2963 *, const MethodInfo*))Enumerator_Dispose_m18687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18688_gshared (Enumerator_t2963 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18688(__this, method) (( bool (*) (Enumerator_t2963 *, const MethodInfo*))Enumerator_MoveNext_m18688_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m18689_gshared (Enumerator_t2963 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18689(__this, method) (( uint8_t (*) (Enumerator_t2963 *, const MethodInfo*))Enumerator_get_Current_m18689_gshared)(__this, method)
