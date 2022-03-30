// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2DArray
  class Texture2DArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Texture2DArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture2DArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 566208
  class Texture2DArray : public ::UnityEngine::Texture {
    public:
    // static public System.Int32 get_allSlices()
    // Offset: 0x9E3C5C
    static int get_allSlices();
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x9E3E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x9E3EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0x9E3F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear)
    // Offset: 0x9E40A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipCount, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
    // Offset: 0x9E41BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x9E41E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain)));
    }
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x9E3CD0
    static bool Internal_CreateImpl(::UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x9E3D58
    static void Internal_Create(::UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void ValidateIsNotCrunched(UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x9E4048
    static void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public override System.Boolean get_isReadable()
    // Offset: 0x9E3C90
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture2DArray
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::get_allSlices
// Il2CppName: get_allSlices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Texture2DArray::get_allSlices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "get_allSlices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::Internal_CreateImpl
// Il2CppName: Internal_CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2DArray*, int, int, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture2DArray::Internal_CreateImpl)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2DArray")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "Internal_CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, w, h, d, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2DArray*, int, int, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture2DArray::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2DArray")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, w, h, d, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::ValidateIsNotCrunched
// Il2CppName: ValidateIsNotCrunched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture2DArray::ValidateIsNotCrunched)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "ValidateIsNotCrunched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture2DArray::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture2DArray::*)()>(&UnityEngine::Texture2DArray::get_isReadable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture2DArray*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
