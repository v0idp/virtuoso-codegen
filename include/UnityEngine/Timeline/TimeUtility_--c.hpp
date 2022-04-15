// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimeUtility
#include "UnityEngine/Timeline/TimeUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimeUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeUtility::$$c*, "UnityEngine.Timeline", "TimeUtility/<>c");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeUtility/UnityEngine.Timeline.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimeUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Timeline.TimeUtility/UnityEngine.Timeline.<>c <>9
    static ::UnityEngine::Timeline::TimeUtility::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TimeUtility/UnityEngine.Timeline.<>c <>9
    static void _set_$$9(::UnityEngine::Timeline::TimeUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_0
    static ::System::Func_2<::Il2CppChar, bool>* _get_$$9__14_0();
    // Set static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_0
    static void _set_$$9__14_0(::System::Func_2<::Il2CppChar, bool>* value);
    // Get static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_1
    static ::System::Func_2<::Il2CppChar, bool>* _get_$$9__14_1();
    // Set static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_1
    static void _set_$$9__14_1(::System::Func_2<::Il2CppChar, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x18D520C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18D526C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimeUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeUtility::$$c*, creationType>()));
    }
    // System.Boolean <ParseTimeCode>b__14_0(System.Char c)
    // Offset: 0x18D5274
    bool $ParseTimeCode$b__14_0(::Il2CppChar c);
    // System.Boolean <ParseTimeCode>b__14_1(System.Char c)
    // Offset: 0x18D52D8
    bool $ParseTimeCode$b__14_1(::Il2CppChar c);
  }; // UnityEngine.Timeline.TimeUtility/UnityEngine.Timeline.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimeUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_0
// Il2CppName: <ParseTimeCode>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimeUtility::$$c::*)(::Il2CppChar)>(&UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), "<ParseTimeCode>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_1
// Il2CppName: <ParseTimeCode>b__14_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimeUtility::$$c::*)(::Il2CppChar)>(&UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_1)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), "<ParseTimeCode>b__14_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
