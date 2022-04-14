// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlNodeEventArgs
  class XmlNodeEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlNodeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNodeEventArgs*, "System.Xml.Serialization", "XmlNodeEventArgs");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlNodeEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNodeEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Object o
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* o;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Xml.XmlNode xmlNode
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlNode* xmlNode;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x20
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x24
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Object o
    [[deprecated]] ::Il2CppObject*& dyn_o();
    // Get instance field reference: private System.Xml.XmlNode xmlNode
    [[deprecated]] ::System::Xml::XmlNode*& dyn_xmlNode();
    // Get instance field reference: private System.Int32 lineNumber
    [[deprecated]] int& dyn_lineNumber();
    // Get instance field reference: private System.Int32 linePosition
    [[deprecated]] int& dyn_linePosition();
    // System.Void .ctor(System.Xml.XmlNode xmlNode, System.Int32 lineNumber, System.Int32 linePosition, System.Object o)
    // Offset: 0x1018DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNodeEventArgs* New_ctor(::System::Xml::XmlNode* xmlNode, int lineNumber, int linePosition, ::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlNodeEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNodeEventArgs*, creationType>(xmlNode, lineNumber, linePosition, o)));
    }
  }; // System.Xml.Serialization.XmlNodeEventArgs
  #pragma pack(pop)
  static check_size<sizeof(XmlNodeEventArgs), 36 + sizeof(int)> __System_Xml_Serialization_XmlNodeEventArgsSizeCheck;
  static_assert(sizeof(XmlNodeEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlNodeEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!