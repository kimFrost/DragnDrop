// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AllocatableHelpers.generated.h"

/**
 * 
 */
UCLASS()
class DRAGNDROP_API UAllocatableHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	

	//UFUNCTION(BlueprintCallable, Category = "Util|Hex")


	//static void FilterTileArrayByResources(const TArray<UHexTile*>& TargetArray, const TMap<FString, int>& Resources, TArray<UHexTile*>& FilteredArray);

	
	//static void MergeResourceLists(const TMap<FString, int>& From, TMap<FString, int>& To);

	UFUNCTION(BlueprintCallable, Category = "Helpers")
	static TArray<FVector> GetCurveBetweenPoints(const FVector From, const FVector To);
};
