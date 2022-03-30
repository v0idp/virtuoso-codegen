// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Queue::QueueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Queue::QueueEnumerator*, "System.Collections", "Queue/QueueEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Queue/System.Collections.QueueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Queue::QueueEnumerator : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IEnumerator*/ {
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
    // private System.Collections.Queue _q
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Queue* q;
    // Field size check
    static_assert(sizeof(::System::Collections::Queue*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentElement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.Queue _q
    ::System::Collections::Queue*& dyn__q();
    // Get instance field reference: private System.Int32 _index
    int& dyn__index();
    // Get instance field reference: private System.Int32 _version
    int& dyn__version();
    // Get instance field reference: private System.Object currentElement
    ::Il2CppObject*& dyn_currentElement();
    // public System.Object get_Current()
    // Offset: 0x1080E74
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Collections.Queue q)
    // Offset: 0x1080D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue::QueueEnumerator* New_ctor(::System::Collections::Queue* q) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Queue::QueueEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue::QueueEnumerator*, creationType>(q)));
    }
    // public System.Object Clone()
    // Offset: 0x1080D90
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x1080D98
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1080F10
    void Reset();
  }; // System.Collections.Queue/System.Collections.QueueEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Queue::QueueEnumerator), 32 + sizeof(::Il2CppObject*)> __System_Collections_Queue_QueueEnumeratorSizeCheck;
  static_assert(sizeof(Queue::QueueEnumerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Queue::QueueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::QueueEnumerator::*)()>(&System::Collections::Queue::QueueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue::QueueEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::QueueEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::QueueEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::QueueEnumerator::*)()>(&System::Collections::Queue::QueueEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue::QueueEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::QueueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Queue::QueueEnumerator::*)()>(&System::Collections::Queue::QueueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue::QueueEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::QueueEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::QueueEnumerator::*)()>(&System::Collections::Queue::QueueEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue::QueueEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
