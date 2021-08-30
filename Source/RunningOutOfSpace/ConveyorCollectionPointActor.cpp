// Fill out your copyright notice in the Description page of Project Settings.


#include "ConveyorCollectionPointActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AConveyorCollectionPointActor::AConveyorCollectionPointActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(SceneComp);
	
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Comp"));
	CollisionComp->SetupAttachment(SceneComp);
	CollisionComp->SetBoxExtent(FVector(64.f, 128.f, 32.f));

	CollectionPointArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Collection Point Arrow"));
	CollectionPointArrow->SetupAttachment(CollisionComp);
	CollectionPointArrow->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));

	CollectedPointArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Collected Point Arrow"));
	CollectedPointArrow->SetupAttachment(CollisionComp);
	CollectedPointArrow->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));

	bHasBeenAssigned = false;
}

// Called when the game starts or when spawned
void AConveyorCollectionPointActor::BeginPlay()
{
	Super::BeginPlay();
	
}
