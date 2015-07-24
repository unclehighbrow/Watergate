#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t300;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t301;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t339;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2050(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t300 *, UnityAction_1_t301 *, UnityAction_1_t301 *, const MethodInfo*))ObjectPool_1__ctor_m12628_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m15380(__this, method) (( int32_t (*) (ObjectPool_1_t300 *, const MethodInfo*))ObjectPool_1_get_countAll_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15381(__this, ___value, method) (( void (*) (ObjectPool_1_t300 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12632_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m15382(__this, method) (( int32_t (*) (ObjectPool_1_t300 *, const MethodInfo*))ObjectPool_1_get_countActive_m12634_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15383(__this, method) (( int32_t (*) (ObjectPool_1_t300 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12636_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2051(__this, method) (( List_1_t339 * (*) (ObjectPool_1_t300 *, const MethodInfo*))ObjectPool_1_Get_m12638_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2052(__this, ___element, method) (( void (*) (ObjectPool_1_t300 *, List_1_t339 *, const MethodInfo*))ObjectPool_1_Release_m12640_gshared)(__this, ___element, method)
