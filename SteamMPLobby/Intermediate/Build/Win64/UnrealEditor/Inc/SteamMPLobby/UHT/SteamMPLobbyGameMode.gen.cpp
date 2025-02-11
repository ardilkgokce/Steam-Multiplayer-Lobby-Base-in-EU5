// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMPLobby/SteamMPLobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMPLobbyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STEAMMPLOBBY_API UClass* Z_Construct_UClass_ASteamMPLobbyGameMode();
STEAMMPLOBBY_API UClass* Z_Construct_UClass_ASteamMPLobbyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamMPLobby();
// End Cross Module References

// Begin Class ASteamMPLobbyGameMode
void ASteamMPLobbyGameMode::StaticRegisterNativesASteamMPLobbyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamMPLobbyGameMode);
UClass* Z_Construct_UClass_ASteamMPLobbyGameMode_NoRegister()
{
	return ASteamMPLobbyGameMode::StaticClass();
}
struct Z_Construct_UClass_ASteamMPLobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamMPLobbyGameMode.h" },
		{ "ModuleRelativePath", "SteamMPLobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamMPLobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamMPLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::ClassParams = {
	&ASteamMPLobbyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteamMPLobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ASteamMPLobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamMPLobbyGameMode.OuterSingleton, Z_Construct_UClass_ASteamMPLobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamMPLobbyGameMode.OuterSingleton;
}
template<> STEAMMPLOBBY_API UClass* StaticClass<ASteamMPLobbyGameMode>()
{
	return ASteamMPLobbyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamMPLobbyGameMode);
ASteamMPLobbyGameMode::~ASteamMPLobbyGameMode() {}
// End Class ASteamMPLobbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ardil_Desktop_UE_Projects_Steam_Multiplayer_Lobby_Base_in_EU5_SteamMPLobby_Source_SteamMPLobby_SteamMPLobbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamMPLobbyGameMode, ASteamMPLobbyGameMode::StaticClass, TEXT("ASteamMPLobbyGameMode"), &Z_Registration_Info_UClass_ASteamMPLobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamMPLobbyGameMode), 247061484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ardil_Desktop_UE_Projects_Steam_Multiplayer_Lobby_Base_in_EU5_SteamMPLobby_Source_SteamMPLobby_SteamMPLobbyGameMode_h_3758488070(TEXT("/Script/SteamMPLobby"),
	Z_CompiledInDeferFile_FID_Users_ardil_Desktop_UE_Projects_Steam_Multiplayer_Lobby_Base_in_EU5_SteamMPLobby_Source_SteamMPLobby_SteamMPLobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ardil_Desktop_UE_Projects_Steam_Multiplayer_Lobby_Base_in_EU5_SteamMPLobby_Source_SteamMPLobby_SteamMPLobbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
