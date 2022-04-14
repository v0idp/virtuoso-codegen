// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Forward declaring type: ColorChanger
  class ColorChanger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Demo::UIShapesDemo::ColorChanger);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Demo::UIShapesDemo::ColorChanger*, "Oculus.Voice.Demo.UIShapesDemo", "ColorChanger");
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Demo.UIShapesDemo.ColorChanger
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorChanger : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void UpdateColor(Facebook.WitAi.Lib.WitResponseNode commandResult)
    // Offset: 0x9482CC
    void UpdateColor(::Facebook::WitAi::Lib::WitResponseNode* commandResult);
    // public System.Void UpdateColor(System.String[] results)
    // Offset: 0x94854C
    void UpdateColor(::ArrayW<::StringW> results);
    // public System.Void UpdateColor(System.String colorName, System.String shape)
    // Offset: 0x948360
    void UpdateColor(::StringW colorName, ::StringW shape);
    // public System.Void .ctor()
    // Offset: 0x948588
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorChanger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Demo::UIShapesDemo::ColorChanger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorChanger*, creationType>()));
    }
  }; // Oculus.Voice.Demo.UIShapesDemo.ColorChanger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::ColorChanger::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor)> {
  static const MethodInfo* get() {
    static auto* commandResult = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::ColorChanger*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{commandResult});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::ColorChanger::*)(::ArrayW<::StringW>)>(&Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor)> {
  static const MethodInfo* get() {
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::ColorChanger*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::ColorChanger::*)(::StringW, ::StringW)>(&Oculus::Voice::Demo::UIShapesDemo::ColorChanger::UpdateColor)> {
  static const MethodInfo* get() {
    static auto* colorName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shape = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::ColorChanger*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorName, shape});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::ColorChanger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
