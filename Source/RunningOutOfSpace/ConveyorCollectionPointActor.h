// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConveyorCollectionPointActor.generated.h"

UCLASS()
class RUNNINGOUTOFSPACE_API AConveyorCollectionPointActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConveyorCollectionPointActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collection Point")
	USceneComponent* SceneComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collection Point")
	class UBoxComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collection Point")
	class UArrowComponent* CollectionPointArrow;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collection Point")
	class UArrowComponent* CollectedPointArrow;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collection Point")
	bool bHasBeenAssigned;

	UFUNCTION(BlueprintCallable, Category = "Collection Point")
	bool GetHasBeenAssigned() const { return bHasBeenAssigned; }

	UFUNCTION(BlueprintCallable, Category = "Collection Point")
	void SetHasBeenAssigned(const bool AssignedIn ) { bHasBeenAssigned = AssignedIn; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
