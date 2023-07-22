// Copyright Epic Games, Inc. All Rights Reserved.

#include "VFXExamplesGameMode.h"
#include "VFXExamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVFXExamplesGameMode::AVFXExamplesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
