// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
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
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ConfigHandler
  class ConfigHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::ConfigHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ConfigHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigHandler : public ::Il2CppObject/*, public ::Mono::Xml::SmallXmlParser::IContentHandler*/ {
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
    // private System.Collections.ArrayList typeEntries
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* typeEntries;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList channelInstances
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* channelInstances;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Runtime.Remoting.ChannelData currentChannel
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Remoting::ChannelData* currentChannel;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::ChannelData*) == 0x8);
    // private System.Collections.Stack currentProviderData
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Stack* currentProviderData;
    // Field size check
    static_assert(sizeof(::System::Collections::Stack*) == 0x8);
    // private System.String currentClientUrl
    // Size: 0x8
    // Offset: 0x30
    ::StringW currentClientUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String appName
    // Size: 0x8
    // Offset: 0x38
    ::StringW appName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String currentXmlPath
    // Size: 0x8
    // Offset: 0x40
    ::StringW currentXmlPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean onlyDelayedChannels
    // Size: 0x1
    // Offset: 0x48
    bool onlyDelayedChannels;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Mono::Xml::SmallXmlParser::IContentHandler
    operator ::Mono::Xml::SmallXmlParser::IContentHandler() noexcept {
      return *reinterpret_cast<::Mono::Xml::SmallXmlParser::IContentHandler*>(this);
    }
    // Get instance field reference: private System.Collections.ArrayList typeEntries
    ::System::Collections::ArrayList*& dyn_typeEntries();
    // Get instance field reference: private System.Collections.ArrayList channelInstances
    ::System::Collections::ArrayList*& dyn_channelInstances();
    // Get instance field reference: private System.Runtime.Remoting.ChannelData currentChannel
    ::System::Runtime::Remoting::ChannelData*& dyn_currentChannel();
    // Get instance field reference: private System.Collections.Stack currentProviderData
    ::System::Collections::Stack*& dyn_currentProviderData();
    // Get instance field reference: private System.String currentClientUrl
    ::StringW& dyn_currentClientUrl();
    // Get instance field reference: private System.String appName
    ::StringW& dyn_appName();
    // Get instance field reference: private System.String currentXmlPath
    ::StringW& dyn_currentXmlPath();
    // Get instance field reference: private System.Boolean onlyDelayedChannels
    bool& dyn_onlyDelayedChannels();
    // public System.Void .ctor(System.Boolean onlyDelayedChannels)
    // Offset: 0xBD79CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigHandler* New_ctor(bool onlyDelayedChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::ConfigHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigHandler*, creationType>(onlyDelayedChannels)));
    }
    // private System.Void ValidatePath(System.String element, params System.String[] paths)
    // Offset: 0xBD7A7C
    void ValidatePath(::StringW element, ::ArrayW<::StringW> paths);
    // private System.Boolean CheckPath(System.String path)
    // Offset: 0xBD7B70
    bool CheckPath(::StringW path);
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xBD7C5C
    void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0xBD7C60
    void OnProcessingInstruction(::StringW name, ::StringW text);
    // public System.Void OnIgnorableWhitespace(System.String s)
    // Offset: 0xBD7C64
    void OnIgnorableWhitespace(::StringW s);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBD7C68
    void OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void ParseElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBD7E20
    void ParseElement(::StringW name, ::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0xBDAA18
    void OnEndElement(::StringW name);
    // private System.Void ReadCustomProviderData(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBD8EF0
    void ReadCustomProviderData(::StringW name, ::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadLifetine(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBD9284
    void ReadLifetine(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.TimeSpan ParseTime(System.String s)
    // Offset: 0xBDAA9C
    ::System::TimeSpan ParseTime(::StringW s);
    // private System.Void ReadChannel(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0xBD9848
    void ReadChannel(::Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Runtime.Remoting.ProviderData ReadProvider(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0xBD9C34
    ::System::Runtime::Remoting::ProviderData* ReadProvider(::StringW name, ::Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Void ReadClientActivated(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBDA338
    void ReadClientActivated(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceActivated(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBDA484
    void ReadServiceActivated(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadClientWellKnown(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBDA054
    void ReadClientWellKnown(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceWellKnown(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBDA14C
    void ReadServiceWellKnown(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadInteropXml(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isElement)
    // Offset: 0xBDA554
    void ReadInteropXml(::Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isElement);
    // private System.Void ReadPreload(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xBDA760
    void ReadPreload(::Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.String GetNotNull(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.String name)
    // Offset: 0xBDAEEC
    ::StringW GetNotNull(::Mono::Xml::SmallXmlParser::IAttrList* attrs, ::StringW name);
    // private System.String ExtractAssembly(ref System.String type)
    // Offset: 0xBDB034
    ::StringW ExtractAssembly(ByRef<::StringW> type);
    // public System.Void OnChars(System.String ch)
    // Offset: 0xBDB100
    void OnChars(::StringW ch);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xBDB104
    void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);
  }; // System.Runtime.Remoting.ConfigHandler
  #pragma pack(pop)
  static check_size<sizeof(ConfigHandler), 72 + sizeof(bool)> __System_Runtime_Remoting_ConfigHandlerSizeCheck;
  static_assert(sizeof(ConfigHandler) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ValidatePath
// Il2CppName: ValidatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::ArrayW<::StringW>)>(&System::Runtime::Remoting::ConfigHandler::ValidatePath)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ValidatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, paths});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::CheckPath
// Il2CppName: CheckPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::CheckPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "CheckPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnStartParsing
// Il2CppName: OnStartParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(&System::Runtime::Remoting::ConfigHandler::OnStartParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnStartParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction
// Il2CppName: OnProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace
// Il2CppName: OnIgnorableWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnIgnorableWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnStartElement
// Il2CppName: OnStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::OnStartElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ParseElement
// Il2CppName: ParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ParseElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnEndElement
// Il2CppName: OnEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnEndElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData
// Il2CppName: ReadCustomProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadCustomProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadLifetine
// Il2CppName: ReadLifetine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadLifetine)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadLifetine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ParseTime
// Il2CppName: ParseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::ParseTime)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ParseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadChannel
// Il2CppName: ReadChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadChannel)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isTemplate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, isTemplate});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadProvider
// Il2CppName: ReadProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ProviderData* (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadProvider)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isTemplate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs, isTemplate});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadClientActivated
// Il2CppName: ReadClientActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadClientActivated)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadClientActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadServiceActivated
// Il2CppName: ReadServiceActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceActivated)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadServiceActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown
// Il2CppName: ReadClientWellKnown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadClientWellKnown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown
// Il2CppName: ReadServiceWellKnown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadServiceWellKnown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadInteropXml
// Il2CppName: ReadInteropXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadInteropXml)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isElement = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadInteropXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, isElement});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadPreload
// Il2CppName: ReadPreload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadPreload)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadPreload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::GetNotNull
// Il2CppName: GetNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser::IAttrList*, ::StringW)>(&System::Runtime::Remoting::ConfigHandler::GetNotNull)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "GetNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ExtractAssembly
// Il2CppName: ExtractAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ConfigHandler::*)(ByRef<::StringW>)>(&System::Runtime::Remoting::ConfigHandler::ExtractAssembly)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ExtractAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnChars
// Il2CppName: OnChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnChars)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnEndParsing
// Il2CppName: OnEndParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(&System::Runtime::Remoting::ConfigHandler::OnEndParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnEndParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
