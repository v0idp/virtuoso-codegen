// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.FSharpUtils
#include "Newtonsoft/Json/Utilities/FSharpUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0*, "Newtonsoft.Json.Utilities", "FSharpUtils/<>c__DisplayClass52_0");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.FSharpUtils/Newtonsoft.Json.Utilities.<>c__DisplayClass52_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FSharpUtils::$$c__DisplayClass52_0 : public ::Il2CppObject {
    public:
    public:
    // [NullableAttribute] Offset: 0x675708
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> call
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* call;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x675778
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> invoke
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* invoke;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> call
    [[deprecated]] ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_call();
    // Get instance field reference: public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> invoke
    [[deprecated]] ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_invoke();
    // System.Object <CreateFSharpFuncCall>b__0(System.Object target, System.Object[] args)
    // Offset: 0x159E870
    ::Il2CppObject* $CreateFSharpFuncCall$b__0(::Il2CppObject* target, ::ArrayW<::Il2CppObject*> args);
    // public System.Void .ctor()
    // Offset: 0x159E868
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FSharpUtils::$$c__DisplayClass52_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FSharpUtils::$$c__DisplayClass52_0*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.FSharpUtils/Newtonsoft.Json.Utilities.<>c__DisplayClass52_0
  #pragma pack(pop)
  static check_size<sizeof(FSharpUtils::$$c__DisplayClass52_0), 24 + sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Utilities_FSharpUtils_$$c__DisplayClass52_0SizeCheck;
  static_assert(sizeof(FSharpUtils::$$c__DisplayClass52_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0::$CreateFSharpFuncCall$b__0
// Il2CppName: <CreateFSharpFuncCall>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0::$CreateFSharpFuncCall$b__0)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0*), "<CreateFSharpFuncCall>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
