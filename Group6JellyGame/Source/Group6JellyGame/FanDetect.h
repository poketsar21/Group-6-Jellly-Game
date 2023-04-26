// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "FanDetect.generated.h"


UCLASS()
class GROUP6JELLYGAME_API AFanDetect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFanDetect();

	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultRoot = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float RangeX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float RangeY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float RangeZ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float DistBetweenLines;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
