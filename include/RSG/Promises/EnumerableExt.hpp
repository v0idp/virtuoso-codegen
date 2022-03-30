// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RSG::Promises
namespace RSG::Promises {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: RSG.Promises
namespace RSG::Promises {
  // Forward declaring type: EnumerableExt
  class EnumerableExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promises::EnumerableExt);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promises::EnumerableExt*, "RSG.Promises", "EnumerableExt");
// Type namespace: RSG.Promises
namespace RSG::Promises {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promises.EnumerableExt
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class EnumerableExt : public ::Il2CppObject {
    public:
    // Nested type: ::RSG::Promises::EnumerableExt::$FromItems$d__2_1<T>
    template<typename T>
    class $FromItems$d__2_1;
    // static public System.Void Each(System.Collections.Generic.IEnumerable`1<T> source, System.Action`1<T> fn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Each(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Action_1<T>* fn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::Each");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("RSG.Promises", "EnumerableExt", "Each", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(fn)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, fn);
    }
    // static public System.Void Each(System.Collections.Generic.IEnumerable`1<T> source, System.Action`2<T,System.Int32> fn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Each(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Action_2<T, int>* fn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::Each");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("RSG.Promises", "EnumerableExt", "Each", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(fn)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, fn);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> FromItems(params T[] items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* FromItems(::ArrayW<T> items) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promises::EnumerableExt::FromItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("RSG.Promises", "EnumerableExt", "FromItems", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, items);
    }
  }; // RSG.Promises.EnumerableExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promises::EnumerableExt::Each
// Il2CppName: Each
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: RSG::Promises::EnumerableExt::Each
// Il2CppName: Each
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: RSG::Promises::EnumerableExt::FromItems
// Il2CppName: FromItems
// Cannot write MetadataGetter for generic methods!