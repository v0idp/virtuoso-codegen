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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: InputFocus
  class InputFocus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::InputFocus);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::InputFocus*, "Unity.XR.Oculus", "InputFocus");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.InputFocus
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFocus : public ::Il2CppObject {
    public:
    // Get static field: static private System.Action InputFocusAcquired
    static ::System::Action* _get_InputFocusAcquired();
    // Set static field: static private System.Action InputFocusAcquired
    static void _set_InputFocusAcquired(::System::Action* value);
    // Get static field: static private System.Action InputFocusLost
    static ::System::Action* _get_InputFocusLost();
    // Set static field: static private System.Action InputFocusLost
    static void _set_InputFocusLost(::System::Action* value);
    // Get static field: static private System.Boolean hadInputFocus
    static bool _get_hadInputFocus();
    // Set static field: static private System.Boolean hadInputFocus
    static void _set_hadInputFocus(bool value);
    // static System.Boolean get_hasInputFocus()
    // Offset: 0x18DBDF4
    static bool get_hasInputFocus();
    // static public System.Void add_InputFocusAcquired(System.Action value)
    // Offset: 0x18DBA1C
    static void add_InputFocusAcquired(::System::Action* value);
    // static public System.Void remove_InputFocusAcquired(System.Action value)
    // Offset: 0x18DBB10
    static void remove_InputFocusAcquired(::System::Action* value);
    // static public System.Void add_InputFocusLost(System.Action value)
    // Offset: 0x18DBC04
    static void add_InputFocusLost(::System::Action* value);
    // static public System.Void remove_InputFocusLost(System.Action value)
    // Offset: 0x18DBCFC
    static void remove_InputFocusLost(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x18DBF90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFocus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::InputFocus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFocus*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18DBF98
    static void _cctor();
    // static System.Void Update()
    // Offset: 0x18DBDFC
    static void Update();
  }; // Unity.XR.Oculus.InputFocus
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::get_hasInputFocus
// Il2CppName: get_hasInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::InputFocus::get_hasInputFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "get_hasInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::add_InputFocusAcquired
// Il2CppName: add_InputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&Unity::XR::Oculus::InputFocus::add_InputFocusAcquired)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "add_InputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::remove_InputFocusAcquired
// Il2CppName: remove_InputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&Unity::XR::Oculus::InputFocus::remove_InputFocusAcquired)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "remove_InputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::add_InputFocusLost
// Il2CppName: add_InputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&Unity::XR::Oculus::InputFocus::add_InputFocusLost)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "add_InputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::remove_InputFocusLost
// Il2CppName: remove_InputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&Unity::XR::Oculus::InputFocus::remove_InputFocusLost)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "remove_InputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::InputFocus::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::InputFocus::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::InputFocus::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::InputFocus*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
