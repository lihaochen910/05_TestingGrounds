// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGroundsGameMode.h"
#include "S05_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_TestingGroundsGameMode::AS05_TestingGroundsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
