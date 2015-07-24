#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1814;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1177;
// System.Security.Policy.Evidence
struct Evidence_t1561;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1635;

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m9743 (AppDomain_t1814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1814 * AppDomain_getCurDomain_m9744 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1814 * AppDomain_get_CurrentDomain_m9745 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1177 * AppDomain_LoadAssembly_m9746 (AppDomain_t1814 * __this, String_t* ___assemblyRef, Evidence_t1561 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1177 * AppDomain_Load_m9747 (AppDomain_t1814 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1177 * AppDomain_Load_m9748 (AppDomain_t1814 * __this, String_t* ___assemblyString, Evidence_t1561 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1635 * AppDomain_InternalGetContext_m9749 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1635 * AppDomain_InternalGetDefaultContext_m9750 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m9751 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m9752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m9753 (AppDomain_t1814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
