// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MaterialPropertyBlock
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 56592C
  // [NativeHeaderAttribute] Offset: 56592C
  // [NativeHeaderAttribute] Offset: 56592C
  // [NativeHeaderAttribute] Offset: 56592C
  class MaterialPropertyBlock : public ::Il2CppObject {
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
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    ::System::IntPtr& dyn_m_Ptr();
    // private System.Void SetFloatImpl(System.Int32 name, System.Single value)
    // Offset: 0xE448D8
    void SetFloatImpl(int name, float value);
    // private System.Void SetVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
    // Offset: 0xE44938
    void SetVectorImpl(int name, ::UnityEngine::Vector4 value);
    // private System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
    // Offset: 0xE449F8
    void SetColorImpl(int name, ::UnityEngine::Color value);
    // private System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
    // Offset: 0xE44AB8
    void SetTextureImpl(int name, ::UnityEngine::Texture* value);
    // private System.Void SetFloatArrayImpl(System.Int32 name, System.Single[] values, System.Int32 count)
    // Offset: 0xE44B10
    void SetFloatArrayImpl(int name, ::ArrayW<float> values, int count);
    // private System.Void SetVectorArrayImpl(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
    // Offset: 0xE44B78
    void SetVectorArrayImpl(int name, ::ArrayW<::UnityEngine::Vector4> values, int count);
    // static private System.IntPtr CreateImpl()
    // Offset: 0xE44BE0
    static ::System::IntPtr CreateImpl();
    // static private System.Void DestroyImpl(System.IntPtr mpb)
    // Offset: 0xE44C14
    static void DestroyImpl(::System::IntPtr mpb);
    // private System.Void SetFloatArray(System.Int32 name, System.Single[] values, System.Int32 count)
    // Offset: 0xE44C54
    void SetFloatArray(int name, ::ArrayW<float> values, int count);
    // private System.Void SetVectorArray(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
    // Offset: 0xE44D6C
    void SetVectorArray(int name, ::ArrayW<::UnityEngine::Vector4> values, int count);
    // private System.Void Dispose()
    // Offset: 0xE44F38
    void Dispose();
    // public System.Void SetFloat(System.String name, System.Single value)
    // Offset: 0xE44FF4
    void SetFloat(::StringW name, float value);
    // public System.Void SetVector(System.String name, UnityEngine.Vector4 value)
    // Offset: 0xE45060
    void SetVector(::StringW name, ::UnityEngine::Vector4 value);
    // public System.Void SetColor(System.String name, UnityEngine.Color value)
    // Offset: 0xE450C0
    void SetColor(::StringW name, ::UnityEngine::Color value);
    // public System.Void SetTexture(System.String name, UnityEngine.Texture value)
    // Offset: 0xE45120
    void SetTexture(::StringW name, ::UnityEngine::Texture* value);
    // public System.Void SetFloatArray(System.String name, System.Single[] values)
    // Offset: 0xE45184
    void SetFloatArray(::StringW name, ::ArrayW<float> values);
    // public System.Void SetVectorArray(System.String name, UnityEngine.Vector4[] values)
    // Offset: 0xE451C8
    void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4> values);
    // private System.Void SetVectorImpl_Injected(System.Int32 name, ref UnityEngine.Vector4 value)
    // Offset: 0xE449A0
    void SetVectorImpl_Injected(int name, ByRef<::UnityEngine::Vector4> value);
    // private System.Void SetColorImpl_Injected(System.Int32 name, ref UnityEngine.Color value)
    // Offset: 0xE44A60
    void SetColorImpl_Injected(int name, ByRef<::UnityEngine::Color> value);
    // public System.Void .ctor()
    // Offset: 0xE44E84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::MaterialPropertyBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlock*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xE44ED0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.MaterialPropertyBlock
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlock), 16 + sizeof(::System::IntPtr)> __UnityEngine_MaterialPropertyBlockSizeCheck;
  static_assert(sizeof(MaterialPropertyBlock) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetFloatImpl
// Il2CppName: SetFloatImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, float)>(&UnityEngine::MaterialPropertyBlock::SetFloatImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetFloatImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVectorImpl
// Il2CppName: SetVectorImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::UnityEngine::Vector4)>(&UnityEngine::MaterialPropertyBlock::SetVectorImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVectorImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetColorImpl
// Il2CppName: SetColorImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::UnityEngine::Color)>(&UnityEngine::MaterialPropertyBlock::SetColorImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetColorImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetTextureImpl
// Il2CppName: SetTextureImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::UnityEngine::Texture*)>(&UnityEngine::MaterialPropertyBlock::SetTextureImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetTextureImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl
// Il2CppName: SetFloatArrayImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::ArrayW<float>, int)>(&UnityEngine::MaterialPropertyBlock::SetFloatArrayImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetFloatArrayImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl
// Il2CppName: SetVectorArrayImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::ArrayW<::UnityEngine::Vector4>, int)>(&UnityEngine::MaterialPropertyBlock::SetVectorArrayImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVectorArrayImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::CreateImpl
// Il2CppName: CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&UnityEngine::MaterialPropertyBlock::CreateImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::DestroyImpl
// Il2CppName: DestroyImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::MaterialPropertyBlock::DestroyImpl)> {
  static const MethodInfo* get() {
    static auto* mpb = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "DestroyImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mpb});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetFloatArray
// Il2CppName: SetFloatArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::ArrayW<float>, int)>(&UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetFloatArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVectorArray
// Il2CppName: SetVectorArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ::ArrayW<::UnityEngine::Vector4>, int)>(&UnityEngine::MaterialPropertyBlock::SetVectorArray)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVectorArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)()>(&UnityEngine::MaterialPropertyBlock::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, float)>(&UnityEngine::MaterialPropertyBlock::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVector
// Il2CppName: SetVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Vector4)>(&UnityEngine::MaterialPropertyBlock::SetVector)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Color)>(&UnityEngine::MaterialPropertyBlock::SetColor)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetTexture
// Il2CppName: SetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, ::UnityEngine::Texture*)>(&UnityEngine::MaterialPropertyBlock::SetTexture)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetFloatArray
// Il2CppName: SetFloatArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, ::ArrayW<float>)>(&UnityEngine::MaterialPropertyBlock::SetFloatArray)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetFloatArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVectorArray
// Il2CppName: SetVectorArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(::StringW, ::ArrayW<::UnityEngine::Vector4>)>(&UnityEngine::MaterialPropertyBlock::SetVectorArray)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVectorArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetVectorImpl_Injected
// Il2CppName: SetVectorImpl_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::MaterialPropertyBlock::SetVectorImpl_Injected)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetVectorImpl_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::SetColorImpl_Injected
// Il2CppName: SetColorImpl_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)(int, ByRef<::UnityEngine::Color>)>(&UnityEngine::MaterialPropertyBlock::SetColorImpl_Injected)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "SetColorImpl_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::MaterialPropertyBlock::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MaterialPropertyBlock::*)()>(&UnityEngine::MaterialPropertyBlock::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MaterialPropertyBlock*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
