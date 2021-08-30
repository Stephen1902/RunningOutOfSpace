// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BagMaster.generated.h"

UCLASS()
class RUNNINGOUTOFSPACE_API ABagMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABagMaster();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bag Setup")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bag Setup")
	class UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bag Setup")
	class UArrowComponent* GrabPointComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
