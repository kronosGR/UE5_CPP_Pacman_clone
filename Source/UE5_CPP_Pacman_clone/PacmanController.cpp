// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanController.h"

void APacmanController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("MoveUp"), IE_Pressed, this, &APacmanController::MoveUp);
	InputComponent->BindAction(TEXT("MoveDown"), IE_Pressed, this, &APacmanController::MoveDown );
	InputComponent->BindAction(TEXT("MoveLeft"), IE_Pressed, this, &APacmanController::MoveLeft);
	InputComponent->BindAction(TEXT("MoveRight"), IE_Pressed, this, &APacmanController::MoveRight);
}

APacmanPawn* APacmanController::GetPacmanPawn() const
{
	// get the pawn that is configured in the custom game mode
	return Cast<APacmanPawn>(GetPawn());
}

void APacmanController::MoveUp()
{
	if (GetPacmanPawn() != nullptr)
	{
		GetPacmanPawn()->SetDirection(FVector::UpVector);
	}
}

void APacmanController::MoveDown()
{
	if (GetPacmanPawn() != nullptr)
	{
		GetPacmanPawn()->SetDirection(FVector::DownVector);
	}
}

void APacmanController::MoveLeft()
{
	if (GetPacmanPawn() != nullptr)
	{
		GetPacmanPawn()->SetDirection(FVector::LeftVector);
	}
}

void APacmanController::MoveRight()
{
	if (GetPacmanPawn() != nullptr)
	{
		GetPacmanPawn()->SetDirection(FVector::RightVector);
	}
}
