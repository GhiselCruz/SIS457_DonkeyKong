// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoDecorador.h"

ADisparoDecorador::ADisparoDecorador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparoDecorador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADisparoDecorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

void ADisparoDecorador::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, FString::Printf(TEXT("Ahora tiene 2 capas")));
}

FString ADisparoDecorador::Estado()
{
	estado = "Estado disparador";
	return Super::Estado() + estado;
}

FString ADisparoDecorador::ObtenerAtributos()
{
	atributos = "Poder disparar";
	return Super::ObtenerAtributos() + atributos;
}

float ADisparoDecorador::Duracion()
{
	return Super::Duracion() + 15.f;

}

