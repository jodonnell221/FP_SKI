// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryEntry.h"
#include "ItemDatabase.h"
#include "InventoryWidget.generated.h"

void UInventoryEntry::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	IUserObjectListEntry::NativeOnListItemObjectSet(ListItemObject);
	UItemUIObject* UIItem = Cast<UItemUIObject>(ListItemObject);
	ItemName->SetText(FText::FromString(UIItem->ItemData.ItemName.ToString())); 
	DropButton->OnClicked.Clear(); 
	DropButton->OnClicked.AddDynamic(this, &UInventoryEntry::DropItem); 

}
void UInventoryEntry::DropItem()
{

}