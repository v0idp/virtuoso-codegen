// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ArrayList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList*, "System.Collections", "ArrayList");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 57D850
  // [DebuggerDisplayAttribute] Offset: 57D850
  // [DefaultMemberAttribute] Offset: 57D850
  // [ComVisibleAttribute] Offset: 57D850
  class ArrayList : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IList*/ {
    public:
    // Nested type: ::System::Collections::ArrayList::ReadOnlyArrayList
    class ReadOnlyArrayList;
    // Nested type: ::System::Collections::ArrayList::ArrayListEnumeratorSimple
    class ArrayListEnumeratorSimple;
    // Nested type: ::System::Collections::ArrayList::ArrayListDebugView
    class ArrayListDebugView;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Object[] _items
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x18
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // static field const value: static private System.Int32 _defaultCapacity
    static constexpr const int _defaultCapacity = 4;
    // Get static field: static private System.Int32 _defaultCapacity
    static int _get__defaultCapacity();
    // Set static field: static private System.Int32 _defaultCapacity
    static void _set__defaultCapacity(int value);
    // Get static field: static private readonly System.Object[] emptyArray
    static ::ArrayW<::Il2CppObject*> _get_emptyArray();
    // Set static field: static private readonly System.Object[] emptyArray
    static void _set_emptyArray(::ArrayW<::Il2CppObject*> value);
    // Get instance field reference: private System.Object[] _items
    ::ArrayW<::Il2CppObject*>& dyn__items();
    // Get instance field reference: private System.Int32 _size
    int& dyn__size();
    // Get instance field reference: private System.Int32 _version
    int& dyn__version();
    // Get instance field reference: private System.Object _syncRoot
    ::Il2CppObject*& dyn__syncRoot();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0xDEA178
    void set_Capacity(int value);
    // public System.Int32 get_Count()
    // Offset: 0xDEA298
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xDEA2A0
    bool get_IsReadOnly();
    // public System.Object get_SyncRoot()
    // Offset: 0xDEA2A8
    ::Il2CppObject* get_SyncRoot();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0xDEA31C
    ::Il2CppObject* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0xDEA3D0
    void set_Item(int index, ::Il2CppObject* value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xDE9E68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Collections.ICollection c)
    // Offset: 0xDE9FCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor(::System::Collections::ICollection* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>(c)));
    }
    // static private System.Void .cctor()
    // Offset: 0xDEB24C
    static void _cctor();
    // public System.Int32 Add(System.Object value)
    // Offset: 0xDEA4C8
    int Add(::Il2CppObject* value);
    // public System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0xDEA5D4
    void AddRange(::System::Collections::ICollection* c);
    // public System.Void Clear()
    // Offset: 0xDEA5F0
    void Clear();
    // public System.Object Clone()
    // Offset: 0xDEA634
    ::Il2CppObject* Clone();
    // public System.Boolean Contains(System.Object item)
    // Offset: 0xDEA6CC
    bool Contains(::Il2CppObject* item);
    // public System.Void CopyTo(System.Array array)
    // Offset: 0xDEA7A0
    void CopyTo(::System::Array* array);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xDEA7B4
    void CopyTo(::System::Array* array, int arrayIndex);
    // public System.Void CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0xDEA854
    void CopyTo(int index, ::System::Array* array, int arrayIndex, int count);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0xDEA57C
    void EnsureCapacity(int min);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0xDEA920
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0xDEA980
    int IndexOf(::Il2CppObject* value);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0xDEA994
    void Insert(int index, ::Il2CppObject* value);
    // public System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0xDEAAD0
    void InsertRange(int index, ::System::Collections::ICollection* c);
    // static public System.Collections.ArrayList ReadOnly(System.Collections.ArrayList list)
    // Offset: 0xDEAD40
    static ::System::Collections::ArrayList* ReadOnly(::System::Collections::ArrayList* list);
    // public System.Void Remove(System.Object obj)
    // Offset: 0xDEADE8
    void Remove(::Il2CppObject* obj);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xDEAE38
    void RemoveAt(int index);
    // public System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0xDEAF24
    void RemoveRange(int index, int count);
    // public System.Object[] ToArray()
    // Offset: 0xDEB0A4
    ::ArrayW<::Il2CppObject*> ToArray();
    // public System.Array ToArray(System.Type type)
    // Offset: 0xDEB118
    ::System::Array* ToArray(::System::Type* type);
    // public System.Void .ctor()
    // Offset: 0xDDE338
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>()));
    }
  }; // System.Collections.ArrayList
  #pragma pack(pop)
  static check_size<sizeof(ArrayList), 32 + sizeof(::Il2CppObject*)> __System_Collections_ArrayListSizeCheck;
  static_assert(sizeof(ArrayList) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ArrayList::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int)>(&System::Collections::ArrayList::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::*)(int)>(&System::Collections::ArrayList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::ArrayList::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::AddRange
// Il2CppName: AddRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(::System::Collections::ICollection*)>(&System::Collections::ArrayList::AddRange)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "AddRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(::System::Array*)>(&System::Collections::ArrayList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(::System::Array*, int)>(&System::Collections::ArrayList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int, ::System::Array*, int, int)>(&System::Collections::ArrayList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, array, arrayIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int)>(&System::Collections::ArrayList::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int, ::Il2CppObject*)>(&System::Collections::ArrayList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::InsertRange
// Il2CppName: InsertRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int, ::System::Collections::ICollection*)>(&System::Collections::ArrayList::InsertRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "ICollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "InsertRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, c});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ReadOnly
// Il2CppName: ReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::ArrayList*)>(&System::Collections::ArrayList::ReadOnly)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "ReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(::Il2CppObject*)>(&System::Collections::ArrayList::Remove)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int)>(&System::Collections::ArrayList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::RemoveRange
// Il2CppName: RemoveRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ArrayList::*)(int, int)>(&System::Collections::ArrayList::RemoveRange)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "RemoveRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, count});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Collections::ArrayList::*)()>(&System::Collections::ArrayList::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (System::Collections::ArrayList::*)(::System::Type*)>(&System::Collections::ArrayList::ToArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ArrayList*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Collections::ArrayList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
