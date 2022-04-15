// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: WebConnectionTunnel
  class WebConnectionTunnel;
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
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
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebRequestStream
  class WebRequestStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream*, "System.Net", "WebRequestStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xA9
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequestStream
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestStream : public ::System::Net::WebConnectionStream {
    public:
    // Nested type: ::System::Net::WebRequestStream::$FinishWriting$d__30
    struct $FinishWriting$d__30;
    // Nested type: ::System::Net::WebRequestStream::$WriteAsync$d__31
    struct $WriteAsync$d__31;
    // Nested type: ::System::Net::WebRequestStream::$ProcessWrite$d__32
    struct $ProcessWrite$d__32;
    // Nested type: ::System::Net::WebRequestStream::$Initialize$d__34
    struct $Initialize$d__34;
    // Nested type: ::System::Net::WebRequestStream::$SetHeadersAsync$d__35
    struct $SetHeadersAsync$d__35;
    // Nested type: ::System::Net::WebRequestStream::$WriteRequestAsync$d__36
    struct $WriteRequestAsync$d__36;
    // Nested type: ::System::Net::WebRequestStream::$WriteChunkTrailer_inner$d__37
    struct $WriteChunkTrailer_inner$d__37;
    // Nested type: ::System::Net::WebRequestStream::$WriteChunkTrailer$d__38
    struct $WriteChunkTrailer$d__38;
    public:
    // private System.IO.MemoryStream writeBuffer
    // Size: 0x8
    // Offset: 0x68
    ::System::IO::MemoryStream* writeBuffer;
    // Field size check
    static_assert(sizeof(::System::IO::MemoryStream*) == 0x8);
    // private System.Boolean requestWritten
    // Size: 0x1
    // Offset: 0x70
    bool requestWritten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean allowBuffering
    // Size: 0x1
    // Offset: 0x71
    bool allowBuffering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean sendChunked
    // Size: 0x1
    // Offset: 0x72
    bool sendChunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sendChunked and: pendingWrite
    char __padding3[0x5] = {};
    // private System.Net.WebCompletionSource pendingWrite
    // Size: 0x8
    // Offset: 0x78
    ::System::Net::WebCompletionSource* pendingWrite;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Int64 totalWritten
    // Size: 0x8
    // Offset: 0x80
    int64_t totalWritten;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Byte[] headers
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<uint8_t> headers;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean headersSent
    // Size: 0x1
    // Offset: 0x90
    bool headersSent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: headersSent and: completeRequestWritten
    char __padding7[0x3] = {};
    // private System.Int32 completeRequestWritten
    // Size: 0x4
    // Offset: 0x94
    int completeRequestWritten;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chunkTrailerWritten
    // Size: 0x4
    // Offset: 0x98
    int chunkTrailerWritten;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkTrailerWritten and: ME
    char __padding9[0x4] = {};
    // readonly System.String ME
    // Size: 0x8
    // Offset: 0xA0
    ::StringW ME;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <KeepAlive>k__BackingField
    // Size: 0x1
    // Offset: 0xA8
    bool KeepAlive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Byte[] crlf
    static ::ArrayW<uint8_t> _get_crlf();
    // Set static field: static private System.Byte[] crlf
    static void _set_crlf(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.IO.MemoryStream writeBuffer
    [[deprecated("Use field access instead!")]] ::System::IO::MemoryStream*& dyn_writeBuffer();
    // Get instance field reference: private System.Boolean requestWritten
    [[deprecated("Use field access instead!")]] bool& dyn_requestWritten();
    // Get instance field reference: private System.Boolean allowBuffering
    [[deprecated("Use field access instead!")]] bool& dyn_allowBuffering();
    // Get instance field reference: private System.Boolean sendChunked
    [[deprecated("Use field access instead!")]] bool& dyn_sendChunked();
    // Get instance field reference: private System.Net.WebCompletionSource pendingWrite
    [[deprecated("Use field access instead!")]] ::System::Net::WebCompletionSource*& dyn_pendingWrite();
    // Get instance field reference: private System.Int64 totalWritten
    [[deprecated("Use field access instead!")]] int64_t& dyn_totalWritten();
    // Get instance field reference: private System.Byte[] headers
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_headers();
    // Get instance field reference: private System.Boolean headersSent
    [[deprecated("Use field access instead!")]] bool& dyn_headersSent();
    // Get instance field reference: private System.Int32 completeRequestWritten
    [[deprecated("Use field access instead!")]] int& dyn_completeRequestWritten();
    // Get instance field reference: private System.Int32 chunkTrailerWritten
    [[deprecated("Use field access instead!")]] int& dyn_chunkTrailerWritten();
    // Get instance field reference: readonly System.String ME
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ME();
    // Get instance field reference: private readonly System.Boolean <KeepAlive>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$KeepAlive$k__BackingField();
    // public System.Boolean get_KeepAlive()
    // Offset: 0xC4AD24
    bool get_KeepAlive();
    // System.Boolean get_HasWriteBuffer()
    // Offset: 0xC4AD7C
    bool get_HasWriteBuffer();
    // System.Int32 get_WriteBufferLength()
    // Offset: 0xC4ADB0
    int get_WriteBufferLength();
    // public System.Void .ctor(System.Net.WebConnection connection, System.Net.WebOperation operation, System.IO.Stream stream, System.Net.WebConnectionTunnel tunnel)
    // Offset: 0xC4AB60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestStream* New_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* tunnel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebRequestStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestStream*, creationType>(connection, operation, stream, tunnel)));
    }
    // static private System.Void .cctor()
    // Offset: 0xC4BAC0
    static void _cctor();
    // System.Net.BufferOffsetSize GetWriteBuffer()
    // Offset: 0xC4ADF8
    ::System::Net::BufferOffsetSize* GetWriteBuffer();
    // private System.Threading.Tasks.Task FinishWriting(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4AEDC
    ::System::Threading::Tasks::Task* FinishWriting(::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task ProcessWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B128
    ::System::Threading::Tasks::Task* ProcessWrite(::ArrayW<uint8_t> buffer, int offset, int size, ::System::Threading::CancellationToken cancellationToken);
    // private System.Void CheckWriteOverflow(System.Int64 contentLength, System.Int64 totalWritten, System.Int64 size)
    // Offset: 0xC4B268
    void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size);
    // System.Threading.Tasks.Task Initialize(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B310
    ::System::Threading::Tasks::Task* Initialize(::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task SetHeadersAsync(System.Boolean setInternalLength, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B424
    ::System::Threading::Tasks::Task* SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken);
    // System.Threading.Tasks.Task WriteRequestAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B550
    ::System::Threading::Tasks::Task* WriteRequestAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task WriteChunkTrailer_inner(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B664
    ::System::Threading::Tasks::Task* WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task WriteChunkTrailer()
    // Offset: 0xC4B774
    ::System::Threading::Tasks::Task* WriteChunkTrailer();
    // System.Void KillBuffer()
    // Offset: 0xC4B308
    void KillBuffer();
    // public override System.Int64 get_Length()
    // Offset: 0xC4AD2C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Boolean get_CanRead()
    // Offset: 0xC4AD6C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0xC4AD74
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4AFEC
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int size, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC4B884
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int size, ::System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Close_internal(ref System.Boolean disposed)
    // Offset: 0xC4B938
    // Implemented from: System.Net.WebConnectionStream
    // Base method: System.Void WebConnectionStream::Close_internal(ref System.Boolean disposed)
    void Close_internal(ByRef<bool> disposed);
  }; // System.Net.WebRequestStream
  #pragma pack(pop)
  static check_size<sizeof(WebRequestStream), 168 + sizeof(bool)> __System_Net_WebRequestStreamSizeCheck;
  static_assert(sizeof(WebRequestStream) == 0xA9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_KeepAlive
// Il2CppName: get_KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_KeepAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_HasWriteBuffer
// Il2CppName: get_HasWriteBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_HasWriteBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_HasWriteBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_WriteBufferLength
// Il2CppName: get_WriteBufferLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_WriteBufferLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_WriteBufferLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebRequestStream::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebRequestStream::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::GetWriteBuffer
// Il2CppName: GetWriteBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::BufferOffsetSize* (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::GetWriteBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "GetWriteBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::FinishWriting
// Il2CppName: FinishWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::FinishWriting)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "FinishWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::ProcessWrite
// Il2CppName: ProcessWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::ProcessWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "ProcessWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::CheckWriteOverflow
// Il2CppName: CheckWriteOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestStream::*)(int64_t, int64_t, int64_t)>(&System::Net::WebRequestStream::CheckWriteOverflow)> {
  static const MethodInfo* get() {
    static auto* contentLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* totalWritten = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "CheckWriteOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentLength, totalWritten, size});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::Initialize)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::SetHeadersAsync
// Il2CppName: SetHeadersAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(bool, ::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::SetHeadersAsync)> {
  static const MethodInfo* get() {
    static auto* setInternalLength = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "SetHeadersAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setInternalLength, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::WriteRequestAsync
// Il2CppName: WriteRequestAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::WriteRequestAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "WriteRequestAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::WriteChunkTrailer_inner
// Il2CppName: WriteChunkTrailer_inner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::WriteChunkTrailer_inner)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "WriteChunkTrailer_inner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::WriteChunkTrailer
// Il2CppName: WriteChunkTrailer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::WriteChunkTrailer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "WriteChunkTrailer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::KillBuffer
// Il2CppName: KillBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::KillBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "KillBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequestStream::*)()>(&System::Net::WebRequestStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::WebRequestStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestStream::Close_internal
// Il2CppName: Close_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestStream::*)(ByRef<bool>)>(&System::Net::WebRequestStream::Close_internal)> {
  static const MethodInfo* get() {
    static auto* disposed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestStream*), "Close_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposed});
  }
};
