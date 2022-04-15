// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexBoyerMoore
  class RegexBoyerMoore;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCode*, "System.Text.RegularExpressions", "RegexCode");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexCode
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexCode : public ::Il2CppObject {
    public:
    public:
    // System.Int32[] _codes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> codes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.String[] _strings
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> strings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Int32 _trackcount
    // Size: 0x4
    // Offset: 0x20
    int trackcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: trackcount and: caps
    char __padding2[0x4] = {};
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Int32 _capsize
    // Size: 0x4
    // Offset: 0x30
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capsize and: fcPrefix
    char __padding4[0x4] = {};
    // System.Text.RegularExpressions.RegexPrefix _fcPrefix
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::RegularExpressions::RegexPrefix* fcPrefix;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexPrefix*) == 0x8);
    // System.Text.RegularExpressions.RegexBoyerMoore _bmPrefix
    // Size: 0x8
    // Offset: 0x40
    ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexBoyerMoore*) == 0x8);
    // System.Int32 _anchors
    // Size: 0x4
    // Offset: 0x48
    int anchors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _rightToLeft
    // Size: 0x1
    // Offset: 0x4C
    bool rightToLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static System.Int32 Onerep
    static constexpr const int Onerep = 0;
    // Get static field: static System.Int32 Onerep
    static int _get_Onerep();
    // Set static field: static System.Int32 Onerep
    static void _set_Onerep(int value);
    // static field const value: static System.Int32 Notonerep
    static constexpr const int Notonerep = 1;
    // Get static field: static System.Int32 Notonerep
    static int _get_Notonerep();
    // Set static field: static System.Int32 Notonerep
    static void _set_Notonerep(int value);
    // static field const value: static System.Int32 Setrep
    static constexpr const int Setrep = 2;
    // Get static field: static System.Int32 Setrep
    static int _get_Setrep();
    // Set static field: static System.Int32 Setrep
    static void _set_Setrep(int value);
    // static field const value: static System.Int32 Oneloop
    static constexpr const int Oneloop = 3;
    // Get static field: static System.Int32 Oneloop
    static int _get_Oneloop();
    // Set static field: static System.Int32 Oneloop
    static void _set_Oneloop(int value);
    // static field const value: static System.Int32 Notoneloop
    static constexpr const int Notoneloop = 4;
    // Get static field: static System.Int32 Notoneloop
    static int _get_Notoneloop();
    // Set static field: static System.Int32 Notoneloop
    static void _set_Notoneloop(int value);
    // static field const value: static System.Int32 Setloop
    static constexpr const int Setloop = 5;
    // Get static field: static System.Int32 Setloop
    static int _get_Setloop();
    // Set static field: static System.Int32 Setloop
    static void _set_Setloop(int value);
    // static field const value: static System.Int32 Onelazy
    static constexpr const int Onelazy = 6;
    // Get static field: static System.Int32 Onelazy
    static int _get_Onelazy();
    // Set static field: static System.Int32 Onelazy
    static void _set_Onelazy(int value);
    // static field const value: static System.Int32 Notonelazy
    static constexpr const int Notonelazy = 7;
    // Get static field: static System.Int32 Notonelazy
    static int _get_Notonelazy();
    // Set static field: static System.Int32 Notonelazy
    static void _set_Notonelazy(int value);
    // static field const value: static System.Int32 Setlazy
    static constexpr const int Setlazy = 8;
    // Get static field: static System.Int32 Setlazy
    static int _get_Setlazy();
    // Set static field: static System.Int32 Setlazy
    static void _set_Setlazy(int value);
    // static field const value: static System.Int32 One
    static constexpr const int One = 9;
    // Get static field: static System.Int32 One
    static int _get_One();
    // Set static field: static System.Int32 One
    static void _set_One(int value);
    // static field const value: static System.Int32 Notone
    static constexpr const int Notone = 10;
    // Get static field: static System.Int32 Notone
    static int _get_Notone();
    // Set static field: static System.Int32 Notone
    static void _set_Notone(int value);
    // static field const value: static System.Int32 Set
    static constexpr const int Set = 11;
    // Get static field: static System.Int32 Set
    static int _get_Set();
    // Set static field: static System.Int32 Set
    static void _set_Set(int value);
    // static field const value: static System.Int32 Multi
    static constexpr const int Multi = 12;
    // Get static field: static System.Int32 Multi
    static int _get_Multi();
    // Set static field: static System.Int32 Multi
    static void _set_Multi(int value);
    // static field const value: static System.Int32 Ref
    static constexpr const int Ref = 13;
    // Get static field: static System.Int32 Ref
    static int _get_Ref();
    // Set static field: static System.Int32 Ref
    static void _set_Ref(int value);
    // static field const value: static System.Int32 Bol
    static constexpr const int Bol = 14;
    // Get static field: static System.Int32 Bol
    static int _get_Bol();
    // Set static field: static System.Int32 Bol
    static void _set_Bol(int value);
    // static field const value: static System.Int32 Eol
    static constexpr const int Eol = 15;
    // Get static field: static System.Int32 Eol
    static int _get_Eol();
    // Set static field: static System.Int32 Eol
    static void _set_Eol(int value);
    // static field const value: static System.Int32 Boundary
    static constexpr const int Boundary = 16;
    // Get static field: static System.Int32 Boundary
    static int _get_Boundary();
    // Set static field: static System.Int32 Boundary
    static void _set_Boundary(int value);
    // static field const value: static System.Int32 Nonboundary
    static constexpr const int Nonboundary = 17;
    // Get static field: static System.Int32 Nonboundary
    static int _get_Nonboundary();
    // Set static field: static System.Int32 Nonboundary
    static void _set_Nonboundary(int value);
    // static field const value: static System.Int32 Beginning
    static constexpr const int Beginning = 18;
    // Get static field: static System.Int32 Beginning
    static int _get_Beginning();
    // Set static field: static System.Int32 Beginning
    static void _set_Beginning(int value);
    // static field const value: static System.Int32 Start
    static constexpr const int Start = 19;
    // Get static field: static System.Int32 Start
    static int _get_Start();
    // Set static field: static System.Int32 Start
    static void _set_Start(int value);
    // static field const value: static System.Int32 EndZ
    static constexpr const int EndZ = 20;
    // Get static field: static System.Int32 EndZ
    static int _get_EndZ();
    // Set static field: static System.Int32 EndZ
    static void _set_EndZ(int value);
    // static field const value: static System.Int32 End
    static constexpr const int End = 21;
    // Get static field: static System.Int32 End
    static int _get_End();
    // Set static field: static System.Int32 End
    static void _set_End(int value);
    // static field const value: static System.Int32 Nothing
    static constexpr const int Nothing = 22;
    // Get static field: static System.Int32 Nothing
    static int _get_Nothing();
    // Set static field: static System.Int32 Nothing
    static void _set_Nothing(int value);
    // static field const value: static System.Int32 Lazybranch
    static constexpr const int Lazybranch = 23;
    // Get static field: static System.Int32 Lazybranch
    static int _get_Lazybranch();
    // Set static field: static System.Int32 Lazybranch
    static void _set_Lazybranch(int value);
    // static field const value: static System.Int32 Branchmark
    static constexpr const int Branchmark = 24;
    // Get static field: static System.Int32 Branchmark
    static int _get_Branchmark();
    // Set static field: static System.Int32 Branchmark
    static void _set_Branchmark(int value);
    // static field const value: static System.Int32 Lazybranchmark
    static constexpr const int Lazybranchmark = 25;
    // Get static field: static System.Int32 Lazybranchmark
    static int _get_Lazybranchmark();
    // Set static field: static System.Int32 Lazybranchmark
    static void _set_Lazybranchmark(int value);
    // static field const value: static System.Int32 Nullcount
    static constexpr const int Nullcount = 26;
    // Get static field: static System.Int32 Nullcount
    static int _get_Nullcount();
    // Set static field: static System.Int32 Nullcount
    static void _set_Nullcount(int value);
    // static field const value: static System.Int32 Setcount
    static constexpr const int Setcount = 27;
    // Get static field: static System.Int32 Setcount
    static int _get_Setcount();
    // Set static field: static System.Int32 Setcount
    static void _set_Setcount(int value);
    // static field const value: static System.Int32 Branchcount
    static constexpr const int Branchcount = 28;
    // Get static field: static System.Int32 Branchcount
    static int _get_Branchcount();
    // Set static field: static System.Int32 Branchcount
    static void _set_Branchcount(int value);
    // static field const value: static System.Int32 Lazybranchcount
    static constexpr const int Lazybranchcount = 29;
    // Get static field: static System.Int32 Lazybranchcount
    static int _get_Lazybranchcount();
    // Set static field: static System.Int32 Lazybranchcount
    static void _set_Lazybranchcount(int value);
    // static field const value: static System.Int32 Nullmark
    static constexpr const int Nullmark = 30;
    // Get static field: static System.Int32 Nullmark
    static int _get_Nullmark();
    // Set static field: static System.Int32 Nullmark
    static void _set_Nullmark(int value);
    // static field const value: static System.Int32 Setmark
    static constexpr const int Setmark = 31;
    // Get static field: static System.Int32 Setmark
    static int _get_Setmark();
    // Set static field: static System.Int32 Setmark
    static void _set_Setmark(int value);
    // static field const value: static System.Int32 Capturemark
    static constexpr const int Capturemark = 32;
    // Get static field: static System.Int32 Capturemark
    static int _get_Capturemark();
    // Set static field: static System.Int32 Capturemark
    static void _set_Capturemark(int value);
    // static field const value: static System.Int32 Getmark
    static constexpr const int Getmark = 33;
    // Get static field: static System.Int32 Getmark
    static int _get_Getmark();
    // Set static field: static System.Int32 Getmark
    static void _set_Getmark(int value);
    // static field const value: static System.Int32 Setjump
    static constexpr const int Setjump = 34;
    // Get static field: static System.Int32 Setjump
    static int _get_Setjump();
    // Set static field: static System.Int32 Setjump
    static void _set_Setjump(int value);
    // static field const value: static System.Int32 Backjump
    static constexpr const int Backjump = 35;
    // Get static field: static System.Int32 Backjump
    static int _get_Backjump();
    // Set static field: static System.Int32 Backjump
    static void _set_Backjump(int value);
    // static field const value: static System.Int32 Forejump
    static constexpr const int Forejump = 36;
    // Get static field: static System.Int32 Forejump
    static int _get_Forejump();
    // Set static field: static System.Int32 Forejump
    static void _set_Forejump(int value);
    // static field const value: static System.Int32 Testref
    static constexpr const int Testref = 37;
    // Get static field: static System.Int32 Testref
    static int _get_Testref();
    // Set static field: static System.Int32 Testref
    static void _set_Testref(int value);
    // static field const value: static System.Int32 Goto
    static constexpr const int Goto = 38;
    // Get static field: static System.Int32 Goto
    static int _get_Goto();
    // Set static field: static System.Int32 Goto
    static void _set_Goto(int value);
    // static field const value: static System.Int32 Prune
    static constexpr const int Prune = 39;
    // Get static field: static System.Int32 Prune
    static int _get_Prune();
    // Set static field: static System.Int32 Prune
    static void _set_Prune(int value);
    // static field const value: static System.Int32 Stop
    static constexpr const int Stop = 40;
    // Get static field: static System.Int32 Stop
    static int _get_Stop();
    // Set static field: static System.Int32 Stop
    static void _set_Stop(int value);
    // static field const value: static System.Int32 ECMABoundary
    static constexpr const int ECMABoundary = 41;
    // Get static field: static System.Int32 ECMABoundary
    static int _get_ECMABoundary();
    // Set static field: static System.Int32 ECMABoundary
    static void _set_ECMABoundary(int value);
    // static field const value: static System.Int32 NonECMABoundary
    static constexpr const int NonECMABoundary = 42;
    // Get static field: static System.Int32 NonECMABoundary
    static int _get_NonECMABoundary();
    // Set static field: static System.Int32 NonECMABoundary
    static void _set_NonECMABoundary(int value);
    // static field const value: static System.Int32 Mask
    static constexpr const int Mask = 63;
    // Get static field: static System.Int32 Mask
    static int _get_Mask();
    // Set static field: static System.Int32 Mask
    static void _set_Mask(int value);
    // static field const value: static System.Int32 Rtl
    static constexpr const int Rtl = 64;
    // Get static field: static System.Int32 Rtl
    static int _get_Rtl();
    // Set static field: static System.Int32 Rtl
    static void _set_Rtl(int value);
    // static field const value: static System.Int32 Back
    static constexpr const int Back = 128;
    // Get static field: static System.Int32 Back
    static int _get_Back();
    // Set static field: static System.Int32 Back
    static void _set_Back(int value);
    // static field const value: static System.Int32 Back2
    static constexpr const int Back2 = 256;
    // Get static field: static System.Int32 Back2
    static int _get_Back2();
    // Set static field: static System.Int32 Back2
    static void _set_Back2(int value);
    // static field const value: static System.Int32 Ci
    static constexpr const int Ci = 512;
    // Get static field: static System.Int32 Ci
    static int _get_Ci();
    // Set static field: static System.Int32 Ci
    static void _set_Ci(int value);
    // Get instance field reference: System.Int32[] _codes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__codes();
    // Get instance field reference: System.String[] _strings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__strings();
    // Get instance field reference: System.Int32 _trackcount
    [[deprecated("Use field access instead!")]] int& dyn__trackcount();
    // Get instance field reference: System.Collections.Hashtable _caps
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__caps();
    // Get instance field reference: System.Int32 _capsize
    [[deprecated("Use field access instead!")]] int& dyn__capsize();
    // Get instance field reference: System.Text.RegularExpressions.RegexPrefix _fcPrefix
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexPrefix*& dyn__fcPrefix();
    // Get instance field reference: System.Text.RegularExpressions.RegexBoyerMoore _bmPrefix
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexBoyerMoore*& dyn__bmPrefix();
    // Get instance field reference: System.Int32 _anchors
    [[deprecated("Use field access instead!")]] int& dyn__anchors();
    // Get instance field reference: System.Boolean _rightToLeft
    [[deprecated("Use field access instead!")]] bool& dyn__rightToLeft();
    // System.Void .ctor(System.Int32[] codes, System.Collections.Generic.List`1<System.String> stringlist, System.Int32 trackcount, System.Collections.Hashtable caps, System.Int32 capsize, System.Text.RegularExpressions.RegexBoyerMoore bmPrefix, System.Text.RegularExpressions.RegexPrefix fcPrefix, System.Int32 anchors, System.Boolean rightToLeft)
    // Offset: 0x1845E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCode* New_ctor(::ArrayW<int> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int trackcount, ::System::Collections::Hashtable* caps, int capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Text::RegularExpressions::RegexPrefix* fcPrefix, int anchors, bool rightToLeft) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCode*, creationType>(codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft)));
    }
    // static System.Boolean OpcodeBacktracks(System.Int32 Op)
    // Offset: 0x1845F18
    static bool OpcodeBacktracks(int Op);
  }; // System.Text.RegularExpressions.RegexCode
  #pragma pack(pop)
  static check_size<sizeof(RegexCode), 76 + sizeof(bool)> __System_Text_RegularExpressions_RegexCodeSizeCheck;
  static_assert(sizeof(RegexCode) == 0x4D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCode::OpcodeBacktracks
// Il2CppName: OpcodeBacktracks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Text::RegularExpressions::RegexCode::OpcodeBacktracks)> {
  static const MethodInfo* get() {
    static auto* Op = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexCode*), "OpcodeBacktracks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Op});
  }
};
