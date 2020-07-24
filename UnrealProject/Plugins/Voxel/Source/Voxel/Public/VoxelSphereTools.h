// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelWorld.h"
#include "VoxelSphereTools.generated.h"

/**
 * 
 */
UCLASS()
class VOXEL_API UVoxelSphereTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Voxel World")
		static bool AddSphere(AVoxelWorld* a, FVector b, float f, bool c, bool d, bool e);

	UFUNCTION(BlueprintCallable, Category = "Voxel World")
		static bool RemoveSphere(AVoxelWorld* a, FVector b, float f, bool c, bool d, bool e);
};
