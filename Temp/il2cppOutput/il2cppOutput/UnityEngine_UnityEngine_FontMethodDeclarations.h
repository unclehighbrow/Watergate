#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t188;
// UnityEngine.Material
struct Material_t192;
// System.Action`1<UnityEngine.Font>
struct Action_1_t355;

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m1708 (Object_t * __this /* static, unused */, Action_1_t355 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m3048 (Object_t * __this /* static, unused */, Action_1_t355 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t192 * Font_get_material_m1991 (Font_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m1868 (Font_t188 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m3049 (Object_t * __this /* static, unused */, Font_t188 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m1994 (Font_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m1996 (Font_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
