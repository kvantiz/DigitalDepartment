// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalDepartment/Public/MyMapController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMapController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DIGITALDEPARTMENT_API UClass* Z_Construct_UClass_AMyTitle_NoRegister();
DIGITALDEPARTMENT_API UClass* Z_Construct_UClass_UMyMapController();
DIGITALDEPARTMENT_API UClass* Z_Construct_UClass_UMyMapController_NoRegister();
DIGITALDEPARTMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMapRow();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DigitalDepartment();
// End Cross Module References

// Begin ScriptStruct FMapRow
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapRow;
class UScriptStruct* FMapRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapRow, (UObject*)Z_Construct_UPackage__Script_DigitalDepartment(), TEXT("MapRow"));
	}
	return Z_Registration_Info_UScriptStruct_MapRow.OuterSingleton;
}
template<> DIGITALDEPARTMENT_API UScriptStruct* StaticStruct<FMapRow>()
{
	return FMapRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyMapController.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalDepartment,
	nullptr,
	&NewStructOps,
	"MapRow",
	nullptr,
	0,
	sizeof(FMapRow),
	alignof(FMapRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapRow()
{
	if (!Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton, Z_Construct_UScriptStruct_FMapRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapRow.InnerSingleton;
}
// End ScriptStruct FMapRow

// Begin Class UMyMapController
void UMyMapController::StaticRegisterNativesUMyMapController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMapController);
UClass* Z_Construct_UClass_UMyMapController_NoRegister()
{
	return UMyMapController::StaticClass();
}
struct Z_Construct_UClass_UMyMapController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blueprintable, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd Blueprint\n" },
#endif
		{ "IncludePath", "MyMapController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyMapController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blueprintable, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iHeight_MetaData[] = {
		{ "Category", "Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyMapController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iWidth_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/MyMapController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_arrType_MetaData[] = {
		{ "Category", "Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyMapController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_iHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iWidth;
	static const UECodeGen_Private::FClassPropertyParams NewProp_arrType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_arrType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMapController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyMapController_Statics::NewProp_iHeight = { "iHeight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMapController, iHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iHeight_MetaData), NewProp_iHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyMapController_Statics::NewProp_iWidth = { "iWidth", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMapController, iWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iWidth_MetaData), NewProp_iWidth_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyMapController_Statics::NewProp_arrType_Inner = { "arrType", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMyTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyMapController_Statics::NewProp_arrType = { "arrType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMapController, arrType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_arrType_MetaData), NewProp_arrType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMapController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMapController_Statics::NewProp_iHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMapController_Statics::NewProp_iWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMapController_Statics::NewProp_arrType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMapController_Statics::NewProp_arrType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMapController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyMapController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalDepartment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMapController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMapController_Statics::ClassParams = {
	&UMyMapController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyMapController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyMapController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMapController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyMapController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyMapController()
{
	if (!Z_Registration_Info_UClass_UMyMapController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyMapController.OuterSingleton, Z_Construct_UClass_UMyMapController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyMapController.OuterSingleton;
}
template<> DIGITALDEPARTMENT_API UClass* StaticClass<UMyMapController>()
{
	return UMyMapController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMapController);
UMyMapController::~UMyMapController() {}
// End Class UMyMapController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapRow::StaticStruct, Z_Construct_UScriptStruct_FMapRow_Statics::NewStructOps, TEXT("MapRow"), &Z_Registration_Info_UScriptStruct_MapRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapRow), 2925847127U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyMapController, UMyMapController::StaticClass, TEXT("UMyMapController"), &Z_Registration_Info_UClass_UMyMapController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMapController), 4273748531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_3331234353(TEXT("/Script/DigitalDepartment"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyMapController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
