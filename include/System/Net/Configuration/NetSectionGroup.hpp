// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationSectionGroup
#include "System/Configuration/ConfigurationSectionGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: NetSectionGroup
  class NetSectionGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::NetSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::NetSectionGroup*, "System.Net.Configuration", "NetSectionGroup");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.NetSectionGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
    public:
    // public System.Void .ctor()
    // Offset: 0xBF75BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSectionGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::NetSectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSectionGroup*, creationType>()));
    }
  }; // System.Net.Configuration.NetSectionGroup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
