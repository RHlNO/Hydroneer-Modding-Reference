// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IntBox.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct VOXEL_API FIntBox
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FIntVector Min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FIntVector Max;



};

