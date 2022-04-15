// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IO.Compression.ZipArchiveMode
#include "System/IO/Compression/ZipArchiveMode.hpp"
// Including type: System.IO.Compression.CompressionLevel
#include "System/IO/Compression/CompressionLevel.hpp"
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
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipArchiveEntry
  class ZipArchiveEntry;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipArchive
  class ZipArchive;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::ZipArchive);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchive*, "System.IO.Compression", "ZipArchive");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.ZipArchive
  // [TokenAttribute] Offset: FFFFFFFF
  class ZipArchive : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IO.Stream _archiveStream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* archiveStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.IO.Compression.ZipArchiveEntry _archiveStreamOwner
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::Compression::ZipArchiveEntry* archiveStreamOwner;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::ZipArchiveEntry*) == 0x8);
    // private System.IO.BinaryReader _archiveReader
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::BinaryReader* archiveReader;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryReader*) == 0x8);
    // private System.IO.Compression.ZipArchiveMode _mode
    // Size: 0x4
    // Offset: 0x28
    ::System::IO::Compression::ZipArchiveMode mode;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::ZipArchiveMode) == 0x4);
    // Padding between fields: mode and: entries
    char __padding3[0x4] = {};
    // private System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry> _entries
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>* entries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*) == 0x8);
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> _entriesCollection
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* entriesCollection;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry> _entriesDictionary
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IO::Compression::ZipArchiveEntry*>* entriesDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::IO::Compression::ZipArchiveEntry*>*) == 0x8);
    // private System.Boolean _readEntries
    // Size: 0x1
    // Offset: 0x48
    bool readEntries;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _leaveOpen
    // Size: 0x1
    // Offset: 0x49
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leaveOpen and: centralDirectoryStart
    char __padding8[0x6] = {};
    // private System.Int64 _centralDirectoryStart
    // Size: 0x8
    // Offset: 0x50
    int64_t centralDirectoryStart;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x58
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDisposed and: numberOfThisDisk
    char __padding10[0x3] = {};
    // private System.UInt32 _numberOfThisDisk
    // Size: 0x4
    // Offset: 0x5C
    uint numberOfThisDisk;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int64 _expectedNumberOfEntries
    // Size: 0x8
    // Offset: 0x60
    int64_t expectedNumberOfEntries;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.Stream _backingStream
    // Size: 0x8
    // Offset: 0x68
    ::System::IO::Stream* backingStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Byte[] _archiveComment
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> archiveComment;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Text.Encoding _entryNameEncoding
    // Size: 0x8
    // Offset: 0x78
    ::System::Text::Encoding* entryNameEncoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.IO.Stream _archiveStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__archiveStream();
    // Get instance field reference: private System.IO.Compression.ZipArchiveEntry _archiveStreamOwner
    [[deprecated("Use field access instead!")]] ::System::IO::Compression::ZipArchiveEntry*& dyn__archiveStreamOwner();
    // Get instance field reference: private System.IO.BinaryReader _archiveReader
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryReader*& dyn__archiveReader();
    // Get instance field reference: private System.IO.Compression.ZipArchiveMode _mode
    [[deprecated("Use field access instead!")]] ::System::IO::Compression::ZipArchiveMode& dyn__mode();
    // Get instance field reference: private System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry> _entries
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*& dyn__entries();
    // Get instance field reference: private System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> _entriesCollection
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*& dyn__entriesCollection();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry> _entriesDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IO::Compression::ZipArchiveEntry*>*& dyn__entriesDictionary();
    // Get instance field reference: private System.Boolean _readEntries
    [[deprecated("Use field access instead!")]] bool& dyn__readEntries();
    // Get instance field reference: private System.Boolean _leaveOpen
    [[deprecated("Use field access instead!")]] bool& dyn__leaveOpen();
    // Get instance field reference: private System.Int64 _centralDirectoryStart
    [[deprecated("Use field access instead!")]] int64_t& dyn__centralDirectoryStart();
    // Get instance field reference: private System.Boolean _isDisposed
    [[deprecated("Use field access instead!")]] bool& dyn__isDisposed();
    // Get instance field reference: private System.UInt32 _numberOfThisDisk
    [[deprecated("Use field access instead!")]] uint& dyn__numberOfThisDisk();
    // Get instance field reference: private System.Int64 _expectedNumberOfEntries
    [[deprecated("Use field access instead!")]] int64_t& dyn__expectedNumberOfEntries();
    // Get instance field reference: private System.IO.Stream _backingStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__backingStream();
    // Get instance field reference: private System.Byte[] _archiveComment
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__archiveComment();
    // Get instance field reference: private System.Text.Encoding _entryNameEncoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn__entryNameEncoding();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> get_Entries()
    // Offset: 0x169B7DC
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* get_Entries();
    // public System.IO.Compression.ZipArchiveMode get_Mode()
    // Offset: 0x169B914
    ::System::IO::Compression::ZipArchiveMode get_Mode();
    // System.IO.BinaryReader get_ArchiveReader()
    // Offset: 0x169C1C8
    ::System::IO::BinaryReader* get_ArchiveReader();
    // System.IO.Stream get_ArchiveStream()
    // Offset: 0x169C1D0
    ::System::IO::Stream* get_ArchiveStream();
    // System.UInt32 get_NumberOfThisDisk()
    // Offset: 0x169C1D8
    uint get_NumberOfThisDisk();
    // System.Text.Encoding get_EntryNameEncoding()
    // Offset: 0x169C1E0
    ::System::Text::Encoding* get_EntryNameEncoding();
    // private System.Void set_EntryNameEncoding(System.Text.Encoding value)
    // Offset: 0x169B080
    void set_EntryNameEncoding(::System::Text::Encoding* value);
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.ZipArchiveMode mode, System.Boolean leaveOpen, System.Text.Encoding entryNameEncoding)
    // Offset: 0x169AFD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipArchive* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::ZipArchiveMode mode, bool leaveOpen, ::System::Text::Encoding* entryNameEncoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::ZipArchive::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipArchive*, creationType>(stream, mode, leaveOpen, entryNameEncoding)));
    }
    // public System.IO.Compression.ZipArchiveEntry CreateEntry(System.String entryName)
    // Offset: 0x169B91C
    ::System::IO::Compression::ZipArchiveEntry* CreateEntry(::StringW entryName);
    // public System.IO.Compression.ZipArchiveEntry CreateEntry(System.String entryName, System.IO.Compression.CompressionLevel compressionLevel)
    // Offset: 0x169BAF8
    ::System::IO::Compression::ZipArchiveEntry* CreateEntry(::StringW entryName, ::System::IO::Compression::CompressionLevel compressionLevel);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x169BB78
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x169C150
    void Dispose();
    // private System.IO.Compression.ZipArchiveEntry DoCreateEntry(System.String entryName, System.Nullable`1<System.IO.Compression.CompressionLevel> compressionLevel)
    // Offset: 0x169B924
    ::System::IO::Compression::ZipArchiveEntry* DoCreateEntry(::StringW entryName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel> compressionLevel);
    // System.Void AcquireArchiveStream(System.IO.Compression.ZipArchiveEntry entry)
    // Offset: 0x169C4E4
    void AcquireArchiveStream(::System::IO::Compression::ZipArchiveEntry* entry);
    // private System.Void AddEntry(System.IO.Compression.ZipArchiveEntry entry)
    // Offset: 0x169C410
    void AddEntry(::System::IO::Compression::ZipArchiveEntry* entry);
    // System.Void ReleaseArchiveStream(System.IO.Compression.ZipArchiveEntry entry)
    // Offset: 0x169C5B0
    void ReleaseArchiveStream(::System::IO::Compression::ZipArchiveEntry* entry);
    // System.Void RemoveEntry(System.IO.Compression.ZipArchiveEntry entry)
    // Offset: 0x169C5B8
    void RemoveEntry(::System::IO::Compression::ZipArchiveEntry* entry);
    // System.Void ThrowIfDisposed()
    // Offset: 0x169B86C
    void ThrowIfDisposed();
    // private System.Void CloseStreams()
    // Offset: 0x169C0D0
    void CloseStreams();
    // private System.Void EnsureCentralDirectoryRead()
    // Offset: 0x169B8E0
    void EnsureCentralDirectoryRead();
    // private System.Void Init(System.IO.Stream stream, System.IO.Compression.ZipArchiveMode mode, System.Boolean leaveOpen)
    // Offset: 0x169B144
    void Init(::System::IO::Stream* stream, ::System::IO::Compression::ZipArchiveMode mode, bool leaveOpen);
    // private System.Void ReadCentralDirectory()
    // Offset: 0x169C648
    void ReadCentralDirectory();
    // private System.Void ReadEndOfCentralDirectory()
    // Offset: 0x169C86C
    void ReadEndOfCentralDirectory();
    // private System.Void WriteFile()
    // Offset: 0x169BBF8
    void WriteFile();
    // private System.Void WriteArchiveEpilogue(System.Int64 startOfCentralDirectory, System.Int64 sizeOfCentralDirectory)
    // Offset: 0x169E0F8
    void WriteArchiveEpilogue(int64_t startOfCentralDirectory, int64_t sizeOfCentralDirectory);
  }; // System.IO.Compression.ZipArchive
  #pragma pack(pop)
  static check_size<sizeof(ZipArchive), 120 + sizeof(::System::Text::Encoding*)> __System_IO_Compression_ZipArchiveSizeCheck;
  static_assert(sizeof(ZipArchive) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_Entries
// Il2CppName: get_Entries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_Entries)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_Entries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveMode (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_ArchiveReader
// Il2CppName: get_ArchiveReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::BinaryReader* (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_ArchiveReader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_ArchiveReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_ArchiveStream
// Il2CppName: get_ArchiveStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_ArchiveStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_ArchiveStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_NumberOfThisDisk
// Il2CppName: get_NumberOfThisDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_NumberOfThisDisk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_NumberOfThisDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::get_EntryNameEncoding
// Il2CppName: get_EntryNameEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::get_EntryNameEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "get_EntryNameEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::set_EntryNameEncoding
// Il2CppName: set_EntryNameEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::Text::Encoding*)>(&System::IO::Compression::ZipArchive::set_EntryNameEncoding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "set_EntryNameEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::CreateEntry
// Il2CppName: CreateEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (System::IO::Compression::ZipArchive::*)(::StringW)>(&System::IO::Compression::ZipArchive::CreateEntry)> {
  static const MethodInfo* get() {
    static auto* entryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "CreateEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entryName});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::CreateEntry
// Il2CppName: CreateEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (System::IO::Compression::ZipArchive::*)(::StringW, ::System::IO::Compression::CompressionLevel)>(&System::IO::Compression::ZipArchive::CreateEntry)> {
  static const MethodInfo* get() {
    static auto* entryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* compressionLevel = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "CompressionLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "CreateEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entryName, compressionLevel});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(bool)>(&System::IO::Compression::ZipArchive::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::DoCreateEntry
// Il2CppName: DoCreateEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (System::IO::Compression::ZipArchive::*)(::StringW, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>)>(&System::IO::Compression::ZipArchive::DoCreateEntry)> {
  static const MethodInfo* get() {
    static auto* entryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* compressionLevel = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.IO.Compression", "CompressionLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "DoCreateEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entryName, compressionLevel});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::AcquireArchiveStream
// Il2CppName: AcquireArchiveStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&System::IO::Compression::ZipArchive::AcquireArchiveStream)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "AcquireArchiveStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::AddEntry
// Il2CppName: AddEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&System::IO::Compression::ZipArchive::AddEntry)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "AddEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::ReleaseArchiveStream
// Il2CppName: ReleaseArchiveStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&System::IO::Compression::ZipArchive::ReleaseArchiveStream)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "ReleaseArchiveStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::RemoveEntry
// Il2CppName: RemoveEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&System::IO::Compression::ZipArchive::RemoveEntry)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "RemoveEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::CloseStreams
// Il2CppName: CloseStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::CloseStreams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "CloseStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::EnsureCentralDirectoryRead
// Il2CppName: EnsureCentralDirectoryRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::EnsureCentralDirectoryRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "EnsureCentralDirectoryRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(::System::IO::Stream*, ::System::IO::Compression::ZipArchiveMode, bool)>(&System::IO::Compression::ZipArchive::Init)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveMode")->byval_arg;
    static auto* leaveOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, mode, leaveOpen});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::ReadCentralDirectory
// Il2CppName: ReadCentralDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::ReadCentralDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "ReadCentralDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::ReadEndOfCentralDirectory
// Il2CppName: ReadEndOfCentralDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::ReadEndOfCentralDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "ReadEndOfCentralDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::WriteFile
// Il2CppName: WriteFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)()>(&System::IO::Compression::ZipArchive::WriteFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "WriteFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchive::WriteArchiveEpilogue
// Il2CppName: WriteArchiveEpilogue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchive::*)(int64_t, int64_t)>(&System::IO::Compression::ZipArchive::WriteArchiveEpilogue)> {
  static const MethodInfo* get() {
    static auto* startOfCentralDirectory = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sizeOfCentralDirectory = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchive*), "WriteArchiveEpilogue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startOfCentralDirectory, sizeOfCentralDirectory});
  }
};
