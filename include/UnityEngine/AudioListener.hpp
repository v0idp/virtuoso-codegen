// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AudioBehaviour
#include "UnityEngine/AudioBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FFTWindow
  struct FFTWindow;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioListener
  class AudioListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 5AB844
  // [StaticAccessorAttribute] Offset: 5AB844
  class AudioListener : public ::UnityEngine::AudioBehaviour {
    public:
    // static public System.Boolean get_pause()
    // Offset: 0x12D5BA0
    static bool get_pause();
    // static public System.Void set_pause(System.Boolean value)
    // Offset: 0x12D5BD4
    static void set_pause(bool value);
    // static private System.Void GetSpectrumDataHelper(out System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x12D5B48
    static void GetSpectrumDataHelper(ByRef<::ArrayW<float>> samples, int channel, ::UnityEngine::FFTWindow window);
    // static public System.Void GetSpectrumData(System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x12D5C14
    static void GetSpectrumData(::ArrayW<float> samples, int channel, ::UnityEngine::FFTWindow window);
  }; // UnityEngine.AudioListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioListener::get_pause
// Il2CppName: get_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::AudioListener::get_pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "get_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioListener::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::AudioListener::set_pause)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioListener::GetSpectrumDataHelper
// Il2CppName: GetSpectrumDataHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<float>>, int, ::UnityEngine::FFTWindow)>(&UnityEngine::AudioListener::GetSpectrumDataHelper)> {
  static const MethodInfo* get() {
    static auto* samples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* window = &::il2cpp_utils::GetClassFromName("UnityEngine", "FFTWindow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "GetSpectrumDataHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samples, channel, window});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioListener::GetSpectrumData
// Il2CppName: GetSpectrumData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<float>, int, ::UnityEngine::FFTWindow)>(&UnityEngine::AudioListener::GetSpectrumData)> {
  static const MethodInfo* get() {
    static auto* samples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* window = &::il2cpp_utils::GetClassFromName("UnityEngine", "FFTWindow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "GetSpectrumData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samples, channel, window});
  }
};
