// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::Ktx);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Ktx*, "", "OVRPlugin/Ktx");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Ktx
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::Ktx : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x85675C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::Ktx* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPlugin::Ktx::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::Ktx*, creationType>()));
    }
    // static public System.IntPtr LoadKtxFromMemory(System.IntPtr dataPtr, System.UInt32 length)
    // Offset: 0x855BCC
    static ::System::IntPtr LoadKtxFromMemory(::System::IntPtr dataPtr, uint length);
    // static public System.UInt32 GetKtxTextureWidth(System.IntPtr texture)
    // Offset: 0x855D8C
    static uint GetKtxTextureWidth(::System::IntPtr texture);
    // static public System.UInt32 GetKtxTextureHeight(System.IntPtr texture)
    // Offset: 0x855F30
    static uint GetKtxTextureHeight(::System::IntPtr texture);
    // static public System.Boolean TranscodeKtxTexture(System.IntPtr texture, System.UInt32 format)
    // Offset: 0x8560D4
    static bool TranscodeKtxTexture(::System::IntPtr texture, uint format);
    // static public System.UInt32 GetKtxTextureSize(System.IntPtr texture)
    // Offset: 0x856278
    static uint GetKtxTextureSize(::System::IntPtr texture);
    // static public System.Boolean GetKtxTextureData(System.IntPtr texture, System.IntPtr textureData, System.UInt32 bufferSize)
    // Offset: 0x85641C
    static bool GetKtxTextureData(::System::IntPtr texture, ::System::IntPtr textureData, uint bufferSize);
    // static public System.Boolean DestroyKtxTexture(System.IntPtr texture)
    // Offset: 0x8565C8
    static bool DestroyKtxTexture(::System::IntPtr texture);
  }; // OVRPlugin/Ktx
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::LoadKtxFromMemory
// Il2CppName: LoadKtxFromMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint)>(&GlobalNamespace::OVRPlugin::Ktx::LoadKtxFromMemory)> {
  static const MethodInfo* get() {
    static auto* dataPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "LoadKtxFromMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataPtr, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureWidth
// Il2CppName: GetKtxTextureWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::System::IntPtr)>(&GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureWidth)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "GetKtxTextureWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureHeight
// Il2CppName: GetKtxTextureHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::System::IntPtr)>(&GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureHeight)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "GetKtxTextureHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::TranscodeKtxTexture
// Il2CppName: TranscodeKtxTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, uint)>(&GlobalNamespace::OVRPlugin::Ktx::TranscodeKtxTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "TranscodeKtxTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, format});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureSize
// Il2CppName: GetKtxTextureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::System::IntPtr)>(&GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureSize)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "GetKtxTextureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureData
// Il2CppName: GetKtxTextureData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, uint)>(&GlobalNamespace::OVRPlugin::Ktx::GetKtxTextureData)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* textureData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "GetKtxTextureData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, textureData, bufferSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Ktx::DestroyKtxTexture
// Il2CppName: DestroyKtxTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&GlobalNamespace::OVRPlugin::Ktx::DestroyKtxTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Ktx*), "DestroyKtxTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
