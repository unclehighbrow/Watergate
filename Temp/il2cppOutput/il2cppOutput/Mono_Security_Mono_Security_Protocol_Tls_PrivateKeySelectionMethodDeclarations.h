#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1293;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1037;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1050;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m5955 (PrivateKeySelectionCallback_t1293 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1037 * PrivateKeySelectionCallback_Invoke_m5956 (PrivateKeySelectionCallback_t1293 * __this, X509Certificate_t1050 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" AsymmetricAlgorithm_t1037 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1293(Il2CppObject* delegate, X509Certificate_t1050 * ___certificate, String_t* ___targetHost);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m5957 (PrivateKeySelectionCallback_t1293 * __this, X509Certificate_t1050 * ___certificate, String_t* ___targetHost, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t1037 * PrivateKeySelectionCallback_EndInvoke_m5958 (PrivateKeySelectionCallback_t1293 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
