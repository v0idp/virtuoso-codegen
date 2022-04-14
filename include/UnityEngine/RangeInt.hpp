// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RangeInt
  struct RangeInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeInt, "UnityEngine", "RangeInt");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RangeInt
  // [TokenAttribute] Offset: FFFFFFFF
  struct RangeInt/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 start
    // Size: 0x4
    // Offset: 0x0
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x4
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RangeInt
    constexpr RangeInt(int start_ = {}, int length_ = {}) noexcept : start{start_}, length{length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 start
    [[deprecated]] int& dyn_start();
    // Get instance field reference: public System.Int32 length
    [[deprecated]] int& dyn_length();
    // public System.Int32 get_end()
    // Offset: 0xBC9568
    int get_end();
    // public System.Void .ctor(System.Int32 start, System.Int32 length)
    // Offset: 0xBC9574
    // ABORTED: conflicts with another method.  RangeInt(int start, int length);
  }; // UnityEngine.RangeInt
  #pragma pack(pop)
  static check_size<sizeof(RangeInt), 4 + sizeof(int)> __UnityEngine_RangeIntSizeCheck;
  static_assert(sizeof(RangeInt) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RangeInt::get_end
// Il2CppName: get_end
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RangeInt::*)()>(&UnityEngine::RangeInt::get_end)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RangeInt), "get_end", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RangeInt::RangeInt
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
