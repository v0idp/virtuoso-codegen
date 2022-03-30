// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConsoleDriver
  class IConsoleDriver;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ConsoleDriver
  class ConsoleDriver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleDriver*, "System", "ConsoleDriver");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ConsoleDriver
  // [TokenAttribute] Offset: FFFFFFFF
  class ConsoleDriver : public ::Il2CppObject {
    public:
    // Get static field: static System.IConsoleDriver driver
    static ::System::IConsoleDriver* _get_driver();
    // Set static field: static System.IConsoleDriver driver
    static void _set_driver(::System::IConsoleDriver* value);
    // Get static field: static private System.Boolean is_console
    static bool _get_is_console();
    // Set static field: static private System.Boolean is_console
    static void _set_is_console(bool value);
    // Get static field: static private System.Boolean called_isatty
    static bool _get_called_isatty();
    // Set static field: static private System.Boolean called_isatty
    static void _set_called_isatty(bool value);
    // static public System.Boolean get_IsConsole()
    // Offset: 0xBDB8D4
    static bool get_IsConsole();
    // static private System.Void .cctor()
    // Offset: 0xBDC864
    static void _cctor();
    // static private System.IConsoleDriver CreateNullConsoleDriver()
    // Offset: 0xBDC938
    static ::System::IConsoleDriver* CreateNullConsoleDriver();
    // static private System.IConsoleDriver CreateWindowsConsoleDriver()
    // Offset: 0xBDC990
    static ::System::IConsoleDriver* CreateWindowsConsoleDriver();
    // static private System.IConsoleDriver CreateTermInfoDriver(System.String term)
    // Offset: 0xBDC9E8
    static ::System::IConsoleDriver* CreateTermInfoDriver(::StringW term);
    // static public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0xBDC0B4
    static ::System::ConsoleKeyInfo ReadKey(bool intercept);
    // static private System.Boolean Isatty(System.IntPtr handle)
    // Offset: 0xBDCA48
    static bool Isatty(::System::IntPtr handle);
    // static System.Int32 InternalKeyAvailable(System.Int32 ms_timeout)
    // Offset: 0xBDCA4C
    static int InternalKeyAvailable(int ms_timeout);
    // static System.Boolean TtySetup(System.String keypadXmit, System.String teardown, out System.Byte[] control_characters, out System.Int32* address)
    // Offset: 0xBDCA50
    static bool TtySetup(::StringW keypadXmit, ::StringW teardown, ByRef<::ArrayW<uint8_t>> control_characters, ByRef<int*> address);
    // static System.Boolean SetEcho(System.Boolean wantEcho)
    // Offset: 0xBDCA54
    static bool SetEcho(bool wantEcho);
  }; // System.ConsoleDriver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ConsoleDriver::get_IsConsole
// Il2CppName: get_IsConsole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::ConsoleDriver::get_IsConsole)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "get_IsConsole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ConsoleDriver::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::CreateNullConsoleDriver
// Il2CppName: CreateNullConsoleDriver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)()>(&System::ConsoleDriver::CreateNullConsoleDriver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "CreateNullConsoleDriver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::CreateWindowsConsoleDriver
// Il2CppName: CreateWindowsConsoleDriver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)()>(&System::ConsoleDriver::CreateWindowsConsoleDriver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "CreateWindowsConsoleDriver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::CreateTermInfoDriver
// Il2CppName: CreateTermInfoDriver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)(::StringW)>(&System::ConsoleDriver::CreateTermInfoDriver)> {
  static const MethodInfo* get() {
    static auto* term = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "CreateTermInfoDriver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{term});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::ReadKey
// Il2CppName: ReadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&System::ConsoleDriver::ReadKey)> {
  static const MethodInfo* get() {
    static auto* intercept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "ReadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intercept});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::Isatty
// Il2CppName: Isatty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&System::ConsoleDriver::Isatty)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "Isatty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::InternalKeyAvailable
// Il2CppName: InternalKeyAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::ConsoleDriver::InternalKeyAvailable)> {
  static const MethodInfo* get() {
    static auto* ms_timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "InternalKeyAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ms_timeout});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::TtySetup
// Il2CppName: TtySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::ArrayW<uint8_t>>, ByRef<int*>)>(&System::ConsoleDriver::TtySetup)> {
  static const MethodInfo* get() {
    static auto* keypadXmit = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* teardown = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* control_characters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "TtySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keypadXmit, teardown, control_characters, address});
  }
};
// Writing MetadataGetter for method: System::ConsoleDriver::SetEcho
// Il2CppName: SetEcho
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&System::ConsoleDriver::SetEcho)> {
  static const MethodInfo* get() {
    static auto* wantEcho = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleDriver*), "SetEcho", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wantEcho});
  }
};
