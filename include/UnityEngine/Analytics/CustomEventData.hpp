// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: CustomEventData
  class CustomEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Analytics::CustomEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::CustomEventData*, "UnityEngine.Analytics", "CustomEventData");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Analytics.CustomEventData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6DE0CC
  class CustomEventData : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated]] ::System::IntPtr& dyn_m_Ptr();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1901334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomEventData* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Analytics::CustomEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomEventData*, creationType>(name)));
    }
    // private System.Void Destroy()
    // Offset: 0x1902CC8
    void Destroy();
    // public System.Void Dispose()
    // Offset: 0x19023F0
    void Dispose();
    // static System.IntPtr Internal_Create(UnityEngine.Analytics.CustomEventData ced, System.String name)
    // Offset: 0x1902C10
    static ::System::IntPtr Internal_Create(::UnityEngine::Analytics::CustomEventData* ced, ::StringW name);
    // static System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1902D50
    static void Internal_Destroy(::System::IntPtr ptr);
    // public System.Boolean AddString(System.String key, System.String value)
    // Offset: 0x1902D90
    bool AddString(::StringW key, ::StringW value);
    // public System.Boolean AddInt32(System.String key, System.Int32 value)
    // Offset: 0x1902DE8
    bool AddInt32(::StringW key, int value);
    // public System.Boolean AddUInt32(System.String key, System.UInt32 value)
    // Offset: 0x1902E40
    bool AddUInt32(::StringW key, uint value);
    // public System.Boolean AddInt64(System.String key, System.Int64 value)
    // Offset: 0x1902E98
    bool AddInt64(::StringW key, int64_t value);
    // public System.Boolean AddUInt64(System.String key, System.UInt64 value)
    // Offset: 0x1902EF0
    bool AddUInt64(::StringW key, uint64_t value);
    // public System.Boolean AddBool(System.String key, System.Boolean value)
    // Offset: 0x1902F48
    bool AddBool(::StringW key, bool value);
    // public System.Boolean AddDouble(System.String key, System.Double value)
    // Offset: 0x1902FA0
    bool AddDouble(::StringW key, double value);
    // public System.Boolean AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object> eventData)
    // Offset: 0x1901394
    bool AddDictionary(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* eventData);
    // protected override System.Void Finalize()
    // Offset: 0x1902C60
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Analytics.CustomEventData
  #pragma pack(pop)
  static check_size<sizeof(CustomEventData), 16 + sizeof(::System::IntPtr)> __UnityEngine_Analytics_CustomEventDataSizeCheck;
  static_assert(sizeof(CustomEventData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::CustomEventData::*)()>(&UnityEngine::Analytics::CustomEventData::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::CustomEventData::*)()>(&UnityEngine::Analytics::CustomEventData::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Analytics::CustomEventData*, ::StringW)>(&UnityEngine::Analytics::CustomEventData::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* ced = &::il2cpp_utils::GetClassFromName("UnityEngine.Analytics", "CustomEventData")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ced, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Analytics::CustomEventData::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, ::StringW)>(&UnityEngine::Analytics::CustomEventData::AddString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddInt32
// Il2CppName: AddInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, int)>(&UnityEngine::Analytics::CustomEventData::AddInt32)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddUInt32
// Il2CppName: AddUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, uint)>(&UnityEngine::Analytics::CustomEventData::AddUInt32)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddInt64
// Il2CppName: AddInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, int64_t)>(&UnityEngine::Analytics::CustomEventData::AddInt64)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddUInt64
// Il2CppName: AddUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, uint64_t)>(&UnityEngine::Analytics::CustomEventData::AddUInt64)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddBool
// Il2CppName: AddBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, bool)>(&UnityEngine::Analytics::CustomEventData::AddBool)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddDouble
// Il2CppName: AddDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::StringW, double)>(&UnityEngine::Analytics::CustomEventData::AddDouble)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::AddDictionary
// Il2CppName: AddDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Analytics::CustomEventData::*)(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*)>(&UnityEngine::Analytics::CustomEventData::AddDictionary)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "AddDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::CustomEventData::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::CustomEventData::*)()>(&UnityEngine::Analytics::CustomEventData::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::CustomEventData*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
