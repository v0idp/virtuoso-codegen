// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.AttributedTypeConverter
#include "Firebase/Firestore/Converters/AttributedTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2*, "Firebase.Firestore.Converters", "AttributedTypeConverter/<CreateObjectCreator>c__AnonStorey2");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.AttributedTypeConverter/Firebase.Firestore.Converters.<CreateObjectCreator>c__AnonStorey2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2 : public ::Il2CppObject {
    public:
    public:
    // System.Reflection.ConstructorInfo ctor
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::ConstructorInfo* ctor;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::ConstructorInfo*
    constexpr operator ::System::Reflection::ConstructorInfo*() const noexcept {
      return ctor;
    }
    // Get instance field reference: System.Reflection.ConstructorInfo ctor
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn_ctor();
    // public System.Void .ctor()
    // Offset: 0xD49634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2*, creationType>()));
    }
    // System.Object <>m__0()
    // Offset: 0xD66904
    ::Il2CppObject* $$m__0();
  }; // Firebase.Firestore.Converters.AttributedTypeConverter/Firebase.Firestore.Converters.<CreateObjectCreator>c__AnonStorey2
  #pragma pack(pop)
  static check_size<sizeof(AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2), 16 + sizeof(::System::Reflection::ConstructorInfo*)> __Firebase_Firestore_Converters_AttributedTypeConverter_$CreateObjectCreator$c__AnonStorey2SizeCheck;
  static_assert(sizeof(AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2::*)()>(&Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::AttributedTypeConverter::$CreateObjectCreator$c__AnonStorey2*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
