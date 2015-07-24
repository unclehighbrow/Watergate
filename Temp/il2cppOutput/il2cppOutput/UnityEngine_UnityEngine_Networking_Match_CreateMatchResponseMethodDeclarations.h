#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t604;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m3118 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m3119 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m3120 (CreateMatchResponse_t604 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m3121 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m3122 (CreateMatchResponse_t604 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m3123 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m3124 (CreateMatchResponse_t604 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m3125 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m3126 (CreateMatchResponse_t604 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m3127 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m3128 (CreateMatchResponse_t604 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m3129 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m3130 (CreateMatchResponse_t604 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern "C" String_t* CreateMatchResponse_ToString_m3131 (CreateMatchResponse_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern "C" void CreateMatchResponse_Parse_m3132 (CreateMatchResponse_t604 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
