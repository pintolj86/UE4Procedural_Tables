// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraPawn.h"

// Sets default values
ACameraPawn::ACameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = true;

	/* Components Initialization */
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("UserGameCamera"));
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));

	SpringArmLocation = FVector(0.0f, 0.0f, 50.0f);
	SpringArmRotation = FRotator(-60.0f, 0.0f, 0.0f);
	ArmLength = 400.0f;
	CameraLagSpeed = 3.0f;

	//CameraSpringArm
	CameraSpringArm->SetupAttachment(RootComponent);
	CameraSpringArm->SetRelativeLocationAndRotation(SpringArmLocation, SpringArmRotation);
	CameraSpringArm->bEnableCameraLag = true;
	CameraSpringArm->TargetArmLength = ArmLength;
	CameraSpringArm->CameraLagSpeed = CameraLagSpeed;

	//Camera
	PlayerCamera->SetupAttachment(CameraSpringArm, USpringArmComponent::SocketName);

	CameraInput = FVector2D(0.0f, 0.0f);
	MovementUnits = 450.0f;

	//Possess the Pawn
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ACameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Zoom In handler
	if (bZoomIn)
	{
		//Zoom In half a second
		ZoomFactor += DeltaTime / 0.5f;
	}
	else
	{
		//Zoout out over a quarter of a second.
		ZoomFactor -= DeltaTime / 0.25f;
	}
	ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
	PlayerCamera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
	CameraSpringArm->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, ZoomFactor);

	/* Camera Rotation */

	//Camera Yaw Rotation
	FRotator CameraRotation = GetActorRotation();
	CameraRotation.Yaw += CameraInput.X;
	SetActorRotation(CameraRotation);

	//Camera Pitch Rotation
	CameraRotation = CameraSpringArm->GetComponentRotation();
	CameraRotation.Pitch = FMath::Clamp(CameraRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
	CameraSpringArm->SetWorldRotation(CameraRotation);

	/* Handle axes movement */
	if (!MovementInput.IsZero())
	{
		//Scale  movement input axis values by 100 units per second
		MovementInput = MovementInput.GetSafeNormal() * MovementUnits;
		FVector NewLocation = GetActorLocation();
		NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
		NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
		
		//Apply boundaries upper and lower
		if (NewLocation.Z > 500.0f)
		{
			NewLocation.Z = 499.0f;
		}
		else if (NewLocation.Z < 0.0f)
		{
			NewLocation.Z = 1.0f;
		}
		NewLocation += GetActorUpVector() * MovementInput.Z * DeltaTime;
		
		SetActorLocation(NewLocation);
	}

}

// Called to bind functionality to input
void ACameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Hook up Events
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ACameraPawn::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &ACameraPawn::ZoomOut);

	//Hook up Frame handling for our Axis
	PlayerInputComponent->BindAxis("MoveForward", this, &ACameraPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACameraPawn::MoveRight);
	PlayerInputComponent->BindAxis("MoveUp", this, &ACameraPawn::MoveUp);
	PlayerInputComponent->BindAxis("CameraPitch", this, &ACameraPawn::PitchCamera);
	PlayerInputComponent->BindAxis("CameraYaw", this, &ACameraPawn::YawCamera);
}

void ACameraPawn::MoveForward(float Value)
{
	MovementInput.X = FMath::Clamp<float>(Value, -1.0f, 1.0f);
}

void ACameraPawn::MoveRight(float Value)
{
	MovementInput.Y = FMath::Clamp<float>(Value, -1.0f, 1.0f);
}

void ACameraPawn::MoveUp(float Value)
{
	MovementInput.Z = FMath::Clamp<float>(Value, -1.0f, 1.0f);
}

void ACameraPawn::PitchCamera(float Value)
{
	CameraInput.Y = Value;
}

void ACameraPawn::YawCamera(float Value)
{
	CameraInput.X = Value;
}

void ACameraPawn::ZoomIn()
{
	bZoomIn = true;
}

void ACameraPawn::ZoomOut()
{
	bZoomIn = false;
}
