// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuatBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DEMOROTATOR_API UQuatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, Category="Quaternions")
		static FQuat SphericalInterpolation(FQuat origin, FQuat target, float alpha);
};
