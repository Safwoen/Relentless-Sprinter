// Copyright Epic Games, Inc. All Rights Reserved.

#include "Relentless_SprinterGameMode.h"
#include "Relentless_SprinterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARelentless_SprinterGameMode::ARelentless_SprinterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
