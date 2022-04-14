// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: StringBuilderCache
  class StringBuilderCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::StringBuilderCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.StringBuilderCache
  // [TokenAttribute] Offset: FFFFFFFF
  class StringBuilderCache : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.StringBuilder CachedInstance
    static ::System::Text::StringBuilder* _get_CachedInstance();
    // Set static field: static private System.Text.StringBuilder CachedInstance
    static void _set_CachedInstance(::System::Text::StringBuilder* value);
    // static public System.Text.StringBuilder Acquire(System.Int32 capacity)
    // Offset: 0x126766C
    static ::System::Text::StringBuilder* Acquire(int capacity);
    // static public System.Void Release(System.Text.StringBuilder sb)
    // Offset: 0x1267738
    static void Release(::System::Text::StringBuilder* sb);
    // static public System.String GetStringAndRelease(System.Text.StringBuilder sb)
    // Offset: 0x12677AC
    static ::StringW GetStringAndRelease(::System::Text::StringBuilder* sb);
  }; // System.Text.StringBuilderCache
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::StringBuilderCache::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(int)>(&System::Text::StringBuilderCache::Acquire)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::StringBuilderCache*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Text::StringBuilderCache::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*)>(&System::Text::StringBuilderCache::Release)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::StringBuilderCache*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Text::StringBuilderCache::GetStringAndRelease
// Il2CppName: GetStringAndRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Text::StringBuilder*)>(&System::Text::StringBuilderCache::GetStringAndRelease)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::StringBuilderCache*), "GetStringAndRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
