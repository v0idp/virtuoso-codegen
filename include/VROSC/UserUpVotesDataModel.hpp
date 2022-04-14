// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.BaseDataModel
#include "VROSC/BaseDataModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UserUpVotesDataModel
  class UserUpVotesDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UserUpVotesDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataModel*, "VROSC", "UserUpVotesDataModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserUpVotesDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class UserUpVotesDataModel : public ::VROSC::BaseDataModel {
    public:
    // Nested type: ::VROSC::UserUpVotesDataModel::UpVote
    class UpVote;
    public:
    // public System.Collections.Generic.List`1<VROSC.UserUpVotesDataModel/VROSC.UpVote> UpVotes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>* UpVotes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>*
    constexpr operator ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>*() const noexcept {
      return UpVotes;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.UserUpVotesDataModel/VROSC.UpVote> UpVotes
    [[deprecated]] ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>*& dyn_UpVotes();
    // public override System.String get_Key()
    // Offset: 0x1921008
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.String BaseDataModel::get_Key()
    ::StringW get_Key();
    // public override System.Int32 get_Version()
    // Offset: 0x192104C
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.Int32 BaseDataModel::get_Version()
    int get_Version();
    // public System.Void .ctor()
    // Offset: 0x1920530
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.Void BaseDataModel::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserUpVotesDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserUpVotesDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserUpVotesDataModel*, creationType>()));
    }
  }; // VROSC.UserUpVotesDataModel
  #pragma pack(pop)
  static check_size<sizeof(UserUpVotesDataModel), 24 + sizeof(::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel::UpVote*>*)> __VROSC_UserUpVotesDataModelSizeCheck;
  static_assert(sizeof(UserUpVotesDataModel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserUpVotesDataModel::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::UserUpVotesDataModel::*)()>(&VROSC::UserUpVotesDataModel::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserUpVotesDataModel*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserUpVotesDataModel::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UserUpVotesDataModel::*)()>(&VROSC::UserUpVotesDataModel::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserUpVotesDataModel*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserUpVotesDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
