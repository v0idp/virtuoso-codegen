// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: HWStack
  class HWStack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::HWStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HWStack*, "System.Xml", "HWStack");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HWStack
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A4328
  class HWStack : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.Object[] stack
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> stack;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 growthRate
    // Size: 0x4
    // Offset: 0x18
    int growthRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 used
    // Size: 0x4
    // Offset: 0x1C
    int used;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 limit
    // Size: 0x4
    // Offset: 0x24
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Object[] stack
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_stack();
    // Get instance field reference: private System.Int32 growthRate
    [[deprecated("Use field access instead!")]] int& dyn_growthRate();
    // Get instance field reference: private System.Int32 used
    [[deprecated("Use field access instead!")]] int& dyn_used();
    // Get instance field reference: private System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // Get instance field reference: private System.Int32 limit
    [[deprecated("Use field access instead!")]] int& dyn_limit();
    // System.Object get_Item(System.Int32 index)
    // Offset: 0xAEED18
    ::Il2CppObject* get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0xAEEDA0
    void set_Item(int index, ::Il2CppObject* value);
    // System.Int32 get_Length()
    // Offset: 0xAEEE5C
    int get_Length();
    // System.Void .ctor(System.Int32 GrowthRate)
    // Offset: 0xAEA93C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HWStack* New_ctor(int GrowthRate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HWStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HWStack*, creationType>(GrowthRate)));
    }
    // System.Void .ctor(System.Int32 GrowthRate, System.Int32 limit)
    // Offset: 0xAEECA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HWStack* New_ctor(int GrowthRate, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HWStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HWStack*, creationType>(GrowthRate, limit)));
    }
    // private System.Void .ctor(System.Object[] stack, System.Int32 growthRate, System.Int32 used, System.Int32 size)
    // Offset: 0xAEEE64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HWStack* New_ctor(::ArrayW<::Il2CppObject*> stack, int growthRate, int used, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HWStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HWStack*, creationType>(stack, growthRate, used, size)));
    }
    // System.Object Push()
    // Offset: 0xAEC648
    ::Il2CppObject* Push();
    // System.Object Pop()
    // Offset: 0xAEC80C
    ::Il2CppObject* Pop();
    // System.Object Peek()
    // Offset: 0xAEC860
    ::Il2CppObject* Peek();
    // System.Void AddToTop(System.Object o)
    // Offset: 0xAEC78C
    void AddToTop(::Il2CppObject* o);
    // public System.Object Clone()
    // Offset: 0xAEEEB4
    ::Il2CppObject* Clone();
  }; // System.Xml.HWStack
  #pragma pack(pop)
  static check_size<sizeof(HWStack), 36 + sizeof(int)> __System_Xml_HWStackSizeCheck;
  static_assert(sizeof(HWStack) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::HWStack::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::HWStack::*)(int)>(&System::Xml::HWStack::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HWStack::*)(int, ::Il2CppObject*)>(&System::Xml::HWStack::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::HWStack::*)()>(&System::Xml::HWStack::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HWStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HWStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HWStack::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::HWStack::*)()>(&System::Xml::HWStack::Push)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::HWStack::*)()>(&System::Xml::HWStack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::HWStack::*)()>(&System::Xml::HWStack::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::AddToTop
// Il2CppName: AddToTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HWStack::*)(::Il2CppObject*)>(&System::Xml::HWStack::AddToTop)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "AddToTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Xml::HWStack::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::HWStack::*)()>(&System::Xml::HWStack::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HWStack*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
