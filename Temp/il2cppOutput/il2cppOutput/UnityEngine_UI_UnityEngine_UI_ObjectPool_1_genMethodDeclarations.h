#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t147;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t149;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t328;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1602(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t147 *, UnityAction_1_t149 *, UnityAction_1_t149 *, const MethodInfo*))ObjectPool_1__ctor_m12628_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m12629(__this, method) (( int32_t (*) (ObjectPool_1_t147 *, const MethodInfo*))ObjectPool_1_get_countAll_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12631(__this, ___value, method) (( void (*) (ObjectPool_1_t147 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12632_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m12633(__this, method) (( int32_t (*) (ObjectPool_1_t147 *, const MethodInfo*))ObjectPool_1_get_countActive_m12634_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12635(__this, method) (( int32_t (*) (ObjectPool_1_t147 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12636_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m12637(__this, method) (( List_1_t328 * (*) (ObjectPool_1_t147 *, const MethodInfo*))ObjectPool_1_Get_m12638_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m12639(__this, ___element, method) (( void (*) (ObjectPool_1_t147 *, List_1_t328 *, const MethodInfo*))ObjectPool_1_Release_m12640_gshared)(__this, ___element, method)
