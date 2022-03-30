// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Lookups.FloorLookup
#include "OggVorbisEncoder/Lookups/FloorLookup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: <>f__AnonymousType0`2<$Value$j__TPar, $Index$j__TPar>
  template<typename $Value$j__TPar, typename $Index$j__TPar>
  class $$f__AnonymousType0_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Lookups::FloorLookup::$$c);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Lookups::FloorLookup::$$c*, "OggVorbisEncoder.Lookups", "FloorLookup/<>c");
// Type namespace: OggVorbisEncoder.Lookups
namespace OggVorbisEncoder::Lookups {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Lookups.FloorLookup/OggVorbisEncoder.Lookups.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FloorLookup::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OggVorbisEncoder.Lookups.FloorLookup/OggVorbisEncoder.Lookups.<>c <>9
    static ::OggVorbisEncoder::Lookups::FloorLookup::$$c* _get_$$9();
    // Set static field: static public readonly OggVorbisEncoder.Lookups.FloorLookup/OggVorbisEncoder.Lookups.<>c <>9
    static void _set_$$9(::OggVorbisEncoder::Lookups::FloorLookup::$$c* value);
    // Get static field: static public System.Func`3<System.Int32,System.Int32,<>f__AnonymousType0`2<System.Int32,System.Int32>> <>9__10_0
    static ::System::Func_3<int, int, ::GlobalNamespace::$$f__AnonymousType0_2<int, int>*>* _get_$$9__10_0();
    // Set static field: static public System.Func`3<System.Int32,System.Int32,<>f__AnonymousType0`2<System.Int32,System.Int32>> <>9__10_0
    static void _set_$$9__10_0(::System::Func_3<int, int, ::GlobalNamespace::$$f__AnonymousType0_2<int, int>*>* value);
    // Get static field: static public System.Func`2<<>f__AnonymousType0`2<System.Int32,System.Int32>,System.Int32> <>9__10_1
    static ::System::Func_2<::GlobalNamespace::$$f__AnonymousType0_2<int, int>*, int>* _get_$$9__10_1();
    // Set static field: static public System.Func`2<<>f__AnonymousType0`2<System.Int32,System.Int32>,System.Int32> <>9__10_1
    static void _set_$$9__10_1(::System::Func_2<::GlobalNamespace::$$f__AnonymousType0_2<int, int>*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x12663E0
    static void _cctor();
    // <>f__AnonymousType0`2<System.Int32,System.Int32> <.ctor>b__10_0(System.Int32 v, System.Int32 i)
    // Offset: 0x1266448
    ::GlobalNamespace::$$f__AnonymousType0_2<int, int>* $_ctor$b__10_0(int v, int i);
    // System.Int32 <.ctor>b__10_1(<>f__AnonymousType0`2<System.Int32,System.Int32> o)
    // Offset: 0x12664CC
    int $_ctor$b__10_1(::GlobalNamespace::$$f__AnonymousType0_2<int, int>* o);
    // public System.Void .ctor()
    // Offset: 0x1266440
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLookup::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Lookups::FloorLookup::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLookup::$$c*, creationType>()));
    }
  }; // OggVorbisEncoder.Lookups.FloorLookup/OggVorbisEncoder.Lookups.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::FloorLookup::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OggVorbisEncoder::Lookups::FloorLookup::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::FloorLookup::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::FloorLookup::$$c::$_ctor$b__10_0
// Il2CppName: <.ctor>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::$$f__AnonymousType0_2<int, int>* (OggVorbisEncoder::Lookups::FloorLookup::$$c::*)(int, int)>(&OggVorbisEncoder::Lookups::FloorLookup::$$c::$_ctor$b__10_0)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::FloorLookup::$$c*), "<.ctor>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, i});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::FloorLookup::$$c::$_ctor$b__10_1
// Il2CppName: <.ctor>b__10_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Lookups::FloorLookup::$$c::*)(::GlobalNamespace::$$f__AnonymousType0_2<int, int>*)>(&OggVorbisEncoder::Lookups::FloorLookup::$$c::$_ctor$b__10_1)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "<>f__AnonymousType0`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::FloorLookup::$$c*), "<.ctor>b__10_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::FloorLookup::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
