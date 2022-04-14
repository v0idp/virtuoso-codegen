// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityOSC.OSCPacket
#include "UnityOSC/OSCPacket.hpp"
// Including type: System.Char
#include "System/Char.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityOSC
namespace UnityOSC {
  // Forward declaring type: OSCMessage
  class OSCMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityOSC::OSCMessage);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCMessage*, "UnityOSC", "OSCMessage");
// Type namespace: UnityOSC
namespace UnityOSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityOSC.OSCMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class OSCMessage : public ::UnityOSC::OSCPacket {
    public:
    public:
    // private System.String _typeTag
    // Size: 0x8
    // Offset: 0x30
    ::StringW typeTag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return typeTag;
    }
    // static field const value: static private System.Char INTEGER
    static constexpr const ::Il2CppChar INTEGER = u'i';
    // Get static field: static private System.Char INTEGER
    static ::Il2CppChar _get_INTEGER();
    // Set static field: static private System.Char INTEGER
    static void _set_INTEGER(::Il2CppChar value);
    // static field const value: static private System.Char FLOAT
    static constexpr const ::Il2CppChar FLOAT = u'f';
    // Get static field: static private System.Char FLOAT
    static ::Il2CppChar _get_FLOAT();
    // Set static field: static private System.Char FLOAT
    static void _set_FLOAT(::Il2CppChar value);
    // static field const value: static private System.Char LONG
    static constexpr const ::Il2CppChar LONG = u'h';
    // Get static field: static private System.Char LONG
    static ::Il2CppChar _get_LONG();
    // Set static field: static private System.Char LONG
    static void _set_LONG(::Il2CppChar value);
    // static field const value: static private System.Char DOUBLE
    static constexpr const ::Il2CppChar DOUBLE = u'd';
    // Get static field: static private System.Char DOUBLE
    static ::Il2CppChar _get_DOUBLE();
    // Set static field: static private System.Char DOUBLE
    static void _set_DOUBLE(::Il2CppChar value);
    // static field const value: static private System.Char STRING
    static constexpr const ::Il2CppChar STRING = u's';
    // Get static field: static private System.Char STRING
    static ::Il2CppChar _get_STRING();
    // Set static field: static private System.Char STRING
    static void _set_STRING(::Il2CppChar value);
    // static field const value: static private System.Char BYTE
    static constexpr const ::Il2CppChar BYTE = u'b';
    // Get static field: static private System.Char BYTE
    static ::Il2CppChar _get_BYTE();
    // Set static field: static private System.Char BYTE
    static void _set_BYTE(::Il2CppChar value);
    // static field const value: static private System.Char DEFAULT
    static constexpr const ::Il2CppChar DEFAULT = u',';
    // Get static field: static private System.Char DEFAULT
    static ::Il2CppChar _get_DEFAULT();
    // Set static field: static private System.Char DEFAULT
    static void _set_DEFAULT(::Il2CppChar value);
    // Get instance field reference: private System.String _typeTag
    [[deprecated]] ::StringW& dyn__typeTag();
    // public System.Void .ctor(System.String address)
    // Offset: 0xC5D920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSCMessage* New_ctor(::StringW address) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSCMessage*, creationType>(address)));
    }
    // public System.Void .ctor(System.String address, System.Object msgvalue)
    // Offset: 0xC5C74C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSCMessage* New_ctor(::StringW address, ::Il2CppObject* msgvalue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSCMessage*, creationType>(address, msgvalue)));
    }
    // static public UnityOSC.OSCMessage Unpack(System.Byte[] data, ref System.Int32 start)
    // Offset: 0xC5DC98
    static ::UnityOSC::OSCMessage* Unpack(::ArrayW<uint8_t> data, ByRef<int> start);
    // public override System.Boolean IsBundle()
    // Offset: 0xC5D968
    // Implemented from: UnityOSC.OSCPacket
    // Base method: System.Boolean OSCPacket::IsBundle()
    bool IsBundle();
    // public override System.Void Pack()
    // Offset: 0xC5D970
    // Implemented from: UnityOSC.OSCPacket
    // Base method: System.Void OSCPacket::Pack()
    void Pack();
    // public override System.Void Append(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityOSC.OSCPacket
    // Base method: System.Void OSCPacket::Append(T value)
    template<class T>
    void Append(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityOSC::OSCMessage::Append");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityOSC::OSCPacket*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, value);
    }
  }; // UnityOSC.OSCMessage
  #pragma pack(pop)
  static check_size<sizeof(OSCMessage), 48 + sizeof(::StringW)> __UnityOSC_OSCMessageSizeCheck;
  static_assert(sizeof(OSCMessage) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityOSC::OSCMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOSC::OSCMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityOSC::OSCMessage::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCMessage* (*)(::ArrayW<uint8_t>, ByRef<int>)>(&UnityOSC::OSCMessage::Unpack)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCMessage*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, start});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCMessage::IsBundle
// Il2CppName: IsBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityOSC::OSCMessage::*)()>(&UnityOSC::OSCMessage::IsBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCMessage*), "IsBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCMessage::Pack
// Il2CppName: Pack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOSC::OSCMessage::*)()>(&UnityOSC::OSCMessage::Pack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityOSC::OSCMessage*), "Pack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityOSC::OSCMessage::Append
// Il2CppName: Append
// Cannot write MetadataGetter for generic methods!
