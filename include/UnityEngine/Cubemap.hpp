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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CubemapFace
  struct CubemapFace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cubemap
  class Cubemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Cubemap
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 566170
  // [ExcludeFromPresetAttribute] Offset: 566170
  class Cubemap : public ::UnityEngine::Texture {
    public:
    // public UnityEngine.TextureFormat get_format()
    // Offset: 0xE373BC
    ::UnityEngine::TextureFormat get_format();
    // public System.Void .ctor(System.Int32 width, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xE37790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xE377D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, UnityEngine.TextureFormat format, System.Int32 mipCount)
    // Offset: 0xE378CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::TextureFormat format, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, format, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0xE37A58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, format, flags, mipCount)));
    }
    // System.Void .ctor(System.Int32 width, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.IntPtr nativeTex)
    // Offset: 0xE37938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::TextureFormat textureFormat, int mipCount, ::System::IntPtr nativeTex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, textureFormat, mipCount, nativeTex)));
    }
    // System.Void .ctor(System.Int32 width, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.IntPtr nativeTex)
    // Offset: 0xE37C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, ::System::IntPtr nativeTex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, textureFormat, mipChain, nativeTex)));
    }
    // public System.Void .ctor(System.Int32 width, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0xE37C28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cubemap* New_ctor(int width, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Cubemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cubemap*, creationType>(width, textureFormat, mipChain)));
    }
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Cubemap mono, System.Int32 ext, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
    // Offset: 0xE373FC
    static bool Internal_CreateImpl(::UnityEngine::Cubemap* mono, int ext, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);
    // static private System.Void Internal_Create(UnityEngine.Cubemap mono, System.Int32 ext, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
    // Offset: 0xE3747C
    static void Internal_Create(::UnityEngine::Cubemap* mono, int ext, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);
    // public System.Void SmoothEdges(System.Int32 smoothRegionWidthInPixels)
    // Offset: 0xE3758C
    void SmoothEdges(int smoothRegionWidthInPixels);
    // public System.Void SmoothEdges()
    // Offset: 0xE375DC
    void SmoothEdges();
    // public UnityEngine.Color[] GetPixels(UnityEngine.CubemapFace face, System.Int32 miplevel)
    // Offset: 0xE37620
    ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace face, int miplevel);
    // public UnityEngine.Color[] GetPixels(UnityEngine.CubemapFace face)
    // Offset: 0xE37678
    ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace face);
    // public System.Void SetPixels(UnityEngine.Color[] colors, UnityEngine.CubemapFace face, System.Int32 miplevel)
    // Offset: 0xE376CC
    void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int miplevel);
    // public System.Void SetPixels(UnityEngine.Color[] colors, UnityEngine.CubemapFace face)
    // Offset: 0xE37734
    void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face);
    // static public UnityEngine.Cubemap CreateExternalTexture(System.Int32 width, UnityEngine.TextureFormat format, System.Boolean mipmap, System.IntPtr nativeTex)
    // Offset: 0xE37CA4
    static ::UnityEngine::Cubemap* CreateExternalTexture(int width, ::UnityEngine::TextureFormat format, bool mipmap, ::System::IntPtr nativeTex);
    // static private System.Void ValidateIsNotCrunched(UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xE37B38
    static void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public override System.Boolean get_isReadable()
    // Offset: 0xE3754C
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Cubemap
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Cubemap::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextureFormat (UnityEngine::Cubemap::*)()>(&UnityEngine::Cubemap::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Cubemap::Internal_CreateImpl
// Il2CppName: Internal_CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Cubemap*, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&UnityEngine::Cubemap::Internal_CreateImpl)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    static auto* ext = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    static auto* nativeTex = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "Internal_CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, ext, mipCount, format, flags, nativeTex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Cubemap*, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&UnityEngine::Cubemap::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    static auto* ext = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    static auto* nativeTex = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, ext, mipCount, format, flags, nativeTex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::SmoothEdges
// Il2CppName: SmoothEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cubemap::*)(int)>(&UnityEngine::Cubemap::SmoothEdges)> {
  static const MethodInfo* get() {
    static auto* smoothRegionWidthInPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "SmoothEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{smoothRegionWidthInPixels});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::SmoothEdges
// Il2CppName: SmoothEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cubemap::*)()>(&UnityEngine::Cubemap::SmoothEdges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "SmoothEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::GetPixels
// Il2CppName: GetPixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int)>(&UnityEngine::Cubemap::GetPixels)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    static auto* miplevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "GetPixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, miplevel});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::GetPixels
// Il2CppName: GetPixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace)>(&UnityEngine::Cubemap::GetPixels)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "GetPixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::SetPixels
// Il2CppName: SetPixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cubemap::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace, int)>(&UnityEngine::Cubemap::SetPixels)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    static auto* miplevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "SetPixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors, face, miplevel});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::SetPixels
// Il2CppName: SetPixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cubemap::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace)>(&UnityEngine::Cubemap::SetPixels)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "SetPixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::CreateExternalTexture
// Il2CppName: CreateExternalTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Cubemap* (*)(int, ::UnityEngine::TextureFormat, bool, ::System::IntPtr)>(&UnityEngine::Cubemap::CreateExternalTexture)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    static auto* mipmap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* nativeTex = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "CreateExternalTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, format, mipmap, nativeTex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::ValidateIsNotCrunched
// Il2CppName: ValidateIsNotCrunched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Cubemap::ValidateIsNotCrunched)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "ValidateIsNotCrunched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cubemap::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Cubemap::*)()>(&UnityEngine::Cubemap::get_isReadable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cubemap*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
