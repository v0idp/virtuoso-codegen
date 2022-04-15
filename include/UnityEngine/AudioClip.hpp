// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 6C1910
  // [NativeHeaderAttribute] Offset: 6C1910
  class AudioClip : public ::UnityEngine::Object {
    public:
    // Nested type: ::UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: ::UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6C2058
    // private UnityEngine.AudioClip/UnityEngine.PCMReaderCallback m_PCMReaderCallback
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip::PCMReaderCallback*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6C2094
    // private UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback m_PCMSetPositionCallback
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip::PCMSetPositionCallback*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioClip/UnityEngine.PCMReaderCallback m_PCMReaderCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip::PCMReaderCallback*& dyn_m_PCMReaderCallback();
    // Get instance field reference: private UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback m_PCMSetPositionCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip::PCMSetPositionCallback*& dyn_m_PCMSetPositionCallback();
    // public System.Single get_length()
    // Offset: 0x18D65A0
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x18D65E0
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x18D6620
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x18D6660
    int get_frequency();
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/UnityEngine.PCMReaderCallback value)
    // Offset: 0x18D6C38
    void add_m_PCMReaderCallback(::UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/UnityEngine.PCMReaderCallback value)
    // Offset: 0x18D6D78
    void remove_m_PCMReaderCallback(::UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback value)
    // Offset: 0x18D6CD8
    void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback value)
    // Offset: 0x18D6E18
    void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void .ctor()
    // Offset: 0x18D6374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip*, creationType>()));
    }
    // static private System.Boolean GetData(UnityEngine.AudioClip clip, out System.Single[] data, System.Int32 numSamples, System.Int32 samplesOffset)
    // Offset: 0x18D63DC
    static bool GetData(::UnityEngine::AudioClip* clip, ByRef<::ArrayW<float>> data, int numSamples, int samplesOffset);
    // static private System.Boolean SetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numsamples, System.Int32 samplesOffset)
    // Offset: 0x18D6444
    static bool SetData(::UnityEngine::AudioClip* clip, ::ArrayW<float> data, int numsamples, int samplesOffset);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x18D64AC
    static ::UnityEngine::AudioClip* Construct_Internal();
    // private System.String GetName()
    // Offset: 0x18D64E0
    ::StringW GetName();
    // private System.Void CreateUserSound(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x18D6520
    void CreateUserSound(::StringW name, int lengthSamples, int channels, int frequency, bool stream);
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x18D66A0
    bool GetData(::ArrayW<float> data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x18D6840
    bool SetData(::ArrayW<float> data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x18D6A7C
    static ::UnityEngine::AudioClip* Create(::StringW name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/UnityEngine.PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x18D6A8C
    static ::UnityEngine::AudioClip* Create(::StringW name, int lengthSamples, int channels, int frequency, bool stream, ::UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x18D6EB8
    void InvokePCMReaderCallback_Internal(::ArrayW<float> data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x18D723C
    void InvokePCMSetPositionCallback_Internal(int position);
  }; // UnityEngine.AudioClip
  #pragma pack(pop)
  static check_size<sizeof(AudioClip), 32 + sizeof(::UnityEngine::AudioClip::PCMSetPositionCallback*)> __UnityEngine_AudioClipSizeCheck;
  static_assert(sizeof(AudioClip) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_samples
// Il2CppName: get_samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_channels
// Il2CppName: get_channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_frequency
// Il2CppName: get_frequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_frequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_frequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMReaderCallback
// Il2CppName: add_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::add_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMReaderCallback
// Il2CppName: remove_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::remove_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMSetPositionCallback
// Il2CppName: add_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::add_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMSetPositionCallback
// Il2CppName: remove_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::remove_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AudioClip*, ByRef<::ArrayW<float>>, int, int)>(&UnityEngine::AudioClip::GetData)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    static auto* numSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* samplesOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, data, numSamples, samplesOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AudioClip*, ::ArrayW<float>, int, int)>(&UnityEngine::AudioClip::SetData)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* numsamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* samplesOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, data, numsamples, samplesOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Construct_Internal
// Il2CppName: Construct_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)()>(&UnityEngine::AudioClip::Construct_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Construct_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::GetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::CreateUserSound
// Il2CppName: CreateUserSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::StringW, int, int, int, bool)>(&UnityEngine::AudioClip::CreateUserSound)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "CreateUserSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::ArrayW<float>, int)>(&UnityEngine::AudioClip::GetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::ArrayW<float>, int)>(&UnityEngine::AudioClip::SetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::StringW, int, int, int, bool)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::StringW, int, int, int, bool, ::UnityEngine::AudioClip::PCMReaderCallback*, ::UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pcmreadercallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    static auto* pcmsetpositioncallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMReaderCallback_Internal
// Il2CppName: InvokePCMReaderCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::ArrayW<float>)>(&UnityEngine::AudioClip::InvokePCMReaderCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMReaderCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal
// Il2CppName: InvokePCMSetPositionCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(int)>(&UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMSetPositionCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
