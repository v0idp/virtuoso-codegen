// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Utilities
namespace Facebook::WitAi::Utilities {
  // Forward declaring type: StringEvent
  class StringEvent;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Utilities
namespace Facebook::WitAi::Utilities {
  // Forward declaring type: FloatToStringEvent
  class FloatToStringEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Utilities::FloatToStringEvent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Utilities::FloatToStringEvent*, "Facebook.WitAi.Utilities", "FloatToStringEvent");
// Type namespace: Facebook.WitAi.Utilities
namespace Facebook::WitAi::Utilities {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Utilities.FloatToStringEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatToStringEvent : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String format
    // Size: 0x8
    // Offset: 0x18
    ::StringW format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Facebook.WitAi.Utilities.StringEvent onFloatToString
    // Size: 0x8
    // Offset: 0x20
    ::Facebook::WitAi::Utilities::StringEvent* onFloatToString;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Utilities::StringEvent*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String format
    [[deprecated]] ::StringW& dyn_format();
    // Get instance field reference: private Facebook.WitAi.Utilities.StringEvent onFloatToString
    [[deprecated]] ::Facebook::WitAi::Utilities::StringEvent*& dyn_onFloatToString();
    // public System.Void ConvertFloatToString(System.Single value)
    // Offset: 0x166EB1C
    void ConvertFloatToString(float value);
    // public System.Void .ctor()
    // Offset: 0x166EBB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatToStringEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Utilities::FloatToStringEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatToStringEvent*, creationType>()));
    }
  }; // Facebook.WitAi.Utilities.FloatToStringEvent
  #pragma pack(pop)
  static check_size<sizeof(FloatToStringEvent), 32 + sizeof(::Facebook::WitAi::Utilities::StringEvent*)> __Facebook_WitAi_Utilities_FloatToStringEventSizeCheck;
  static_assert(sizeof(FloatToStringEvent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Utilities::FloatToStringEvent::ConvertFloatToString
// Il2CppName: ConvertFloatToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Utilities::FloatToStringEvent::*)(float)>(&Facebook::WitAi::Utilities::FloatToStringEvent::ConvertFloatToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Utilities::FloatToStringEvent*), "ConvertFloatToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Utilities::FloatToStringEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
