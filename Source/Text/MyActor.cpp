// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	if (GEngine)
	{
		// 파라미터: (고유Key, 출력시간(초), 글자색, 출력할 문자열)
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Cyan,
			TEXT("Test 모듈 생성"));
	}

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

