#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t1468;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Collections.IComparer
struct IComparer_t993;

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ReadOnlyArrayListWrapper__ctor_m7445 (ReadOnlyArrayListWrapper_t1468 * __this, ArrayList_t998 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C" String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m7446 (ReadOnlyArrayListWrapper_t1468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C" bool ReadOnlyArrayListWrapper_get_IsReadOnly_m7447 (ReadOnlyArrayListWrapper_t1468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyArrayListWrapper_get_Item_m7448 (ReadOnlyArrayListWrapper_t1468 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyArrayListWrapper_set_Item_m7449 (ReadOnlyArrayListWrapper_t1468 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C" void ReadOnlyArrayListWrapper_Sort_m7450 (ReadOnlyArrayListWrapper_t1468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ReadOnlyArrayListWrapper_Sort_m7451 (ReadOnlyArrayListWrapper_t1468 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
