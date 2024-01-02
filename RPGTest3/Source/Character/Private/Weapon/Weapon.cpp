// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Weapon.h"

#include "Character/RPGCharacter.h"
#include "StateMachines/WeaponStates/States/ActivatedWeapon.h"
#include "StateMachines/WeaponStates/States/DeactivatedWeapon.h"

void AWeapon::ActiveWeapon(float TimeActivation)
{
	CanCollide = true;
	GetWorld()->GetTimerManager().ClearTimer(ActivationTimerHandle);
	SetState(NewObject<UActivatedWeapon>());
	GetWorld()->GetTimerManager().SetTimer(ActivationTimerHandle, this, &AWeapon::DeactiveWeapon, TimeActivation, false);
}

void AWeapon::DeactiveWeapon()
{
	CanCollide = false;
	SetState(NewObject<UDeactivatedWeapon>());
}

void AWeapon::InitTeam(ETeam _Team)
{
	Team=_Team;
}

void AWeapon::OnCollision(AActor* OtherCharacter)
{
	if(CanCollide)
	{
		ARPGCharacter* Character = Cast<ARPGCharacter>(OtherCharacter);
		Character->HealthComponent->Damage(Damage);
	}
}

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
	InitMesh();
	FollowerComponent = CreateDefaultSubobject<UFollowerComponent>(TEXT("FollowerComponent"));
}

void AWeapon::SetDamage(int _Damage)
{
	Damage=_Damage;
}

void AWeapon::SetState(UWeaponState* NewState)
{
	if(CurrentState!=nullptr)
	{
		CurrentState->OnExit();
	}
	
	CurrentState = NewState;
	
	CurrentState->OnEnter(this);
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	FollowerComponent->SetDistanceToMaintain(StartDistance);
}

void AWeapon::InitMesh()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		Mesh->SetStaticMesh(CubeMesh.Object);
		Mesh->SetWorldScale3D(FVector(1.f, 1.f, 4.f));
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("/Engine.Material'/Game/Materials/Weapon.Weapon'"));
	if (Material.Succeeded())
	{
		Mesh->SetMaterial(0, Material.Object);
	}
}



