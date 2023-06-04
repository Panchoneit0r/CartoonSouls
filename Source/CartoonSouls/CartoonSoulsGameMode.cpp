// Copyright Epic Games, Inc. All Rights Reserved.

#include "CartoonSoulsGameMode.h"
#include "CartoonSoulsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACartoonSoulsGameMode::ACartoonSoulsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
