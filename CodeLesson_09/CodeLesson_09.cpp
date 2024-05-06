//Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <GameFramework/Actor.h>
#include <ExampleActor.generated.h>

ENUM(BlueprintType)
enum class EExample
{
	E_RED   UMETA(DisplayName="RED"),
	E_GREEN UMETA(DisplayName = "GREEN"),
	E_BLUE  UMETA(DisplayName = "BLUE")
};

UCLASS()
class EXAMPLE_API AExampleActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AExampleActor(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	EExample ExampleEnumValue;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};