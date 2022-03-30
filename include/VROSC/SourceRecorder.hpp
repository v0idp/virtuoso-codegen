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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SourceRecorder
  class SourceRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SourceRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SourceRecorder*, "VROSC", "SourceRecorder");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SourceRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class SourceRecorder : public ::UnityEngine::MonoBehaviour {
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
    // protected System.Collections.Generic.List`1<System.Single> _fullRecording
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<float>* fullRecording;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    // protected System.Int32 _fullRecordingWriteIndex
    // Size: 0x4
    // Offset: 0x20
    int fullRecordingWriteIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 _fullRecordingMaxLength
    // Size: 0x4
    // Offset: 0x24
    int fullRecordingMaxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Action`1<System.Single[]> OnRecordingFilled
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::ArrayW<float>>* OnRecordingFilled;
    // Field size check
    static_assert(sizeof(::System::Action_1<::ArrayW<float>>*) == 0x8);
    // protected System.Boolean _performRecordingFilledCallback
    // Size: 0x1
    // Offset: 0x30
    bool performRecordingFilledCallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: performRecordingFilledCallback and: callbackAfterLength
    char __padding4[0x3] = {};
    // protected System.Int32 _callbackAfterLength
    // Size: 0x4
    // Offset: 0x34
    int callbackAfterLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean _recording
    // Size: 0x1
    // Offset: 0x38
    bool recording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _overdub
    // Size: 0x1
    // Offset: 0x39
    bool overdub;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _useArrayReference
    // Size: 0x1
    // Offset: 0x3A
    bool useArrayReference;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useArrayReference and: arrayReference
    char __padding8[0x5] = {};
    // protected System.Single[] _arrayReference
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<float> arrayReference;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Collections.Generic.List`1<System.Single> _fullRecording
    ::System::Collections::Generic::List_1<float>*& dyn__fullRecording();
    // Get instance field reference: protected System.Int32 _fullRecordingWriteIndex
    int& dyn__fullRecordingWriteIndex();
    // Get instance field reference: protected System.Int32 _fullRecordingMaxLength
    int& dyn__fullRecordingMaxLength();
    // Get instance field reference: public System.Action`1<System.Single[]> OnRecordingFilled
    ::System::Action_1<::ArrayW<float>>*& dyn_OnRecordingFilled();
    // Get instance field reference: protected System.Boolean _performRecordingFilledCallback
    bool& dyn__performRecordingFilledCallback();
    // Get instance field reference: protected System.Int32 _callbackAfterLength
    int& dyn__callbackAfterLength();
    // Get instance field reference: protected System.Boolean _recording
    bool& dyn__recording();
    // Get instance field reference: protected System.Boolean _overdub
    bool& dyn__overdub();
    // Get instance field reference: protected System.Boolean _useArrayReference
    bool& dyn__useArrayReference();
    // Get instance field reference: protected System.Single[] _arrayReference
    ::ArrayW<float>& dyn__arrayReference();
    // public System.Boolean get_Recording()
    // Offset: 0x13B9B54
    bool get_Recording();
    // static protected System.Void RoutingDemo_GetData(System.Int32 target, System.Single[] data, System.Int32 numsamples, System.Int32 numchannels)
    // Offset: 0x13B9AA4
    static void RoutingDemo_GetData(int target, ::ArrayW<float> data, int numsamples, int numchannels);
    // public System.Void Setup()
    // Offset: 0x13B9B5C
    void Setup();
    // protected System.Void Update()
    // Offset: 0x13B9BE8
    void Update();
    // public System.Void StartRecording(System.Action`1<System.Single[]> recordingFilledCallback, System.Int32 length, System.Single[] arrayReference, System.Boolean overdub, System.Int32 callbackAfterLength)
    // Offset: 0x13B9C8C
    void StartRecording(::System::Action_1<::ArrayW<float>>* recordingFilledCallback, int length, ::ArrayW<float> arrayReference, bool overdub, int callbackAfterLength);
    // public System.Single[] StopRecording()
    // Offset: 0x13B9E70
    ::ArrayW<float> StopRecording();
    // public System.Single[] StealRecording(System.Boolean clear, System.Boolean stealEvenIfNotRecording)
    // Offset: 0x13B9EA8
    ::ArrayW<float> StealRecording(bool clear, bool stealEvenIfNotRecording);
    // public System.Single[] GetRecordingSpan(System.Int32 startIndex, System.Int32 endIndex, out System.Int32 currentIndex)
    // Offset: 0x13BA074
    ::ArrayW<float> GetRecordingSpan(int startIndex, int endIndex, ByRef<int> currentIndex);
    // private System.Void CheckBuffer()
    // Offset: 0x13B9BEC
    void CheckBuffer();
    // protected System.Single[] CreateRecordingCopy()
    // Offset: 0x13BA1FC
    ::ArrayW<float> CreateRecordingCopy();
    // protected System.Void AddDataToRecording(System.Single[] data, System.Int32 channels)
    // Offset: 0x13BA2B4
    void AddDataToRecording(::ArrayW<float> data, int channels);
    // public System.Void .ctor()
    // Offset: 0x13BA5E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SourceRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SourceRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SourceRecorder*, creationType>()));
    }
  }; // VROSC.SourceRecorder
  #pragma pack(pop)
  static check_size<sizeof(SourceRecorder), 64 + sizeof(::ArrayW<float>)> __VROSC_SourceRecorderSizeCheck;
  static_assert(sizeof(SourceRecorder) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SourceRecorder::get_Recording
// Il2CppName: get_Recording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::get_Recording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "get_Recording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::RoutingDemo_GetData
// Il2CppName: RoutingDemo_GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<float>, int, int)>(&VROSC::SourceRecorder::RoutingDemo_GetData)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* numsamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* numchannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "RoutingDemo_GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, data, numsamples, numchannels});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::StartRecording
// Il2CppName: StartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SourceRecorder::*)(::System::Action_1<::ArrayW<float>>*, int, ::ArrayW<float>, bool, int)>(&VROSC::SourceRecorder::StartRecording)> {
  static const MethodInfo* get() {
    static auto* recordingFilledCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)})->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arrayReference = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* overdub = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callbackAfterLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "StartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingFilledCallback, length, arrayReference, overdub, callbackAfterLength});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::StopRecording
// Il2CppName: StopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::StopRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "StopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::StealRecording
// Il2CppName: StealRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (VROSC::SourceRecorder::*)(bool, bool)>(&VROSC::SourceRecorder::StealRecording)> {
  static const MethodInfo* get() {
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stealEvenIfNotRecording = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "StealRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clear, stealEvenIfNotRecording});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::GetRecordingSpan
// Il2CppName: GetRecordingSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (VROSC::SourceRecorder::*)(int, int, ByRef<int>)>(&VROSC::SourceRecorder::GetRecordingSpan)> {
  static const MethodInfo* get() {
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* endIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* currentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "GetRecordingSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startIndex, endIndex, currentIndex});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::CheckBuffer
// Il2CppName: CheckBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::CheckBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "CheckBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::CreateRecordingCopy
// Il2CppName: CreateRecordingCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (VROSC::SourceRecorder::*)()>(&VROSC::SourceRecorder::CreateRecordingCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "CreateRecordingCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::AddDataToRecording
// Il2CppName: AddDataToRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SourceRecorder::*)(::ArrayW<float>, int)>(&VROSC::SourceRecorder::AddDataToRecording)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SourceRecorder*), "AddDataToRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: VROSC::SourceRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
