// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Random);
DEFINE_IL2CPP_ARG_TYPE(::System::Random*, "System", "Random");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Random
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 681820
  class Random : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 inext
    // Size: 0x4
    // Offset: 0x10
    int inext;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 inextp
    // Size: 0x4
    // Offset: 0x14
    int inextp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] SeedArray
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> SeedArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 inext
    [[deprecated]] int& dyn_inext();
    // Get instance field reference: private System.Int32 inextp
    [[deprecated]] int& dyn_inextp();
    // Get instance field reference: private System.Int32[] SeedArray
    [[deprecated]] ::ArrayW<int>& dyn_SeedArray();
    // public System.Void .ctor(System.Int32 Seed)
    // Offset: 0x16115D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor(int Seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>(Seed)));
    }
    // protected System.Double Sample()
    // Offset: 0x1611838
    double Sample();
    // private System.Int32 InternalSample()
    // Offset: 0x161185C
    int InternalSample();
    // private System.Double GetSampleForLargeRange()
    // Offset: 0x16118F8
    double GetSampleForLargeRange();
    // public System.Int32 Next(System.Int32 minValue, System.Int32 maxValue)
    // Offset: 0x1611948
    int Next(int minValue, int maxValue);
    // public System.Int32 Next(System.Int32 maxValue)
    // Offset: 0x1611AD0
    int Next(int maxValue);
    // public System.Void .ctor()
    // Offset: 0x16115A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Random* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Random::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Random*, creationType>()));
    }
  }; // System.Random
  #pragma pack(pop)
  static check_size<sizeof(Random), 24 + sizeof(::ArrayW<int>)> __System_RandomSizeCheck;
  static_assert(sizeof(Random) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Random::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Random::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Random::*)()>(&System::Random::Sample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::InternalSample
// Il2CppName: InternalSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)()>(&System::Random::InternalSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "InternalSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::GetSampleForLargeRange
// Il2CppName: GetSampleForLargeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Random::*)()>(&System::Random::GetSampleForLargeRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "GetSampleForLargeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Random::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)(int, int)>(&System::Random::Next)> {
  static const MethodInfo* get() {
    static auto* minValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minValue, maxValue});
  }
};
// Writing MetadataGetter for method: System::Random::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Random::*)(int)>(&System::Random::Next)> {
  static const MethodInfo* get() {
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Random*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxValue});
  }
};
// Writing MetadataGetter for method: System::Random::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
