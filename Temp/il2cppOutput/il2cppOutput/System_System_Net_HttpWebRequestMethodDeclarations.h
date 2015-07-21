#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1022;
// System.Uri
struct Uri_t622;
// System.Net.ServicePoint
struct ServicePoint_t1021;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4063 (HttpWebRequest_t1022 * __this, Uri_t622 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4064 (HttpWebRequest_t1022 * __this, SerializationInfo_t731 * ___serializationInfo, StreamingContext_t732  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4065 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4066 (HttpWebRequest_t1022 * __this, SerializationInfo_t731 * ___serializationInfo, StreamingContext_t732  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t622 * HttpWebRequest_get_Address_m4067 (HttpWebRequest_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1021 * HttpWebRequest_get_ServicePoint_m4068 (HttpWebRequest_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1021 * HttpWebRequest_GetServicePoint_m4069 (HttpWebRequest_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4070 (HttpWebRequest_t1022 * __this, SerializationInfo_t731 * ___serializationInfo, StreamingContext_t732  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
