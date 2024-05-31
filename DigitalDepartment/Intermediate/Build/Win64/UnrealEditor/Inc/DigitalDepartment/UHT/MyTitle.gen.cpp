// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitalDepartment/Public/MyTitle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTitle() {}

// Begin Cross Module References
DIGITALDEPARTMENT_API UClass* Z_Construct_UClass_AMyTitle();
DIGITALDEPARTMENT_API UClass* Z_Construct_UClass_AMyTitle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DigitalDepartment();
// End Cross Module References

// Begin Class AMyTitle
void AMyTitle::StaticRegisterNativesAMyTitle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTitle);
UClass* Z_Construct_UClass_AMyTitle_NoRegister()
{
	return AMyTitle::StaticClass();
}
struct Z_Construct_UClass_AMyTitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTitle.h" },
		{ "ModuleRelativePath", "Public/MyTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlock_MetaData[] = {
		{ "Category", "Move" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyTitle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iCost_MetaData[] = {
		{ "Category", "Move" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyTitle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsBlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlock;
	static const UECodeGen_Private::FBytePropertyParams NewProp_iCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTitle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMyTitle_Statics::NewProp_bIsBlock_SetBit(void* Obj)
{
	((AMyTitle*)Obj)->bIsBlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyTitle_Statics::NewProp_bIsBlock = { "bIsBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyTitle), &Z_Construct_UClass_AMyTitle_Statics::NewProp_bIsBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlock_MetaData), NewProp_bIsBlock_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyTitle_Statics::NewProp_iCost = { "iCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTitle, iCost), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iCost_MetaData), NewProp_iCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTitle_Statics::NewProp_bIsBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTitle_Statics::NewProp_iCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTitle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyTitle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DigitalDepartment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTitle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTitle_Statics::ClassParams = {
	&AMyTitle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyTitle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyTitle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTitle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTitle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTitle()
{
	if (!Z_Registration_Info_UClass_AMyTitle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTitle.OuterSingleton, Z_Construct_UClass_AMyTitle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTitle.OuterSingleton;
}
template<> DIGITALDEPARTMENT_API UClass* StaticClass<AMyTitle>()
{
	return AMyTitle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTitle);
AMyTitle::~AMyTitle() {}
// End Class AMyTitle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyTitle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTitle, AMyTitle::StaticClass, TEXT("AMyTitle"), &Z_Registration_Info_UClass_AMyTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTitle), 3840004285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyTitle_h_3245887104(TEXT("/Script/DigitalDepartment"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyTitle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DigitalDepartment_Source_DigitalDepartment_Public_MyTitle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
