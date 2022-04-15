// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: Index
  class Index;
  // Forward declaring type: DataView
  class DataView;
  // Forward declaring type: DataRow
  class DataRow;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionChangeEventArgs
  class CollectionChangeEventArgs;
  // Forward declaring type: ListChangedType
  struct ListChangedType;
  // Forward declaring type: ListChangedEventArgs
  class ListChangedEventArgs;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataViewListener
  class DataViewListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataViewListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewListener*, "System.Data", "DataViewListener");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewListener
  // [TokenAttribute] Offset: FFFFFFFF
  class DataViewListener : public ::Il2CppObject {
    public:
    public:
    // private readonly System.WeakReference _dvWeak
    // Size: 0x8
    // Offset: 0x10
    ::System::WeakReference* dvWeak;
    // Field size check
    static_assert(sizeof(::System::WeakReference*) == 0x8);
    // private System.Data.DataTable _table
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::DataTable* table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private System.Data.Index _index
    // Size: 0x8
    // Offset: 0x20
    ::System::Data::Index* index;
    // Field size check
    static_assert(sizeof(::System::Data::Index*) == 0x8);
    // readonly System.Int32 _objectID
    // Size: 0x4
    // Offset: 0x28
    int objectID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.WeakReference _dvWeak
    [[deprecated("Use field access instead!")]] ::System::WeakReference*& dyn__dvWeak();
    // Get instance field reference: private System.Data.DataTable _table
    [[deprecated("Use field access instead!")]] ::System::Data::DataTable*& dyn__table();
    // Get instance field reference: private System.Data.Index _index
    [[deprecated("Use field access instead!")]] ::System::Data::Index*& dyn__index();
    // Get instance field reference: readonly System.Int32 _objectID
    [[deprecated("Use field access instead!")]] int& dyn__objectID();
    // System.Void .ctor(System.Data.DataView dv)
    // Offset: 0x12E3EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataViewListener* New_ctor(::System::Data::DataView* dv) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataViewListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataViewListener*, creationType>(dv)));
    }
    // private System.Void ChildRelationCollectionChanged(System.Object sender, System.ComponentModel.CollectionChangeEventArgs e)
    // Offset: 0x12E719C
    void ChildRelationCollectionChanged(::Il2CppObject* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);
    // private System.Void ParentRelationCollectionChanged(System.Object sender, System.ComponentModel.CollectionChangeEventArgs e)
    // Offset: 0x12E7284
    void ParentRelationCollectionChanged(::Il2CppObject* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);
    // private System.Void ColumnCollectionChanged(System.Object sender, System.ComponentModel.CollectionChangeEventArgs e)
    // Offset: 0x12E7344
    void ColumnCollectionChanged(::Il2CppObject* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);
    // System.Void MaintainDataView(System.ComponentModel.ListChangedType changedType, System.Data.DataRow row, System.Boolean trackAddRemove)
    // Offset: 0x12E7414
    void MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, bool trackAddRemove);
    // System.Void IndexListChanged(System.ComponentModel.ListChangedEventArgs e)
    // Offset: 0x12E74F0
    void IndexListChanged(::System::ComponentModel::ListChangedEventArgs* e);
    // System.Void RegisterMetaDataEvents(System.Data.DataTable table)
    // Offset: 0x12E3F44
    void RegisterMetaDataEvents(::System::Data::DataTable* table);
    // System.Void UnregisterMetaDataEvents()
    // Offset: 0x12E48AC
    void UnregisterMetaDataEvents();
    // private System.Void UnregisterMetaDataEvents(System.Boolean updateListeners)
    // Offset: 0x12E7798
    void UnregisterMetaDataEvents(bool updateListeners);
    // System.Void RegisterListChangedEvent(System.Data.Index index)
    // Offset: 0x12E69C8
    void RegisterListChangedEvent(::System::Data::Index* index);
    // System.Void UnregisterListChangedEvent()
    // Offset: 0x12E68C4
    void UnregisterListChangedEvent();
    // private System.Void CleanUp(System.Boolean updateListeners)
    // Offset: 0x12E725C
    void CleanUp(bool updateListeners);
    // private System.Void RegisterListener(System.Data.DataTable table)
    // Offset: 0x12E75B0
    void RegisterListener(::System::Data::DataTable* table);
  }; // System.Data.DataViewListener
  #pragma pack(pop)
  static check_size<sizeof(DataViewListener), 40 + sizeof(int)> __System_Data_DataViewListenerSizeCheck;
  static_assert(sizeof(DataViewListener) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataViewListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataViewListener::ChildRelationCollectionChanged
// Il2CppName: ChildRelationCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::Il2CppObject*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataViewListener::ChildRelationCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "ChildRelationCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::ParentRelationCollectionChanged
// Il2CppName: ParentRelationCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::Il2CppObject*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataViewListener::ParentRelationCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "ParentRelationCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::ColumnCollectionChanged
// Il2CppName: ColumnCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::Il2CppObject*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataViewListener::ColumnCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "ColumnCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::MaintainDataView
// Il2CppName: MaintainDataView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(&System::Data::DataViewListener::MaintainDataView)> {
  static const MethodInfo* get() {
    static auto* changedType = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedType")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* trackAddRemove = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "MaintainDataView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changedType, row, trackAddRemove});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::IndexListChanged
// Il2CppName: IndexListChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::System::ComponentModel::ListChangedEventArgs*)>(&System::Data::DataViewListener::IndexListChanged)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "IndexListChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::RegisterMetaDataEvents
// Il2CppName: RegisterMetaDataEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::System::Data::DataTable*)>(&System::Data::DataViewListener::RegisterMetaDataEvents)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "RegisterMetaDataEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::UnregisterMetaDataEvents
// Il2CppName: UnregisterMetaDataEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)()>(&System::Data::DataViewListener::UnregisterMetaDataEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "UnregisterMetaDataEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::UnregisterMetaDataEvents
// Il2CppName: UnregisterMetaDataEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(bool)>(&System::Data::DataViewListener::UnregisterMetaDataEvents)> {
  static const MethodInfo* get() {
    static auto* updateListeners = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "UnregisterMetaDataEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateListeners});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::RegisterListChangedEvent
// Il2CppName: RegisterListChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::System::Data::Index*)>(&System::Data::DataViewListener::RegisterListChangedEvent)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System.Data", "Index")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "RegisterListChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::UnregisterListChangedEvent
// Il2CppName: UnregisterListChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)()>(&System::Data::DataViewListener::UnregisterListChangedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "UnregisterListChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(bool)>(&System::Data::DataViewListener::CleanUp)> {
  static const MethodInfo* get() {
    static auto* updateListeners = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateListeners});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewListener::RegisterListener
// Il2CppName: RegisterListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewListener::*)(::System::Data::DataTable*)>(&System::Data::DataViewListener::RegisterListener)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewListener*), "RegisterListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
