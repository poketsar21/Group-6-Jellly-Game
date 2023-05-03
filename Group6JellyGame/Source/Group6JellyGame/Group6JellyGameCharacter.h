// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Group6JellyGameCharacter.generated.h"

UCLASS(config=Game)
class AGroup6JellyGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom2;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	/** Front camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstCamera;
public:
	AGroup6JellyGameCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Camera)
	bool ViewToggle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float NormalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float CrouchSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
	bool IsCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
	bool Changing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
	bool Changing2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float PlayerHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Size)
	float Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Mechanics")
	float minScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Mechanics")
	float maxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Mechanics")
	float setScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
	bool Init;

	FVector currentScale = FVector(1);

protected:

	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	/* called to change the players height for the vents*/
	void ChangeView();

	/* called to change the players height for the vents*/
	void ToggleCrouch();

	/* called to change the players size*/
	UFUNCTION(BlueprintCallable)
	void ScaleAnimation();

	UFUNCTION(BlueprintCallable)
	void initscale();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

