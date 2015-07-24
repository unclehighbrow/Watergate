#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t624;
// System.Uri
struct Uri_t623;
// UnityEngine.Coroutine
struct Coroutine_t235;
struct Coroutine_t235_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t717;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t603;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t718;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t605;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t719;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t607;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t608;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t720;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t609;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m3213 (NetworkMatch_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t623 * NetworkMatch_get_baseUri_m3214 (NetworkMatch_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m3215 (NetworkMatch_t624 * __this, Uri_t623 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m3216 (NetworkMatch_t624 * __this, uint64_t ___programAppID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_CreateMatch_m3217 (NetworkMatch_t624 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t717 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_CreateMatch_m3218 (NetworkMatch_t624 * __this, CreateMatchRequest_t603 * ___req, ResponseDelegate_1_t717 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_JoinMatch_m3219 (NetworkMatch_t624 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t718 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_JoinMatch_m3220 (NetworkMatch_t624 * __this, JoinMatchRequest_t605 * ___req, ResponseDelegate_1_t718 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t235 * NetworkMatch_DestroyMatch_m3221 (NetworkMatch_t624 * __this, uint64_t ___netId, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t235 * NetworkMatch_DestroyMatch_m3222 (NetworkMatch_t624 * __this, DestroyMatchRequest_t607 * ___req, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t235 * NetworkMatch_DropConnection_m3223 (NetworkMatch_t624 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t235 * NetworkMatch_DropConnection_m3224 (NetworkMatch_t624 * __this, DropConnectionRequest_t608 * ___req, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_ListMatches_m3225 (NetworkMatch_t624 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t720 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t235 * NetworkMatch_ListMatches_m3226 (NetworkMatch_t624 * __this, ListMatchRequest_t609 * ___req, ResponseDelegate_1_t720 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
