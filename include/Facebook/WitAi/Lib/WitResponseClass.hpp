// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Lib.WitResponseNode
#include "Facebook/WitAi/Lib/WitResponseNode.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseClass
  class WitResponseClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Lib::WitResponseClass);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Lib::WitResponseClass*, "Facebook.WitAi.Lib", "WitResponseClass");
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Lib.WitResponseClass
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 5B1350
  class WitResponseClass : public ::Facebook::WitAi::Lib::WitResponseNode/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: ::Facebook::WitAi::Lib::WitResponseClass::$get_Childs$d__16
    class $get_Childs$d__16;
    // Nested type: ::Facebook::WitAi::Lib::WitResponseClass::$GetEnumerator$d__17
    class $GetEnumerator$d__17;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> m_Dict
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>* m_Dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>*() const noexcept {
      return m_Dict;
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> m_Dict
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>*& dyn_m_Dict();
    // public System.String[] get_ChildNodeNames()
    // Offset: 0x11010BC
    ::ArrayW<::StringW> get_ChildNodeNames();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1101A70
    ::System::Collections::IEnumerator* GetEnumerator();
    // public override Facebook.WitAi.Lib.WitResponseNode get_Item(System.String aKey)
    // Offset: 0x110112C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::get_Item(System.String aKey)
    ::Facebook::WitAi::Lib::WitResponseNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, Facebook.WitAi.Lib.WitResponseNode value)
    // Offset: 0x1101234
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.String aKey, Facebook.WitAi.Lib.WitResponseNode value)
    void set_Item(::StringW aKey, ::Facebook::WitAi::Lib::WitResponseNode* value);
    // public override Facebook.WitAi.Lib.WitResponseNode get_Item(System.Int32 aIndex)
    // Offset: 0x1101304
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::get_Item(System.Int32 aIndex)
    ::Facebook::WitAi::Lib::WitResponseNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, Facebook.WitAi.Lib.WitResponseNode value)
    // Offset: 0x11013B0
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.Int32 aIndex, Facebook.WitAi.Lib.WitResponseNode value)
    void set_Item(int aIndex, ::Facebook::WitAi::Lib::WitResponseNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x1101490
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Int32 WitResponseNode::get_Count()
    int get_Count();
    // public override System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> get_Childs()
    // Offset: 0x11019BC
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> WitResponseNode::get_Childs()
    ::System::Collections::Generic::IEnumerable_1<::Facebook::WitAi::Lib::WitResponseNode*>* get_Childs();
    // public System.Void .ctor()
    // Offset: 0x10FDDB8
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Lib::WitResponseClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseClass*, creationType>()));
    }
    // public override System.Void Add(System.String aKey, Facebook.WitAi.Lib.WitResponseNode aItem)
    // Offset: 0x11014E4
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::Add(System.String aKey, Facebook.WitAi.Lib.WitResponseNode aItem)
    void Add(::StringW aKey, ::Facebook::WitAi::Lib::WitResponseNode* aItem);
    // public override Facebook.WitAi.Lib.WitResponseNode Remove(System.String aKey)
    // Offset: 0x1101630
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::Remove(System.String aKey)
    ::Facebook::WitAi::Lib::WitResponseNode* Remove(::StringW aKey);
    // public override Facebook.WitAi.Lib.WitResponseNode Remove(System.Int32 aIndex)
    // Offset: 0x1101700
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::Remove(System.Int32 aIndex)
    ::Facebook::WitAi::Lib::WitResponseNode* Remove(int aIndex);
    // public override Facebook.WitAi.Lib.WitResponseNode Remove(Facebook.WitAi.Lib.WitResponseNode aNode)
    // Offset: 0x11017E8
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::Remove(Facebook.WitAi.Lib.WitResponseNode aNode)
    ::Facebook::WitAi::Lib::WitResponseNode* Remove(::Facebook::WitAi::Lib::WitResponseNode* aNode);
    // public override System.String ToString()
    // Offset: 0x1101B08
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.String WitResponseNode::ToString()
    ::StringW ToString();
    // public override System.String ToString(System.String aPrefix)
    // Offset: 0x11020BC
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.String WitResponseNode::ToString(System.String aPrefix)
    ::StringW ToString(::StringW aPrefix);
    // public override System.Void Serialize(System.IO.BinaryWriter aWriter)
    // Offset: 0x1102514
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::Serialize(System.IO.BinaryWriter aWriter)
    void Serialize(::System::IO::BinaryWriter* aWriter);
  }; // Facebook.WitAi.Lib.WitResponseClass
  #pragma pack(pop)
  static check_size<sizeof(WitResponseClass), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>*)> __Facebook_WitAi_Lib_WitResponseClassSizeCheck;
  static_assert(sizeof(WitResponseClass) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::get_ChildNodeNames
// Il2CppName: get_ChildNodeNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Facebook::WitAi::Lib::WitResponseClass::*)()>(&Facebook::WitAi::Lib::WitResponseClass::get_ChildNodeNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "get_ChildNodeNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Facebook::WitAi::Lib::WitResponseClass::*)()>(&Facebook::WitAi::Lib::WitResponseClass::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseClass::*)(::StringW)>(&Facebook::WitAi::Lib::WitResponseClass::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseClass::*)(::StringW, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseClass::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseClass::*)(int)>(&Facebook::WitAi::Lib::WitResponseClass::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseClass::*)(int, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseClass::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Facebook::WitAi::Lib::WitResponseClass::*)()>(&Facebook::WitAi::Lib::WitResponseClass::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::get_Childs
// Il2CppName: get_Childs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Facebook::WitAi::Lib::WitResponseNode*>* (Facebook::WitAi::Lib::WitResponseClass::*)()>(&Facebook::WitAi::Lib::WitResponseClass::get_Childs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "get_Childs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseClass::*)(::StringW, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseClass::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseClass::*)(::StringW)>(&Facebook::WitAi::Lib::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseClass::*)(int)>(&Facebook::WitAi::Lib::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseClass::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Lib::WitResponseClass::*)()>(&Facebook::WitAi::Lib::WitResponseClass::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Lib::WitResponseClass::*)(::StringW)>(&Facebook::WitAi::Lib::WitResponseClass::ToString)> {
  static const MethodInfo* get() {
    static auto* aPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aPrefix});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseClass::*)(::System::IO::BinaryWriter*)>(&Facebook::WitAi::Lib::WitResponseClass::Serialize)> {
  static const MethodInfo* get() {
    static auto* aWriter = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aWriter});
  }
};