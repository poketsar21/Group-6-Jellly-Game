// Fill out your copyright notice in the Description page of Project Settings.


#include "FanDetect.h"
#include "Components/BoxComponent.h"


// Sets default values
AFanDetect::AFanDetect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	SetRootComponent(DefaultRoot);

	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("Collision Mesh"));
	CollisionMesh->SetupAttachment(DefaultRoot);

	RangeX = 100;
	RangeY = 100;
	RangeZ = 800;


}

// Called when the game starts or when spawned
void AFanDetect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFanDetect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

