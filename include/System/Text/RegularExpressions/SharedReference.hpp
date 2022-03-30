// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: SharedReference
  class SharedReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::SharedReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::SharedReference*, "System.Text.RegularExpressions", "SharedReference");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.SharedReference
  // [TokenAttribute] Offset: FFFFFFFF
  class SharedReference : public ::Il2CppObject {
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
    // private System.WeakReference _ref
    // Size: 0x8
    // Offset: 0x10
    ::System::WeakReference* ref;
    // Field size check
    static_assert(sizeof(::System::WeakReference*) == 0x8);
    // private System.Int32 _locked
    // Size: 0x4
    // Offset: 0x18
    int locked;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.WeakReference _ref
    ::System::WeakReference*& dyn__ref();
    // Get instance field reference: private System.Int32 _locked
    int& dyn__locked();
    // System.Object Get()
    // Offset: 0x948938
    ::Il2CppObject* Get();
    // System.Void Cache(System.Object obj)
    // Offset: 0x948990
    void Cache(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x9489F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::SharedReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedReference*, creationType>()));
    }
  }; // System.Text.RegularExpressions.SharedReference
  #pragma pack(pop)
  static check_size<sizeof(SharedReference), 24 + sizeof(int)> __System_Text_RegularExpressions_SharedReferenceSizeCheck;
  static_assert(sizeof(SharedReference) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::SharedReference::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::SharedReference::*)()>(&System::Text::RegularExpressions::SharedReference::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::SharedReference*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::SharedReference::Cache
// Il2CppName: Cache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::SharedReference::*)(::Il2CppObject*)>(&System::Text::RegularExpressions::SharedReference::Cache)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::SharedReference*), "Cache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::SharedReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
