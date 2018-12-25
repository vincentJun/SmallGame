// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IPAddress.h"
#include "SocketMgr.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class MATERIAL_API USocketMgr : public UObject
{
	GENERATED_UCLASS_BODY()
	
	
public:

	UFUNCTION(BlueprintCallable, category = "ConnectSocket")
		void ConnectSocket(const FString IPAddress , const int32 Port);

	UFUNCTION(BlueprintCallable, category = "SendMsg")
		void SendMsg(const FString Msg);
	UFUNCTION(BlueprintCallable, category = "RecvMsg")
		TArray<uint8> RecvMsg();



	/*UFUNCTION(BlueprintCallable, category = "GetSocketInstance")
		FSocket* GetSocketInstance() { return LocalSocket };*/


	/*socket property*/
	const FString IP = TEXT("127.0.0.1");
	const uint32 Port = 8081;


private:
	FSocket * LocalSocket;
	
};
