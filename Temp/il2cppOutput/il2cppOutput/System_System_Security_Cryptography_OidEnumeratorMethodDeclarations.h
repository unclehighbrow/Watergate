﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t944;
// System.Security.Cryptography.OidCollection
struct OidCollection_t929;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m4848 (OidEnumerator_t944 * __this, OidCollection_t929 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m4849 (OidEnumerator_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m4850 (OidEnumerator_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C" void OidEnumerator_Reset_m4851 (OidEnumerator_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
