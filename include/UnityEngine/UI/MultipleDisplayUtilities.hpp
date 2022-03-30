// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: MultipleDisplayUtilities
  class MultipleDisplayUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::MultipleDisplayUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MultipleDisplayUtilities*, "UnityEngine.UI", "MultipleDisplayUtilities");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.MultipleDisplayUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class MultipleDisplayUtilities : public ::Il2CppObject {
    public:
    // static public System.Boolean GetRelativeMousePositionForDrag(UnityEngine.EventSystems.PointerEventData eventData, ref UnityEngine.Vector2 position)
    // Offset: 0xF352D8
    static bool GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ByRef<::UnityEngine::Vector2> position);
    // static public UnityEngine.Vector2 GetMousePositionRelativeToMainDisplayResolution()
    // Offset: 0xF353A8
    static ::UnityEngine::Vector2 GetMousePositionRelativeToMainDisplayResolution();
  }; // UnityEngine.UI.MultipleDisplayUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag
// Il2CppName: GetRelativeMousePositionForDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MultipleDisplayUtilities*), "GetRelativeMousePositionForDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, position});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MultipleDisplayUtilities::GetMousePositionRelativeToMainDisplayResolution
// Il2CppName: GetMousePositionRelativeToMainDisplayResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::UI::MultipleDisplayUtilities::GetMousePositionRelativeToMainDisplayResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MultipleDisplayUtilities*), "GetMousePositionRelativeToMainDisplayResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
