// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
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
NEED_NO_BOX(::System::Collections::Hashtable::HashtableEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable::HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/System.Collections.HashtableEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Hashtable::HashtableEnumerator : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IDictionaryEnumerator*/ {
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
    // private System.Collections.Hashtable hashtable
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Int32 bucket
    // Size: 0x4
    // Offset: 0x18
    int bucket;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean current
    // Size: 0x1
    // Offset: 0x20
    bool current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: current and: getObjectRetType
    char __padding3[0x3] = {};
    // private System.Int32 getObjectRetType
    // Size: 0x4
    // Offset: 0x24
    int getObjectRetType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentKey
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* currentKey;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object currentValue
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* currentValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.Hashtable hashtable
    ::System::Collections::Hashtable*& dyn_hashtable();
    // Get instance field reference: private System.Int32 bucket
    int& dyn_bucket();
    // Get instance field reference: private System.Int32 version
    int& dyn_version();
    // Get instance field reference: private System.Boolean current
    bool& dyn_current();
    // Get instance field reference: private System.Int32 getObjectRetType
    int& dyn_getObjectRetType();
    // Get instance field reference: private System.Object currentKey
    ::Il2CppObject*& dyn_currentKey();
    // Get instance field reference: private System.Object currentValue
    ::Il2CppObject*& dyn_currentValue();
    // public System.Object get_Key()
    // Offset: 0xDD539C
    ::Il2CppObject* get_Key();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0xDD552C
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Current()
    // Offset: 0xDD55BC
    ::Il2CppObject* get_Current();
    // public System.Object get_Value()
    // Offset: 0xDD56AC
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Collections.Hashtable hashtable, System.Int32 getObjRetType)
    // Offset: 0xDD5330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::HashtableEnumerator* New_ctor(::System::Collections::Hashtable* hashtable, int getObjRetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Hashtable::HashtableEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::HashtableEnumerator*, creationType>(hashtable, getObjRetType)));
    }
    // public System.Object Clone()
    // Offset: 0xDD5394
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0xDD5408
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0xDD5718
    void Reset();
  }; // System.Collections.Hashtable/System.Collections.HashtableEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::HashtableEnumerator), 48 + sizeof(::Il2CppObject*)> __System_Collections_Hashtable_HashtableEnumeratorSizeCheck;
  static_assert(sizeof(Hashtable::HashtableEnumerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::HashtableEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::HashtableEnumerator::*)()>(&System::Collections::Hashtable::HashtableEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::HashtableEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
