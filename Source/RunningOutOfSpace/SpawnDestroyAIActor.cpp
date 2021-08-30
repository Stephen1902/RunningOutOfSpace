// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnDestroyAIActor.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASpawnDestroyAIActor::ASpawnDestroyAIActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	SetRootComponent(StaticMeshComp);

	ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow Comp"));
	ArrowComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASpawnDestroyAIActor::BeginPlay()
{
	Super::BeginPlay();
	
}

