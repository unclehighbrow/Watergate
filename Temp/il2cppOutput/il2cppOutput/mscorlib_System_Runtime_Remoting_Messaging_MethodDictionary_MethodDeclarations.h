#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t1655;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1649;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern "C" void DictionaryEnumerator__ctor_m8774 (DictionaryEnumerator_t1655 * __this, MethodDictionary_t1649 * ___methodDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m8775 (DictionaryEnumerator_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern "C" bool DictionaryEnumerator_MoveNext_m8776 (DictionaryEnumerator_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t1160  DictionaryEnumerator_get_Entry_m8777 (DictionaryEnumerator_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m8778 (DictionaryEnumerator_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m8779 (DictionaryEnumerator_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
