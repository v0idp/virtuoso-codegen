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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MinMaxFloat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxFloat*, "VROSC", "MinMaxFloat");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MinMaxFloat
  // [TokenAttribute] Offset: FFFFFFFF
  class MinMaxFloat : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single _min
    // Size: 0x4
    // Offset: 0x10
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _max
    // Size: 0x4
    // Offset: 0x14
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _min
    float& dyn__min();
    // Get instance field reference: private System.Single _max
    float& dyn__max();
    // public System.Single get_Min()
    // Offset: 0x8B4E70
    float get_Min();
    // public System.Single get_Max()
    // Offset: 0x8B4E78
    float get_Max();
    // public System.Single get_Range()
    // Offset: 0x8B4E80
    float get_Range();
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0x8A7AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MinMaxFloat* New_ctor(float min, float max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MinMaxFloat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MinMaxFloat*, creationType>(min, max)));
    }
    // public System.Single Random()
    // Offset: 0x8B4E8C
    float Random();
    // public System.Single Lerp(System.Single amount, System.Boolean clamp)
    // Offset: 0x8AD158
    float Lerp(float amount, bool clamp);
    // public System.Single InverseLerp(System.Single amount, System.Boolean clamp)
    // Offset: 0x8ACF54
    float InverseLerp(float amount, bool clamp);
    // public System.Single Clamp(System.Single value)
    // Offset: 0x8AC1FC
    float Clamp(float value);
    // public System.Void Invert()
    // Offset: 0x8B4E98
    void Invert();
  }; // VROSC.MinMaxFloat
  #pragma pack(pop)
  static check_size<sizeof(MinMaxFloat), 20 + sizeof(float)> __VROSC_MinMaxFloatSizeCheck;
  static_assert(sizeof(MinMaxFloat) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MinMaxFloat::get_Min
// Il2CppName: get_Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)()>(&VROSC::MinMaxFloat::get_Min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "get_Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::get_Max
// Il2CppName: get_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)()>(&VROSC::MinMaxFloat::get_Max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "get_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::get_Range
// Il2CppName: get_Range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)()>(&VROSC::MinMaxFloat::get_Range)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "get_Range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MinMaxFloat::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)()>(&VROSC::MinMaxFloat::Random)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)(float, bool)>(&VROSC::MinMaxFloat::Lerp)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clamp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount, clamp});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::InverseLerp
// Il2CppName: InverseLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)(float, bool)>(&VROSC::MinMaxFloat::InverseLerp)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clamp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "InverseLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount, clamp});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MinMaxFloat::*)(float)>(&VROSC::MinMaxFloat::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxFloat::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MinMaxFloat::*)()>(&VROSC::MinMaxFloat::Invert)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxFloat*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
