// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: DOGetter`1<T>
  template<typename T>
  class DOGetter_1;
  // Forward declaring type: DOSetter`1<T>
  template<typename T>
  class DOSetter_1;
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // Forward declaring type: IPlugSetter`4<T1, T2, TPlugin, TPlugOptions>
  template<typename T1, typename T2, typename TPlugin, typename TPlugOptions>
  class IPlugSetter_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Plugins::Core::IPlugSetter_4, "DG.Tweening.Plugins.Core", "IPlugSetter`4");
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.Plugins.Core.IPlugSetter`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename TPlugin, typename TPlugOptions>
  class IPlugSetter_4 {
    public:
    // public DG.Tweening.Core.DOGetter`1<T1> Getter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::DG::Tweening::Core::DOGetter_1<T1>* Getter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::IPlugSetter_4::Getter");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::DG::Tweening::Plugins::Core::IPlugSetter_4<T1, T2, TPlugin, TPlugOptions>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::DG::Tweening::Core::DOGetter_1<T1>*, false>(this, ___internal__method);
    }
    // public DG.Tweening.Core.DOSetter`1<T1> Setter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::DG::Tweening::Core::DOSetter_1<T1>* Setter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::IPlugSetter_4::Setter");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::DG::Tweening::Plugins::Core::IPlugSetter_4<T1, T2, TPlugin, TPlugOptions>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::DG::Tweening::Core::DOSetter_1<T1>*, false>(this, ___internal__method);
    }
    // public T2 EndValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T2 EndValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::IPlugSetter_4::EndValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::DG::Tweening::Plugins::Core::IPlugSetter_4<T1, T2, TPlugin, TPlugOptions>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<T2, false>(this, ___internal__method);
    }
    // public TPlugOptions GetOptions()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TPlugOptions GetOptions() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::IPlugSetter_4::GetOptions");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::DG::Tweening::Plugins::Core::IPlugSetter_4<T1, T2, TPlugin, TPlugOptions>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TPlugOptions, false>(this, ___internal__method);
    }
  }; // DG.Tweening.Plugins.Core.IPlugSetter`4
  // Could not write size check! Type: DG.Tweening.Plugins.Core.IPlugSetter`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
