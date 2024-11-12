// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorBase.h"
#include "DisparoDecorador.generated.h"

/**
 * 
 */
UCLASS()
class SIS457_DONKEYKONG_API ADisparoDecorador : public ADecoradorBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADisparoDecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;
	
};