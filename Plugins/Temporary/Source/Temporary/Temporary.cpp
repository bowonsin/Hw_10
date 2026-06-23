#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("Temporary 플러그인 로드 완료!"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("Temporary 플러그인 언로드 완료!"));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary)