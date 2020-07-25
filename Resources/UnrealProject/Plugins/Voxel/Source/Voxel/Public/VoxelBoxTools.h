// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelWorld.h"
#include "IntBox.h"
#include "VoxelBoxTools.generated.h"

/**
 * 
 */
UCLASS()
class VOXEL_API UVoxelBoxTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Voxel World")
		static bool AddBox(AVoxelWorld* World, FIntBox Bounds, bool c, bool d);

	UFUNCTION(BlueprintCallable, Category = "Voxel World")
		static bool RemoveBox(AVoxelWorld* World, FIntBox Bounds, bool c, bool d);
};
