// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CameraPawn.generated.h"

UCLASS()
class PROCEDURAL_TABLE_API ACameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*Camera Component Variables*/

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	USpringArmComponent* CameraSpringArm;

	UPROPERTY(EditAnywhere, Category = "Camera Settings:Basics")
	FVector SpringArmLocation;

	UPROPERTY(EditAnywhere, Category = "Camera Settings:Basics")
	FRotator SpringArmRotation;

	UPROPERTY(EditAnywhere, Category = "Camera Settings:Basics")
	float ArmLength;

	UPROPERTY(EditAnywhere,  Category = "Camera Settings:Basics")
	float CameraLagSpeed;

	UPROPERTY(EditAnywhere, Category = "Camera Settings:Basics")
	bool bZoomIn;

	UPROPERTY(EditAnywhere, Category = "Camera Settings:Basics")
	float ZoomFactor;

	UPROPERTY(EditAnywhere, Category = "Movement Settings")
	float MovementUnits;

private:
	/*Input Variables*/
	FVector MovementInput;
	FVector2D CameraInput;

	/*Movement functions*/

	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveUp(float Value);

	/*Axis Rotation functions*/
	// X-Axis Rotation
	void PitchCamera(float Value);
	// Y-Axis Rotation
	void YawCamera(float Value);

	/*Zoom Camera functions*/
	void ZoomIn();
	void ZoomOut();
};
