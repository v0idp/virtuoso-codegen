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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticBatcher
  class StaticBatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticBatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatcher*, "", "StaticBatcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: StaticBatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticBatcher : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::StaticBatcher::$Start$d__1
    class $Start$d__1;
    public:
    // private System.Single _delay
    // Size: 0x4
    // Offset: 0x18
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _delay
    [[deprecated("Use field access instead!")]] float& dyn__delay();
    // public System.Void .ctor()
    // Offset: 0x1930CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticBatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticBatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticBatcher*, creationType>()));
    }
    // private System.Collections.IEnumerator Start()
    // Offset: 0x1930AD8
    ::System::Collections::IEnumerator* Start();
    // private System.Void Batch()
    // Offset: 0x1930B44
    void Batch();
  }; // StaticBatcher
  #pragma pack(pop)
  static check_size<sizeof(StaticBatcher), 24 + sizeof(float)> __GlobalNamespace_StaticBatcherSizeCheck;
  static_assert(sizeof(StaticBatcher) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticBatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StaticBatcher::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::StaticBatcher::*)()>(&GlobalNamespace::StaticBatcher::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticBatcher*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticBatcher::Batch
// Il2CppName: Batch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticBatcher::*)()>(&GlobalNamespace::StaticBatcher::Batch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticBatcher*), "Batch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
