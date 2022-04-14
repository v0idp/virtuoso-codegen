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
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: Interpreter
  class Interpreter;
  // Forward declaring type: LightDelegateCreator
  class LightDelegateCreator;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IStrongBox
  class IStrongBox;
}
// Forward declaring namespace: System::Dynamic::Utils
namespace System::Dynamic::Utils {
  // Forward declaring type: CacheDict`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class CacheDict_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LightLambda
  class LightLambda;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LightLambda);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LightLambda*, "System.Linq.Expressions.Interpreter", "LightLambda");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LightLambda
  // [TokenAttribute] Offset: FFFFFFFF
  class LightLambda : public ::Il2CppObject {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::LightLambda::$$c__DisplayClass74_0
    class $$c__DisplayClass74_0;
    public:
    // private readonly System.Runtime.CompilerServices.IStrongBox[] _closure
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> closure;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>) == 0x8);
    // private readonly System.Linq.Expressions.Interpreter.Interpreter _interpreter
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::Interpreter* interpreter;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::Interpreter*) == 0x8);
    // private readonly System.Linq.Expressions.Interpreter.LightDelegateCreator _delegateCreator
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LightDelegateCreator*) == 0x8);
    public:
    // Get static field: static private readonly System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate>> _runCache
    static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>* _get__runCache();
    // Set static field: static private readonly System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate>> _runCache
    static void _set__runCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>* value);
    // Get instance field reference: private readonly System.Runtime.CompilerServices.IStrongBox[] _closure
    [[deprecated]] ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>& dyn__closure();
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.Interpreter _interpreter
    [[deprecated]] ::System::Linq::Expressions::Interpreter::Interpreter*& dyn__interpreter();
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.LightDelegateCreator _delegateCreator
    [[deprecated]] ::System::Linq::Expressions::Interpreter::LightDelegateCreator*& dyn__delegateCreator();
    // System.Void .ctor(System.Linq.Expressions.Interpreter.LightDelegateCreator delegateCreator, System.Runtime.CompilerServices.IStrongBox[] closure)
    // Offset: 0xE8DB0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightLambda* New_ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator, ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> closure) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LightLambda::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightLambda*, creationType>(delegateCreator, closure)));
    }
    // static private System.Void .cctor()
    // Offset: 0xE8F698
    static void _cctor();
    // System.Void RunVoid0()
    // Offset: 0xE8DBF4
    void RunVoid0();
    // static private System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate> GetRunDelegateCtor(System.Type delegateType)
    // Offset: 0xE8DD14
    static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* GetRunDelegateCtor(::System::Type* delegateType);
    // static private System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate> MakeRunDelegateCtor(System.Type delegateType)
    // Offset: 0xE8DEC0
    static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* MakeRunDelegateCtor(::System::Type* delegateType);
    // private System.Delegate CreateCustomDelegate(System.Type delegateType)
    // Offset: 0xE8E928
    ::System::Delegate* CreateCustomDelegate(::System::Type* delegateType);
    // System.Delegate MakeDelegate(System.Type delegateType)
    // Offset: 0xE8DB58
    ::System::Delegate* MakeDelegate(::System::Type* delegateType);
    // private System.Linq.Expressions.Interpreter.InterpretedFrame MakeFrame()
    // Offset: 0xE8DCA4
    ::System::Linq::Expressions::Interpreter::InterpretedFrame* MakeFrame();
    // System.Void RunVoidRef2(ref T0 arg0, ref T1 arg1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1>
    void RunVoidRef2(ByRef<T0> arg0, ByRef<T1> arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LightLambda::RunVoidRef2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RunVoidRef2", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, byref(arg0), byref(arg1));
    }
    // public System.Object Run(params System.Object[] arguments)
    // Offset: 0xE8F2C8
    ::Il2CppObject* Run(::ArrayW<::Il2CppObject*> arguments);
    // public System.Object RunVoid(params System.Object[] arguments)
    // Offset: 0xE8F4B4
    ::Il2CppObject* RunVoid(::ArrayW<::Il2CppObject*> arguments);
  }; // System.Linq.Expressions.Interpreter.LightLambda
  #pragma pack(pop)
  static check_size<sizeof(LightLambda), 32 + sizeof(::System::Linq::Expressions::Interpreter::LightDelegateCreator*)> __System_Linq_Expressions_Interpreter_LightLambdaSizeCheck;
  static_assert(sizeof(LightLambda) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::LightLambda::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::RunVoid0
// Il2CppName: RunVoid0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LightLambda::*)()>(&System::Linq::Expressions::Interpreter::LightLambda::RunVoid0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "RunVoid0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::GetRunDelegateCtor
// Il2CppName: GetRunDelegateCtor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* (*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::LightLambda::GetRunDelegateCtor)> {
  static const MethodInfo* get() {
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "GetRunDelegateCtor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateType});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::MakeRunDelegateCtor
// Il2CppName: MakeRunDelegateCtor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* (*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::LightLambda::MakeRunDelegateCtor)> {
  static const MethodInfo* get() {
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "MakeRunDelegateCtor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateType});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::CreateCustomDelegate
// Il2CppName: CreateCustomDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (System::Linq::Expressions::Interpreter::LightLambda::*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::LightLambda::CreateCustomDelegate)> {
  static const MethodInfo* get() {
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "CreateCustomDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateType});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::MakeDelegate
// Il2CppName: MakeDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (System::Linq::Expressions::Interpreter::LightLambda::*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::LightLambda::MakeDelegate)> {
  static const MethodInfo* get() {
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "MakeDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateType});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::MakeFrame
// Il2CppName: MakeFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::InterpretedFrame* (System::Linq::Expressions::Interpreter::LightLambda::*)()>(&System::Linq::Expressions::Interpreter::LightLambda::MakeFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "MakeFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::RunVoidRef2
// Il2CppName: RunVoidRef2
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::LightLambda::*)(::ArrayW<::Il2CppObject*>)>(&System::Linq::Expressions::Interpreter::LightLambda::Run)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LightLambda::RunVoid
// Il2CppName: RunVoid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::LightLambda::*)(::ArrayW<::Il2CppObject*>)>(&System::Linq::Expressions::Interpreter::LightLambda::RunVoid)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LightLambda*), "RunVoid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments});
  }
};