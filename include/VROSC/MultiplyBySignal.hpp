// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IntChanger
#include "VROSC/IntChanger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MultiplyBySignal
  class MultiplyBySignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MultiplyBySignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MultiplyBySignal*, "VROSC", "MultiplyBySignal");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MultiplyBySignal
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplyBySignal : public ::VROSC::IntChanger {
    public:
    // public System.Void .ctor()
    // Offset: 0xACDC3C
    // Implemented from: VROSC.IntChanger
    // Base method: System.Void IntChanger::.ctor()
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplyBySignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MultiplyBySignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplyBySignal*, creationType>()));
    }
    // protected override System.Void SetValueBySignal(VROSC.Signal signal)
    // Offset: 0xACDBE4
    // Implemented from: VROSC.IntChanger
    // Base method: System.Void IntChanger::SetValueBySignal(VROSC.Signal signal)
    void SetValueBySignal(::VROSC::Signal* signal);
  }; // VROSC.MultiplyBySignal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MultiplyBySignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MultiplyBySignal::SetValueBySignal
// Il2CppName: SetValueBySignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MultiplyBySignal::*)(::VROSC::Signal*)>(&VROSC::MultiplyBySignal::SetValueBySignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MultiplyBySignal*), "SetValueBySignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
