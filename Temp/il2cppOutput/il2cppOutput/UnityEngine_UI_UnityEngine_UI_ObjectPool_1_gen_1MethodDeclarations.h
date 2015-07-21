#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t299;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t300;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t338;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2043(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t299 *, UnityAction_1_t300 *, UnityAction_1_t300 *, const MethodInfo*))ObjectPool_1__ctor_m12620_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m15372(__this, method) (( int32_t (*) (ObjectPool_1_t299 *, const MethodInfo*))ObjectPool_1_get_countAll_m12622_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15373(__this, ___value, method) (( void (*) (ObjectPool_1_t299 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12624_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m15374(__this, method) (( int32_t (*) (ObjectPool_1_t299 *, const MethodInfo*))ObjectPool_1_get_countActive_m12626_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15375(__this, method) (( int32_t (*) (ObjectPool_1_t299 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12628_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2044(__this, method) (( List_1_t338 * (*) (ObjectPool_1_t299 *, const MethodInfo*))ObjectPool_1_Get_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2045(__this, ___element, method) (( void (*) (ObjectPool_1_t299 *, List_1_t338 *, const MethodInfo*))ObjectPool_1_Release_m12632_gshared)(__this, ___element, method)
