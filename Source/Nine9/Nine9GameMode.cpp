// Copyright Epic Games, Inc. All Rights Reserved.

#include "Nine9GameMode.h"
#include "Nine9Character.h"
#include "UObject/ConstructorHelpers.h"

ANine9GameMode::ANine9GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
