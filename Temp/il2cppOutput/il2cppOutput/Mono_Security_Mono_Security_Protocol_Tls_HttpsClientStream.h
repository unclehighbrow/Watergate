#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t1023;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1292;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1293;
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t1294  : public SslClientStream_t1278
{
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t1023 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;
};
struct HttpsClientStream_t1294_StaticFields{
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t1292 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t1293 * ___U3CU3Ef__amU24cache3_23;
};
