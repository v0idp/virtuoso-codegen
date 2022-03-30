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
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateInput
  class DeflateInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::DeflateInput);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateInput*, "System.IO.Compression", "DeflateInput");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateInput
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateInput : public ::Il2CppObject {
    public:
    // Nested type: ::System::IO::Compression::DeflateInput::InputState
    struct InputState;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] <Buffer>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <StartIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int StartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Byte[] <Buffer>k__BackingField
    ::ArrayW<uint8_t>& dyn_$Buffer$k__BackingField();
    // Get instance field reference: private System.Int32 <Count>k__BackingField
    int& dyn_$Count$k__BackingField();
    // Get instance field reference: private System.Int32 <StartIndex>k__BackingField
    int& dyn_$StartIndex$k__BackingField();
    // System.Byte[] get_Buffer()
    // Offset: 0x111B864
    ::ArrayW<uint8_t> get_Buffer();
    // System.Void set_Buffer(System.Byte[] value)
    // Offset: 0x111B86C
    void set_Buffer(::ArrayW<uint8_t> value);
    // System.Int32 get_Count()
    // Offset: 0x111B874
    int get_Count();
    // System.Void set_Count(System.Int32 value)
    // Offset: 0x111B87C
    void set_Count(int value);
    // System.Int32 get_StartIndex()
    // Offset: 0x111B884
    int get_StartIndex();
    // System.Void set_StartIndex(System.Int32 value)
    // Offset: 0x111B88C
    void set_StartIndex(int value);
    // System.Void ConsumeBytes(System.Int32 n)
    // Offset: 0x111B23C
    void ConsumeBytes(int n);
    // System.IO.Compression.DeflateInput/System.IO.Compression.InputState DumpState()
    // Offset: 0x111B894
    ::System::IO::Compression::DeflateInput::InputState DumpState();
    // System.Void RestoreState(System.IO.Compression.DeflateInput/System.IO.Compression.InputState state)
    // Offset: 0x111B8A4
    void RestoreState(::System::IO::Compression::DeflateInput::InputState state);
    // public System.Void .ctor()
    // Offset: 0x111B8B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateInput*, creationType>()));
    }
  }; // System.IO.Compression.DeflateInput
  #pragma pack(pop)
  static check_size<sizeof(DeflateInput), 28 + sizeof(int)> __System_IO_Compression_DeflateInputSizeCheck;
  static_assert(sizeof(DeflateInput) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::get_Buffer
// Il2CppName: get_Buffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::Compression::DeflateInput::*)()>(&System::IO::Compression::DeflateInput::get_Buffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "get_Buffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::set_Buffer
// Il2CppName: set_Buffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateInput::*)(::ArrayW<uint8_t>)>(&System::IO::Compression::DeflateInput::set_Buffer)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "set_Buffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateInput::*)()>(&System::IO::Compression::DeflateInput::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::set_Count
// Il2CppName: set_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateInput::*)(int)>(&System::IO::Compression::DeflateInput::set_Count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "set_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::get_StartIndex
// Il2CppName: get_StartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateInput::*)()>(&System::IO::Compression::DeflateInput::get_StartIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "get_StartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::set_StartIndex
// Il2CppName: set_StartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateInput::*)(int)>(&System::IO::Compression::DeflateInput::set_StartIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "set_StartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::ConsumeBytes
// Il2CppName: ConsumeBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateInput::*)(int)>(&System::IO::Compression::DeflateInput::ConsumeBytes)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "ConsumeBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::DumpState
// Il2CppName: DumpState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::DeflateInput::InputState (System::IO::Compression::DeflateInput::*)()>(&System::IO::Compression::DeflateInput::DumpState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "DumpState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::RestoreState
// Il2CppName: RestoreState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateInput::*)(::System::IO::Compression::DeflateInput::InputState)>(&System::IO::Compression::DeflateInput::RestoreState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateInput/InputState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateInput*), "RestoreState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!