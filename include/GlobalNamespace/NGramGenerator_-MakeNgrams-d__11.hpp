// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NGramGenerator
#include "GlobalNamespace/NGramGenerator.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NGramGenerator::$MakeNgrams$d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*, "", "NGramGenerator/<MakeNgrams>d__11");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: NGramGenerator/<MakeNgrams>d__11
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NGramGenerator::$MakeNgrams$d__11 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::StringW>, public ::System::Collections::Generic::IEnumerator_1<::StringW>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.String <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::StringW $$2__current;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: text
    char __padding2[0x4] = {};
    // private System.String text
    // Size: 0x8
    // Offset: 0x28
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__text
    // Size: 0x8
    // Offset: 0x30
    ::StringW $$3__text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte nGramSize
    // Size: 0x1
    // Offset: 0x38
    uint8_t nGramSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte <>3__nGramSize
    // Size: 0x1
    // Offset: 0x39
    uint8_t $$3__nGramSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: $$3__nGramSize and: $nGram$5__2
    char __padding6[0x6] = {};
    // private System.Text.StringBuilder <nGram>5__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Text::StringBuilder* $nGram$5__2;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Int32> <wordLengths>5__3
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Queue_1<int>* $wordLengths$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<int>*) == 0x8);
    // private System.Int32 <wordCount>5__4
    // Size: 0x4
    // Offset: 0x50
    int $wordCount$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <lastWordLen>5__5
    // Size: 0x4
    // Offset: 0x54
    int $lastWordLen$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <i>5__6
    // Size: 0x4
    // Offset: 0x58
    int $i$5__6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::StringW>
    operator ::System::Collections::Generic::IEnumerable_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::StringW>
    operator ::System::Collections::Generic::IEnumerator_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.String <>2__current
    ::StringW& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.String text
    ::StringW& dyn_text();
    // Get instance field reference: public System.String <>3__text
    ::StringW& dyn_$$3__text();
    // Get instance field reference: private System.Byte nGramSize
    uint8_t& dyn_nGramSize();
    // Get instance field reference: public System.Byte <>3__nGramSize
    uint8_t& dyn_$$3__nGramSize();
    // Get instance field reference: private System.Text.StringBuilder <nGram>5__2
    ::System::Text::StringBuilder*& dyn_$nGram$5__2();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Int32> <wordLengths>5__3
    ::System::Collections::Generic::Queue_1<int>*& dyn_$wordLengths$5__3();
    // Get instance field reference: private System.Int32 <wordCount>5__4
    int& dyn_$wordCount$5__4();
    // Get instance field reference: private System.Int32 <lastWordLen>5__5
    int& dyn_$lastWordLen$5__5();
    // Get instance field reference: private System.Int32 <i>5__6
    int& dyn_$i$5__6();
    // private System.String System.Collections.Generic.IEnumerator<System.String>.get_Current()
    // Offset: 0x133D458
    ::StringW System_Collections_Generic_IEnumerator$System_String$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x133D4A0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x133CFA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NGramGenerator::$MakeNgrams$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NGramGenerator::$MakeNgrams$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x133CFE0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x133CFE4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x133D460
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.String> System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
    // Offset: 0x133D4A8
    ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable$System_String$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x133D558
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // NGramGenerator/<MakeNgrams>d__11
  #pragma pack(pop)
  static check_size<sizeof(NGramGenerator::$MakeNgrams$d__11), 88 + sizeof(int)> __GlobalNamespace_NGramGenerator_$MakeNgrams$d__11SizeCheck;
  static_assert(sizeof(NGramGenerator::$MakeNgrams$d__11) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_Generic_IEnumerator$System_String$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.String>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_Generic_IEnumerator$System_String$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::*)()>(&GlobalNamespace::NGramGenerator::$MakeNgrams$d__11::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator::$MakeNgrams$d__11*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
