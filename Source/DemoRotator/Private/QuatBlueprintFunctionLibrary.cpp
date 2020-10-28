// Fill out your copyright notice in the Description page of Project Settings.


#include "QuatBlueprintFunctionLibrary.h"

FQuat UQuatBlueprintFunctionLibrary::SphericalInterpolation(FQuat origin, FQuat target, float alpha) {

	FQuat result;
	result = FQuat::Slerp(origin, target, alpha);
	return result;
}