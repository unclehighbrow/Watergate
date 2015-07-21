#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1706;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1703;
// System.Int32[]
struct Int32U5BU5D_t1094;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1696;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m8990 (MultiArrayFixupRecord_t1706 * __this, ObjectRecord_t1703 * ___objectToBeFixed, Int32U5BU5D_t1094* ___indices, ObjectRecord_t1703 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m8991 (MultiArrayFixupRecord_t1706 * __this, ObjectManager_t1696 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
