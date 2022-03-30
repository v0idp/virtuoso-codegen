// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Setup.PsyGlobal
#include "OggVorbisEncoder/Setup/PsyGlobal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
NEED_NO_BOX(::OggVorbisEncoder::Setup::PsyGlobal::$$c);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::PsyGlobal::$$c*, "OggVorbisEncoder.Setup", "PsyGlobal/<>c");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.PsyGlobal/OggVorbisEncoder.Setup.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PsyGlobal::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OggVorbisEncoder.Setup.PsyGlobal/OggVorbisEncoder.Setup.<>c <>9
    static ::OggVorbisEncoder::Setup::PsyGlobal::$$c* _get_$$9();
    // Set static field: static public readonly OggVorbisEncoder.Setup.PsyGlobal/OggVorbisEncoder.Setup.<>c <>9
    static void _set_$$9(::OggVorbisEncoder::Setup::PsyGlobal::$$c* value);
    // Get static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__2_0
    static ::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__2_0
    static void _set_$$9__2_0(::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* value);
    // Get static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__2_1
    static ::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__2_1
    static void _set_$$9__2_1(::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* value);
    // Get static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__39_0
    static ::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* _get_$$9__39_0();
    // Set static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__39_0
    static void _set_$$9__39_0(::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* value);
    // Get static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__39_1
    static ::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* _get_$$9__39_1();
    // Set static field: static public System.Func`2<System.Int32[],System.Int32[]> <>9__39_1
    static void _set_$$9__39_1(::System::Func_2<::ArrayW<int>, ::ArrayW<int>>* value);
    // static private System.Void .cctor()
    // Offset: 0x1266514
    static void _cctor();
    // System.Int32[] <.ctor>b__2_0(System.Int32[] s)
    // Offset: 0x126657C
    ::ArrayW<int> $_ctor$b__2_0(::ArrayW<int> s);
    // System.Int32[] <.ctor>b__2_1(System.Int32[] s)
    // Offset: 0x12665CC
    ::ArrayW<int> $_ctor$b__2_1(::ArrayW<int> s);
    // System.Int32[] <Clone>b__39_0(System.Int32[] s)
    // Offset: 0x126661C
    ::ArrayW<int> $Clone$b__39_0(::ArrayW<int> s);
    // System.Int32[] <Clone>b__39_1(System.Int32[] s)
    // Offset: 0x1266668
    ::ArrayW<int> $Clone$b__39_1(::ArrayW<int> s);
    // public System.Void .ctor()
    // Offset: 0x1266574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PsyGlobal::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::PsyGlobal::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PsyGlobal::$$c*, creationType>()));
    }
  }; // OggVorbisEncoder.Setup.PsyGlobal/OggVorbisEncoder.Setup.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OggVorbisEncoder::Setup::PsyGlobal::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::$_ctor$b__2_0
// Il2CppName: <.ctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::$$c::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::$$c::$_ctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal::$$c*), "<.ctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::$_ctor$b__2_1
// Il2CppName: <.ctor>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::$$c::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::$$c::$_ctor$b__2_1)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal::$$c*), "<.ctor>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::$Clone$b__39_0
// Il2CppName: <Clone>b__39_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::$$c::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::$$c::$Clone$b__39_0)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal::$$c*), "<Clone>b__39_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::$Clone$b__39_1
// Il2CppName: <Clone>b__39_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::$$c::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::$$c::$Clone$b__39_1)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal::$$c*), "<Clone>b__39_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
