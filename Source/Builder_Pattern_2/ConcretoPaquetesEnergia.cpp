// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoPaquetesEnergia.h"

// Sets default values
AConcretoPaquetesEnergia::AConcretoPaquetesEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoPaquetesEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConcretoPaquetesEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoPaquetesEnergia::SetPaqueteEnergia1()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Paquete de energia 1")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 50%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 70%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 23%%")), true, FVector2D(1.5f, 1.5f));
}

void AConcretoPaquetesEnergia::SetPaqueteEnergia2()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Paquete de energia 2")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 500%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 100%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 300%%")), true, FVector2D(1.5f, 1.5f));
}

void AConcretoPaquetesEnergia::SetPaqueteEnergia3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Paquete de energia 3")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 1%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 5%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 7%%")), true, FVector2D(1.5f, 1.5f));
}

