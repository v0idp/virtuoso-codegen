// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
// Including type: UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags
#include "UnityEngine/TextCore/LowLevel/FontFeatureLookupFlags.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphPairAdjustmentRecord
  struct GlyphPairAdjustmentRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6D265C
  // [DebuggerDisplayAttribute] Offset: 6D265C
  struct GlyphPairAdjustmentRecord/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x6D3328
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord) == 0x14);
    // [NativeNameAttribute] Offset: 0x6D3374
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Size: 0x14
    // Offset: 0x14
    ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord) == 0x14);
    // private UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags m_FeatureLookupFlags
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags) == 0x4);
    public:
    // Creating value type constructor for type: GlyphPairAdjustmentRecord
    constexpr GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord_ = {}, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord_ = {}, ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags_ = {}) noexcept : m_FirstAdjustmentRecord{m_FirstAdjustmentRecord_}, m_SecondAdjustmentRecord{m_SecondAdjustmentRecord_}, m_FeatureLookupFlags{m_FeatureLookupFlags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_FirstAdjustmentRecord
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord& dyn_m_FirstAdjustmentRecord();
    // Get instance field reference: private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_SecondAdjustmentRecord
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord& dyn_m_SecondAdjustmentRecord();
    // Get instance field reference: private UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags m_FeatureLookupFlags
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags& dyn_m_FeatureLookupFlags();
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0x18EC930
    ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0x18EC944
    ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord();
  }; // UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(GlyphPairAdjustmentRecord), 40 + sizeof(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags)> __UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecordSizeCheck;
  static_assert(sizeof(GlyphPairAdjustmentRecord) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_firstAdjustmentRecord
// Il2CppName: get_firstAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord (UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_firstAdjustmentRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord), "get_firstAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_secondAdjustmentRecord
// Il2CppName: get_secondAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord (UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_secondAdjustmentRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord), "get_secondAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
