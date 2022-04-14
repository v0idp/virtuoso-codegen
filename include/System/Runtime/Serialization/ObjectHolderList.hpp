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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
  // Forward declaring type: ObjectHolderListEnumerator
  class ObjectHolderListEnumerator;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolderList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolderList*, "System.Runtime.Serialization", "ObjectHolderList");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectHolderList
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectHolderList : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Serialization.ObjectHolder[] m_values
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Runtime::Serialization::ObjectHolder*> m_values;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Serialization::ObjectHolder*>) == 0x8);
    // System.Int32 m_count
    // Size: 0x4
    // Offset: 0x18
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Runtime.Serialization.ObjectHolder[] m_values
    [[deprecated]] ::ArrayW<::System::Runtime::Serialization::ObjectHolder*>& dyn_m_values();
    // Get instance field reference: System.Int32 m_count
    [[deprecated]] int& dyn_m_count();
    // System.Int32 get_Version()
    // Offset: 0x146DD28
    int get_Version();
    // System.Int32 get_Count()
    // Offset: 0x146DD30
    int get_Count();
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0x146DAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolderList* New_ctor(int startingSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::ObjectHolderList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolderList*, creationType>(startingSize)));
    }
    // System.Void Add(System.Runtime.Serialization.ObjectHolder value)
    // Offset: 0x146DB50
    void Add(::System::Runtime::Serialization::ObjectHolder* value);
    // System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
    // Offset: 0x146DC90
    ::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator();
    // private System.Void EnlargeArray()
    // Offset: 0x146DC04
    void EnlargeArray();
    // System.Void .ctor()
    // Offset: 0x146DAE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolderList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::ObjectHolderList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolderList*, creationType>()));
    }
  }; // System.Runtime.Serialization.ObjectHolderList
  #pragma pack(pop)
  static check_size<sizeof(ObjectHolderList), 24 + sizeof(int)> __System_Runtime_Serialization_ObjectHolderListSizeCheck;
  static_assert(sizeof(ObjectHolderList) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::ObjectHolderList::*)()>(&System::Runtime::Serialization::ObjectHolderList::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderList*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::ObjectHolderList::*)()>(&System::Runtime::Serialization::ObjectHolderList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectHolderList::*)(::System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectHolderList::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::GetFixupEnumerator
// Il2CppName: GetFixupEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolderListEnumerator* (System::Runtime::Serialization::ObjectHolderList::*)()>(&System::Runtime::Serialization::ObjectHolderList::GetFixupEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderList*), "GetFixupEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::EnlargeArray
// Il2CppName: EnlargeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectHolderList::*)()>(&System::Runtime::Serialization::ObjectHolderList::EnlargeArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderList*), "EnlargeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
