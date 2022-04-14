// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::SortedList::SortedListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList::SortedListEnumerator*, "System.Collections", "SortedList/SortedListEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/System.Collections.SortedListEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class SortedList::SortedListEnumerator : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.Collections.SortedList sortedList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::SortedList* sortedList;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList*) == 0x8);
    // private System.Object key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object value
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 startIndex
    // Size: 0x4
    // Offset: 0x2C
    int startIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endIndex
    // Size: 0x4
    // Offset: 0x30
    int endIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x34
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean current
    // Size: 0x1
    // Offset: 0x38
    bool current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: current and: getObjectRetType
    char __padding7[0x3] = {};
    // private System.Int32 getObjectRetType
    // Size: 0x4
    // Offset: 0x3C
    int getObjectRetType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.SortedList sortedList
    [[deprecated]] ::System::Collections::SortedList*& dyn_sortedList();
    // Get instance field reference: private System.Object key
    [[deprecated]] ::Il2CppObject*& dyn_key();
    // Get instance field reference: private System.Object value
    [[deprecated]] ::Il2CppObject*& dyn_value();
    // Get instance field reference: private System.Int32 index
    [[deprecated]] int& dyn_index();
    // Get instance field reference: private System.Int32 startIndex
    [[deprecated]] int& dyn_startIndex();
    // Get instance field reference: private System.Int32 endIndex
    [[deprecated]] int& dyn_endIndex();
    // Get instance field reference: private System.Int32 version
    [[deprecated]] int& dyn_version();
    // Get instance field reference: private System.Boolean current
    [[deprecated]] bool& dyn_current();
    // Get instance field reference: private System.Int32 getObjectRetType
    [[deprecated]] int& dyn_getObjectRetType();
    // public System.Object get_Key()
    // Offset: 0xE59B80
    ::Il2CppObject* get_Key();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0xE59D20
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Current()
    // Offset: 0xE59DD8
    ::Il2CppObject* get_Current();
    // public System.Object get_Value()
    // Offset: 0xE59EC8
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Collections.SortedList sortedList, System.Int32 index, System.Int32 count, System.Int32 getObjRetType)
    // Offset: 0xE59978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::SortedListEnumerator* New_ctor(::System::Collections::SortedList* sortedList, int index, int count, int getObjRetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::SortedListEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::SortedListEnumerator*, creationType>(sortedList, index, count, getObjRetType)));
    }
    // public System.Object Clone()
    // Offset: 0xE59B78
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0xE59C1C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0xE59F64
    void Reset();
  }; // System.Collections.SortedList/System.Collections.SortedListEnumerator
  #pragma pack(pop)
  static check_size<sizeof(SortedList::SortedListEnumerator), 60 + sizeof(int)> __System_Collections_SortedList_SortedListEnumeratorSizeCheck;
  static_assert(sizeof(SortedList::SortedListEnumerator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::SortedListEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::SortedListEnumerator::*)()>(&System::Collections::SortedList::SortedListEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::SortedListEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
