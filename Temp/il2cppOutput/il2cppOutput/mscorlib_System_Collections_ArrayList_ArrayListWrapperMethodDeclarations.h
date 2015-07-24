#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1465;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Collections.ICollection
struct ICollection_t873;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.IComparer
struct IComparer_t993;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ArrayListWrapper__ctor_m7381 (ArrayListWrapper_t1465 * __this, ArrayList_t998 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ArrayListWrapper_get_Item_m7382 (ArrayListWrapper_t1465 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ArrayListWrapper_set_Item_m7383 (ArrayListWrapper_t1465 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C" int32_t ArrayListWrapper_get_Count_m7384 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C" bool ArrayListWrapper_get_IsFixedSize_m7385 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C" bool ArrayListWrapper_get_IsReadOnly_m7386 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C" bool ArrayListWrapper_get_IsSynchronized_m7387 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C" Object_t * ArrayListWrapper_get_SyncRoot_m7388 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C" int32_t ArrayListWrapper_Add_m7389 (ArrayListWrapper_t1465 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C" void ArrayListWrapper_Clear_m7390 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C" bool ArrayListWrapper_Contains_m7391 (ArrayListWrapper_t1465 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t ArrayListWrapper_IndexOf_m7392 (ArrayListWrapper_t1465 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7393 (ArrayListWrapper_t1465 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7394 (ArrayListWrapper_t1465 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void ArrayListWrapper_Insert_m7395 (ArrayListWrapper_t1465 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayListWrapper_InsertRange_m7396 (ArrayListWrapper_t1465 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C" void ArrayListWrapper_Remove_m7397 (ArrayListWrapper_t1465 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C" void ArrayListWrapper_RemoveAt_m7398 (ArrayListWrapper_t1465 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C" void ArrayListWrapper_CopyTo_m7399 (ArrayListWrapper_t1465 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7400 (ArrayListWrapper_t1465 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7401 (ArrayListWrapper_t1465 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C" Object_t * ArrayListWrapper_GetEnumerator_m7402 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void ArrayListWrapper_AddRange_m7403 (ArrayListWrapper_t1465 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C" void ArrayListWrapper_Sort_m7404 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ArrayListWrapper_Sort_m7405 (ArrayListWrapper_t1465 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t73* ArrayListWrapper_ToArray_m7406 (ArrayListWrapper_t1465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * ArrayListWrapper_ToArray_m7407 (ArrayListWrapper_t1465 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
