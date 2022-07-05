// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PacmanPawn.h"
#include "GameFramework/PlayerController.h"
#include "PacmanController.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CPP_PACMAN_CLONE_API APacmanController : public APlayerController
{
	GENERATED_BODY()

protected:
	void SetupInputComponent() override;

	APacmanPawn* GetPacmanPawn() const;

public:
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	
};
