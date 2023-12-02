// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryEntry.generated.h"
#include "Blueprint/IUserObjectListEntry.h"

/**
 * 
 */
class UTextBlock;
class UButton; 
UCLASS()
class UInventoryEntry : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
public:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override; 
private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName; 
	UPROPERTY(meta = (BindWidget))
	UButton* DropButton;

	UFUNCTION()
	void DropItem(); 

	
};
