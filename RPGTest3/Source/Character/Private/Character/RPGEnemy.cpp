// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGEnemy.h"

ARPGEnemy::ARPGEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARPGEnemy::InitAttackComponent(UAttackComponent* Component)
{
	AttackComponent = Component;
}

void ARPGEnemy::InitDamage(int Damage)
{
	AttackComponent->SetDamage(Damage);
}

void ARPGEnemy::InitHealth(int Health)
{
	HealthComponent->SetMaxLife(Health);
}



