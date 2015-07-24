#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1047;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1046;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1048;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t1067;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void X509ExtensionCollection__ctor_m4324 (X509ExtensionCollection_t1047 * __this, X509Certificate_t1048 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m4325 (X509ExtensionCollection_t1047 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m4326 (X509ExtensionCollection_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C" int32_t X509ExtensionCollection_get_Count_m4327 (X509ExtensionCollection_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C" bool X509ExtensionCollection_get_IsSynchronized_m4328 (X509ExtensionCollection_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C" Object_t * X509ExtensionCollection_get_SyncRoot_m4329 (X509ExtensionCollection_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t1046 * X509ExtensionCollection_get_Item_m4330 (X509ExtensionCollection_t1047 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C" X509ExtensionEnumerator_t1067 * X509ExtensionCollection_GetEnumerator_m4331 (X509ExtensionCollection_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
