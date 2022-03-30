// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Setup.IStaticBookBlock
#include "OggVorbisEncoder/Setup/IStaticBookBlock.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IStaticCodeBook
  class IStaticCodeBook;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter1
namespace OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1 {
  // Forward declaring type: Block1
  class Block1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1*, "OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter1", "Block1");
// Type namespace: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter1
namespace OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter1.Block1
  // [TokenAttribute] Offset: FFFFFFFF
  class Block1 : public ::Il2CppObject/*, public ::OggVorbisEncoder::Setup::IStaticBookBlock*/ {
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
    // private readonly OggVorbisEncoder.Setup.IStaticCodeBook[][] <Books>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> Books;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::OggVorbisEncoder::Setup::IStaticBookBlock
    operator ::OggVorbisEncoder::Setup::IStaticBookBlock() noexcept {
      return *reinterpret_cast<::OggVorbisEncoder::Setup::IStaticBookBlock*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>
    constexpr operator ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>() const noexcept {
      return Books;
    }
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.IStaticCodeBook[][] <Books>k__BackingField
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>& dyn_$Books$k__BackingField();
    // public OggVorbisEncoder.Setup.IStaticCodeBook[][] get_Books()
    // Offset: 0x744158
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> get_Books();
    // public System.Void .ctor()
    // Offset: 0x744160
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Block1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Block1*, creationType>()));
    }
  }; // OggVorbisEncoder.Setup.Templates.Stereo44.BookBlocks.Chapter1.Block1
  #pragma pack(pop)
  static check_size<sizeof(Block1), 16 + sizeof(::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>)> __OggVorbisEncoder_Setup_Templates_Stereo44_BookBlocks_Chapter1_Block1SizeCheck;
  static_assert(sizeof(Block1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1::get_Books
// Il2CppName: get_Books
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> (OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1::*)()>(&OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1::get_Books)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1*), "get_Books", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Templates::Stereo44::BookBlocks::Chapter1::Block1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
