#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t194;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t198;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1717(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t194 *, UnityAction_1_t198 *, UnityAction_1_t198 *, const MethodInfo*))ObjectPool_1__ctor_m12628_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m14207(__this, method) (( int32_t (*) (ObjectPool_1_t194 *, const MethodInfo*))ObjectPool_1_get_countAll_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14208(__this, ___value, method) (( void (*) (ObjectPool_1_t194 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12632_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m14209(__this, method) (( int32_t (*) (ObjectPool_1_t194 *, const MethodInfo*))ObjectPool_1_get_countActive_m12634_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14210(__this, method) (( int32_t (*) (ObjectPool_1_t194 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12636_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m1724(__this, method) (( List_1_t234 * (*) (ObjectPool_1_t194 *, const MethodInfo*))ObjectPool_1_Get_m12638_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m1729(__this, ___element, method) (( void (*) (ObjectPool_1_t194 *, List_1_t234 *, const MethodInfo*))ObjectPool_1_Release_m12640_gshared)(__this, ___element, method)
