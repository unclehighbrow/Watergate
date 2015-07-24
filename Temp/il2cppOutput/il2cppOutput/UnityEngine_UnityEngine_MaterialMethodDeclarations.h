#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t192;
// UnityEngine.Texture
struct Texture_t240;
// System.String
struct String_t;

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m1986 (Material_t192 * __this, Material_t192 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t240 * Material_get_mainTexture_m1992 (Material_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t240 * Material_GetTexture_m2740 (Material_t192 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t240 * Material_GetTexture_m2741 (Material_t192 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m2742 (Material_t192 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2743 (Material_t192 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m1988 (Material_t192 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m1984 (Material_t192 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2744 (Material_t192 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2745 (Object_t * __this /* static, unused */, Material_t192 * ___mono, Material_t192 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
