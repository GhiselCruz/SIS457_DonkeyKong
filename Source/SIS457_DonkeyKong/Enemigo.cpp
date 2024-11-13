// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "VidasEnemigoObserver.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include  "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));  // Ejemplo con una esfera
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetStaticMesh(Mesh.Object);
	RootComponent = StaticMeshComp;

	colision = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
	colision->SetupAttachment(RootComponent);
	colision->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo::OnOverlapBegin);

	// Crear componente de colisión
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->InitSphereRadius(110.0f);
	SphereComponent->SetCollisionProfileName(TEXT("Trigger"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo::OnOverlapBegin);

	VidasEnemigo = 3;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("El enemigo tiene %d vidas"), GetVidasEnemigo()));
	
}

void AEnemigo::MallaColision(AActor* OtherActor)
{
	// Mostrar mensaje de colisión en los logs
	UE_LOG(LogTemp, Warning, TEXT("¡Colisión detectada!"));

	// Reducir vida al colisionar
	SetVidasEnemigo(1);

	// Verificar si la vida llegó a 0
	if (VidasEnemigo == 0)
	{
		// Destruir al enemigo si la vida llega a 0
		Destroyed();
	}
}

void AEnemigo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		// Mostrar mensaje de colisión en los logs
		UE_LOG(LogTemp, Warning, TEXT("¡Colisión detectada!"));

		// Reducir vida al colisionar
		SetVidasEnemigo(1);

		// Verificar si la vida llegó a 0
		if (VidasEnemigo == 0)
		{
			// Destruir al enemigo si la vida llega a 0
			Destroyed();
		}
	}
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetVidasEnemigo() == 0) {
		Destroyed();
	}

}

void AEnemigo::EstablecerObserver(AVidasEnemigoObserver* _observer)
{
	observer = _observer;
	observer->Suscribirse(this);
}

void AEnemigo::Actualizar(APublicador* _publicador)
{
	Actuar();
}

void AEnemigo::Actuar()
{
	FString mensaje_recibido = observer->GetMensaje();
	if (mensaje_recibido.Equals("QuitarVida"))
	{
		SetVidasEnemigo(1);
	}
}

void AEnemigo::SetVidasEnemigo(int32 _vidas)
{
	VidasEnemigo -= _vidas;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("El enemigo tiene %d vidas"), GetVidasEnemigo()));
}

void AEnemigo::Destroyed()
{
	if (VidasEnemigo == 0)
	{
		// Destruir al enemigo si la vida llega a 0
		Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("El enemigo ya no tiene vidas, fue destruido")));
	}
}


