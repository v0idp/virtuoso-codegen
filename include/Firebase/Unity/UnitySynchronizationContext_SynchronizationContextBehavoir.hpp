// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Unity.UnitySynchronizationContext
#include "Firebase/Unity/UnitySynchronizationContext.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Unity
namespace Firebase::Unity {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir*, "Firebase.Unity", "UnitySynchronizationContext/SynchronizationContextBehavoir");
// Type namespace: Firebase.Unity
namespace Firebase::Unity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.SynchronizationContextBehavoir
  // [TokenAttribute] Offset: FFFFFFFF
  class UnitySynchronizationContext::SynchronizationContextBehavoir : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::$Start$c__Iterator0
    class $Start$c__Iterator0;
    public:
    // private System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> callbackQueue
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>* callbackQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> callbackQueue
    [[deprecated]] ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>*& dyn_callbackQueue();
    // public System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> get_CallbackQueue()
    // Offset: 0x18CAE94
    ::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>* get_CallbackQueue();
    // private System.Collections.IEnumerator Start()
    // Offset: 0x18CB934
    ::System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x18CB92C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySynchronizationContext::SynchronizationContextBehavoir* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySynchronizationContext::SynchronizationContextBehavoir*, creationType>()));
    }
  }; // Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.SynchronizationContextBehavoir
  #pragma pack(pop)
  static check_size<sizeof(UnitySynchronizationContext::SynchronizationContextBehavoir), 24 + sizeof(::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>*)> __Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoirSizeCheck;
  static_assert(sizeof(UnitySynchronizationContext::SynchronizationContextBehavoir) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::get_CallbackQueue
// Il2CppName: get_CallbackQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Queue_1<::System::Tuple_2<::System::Threading::SendOrPostCallback*, ::Il2CppObject*>*>* (Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::*)()>(&Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::get_CallbackQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir*), "get_CallbackQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::*)()>(&Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::SynchronizationContextBehavoir::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
