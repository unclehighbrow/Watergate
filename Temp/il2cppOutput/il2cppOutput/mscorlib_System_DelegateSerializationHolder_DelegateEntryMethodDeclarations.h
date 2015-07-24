#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1835;
// System.Delegate
struct Delegate_t361;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m10107 (DelegateEntry_t1835 * __this, Delegate_t361 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t361 * DelegateEntry_DeserializeDelegate_m10108 (DelegateEntry_t1835 * __this, SerializationInfo_t732 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
