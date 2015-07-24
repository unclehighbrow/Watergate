#pragma once
#include <stdint.h>
// Conversation[]
struct ConversationU5BU5D_t25;
// Conversation
struct Conversation_t5;
// TutorialBase
#include "AssemblyU2DCSharp_TutorialBase.h"
// InterstitialManager
struct  InterstitialManager_t22  : public TutorialBase_t26
{
	// Conversation[] InterstitialManager::scriptHolder
	ConversationU5BU5D_t25* ___scriptHolder_24;
	// Conversation InterstitialManager::endGame
	Conversation_t5 * ___endGame_25;
};
