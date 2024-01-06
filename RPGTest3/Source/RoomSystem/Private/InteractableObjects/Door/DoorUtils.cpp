// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Door/DoorUtils.h"

EDirection UDoorUtils::GetOppositeDirection(EDirection Direction)
{
	switch (Direction)
	{
		case EDirection::Up:
			return EDirection::Down;
		break;

		case EDirection::Right:
			return EDirection::Left;
		break;

		case EDirection::Left:
			return EDirection::Right;
		break;

		case EDirection::Down:
			return EDirection::Up;
		break;

		case EDirection::None:
			return EDirection::None;
	}

	return EDirection::None;
}
