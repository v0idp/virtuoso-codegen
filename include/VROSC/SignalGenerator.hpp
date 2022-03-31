// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Node
#include "VROSC/Node.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalNode
  class SignalNode;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalGenerator
  class SignalGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalGenerator*, "VROSC", "SignalGenerator");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalGenerator : public ::VROSC::Node {
    public:
    // Nested type: ::VROSC::SignalGenerator::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.SignalGenerator/VROSC.Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.SignalGenerator/VROSC.Type Constant
      static constexpr const int Constant = 0;
      // Get static field: static public VROSC.SignalGenerator/VROSC.Type Constant
      static ::VROSC::SignalGenerator::Type _get_Constant();
      // Set static field: static public VROSC.SignalGenerator/VROSC.Type Constant
      static void _set_Constant(::VROSC::SignalGenerator::Type value);
      // static field const value: static public VROSC.SignalGenerator/VROSC.Type Beat
      static constexpr const int Beat = 1;
      // Get static field: static public VROSC.SignalGenerator/VROSC.Type Beat
      static ::VROSC::SignalGenerator::Type _get_Beat();
      // Set static field: static public VROSC.SignalGenerator/VROSC.Type Beat
      static void _set_Beat(::VROSC::SignalGenerator::Type value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.SignalGenerator/VROSC.Type
    #pragma pack(pop)
    static check_size<sizeof(SignalGenerator::Type), 0 + sizeof(int)> __VROSC_SignalGenerator_TypeSizeCheck;
    static_assert(sizeof(SignalGenerator::Type) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean _bypass
    // Size: 0x1
    // Offset: 0x18
    bool bypass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bypass and: output
    char __padding0[0x7] = {};
    // protected VROSC.SignalNode[] _output
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::VROSC::SignalNode*> output;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.Signal _signal
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::Signal* signal;
    // Field size check
    static_assert(sizeof(::VROSC::Signal*) == 0x8);
    // private VROSC.SignalGenerator/VROSC.Type _type
    // Size: 0x4
    // Offset: 0x30
    ::VROSC::SignalGenerator::Type type;
    // Field size check
    static_assert(sizeof(::VROSC::SignalGenerator::Type) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean _bypass
    bool& dyn__bypass();
    // Get instance field reference: protected VROSC.SignalNode[] _output
    ::ArrayW<::VROSC::SignalNode*>& dyn__output();
    // Get instance field reference: private VROSC.Signal _signal
    ::VROSC::Signal*& dyn__signal();
    // Get instance field reference: private VROSC.SignalGenerator/VROSC.Type _type
    ::VROSC::SignalGenerator::Type& dyn__type();
    // protected System.Void Update()
    // Offset: 0x13B5460
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13B55C0
    // Implemented from: VROSC.Node
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalGenerator*, creationType>()));
    }
  }; // VROSC.SignalGenerator
  #pragma pack(pop)
  static check_size<sizeof(SignalGenerator), 48 + sizeof(::VROSC::SignalGenerator::Type)> __VROSC_SignalGeneratorSizeCheck;
  static_assert(sizeof(SignalGenerator) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalGenerator::Type, "VROSC", "SignalGenerator/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalGenerator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalGenerator::*)()>(&VROSC::SignalGenerator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalGenerator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SignalGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
