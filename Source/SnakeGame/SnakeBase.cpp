// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "SnakeElementBase.h"
#include "Interactable.h"

// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementsSize = 100.f;
	MovementSpeed = 10.f; 
	LastMoveDirection = EMovementDirection::UP; 
}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(MovementSpeed);
	AddSnakeElement(4);

}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();

}

void ASnakeBase::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; ++i)
	{
		FVector NewLocation(SnakeElements.Num() * ElementsSize, 0, 0);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElem->SnakeOwner = this; 
		int32 ElemIndex = SnakeElements.Add(NewSnakeElem);
		if (ElemIndex == 0)
		{			
			NewSnakeElem->SetFirstElementType();
			
		}
	}
}
void ASnakeBase::Move()
{
	FVector MovementVector(ForceInitToZero);

	switch (LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += ElementsSize;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= ElementsSize;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y += ElementsSize;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y -= ElementsSize;
		break;
	}

	//AddActorWorldOffset(MovementVector); 
	SnakeElements[0]->ToggleCollision();

	for (int i = SnakeElements.Num() - 1; i > 0; i--)
	{
		auto CurrentElement = SnakeElements[i];
		auto PrevElemnt = SnakeElements[i - 1];
		FVector PrevLocation = PrevElemnt->GetActorLocation();
		CurrentElement->SetActorLocation(PrevLocation);
	}

	if (SnakeElements.IsValidIndex(0))
	{
		SnakeElements[0]->AddActorWorldOffset(MovementVector);
	}

	if (SnakeElements.IsValidIndex(0))
	{
		SnakeElements[0]->ToggleCollision();
	}
	
}

void ASnakeBase::SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other)
{
	if (IsValid(OverlappedElement))
	{
		int32 ElemIndex;
		SnakeElements.Find(OverlappedElement,ElemIndex);
		bool bIsFirst = ElemIndex == 0;
		IInteractable* InteractableInterface = Cast<IInteractable>(Other);
		if (InteractableInterface)
		{
			InteractableInterface->Interact(this, bIsFirst);
		}
	}
}


