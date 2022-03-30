// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONObject
  class JSONObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRSimpleJSON::JSONObject);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONObject*, "OVRSimpleJSON", "JSONObject");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 58BBE4
  class JSONObject : public ::OVRSimpleJSON::JSONNode {
    public:
    // Nested type: ::OVRSimpleJSON::JSONObject::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: ::OVRSimpleJSON::JSONObject::$get_Children$d__23
    class $get_Children$d__23;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.Dictionary`2<System.String,OVRSimpleJSON.JSONNode> m_Dict
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* m_Dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,OVRSimpleJSON.JSONNode> m_Dict
    ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*& dyn_m_Dict();
    // Get instance field reference: private System.Boolean inline
    bool& dyn_inline();
    // public override System.Boolean get_Inline()
    // Offset: 0x818564
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x81856C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x818578
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    ::OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsObject()
    // Offset: 0x818580
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsObject()
    bool get_IsObject();
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x818618
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.String aKey)
    ::OVRSimpleJSON::JSONNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x8186E8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x818828
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    ::OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x8188D4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, ::OVRSimpleJSON::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x818A28
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_Children()
    // Offset: 0x818FBC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> JSONNode::get_Children()
    ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* get_Children();
    // public System.Void .ctor()
    // Offset: 0x8139D4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVRSimpleJSON::JSONObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject*, creationType>()));
    }
    // public override OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator GetEnumerator()
    // Offset: 0x818588
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator JSONNode::GetEnumerator()
    ::OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x818A7C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem);
    // public override OVRSimpleJSON.JSONNode Remove(System.String aKey)
    // Offset: 0x818C38
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.String aKey)
    ::OVRSimpleJSON::JSONNode* Remove(::StringW aKey);
    // public override OVRSimpleJSON.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x818D08
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.Int32 aIndex)
    ::OVRSimpleJSON::JSONNode* Remove(int aIndex);
    // public override OVRSimpleJSON.JSONNode Remove(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x818DF0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(OVRSimpleJSON.JSONNode aNode)
    ::OVRSimpleJSON::JSONNode* Remove(::OVRSimpleJSON::JSONNode* aNode);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x819028
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);
  }; // OVRSimpleJSON.JSONObject
  #pragma pack(pop)
  static check_size<sizeof(JSONObject), 24 + sizeof(bool)> __OVRSimpleJSON_JSONObjectSizeCheck;
  static_assert(sizeof(JSONObject) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Inline
// Il2CppName: get_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::get_Inline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::set_Inline
// Il2CppName: set_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::*)(bool)>(&OVRSimpleJSON::JSONObject::set_Inline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "set_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_IsObject
// Il2CppName: get_IsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::get_IsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_IsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::*)(::StringW)>(&OVRSimpleJSON::JSONObject::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONObject::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::*)(int)>(&OVRSimpleJSON::JSONObject::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::*)(int, ::OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONObject::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONObject::*)()>(&OVRSimpleJSON::JSONObject::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONObject::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::*)(::StringW)>(&OVRSimpleJSON::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::*)(int)>(&OVRSimpleJSON::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::*)(::OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONObject::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::*)(::System::Text::StringBuilder*, int, int, ::OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONObject::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
