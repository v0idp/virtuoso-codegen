// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONObject
#include "OVRSimpleJSON/JSONObject.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRSimpleJSON::JSONObject::$get_Children$d__23);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONObject::$get_Children$d__23*, "OVRSimpleJSON", "JSONObject/<get_Children>d__23");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSimpleJSON.JSONObject/OVRSimpleJSON.<get_Children>d__23
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JSONObject::$get_Children$d__23 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>, public ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private OVRSimpleJSON.JSONNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::OVRSimpleJSON::JSONNode* $$2__current;
    // Field size check
    static_assert(sizeof(::OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRSimpleJSON.JSONObject <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::OVRSimpleJSON::JSONObject* $$4__this;
    // Field size check
    static_assert(sizeof(::OVRSimpleJSON::JSONObject*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,OVRSimpleJSON.JSONNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>
    operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>
    operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: private OVRSimpleJSON.JSONNode <>2__current
    [[deprecated]] ::OVRSimpleJSON::JSONNode*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public OVRSimpleJSON.JSONObject <>4__this
    [[deprecated]] ::OVRSimpleJSON::JSONObject*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,OVRSimpleJSON.JSONNode> <>7__wrap1
    [[deprecated]] typename ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>::Enumerator& dyn_$$7__wrap1();
    // private OVRSimpleJSON.JSONNode System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current()
    // Offset: 0x84BCE0
    ::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x84BD28
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x84BAB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONObject::$get_Children$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVRSimpleJSON::JSONObject::$get_Children$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONObject::$get_Children$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x84BAE8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x84BB58
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x84BB04
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x84BCE8
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<OVRSimpleJSON.JSONNode> System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator()
    // Offset: 0x84BD30
    ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x84BDD8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONObject/OVRSimpleJSON.<get_Children>d__23
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OVRSimpleJSON::JSONObject::$get_Children$d__23::*)()>(&OVRSimpleJSON::JSONObject::$get_Children$d__23::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONObject::$get_Children$d__23*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
