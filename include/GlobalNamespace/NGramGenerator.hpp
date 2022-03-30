// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NGramGenerator
  class NGramGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NGramGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NGramGenerator*, "", "NGramGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NGramGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class NGramGenerator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NGramGenerator::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::NGramGenerator::$MakeNgrams$d__11
    class $MakeNgrams$d__11;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Text[] ButtonLabels
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::UI::Text*> ButtonLabels;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UI::Text*>) == 0x8);
    // public System.Collections.Generic.List`1<System.String> LevenshteinCorpus
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* LevenshteinCorpus;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> biGramDict
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* biGramDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> levenshteinDict
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* levenshteinDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> biGramPredictionCorpus
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::StringW>* biGramPredictionCorpus;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Text[] ButtonLabels
    ::ArrayW<::UnityEngine::UI::Text*>& dyn_ButtonLabels();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> LevenshteinCorpus
    ::System::Collections::Generic::List_1<::StringW>*& dyn_LevenshteinCorpus();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Int32> biGramDict
    ::System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn_biGramDict();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Int32> levenshteinDict
    ::System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn_levenshteinDict();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> biGramPredictionCorpus
    ::System::Collections::Generic::List_1<::StringW>*& dyn_biGramPredictionCorpus();
    // private System.Void Awake()
    // Offset: 0xA09FBC
    void Awake();
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> OrderDictionary(System.String filePath)
    // Offset: 0xA0A108
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* OrderDictionary(::StringW filePath);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> LoadDictionary(System.String filePath)
    // Offset: 0xA0A078
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* LoadDictionary(::StringW filePath);
    // private System.Void GenerateBiGrams(System.String corpus)
    // Offset: 0xA0A610
    void GenerateBiGrams(::StringW corpus);
    // private System.Void GenerateLevenshteinDict(System.String corpus)
    // Offset: 0xA0AD14
    void GenerateLevenshteinDict(::StringW corpus);
    // public System.Void PredictNextWords(System.String input)
    // Offset: 0xA0B35C
    void PredictNextWords(::StringW input);
    // public System.Collections.Generic.IEnumerable`1<System.String> MakeNgrams(System.String text, System.Byte nGramSize)
    // Offset: 0xA0AA44
    ::System::Collections::Generic::IEnumerable_1<::StringW>* MakeNgrams(::StringW text, uint8_t nGramSize);
    // private System.String GetLine(System.Collections.Generic.Dictionary`2<System.String,System.Int32> d)
    // Offset: 0xA0AAC0
    ::StringW GetLine(::System::Collections::Generic::Dictionary_2<::StringW, int>* d);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> GetDict(System.String s)
    // Offset: 0xA0A410
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* GetDict(::StringW s);
    // public System.Void .ctor()
    // Offset: 0xA0B7A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NGramGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NGramGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NGramGenerator*, creationType>()));
    }
  }; // NGramGenerator
  #pragma pack(pop)
  static check_size<sizeof(NGramGenerator), 56 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_NGramGeneratorSizeCheck;
  static_assert(sizeof(NGramGenerator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::*)()>(&GlobalNamespace::NGramGenerator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::OrderDictionary
// Il2CppName: OrderDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int>* (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::OrderDictionary)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "OrderDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::LoadDictionary
// Il2CppName: LoadDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int>* (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::LoadDictionary)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "LoadDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::GenerateBiGrams
// Il2CppName: GenerateBiGrams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::GenerateBiGrams)> {
  static const MethodInfo* get() {
    static auto* corpus = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "GenerateBiGrams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{corpus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::GenerateLevenshteinDict
// Il2CppName: GenerateLevenshteinDict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::GenerateLevenshteinDict)> {
  static const MethodInfo* get() {
    static auto* corpus = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "GenerateLevenshteinDict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{corpus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::PredictNextWords
// Il2CppName: PredictNextWords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::PredictNextWords)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "PredictNextWords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::MakeNgrams
// Il2CppName: MakeNgrams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (GlobalNamespace::NGramGenerator::*)(::StringW, uint8_t)>(&GlobalNamespace::NGramGenerator::MakeNgrams)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nGramSize = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "MakeNgrams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, nGramSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::GetLine
// Il2CppName: GetLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NGramGenerator::*)(::System::Collections::Generic::Dictionary_2<::StringW, int>*)>(&GlobalNamespace::NGramGenerator::GetLine)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "GetLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::GetDict
// Il2CppName: GetDict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int>* (GlobalNamespace::NGramGenerator::*)(::StringW)>(&GlobalNamespace::NGramGenerator::GetDict)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NGramGenerator*), "GetDict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NGramGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!