// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.IChannelInfo
#include "System/Runtime/Remoting/IChannelInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelInfo
  class ChannelInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::ChannelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ChannelInfo*, "System.Runtime.Remoting", "ChannelInfo");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ChannelInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ChannelInfo : public ::Il2CppObject/*, public ::System::Runtime::Remoting::IChannelInfo*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Object[] channelData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> channelData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::IChannelInfo
    operator ::System::Runtime::Remoting::IChannelInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::IChannelInfo*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Il2CppObject*>
    constexpr operator ::ArrayW<::Il2CppObject*>() const noexcept {
      return channelData;
    }
    // Get instance field reference: private System.Object[] channelData
    ::ArrayW<::Il2CppObject*>& dyn_channelData();
    // public System.Object[] get_ChannelData()
    // Offset: 0xCD8A64
    ::ArrayW<::Il2CppObject*> get_ChannelData();
    // public System.Void .ctor(System.Object remoteChannelData)
    // Offset: 0xCD89B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelInfo* New_ctor(::Il2CppObject* remoteChannelData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::ChannelInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelInfo*, creationType>(remoteChannelData)));
    }
    // public System.Void .ctor()
    // Offset: 0xCD84F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::ChannelInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelInfo*, creationType>()));
    }
  }; // System.Runtime.Remoting.ChannelInfo
  #pragma pack(pop)
  static check_size<sizeof(ChannelInfo), 16 + sizeof(::ArrayW<::Il2CppObject*>)> __System_Runtime_Remoting_ChannelInfoSizeCheck;
  static_assert(sizeof(ChannelInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::get_ChannelData
// Il2CppName: get_ChannelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::ChannelInfo::*)()>(&System::Runtime::Remoting::ChannelInfo::get_ChannelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelInfo*), "get_ChannelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!