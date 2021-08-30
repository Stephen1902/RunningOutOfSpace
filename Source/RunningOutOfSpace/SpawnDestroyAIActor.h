// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnDestroyAIActor.generated.h"

UCLASS()
class RUNNINGOUTOFSPACE_API ASpawnDestroyAIActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnDestroyAIActor();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI Spawner Destroyer")
	class UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI Spawner Destroyer")
	class UArrowComponent* ArrowComp;

	// Set to true if spawns an AI Character, set to false if it destroys them
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI Spawner Destroyer")
	bool bSpawnsAICharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
