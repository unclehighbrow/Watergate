#pragma once
#include <stdint.h>
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t514;
// UnityEngineInternal.GenericStack
struct GenericStack_t511;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t515  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t514 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t511 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t514 * ___windows_2;
};
