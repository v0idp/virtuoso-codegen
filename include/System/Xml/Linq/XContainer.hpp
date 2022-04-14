// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XNode
#include "System/Xml/Linq/XNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
  // Forward declaring type: XName
  class XName;
  // Forward declaring type: XAttribute
  class XAttribute;
  // Forward declaring type: LoadOptions
  struct LoadOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XContainer
  class XContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer*, "System.Xml.Linq", "XContainer");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class XContainer : public ::System::Xml::Linq::XNode {
    public:
    // Nested type: ::System::Xml::Linq::XContainer::$Nodes$d__18
    class $Nodes$d__18;
    // Nested type: ::System::Xml::Linq::XContainer::$GetDescendants$d__39
    class $GetDescendants$d__39;
    // Nested type: ::System::Xml::Linq::XContainer::$GetElements$d__40
    class $GetElements$d__40;
    public:
    // System.Object content
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* content;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::Linq::XNode*
    constexpr operator ::System::Xml::Linq::XNode*() const noexcept = delete;
    // Get instance field reference: System.Object content
    [[deprecated]] ::Il2CppObject*& dyn_content();
    // public System.Xml.Linq.XNode get_LastNode()
    // Offset: 0x18566AC
    ::System::Xml::Linq::XNode* get_LastNode();
    // System.Void .ctor(System.Xml.Linq.XContainer other)
    // Offset: 0x185649C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XContainer* New_ctor(::System::Xml::Linq::XContainer* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XContainer*, creationType>(other)));
    }
    // public System.Void Add(System.Object content)
    // Offset: 0x18567F4
    void Add(::Il2CppObject* content);
    // public System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> Descendants()
    // Offset: 0x1857504
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* Descendants();
    // public System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> Descendants(System.Xml.Linq.XName name)
    // Offset: 0x18575A8
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* Descendants(::System::Xml::Linq::XName* name);
    // public System.Xml.Linq.XElement Element(System.Xml.Linq.XName name)
    // Offset: 0x185764C
    ::System::Xml::Linq::XElement* Element(::System::Xml::Linq::XName* name);
    // public System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> Elements()
    // Offset: 0x185773C
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* Elements();
    // public System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> Elements(System.Xml.Linq.XName name)
    // Offset: 0x18577D0
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* Elements(::System::Xml::Linq::XName* name);
    // public System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> Nodes()
    // Offset: 0x18577DC
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes();
    // public System.Void RemoveNodes()
    // Offset: 0x1857890
    void RemoveNodes();
    // System.Void AddAttribute(System.Xml.Linq.XAttribute a)
    // Offset: 0x1857CB0
    void AddAttribute(::System::Xml::Linq::XAttribute* a);
    // System.Void AddAttributeSkipNotify(System.Xml.Linq.XAttribute a)
    // Offset: 0x1857CB4
    void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);
    // System.Void AddContentSkipNotify(System.Object content)
    // Offset: 0x1856D08
    void AddContentSkipNotify(::Il2CppObject* content);
    // System.Void AddNode(System.Xml.Linq.XNode n)
    // Offset: 0x185718C
    void AddNode(::System::Xml::Linq::XNode* n);
    // System.Void AddNodeSkipNotify(System.Xml.Linq.XNode n)
    // Offset: 0x1857CB8
    void AddNodeSkipNotify(::System::Xml::Linq::XNode* n);
    // System.Void AddString(System.String s)
    // Offset: 0x1857210
    void AddString(::StringW s);
    // System.Void AddStringSkipNotify(System.String s)
    // Offset: 0x1857D3C
    void AddStringSkipNotify(::StringW s);
    // System.Void AppendNode(System.Xml.Linq.XNode n)
    // Offset: 0x1857E9C
    void AppendNode(::System::Xml::Linq::XNode* n);
    // System.Void AppendNodeSkipNotify(System.Xml.Linq.XNode n)
    // Offset: 0x18565E0
    void AppendNodeSkipNotify(::System::Xml::Linq::XNode* n);
    // System.Void ConvertTextToNode()
    // Offset: 0x1857BFC
    void ConvertTextToNode();
    // static System.String GetDateTimeString(System.DateTime value)
    // Offset: 0x18581D4
    static ::StringW GetDateTimeString(::System::DateTime value);
    // System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> GetDescendants(System.Xml.Linq.XName name, System.Boolean self)
    // Offset: 0x1857510
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* GetDescendants(::System::Xml::Linq::XName* name, bool self);
    // private System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> GetElements(System.Xml.Linq.XName name)
    // Offset: 0x1857744
    ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* GetElements(::System::Xml::Linq::XName* name);
    // static System.String GetStringValue(System.Object value)
    // Offset: 0x1854E6C
    static ::StringW GetStringValue(::Il2CppObject* value);
    // System.Void ReadContentFrom(System.Xml.XmlReader r)
    // Offset: 0x18582AC
    void ReadContentFrom(::System::Xml::XmlReader* r);
    // System.Void ReadContentFrom(System.Xml.XmlReader r, System.Xml.Linq.LoadOptions o)
    // Offset: 0x1858A7C
    void ReadContentFrom(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);
    // System.Void RemoveNode(System.Xml.Linq.XNode n)
    // Offset: 0x1859A30
    void RemoveNode(::System::Xml::Linq::XNode* n);
    // private System.Void RemoveNodesSkipNotify()
    // Offset: 0x1857B5C
    void RemoveNodesSkipNotify();
    // System.Void ValidateNode(System.Xml.Linq.XNode node, System.Xml.Linq.XNode previous)
    // Offset: 0x1859BE4
    void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);
    // System.Void ValidateString(System.String s)
    // Offset: 0x1859BE8
    void ValidateString(::StringW s);
    // System.Void WriteContentTo(System.Xml.XmlWriter writer)
    // Offset: 0x1859BEC
    void WriteContentTo(::System::Xml::XmlWriter* writer);
    // System.Void .ctor()
    // Offset: 0x1856494
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::.ctor()
    // Base method: System.Void XObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XContainer*, creationType>()));
    }
    // override System.Void AppendText(System.Text.StringBuilder sb)
    // Offset: 0x18580D8
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::AppendText(System.Text.StringBuilder sb)
    void AppendText(::System::Text::StringBuilder* sb);
  }; // System.Xml.Linq.XContainer
  #pragma pack(pop)
  static check_size<sizeof(XContainer), 40 + sizeof(::Il2CppObject*)> __System_Xml_Linq_XContainerSizeCheck;
  static_assert(sizeof(XContainer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::Il2CppObject*)>(&System::Xml::Linq::XContainer::Add)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Descendants
// Il2CppName: Descendants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::Descendants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Descendants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Descendants
// Il2CppName: Descendants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XContainer::Descendants)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Descendants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Element
// Il2CppName: Element
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XElement* (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XContainer::Element)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Element", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Elements
// Il2CppName: Elements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::Elements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Elements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Elements
// Il2CppName: Elements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XContainer::Elements)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Elements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::Nodes
// Il2CppName: Nodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::Nodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "Nodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::RemoveNodes
// Il2CppName: RemoveNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::RemoveNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "RemoveNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XAttribute*)>(&System::Xml::Linq::XContainer::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddAttributeSkipNotify
// Il2CppName: AddAttributeSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XAttribute*)>(&System::Xml::Linq::XContainer::AddAttributeSkipNotify)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddAttributeSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddContentSkipNotify
// Il2CppName: AddContentSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::Il2CppObject*)>(&System::Xml::Linq::XContainer::AddContentSkipNotify)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddContentSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddNode
// Il2CppName: AddNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::AddNode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddNodeSkipNotify
// Il2CppName: AddNodeSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::AddNodeSkipNotify)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddNodeSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::StringW)>(&System::Xml::Linq::XContainer::AddString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AddStringSkipNotify
// Il2CppName: AddStringSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::StringW)>(&System::Xml::Linq::XContainer::AddStringSkipNotify)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AddStringSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AppendNode
// Il2CppName: AppendNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::AppendNode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AppendNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AppendNodeSkipNotify
// Il2CppName: AppendNodeSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::AppendNodeSkipNotify)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AppendNodeSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::ConvertTextToNode
// Il2CppName: ConvertTextToNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::ConvertTextToNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "ConvertTextToNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::GetDateTimeString
// Il2CppName: GetDateTimeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::DateTime)>(&System::Xml::Linq::XContainer::GetDateTimeString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "GetDateTimeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::GetDescendants
// Il2CppName: GetDescendants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XName*, bool)>(&System::Xml::Linq::XContainer::GetDescendants)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "GetDescendants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, self});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::GetElements
// Il2CppName: GetElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XContainer::GetElements)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "GetElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::GetStringValue
// Il2CppName: GetStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&System::Xml::Linq::XContainer::GetStringValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "GetStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::ReadContentFrom
// Il2CppName: ReadContentFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::XmlReader*)>(&System::Xml::Linq::XContainer::ReadContentFrom)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "ReadContentFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::ReadContentFrom
// Il2CppName: ReadContentFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions)>(&System::Xml::Linq::XContainer::ReadContentFrom)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "LoadOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "ReadContentFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, o});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::RemoveNode
// Il2CppName: RemoveNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::RemoveNode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "RemoveNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::RemoveNodesSkipNotify
// Il2CppName: RemoveNodesSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)()>(&System::Xml::Linq::XContainer::RemoveNodesSkipNotify)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "RemoveNodesSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::ValidateNode
// Il2CppName: ValidateNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XContainer::ValidateNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    static auto* previous = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "ValidateNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, previous});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::ValidateString
// Il2CppName: ValidateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::StringW)>(&System::Xml::Linq::XContainer::ValidateString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "ValidateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XContainer::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::AppendText
// Il2CppName: AppendText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::*)(::System::Text::StringBuilder*)>(&System::Xml::Linq::XContainer::AppendText)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer*), "AppendText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
