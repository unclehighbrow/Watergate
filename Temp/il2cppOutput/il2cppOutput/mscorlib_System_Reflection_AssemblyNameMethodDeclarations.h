#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1564;
// System.String
struct String_t;
// System.Version
struct Version_t1019;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m8365 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m8366 (AssemblyName_t1564 * __this, SerializationInfo_t732 * ___si, StreamingContext_t733  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m8367 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m8368 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m8369 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t1019 * AssemblyName_get_Version_m8370 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m8371 (AssemblyName_t1564 * __this, Version_t1019 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m8372 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m8373 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t551* AssemblyName_InternalGetPublicKeyToken_m8374 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t551* AssemblyName_ComputePublicKeyToken_m8375 (AssemblyName_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m8376 (AssemblyName_t1564 * __this, ByteU5BU5D_t551* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m8377 (AssemblyName_t1564 * __this, ByteU5BU5D_t551* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m8378 (AssemblyName_t1564 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m8379 (AssemblyName_t1564 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
