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
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: GroundKey
  class GroundKey;
  // Forward declaring type: HelmController
  class HelmController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision
  class Collision;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: GroundKeyboard
  class GroundKeyboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::GroundKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::GroundKeyboard*, "AudioHelm", "GroundKeyboard");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.GroundKeyboard
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 7820B4
  class GroundKeyboard : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::AudioHelm::GroundKeyboard::$OnCollisionStay$d__19
    class $OnCollisionStay$d__19;
    // Nested type: ::AudioHelm::GroundKeyboard::$OnCollisionEnter$d__20
    class $OnCollisionEnter$d__20;
    public:
    // public AudioHelm.GroundKey keyModel
    // Size: 0x8
    // Offset: 0x18
    ::AudioHelm::GroundKey* keyModel;
    // Field size check
    static_assert(sizeof(::AudioHelm::GroundKey*) == 0x8);
    // public AudioHelm.HelmController synth
    // Size: 0x8
    // Offset: 0x20
    ::AudioHelm::HelmController* synth;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmController*) == 0x8);
    // public UnityEngine.Vector3 keyOffset
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 keyOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single verticalOffset
    // Size: 0x4
    // Offset: 0x34
    float verticalOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 numKeys
    // Size: 0x4
    // Offset: 0x38
    int numKeys;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 startingKey
    // Size: 0x4
    // Offset: 0x3C
    int startingKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32[] scale
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> scale;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Int32 octaveSize
    // Size: 0x4
    // Offset: 0x48
    int octaveSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: octaveSize and: keys
    char __padding7[0x4] = {};
    // private AudioHelm.GroundKey[] keys
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::AudioHelm::GroundKey*> keys;
    // Field size check
    static_assert(sizeof(::ArrayW<::AudioHelm::GroundKey*>) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> currentIndices
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::HashSet_1<int>* currentIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> newIndices
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::HashSet_1<int>* newIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AudioHelm.GroundKey keyModel
    [[deprecated]] ::AudioHelm::GroundKey*& dyn_keyModel();
    // Get instance field reference: public AudioHelm.HelmController synth
    [[deprecated]] ::AudioHelm::HelmController*& dyn_synth();
    // Get instance field reference: public UnityEngine.Vector3 keyOffset
    [[deprecated]] ::UnityEngine::Vector3& dyn_keyOffset();
    // Get instance field reference: public System.Single verticalOffset
    [[deprecated]] float& dyn_verticalOffset();
    // Get instance field reference: public System.Int32 numKeys
    [[deprecated]] int& dyn_numKeys();
    // Get instance field reference: public System.Int32 startingKey
    [[deprecated]] int& dyn_startingKey();
    // Get instance field reference: public System.Int32[] scale
    [[deprecated]] ::ArrayW<int>& dyn_scale();
    // Get instance field reference: public System.Int32 octaveSize
    [[deprecated]] int& dyn_octaveSize();
    // Get instance field reference: private AudioHelm.GroundKey[] keys
    [[deprecated]] ::ArrayW<::AudioHelm::GroundKey*>& dyn_keys();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> currentIndices
    [[deprecated]] ::System::Collections::Generic::HashSet_1<int>*& dyn_currentIndices();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> newIndices
    [[deprecated]] ::System::Collections::Generic::HashSet_1<int>*& dyn_newIndices();
    // private System.Void Start()
    // Offset: 0x19A9C24
    void Start();
    // private AudioHelm.GroundKey CreateKey(System.Int32 key)
    // Offset: 0x19A9D1C
    ::AudioHelm::GroundKey* CreateKey(int key);
    // private System.Int32 GetKeyFromIndex(System.Int32 index)
    // Offset: 0x19A9E48
    int GetKeyFromIndex(int index);
    // private System.Void NoteOn(System.Int32 index)
    // Offset: 0x19A9E9C
    void NoteOn(int index);
    // private System.Void NoteOff(System.Int32 index)
    // Offset: 0x19A9F78
    void NoteOff(int index);
    // private System.Void TryNoteOn(System.Int32 index, UnityEngine.Vector3 contactPoint)
    // Offset: 0x19AA04C
    void TryNoteOn(int index, ::UnityEngine::Vector3 contactPoint);
    // private System.Void TryNoteOff(System.Int32 index)
    // Offset: 0x19AA16C
    void TryNoteOff(int index);
    // private System.Void Impulse(UnityEngine.Collision collision)
    // Offset: 0x19AA1BC
    void Impulse(::UnityEngine::Collision* collision);
    // private System.Collections.IEnumerator OnCollisionStay(UnityEngine.Collision collision)
    // Offset: 0x19AA378
    ::System::Collections::IEnumerator* OnCollisionStay(::UnityEngine::Collision* collision);
    // private System.Collections.IEnumerator OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x19AA3F0
    ::System::Collections::IEnumerator* OnCollisionEnter(::UnityEngine::Collision* collision);
    // private System.Void FixedUpdate()
    // Offset: 0x19AA468
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x19AA610
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroundKeyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::GroundKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroundKeyboard*, creationType>()));
    }
  }; // AudioHelm.GroundKeyboard
  #pragma pack(pop)
  static check_size<sizeof(GroundKeyboard), 96 + sizeof(::System::Collections::Generic::HashSet_1<int>*)> __AudioHelm_GroundKeyboardSizeCheck;
  static_assert(sizeof(GroundKeyboard) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)()>(&AudioHelm::GroundKeyboard::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::CreateKey
// Il2CppName: CreateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::GroundKey* (AudioHelm::GroundKeyboard::*)(int)>(&AudioHelm::GroundKeyboard::CreateKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "CreateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::GetKeyFromIndex
// Il2CppName: GetKeyFromIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::GroundKeyboard::*)(int)>(&AudioHelm::GroundKeyboard::GetKeyFromIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "GetKeyFromIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)(int)>(&AudioHelm::GroundKeyboard::NoteOn)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)(int)>(&AudioHelm::GroundKeyboard::NoteOff)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::TryNoteOn
// Il2CppName: TryNoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)(int, ::UnityEngine::Vector3)>(&AudioHelm::GroundKeyboard::TryNoteOn)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* contactPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "TryNoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, contactPoint});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::TryNoteOff
// Il2CppName: TryNoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)(int)>(&AudioHelm::GroundKeyboard::TryNoteOff)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "TryNoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::Impulse
// Il2CppName: Impulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)(::UnityEngine::Collision*)>(&AudioHelm::GroundKeyboard::Impulse)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "Impulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::OnCollisionStay
// Il2CppName: OnCollisionStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (AudioHelm::GroundKeyboard::*)(::UnityEngine::Collision*)>(&AudioHelm::GroundKeyboard::OnCollisionStay)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "OnCollisionStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (AudioHelm::GroundKeyboard::*)(::UnityEngine::Collision*)>(&AudioHelm::GroundKeyboard::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::GroundKeyboard::*)()>(&AudioHelm::GroundKeyboard::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::GroundKeyboard*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::GroundKeyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
