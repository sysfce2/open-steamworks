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

#ifndef ERESULT_H
#define ERESULT_H
#ifdef _WIN32
#pragma once
#endif


#include "EnumString.h"

// General result codes
enum EResult
{
	k_EResultOK	= 1,							// success
	k_EResultFail = 2,							// generic failure 
	k_EResultNoConnection = 3,					// no/failed network connection
//	k_EResultNoConnectionRetry = 4,				// OBSOLETE - removed
	k_EResultInvalidPassword = 5,				// password/ticket is invalid
	k_EResultLoggedInElsewhere = 6,				// same user logged in elsewhere
	k_EResultInvalidProtocolVer = 7,			// protocol version is incorrect
	k_EResultInvalidParam = 8,					// a parameter is incorrect
	k_EResultFileNotFound = 9,					// file was not found
	k_EResultBusy = 10,							// called method busy - action not taken
	k_EResultInvalidState = 11,					// called object was in an invalid state
	k_EResultInvalidName = 12,					// name is invalid
	k_EResultInvalidEmail = 13,					// email is invalid
	k_EResultDuplicateName = 14,				// name is not unique
	k_EResultAccessDenied = 15,					// access is denied
	k_EResultTimeout = 16,						// operation timed out
	k_EResultBanned = 17,						// VAC2 banned
	k_EResultAccountNotFound = 18,				// account not found
	k_EResultInvalidSteamID = 19,				// steamID is invalid
	k_EResultServiceUnavailable = 20,			// The requested service is currently unavailable
	k_EResultNotLoggedOn = 21,					// The user is not logged on
	k_EResultPending = 22,						// Request is pending (may be in process, or waiting on third party)
	k_EResultEncryptionFailure = 23,			// Encryption or Decryption failed
	k_EResultInsufficientPrivilege = 24,		// Insufficient privilege
	k_EResultLimitExceeded = 25,				// Too much of a good thing
	k_EResultRevoked = 26,						// Access has been revoked (used for revoked guest passes)
	k_EResultExpired = 27,						// License/Guest pass the user is trying to access is expired
	k_EResultAlreadyRedeemed = 28,				// Guest pass has already been redeemed by account, cannot be acked again
	k_EResultDuplicateRequest = 29,				// The request is a duplicate and the action has already occurred in the past, ignored this time
	k_EResultAlreadyOwned = 30,					// All the games in this guest pass redemption request are already owned by the user
	k_EResultIPNotFound = 31,					// IP address not found
	k_EResultPersistFailed = 32,				// failed to write change to the data store
	k_EResultLockingFailed = 33,				// failed to acquire access lock for this operation
	k_EResultLogonSessionReplaced = 34,
	k_EResultConnectFailed = 35,
	k_EResultHandshakeFailed = 36,
	k_EResultIOFailure = 37,
	k_EResultRemoteDisconnect = 38,
	k_EResultShoppingCartNotFound = 39,			// failed to find the shopping cart requested
	k_EResultBlocked = 40,						// a user didn't allow it
	k_EResultIgnored = 41,						// target is ignoring sender
	k_EResultNoMatch = 42,						// nothing matching the request found
	k_EResultAccountDisabled = 43,
	k_EResultServiceReadOnly = 44,				// this service is not accepting content changes right now
};

Begin_Enum_String(EResult)
{
	Enum_String( k_EResultOK );						// success
	Enum_String( k_EResultFail );					// generic failure 
	Enum_String( k_EResultNoConnection);			// no/failed network connection
	//Enum_String( k_EResultNoConnectionRetry );	// OBSOLETE - removed
	Enum_String( k_EResultInvalidPassword );		// password/ticket is invalid
	Enum_String( k_EResultLoggedInElsewhere );		// same user logged in elsewhere
	Enum_String( k_EResultInvalidProtocolVer );		// protocol version is incorrect
	Enum_String( k_EResultInvalidParam);			// a parameter is incorrect
	Enum_String( k_EResultFileNotFound );			// file was not found
	Enum_String( k_EResultBusy);					// called method busy - action not taken
	Enum_String( k_EResultInvalidState );			// called object was in an invalid state
	Enum_String( k_EResultInvalidName );			// name is invalid
	Enum_String( k_EResultInvalidEmail );			// email is invalid
	Enum_String( k_EResultDuplicateName );			// name is not unique
	Enum_String( k_EResultAccessDenied );			// access is denied
	Enum_String( k_EResultTimeout );				// operation timed out
	Enum_String( k_EResultBanned );					// VAC2 banned
	Enum_String( k_EResultAccountNotFound );		// account not found
	Enum_String( k_EResultInvalidSteamID);			// steamID is invalid
	Enum_String( k_EResultServiceUnavailable );		// The requested service is currently unavailable
	Enum_String( k_EResultNotLoggedOn);				// The user is not logged on
	Enum_String( k_EResultPending);					// Request is pending (may be in process, or waiting on third party)
	Enum_String( k_EResultEncryptionFailure );		// Encryption or Decryption failed
	Enum_String( k_EResultInsufficientPrivilege );	// Insufficient privilege
	Enum_String( k_EResultLimitExceeded );			// Too much of a good thing
	Enum_String( k_EResultRevoked );				// Access has been revoked (used for revoked guest passes)
	Enum_String( k_EResultExpired );				// License/Guest pass the user is trying to access is expired
	Enum_String( k_EResultAlreadyRedeemed );		// Guest pass has already been redeemed by account, cannot be acked again
	Enum_String( k_EResultDuplicateRequest );		// The request is a duplicate and the action has already occurred in the past, ignored this time
	Enum_String( k_EResultAlreadyOwned );			// All the games in this guest pass redemption request are already owned by the user
	Enum_String( k_EResultIPNotFound );				// IP address not found
	Enum_String( k_EResultPersistFailed );			// failed to write change to the data store
	Enum_String( k_EResultLockingFailed );			// failed to acquire access lock for this operation
	Enum_String( k_EResultLogonSessionReplaced );
	Enum_String( k_EResultConnectFailed );
	Enum_String( k_EResultHandshakeFailed );
	Enum_String( k_EResultIOFailure );
	Enum_String( k_EResultRemoteDisconnect );
	Enum_String( k_EResultShoppingCartNotFound );	// failed to find the shopping cart requested
	Enum_String( k_EResultBlocked );					// a user didn't allow it
	Enum_String( k_EResultIgnored );						// target is ignoring sender
	Enum_String( k_EResultNoMatch );						// nothing matching the request found
	Enum_String( k_EResultAccountDisabled );
	Enum_String( k_EResultServiceReadOnly );				// this service is not accepting content changes right now
}
End_Enum_String;

#endif // ERESULT_H