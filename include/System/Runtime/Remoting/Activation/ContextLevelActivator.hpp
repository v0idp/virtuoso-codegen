// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: ContextLevelActivator
  class ContextLevelActivator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ContextLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ContextLevelActivator*, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.ContextLevelActivator
  // [TokenAttribute] Offset: FFFFFFFF
  class ContextLevelActivator : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Activation::IActivator*/ {
    public:
    public:
    // private System.Runtime.Remoting.Activation.IActivator m_NextActivator
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Activation::IActivator* m_NextActivator;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Activation::IActivator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Activation::IActivator
    operator ::System::Runtime::Remoting::Activation::IActivator() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::Remoting::Activation::IActivator*
    constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() const noexcept {
      return m_NextActivator;
    }
    // Get instance field reference: private System.Runtime.Remoting.Activation.IActivator m_NextActivator
    [[deprecated]] ::System::Runtime::Remoting::Activation::IActivator*& dyn_m_NextActivator();
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0xE44FA4
    ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Void .ctor(System.Runtime.Remoting.Activation.IActivator next)
    // Offset: 0xE44F78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextLevelActivator* New_ctor(::System::Runtime::Remoting::Activation::IActivator* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Activation::ContextLevelActivator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextLevelActivator*, creationType>(next)));
    }
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0xE44FAC
    ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
  }; // System.Runtime.Remoting.Activation.ContextLevelActivator
  #pragma pack(pop)
  static check_size<sizeof(ContextLevelActivator), 16 + sizeof(::System::Runtime::Remoting::Activation::IActivator*)> __System_Runtime_Remoting_Activation_ContextLevelActivatorSizeCheck;
  static_assert(sizeof(ContextLevelActivator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator
// Il2CppName: get_NextActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::ContextLevelActivator::*)()>(&System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ContextLevelActivator*), "get_NextActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ContextLevelActivator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ContextLevelActivator::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (System::Runtime::Remoting::Activation::ContextLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::ContextLevelActivator::Activate)> {
  static const MethodInfo* get() {
    static auto* ctorCall = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ContextLevelActivator*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctorCall});
  }
};
