// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewAndroidProjectGameMode.h"
#include "NewAndroidProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewAndroidProjectGameMode::ANewAndroidProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
