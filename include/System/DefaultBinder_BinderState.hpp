// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::DefaultBinder::BinderState);
DEFINE_IL2CPP_ARG_TYPE(::System::DefaultBinder::BinderState*, "System", "DefaultBinder/BinderState");
// Type namespace: System
namespace System {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: System.DefaultBinder/System.BinderState
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultBinder::BinderState : public ::Il2CppObject {
    public:
    public:
    // System.Int32[] m_argsMap
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> m_argsMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 m_originalSize
    // Size: 0x4
    // Offset: 0x18
    int m_originalSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean m_isParamArray
    // Size: 0x1
    // Offset: 0x1C
    bool m_isParamArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Int32[] m_argsMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_argsMap();
    // Get instance field reference: System.Int32 m_originalSize
    [[deprecated("Use field access instead!")]] int& dyn_m_originalSize();
    // Get instance field reference: System.Boolean m_isParamArray
    [[deprecated("Use field access instead!")]] bool& dyn_m_isParamArray();
    // System.Void .ctor(System.Int32[] argsMap, System.Int32 originalSize, System.Boolean isParamArray)
    // Offset: 0x13AA5A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBinder::BinderState* New_ctor(::ArrayW<int> argsMap, int originalSize, bool isParamArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::DefaultBinder::BinderState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBinder::BinderState*, creationType>(argsMap, originalSize, isParamArray)));
    }
  }; // System.DefaultBinder/System.BinderState
  #pragma pack(pop)
  static check_size<sizeof(DefaultBinder::BinderState), 28 + sizeof(bool)> __System_DefaultBinder_BinderStateSizeCheck;
  static_assert(sizeof(DefaultBinder::BinderState) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DefaultBinder::BinderState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
