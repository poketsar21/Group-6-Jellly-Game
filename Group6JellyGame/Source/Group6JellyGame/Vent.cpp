// Fill out your copyright notice in the Description page of Project Settings.


#include "Vent.h"
#include "Components/boxComponent.h"

// Sets default values
AVent::AVent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ColllisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	ColllisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	ColllisionBox->SetCollisionProfileName("Trigger");
	RootComponent = ColllisionBox;

}

// Called when the game starts or when spawned
void AVent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

