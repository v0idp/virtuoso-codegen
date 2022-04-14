// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Offset
  struct TMP_Offset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Offset, "TMPro", "TMP_Offset");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_Offset
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_Offset/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_Left
    // Size: 0x4
    // Offset: 0x0
    float m_Left;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Right
    // Size: 0x4
    // Offset: 0x4
    float m_Right;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Top
    // Size: 0x4
    // Offset: 0x8
    float m_Top;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Bottom
    // Size: 0x4
    // Offset: 0xC
    float m_Bottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: TMP_Offset
    constexpr TMP_Offset(float m_Left_ = {}, float m_Right_ = {}, float m_Top_ = {}, float m_Bottom_ = {}) noexcept : m_Left{m_Left_}, m_Right{m_Right_}, m_Top{m_Top_}, m_Bottom{m_Bottom_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly TMPro.TMP_Offset k_ZeroOffset
    static ::TMPro::TMP_Offset _get_k_ZeroOffset();
    // Set static field: static private readonly TMPro.TMP_Offset k_ZeroOffset
    static void _set_k_ZeroOffset(::TMPro::TMP_Offset value);
    // Get instance field reference: private System.Single m_Left
    [[deprecated]] float& dyn_m_Left();
    // Get instance field reference: private System.Single m_Right
    [[deprecated]] float& dyn_m_Right();
    // Get instance field reference: private System.Single m_Top
    [[deprecated]] float& dyn_m_Top();
    // Get instance field reference: private System.Single m_Bottom
    [[deprecated]] float& dyn_m_Bottom();
    // public System.Single get_left()
    // Offset: 0x9B0408
    float get_left();
    // public System.Void set_left(System.Single value)
    // Offset: 0x9B0410
    void set_left(float value);
    // public System.Single get_right()
    // Offset: 0x9B0418
    float get_right();
    // public System.Void set_right(System.Single value)
    // Offset: 0x9B0420
    void set_right(float value);
    // public System.Single get_top()
    // Offset: 0x9B0428
    float get_top();
    // public System.Void set_top(System.Single value)
    // Offset: 0x9B0430
    void set_top(float value);
    // public System.Single get_bottom()
    // Offset: 0x9B0438
    float get_bottom();
    // public System.Void set_bottom(System.Single value)
    // Offset: 0x9B0440
    void set_bottom(float value);
    // public System.Single get_horizontal()
    // Offset: 0x9B0448
    float get_horizontal();
    // public System.Void set_horizontal(System.Single value)
    // Offset: 0x9B0450
    void set_horizontal(float value);
    // public System.Single get_vertical()
    // Offset: 0x9B0458
    float get_vertical();
    // public System.Void set_vertical(System.Single value)
    // Offset: 0x9B0460
    void set_vertical(float value);
    // static public TMPro.TMP_Offset get_zero()
    // Offset: 0x9B0468
    static ::TMPro::TMP_Offset get_zero();
    // public System.Void .ctor(System.Single left, System.Single right, System.Single top, System.Single bottom)
    // Offset: 0x9B04D0
    // ABORTED: conflicts with another method.  TMP_Offset(float left, float right, float top, float bottom);
    // public System.Void .ctor(System.Single horizontal, System.Single vertical)
    // Offset: 0x9B04DC
    TMP_Offset(float horizontal, float vertical);
    // static private System.Void .cctor()
    // Offset: 0x9B0798
    static void _cctor();
    // public System.Boolean Equals(TMPro.TMP_Offset other)
    // Offset: 0x9B06E4
    bool Equals(::TMPro::TMP_Offset other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9B05F0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9B0660
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // TMPro.TMP_Offset
  #pragma pack(pop)
  static check_size<sizeof(TMP_Offset), 12 + sizeof(float)> __TMPro_TMP_OffsetSizeCheck;
  static_assert(sizeof(TMP_Offset) == 0x10);
  // static public System.Boolean op_Equality(TMPro.TMP_Offset lhs, TMPro.TMP_Offset rhs)
  // Offset: 0x9B04E8
  bool operator ==(const ::TMPro::TMP_Offset& lhs, const ::TMPro::TMP_Offset& rhs);
  // static public System.Boolean op_Inequality(TMPro.TMP_Offset lhs, TMPro.TMP_Offset rhs)
  // Offset: 0x9B0518
  bool operator !=(const ::TMPro::TMP_Offset& lhs, const ::TMPro::TMP_Offset& rhs);
  // static public TMPro.TMP_Offset op_Multiply(TMPro.TMP_Offset a, System.Single b)
  // Offset: 0x9B05DC
  ::TMPro::TMP_Offset operator*(const ::TMPro::TMP_Offset& a, const float& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_left
// Il2CppName: get_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_left
// Il2CppName: set_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_left)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_right
// Il2CppName: get_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_right
// Il2CppName: set_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_right)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_top
// Il2CppName: get_top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_top
// Il2CppName: set_top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_top)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_bottom
// Il2CppName: get_bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_bottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_bottom
// Il2CppName: set_bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_bottom)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_horizontal
// Il2CppName: get_horizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_horizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_horizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_horizontal
// Il2CppName: set_horizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_horizontal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_horizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_vertical
// Il2CppName: get_vertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::get_vertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_vertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::set_vertical
// Il2CppName: set_vertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Offset::*)(float)>(&TMPro::TMP_Offset::set_vertical)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "set_vertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Offset (*)()>(&TMPro::TMP_Offset::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::TMP_Offset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Offset::TMP_Offset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Offset::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_Offset::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_Offset::*)(::TMPro::TMP_Offset)>(&TMPro::TMP_Offset::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Offset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::TMP_Offset::*)()>(&TMPro::TMP_Offset::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_Offset::*)(::Il2CppObject*)>(&TMPro::TMP_Offset::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Offset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Offset::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_Offset::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_Offset::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
