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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WASDMove
  class WASDMove;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WASDMove);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WASDMove*, "", "WASDMove");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: WASDMove
  // [TokenAttribute] Offset: FFFFFFFF
  class WASDMove : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _movementSpeed
    // Size: 0x4
    // Offset: 0x18
    float movementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _movementSpeed
    [[deprecated]] float& dyn__movementSpeed();
    // protected System.Void Update()
    // Offset: 0x94FA38
    void Update();
    // public System.Void .ctor()
    // Offset: 0x94FC68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WASDMove* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WASDMove::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WASDMove*, creationType>()));
    }
  }; // WASDMove
  #pragma pack(pop)
  static check_size<sizeof(WASDMove), 24 + sizeof(float)> __GlobalNamespace_WASDMoveSizeCheck;
  static_assert(sizeof(WASDMove) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WASDMove::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WASDMove::*)()>(&GlobalNamespace::WASDMove::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WASDMove*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WASDMove::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
