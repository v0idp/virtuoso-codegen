// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase
namespace Firebase {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: StringList
  class StringList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::StringList);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::StringList*, "Firebase", "StringList");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.StringList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6EA5FC
  class StringList : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<::StringW>, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Firebase::StringList::StringListEnumerator
    class StringListEnumerator;
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<::StringW>
    operator ::System::Collections::Generic::IList_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x188A0F8
    bool get_IsReadOnly();
    // public System.String get_Item(System.Int32 index)
    // Offset: 0x188A100
    ::StringW get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.String value)
    // Offset: 0x188A1B0
    void set_Item(int index, ::StringW value);
    // public System.Int32 get_Count()
    // Offset: 0x188A260
    int get_Count();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x1889D8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringList* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::StringList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringList*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void .ctor()
    // Offset: 0x1889DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::StringList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringList*, creationType>()));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.StringList obj)
    // Offset: 0x1889E88
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::StringList* obj);
    // public System.Void Dispose()
    // Offset: 0x1889F68
    void Dispose();
    // public System.Void CopyTo(System.String[] array, System.Int32 arrayIndex)
    // Offset: 0x188A300
    void CopyTo(::ArrayW<::StringW> array, int arrayIndex);
    // public System.Void CopyTo(System.Int32 index, System.String[] array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0x188A344
    void CopyTo(int index, ::ArrayW<::StringW> array, int arrayIndex, int count);
    // private System.Collections.Generic.IEnumerator`1<System.String> System.Collections.Generic.IEnumerable<string>.GetEnumerator()
    // Offset: 0x188A5F8
    ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable$string$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x188A6A0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Clear()
    // Offset: 0x188A6FC
    void Clear();
    // public System.Void Add(System.String x)
    // Offset: 0x188A790
    void Add(::StringW x);
    // private System.UInt32 size()
    // Offset: 0x188A264
    uint size();
    // private System.String getitemcopy(System.Int32 index)
    // Offset: 0x188A54C
    ::StringW getitemcopy(int index);
    // private System.String getitem(System.Int32 index)
    // Offset: 0x188A104
    ::StringW getitem(int index);
    // private System.Void setitem(System.Int32 index, System.String val)
    // Offset: 0x188A1B4
    void setitem(int index, ::StringW val);
    // public System.Void Insert(System.Int32 index, System.String x)
    // Offset: 0x188A834
    void Insert(int index, ::StringW x);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x188A8E0
    void RemoveAt(int index);
    // public System.Boolean Contains(System.String value)
    // Offset: 0x188A984
    bool Contains(::StringW value);
    // public System.Int32 IndexOf(System.String value)
    // Offset: 0x188AA30
    int IndexOf(::StringW value);
    // public System.Boolean Remove(System.String value)
    // Offset: 0x188AADC
    bool Remove(::StringW value);
    // protected override System.Void Finalize()
    // Offset: 0x1889EF4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.StringList
  #pragma pack(pop)
  static check_size<sizeof(StringList), 32 + sizeof(bool)> __Firebase_StringListSizeCheck;
  static_assert(sizeof(StringList) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::StringList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::StringList::*)()>(&Firebase::StringList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::StringList::*)(int)>(&Firebase::StringList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(int, ::StringW)>(&Firebase::StringList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::StringList::*)()>(&Firebase::StringList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::StringList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::StringList::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::StringList*)>(&Firebase::StringList::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase", "StringList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)()>(&Firebase::StringList::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(::ArrayW<::StringW>, int)>(&Firebase::StringList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(int, ::ArrayW<::StringW>, int, int)>(&Firebase::StringList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, array, arrayIndex, count});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::System_Collections_Generic_IEnumerable$string$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<string>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (Firebase::StringList::*)()>(&Firebase::StringList::System_Collections_Generic_IEnumerable$string$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "System.Collections.Generic.IEnumerable<string>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Firebase::StringList::*)()>(&Firebase::StringList::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)()>(&Firebase::StringList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(::StringW)>(&Firebase::StringList::Add)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::size
// Il2CppName: size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Firebase::StringList::*)()>(&Firebase::StringList::size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::getitemcopy
// Il2CppName: getitemcopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::StringList::*)(int)>(&Firebase::StringList::getitemcopy)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "getitemcopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::getitem
// Il2CppName: getitem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::StringList::*)(int)>(&Firebase::StringList::getitem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "getitem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::setitem
// Il2CppName: setitem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(int, ::StringW)>(&Firebase::StringList::setitem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "setitem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, val});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(int, ::StringW)>(&Firebase::StringList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, x});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)(int)>(&Firebase::StringList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::StringList::*)(::StringW)>(&Firebase::StringList::Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::StringList::*)(::StringW)>(&Firebase::StringList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::StringList::*)(::StringW)>(&Firebase::StringList::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::StringList::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::StringList::*)()>(&Firebase::StringList::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::StringList*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
