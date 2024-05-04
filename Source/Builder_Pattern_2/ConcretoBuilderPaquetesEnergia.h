// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderPaquetesEnergia.h"
#include "ConcretoBuilderPaquetesEnergia.generated.h"

UCLASS()
class BUILDER_PATTERN_2_API AConcretoBuilderPaquetesEnergia : public AActor, public IIBuilderPaquetesEnergia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoBuilderPaquetesEnergia();

public:
	UPROPERTY(VisibleAnywhere, Category="PaquetesEnergia")
	class AConcretoPaquetesEnergia* PaqueteEnergia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void BuildPaqueteEnergia1() override;
	void BuildPaqueteEnergia2() override;
	void BuildPaqueteEnergia3() override;

};
