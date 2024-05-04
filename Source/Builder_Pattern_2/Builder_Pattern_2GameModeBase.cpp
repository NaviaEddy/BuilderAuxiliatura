// Copyright Epic Games, Inc. All Rights Reserved.


#include "Builder_Pattern_2GameModeBase.h"

ABuilder_Pattern_2GameModeBase::ABuilder_Pattern_2GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	Cont = 1;
	TimerController = 0.0f;
}

void ABuilder_Pattern_2GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	ConstructorPaquetesEnergia = GetWorld()->SpawnActor<AConcretoBuilderPaquetesEnergia>(AConcretoBuilderPaquetesEnergia::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorPaquetesEnergia>(ADirectorPaquetesEnergia::StaticClass());
	Director->EstablecerConstructorPaquetes(ConstructorPaquetesEnergia);
}

void ABuilder_Pattern_2GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimerController += DeltaTime;

	if (TimerController >= 5.0f)
	{
		Director->ConstruirPaqueteEnergia(Cont);
		TimerController = 0.0f;
		Cont++;
		if (Cont > 3)
		{
			Cont = 1;
		}
	}
}
