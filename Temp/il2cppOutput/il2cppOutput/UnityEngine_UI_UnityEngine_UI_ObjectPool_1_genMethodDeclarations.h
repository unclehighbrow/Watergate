#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t145;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t147;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t327;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1590(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t145 *, UnityAction_1_t147 *, UnityAction_1_t147 *, const MethodInfo*))ObjectPool_1__ctor_m12620_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m12621(__this, method) (( int32_t (*) (ObjectPool_1_t145 *, const MethodInfo*))ObjectPool_1_get_countAll_m12622_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12623(__this, ___value, method) (( void (*) (ObjectPool_1_t145 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12624_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m12625(__this, method) (( int32_t (*) (ObjectPool_1_t145 *, const MethodInfo*))ObjectPool_1_get_countActive_m12626_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12627(__this, method) (( int32_t (*) (ObjectPool_1_t145 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12628_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m12629(__this, method) (( List_1_t327 * (*) (ObjectPool_1_t145 *, const MethodInfo*))ObjectPool_1_Get_m12630_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m12631(__this, ___element, method) (( void (*) (ObjectPool_1_t145 *, List_1_t327 *, const MethodInfo*))ObjectPool_1_Release_m12632_gshared)(__this, ___element, method)
