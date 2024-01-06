// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Interactable.h"

AActor* IInteractable::GetOwningActor()
{
	return Cast<AActor>(this);
}
