#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t303;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t304;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t337;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2054(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t303 *, UnityAction_1_t304 *, UnityAction_1_t304 *, const MethodInfo*))ObjectPool_1__ctor_m12628_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m15398(__this, method) (( int32_t (*) (ObjectPool_1_t303 *, const MethodInfo*))ObjectPool_1_get_countAll_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15399(__this, ___value, method) (( void (*) (ObjectPool_1_t303 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12632_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m15400(__this, method) (( int32_t (*) (ObjectPool_1_t303 *, const MethodInfo*))ObjectPool_1_get_countActive_m12634_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15401(__this, method) (( int32_t (*) (ObjectPool_1_t303 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12636_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2055(__this, method) (( List_1_t337 * (*) (ObjectPool_1_t303 *, const MethodInfo*))ObjectPool_1_Get_m12638_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2056(__this, ___element, method) (( void (*) (ObjectPool_1_t303 *, List_1_t337 *, const MethodInfo*))ObjectPool_1_Release_m12640_gshared)(__this, ___element, method)
