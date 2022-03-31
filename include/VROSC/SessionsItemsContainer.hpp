// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.SessionsLibraryUI/VROSC.OrderingType
#include "VROSC/SessionsLibraryUI_OrderingType.hpp"
// Including type: VROSC.SessionsLibraryUI/VROSC.OrderingDirection
#include "VROSC/SessionsLibraryUI_OrderingDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PaginatedList
  class PaginatedList;
  // Forward declaring type: PaginatedListDataHolder
  class PaginatedListDataHolder;
  // Forward declaring type: SessionItemData
  class SessionItemData;
  // Forward declaring type: SessionUIData
  class SessionUIData;
  // Forward declaring type: PaginatedListItemData
  class PaginatedListItemData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionsItemsContainer
  class SessionsItemsContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsItemsContainer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsItemsContainer*, "VROSC", "SessionsItemsContainer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsItemsContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionsItemsContainer : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.PaginatedList _paginatedList
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::PaginatedList* paginatedList;
    // Field size check
    static_assert(sizeof(::VROSC::PaginatedList*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.PaginatedListDataHolder> _dataList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* dataList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*) == 0x8);
    // private VROSC.PaginatedListDataHolder _selectedDataHolder
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::PaginatedListDataHolder* selectedDataHolder;
    // Field size check
    static_assert(sizeof(::VROSC::PaginatedListDataHolder*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> _currentFilterWords
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* currentFilterWords;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private VROSC.SessionsLibraryUI/VROSC.OrderingType _orderingType
    // Size: 0x4
    // Offset: 0x38
    ::VROSC::SessionsLibraryUI::OrderingType orderingType;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsLibraryUI::OrderingType) == 0x4);
    // private VROSC.SessionsLibraryUI/VROSC.OrderingDirection _orderingDirection
    // Size: 0x4
    // Offset: 0x3C
    ::VROSC::SessionsLibraryUI::OrderingDirection orderingDirection;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsLibraryUI::OrderingDirection) == 0x4);
    // private System.Collections.Generic.List`1<VROSC.SessionItemData> <SessionItems>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* SessionItems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*) == 0x8);
    // public System.Action`1<VROSC.SessionItemData> OnDataSelected
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::VROSC::SessionItemData*>* OnDataSelected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::SessionItemData*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.PaginatedList _paginatedList
    ::VROSC::PaginatedList*& dyn__paginatedList();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.PaginatedListDataHolder> _dataList
    ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& dyn__dataList();
    // Get instance field reference: private VROSC.PaginatedListDataHolder _selectedDataHolder
    ::VROSC::PaginatedListDataHolder*& dyn__selectedDataHolder();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _currentFilterWords
    ::System::Collections::Generic::List_1<::StringW>*& dyn__currentFilterWords();
    // Get instance field reference: private VROSC.SessionsLibraryUI/VROSC.OrderingType _orderingType
    ::VROSC::SessionsLibraryUI::OrderingType& dyn__orderingType();
    // Get instance field reference: private VROSC.SessionsLibraryUI/VROSC.OrderingDirection _orderingDirection
    ::VROSC::SessionsLibraryUI::OrderingDirection& dyn__orderingDirection();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.SessionItemData> <SessionItems>k__BackingField
    ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*& dyn_$SessionItems$k__BackingField();
    // Get instance field reference: public System.Action`1<VROSC.SessionItemData> OnDataSelected
    ::System::Action_1<::VROSC::SessionItemData*>*& dyn_OnDataSelected();
    // private VROSC.SessionItemData get__selectedData()
    // Offset: 0x13EA814
    ::VROSC::SessionItemData* get__selectedData();
    // public System.Collections.Generic.List`1<VROSC.SessionItemData> get_SessionItems()
    // Offset: 0x13EA89C
    ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* get_SessionItems();
    // private System.Void set_SessionItems(System.Collections.Generic.List`1<VROSC.SessionItemData> value)
    // Offset: 0x13EA8A4
    void set_SessionItems(::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* value);
    // public System.Boolean get_HasSessions()
    // Offset: 0x13EA8AC
    bool get_HasSessions();
    // private System.Void Awake()
    // Offset: 0x13EA900
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13EA9D4
    void OnDestroy();
    // protected System.Void OnDisable()
    // Offset: 0x13EAAA8
    void OnDisable();
    // public System.Void Setup()
    // Offset: 0x13EAAB0
    void Setup();
    // public System.Void AddSession(System.String id, VROSC.SessionUIData data, System.Boolean newSave)
    // Offset: 0x13EAACC
    void AddSession(::StringW id, ::VROSC::SessionUIData* data, bool newSave);
    // public System.Void RemoveSession(System.String sessionId)
    // Offset: 0x13EAEA4
    void RemoveSession(::StringW sessionId);
    // public System.Boolean HasSession(System.String sessionId)
    // Offset: 0x13EB254
    bool HasSession(::StringW sessionId);
    // public System.Void UpdateList()
    // Offset: 0x13EAC58
    void UpdateList();
    // public System.Void FilterList(System.String filter)
    // Offset: 0x13EC018
    void FilterList(::StringW filter);
    // public System.Void OrderListBy(VROSC.SessionsLibraryUI/VROSC.OrderingType orderingType, VROSC.SessionsLibraryUI/VROSC.OrderingDirection orderingDirection)
    // Offset: 0x13EC19C
    void OrderListBy(::VROSC::SessionsLibraryUI::OrderingType orderingType, ::VROSC::SessionsLibraryUI::OrderingDirection orderingDirection);
    // public System.Void SelectItem(VROSC.PaginatedListItemData itemData)
    // Offset: 0x13EC1A4
    void SelectItem(::VROSC::PaginatedListItemData* itemData);
    // private System.Void ItemSelected(VROSC.PaginatedListDataHolder dataHolder)
    // Offset: 0x13EB1D4
    void ItemSelected(::VROSC::PaginatedListDataHolder* dataHolder);
    // private System.Boolean IsSessionFiltered(VROSC.SessionUIData sessionUIData)
    // Offset: 0x13EB3B4
    bool IsSessionFiltered(::VROSC::SessionUIData* sessionUIData);
    // private System.Void OrderDataList()
    // Offset: 0x13EBEDC
    void OrderDataList();
    // private System.Int32 <OrderDataList>b__28_0(VROSC.PaginatedListDataHolder p1, VROSC.PaginatedListDataHolder p2)
    // Offset: 0x13EC2B8
    int $OrderDataList$b__28_0(::VROSC::PaginatedListDataHolder* p1, ::VROSC::PaginatedListDataHolder* p2);
    // private System.Int32 <OrderDataList>b__28_1(VROSC.PaginatedListDataHolder p1, VROSC.PaginatedListDataHolder p2)
    // Offset: 0x13EC3D4
    int $OrderDataList$b__28_1(::VROSC::PaginatedListDataHolder* p1, ::VROSC::PaginatedListDataHolder* p2);
    // private System.Int32 <OrderDataList>b__28_2(VROSC.PaginatedListDataHolder p1, VROSC.PaginatedListDataHolder p2)
    // Offset: 0x13EC4DC
    int $OrderDataList$b__28_2(::VROSC::PaginatedListDataHolder* p1, ::VROSC::PaginatedListDataHolder* p2);
    // public System.Void .ctor()
    // Offset: 0x13EC1C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsItemsContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsItemsContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsItemsContainer*, creationType>()));
    }
  }; // VROSC.SessionsItemsContainer
  #pragma pack(pop)
  static check_size<sizeof(SessionsItemsContainer), 72 + sizeof(::System::Action_1<::VROSC::SessionItemData*>*)> __VROSC_SessionsItemsContainerSizeCheck;
  static_assert(sizeof(SessionsItemsContainer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::get__selectedData
// Il2CppName: get__selectedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SessionItemData* (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::get__selectedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "get__selectedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::get_SessionItems
// Il2CppName: get_SessionItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::get_SessionItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "get_SessionItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::set_SessionItems
// Il2CppName: set_SessionItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*)>(&VROSC::SessionsItemsContainer::set_SessionItems)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "SessionItemData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "set_SessionItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::get_HasSessions
// Il2CppName: get_HasSessions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::get_HasSessions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "get_HasSessions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::AddSession
// Il2CppName: AddSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::StringW, ::VROSC::SessionUIData*, bool)>(&VROSC::SessionsItemsContainer::AddSession)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")->byval_arg;
    static auto* newSave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "AddSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, data, newSave});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::RemoveSession
// Il2CppName: RemoveSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::StringW)>(&VROSC::SessionsItemsContainer::RemoveSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "RemoveSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::HasSession
// Il2CppName: HasSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionsItemsContainer::*)(::StringW)>(&VROSC::SessionsItemsContainer::HasSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "HasSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::UpdateList
// Il2CppName: UpdateList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::UpdateList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "UpdateList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::FilterList
// Il2CppName: FilterList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::StringW)>(&VROSC::SessionsItemsContainer::FilterList)> {
  static const MethodInfo* get() {
    static auto* filter = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "FilterList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filter});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::OrderListBy
// Il2CppName: OrderListBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::VROSC::SessionsLibraryUI::OrderingType, ::VROSC::SessionsLibraryUI::OrderingDirection)>(&VROSC::SessionsItemsContainer::OrderListBy)> {
  static const MethodInfo* get() {
    static auto* orderingType = &::il2cpp_utils::GetClassFromName("VROSC", "SessionsLibraryUI/OrderingType")->byval_arg;
    static auto* orderingDirection = &::il2cpp_utils::GetClassFromName("VROSC", "SessionsLibraryUI/OrderingDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "OrderListBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{orderingType, orderingDirection});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::SelectItem
// Il2CppName: SelectItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::VROSC::PaginatedListItemData*)>(&VROSC::SessionsItemsContainer::SelectItem)> {
  static const MethodInfo* get() {
    static auto* itemData = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListItemData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "SelectItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemData});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::ItemSelected
// Il2CppName: ItemSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)(::VROSC::PaginatedListDataHolder*)>(&VROSC::SessionsItemsContainer::ItemSelected)> {
  static const MethodInfo* get() {
    static auto* dataHolder = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "ItemSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataHolder});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::IsSessionFiltered
// Il2CppName: IsSessionFiltered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionsItemsContainer::*)(::VROSC::SessionUIData*)>(&VROSC::SessionsItemsContainer::IsSessionFiltered)> {
  static const MethodInfo* get() {
    static auto* sessionUIData = &::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "IsSessionFiltered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionUIData});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::OrderDataList
// Il2CppName: OrderDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsItemsContainer::*)()>(&VROSC::SessionsItemsContainer::OrderDataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "OrderDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::$OrderDataList$b__28_0
// Il2CppName: <OrderDataList>b__28_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SessionsItemsContainer::*)(::VROSC::PaginatedListDataHolder*, ::VROSC::PaginatedListDataHolder*)>(&VROSC::SessionsItemsContainer::$OrderDataList$b__28_0)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "<OrderDataList>b__28_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::$OrderDataList$b__28_1
// Il2CppName: <OrderDataList>b__28_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SessionsItemsContainer::*)(::VROSC::PaginatedListDataHolder*, ::VROSC::PaginatedListDataHolder*)>(&VROSC::SessionsItemsContainer::$OrderDataList$b__28_1)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "<OrderDataList>b__28_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::$OrderDataList$b__28_2
// Il2CppName: <OrderDataList>b__28_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SessionsItemsContainer::*)(::VROSC::PaginatedListDataHolder*, ::VROSC::PaginatedListDataHolder*)>(&VROSC::SessionsItemsContainer::$OrderDataList$b__28_2)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("VROSC", "PaginatedListDataHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsItemsContainer*), "<OrderDataList>b__28_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsItemsContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
