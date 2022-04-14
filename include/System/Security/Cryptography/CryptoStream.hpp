// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Security.Cryptography.CryptoStreamMode
#include "System/Security/Cryptography/CryptoStreamMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CryptoStream
  class CryptoStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CryptoStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoStream*, "System.Security.Cryptography", "CryptoStream");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x5F
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoStream
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 684550
  class CryptoStream : public ::System::IO::Stream {
    public:
    // Nested type: ::System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable
    struct HopToThreadPoolAwaitable;
    // Nested type: ::System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34
    struct $ReadAsyncInternal$d__34;
    // Nested type: ::System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37
    struct $WriteAsyncInternal$d__37;
    public:
    // private System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Security.Cryptography.ICryptoTransform _Transform
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::Cryptography::ICryptoTransform* Transform;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::ICryptoTransform*) == 0x8);
    // private System.Byte[] _InputBuffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> InputBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _InputBufferIndex
    // Size: 0x4
    // Offset: 0x40
    int InputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _InputBlockSize
    // Size: 0x4
    // Offset: 0x44
    int InputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] _OutputBuffer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> OutputBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _OutputBufferIndex
    // Size: 0x4
    // Offset: 0x50
    int OutputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _OutputBlockSize
    // Size: 0x4
    // Offset: 0x54
    int OutputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.CryptoStreamMode _transformMode
    // Size: 0x4
    // Offset: 0x58
    ::System::Security::Cryptography::CryptoStreamMode transformMode;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::CryptoStreamMode) == 0x4);
    // private System.Boolean _canRead
    // Size: 0x1
    // Offset: 0x5C
    bool canRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _canWrite
    // Size: 0x1
    // Offset: 0x5D
    bool canWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _finalBlockTransformed
    // Size: 0x1
    // Offset: 0x5E
    bool finalBlockTransformed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.IO.Stream _stream
    [[deprecated]] ::System::IO::Stream*& dyn__stream();
    // Get instance field reference: private System.Security.Cryptography.ICryptoTransform _Transform
    [[deprecated]] ::System::Security::Cryptography::ICryptoTransform*& dyn__Transform();
    // Get instance field reference: private System.Byte[] _InputBuffer
    [[deprecated]] ::ArrayW<uint8_t>& dyn__InputBuffer();
    // Get instance field reference: private System.Int32 _InputBufferIndex
    [[deprecated]] int& dyn__InputBufferIndex();
    // Get instance field reference: private System.Int32 _InputBlockSize
    [[deprecated]] int& dyn__InputBlockSize();
    // Get instance field reference: private System.Byte[] _OutputBuffer
    [[deprecated]] ::ArrayW<uint8_t>& dyn__OutputBuffer();
    // Get instance field reference: private System.Int32 _OutputBufferIndex
    [[deprecated]] int& dyn__OutputBufferIndex();
    // Get instance field reference: private System.Int32 _OutputBlockSize
    [[deprecated]] int& dyn__OutputBlockSize();
    // Get instance field reference: private System.Security.Cryptography.CryptoStreamMode _transformMode
    [[deprecated]] ::System::Security::Cryptography::CryptoStreamMode& dyn__transformMode();
    // Get instance field reference: private System.Boolean _canRead
    [[deprecated]] bool& dyn__canRead();
    // Get instance field reference: private System.Boolean _canWrite
    [[deprecated]] bool& dyn__canWrite();
    // Get instance field reference: private System.Boolean _finalBlockTransformed
    [[deprecated]] bool& dyn__finalBlockTransformed();
    // public System.Boolean get_HasFlushedFinalBlock()
    // Offset: 0x13F90E0
    bool get_HasFlushedFinalBlock();
    // public System.Void .ctor(System.IO.Stream stream, System.Security.Cryptography.ICryptoTransform transform, System.Security.Cryptography.CryptoStreamMode mode)
    // Offset: 0x13F8C94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoStream* New_ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform, ::System::Security::Cryptography::CryptoStreamMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CryptoStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoStream*, creationType>(stream, transform, mode)));
    }
    // public System.Void FlushFinalBlock()
    // Offset: 0x13F90E8
    void FlushFinalBlock();
    // private System.Threading.Tasks.Task`1<System.Int32> ReadAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13F9EBC
    ::System::Threading::Tasks::Task_1<int>* ReadAsyncInternal(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task WriteAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13FA83C
    ::System::Threading::Tasks::Task* WriteAsyncInternal(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public System.Void Clear()
    // Offset: 0x13FA978
    void Clear();
    // private System.Void InitializeBuffer()
    // Offset: 0x13F8E54
    void InitializeBuffer();
    // public override System.Boolean get_CanRead()
    // Offset: 0x13F8FB4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x13F8FBC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x13F8FC4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x13F8FCC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x13F9028
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x13F9084
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x13F9324
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Threading.Tasks.Task FlushAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13F9328
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::FlushAsync(System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x13F9478
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x13F94D4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x13F9530
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(ByRef<::ArrayW<uint8_t>> buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13F9BF4
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x13FA028
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13FA588
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13FA988
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.CryptoStream
  #pragma pack(pop)
  static check_size<sizeof(CryptoStream), 94 + sizeof(bool)> __System_Security_Cryptography_CryptoStreamSizeCheck;
  static_assert(sizeof(CryptoStream) == 0x5F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock
// Il2CppName: get_HasFlushedFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_HasFlushedFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::FlushFinalBlock
// Il2CppName: FlushFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::FlushFinalBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "FlushFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::ReadAsyncInternal
// Il2CppName: ReadAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "ReadAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::WriteAsyncInternal
// Il2CppName: WriteAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "WriteAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::InitializeBuffer
// Il2CppName: InitializeBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::InitializeBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "InitializeBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Security::Cryptography::CryptoStream::*)(::System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::FlushAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Security::Cryptography::CryptoStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::CryptoStream::*)(ByRef<::ArrayW<uint8_t>>, int, int)>(&System::Security::Cryptography::CryptoStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::CryptoStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(bool)>(&System::Security::Cryptography::CryptoStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
