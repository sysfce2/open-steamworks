//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ISTEAMGAMECOORDINATOR001_H
#define ISTEAMGAMECOORDINATOR001_H
#ifdef _WIN32
#pragma once
#endif

#include "SteamTypes.h"
#include "GameCoordinatorCommon.h"

class ISteamGameCoordinator001
{
public:
	#ifdef _WIN32
		#undef SendMessage
	#endif
	virtual unknown_ret SendMessage(unsigned int unknown, const void *data, unsigned int cbData) = 0;
	#ifdef _WIN32
		#ifdef UNICODE
			#define SendMessage SendMessageW
		#else
			#define SendMessage SendMessageA
		#endif
	#endif

	virtual bool IsMessageAvailable(unsigned int *unknown) = 0;

	virtual unknown_ret RetrieveMessage(unsigned int *unknown, void *data, unsigned int cbData, unsigned int *cbDataActual) = 0;
};

#endif // ISTEAMGAMECOORDINATOR001_H