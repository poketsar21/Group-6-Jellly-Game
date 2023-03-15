// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vent.generated.h"

UCLASS()
class GROUP6JELLYGAME_API AVent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVent();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* ColllisionBox;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION()
		//void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweeepResult);

	//UFUNCTION()
		//void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
