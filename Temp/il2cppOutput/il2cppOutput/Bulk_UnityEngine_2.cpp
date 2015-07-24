#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m2124 (ExecuteInEditMode_t418 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m3324 (SetupCoroutine_t651 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3325 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t73* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t73*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t73* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1633(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t73* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t788 *, Object_t *, ObjectU5BU5D_t73*, ParameterModifierU5BU5D_t789*, CultureInfo_t757 *, StringU5BU5D_t48* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t788 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t789*)(ParameterModifierU5BU5D_t789*)NULL, (CultureInfo_t757 *)NULL, (StringU5BU5D_t48*)(StringU5BU5D_t48*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3326 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t73* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t73*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t73* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t73* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t788 *, Object_t *, ObjectU5BU5D_t73*, ParameterModifierU5BU5D_t789*, CultureInfo_t757 *, StringU5BU5D_t48* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t788 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t789*)(ParameterModifierU5BU5D_t789*)NULL, (CultureInfo_t757 *)NULL, (StringU5BU5D_t48*)(StringU5BU5D_t48*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m3327 (WritableAttribute_t652 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m3328 (AssemblyIsEditorAssembly_t653 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t664_il2cpp_TypeInfo_var;
extern "C" UserProfile_t664 * GcUserProfileData_ToUserProfile_m3329 (GcUserProfileData_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(930);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t193 * L_3 = (__this->___image_3);
		UserProfile_t664 * L_4 = (UserProfile_t664 *)il2cpp_codegen_object_new (UserProfile_t664_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3348(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m3330 (GcUserProfileData_t654 * __this, UserProfileU5BU5D_t492** ___array, int32_t ___number, const MethodInfo* method)
{
	{
		UserProfileU5BU5D_t492** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t492**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t492**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t492** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t664 * L_5 = GcUserProfileData_ToUserProfile_m3329(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t492**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t492**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t492**)L_3)), L_5);
		*((UserProfile_t664 **)(UserProfile_t664 **)SZArrayLdElema((*((UserProfileU5BU5D_t492**)L_3)), L_4)) = (UserProfile_t664 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral335, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t666_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t666 * GcAchievementDescriptionData_ToAchievementDescription_m3331 (GcAchievementDescriptionData_t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t193 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t193 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t193 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t193 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t666 * L_7 = (AchievementDescription_t666 *)il2cpp_codegen_object_new (AchievementDescription_t666_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m3368(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t665_il2cpp_TypeInfo_var;
extern "C" Achievement_t665 * GcAchievementData_ToAchievement_m3332 (GcAchievementData_t656 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t77  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3633((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t77  L_5 = DateTime_AddSeconds_m3634((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t665 * L_6 = (Achievement_t665 *)il2cpp_codegen_object_new (Achievement_t665_il2cpp_TypeInfo_var);
		Achievement__ctor_m3357(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t656_marshal(const GcAchievementData_t656& unmarshaled, GcAchievementData_t656_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t656_marshal_back(const GcAchievementData_t656_marshaled& marshaled, GcAchievementData_t656& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t656_marshal_cleanup(GcAchievementData_t656_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t667_il2cpp_TypeInfo_var;
extern "C" Score_t667 * GcScoreData_ToScore_m3333 (GcScoreData_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t77  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3633((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t77  L_5 = DateTime_AddSeconds_m3634((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t667 * L_8 = (Score_t667 *)il2cpp_codegen_object_new (Score_t667_il2cpp_TypeInfo_var);
		Score__ctor_m3379(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t657_marshal(const GcScoreData_t657& unmarshaled, GcScoreData_t657_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t657_marshal_back(const GcScoreData_t657_marshaled& marshaled, GcScoreData_t657& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t657_marshal_cleanup(GcScoreData_t657_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"

// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m3334 (Resolution_t658 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m3335 (Resolution_t658 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m3336 (Resolution_t658 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m3337 (Resolution_t658 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m3338 (Resolution_t658 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m3339 (Resolution_t658 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m3340 (Resolution_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral336, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatformMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t492_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m3341 (LocalUser_t493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m3347(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t663*)((UserProfileU5BU5D_t492*)SZArrayNew(UserProfileU5BU5D_t492_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t674_il2cpp_TypeInfo_var;
extern "C" void LocalUser_Authenticate_m3342 (LocalUser_t493 * __this, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t18 * L_1 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_t *, Action_1_t18 * >::Invoke(4 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_t674_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m3343 (LocalUser_t493 * __this, IUserProfileU5BU5D_t663* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t663* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m3344 (LocalUser_t493 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m3345 (LocalUser_t493 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m3346 (LocalUser_t493 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t193_il2cpp_TypeInfo_var;
extern "C" void UserProfile__ctor_m3347 (UserProfile_t664 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(940);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral337;
		__this->___m_ID_1 = (String_t*) &_stringLiteral130;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t193 * L_0 = (Texture2D_t193 *)il2cpp_codegen_object_new (Texture2D_t193_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2387(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m3348 (UserProfile_t664 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t193 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t193 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t676_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m3349 (UserProfile_t664 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		UserState_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1086);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t73* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t676_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m255(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m3350 (UserProfile_t664 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m3351 (UserProfile_t664 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m3352 (UserProfile_t664 * __this, Texture2D_t193 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t193 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m3353 (UserProfile_t664 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m3354 (UserProfile_t664 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m3355 (UserProfile_t664 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m3356 (UserProfile_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3357 (Achievement_t665 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t77  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t77  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m3358 (Achievement_t665 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t77_il2cpp_TypeInfo_var);
		DateTime_t77  L_2 = ((DateTime_t77_StaticFields*)DateTime_t77_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m3359 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		Achievement__ctor_m3358(__this, (String_t*) &_stringLiteral339, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m3360 (Achievement_t665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Double_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t759_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t73* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_18 = L_17;
		DateTime_t77  L_19 = (DateTime_t77 )VirtFuncInvoker0< DateTime_t77  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t77  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t77_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m255(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3361 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3362 (Achievement_t665 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3363 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3364 (Achievement_t665 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3365 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3366 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t77  Achievement_get_lastReportedDate_m3367 (Achievement_t665 * __this, const MethodInfo* method)
{
	{
		DateTime_t77  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3368 (AchievementDescription_t666 * __this, String_t* ___id, String_t* ___title, Texture2D_t193 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t193 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m3369 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t73* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t73* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t73* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral338);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral338;
		ObjectU5BU5D_t73* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m255(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m3370 (AchievementDescription_t666 * __this, Texture2D_t193 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t193 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3371 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3372 (AchievementDescription_t666 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3373 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3374 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3375 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3376 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3377 (AchievementDescription_t666 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score__ctor_m3378 (Score_t667 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t77_il2cpp_TypeInfo_var);
		DateTime_t77  L_2 = DateTime_get_Now_m3516(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m3379(__this, L_0, L_1, (String_t*) &_stringLiteral130, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3379 (Score_t667 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t77  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t77  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t760_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m3380 (Score_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Int64_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral340);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral340;
		ObjectU5BU5D_t73* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t73* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral341);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral341;
		ObjectU5BU5D_t73* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t760_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral342);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral342;
		ObjectU5BU5D_t73* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t73* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral343);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral343;
		ObjectU5BU5D_t73* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t73* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral344);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral344;
		ObjectU5BU5D_t73* L_17 = L_16;
		DateTime_t77  L_18 = (__this->___m_Date_0);
		DateTime_t77  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t77_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m255(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3381 (Score_t667 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3382 (Score_t667 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3383 (Score_t667 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3384 (Score_t667 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::get_date()
extern "C" DateTime_t77  Score_get_date_m3385 (Score_t667 * __this, const MethodInfo* method)
{
	{
		DateTime_t77  L_0 = (__this->___m_Date_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_formattedValue()
extern "C" String_t* Score_get_formattedValue_m3386 (Score_t667 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FormattedValue_1);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_userID()
extern "C" String_t* Score_get_userID_m3387 (Score_t667 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserID_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t667_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t738_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m3388 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		ScoreU5BU5D_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(976);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, (String_t*) &_stringLiteral345);
		Range_t668  L_0 = {0};
		Range__ctor_m3412(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t668  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t667 * L_1 = (Score_t667 *)il2cpp_codegen_object_new (Score_t667_il2cpp_TypeInfo_var);
		Score__ctor_m3378(L_1, (String_t*) &_stringLiteral345, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t60*)((ScoreU5BU5D_t738*)SZArrayNew(ScoreU5BU5D_t738_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral345;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t751_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t677_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t678_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m3389 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		UInt32_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1002);
		UserScope_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		TimeScope_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1088);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	Range_t668  V_0 = {0};
	Range_t668  V_1 = {0};
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral346);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral346;
		ObjectU5BU5D_t73* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t73* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral347);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral347;
		ObjectU5BU5D_t73* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t73* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral348);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral348;
		ObjectU5BU5D_t73* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t73* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral349);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral349;
		ObjectU5BU5D_t73* L_12 = L_11;
		Range_t668  L_13 = (Range_t668 )VirtFuncInvoker0< Range_t668  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t73* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral318);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral318;
		ObjectU5BU5D_t73* L_18 = L_17;
		Range_t668  L_19 = (Range_t668 )VirtFuncInvoker0< Range_t668  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t73* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral350);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral350;
		ObjectU5BU5D_t73* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t751_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t73* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral351);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral351;
		ObjectU5BU5D_t73* L_29 = L_28;
		IScoreU5BU5D_t60* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t73* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral352);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral352;
		ObjectU5BU5D_t73* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t677_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t73* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral353);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral353;
		ObjectU5BU5D_t73* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t678_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t73* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral354);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral354;
		ObjectU5BU5D_t73* L_44 = L_43;
		StringU5BU5D_t48* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m255(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m3390 (Leaderboard_t496 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m3391 (Leaderboard_t496 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m3392 (Leaderboard_t496 * __this, IScoreU5BU5D_t60* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t60* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m3393 (Leaderboard_t496 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t48* Leaderboard_GetUserFilter_m3394 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t48* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3395 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3396 (Leaderboard_t496 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3397 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3398 (Leaderboard_t496 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t668  Leaderboard_get_range_m3399 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	{
		Range_t668  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3400 (Leaderboard_t496 * __this, Range_t668  ___value, const MethodInfo* method)
{
	{
		Range_t668  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3401 (Leaderboard_t496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3402 (Leaderboard_t496 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m3403 (HitInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t28 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2893(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m3404 (Object_t * __this /* static, unused */, HitInfo_t669  ___lhs, HitInfo_t669  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t28 * L_0 = ((&___lhs)->___target_0);
		GameObject_t28 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m204(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t84 * L_3 = ((&___lhs)->___camera_1);
		Camera_t84 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m204(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m3405 (Object_t * __this /* static, unused */, HitInfo_t669  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t28 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m207(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t84 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m207(NULL /*static, unused*/, L_2, (Object_t67 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Component_t62;
struct GUILayer_t504;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t62;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m186_gshared (Component_t62 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m186(__this, method) (( Object_t * (*) (Component_t62 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t504_m3635(__this, method) (( GUILayer_t504 * (*) (Component_t62 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t670_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t669_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t672_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3406 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1089);
		HitInfo_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		SendMouseEvents_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t669  V_0 = {0};
	HitInfo_t669  V_1 = {0};
	HitInfo_t669  V_2 = {0};
	HitInfo_t669  V_3 = {0};
	HitInfo_t669  V_4 = {0};
	HitInfo_t669  V_5 = {0};
	HitInfo_t669  V_6 = {0};
	HitInfo_t669  V_7 = {0};
	HitInfo_t669  V_8 = {0};
	{
		HitInfoU5BU5D_t670* L_0 = ((HitInfoU5BU5D_t670*)SZArrayNew(HitInfoU5BU5D_t670_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t669  L_1 = V_0;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t670* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t669  L_3 = V_1;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t670* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t669  L_5 = V_2;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t670* L_6 = ((HitInfoU5BU5D_t670*)SZArrayNew(HitInfoU5BU5D_t670_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t669  L_7 = V_3;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t670* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t669  L_9 = V_4;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t670* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t669  L_11 = V_5;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t670* L_12 = ((HitInfoU5BU5D_t670*)SZArrayNew(HitInfoU5BU5D_t670_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t669  L_13 = V_6;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t670* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t669  L_15 = V_7;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t670* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t669  L_17 = V_8;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t100_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t672_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t671_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t669_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t504_m3635_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3407 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		SendMouseEvents_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		CameraU5BU5D_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		HitInfo_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Component_GetComponent_TisGUILayer_t504_m3635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484001);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t58  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t84 * V_3 = {0};
	CameraU5BU5D_t671* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t230  V_6 = {0};
	GUILayer_t504 * V_7 = {0};
	GUIElement_t503 * V_8 = {0};
	Ray_t350  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t28 * V_12 = {0};
	GameObject_t28 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t669  V_15 = {0};
	Vector3_t58  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		Vector3_t58  L_0 = Input_get_mousePosition_m1627(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2819(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		CameraU5BU5D_t671* L_2 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		CameraU5BU5D_t671* L_3 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t671*)SZArrayNew(CameraU5BU5D_t671_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		CameraU5BU5D_t671* L_6 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m2820(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_7 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t669  L_9 = V_15;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_12 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		CameraU5BU5D_t671* L_14 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t671* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t84 **)(Camera_t84 **)SZArrayLdElema(L_15, L_17));
		Camera_t84 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m204(NULL /*static, unused*/, L_18, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t84 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t501 * L_22 = Camera_get_targetTexture_m2814(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m207(NULL /*static, unused*/, L_22, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t84 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t230  L_25 = Camera_get_pixelRect_m2813(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t58  L_26 = V_0;
		bool L_27 = Rect_Contains_m2632((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t84 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t504 * L_29 = Component_GetComponent_TisGUILayer_t504_m3635(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t504_m3635_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t504 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m1569(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t504 * L_32 = V_7;
		Vector3_t58  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t503 * L_34 = GUILayer_HitTest_m2393(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t503 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m1569(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_37 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t503 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t28 * L_39 = Component_get_gameObject_m258(L_38, /*hidden argument*/NULL);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t670* L_40 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t84 * L_41 = V_3;
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_42 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t670* L_43 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t84 *)NULL;
	}

IL_0141:
	{
		Camera_t84 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2811(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t84 * L_46 = V_3;
		Vector3_t58  L_47 = V_0;
		NullCheck(L_46);
		Ray_t350  L_48 = Camera_ScreenPointToRay_m1665(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t58  L_49 = Ray_get_direction_m1669((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1657(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t84 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1666(L_53, /*hidden argument*/NULL);
		Camera_t84 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1667(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t84 * L_59 = V_3;
		Ray_t350  L_60 = V_9;
		float L_61 = V_11;
		Camera_t84 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1678(L_62, /*hidden argument*/NULL);
		Camera_t84 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2811(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t28 * L_66 = Camera_RaycastTry_m2824(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t28 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m207(NULL /*static, unused*/, L_67, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_69 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t28 * L_70 = V_12;
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t670* L_71 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t84 * L_72 = V_3;
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t84 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2815(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t84 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2815(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_77 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t670* L_78 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t84 *)NULL;
	}

IL_0226:
	{
		Camera_t84 * L_79 = V_3;
		Ray_t350  L_80 = V_9;
		float L_81 = V_11;
		Camera_t84 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1678(L_82, /*hidden argument*/NULL);
		Camera_t84 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2811(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t28 * L_86 = Camera_RaycastTry2D_m2826(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t28 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m207(NULL /*static, unused*/, L_87, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_89 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t28 * L_90 = V_13;
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t670* L_91 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t84 * L_92 = V_3;
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t84 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2815(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t84 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2815(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_97 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t670* L_98 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t84 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t671* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_103 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3408(NULL /*static, unused*/, L_102, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_107 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t100_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t672_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t669_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SendEvents_m3408 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t669  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		SendMouseEvents_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		HitInfo_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t669  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m1625(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m1663(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t669  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_5 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t669  L_7 = ___hit;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t670* L_8 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3403(((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral355, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_11 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t669  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_15 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3404(NULL /*static, unused*/, L_14, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_18 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3403(((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral356, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_20 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3403(((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral357, /*hidden argument*/NULL);
		HitInfoU5BU5D_t670* L_22 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t669_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t669  L_24 = V_2;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_25 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_28 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3403(((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral358, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t669  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_31 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3404(NULL /*static, unused*/, L_30, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t669  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3403((&___hit), (String_t*) &_stringLiteral359, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_36 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, (*(HitInfo_t669 *)((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_39 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3403(((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral360, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t669  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3405(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3403((&___hit), (String_t*) &_stringLiteral361, /*hidden argument*/NULL);
		HitInfo_SendMessage_m3403((&___hit), (String_t*) &_stringLiteral359, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t672_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t670* L_43 = ((SendMouseEvents_t672_StaticFields*)SendMouseEvents_t672_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t669  L_45 = ___hit;
		*((HitInfo_t669 *)(HitInfo_t669 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
// UnityEngine.Social
#include "UnityEngine_UnityEngine_Social.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_0.h"


// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m3409 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern TypeInfo* ISocialPlatform_t674_il2cpp_TypeInfo_var;
extern "C" Object_t * Social_get_localUser_m241 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_t674_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t674_il2cpp_TypeInfo_var;
extern "C" void Social_ReportScore_m247 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		int64_t L_1 = ___score;
		String_t* L_2 = ___board;
		Action_1_t18 * L_3 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< int64_t, String_t*, Action_1_t18 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>) */, ISocialPlatform_t674_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern TypeInfo* ISocialPlatform_t674_il2cpp_TypeInfo_var;
extern "C" void Social_LoadScores_m245 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, Action_1_t17 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___leaderboardID;
		Action_1_t17 * L_2 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Action_1_t17 * >::Invoke(2 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>) */, ISocialPlatform_t674_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void UnityEngine.Social::ShowLeaderboardUI()
extern TypeInfo* ISocialPlatform_t674_il2cpp_TypeInfo_var;
extern "C" void Social_ShowLeaderboardUI_m248 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowLeaderboardUI() */, ISocialPlatform_t674_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatform.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"


// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern TypeInfo* ActivePlatform_t675_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_get_Instance_m3410 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivePlatform_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivePlatform_t675_StaticFields*)ActivePlatform_t675_il2cpp_TypeInfo_var->static_fields)->____active_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ActivePlatform_SelectSocialPlatform_m3411(NULL /*static, unused*/, /*hidden argument*/NULL);
		((ActivePlatform_t675_StaticFields*)ActivePlatform_t675_il2cpp_TypeInfo_var->static_fields)->____active_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivePlatform_t675_StaticFields*)ActivePlatform_t675_il2cpp_TypeInfo_var->static_fields)->____active_0;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_SelectSocialPlatform_m3411 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameCenterPlatform_t495 * L_0 = (GameCenterPlatform_t495 *)il2cpp_codegen_object_new (GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform__ctor_m2290(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3412 (Range_t668 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m3413 (PropertyAttribute_t679 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m2132 (TooltipAttribute_t423 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3413(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m2130 (SpaceAttribute_t421 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3413(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m2123 (RangeAttribute_t417 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3413(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m2135 (TextAreaAttribute_t424 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3413(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m2131 (SelectionBaseAttribute_t422 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m3414 (SliderState_t680 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m3415 (StackTraceUtility_t681 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m3416 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m3417 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t731_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3418 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t731 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t731 * L_0 = (StackTrace_t731 *)il2cpp_codegen_object_new (StackTrace_t731_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3636(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t731 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3423(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3419 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3548(L_1, (String_t*) &_stringLiteral362, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3548(L_3, (String_t*) &_stringLiteral363, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3548(L_5, (String_t*) &_stringLiteral364, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3548(L_7, (String_t*) &_stringLiteral365, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3548(L_9, (String_t*) &_stringLiteral366, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3548(L_11, (String_t*) &_stringLiteral367, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3420 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m3421(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m346(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral24, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t387_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t343_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t731_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3421 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		StringBuilder_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTrace_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * V_0 = {0};
	StringBuilder_t343 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t731 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t387 * L_1 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_1, (String_t*) &_stringLiteral368, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t65 *)IsInst(L_2, Exception_t65_il2cpp_TypeInfo_var));
		Exception_t65 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t387 * L_4 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_4, (String_t*) &_stringLiteral369, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t65 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t65 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m350(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t343 * L_10 = (StringBuilder_t343 *)il2cpp_codegen_object_new (StringBuilder_t343_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3594(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m350(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t65 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t65 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m346(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral24, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t65 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t65 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t65 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m3537(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m350(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m351(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral215, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m351(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t65 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t65 * L_41 = (Exception_t65 *)VirtFuncInvoker0< Exception_t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m345(NULL /*static, unused*/, (String_t*) &_stringLiteral370, L_42, (String_t*) &_stringLiteral24, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t65 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t65 * L_46 = (Exception_t65 *)VirtFuncInvoker0< Exception_t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t65 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t343 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m351(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3598(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t731 * L_51 = (StackTrace_t731 *)il2cpp_codegen_object_new (StackTrace_t731_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3636(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t343 * L_52 = V_1;
		StackTrace_t731 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3423(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3598(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t343 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t101_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t343_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3422 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		CharU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		StringBuilder_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t48* V_0 = {0};
	StringBuilder_t343 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t101* L_3 = ((CharU5BU5D_t101*)SZArrayNew(CharU5BU5D_t101_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t48* L_4 = String_Split_m343(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m350(L_5, /*hidden argument*/NULL);
		StringBuilder_t343 * L_7 = (StringBuilder_t343 *)il2cpp_codegen_object_new (StringBuilder_t343_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3594(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t48* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t48* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m3537((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t48* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t48* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m350(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m349(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3548(L_24, (String_t*) &_stringLiteral371, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3548(L_27, (String_t*) &_stringLiteral372, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t48* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3419(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t48* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3419(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3549(L_38, (String_t*) &_stringLiteral373, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1855(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3549(L_44, (String_t*) &_stringLiteral374, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3549(L_46, (String_t*) &_stringLiteral375, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3549(L_48, (String_t*) &_stringLiteral376, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3548(L_51, (String_t*) &_stringLiteral320, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3637(L_53, (String_t*) &_stringLiteral321, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3548(L_55, (String_t*) &_stringLiteral377, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1875(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3549(L_59, (String_t*) &_stringLiteral378, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m3638(L_62, (String_t*) &_stringLiteral321, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1875(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3639(L_73, (String_t*) &_stringLiteral379, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3639(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3640(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3641(L_82, (String_t*) &_stringLiteral380, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1875(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1877(L_88, L_89, (String_t*) &_stringLiteral381, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m350(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1877(L_91, L_93, (String_t*) &_stringLiteral118, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t343 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m351(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3598(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t48* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t343 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t343_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t681_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3423 (Object_t * __this /* static, unused */, StackTrace_t731 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		StackTraceUtility_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t343 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t790 * V_2 = {0};
	MethodBase_t791 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t781* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t343 * L_0 = (StringBuilder_t343 *)il2cpp_codegen_object_new (StringBuilder_t343_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3594(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t731 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t790 * L_3 = (StackFrame_t790 *)VirtFuncInvoker1< StackFrame_t790 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t790 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t791 * L_5 = (MethodBase_t791 *)VirtFuncInvoker0< MethodBase_t791 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t791 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t791 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m350(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t343 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3598(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t343 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3598(L_17, (String_t*) &_stringLiteral110, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t343 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3598(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t343 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3598(L_21, (String_t*) &_stringLiteral319, /*hidden argument*/NULL);
		StringBuilder_t343 * L_22 = V_0;
		MethodBase_t791 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3598(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t343 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3598(L_25, (String_t*) &_stringLiteral382, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t791 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t781* L_27 = (ParameterInfoU5BU5D_t781*)VirtFuncInvoker0< ParameterInfoU5BU5D_t781* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t343 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3598(L_29, (String_t*) &_stringLiteral383, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t343 * L_30 = V_0;
		ParameterInfoU5BU5D_t781* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t782 **)(ParameterInfo_t782 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t782 **)(ParameterInfo_t782 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3598(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t781* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t343 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3598(L_39, (String_t*) &_stringLiteral118, /*hidden argument*/NULL);
		StackFrame_t790 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m334(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral384, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m334(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral385, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t343 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3598(L_49, (String_t*) &_stringLiteral381, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3548(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t681_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m350(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m350(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t681_StaticFields*)StackTraceUtility_t681_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m350(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1855(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t343 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3598(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t343 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3598(L_63, (String_t*) &_stringLiteral319, /*hidden argument*/NULL);
		StringBuilder_t343 * L_64 = V_0;
		StackFrame_t790 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m233((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3598(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t343 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3598(L_68, (String_t*) &_stringLiteral118, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t343 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3598(L_69, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t731 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t343 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m3424 (UnityException_t367 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m3557(__this, (String_t*) &_stringLiteral386, /*hidden argument*/NULL);
		Exception_set_HResult_m3642(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m3425 (UnityException_t367 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3557(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3642(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m3426 (UnityException_t367 * __this, String_t* ___message, Exception_t65 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t65 * L_1 = ___innerException;
		Exception__ctor_m3643(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m3642(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m3427 (UnityException_t367 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t732 * L_0 = ___info;
		StreamingContext_t733  L_1 = ___context;
		Exception__ctor_m3644(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3428 (SharedBetweenAnimatorsAttribute_t682 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m3429 (StateMachineBehaviour_t683 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m210(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m3430 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, AnimatorStateInfo_t584  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m3431 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, AnimatorStateInfo_t584  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m3432 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, AnimatorStateInfo_t584  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m3433 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, AnimatorStateInfo_t584  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m3434 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, AnimatorStateInfo_t584  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m3435 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m3436 (StateMachineBehaviour_t683 * __this, Animator_t39 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"


// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t371_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m1846 (TextEditor_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t371 * L_0 = (GUIContent_t371 *)il2cpp_codegen_object_new (GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2525(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_1 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t38  L_2 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3437 (TextEditor_t370 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m1850 (TextEditor_t370 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m3438(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3438 (TextEditor_t370 * __this, const MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t371 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1848(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m350(L_1, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m3437(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m3439 (TextEditor_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t371 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1848(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m350(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t371 * L_13 = (__this->___content_4);
		GUIContent_t371 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m1848(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m1855(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t371 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m1848(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t371 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m1848(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m350(L_22, /*hidden argument*/NULL);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m1855(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m351(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m2527(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t371 * L_28 = (__this->___content_4);
		GUIContent_t371 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m1848(L_29, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m1855(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t371 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m1848(L_33, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t371 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m1848(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m350(L_37, /*hidden argument*/NULL);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m1855(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m351(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m2527(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m3437(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3440 (TextEditor_t370 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m3439(__this, /*hidden argument*/NULL);
		GUIContent_t371 * L_0 = (__this->___content_4);
		GUIContent_t371 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m1848(L_1, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m1877(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m2527(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m350(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m3437(__this, /*hidden argument*/NULL);
		TextEditor_UpdateScrollOffset_m3441(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3441 (TextEditor_t370 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t230  V_1 = {0};
	Vector2_t38  V_2 = {0};
	Vector2_t38  V_3 = {0};
	Vector2_t38 * G_B17_0 = {0};
	Vector2_t38 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t38 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t517 * L_1 = (__this->___style_5);
		Rect_t230 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m1726(L_2, /*hidden argument*/NULL);
		Rect_t230 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m1727(L_4, /*hidden argument*/NULL);
		Rect_t230  L_6 = {0};
		Rect__ctor_m1922(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t371 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t38  L_9 = GUIStyle_GetCursorPixelPosition_m2573(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t517 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t291 * L_11 = GUIStyle_get_padding_m2561(L_10, /*hidden argument*/NULL);
		Rect_t230  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t230  L_13 = RectOffset_Remove_m2548(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t517 * L_14 = (__this->___style_5);
		GUIContent_t371 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t38  L_16 = GUIStyle_CalcSize_m2576(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t517 * L_18 = (__this->___style_5);
		GUIContent_t371 * L_19 = (__this->___content_4);
		Rect_t230 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m1726(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m2578(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m306((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t230 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m1726(L_24, /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t38 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t38 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t38 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m1726((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t38 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t38 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m1726((&V_1), /*hidden argument*/NULL);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t38 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t38 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t517 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t291 * L_41 = GUIStyle_get_padding_m2561(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m2030(L_41, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t38 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t38 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t517 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t291 * L_47 = GUIStyle_get_padding_m2561(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m2030(L_47, /*hidden argument*/NULL);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m1727((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t38 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t38 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t517 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m2570(L_54, /*hidden argument*/NULL);
		Vector2_t38 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m1727((&V_1), /*hidden argument*/NULL);
		GUIStyle_t517 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t291 * L_60 = GUIStyle_get_padding_m2561(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2031(L_60, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t38 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t38 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m1727((&V_1), /*hidden argument*/NULL);
		GUIStyle_t517 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t291 * L_67 = GUIStyle_get_padding_m2561(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m2031(L_67, /*hidden argument*/NULL);
		GUIStyle_t517 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m2570(L_69, /*hidden argument*/NULL);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t38 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t38 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t517 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t291 * L_76 = GUIStyle_get_padding_m2561(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m2031(L_76, /*hidden argument*/NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t38 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t38 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t517 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t291 * L_82 = GUIStyle_get_padding_m2561(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m2031(L_82, /*hidden argument*/NULL);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t38 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t38 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m1727((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t38 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m1727((&V_1), /*hidden argument*/NULL);
		GUIStyle_t517 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t291 * L_94 = GUIStyle_get_padding_m2561(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m2031(L_94, /*hidden argument*/NULL);
		GUIStyle_t517 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t291 * L_97 = GUIStyle_get_padding_m2561(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m2546(L_97, /*hidden argument*/NULL);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t38 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t38 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t38 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m1851 (TextEditor_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t371 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m1848(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m1855(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t371 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m1848(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m1855(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m2457(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3442 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3639(L_0, (String_t*) &_stringLiteral221, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m3640(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m3640(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m1847 (TextEditor_t370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m2456(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m1854(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m3442(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m3440(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t340_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m3443 (TextGenerationSettings_t335 * __this, Color_t13  ___left, Color_t13  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t340  V_0 = {0};
	Color32_t340  V_1 = {0};
	{
		Color_t13  L_0 = ___left;
		Color32_t340  L_1 = Color32_op_Implicit_m1734(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t13  L_2 = ___right;
		Color32_t340  L_3 = Color32_op_Implicit_m1734(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t340  L_4 = V_0;
		Color32_t340  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t340_il2cpp_TypeInfo_var, &L_5);
		Color32_t340  L_7 = V_1;
		Color32_t340  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t340_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m3444 (TextGenerationSettings_t335 * __this, Vector2_t38  ___left, Vector2_t38  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1657(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1657(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m3445 (TextGenerationSettings_t335 * __this, TextGenerationSettings_t335  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t13  L_0 = (__this->___color_1);
		Color_t13  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3443(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1657(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1657(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t38  L_35 = (__this->___generationExtents_14);
		Vector2_t38  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3444(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t38  L_38 = (__this->___pivot_15);
		Vector2_t38  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m3444(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t188 * L_41 = (__this->___font_0);
		Font_t188 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m204(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t588_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m3446 (TrackedReference_t588 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1097);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3448(NULL /*static, unused*/, ((TrackedReference_t588 *)IsInst(L_0, TrackedReference_t588_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3447 (TrackedReference_t588 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3645(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m3448 (Object_t * __this /* static, unused */, TrackedReference_t588 * ___x, TrackedReference_t588 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t588 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t588 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t588 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3646(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t588 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3646(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t588 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t588 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3646(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t588_marshal(const TrackedReference_t588& unmarshaled, TrackedReference_t588_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t588_marshal_back(const TrackedReference_t588_marshaled& marshaled, TrackedReference_t588& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t588_marshal_cleanup(TrackedReference_t588_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m3449 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t67 * ArgumentCache_get_unityObjectArgument_m3450 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3451 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m3452 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m3453 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m3454 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m3455 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t792_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3456 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Regex_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1881(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t792_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m3647(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral387, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m3647(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral388, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m3647(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral389, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m3457 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3456(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3458 (ArgumentCache_t688 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3456(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3459 (BaseInvokableCall_t689 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t756_il2cpp_TypeInfo_var;
extern "C" void BaseInvokableCall__ctor_m3460 (BaseInvokableCall_t689 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1026);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t756 * L_1 = (ArgumentNullException_t756 *)il2cpp_codegen_object_new (ArgumentNullException_t756_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3592(L_1, (String_t*) &_stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t756 * L_3 = (ArgumentNullException_t756 *)il2cpp_codegen_object_new (ArgumentNullException_t756_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3592(L_3, (String_t*) &_stringLiteral391, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m3461 (Object_t * __this /* static, unused */, Delegate_t361 * ___delegate, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t361 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3648(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t361 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m3649(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t89_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t89_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3462 (InvokableCall_t690 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t89_0_0_0_var = il2cpp_codegen_type_from_index(46);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		UnityAction_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3460(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t89 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(UnityAction_t89_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t361 * L_6 = Delegate_CreateDelegate_m3650(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t361 * L_7 = Delegate_Combine_m1746(NULL /*static, unused*/, L_2, ((UnityAction_t89 *)IsInst(L_6, UnityAction_t89_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t89 *)Castclass(L_7, UnityAction_t89_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t89_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3463 (InvokableCall_t690 * __this, UnityAction_t89 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m3459(__this, /*hidden argument*/NULL);
		UnityAction_t89 * L_0 = (__this->___Delegate_0);
		UnityAction_t89 * L_1 = ___action;
		Delegate_t361 * L_2 = Delegate_Combine_m1746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t89 *)Castclass(L_2, UnityAction_t89_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m3464 (InvokableCall_t690 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method)
{
	{
		UnityAction_t89 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3461(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t89 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Events.UnityAction::Invoke() */, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m3465 (InvokableCall_t690 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t89 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3649(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t89 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3648(L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t688_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m3466 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1099);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t688 * L_0 = (ArgumentCache_t688 *)il2cpp_codegen_object_new (ArgumentCache_t688_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m3449(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t67 * PersistentCall_get_target_m3467 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3468 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3469 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t688 * PersistentCall_get_arguments_m3470 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t688 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m3471 (PersistentCall_t692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t67 * L_0 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m207(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3468(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1881(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t793_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t794_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t795_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t796_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t690_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3651_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3652_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3653_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3654_MethodInfo_var;
extern "C" BaseInvokableCall_t689 * PersistentCall_GetRuntimeCall_m3472 (PersistentCall_t692 * __this, UnityEventBase_t697 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		CachedInvokableCall_1_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		CachedInvokableCall_1_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1102);
		CachedInvokableCall_1_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1103);
		InvokableCall_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		CachedInvokableCall_1__ctor_m3651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484002);
		CachedInvokableCall_1__ctor_m3652_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484003);
		CachedInvokableCall_1__ctor_m3653_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484004);
		CachedInvokableCall_1__ctor_m3654_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484005);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t697 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t689 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t697 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3483(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t689 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t697 * L_7 = ___theEvent;
		Object_t67 * L_8 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t689 * L_10 = (BaseInvokableCall_t689 *)VirtFuncInvoker2< BaseInvokableCall_t689 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t67 * L_11 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t688 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t689 * L_14 = PersistentCall_GetObjectCall_m3473(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t67 * L_15 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t688 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3453(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t793 * L_19 = (CachedInvokableCall_1_t793 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t793_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3651(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3651_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t67 * L_20 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t688 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3452(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t794 * L_24 = (CachedInvokableCall_1_t794 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t794_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3652(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3652_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t67 * L_25 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t688 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3454(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t795 * L_29 = (CachedInvokableCall_1_t795 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t795_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3653(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3653_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t67 * L_30 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t688 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3455(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t796 * L_34 = (CachedInvokableCall_1_t796 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t796_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3654(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3654_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t67 * L_35 = PersistentCall_get_target_m3467(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t690 * L_37 = (InvokableCall_t690 *)il2cpp_codegen_object_new (InvokableCall_t690_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3462(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t689 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t67_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t797_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t634_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t689_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t689 * PersistentCall_GetObjectCall_m3473 (Object_t * __this /* static, unused */, Object_t67 * ___target, MethodInfo_t * ___method, ArgumentCache_t688 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t67_0_0_0_var = il2cpp_codegen_type_from_index(269);
		CachedInvokableCall_1_t797_0_0_0_var = il2cpp_codegen_type_from_index(1105);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(1106);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		TypeU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1055);
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		BaseInvokableCall_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t638 * V_3 = {0};
	Object_t67 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t688 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3451(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1881(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t688 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3451(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetType_m3655(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t797_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t634* L_11 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t634* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t634* L_15 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t634* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t634* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t638 * L_21 = (ConstructorInfo_t638 *)VirtFuncInvoker1< ConstructorInfo_t638 *, TypeU5BU5D_t634* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t688 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t67 * L_23 = ArgumentCache_get_unityObjectArgument_m3450(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t67 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m207(NULL /*static, unused*/, L_24, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t67 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1633(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t67 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t638 * L_30 = V_3;
		ObjectU5BU5D_t73* L_31 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		Object_t67 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t73* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t73* L_35 = L_33;
		Object_t67 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3627(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t689 *)IsInst(L_37, BaseInvokableCall_t689_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t693_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3656_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3474 (PersistentCallGroup_t694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		List_1__ctor_m3656_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484006);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		List_1_t693 * L_0 = (List_1_t693 *)il2cpp_codegen_object_new (List_1_t693_il2cpp_TypeInfo_var);
		List_1__ctor_m3656(L_0, /*hidden argument*/List_1__ctor_m3656_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3657_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3658_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3659_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3475 (PersistentCallGroup_t694 * __this, InvokableCallList_t696 * ___invokableList, UnityEventBase_t697 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1_GetEnumerator_m3657_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484007);
		Enumerator_get_Current_m3658_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484008);
		Enumerator_MoveNext_m3659_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484009);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t692 * V_0 = {0};
	Enumerator_t798  V_1 = {0};
	BaseInvokableCall_t689 * V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t693 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t798  L_1 = List_1_GetEnumerator_m3657(L_0, /*hidden argument*/List_1_GetEnumerator_m3657_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t692 * L_2 = Enumerator_get_Current_m3658((&V_1), /*hidden argument*/Enumerator_get_Current_m3658_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t692 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3471(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t692 * L_5 = V_0;
			UnityEventBase_t697 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t689 * L_7 = PersistentCall_GetRuntimeCall_m3472(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t689 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t696 * L_9 = ___invokableList;
			BaseInvokableCall_t689 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3477(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3659((&V_1), /*hidden argument*/Enumerator_MoveNext_m3659_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_12 = V_1;
		Enumerator_t798  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t695_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3660_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3476 (InvokableCallList_t696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		List_1__ctor_m3660_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484010);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t695 * L_0 = (List_1_t695 *)il2cpp_codegen_object_new (List_1_t695_il2cpp_TypeInfo_var);
		List_1__ctor_m3660(L_0, /*hidden argument*/List_1__ctor_m3660_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t695 * L_1 = (List_1_t695 *)il2cpp_codegen_object_new (List_1_t695_il2cpp_TypeInfo_var);
		List_1__ctor_m3660(L_1, /*hidden argument*/List_1__ctor_m3660_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t695 * L_2 = (List_1_t695 *)il2cpp_codegen_object_new (List_1_t695_il2cpp_TypeInfo_var);
		List_1__ctor_m3660(L_2, /*hidden argument*/List_1__ctor_m3660_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3477 (InvokableCallList_t696 * __this, BaseInvokableCall_t689 * ___call, const MethodInfo* method)
{
	{
		List_1_t695 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t689 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t689 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3478 (InvokableCallList_t696 * __this, BaseInvokableCall_t689 * ___call, const MethodInfo* method)
{
	{
		List_1_t695 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t689 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t689 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t799_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3660_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3661_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m3662_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3479 (InvokableCallList_t696 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		Predicate_1_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		List_1__ctor_m3660_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484010);
		Predicate_1__ctor_m3661_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484011);
		List_1_RemoveAll_m3662_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484012);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t695 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t695 * L_0 = (List_1_t695 *)il2cpp_codegen_object_new (List_1_t695_il2cpp_TypeInfo_var);
		List_1__ctor_m3660(L_0, /*hidden argument*/List_1__ctor_m3660_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t695 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t689 * L_3 = (BaseInvokableCall_t689 *)VirtFuncInvoker1< BaseInvokableCall_t689 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t695 * L_7 = V_0;
		List_1_t695 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t689 * L_10 = (BaseInvokableCall_t689 *)VirtFuncInvoker1< BaseInvokableCall_t689 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t689 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t695 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t695 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t695 * L_16 = V_0;
		List_1_t695 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t799 * L_19 = (Predicate_1_t799 *)il2cpp_codegen_object_new (Predicate_1_t799_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3661(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3661_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3662(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3662_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3480 (InvokableCallList_t696 * __this, const MethodInfo* method)
{
	{
		List_1_t695 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m3663_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3481 (InvokableCallList_t696 * __this, ObjectU5BU5D_t73* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3663_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484013);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t695 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t695 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m3663(L_0, L_1, /*hidden argument*/List_1_AddRange_m3663_MethodInfo_var);
		List_1_t695 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t695 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m3663(L_2, L_3, /*hidden argument*/List_1_AddRange_m3663_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t695 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t689 * L_6 = (BaseInvokableCall_t689 *)VirtFuncInvoker1< BaseInvokableCall_t689 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		ObjectU5BU5D_t73* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t73* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t695 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t695 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t696_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t694_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m3482 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		PersistentCallGroup_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		InvokableCallList_t696 * L_0 = (InvokableCallList_t696 *)il2cpp_codegen_object_new (InvokableCallList_t696_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m3476(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t694 * L_1 = (PersistentCallGroup_t694 *)il2cpp_codegen_object_new (PersistentCallGroup_t694_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m3474(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1633(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2203 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2204 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3485(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1633(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t67_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3483 (UnityEventBase_t697 * __this, PersistentCall_t692 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t67_0_0_0_var = il2cpp_codegen_type_from_index(269);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t692 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t688 * L_2 = PersistentCall_get_arguments_m3470(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3451(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1881(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t692 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t688 * L_6 = PersistentCall_get_arguments_m3470(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3451(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetType_m3655(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t692 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3468(L_11, /*hidden argument*/NULL);
		PersistentCall_t692 * L_13 = ___call;
		NullCheck(L_13);
		Object_t67 * L_14 = PersistentCall_get_target_m3467(L_13, /*hidden argument*/NULL);
		PersistentCall_t692 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3469(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3484(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t345_0_0_0_var;
extern const Il2CppType* Int32_t75_0_0_0_var;
extern const Il2CppType* Boolean_t111_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t67_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t634_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3484 (UnityEventBase_t697 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t345_0_0_0_var = il2cpp_codegen_type_from_index(32);
		Int32_t75_0_0_0_var = il2cpp_codegen_type_from_index(23);
		Boolean_t111_0_0_0_var = il2cpp_codegen_type_from_index(17);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Object_t67_0_0_0_var = il2cpp_codegen_type_from_index(269);
		TypeU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1055);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t634* G_B10_2 = {0};
	TypeU5BU5D_t634* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t634* G_B9_2 = {0};
	TypeU5BU5D_t634* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t634* L_10 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Single_t345_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t634* L_15 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Int32_t75_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t634* L_20 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Boolean_t111_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t634* L_25 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t634* L_30 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t67_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3485 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t696 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3480(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3486 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t694 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t696 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3475(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m3487 (UnityEventBase_t697 * __this, BaseInvokableCall_t689 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t696 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t689 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3478(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m3488 (UnityEventBase_t697 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t696 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3479(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m3489 (UnityEventBase_t697 * __this, ObjectU5BU5D_t73* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3486(__this, /*hidden argument*/NULL);
		InvokableCallList_t696 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t73* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3481(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m2202 (UnityEventBase_t697 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m380(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1633(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m346(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral23, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3490 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t634* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t781* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t782 * V_5 = {0};
	ParameterInfoU5BU5D_t781* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1633(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t634* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t788 *, TypeU5BU5D_t634*, ParameterModifierU5BU5D_t789* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t788 *)NULL, L_4, (ParameterModifierU5BU5D_t789*)(ParameterModifierU5BU5D_t789*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t781* L_8 = (ParameterInfoU5BU5D_t781*)VirtFuncInvoker0< ParameterInfoU5BU5D_t781* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t781* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t781* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t782 **)(ParameterInfo_t782 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t634* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t782 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t781* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1690 (UnityEvent_t179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3482(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m296 (UnityEvent_t179 * __this, UnityAction_t89 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t89 * L_0 = ___call;
		BaseInvokableCall_t689 * L_1 = UnityEvent_GetDelegate_m3491(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m3487(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t634_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2227 (UnityEvent_t179 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3490(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t690_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t689 * UnityEvent_GetDelegate_m2228 (UnityEvent_t179 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t690 * L_2 = (InvokableCall_t690 *)il2cpp_codegen_object_new (InvokableCall_t690_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3462(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t690_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t689 * UnityEvent_GetDelegate_m3491 (Object_t * __this /* static, unused */, UnityAction_t89 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t89 * L_0 = ___action;
		InvokableCall_t690 * L_1 = (InvokableCall_t690 *)il2cpp_codegen_object_new (InvokableCall_t690_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3463(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1692 (UnityEvent_t179 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t73* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3489(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m3492 (UserAuthorizationDialog_t698 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m231(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m3493 (UserAuthorizationDialog_t698 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m3494 (UserAuthorizationDialog_t698 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m3495 (UserAuthorizationDialog_t698 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m3496 (DefaultValueAttribute_t699 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3497 (DefaultValueAttribute_t699 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m3498 (DefaultValueAttribute_t699 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t699 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t699 *)IsInst(L_0, DefaultValueAttribute_t699_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t699 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t699 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3497(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t699 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3497(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3499 (DefaultValueAttribute_t699 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3664(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m3500 (ExcludeFromDocsAttribute_t700 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m2086 (FormerlySerializedAsAttribute_t409 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t701_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m3501 (TypeInferenceRuleAttribute_t702 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t701_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m3502(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3502 (TypeInferenceRuleAttribute_t702 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3503 (TypeInferenceRuleAttribute_t702 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m3504 (GenericStack_t511 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m3665(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m295 (UnityAction_t89 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m3505 (UnityAction_t89 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m3505((UnityAction_t89 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t89(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m3506 (UnityAction_t89 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3507 (UnityAction_t89 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
