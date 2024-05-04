// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderPaquetesEnergia.h"
#include "DirectorPaquetesEnergia.generated.h"

UCLASS()
class BUILDER_PATTERN_2_API ADirectorPaquetesEnergia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorPaquetesEnergia();

public:
	IIBuilderPaquetesEnergia* BPE;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerConstructorPaquetes(AActor* _Constructor);
	void ConstruirPaqueteEnergia(int32 _Cont);
};
