// Copyright Epic Games, Inc. All Rights Reserved.

#include "F_ProjectGameMode.h"
#include "F_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AF_ProjectGameMode::AF_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
