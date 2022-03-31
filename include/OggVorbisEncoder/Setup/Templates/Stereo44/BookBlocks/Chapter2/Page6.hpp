// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Setup.IStaticCodeBook
#include "OggVorbisEncoder/Setup/IStaticCodeBook.hpp"
// Including type: OggVorbisEncoder.Setup.CodeBookMapType
#include "OggVorbisEncoder/Setup/CodeBookMapType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter2
namespace OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2 {
  // Forward declaring type: Page6
  class Page6;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*, "OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter2", "Page6");
// Type namespace: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter2
namespace OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter2.Page6
  // [TokenAttribute] Offset: FFFFFFFF
  class Page6 : public ::Il2CppObject/*, public ::OggVorbisEncoder::Setup::IStaticCodeBook*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 <Dimensions>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Dimensions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Dimensions and: LengthList
    char __padding0[0x4] = {};
    // private readonly System.Byte[] <LengthList>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> LengthList;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly OggVorbisEncoder.Setup.CodeBookMapType <MapType>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::OggVorbisEncoder::Setup::CodeBookMapType MapType;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Setup::CodeBookMapType) == 0x4);
    // private readonly System.Int32 <QuantMin>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int QuantMin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <QuantDelta>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int QuantDelta;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <Quant>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int Quant;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <QuantSequenceP>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int QuantSequenceP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: QuantSequenceP and: QuantList
    char __padding6[0x4] = {};
    // private readonly System.Int32[] <QuantList>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> QuantList;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::OggVorbisEncoder::Setup::IStaticCodeBook
    operator ::OggVorbisEncoder::Setup::IStaticCodeBook() noexcept {
      return *reinterpret_cast<::OggVorbisEncoder::Setup::IStaticCodeBook*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <Dimensions>k__BackingField
    int& dyn_$Dimensions$k__BackingField();
    // Get instance field reference: private readonly System.Byte[] <LengthList>k__BackingField
    ::ArrayW<uint8_t>& dyn_$LengthList$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.CodeBookMapType <MapType>k__BackingField
    ::OggVorbisEncoder::Setup::CodeBookMapType& dyn_$MapType$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <QuantMin>k__BackingField
    int& dyn_$QuantMin$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <QuantDelta>k__BackingField
    int& dyn_$QuantDelta$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <Quant>k__BackingField
    int& dyn_$Quant$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <QuantSequenceP>k__BackingField
    int& dyn_$QuantSequenceP$k__BackingField();
    // Get instance field reference: private readonly System.Int32[] <QuantList>k__BackingField
    ::ArrayW<int>& dyn_$QuantList$k__BackingField();
    // public System.Int32 get_Dimensions()
    // Offset: 0x825100
    int get_Dimensions();
    // public System.Byte[] get_LengthList()
    // Offset: 0x825108
    ::ArrayW<uint8_t> get_LengthList();
    // public OggVorbisEncoder.Setup.CodeBookMapType get_MapType()
    // Offset: 0x825110
    ::OggVorbisEncoder::Setup::CodeBookMapType get_MapType();
    // public System.Int32 get_QuantMin()
    // Offset: 0x825118
    int get_QuantMin();
    // public System.Int32 get_QuantDelta()
    // Offset: 0x825120
    int get_QuantDelta();
    // public System.Int32 get_Quant()
    // Offset: 0x825128
    int get_Quant();
    // public System.Int32 get_QuantSequenceP()
    // Offset: 0x825130
    int get_QuantSequenceP();
    // public System.Int32[] get_QuantList()
    // Offset: 0x825138
    ::ArrayW<int> get_QuantList();
    // public System.Void .ctor()
    // Offset: 0x825140
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Page6* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Page6*, creationType>()));
    }
  }; // OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter2.Page6
  #pragma pack(pop)
  static check_size<sizeof(Page6), 56 + sizeof(::ArrayW<int>)> __OggVorbisEncoder_Setup_Templates_Stereo44_BookBlocks_Chapter2_Page6SizeCheck;
  static_assert(sizeof(Page6) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_Dimensions
// Il2CppName: get_Dimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_Dimensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_Dimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_LengthList
// Il2CppName: get_LengthList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_LengthList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_LengthList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_MapType
// Il2CppName: get_MapType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::CodeBookMapType (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_MapType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_MapType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantMin
// Il2CppName: get_QuantMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_QuantMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantDelta
// Il2CppName: get_QuantDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_QuantDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_Quant
// Il2CppName: get_Quant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_Quant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_Quant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantSequenceP
// Il2CppName: get_QuantSequenceP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantSequenceP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_QuantSequenceP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantList
// Il2CppName: get_QuantList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::get_QuantList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6*), "get_QuantList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter2::Page6::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
