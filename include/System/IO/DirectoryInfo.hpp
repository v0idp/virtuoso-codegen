// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileSystemInfo
#include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DirectoryInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 683610
  class DirectoryInfo : public ::System::IO::FileSystemInfo {
    public:
    // Nested type: ::System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47
    class $EnumerateFileSystemInfos$d__47;
    public:
    // private System.String current
    // Size: 0x8
    // Offset: 0x60
    ::StringW current;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String parent
    // Size: 0x8
    // Offset: 0x68
    ::StringW parent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String current
    [[deprecated("Use field access instead!")]] ::StringW& dyn_current();
    // Get instance field reference: private System.String parent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_parent();
    // public System.IO.DirectoryInfo get_Parent()
    // Offset: 0x129D5DC
    ::System::IO::DirectoryInfo* get_Parent();
    // public System.Void .ctor(System.String path)
    // Offset: 0x129DF54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::StringW path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path)));
    }
    // System.Void .ctor(System.String path, System.Boolean simpleOriginalPath)
    // Offset: 0x129D504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::StringW path, bool simpleOriginalPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path, simpleOriginalPath)));
    }
    // private System.Void Initialize()
    // Offset: 0x129E0C8
    void Initialize();
    // public System.Void Create()
    // Offset: 0x129D654
    void Create();
    // public System.IO.DirectoryInfo[] GetDirectories()
    // Offset: 0x129E3C8
    ::ArrayW<::System::IO::DirectoryInfo*> GetDirectories();
    // public System.IO.DirectoryInfo[] GetDirectories(System.String searchPattern)
    // Offset: 0x129E414
    ::ArrayW<::System::IO::DirectoryInfo*> GetDirectories(::StringW searchPattern);
    // public System.Collections.Generic.IEnumerable`1<System.IO.FileSystemInfo> EnumerateFileSystemInfos(System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x129E59C
    ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* EnumerateFileSystemInfos(::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // static System.Collections.Generic.IEnumerable`1<System.IO.FileSystemInfo> EnumerateFileSystemInfos(System.String basePath, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x129E640
    static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* EnumerateFileSystemInfos(::StringW basePath, ::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // System.Void CheckPath(System.String path)
    // Offset: 0x129DF5C
    void CheckPath(::StringW path);
    // public override System.Boolean get_Exists()
    // Offset: 0x129E374
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Boolean FileSystemInfo::get_Exists()
    bool get_Exists();
    // public override System.String get_Name()
    // Offset: 0x129E3C0
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::StringW get_Name();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x129E34C
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x129E594
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.IO.DirectoryInfo
  #pragma pack(pop)
  static check_size<sizeof(DirectoryInfo), 104 + sizeof(::StringW)> __System_IO_DirectoryInfoSizeCheck;
  static_assert(sizeof(DirectoryInfo) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::IO::DirectoryInfo*> (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::GetDirectories)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::IO::DirectoryInfo*> (System::IO::DirectoryInfo::*)(::StringW)>(&System::IO::DirectoryInfo::GetDirectories)> {
  static const MethodInfo* get() {
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::EnumerateFileSystemInfos
// Il2CppName: EnumerateFileSystemInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (System::IO::DirectoryInfo::*)(::StringW, ::System::IO::SearchOption)>(&System::IO::DirectoryInfo::EnumerateFileSystemInfos)> {
  static const MethodInfo* get() {
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "EnumerateFileSystemInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::EnumerateFileSystemInfos
// Il2CppName: EnumerateFileSystemInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&System::IO::DirectoryInfo::EnumerateFileSystemInfos)> {
  static const MethodInfo* get() {
    static auto* basePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "EnumerateFileSystemInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basePath, searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::CheckPath
// Il2CppName: CheckPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(::StringW)>(&System::IO::DirectoryInfo::CheckPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "CheckPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Exists
// Il2CppName: get_Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Exists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
