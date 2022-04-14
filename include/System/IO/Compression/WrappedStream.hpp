// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipArchiveEntry
  class ZipArchiveEntry;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: WrappedStream
  class WrappedStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::WrappedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::WrappedStream*, "System.IO.Compression", "WrappedStream");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.WrappedStream
  // [TokenAttribute] Offset: FFFFFFFF
  class WrappedStream : public ::System::IO::Stream {
    public:
    public:
    // private readonly System.IO.Stream _baseStream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* baseStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private readonly System.Boolean _closeBaseStream
    // Size: 0x1
    // Offset: 0x30
    bool closeBaseStream;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeBaseStream and: onClosed
    char __padding1[0x7] = {};
    // private readonly System.Action`1<System.IO.Compression.ZipArchiveEntry> _onClosed
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* onClosed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*) == 0x8);
    // private readonly System.IO.Compression.ZipArchiveEntry _zipArchiveEntry
    // Size: 0x8
    // Offset: 0x40
    ::System::IO::Compression::ZipArchiveEntry* zipArchiveEntry;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::ZipArchiveEntry*) == 0x8);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x48
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.IO.Stream _baseStream
    [[deprecated]] ::System::IO::Stream*& dyn__baseStream();
    // Get instance field reference: private readonly System.Boolean _closeBaseStream
    [[deprecated]] bool& dyn__closeBaseStream();
    // Get instance field reference: private readonly System.Action`1<System.IO.Compression.ZipArchiveEntry> _onClosed
    [[deprecated]] ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*& dyn__onClosed();
    // Get instance field reference: private readonly System.IO.Compression.ZipArchiveEntry _zipArchiveEntry
    [[deprecated]] ::System::IO::Compression::ZipArchiveEntry*& dyn__zipArchiveEntry();
    // Get instance field reference: private System.Boolean _isDisposed
    [[deprecated]] bool& dyn__isDisposed();
    // System.Void .ctor(System.IO.Stream baseStream, System.Boolean closeBaseStream)
    // Offset: 0x16994AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WrappedStream* New_ctor(::System::IO::Stream* baseStream, bool closeBaseStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::WrappedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WrappedStream*, creationType>(baseStream, closeBaseStream)));
    }
    // private System.Void .ctor(System.IO.Stream baseStream, System.Boolean closeBaseStream, System.IO.Compression.ZipArchiveEntry entry, System.Action`1<System.IO.Compression.ZipArchiveEntry> onClosed)
    // Offset: 0x16994BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WrappedStream* New_ctor(::System::IO::Stream* baseStream, bool closeBaseStream, ::System::IO::Compression::ZipArchiveEntry* entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* onClosed) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::WrappedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WrappedStream*, creationType>(baseStream, closeBaseStream, entry, onClosed)));
    }
    // System.Void .ctor(System.IO.Stream baseStream, System.IO.Compression.ZipArchiveEntry entry, System.Action`1<System.IO.Compression.ZipArchiveEntry> onClosed)
    // Offset: 0x1699558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WrappedStream* New_ctor(::System::IO::Stream* baseStream, ::System::IO::Compression::ZipArchiveEntry* entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* onClosed) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::WrappedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WrappedStream*, creationType>(baseStream, entry, onClosed)));
    }
    // private System.Void ThrowIfDisposed()
    // Offset: 0x169959C
    void ThrowIfDisposed();
    // private System.Void ThrowIfCantRead()
    // Offset: 0x169979C
    void ThrowIfCantRead();
    // private System.Void ThrowIfCantWrite()
    // Offset: 0x169980C
    void ThrowIfCantWrite();
    // private System.Void ThrowIfCantSeek()
    // Offset: 0x169969C
    void ThrowIfCantSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x1699568
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1699624
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1699658
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Boolean get_CanRead()
    // Offset: 0x169970C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x169973C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x169976C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x169987C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x16998DC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1699934
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1699984
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Flush()
    // Offset: 0x16999E4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1699A24
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.IO.Compression.WrappedStream
  #pragma pack(pop)
  static check_size<sizeof(WrappedStream), 72 + sizeof(bool)> __System_IO_Compression_WrappedStreamSizeCheck;
  static_assert(sizeof(WrappedStream) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::ThrowIfCantRead
// Il2CppName: ThrowIfCantRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::ThrowIfCantRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "ThrowIfCantRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::ThrowIfCantWrite
// Il2CppName: ThrowIfCantWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::ThrowIfCantWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "ThrowIfCantWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::ThrowIfCantSeek
// Il2CppName: ThrowIfCantSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::ThrowIfCantSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "ThrowIfCantSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)(int64_t)>(&System::IO::Compression::WrappedStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::WrappedStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::WrappedStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::WrappedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::Compression::WrappedStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)(int64_t)>(&System::IO::Compression::WrappedStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::WrappedStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)()>(&System::IO::Compression::WrappedStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::WrappedStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::WrappedStream::*)(bool)>(&System::IO::Compression::WrappedStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::WrappedStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
