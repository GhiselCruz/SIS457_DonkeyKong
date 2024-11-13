// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS457_DonkeyKongGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "EscudoDecorador.h"
#include "DisparoDecorador.h"
#include "VidasEnemigoObserver.h"
#include "Enemigo.h"

ASIS457_DonkeyKongGameMode::ASIS457_DonkeyKongGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ASIS457_DonkeyKongGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	observer = GetWorld()->SpawnActor<AVidasEnemigoObserver>(AVidasEnemigoObserver::StaticClass());
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, 300.0f, 150.0f), FRotator::ZeroRotator);
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, -300.0f, 350.0f), FRotator::ZeroRotator);
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, 500.0f, 400.0f), FRotator::ZeroRotator);

	enemigo->EstablecerObserver(observer);
	observer->EstablecerAccion("Quitavida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("QuitaVida");

}

void ASIS457_DonkeyKongGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


