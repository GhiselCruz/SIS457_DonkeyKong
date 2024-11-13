// Fill out your copyright notice in the Description page of Project Settings.


#include "VidasEnemigoObserver.h"

AVidasEnemigoObserver::AVidasEnemigoObserver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mensaje = " ";
}

void AVidasEnemigoObserver::BeginPlay()
{
	Super::BeginPlay();
}

void AVidasEnemigoObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVidasEnemigoObserver::EstablecerAccion(FString _mensaje)
{
	Mensaje = _mensaje;
	Notificar();
}
