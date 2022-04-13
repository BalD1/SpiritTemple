// Fill out your copyright notice in the Description page of Project Settings.


#include "WindowRelated.h"

// Sets default values
AWindowRelated::AWindowRelated()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWindowRelated::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWindowRelated::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AWindowRelated::GetIsGameWindowFocused() const
{
    if (GetWorld())
    {
        UGameViewportClient* vpClient = GetWorld()->GetGameViewport();
        if (vpClient)
        {
            FViewport* vp = vpClient->Viewport;
            if (vp)
            {
                return vp->IsForegroundWindow();
            }
        }
    }

    return false;
}

