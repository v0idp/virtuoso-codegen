// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LIV.SDK.Unity.SDKInputFrame
#include "LIV/SDK/Unity/SDKInputFrame.hpp"
// Including type: LIV.SDK.Unity.SDKResolution
#include "LIV/SDK/Unity/SDKResolution.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKTexture
  struct SDKTexture;
  // Forward declaring type: SDKApplicationOutput
  struct SDKApplicationOutput;
  // Forward declaring type: SDKOutputFrame
  struct SDKOutputFrame;
  // Forward declaring type: SDKPlane
  struct SDKPlane;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKBridge
  class SDKBridge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::SDKBridge);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKBridge*, "LIV.SDK.Unity", "SDKBridge");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.SDKBridge
  // [TokenAttribute] Offset: FFFFFFFF
  class SDKBridge : public ::Il2CppObject {
    public:
    // Nested type: ::LIV::SDK::Unity::SDKBridge::SDKInjection_1<T>
    template<typename T>
    struct SDKInjection_1;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1
    // [TokenAttribute] Offset: FFFFFFFF
    template<typename T>
    struct SDKInjection_1/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean active
      // Size: 0x1
      // Offset: 0x0
      bool active;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Action action
      // Size: 0x8
      // Offset: 0x0
      ::System::Action* action;
      // Field size check
      static_assert(sizeof(::System::Action*) == 0x8);
      // public T data
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T data;
      public:
      // Creating value type constructor for type: SDKInjection_1
      constexpr SDKInjection_1(bool active_ = {}, ::System::Action* action_ = {}, T data_ = {}) noexcept : active{active_}, action{action_}, data{data_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean active
      [[deprecated]] bool& dyn_active() {
        static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::SDKInjection_1::dyn_active");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "active"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Action action
      [[deprecated]] ::System::Action*& dyn_action() {
        static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::SDKInjection_1::dyn_action");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "action"))->offset;
        return *reinterpret_cast<::System::Action**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public T data
      [[deprecated]] T& dyn_data() {
        static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::SDKInjection_1::dyn_data");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "data"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1
    // Could not write size check! Type: LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1 is generic, or has no fields that are valid for size checks!
    // Get static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<LIV.SDK.Unity.SDKInputFrame> _injection_SDKInputFrame
    static ::LIV::SDK::Unity::SDKBridge::SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> _get__injection_SDKInputFrame();
    // Set static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<LIV.SDK.Unity.SDKInputFrame> _injection_SDKInputFrame
    static void _set__injection_SDKInputFrame(::LIV::SDK::Unity::SDKBridge::SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> value);
    // Get static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<LIV.SDK.Unity.SDKResolution> _injection_SDKResolution
    static ::LIV::SDK::Unity::SDKBridge::SDKInjection_1<::LIV::SDK::Unity::SDKResolution> _get__injection_SDKResolution();
    // Set static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<LIV.SDK.Unity.SDKResolution> _injection_SDKResolution
    static void _set__injection_SDKResolution(::LIV::SDK::Unity::SDKBridge::SDKInjection_1<::LIV::SDK::Unity::SDKResolution> value);
    // Get static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<System.Boolean> _injection_IsActive
    static ::LIV::SDK::Unity::SDKBridge::SDKInjection_1<bool> _get__injection_IsActive();
    // Set static field: static private LIV.SDK.Unity.SDKBridge/LIV.SDK.Unity.SDKInjection`1<System.Boolean> _injection_IsActive
    static void _set__injection_IsActive(::LIV::SDK::Unity::SDKBridge::SDKInjection_1<bool> value);
    // Get static field: static private System.Boolean _injection_DisableSubmit
    static bool _get__injection_DisableSubmit();
    // Set static field: static private System.Boolean _injection_DisableSubmit
    static void _set__injection_DisableSubmit(bool value);
    // Get static field: static private System.Boolean _injection_DisableSubmitApplicationOutput
    static bool _get__injection_DisableSubmitApplicationOutput();
    // Set static field: static private System.Boolean _injection_DisableSubmitApplicationOutput
    static void _set__injection_DisableSubmitApplicationOutput(bool value);
    // Get static field: static private System.Boolean _injection_DisableAddTexture
    static bool _get__injection_DisableAddTexture();
    // Set static field: static private System.Boolean _injection_DisableAddTexture
    static void _set__injection_DisableAddTexture(bool value);
    // Get static field: static private System.Boolean _injection_DisableCreateFrame
    static bool _get__injection_DisableCreateFrame();
    // Set static field: static private System.Boolean _injection_DisableCreateFrame
    static void _set__injection_DisableCreateFrame(bool value);
    // static public System.Boolean get_IsActive()
    // Offset: 0xDD2EB4
    static bool get_IsActive();
    // static private System.Void .cctor()
    // Offset: 0xDD3D04
    static void _cctor();
    // static public System.Int32 AddStringToChannel(System.Int32 slot, System.IntPtr str, System.Int32 length, System.UInt64 tag)
    // Offset: 0xDD2A1C
    static int AddStringToChannel(int slot, ::System::IntPtr str, int length, uint64_t tag);
    // static public System.Int32 addtexture(System.IntPtr sourcetexture, System.UInt64 tag)
    // Offset: 0xDD2A24
    static int addtexture(::System::IntPtr sourcetexture, uint64_t tag);
    // static public System.UInt64 GetObjectTimeStamp(System.IntPtr obj)
    // Offset: 0xDD2A2C
    static uint64_t GetObjectTimeStamp(::System::IntPtr obj);
    // static public System.UInt64 GetCurrentTimeTicks()
    // Offset: 0xDD2A34
    static uint64_t GetCurrentTimeTicks();
    // static private System.Boolean GetIsCaptureActive()
    // Offset: 0xDD2A3C
    static bool GetIsCaptureActive();
    // static public System.IntPtr GetRenderEventFunc()
    // Offset: 0xDD2A44
    static ::System::IntPtr GetRenderEventFunc();
    // static public System.IntPtr GetCompositorChannelObject(System.Int32 slot, System.UInt64 tag, System.UInt64 timestamp)
    // Offset: 0xDD2A80
    static ::System::IntPtr GetCompositorChannelObject(int slot, uint64_t tag, uint64_t timestamp);
    // static public System.Int32 AddObjectToCompositorChannel(System.Int32 slot, System.IntPtr obj, System.Int32 objectsize, System.UInt64 tag)
    // Offset: 0xDD2ABC
    static int AddObjectToCompositorChannel(int slot, ::System::IntPtr obj, int objectsize, uint64_t tag);
    // static public System.Int32 AddObjectToFrame(System.IntPtr obj, System.Int32 objectsize, System.UInt64 tag)
    // Offset: 0xDD2AC4
    static int AddObjectToFrame(::System::IntPtr obj, int objectsize, uint64_t tag);
    // static public System.IntPtr updatinputframe(System.IntPtr InputFrame)
    // Offset: 0xDD2ACC
    static ::System::IntPtr updatinputframe(::System::IntPtr InputFrame);
    // static public System.IntPtr GetViewportTexture()
    // Offset: 0xDD2B08
    static ::System::IntPtr GetViewportTexture();
    // static public System.IntPtr GetChannelObject(System.Int32 slot, System.UInt64 tag, System.UInt64 timestamp)
    // Offset: 0xDD2B44
    static ::System::IntPtr GetChannelObject(int slot, uint64_t tag, uint64_t timestamp);
    // static public System.Int32 AddObjectToChannel(System.Int32 slot, System.IntPtr obj, System.Int32 objectsize, System.UInt64 tag)
    // Offset: 0xDD2B80
    static int AddObjectToChannel(int slot, ::System::IntPtr obj, int objectsize, uint64_t tag);
    // static public System.UInt64 Tag(System.String str)
    // Offset: 0xDD2B88
    static uint64_t Tag(::StringW str);
    // static public System.Void AddString(System.String tag, System.String value, System.Int32 slot)
    // Offset: 0xDD2C10
    static void AddString(::StringW tag, ::StringW value, int slot);
    // static public System.Void AddTexture(LIV.SDK.Unity.SDKTexture texture, System.UInt64 tag)
    // Offset: 0xDD2D20
    static void AddTexture(::LIV::SDK::Unity::SDKTexture texture, uint64_t tag);
    // static public System.UInt64 GetObjectTime(System.IntPtr objectptr)
    // Offset: 0xDD2DE4
    static uint64_t GetObjectTime(::System::IntPtr objectptr);
    // static public System.UInt64 GetCurrentTime()
    // Offset: 0xDD2E4C
    static uint64_t GetCurrentTime();
    // static public System.Void IssuePluginEvent()
    // Offset: 0xDD2F68
    static void IssuePluginEvent();
    // static public System.Void SubmitApplicationOutput(LIV.SDK.Unity.SDKApplicationOutput applicationOutput)
    // Offset: 0xDD301C
    static void SubmitApplicationOutput(::LIV::SDK::Unity::SDKApplicationOutput applicationOutput);
    // static public System.Boolean GetStructFromGlobalChannel(ref T mystruct, System.Int32 channel, System.UInt64 tag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool GetStructFromGlobalChannel(ByRef<T> mystruct, int channel, uint64_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::GetStructFromGlobalChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("LIV.SDK.Unity", "SDKBridge", "GetStructFromGlobalChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mystruct), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(tag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(mystruct), channel, tag);
    }
    // static public System.Int32 AddStructToGlobalChannel(ref T mystruct, System.Int32 channel, System.UInt64 tag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int AddStructToGlobalChannel(ByRef<T> mystruct, int channel, uint64_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::AddStructToGlobalChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("LIV.SDK.Unity", "SDKBridge", "AddStructToGlobalChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mystruct), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(tag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(mystruct), channel, tag);
    }
    // static public System.Boolean GetStructFromLocalChannel(ref T mystruct, System.Int32 channel, System.UInt64 tag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool GetStructFromLocalChannel(ByRef<T> mystruct, int channel, uint64_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::GetStructFromLocalChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("LIV.SDK.Unity", "SDKBridge", "GetStructFromLocalChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mystruct), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(tag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(mystruct), channel, tag);
    }
    // static public System.Int32 AddStructToLocalChannel(ref T mystruct, System.Int32 channel, System.UInt64 tag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int AddStructToLocalChannel(ByRef<T> mystruct, int channel, uint64_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::AddStructToLocalChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("LIV.SDK.Unity", "SDKBridge", "AddStructToLocalChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mystruct), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(tag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(mystruct), channel, tag);
    }
    // static public System.Void AddStructToFrame(ref T mystruct, System.UInt64 tag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AddStructToFrame(ByRef<T> mystruct, uint64_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::SDKBridge::AddStructToFrame");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("LIV.SDK.Unity", "SDKBridge", "AddStructToFrame", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mystruct), ::il2cpp_utils::ExtractType(tag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(mystruct), tag);
    }
    // static public System.Boolean UpdateInputFrame(ref LIV.SDK.Unity.SDKInputFrame setframe)
    // Offset: 0xDD3220
    static bool UpdateInputFrame(ByRef<::LIV::SDK::Unity::SDKInputFrame> setframe);
    // static public LIV.SDK.Unity.SDKTexture GetViewfinderTexture()
    // Offset: 0xDD3630
    static ::LIV::SDK::Unity::SDKTexture GetViewfinderTexture();
    // static public System.Void AddTexture(LIV.SDK.Unity.SDKTexture texture)
    // Offset: 0xDD3850
    static void AddTexture(::LIV::SDK::Unity::SDKTexture texture);
    // static public System.Void CreateFrame(LIV.SDK.Unity.SDKOutputFrame frame)
    // Offset: 0xDD3994
    static void CreateFrame(::LIV::SDK::Unity::SDKOutputFrame frame);
    // static public System.Void SetGroundPlane(LIV.SDK.Unity.SDKPlane groundPlane)
    // Offset: 0xDD3B10
    static void SetGroundPlane(::LIV::SDK::Unity::SDKPlane groundPlane);
    // static public System.Boolean GetResolution(ref LIV.SDK.Unity.SDKResolution sdkResolution)
    // Offset: 0xDD3BBC
    static bool GetResolution(ByRef<::LIV::SDK::Unity::SDKResolution> sdkResolution);
  }; // LIV.SDK.Unity.SDKBridge
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::LIV::SDK::Unity::SDKBridge::SDKInjection_1, "LIV.SDK.Unity", "SDKBridge/SDKInjection`1");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&LIV::SDK::Unity::SDKBridge::get_IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKBridge::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddStringToChannel
// Il2CppName: AddStringToChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::System::IntPtr, int, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddStringToChannel)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddStringToChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, str, length, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::addtexture
// Il2CppName: addtexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, uint64_t)>(&LIV::SDK::Unity::SDKBridge::addtexture)> {
  static const MethodInfo* get() {
    static auto* sourcetexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "addtexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourcetexture, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp
// Il2CppName: GetObjectTimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::IntPtr)>(&LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetObjectTimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks
// Il2CppName: GetCurrentTimeTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetCurrentTimeTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetIsCaptureActive
// Il2CppName: GetIsCaptureActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&LIV::SDK::Unity::SDKBridge::GetIsCaptureActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetIsCaptureActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetRenderEventFunc
// Il2CppName: GetRenderEventFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&LIV::SDK::Unity::SDKBridge::GetRenderEventFunc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetRenderEventFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject
// Il2CppName: GetCompositorChannelObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int, uint64_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetCompositorChannelObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, tag, timestamp});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel
// Il2CppName: AddObjectToCompositorChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::System::IntPtr, int, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* objectsize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddObjectToCompositorChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, obj, objectsize, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddObjectToFrame
// Il2CppName: AddObjectToFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, int, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToFrame)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* objectsize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddObjectToFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, objectsize, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::updatinputframe
// Il2CppName: updatinputframe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&LIV::SDK::Unity::SDKBridge::updatinputframe)> {
  static const MethodInfo* get() {
    static auto* InputFrame = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "updatinputframe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InputFrame});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetViewportTexture
// Il2CppName: GetViewportTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&LIV::SDK::Unity::SDKBridge::GetViewportTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetViewportTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetChannelObject
// Il2CppName: GetChannelObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int, uint64_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::GetChannelObject)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetChannelObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, tag, timestamp});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddObjectToChannel
// Il2CppName: AddObjectToChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::System::IntPtr, int, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToChannel)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* objectsize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddObjectToChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, obj, objectsize, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::Tag
// Il2CppName: Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&LIV::SDK::Unity::SDKBridge::Tag)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, int)>(&LIV::SDK::Unity::SDKBridge::AddString)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, value, slot});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddTexture
// Il2CppName: AddTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKTexture")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, tag});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetObjectTime
// Il2CppName: GetObjectTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::IntPtr)>(&LIV::SDK::Unity::SDKBridge::GetObjectTime)> {
  static const MethodInfo* get() {
    static auto* objectptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetObjectTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectptr});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetCurrentTime
// Il2CppName: GetCurrentTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetCurrentTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetCurrentTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::IssuePluginEvent
// Il2CppName: IssuePluginEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKBridge::IssuePluginEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "IssuePluginEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput
// Il2CppName: SubmitApplicationOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKApplicationOutput)>(&LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput)> {
  static const MethodInfo* get() {
    static auto* applicationOutput = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKApplicationOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "SubmitApplicationOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{applicationOutput});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetStructFromGlobalChannel
// Il2CppName: GetStructFromGlobalChannel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddStructToGlobalChannel
// Il2CppName: AddStructToGlobalChannel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetStructFromLocalChannel
// Il2CppName: GetStructFromLocalChannel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddStructToLocalChannel
// Il2CppName: AddStructToLocalChannel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddStructToFrame
// Il2CppName: AddStructToFrame
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::UpdateInputFrame
// Il2CppName: UpdateInputFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::LIV::SDK::Unity::SDKInputFrame>)>(&LIV::SDK::Unity::SDKBridge::UpdateInputFrame)> {
  static const MethodInfo* get() {
    static auto* setframe = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKInputFrame")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "UpdateInputFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setframe});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetViewfinderTexture
// Il2CppName: GetViewfinderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTexture (*)()>(&LIV::SDK::Unity::SDKBridge::GetViewfinderTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetViewfinderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::AddTexture
// Il2CppName: AddTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture)>(&LIV::SDK::Unity::SDKBridge::AddTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "AddTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::CreateFrame
// Il2CppName: CreateFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKOutputFrame)>(&LIV::SDK::Unity::SDKBridge::CreateFrame)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKOutputFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "CreateFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::SetGroundPlane
// Il2CppName: SetGroundPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKPlane)>(&LIV::SDK::Unity::SDKBridge::SetGroundPlane)> {
  static const MethodInfo* get() {
    static auto* groundPlane = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKPlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "SetGroundPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groundPlane});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKBridge::GetResolution
// Il2CppName: GetResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::LIV::SDK::Unity::SDKResolution>)>(&LIV::SDK::Unity::SDKBridge::GetResolution)> {
  static const MethodInfo* get() {
    static auto* sdkResolution = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKResolution")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKBridge*), "GetResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sdkResolution});
  }
};
