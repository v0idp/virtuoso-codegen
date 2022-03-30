// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ObjectEqualityComparer
  class ObjectEqualityComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::ObjectEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::ObjectEqualityComparer*, "System.Collections.Generic", "ObjectEqualityComparer");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.ObjectEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectEqualityComparer : public ::Il2CppObject/*, public ::System::Collections::IEqualityComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEqualityComparer
    operator ::System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Get static field: static readonly System.Collections.Generic.ObjectEqualityComparer Default
    static ::System::Collections::Generic::ObjectEqualityComparer* _get_Default();
    // Set static field: static readonly System.Collections.Generic.ObjectEqualityComparer Default
    static void _set_Default(::System::Collections::Generic::ObjectEqualityComparer* value);
    // static private System.Void .cctor()
    // Offset: 0xFD9DB4
    static void _cctor();
    // private System.Int32 System.Collections.IEqualityComparer.GetHashCode(System.Object obj)
    // Offset: 0xFD9D64
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
    // private System.Boolean System.Collections.IEqualityComparer.Equals(System.Object x, System.Object y)
    // Offset: 0xFD9D84
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // private System.Void .ctor()
    // Offset: 0xFD9D60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ObjectEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectEqualityComparer*, creationType>()));
    }
  }; // System.Collections.Generic.ObjectEqualityComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::ObjectEqualityComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Generic::ObjectEqualityComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ObjectEqualityComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ObjectEqualityComparer::System_Collections_IEqualityComparer_GetHashCode
// Il2CppName: System.Collections.IEqualityComparer.GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::ObjectEqualityComparer::*)(::Il2CppObject*)>(&System::Collections::Generic::ObjectEqualityComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ObjectEqualityComparer*), "System.Collections.IEqualityComparer.GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ObjectEqualityComparer::System_Collections_IEqualityComparer_Equals
// Il2CppName: System.Collections.IEqualityComparer.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::ObjectEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Generic::ObjectEqualityComparer::System_Collections_IEqualityComparer_Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ObjectEqualityComparer*), "System.Collections.IEqualityComparer.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ObjectEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
