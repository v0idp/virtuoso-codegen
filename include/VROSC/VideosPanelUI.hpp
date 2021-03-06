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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PaginatedList
  class PaginatedList;
  // Forward declaring type: PaginatedListDataHolder
  class PaginatedListDataHolder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: VideosPanelUI
  class VideosPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VideosPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideosPanelUI*, "VROSC", "VideosPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VideosPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class VideosPanelUI : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::VideosPanelUI::$Awake$d__6
    struct $Awake$d__6;
    public:
    // private UnityEngine.GameObject _loadingIcon
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* loadingIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _noVideosErrorLabel
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* noVideosErrorLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _connectionErrorLabel
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* connectionErrorLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.PaginatedList _paginatedList
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::PaginatedList* paginatedList;
    // Field size check
    static_assert(sizeof(::VROSC::PaginatedList*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.PaginatedListDataHolder> _dataList
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* dataList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*) == 0x8);
    // private VROSC.PaginatedListDataHolder _selectedDataHolder
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::PaginatedListDataHolder* selectedDataHolder;
    // Field size check
    static_assert(sizeof(::VROSC::PaginatedListDataHolder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _loadingIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__loadingIcon();
    // Get instance field reference: private UnityEngine.GameObject _noVideosErrorLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__noVideosErrorLabel();
    // Get instance field reference: private UnityEngine.GameObject _connectionErrorLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__connectionErrorLabel();
    // Get instance field reference: private VROSC.PaginatedList _paginatedList
    [[deprecated("Use field access instead!")]] ::VROSC::PaginatedList*& dyn__paginatedList();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.PaginatedListDataHolder> _dataList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& dyn__dataList();
    // Get instance field reference: private VROSC.PaginatedListDataHolder _selectedDataHolder
    [[deprecated("Use field access instead!")]] ::VROSC::PaginatedListDataHolder*& dyn__selectedDataHolder();
    // public System.Void .ctor()
    // Offset: 0x19236D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideosPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VideosPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideosPanelUI*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x19230A8
    void Awake();
    // private System.Void VideoButtonPressed(VROSC.PaginatedListDataHolder dataHolder)
    // Offset: 0x192316C
    void VideoButtonPressed(::VROSC::PaginatedListDataHolder* dataHolder);
    // private System.Void VideoPlayerClosed()
    // Offset: 0x19232A0
    void VideoPlayerClosed();
    // private System.Boolean IsVersionCompatible(System.String requiredVersion, System.String versionToCheck)
    // Offset: 0x19232BC
    bool IsVersionCompatible(::StringW requiredVersion, ::StringW versionToCheck);
  }; // VROSC.VideosPanelUI
  #pragma pack(pop)
  static check_size<sizeof(VideosPanelUI), 64 + sizeof(::VROSC::PaginatedListDataHolder*)> __VROSC_VideosPanelUISizeCheck;
  static_assert(sizeof(VideosPanelUI) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VideosPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::VideosPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VideosPanelUI::*)()>(&VROSC::VideosPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideosPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VideosPanelUI::VideoButtonPressed
// Il2CppName: VideoButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VideosPanelUI::*)(::VROSC::PaginatedListDataHolder*)>(&VROSC::VideosPanelUI::VideoButtonPressed)> {
  static const MethodInfo* get() {
    static auto* dataHolder = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideosPanelUI*), "VideoButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataHolder});
  }
};
// Writing MetadataGetter for method: VROSC::VideosPanelUI::VideoPlayerClosed
// Il2CppName: VideoPlayerClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VideosPanelUI::*)()>(&VROSC::VideosPanelUI::VideoPlayerClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideosPanelUI*), "VideoPlayerClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VideosPanelUI::IsVersionCompatible
// Il2CppName: IsVersionCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::VideosPanelUI::*)(::StringW, ::StringW)>(&VROSC::VideosPanelUI::IsVersionCompatible)> {
  static const MethodInfo* get() {
    static auto* requiredVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* versionToCheck = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideosPanelUI*), "IsVersionCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requiredVersion, versionToCheck});
  }
};
