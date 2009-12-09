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

#ifndef ECHATROOMTYPE_H
#define ECHATROOMTYPE_H
#ifdef _WIN32
#pragma once
#endif


#include "EnumString.h"

enum EChatRoomType
{
	k_EChatRoomTypeFriend = 1,
	k_EChatRoomTypeMUC = 2,
	k_EChatRoomTypeLobby = 3,
};

Begin_Enum_String( EChatRoomType )
{
	Enum_String( k_EChatRoomTypeFriend );
	Enum_String( k_EChatRoomTypeMUC );
	Enum_String( k_EChatRoomTypeLobby );
}
End_Enum_String;

#endif // ECHATROOMTYPE_H
