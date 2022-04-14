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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityOSC
namespace UnityOSC {
  // Forward declaring type: OSCPacket
  class OSCPacket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOSC::OSCPacket);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCPacket*, "UnityOSC", "OSCPacket");
// Type namespace: UnityOSC
namespace UnityOSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityOSC.OSCPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class OSCPacket : public ::Il2CppObject {
    public:
    public:
    // protected System.Collections.Generic.List`1<System.Object> _data
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Il2CppObject*>* data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // protected System.Byte[] _binaryData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> binaryData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.String _address
    // Size: 0x8
    // Offset: 0x20
    ::StringW address;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Int64 _timeStamp
    // Size: 0x8
    // Offset: 0x28
    int64_t timeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: protected System.Collections.Generic.List`1<System.Object> _data
    [[deprecated]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__data();
    // Get instance field reference: protected System.Byte[] _binaryData
    [[deprecated]] ::ArrayW<uint8_t>& dyn__binaryData();
    // Get instance field reference: protected System.String _address
    [[deprecated]] ::StringW& dyn__address();
    // Get instance field reference: protected System.Int64 _timeStamp
    [[deprecated]] int64_t& dyn__timeStamp();
    // public System.String get_Address()
    // Offset: 0xC5E060
    ::StringW get_Address();
    // public System.Void set_Address(System.String value)
    // Offset: 0xC5E068
    void set_Address(::StringW value);
    // public System.Collections.Generic.List`1<System.Object> get_Data()
    // Offset: 0xC5E070
    ::System::Collections::Generic::List_1<::Il2CppObject*>* get_Data();
    // public System.Byte[] get_BinaryData()
    // Offset: 0xC5BCAC
    ::ArrayW<uint8_t> get_BinaryData();
    // public System.Int64 get_TimeStamp()
    // Offset: 0xC5E078
    int64_t get_TimeStamp();
    // public System.Void set_TimeStamp(System.Int64 value)
    // Offset: 0xC5E080
    void set_TimeStamp(int64_t value);
    // public System.Boolean IsBundle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsBundle();
    // public System.Void Pack()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Pack();
    // public System.Void Append(T msgvalue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Append(T msgvalue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCPacket::Append");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityOSC::OSCPacket*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, msgvalue);
    }
    // static protected System.Byte[] SwapEndian(System.Byte[] data)
    // Offset: 0xC5E088
    static ::ArrayW<uint8_t> SwapEndian(::ArrayW<uint8_t> data);
    // static protected System.Byte[] PackValue(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<uint8_t> PackValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCPacket::PackValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityOSC", "OSCPacket", "PackValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
    // static protected T UnpackValue(System.Byte[] data, ref System.Int32 start)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T UnpackValue(::ArrayW<uint8_t> data, ByRef<int> start) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCPacket::UnpackValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityOSC", "OSCPacket", "UnpackValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(start)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, data, byref(start));
    }
    // static public UnityOSC.OSCPacket Unpack(System.Byte[] data)
    // Offset: 0xC5E14C
    static ::UnityOSC::OSCPacket* Unpack(::ArrayW<uint8_t> data);
    // static public UnityOSC.OSCPacket Unpack(System.Byte[] data, ref System.Int32 start, System.Int32 end)
    // Offset: 0xC5B8F0
    static ::UnityOSC::OSCPacket* Unpack(::ArrayW<uint8_t> data, ByRef<int> start, int end);
    // static protected System.Void PadNull(System.Collections.Generic.List`1<System.Byte> data)
    // Offset: 0xC5DBFC
    static void PadNull(::System::Collections::Generic::List_1<uint8_t>* data);
    // public System.Void .ctor()
    // Offset: 0xC5B650
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSCPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSCPacket*, creationType>()));
    }
  }; // UnityOSC.OSCPacket
  #pragma pack(pop)
  static check_size<sizeof(OSCPacket), 40 + sizeof(int64_t)> __UnityOSC_OSCPacketSizeCheck;
  static_assert(sizeof(OSCPacket) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOSC::OSCPacket::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::set_Address
// Il2CppName: set_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCPacket::*)(::StringW)>(&UnityOSC::OSCPacket::set_Address)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "set_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Il2CppObject*>* (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::get_BinaryData
// Il2CppName: get_BinaryData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::get_BinaryData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "get_BinaryData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::get_TimeStamp
// Il2CppName: get_TimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::get_TimeStamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "get_TimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::set_TimeStamp
// Il2CppName: set_TimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCPacket::*)(int64_t)>(&UnityOSC::OSCPacket::set_TimeStamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "set_TimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::IsBundle
// Il2CppName: IsBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::IsBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "IsBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::Pack
// Il2CppName: Pack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCPacket::*)()>(&UnityOSC::OSCPacket::Pack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "Pack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::Append
// Il2CppName: Append
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityOSC::OSCPacket::SwapEndian
// Il2CppName: SwapEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&UnityOSC::OSCPacket::SwapEndian)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "SwapEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::PackValue
// Il2CppName: PackValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityOSC::OSCPacket::UnpackValue
// Il2CppName: UnpackValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityOSC::OSCPacket::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCPacket* (*)(::ArrayW<uint8_t>)>(&UnityOSC::OSCPacket::Unpack)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCPacket* (*)(::ArrayW<uint8_t>, ByRef<int>, int)>(&UnityOSC::OSCPacket::Unpack)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, start, end});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::PadNull
// Il2CppName: PadNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<uint8_t>*)>(&UnityOSC::OSCPacket::PadNull)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCPacket*), "PadNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
