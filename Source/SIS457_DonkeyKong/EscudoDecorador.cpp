// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoDecorador.h"

// Sets default values
AEscudoDecorador::AEscudoDecorador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscudoDecorador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEscudoDecorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscudoDecorador::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Ahora tiene 1 capa")));
}

FString AEscudoDecorador::Estado()
{
	estado = " Protegerse con Escudo";
	return Super::Estado() + estado;
}

FString AEscudoDecorador::ObtenerAtributos()
{
	atributos = " Escudo activo ";
	return Super::ObtenerAtributos() + atributos;
}

float AEscudoDecorador::Duracion()
{
	return Super::Duracion() + 5.f;
}
