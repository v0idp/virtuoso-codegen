// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
  // Forward declaring type: LogBehaviour
  struct LogBehaviour;
}
// Completed forward declares
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Forward declaring type: Debugger
  class Debugger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::Debugger);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Debugger*, "DG.Tweening.Core", "Debugger");
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Debugger
  // [TokenAttribute] Offset: FFFFFFFF
  class Debugger : public ::Il2CppObject {
    public:
    // Get static field: static private System.Int32 _logPriority
    static int _get__logPriority();
    // Set static field: static private System.Int32 _logPriority
    static void _set__logPriority(int value);
    // static field const value: static private System.String _LogPrefix
    static constexpr const char* _LogPrefix = "<color=#0099bc><b>DOTWEEN \u25ba </b></colo";
    // Get static field: static private System.String _LogPrefix
    static ::StringW _get__LogPrefix();
    // Set static field: static private System.String _LogPrefix
    static void _set__LogPrefix(::StringW value);
    // static public System.Int32 get_logPriority()
    // Offset: 0x15DD3EC
    static int get_logPriority();
    // static public System.Void Log(System.Object message)
    // Offset: 0x15D7590
    static void Log(::Il2CppObject* message);
    // static public System.Void LogWarning(System.Object message, DG.Tweening.Tween t)
    // Offset: 0x15DB3F8
    static void LogWarning(::Il2CppObject* message, ::DG::Tweening::Tween* t);
    // static public System.Void LogError(System.Object message)
    // Offset: 0x15D9650
    static void LogError(::Il2CppObject* message);
    // static public System.Void LogReport(System.Object message)
    // Offset: 0x15DC4C8
    static void LogReport(::Il2CppObject* message);
    // static public System.Void LogSafeModeReport(System.Object message)
    // Offset: 0x15DC61C
    static void LogSafeModeReport(::Il2CppObject* message);
    // static public System.Void LogInvalidTween(DG.Tweening.Tween t)
    // Offset: 0x15DD438
    static void LogInvalidTween(::DG::Tweening::Tween* t);
    // static public System.Void LogNestedTween(DG.Tweening.Tween t)
    // Offset: 0x15DD480
    static void LogNestedTween(::DG::Tweening::Tween* t);
    // static public System.Void LogNullTween(DG.Tweening.Tween t)
    // Offset: 0x15DD4CC
    static void LogNullTween(::DG::Tweening::Tween* t);
    // static public System.Void LogNonPathTween(DG.Tweening.Tween t)
    // Offset: 0x15DD514
    static void LogNonPathTween(::DG::Tweening::Tween* t);
    // static public System.Void LogMissingMaterialProperty(System.String propertyName)
    // Offset: 0x15DD560
    static void LogMissingMaterialProperty(::StringW propertyName);
    // static public System.Void LogMissingMaterialProperty(System.Int32 propertyId)
    // Offset: 0x15DD5B8
    static void LogMissingMaterialProperty(int propertyId);
    // static public System.Void LogRemoveActiveTweenError(System.String errorInfo, DG.Tweening.Tween t)
    // Offset: 0x15DD644
    static void LogRemoveActiveTweenError(::StringW errorInfo, ::DG::Tweening::Tween* t);
    // static public System.Void LogAddActiveTweenError(System.String errorInfo, DG.Tweening.Tween t)
    // Offset: 0x15DD6A8
    static void LogAddActiveTweenError(::StringW errorInfo, ::DG::Tweening::Tween* t);
    // static public System.Void SetLogPriority(DG.Tweening.LogBehaviour logBehaviour)
    // Offset: 0x15D68C4
    static void SetLogPriority(::DG::Tweening::LogBehaviour logBehaviour);
  }; // DG.Tweening.Core.Debugger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::get_logPriority
// Il2CppName: get_logPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&DG::Tweening::Core::Debugger::get_logPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "get_logPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&DG::Tweening::Core::Debugger::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&DG::Tweening::Core::Debugger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogReport
// Il2CppName: LogReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&DG::Tweening::Core::Debugger::LogReport)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogSafeModeReport
// Il2CppName: LogSafeModeReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&DG::Tweening::Core::Debugger::LogSafeModeReport)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogSafeModeReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogInvalidTween
// Il2CppName: LogInvalidTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogInvalidTween)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogInvalidTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogNestedTween
// Il2CppName: LogNestedTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogNestedTween)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogNestedTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogNullTween
// Il2CppName: LogNullTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogNullTween)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogNullTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogNonPathTween
// Il2CppName: LogNonPathTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogNonPathTween)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogNonPathTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogMissingMaterialProperty
// Il2CppName: LogMissingMaterialProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&DG::Tweening::Core::Debugger::LogMissingMaterialProperty)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogMissingMaterialProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogMissingMaterialProperty
// Il2CppName: LogMissingMaterialProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&DG::Tweening::Core::Debugger::LogMissingMaterialProperty)> {
  static const MethodInfo* get() {
    static auto* propertyId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogMissingMaterialProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyId});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogRemoveActiveTweenError
// Il2CppName: LogRemoveActiveTweenError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogRemoveActiveTweenError)> {
  static const MethodInfo* get() {
    static auto* errorInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogRemoveActiveTweenError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorInfo, t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::LogAddActiveTweenError
// Il2CppName: LogAddActiveTweenError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::DG::Tweening::Tween*)>(&DG::Tweening::Core::Debugger::LogAddActiveTweenError)> {
  static const MethodInfo* get() {
    static auto* errorInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "LogAddActiveTweenError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorInfo, t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Debugger::SetLogPriority
// Il2CppName: SetLogPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::LogBehaviour)>(&DG::Tweening::Core::Debugger::SetLogPriority)> {
  static const MethodInfo* get() {
    static auto* logBehaviour = &::il2cpp_utils::GetClassFromName("DG.Tweening", "LogBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Debugger*), "SetLogPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logBehaviour});
  }
};
