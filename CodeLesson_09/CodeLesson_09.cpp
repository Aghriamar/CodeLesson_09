//Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <GameFramework/Actor.h>
#include <ExampleActor.generated.h>

ENUM(BlueprintType)
enum class EExample : uint8
{
	E_RED   UMETA(DisplayName="RED"),
	E_GREEN UMETA(DisplayName = "GREEN"),
	E_BLUE  UMETA(DisplayName = "BLUE")
};

USTRUCT()
struct FMyData
{
	GENERATED_BODY()
	
	UPROPERTY()
	EExample EnumValue;
	UPROPERTY()
	int32 IntValue;
	UPROPERTY()
	FString StringValue;
	UPROPERTY()
	AActor* ActorPtr;

	FMyData()
	{
		EnumValue	= EExample::E_RED;
		IntValue	= 10;
		StringValue = TEXT("MyString");
		ActorPtr	= nullptr;
	}
};

UCLASS()
class EXAMPLE_API AExampleActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AExampleActor(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly)
	EExample ExampleEnumValue;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};