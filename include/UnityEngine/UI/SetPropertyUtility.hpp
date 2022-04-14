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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: SetPropertyUtility
  class SetPropertyUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::SetPropertyUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SetPropertyUtility*, "UnityEngine.UI", "SetPropertyUtility");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.SetPropertyUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class SetPropertyUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean SetColor(ref UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0x143443C
    static bool SetColor(ByRef<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue);
    // static public System.Boolean SetStruct(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool SetStruct(ByRef<T> currentValue, T newValue) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::SetPropertyUtility::SetStruct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UI", "SetPropertyUtility", "SetStruct", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(currentValue), ::il2cpp_utils::ExtractType(newValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(currentValue), newValue);
    }
    // static public System.Boolean SetClass(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool SetClass(ByRef<T> currentValue, T newValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::SetPropertyUtility::SetClass");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UI", "SetPropertyUtility", "SetClass", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(currentValue), ::il2cpp_utils::ExtractType(newValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(currentValue), newValue);
    }
  }; // UnityEngine.UI.SetPropertyUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::SetPropertyUtility::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Color>, ::UnityEngine::Color)>(&UnityEngine::UI::SetPropertyUtility::SetColor)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    static auto* newValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SetPropertyUtility*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue, newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SetPropertyUtility::SetStruct
// Il2CppName: SetStruct
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UI::SetPropertyUtility::SetClass
// Il2CppName: SetClass
// Cannot write MetadataGetter for generic methods!
