// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDatabase.generated.h"

/**
 * 
 */
class AItem; 
USTRUCT()
struct FItemData
{
	GENERATED_BODY()
	bool operator==(const FItemData& Other) const
	{
		return ItemName == Other.ItemName;
	}
	UPROPERTY(EditDefaultsOnly)
	FName ItemName;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AItem> Class; 
};

UCLASS()
class UItemUIObject : public UObject
{
	GENERATED_BODY()
public:
	FItemData ItemData; 
};
UCLASS()
class FP_SKI_V2_API UItemDatabase : public UDataAsset
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditDefaultsOnly)
	TArray<FItemData> Items;
	
};
