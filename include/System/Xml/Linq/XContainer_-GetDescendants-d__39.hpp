// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XContainer
#include "System/Xml/Linq/XContainer.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XElement
  class XElement;
  // Forward declaring type: XName
  class XName;
  // Forward declaring type: XNode
  class XNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XContainer::$GetDescendants$d__39);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer::$GetDescendants$d__39*, "System.Xml.Linq", "XContainer/<GetDescendants>d__39");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XContainer/System.Xml.Linq.<GetDescendants>d__39
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XContainer::$GetDescendants$d__39 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>, public ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Xml.Linq.XElement <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Linq::XElement* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XElement*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean self
    // Size: 0x1
    // Offset: 0x24
    bool self;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean <>3__self
    // Size: 0x1
    // Offset: 0x25
    bool $$3__self;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $$3__self and: $$4__this
    char __padding4[0x2] = {};
    // public System.Xml.Linq.XContainer <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Linq::XContainer* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XContainer*) == 0x8);
    // private System.Xml.Linq.XName name
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Linq::XName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XName*) == 0x8);
    // public System.Xml.Linq.XName <>3__name
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Linq::XName* $$3__name;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XName*) == 0x8);
    // private System.Xml.Linq.XNode <n>5__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Linq::XNode* $n$5__1;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XNode*) == 0x8);
    // private System.Xml.Linq.XElement <e>5__2
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::Linq::XElement* $e$5__2;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XElement*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Xml.Linq.XElement <>2__current
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XElement*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.Boolean self
    [[deprecated("Use field access instead!")]] bool& dyn_self();
    // Get instance field reference: public System.Boolean <>3__self
    [[deprecated("Use field access instead!")]] bool& dyn_$$3__self();
    // Get instance field reference: public System.Xml.Linq.XContainer <>4__this
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XContainer*& dyn_$$4__this();
    // Get instance field reference: private System.Xml.Linq.XName name
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XName*& dyn_name();
    // Get instance field reference: public System.Xml.Linq.XName <>3__name
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XName*& dyn_$$3__name();
    // Get instance field reference: private System.Xml.Linq.XNode <n>5__1
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XNode*& dyn_$n$5__1();
    // Get instance field reference: private System.Xml.Linq.XElement <e>5__2
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XElement*& dyn_$e$5__2();
    // private System.Xml.Linq.XElement System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current()
    // Offset: 0x185E2FC
    ::System::Xml::Linq::XElement* System_Collections_Generic_IEnumerator$System_Xml_Linq_XElement$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x185E344
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x185823C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XContainer::$GetDescendants$d__39* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XContainer::$GetDescendants$d__39::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XContainer::$GetDescendants$d__39*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x185E0DC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x185E0E0
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x185E304
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
    // Offset: 0x185E34C
    ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>* System_Collections_Generic_IEnumerable$System_Xml_Linq_XElement$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x185E404
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Xml.Linq.XContainer/System.Xml.Linq.<GetDescendants>d__39
  #pragma pack(pop)
  static check_size<sizeof(XContainer::$GetDescendants$d__39), 72 + sizeof(::System::Xml::Linq::XElement*)> __System_Xml_Linq_XContainer_$GetDescendants$d__39SizeCheck;
  static_assert(sizeof(XContainer::$GetDescendants$d__39) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_Generic_IEnumerator$System_Xml_Linq_XElement$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XElement* (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_Generic_IEnumerator$System_Xml_Linq_XElement$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_Generic_IEnumerable$System_Xml_Linq_XElement$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>* (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_Generic_IEnumerable$System_Xml_Linq_XElement$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::Linq::XContainer::$GetDescendants$d__39::*)()>(&System::Xml::Linq::XContainer::$GetDescendants$d__39::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$GetDescendants$d__39*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
