// Fill out your copyright notice in the Description page of Project Settings.

#include "AllocatableHelpers.h"



/*
TArray<FVector> UAllocatableHelpers::GetHexesWithFloodFill(FVector StartPosition, const TArray<FVector>& Obstacles, int32 Range)
{

}
*/

/*
void UPOTLUtilFunctionLibrary::MergeResourceLists(const TMap<FString, int>& From, TMap<FString, int>& To)
{

}
*/

TArray<FVector> UAllocatableHelpers::GetCurveBetweenPoints(const FVector From, const FVector To)
{
	FVector ControlPoints[4];
	//TArray<FVector> ControlPoints = TArray<FVector>();
	TArray<FVector> OutPoints = TArray<FVector>();

	ControlPoints[0] = From;
	ControlPoints[1] = From + FVector(100, 0, 0);
	ControlPoints[2] = To + FVector(-100, 0, 0);
	ControlPoints[3] = To;

	FVector::EvaluateBezier(ControlPoints, 20, OutPoints);
	return OutPoints;
}
