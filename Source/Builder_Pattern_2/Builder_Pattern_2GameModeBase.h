// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ConcretoBuilderPaquetesEnergia.h"
#include "DirectorPaquetesEnergia.h"
#include "Builder_Pattern_2GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BUILDER_PATTERN_2_API ABuilder_Pattern_2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABuilder_Pattern_2GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	int32 Cont;
	float TimerController;

	UPROPERTY(VisibleAnywhere, Category="GameModeBase")
		AConcretoBuilderPaquetesEnergia* ConstructorPaquetesEnergia;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
		ADirectorPaquetesEnergia* Director;
};
