// Fill out your copyright notice in the Description page of Project Settings.


#include "BagMaster.h"

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABagMaster::ABagMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	SetRootComponent(MeshComp);
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetMassOverrideInKg(NAME_None, 100.f);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetupAttachment(MeshComp);

	GrabPointComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Grab Point"));
	GrabPointComp->SetupAttachment(MeshComp);
	
}

// Called when the game starts or when spawned
void ABagMaster::BeginPlay()
{
	Super::BeginPlay();
	
}
