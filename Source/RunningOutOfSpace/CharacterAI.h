// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterAI.generated.h"

UCLASS()
class RUNNINGOUTOFSPACE_API ACharacterAI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterAI();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI Bag")
	TSubclassOf<class ABagMaster> BagToCollect;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
