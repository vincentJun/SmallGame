// Fill out your copyright notice in the Description page of Project Settings.

#include "SocketMgr.h"
#include "SocketSubsystem.h"
#include "Sockets.h"

#include "UnrealNames.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "UnrealMathUtility.h"



USocketMgr::USocketMgr(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void USocketMgr::ConnectSocket(const FString IPAddress, const int32 Port)
{
	//about use NAME_DGram with NAME_Stream , if tcp use NAME_Stream and use recv function,otherwise UDP use  NAME_DGram and use recvFrom function
	LocalSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	if (LocalSocket)
	{
		//not deal ip address 
		FIPv4Address GetIP (127,0,0,1);
		TSharedPtr<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		addr->SetIp(GetIP.Value);
		addr->SetPort(Port);

		if (LocalSocket->Connect(*addr))
		{
			UE_LOG(LogClass , Log , TEXT("socket connect successful"));
		}
		else
		{
			UE_LOG(LogClass, Log, TEXT("please check ip and port"));
		}
	}
}

void USocketMgr::SendMsg(const FString Msg)
{
	if (LocalSocket)
	{
		int32 sent;
		bool bSend = LocalSocket->Send((uint8*)TCHAR_TO_UTF8( Msg.GetCharArray().GetData()), FCString::Strlen(Msg.GetCharArray().GetData()), sent);
		if (bSend)
		{
			UE_LOG(LogClass, Log, TEXT("send msg successful"));
		}
		else
		{
			UE_LOG(LogClass, Log, TEXT("send msg failed"));
		}
	}
}

TArray<uint8> USocketMgr::RecvMsg()
{
	TArray<uint8> ReceivedData;
	ReceivedData.Empty();
	//int32 Size;
	int32 Read = 0;
	//ReceivedData.Init(FMath::Min(Size, 65507u),100000);
	if (LocalSocket)
	{
		bool bRecv = LocalSocket->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);
		if (bRecv)
		{
			UE_LOG(LogClass, Log, TEXT("Recv msg successful"));
			return ReceivedData;
		}
		else
		{
			UE_LOG(LogClass, Log, TEXT("Recv msg failed"));
			return ReceivedData;
		}

	}
	return ReceivedData;
}

