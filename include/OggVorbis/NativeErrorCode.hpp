// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OggVorbis
namespace OggVorbis {
  // Forward declaring type: NativeErrorCode
  struct NativeErrorCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OggVorbis::NativeErrorCode, "OggVorbis", "NativeErrorCode");
// Type namespace: OggVorbis
namespace OggVorbis {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbis.NativeErrorCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct NativeErrorCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NativeErrorCode
    constexpr NativeErrorCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_FILEPATH_PARAMETER
    static constexpr const int ERROR_INVALID_FILEPATH_PARAMETER = -1;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_FILEPATH_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_FILEPATH_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_FILEPATH_PARAMETER
    static void _set_ERROR_INVALID_FILEPATH_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_WRITE
    static constexpr const int ERROR_CANNOT_OPEN_FILE_FOR_WRITE = -2;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_WRITE
    static ::OggVorbis::NativeErrorCode _get_ERROR_CANNOT_OPEN_FILE_FOR_WRITE();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_WRITE
    static void _set_ERROR_CANNOT_OPEN_FILE_FOR_WRITE(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_READ
    static constexpr const int ERROR_CANNOT_OPEN_FILE_FOR_READ = -3;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_READ
    static ::OggVorbis::NativeErrorCode _get_ERROR_CANNOT_OPEN_FILE_FOR_READ();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_CANNOT_OPEN_FILE_FOR_READ
    static void _set_ERROR_CANNOT_OPEN_FILE_FOR_READ(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM
    static constexpr const int ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM = -4;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM
    static ::OggVorbis::NativeErrorCode _get_ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM
    static void _set_ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_READING_OGG_STREAM
    static constexpr const int ERROR_READING_OGG_STREAM = -5;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_READING_OGG_STREAM
    static ::OggVorbis::NativeErrorCode _get_ERROR_READING_OGG_STREAM();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_READING_OGG_STREAM
    static void _set_ERROR_READING_OGG_STREAM(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLES_PARAMETER
    static constexpr const int ERROR_INVALID_SAMPLES_PARAMETER = -10;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLES_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_SAMPLES_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLES_PARAMETER
    static void _set_ERROR_INVALID_SAMPLES_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLESLENGTH_PARAMETER
    static constexpr const int ERROR_INVALID_SAMPLESLENGTH_PARAMETER = -11;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLESLENGTH_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_SAMPLESLENGTH_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_SAMPLESLENGTH_PARAMETER
    static void _set_ERROR_INVALID_SAMPLESLENGTH_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_CHANNELS_PARAMETER
    static constexpr const int ERROR_INVALID_CHANNELS_PARAMETER = -12;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_CHANNELS_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_CHANNELS_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_CHANNELS_PARAMETER
    static void _set_ERROR_INVALID_CHANNELS_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_FREQUENCY_PARAMETER
    static constexpr const int ERROR_INVALID_FREQUENCY_PARAMETER = -13;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_FREQUENCY_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_FREQUENCY_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_FREQUENCY_PARAMETER
    static void _set_ERROR_INVALID_FREQUENCY_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_BASE_QUALITY_PARAMETER
    static constexpr const int ERROR_INVALID_BASE_QUALITY_PARAMETER = -14;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_BASE_QUALITY_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_BASE_QUALITY_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_BASE_QUALITY_PARAMETER
    static void _set_ERROR_INVALID_BASE_QUALITY_PARAMETER(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_MALLOC_RETURNED_NULL
    static constexpr const int ERROR_MALLOC_RETURNED_NULL = -15;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_MALLOC_RETURNED_NULL
    static ::OggVorbis::NativeErrorCode _get_ERROR_MALLOC_RETURNED_NULL();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_MALLOC_RETURNED_NULL
    static void _set_ERROR_MALLOC_RETURNED_NULL(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_BYTES_MEMORY_ARRAY_NULL
    static constexpr const int ERROR_BYTES_MEMORY_ARRAY_NULL = -16;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_BYTES_MEMORY_ARRAY_NULL
    static ::OggVorbis::NativeErrorCode _get_ERROR_BYTES_MEMORY_ARRAY_NULL();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_BYTES_MEMORY_ARRAY_NULL
    static void _set_ERROR_BYTES_MEMORY_ARRAY_NULL(::OggVorbis::NativeErrorCode value);
    // static field const value: static public OggVorbis.NativeErrorCode ERROR_INVALID_WRITE_CALLBACK_PARAMETER
    static constexpr const int ERROR_INVALID_WRITE_CALLBACK_PARAMETER = -17;
    // Get static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_WRITE_CALLBACK_PARAMETER
    static ::OggVorbis::NativeErrorCode _get_ERROR_INVALID_WRITE_CALLBACK_PARAMETER();
    // Set static field: static public OggVorbis.NativeErrorCode ERROR_INVALID_WRITE_CALLBACK_PARAMETER
    static void _set_ERROR_INVALID_WRITE_CALLBACK_PARAMETER(::OggVorbis::NativeErrorCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OggVorbis.NativeErrorCode
  #pragma pack(pop)
  static check_size<sizeof(NativeErrorCode), 0 + sizeof(int)> __OggVorbis_NativeErrorCodeSizeCheck;
  static_assert(sizeof(NativeErrorCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"