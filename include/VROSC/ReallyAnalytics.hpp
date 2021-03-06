// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ReallyAnalytics
  class ReallyAnalytics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ReallyAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ReallyAnalytics*, "VROSC", "ReallyAnalytics");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ReallyAnalytics
  // [TokenAttribute] Offset: FFFFFFFF
  class ReallyAnalytics : public ::Il2CppObject {
    public:
    // static field const value: static private System.String MAIN_MENU_SELECTION
    static constexpr const char* MAIN_MENU_SELECTION = "main_menu_selection";
    // Get static field: static private System.String MAIN_MENU_SELECTION
    static ::StringW _get_MAIN_MENU_SELECTION();
    // Set static field: static private System.String MAIN_MENU_SELECTION
    static void _set_MAIN_MENU_SELECTION(::StringW value);
    // static field const value: static private System.String INSTRUMENT_OPEN
    static constexpr const char* INSTRUMENT_OPEN = "instrument_open";
    // Get static field: static private System.String INSTRUMENT_OPEN
    static ::StringW _get_INSTRUMENT_OPEN();
    // Set static field: static private System.String INSTRUMENT_OPEN
    static void _set_INSTRUMENT_OPEN(::StringW value);
    // static field const value: static private System.String INSTRUMENT_CLOSE
    static constexpr const char* INSTRUMENT_CLOSE = "instrument_close";
    // Get static field: static private System.String INSTRUMENT_CLOSE
    static ::StringW _get_INSTRUMENT_CLOSE();
    // Set static field: static private System.String INSTRUMENT_CLOSE
    static void _set_INSTRUMENT_CLOSE(::StringW value);
    // static field const value: static private System.String INSTRUMENT_CHANGE_PATCH
    static constexpr const char* INSTRUMENT_CHANGE_PATCH = "instrument_change_patch";
    // Get static field: static private System.String INSTRUMENT_CHANGE_PATCH
    static ::StringW _get_INSTRUMENT_CHANGE_PATCH();
    // Set static field: static private System.String INSTRUMENT_CHANGE_PATCH
    static void _set_INSTRUMENT_CHANGE_PATCH(::StringW value);
    // static field const value: static private System.String INSTRUMENT_CHANGE_SAMPLE
    static constexpr const char* INSTRUMENT_CHANGE_SAMPLE = "instrument_change_sample";
    // Get static field: static private System.String INSTRUMENT_CHANGE_SAMPLE
    static ::StringW _get_INSTRUMENT_CHANGE_SAMPLE();
    // Set static field: static private System.String INSTRUMENT_CHANGE_SAMPLE
    static void _set_INSTRUMENT_CHANGE_SAMPLE(::StringW value);
    // static field const value: static private System.String TOOL_OPEN
    static constexpr const char* TOOL_OPEN = "tool_open";
    // Get static field: static private System.String TOOL_OPEN
    static ::StringW _get_TOOL_OPEN();
    // Set static field: static private System.String TOOL_OPEN
    static void _set_TOOL_OPEN(::StringW value);
    // static field const value: static private System.String TOOL_CLOSE
    static constexpr const char* TOOL_CLOSE = "tool_close";
    // Get static field: static private System.String TOOL_CLOSE
    static ::StringW _get_TOOL_CLOSE();
    // Set static field: static private System.String TOOL_CLOSE
    static void _set_TOOL_CLOSE(::StringW value);
    // static field const value: static private System.String ENVIRONMENT_ENTER
    static constexpr const char* ENVIRONMENT_ENTER = "environment_enter";
    // Get static field: static private System.String ENVIRONMENT_ENTER
    static ::StringW _get_ENVIRONMENT_ENTER();
    // Set static field: static private System.String ENVIRONMENT_ENTER
    static void _set_ENVIRONMENT_ENTER(::StringW value);
    // static field const value: static private System.String ENVIRONMENT_EXIT
    static constexpr const char* ENVIRONMENT_EXIT = "environment_exit";
    // Get static field: static private System.String ENVIRONMENT_EXIT
    static ::StringW _get_ENVIRONMENT_EXIT();
    // Set static field: static private System.String ENVIRONMENT_EXIT
    static void _set_ENVIRONMENT_EXIT(::StringW value);
    // static field const value: static private System.String SONG_SAVE
    static constexpr const char* SONG_SAVE = "song_save";
    // Get static field: static private System.String SONG_SAVE
    static ::StringW _get_SONG_SAVE();
    // Set static field: static private System.String SONG_SAVE
    static void _set_SONG_SAVE(::StringW value);
    // static field const value: static private System.String SONG_LOAD
    static constexpr const char* SONG_LOAD = "song_load";
    // Get static field: static private System.String SONG_LOAD
    static ::StringW _get_SONG_LOAD();
    // Set static field: static private System.String SONG_LOAD
    static void _set_SONG_LOAD(::StringW value);
    // static field const value: static private System.String SONG_DELETE
    static constexpr const char* SONG_DELETE = "song_delete";
    // Get static field: static private System.String SONG_DELETE
    static ::StringW _get_SONG_DELETE();
    // Set static field: static private System.String SONG_DELETE
    static void _set_SONG_DELETE(::StringW value);
    // static field const value: static private System.String SONG_UPVOTE
    static constexpr const char* SONG_UPVOTE = "song_upvote";
    // Get static field: static private System.String SONG_UPVOTE
    static ::StringW _get_SONG_UPVOTE();
    // Set static field: static private System.String SONG_UPVOTE
    static void _set_SONG_UPVOTE(::StringW value);
    // static field const value: static private System.String SONG_FAVORITE
    static constexpr const char* SONG_FAVORITE = "song_favorite";
    // Get static field: static private System.String SONG_FAVORITE
    static ::StringW _get_SONG_FAVORITE();
    // Set static field: static private System.String SONG_FAVORITE
    static void _set_SONG_FAVORITE(::StringW value);
    // static field const value: static private System.String SONG_PREVIEW_PLAY
    static constexpr const char* SONG_PREVIEW_PLAY = "song_preview_play";
    // Get static field: static private System.String SONG_PREVIEW_PLAY
    static ::StringW _get_SONG_PREVIEW_PLAY();
    // Set static field: static private System.String SONG_PREVIEW_PLAY
    static void _set_SONG_PREVIEW_PLAY(::StringW value);
    // static field const value: static private System.String SONG_DOWNLOAD
    static constexpr const char* SONG_DOWNLOAD = "song_download";
    // Get static field: static private System.String SONG_DOWNLOAD
    static ::StringW _get_SONG_DOWNLOAD();
    // Set static field: static private System.String SONG_DOWNLOAD
    static void _set_SONG_DOWNLOAD(::StringW value);
    // static field const value: static private System.String LOOP_CREATE
    static constexpr const char* LOOP_CREATE = "loop_create";
    // Get static field: static private System.String LOOP_CREATE
    static ::StringW _get_LOOP_CREATE();
    // Set static field: static private System.String LOOP_CREATE
    static void _set_LOOP_CREATE(::StringW value);
    // static field const value: static private System.String TUTORIAL_VIDEO_PLAY
    static constexpr const char* TUTORIAL_VIDEO_PLAY = "tutorial_video_play";
    // Get static field: static private System.String TUTORIAL_VIDEO_PLAY
    static ::StringW _get_TUTORIAL_VIDEO_PLAY();
    // Set static field: static private System.String TUTORIAL_VIDEO_PLAY
    static void _set_TUTORIAL_VIDEO_PLAY(::StringW value);
    // static field const value: static private System.String INSTRUMENT_ID
    static constexpr const char* INSTRUMENT_ID = "instrument_id";
    // Get static field: static private System.String INSTRUMENT_ID
    static ::StringW _get_INSTRUMENT_ID();
    // Set static field: static private System.String INSTRUMENT_ID
    static void _set_INSTRUMENT_ID(::StringW value);
    // static field const value: static private System.String TOOL_ID
    static constexpr const char* TOOL_ID = "tool_id";
    // Get static field: static private System.String TOOL_ID
    static ::StringW _get_TOOL_ID();
    // Set static field: static private System.String TOOL_ID
    static void _set_TOOL_ID(::StringW value);
    // static field const value: static private System.String PATCH_ID
    static constexpr const char* PATCH_ID = "patch_id";
    // Get static field: static private System.String PATCH_ID
    static ::StringW _get_PATCH_ID();
    // Set static field: static private System.String PATCH_ID
    static void _set_PATCH_ID(::StringW value);
    // static field const value: static private System.String SAMPLE_ID
    static constexpr const char* SAMPLE_ID = "sample_id";
    // Get static field: static private System.String SAMPLE_ID
    static ::StringW _get_SAMPLE_ID();
    // Set static field: static private System.String SAMPLE_ID
    static void _set_SAMPLE_ID(::StringW value);
    // static field const value: static private System.String ENVIRONMENT_ID
    static constexpr const char* ENVIRONMENT_ID = "environment_id";
    // Get static field: static private System.String ENVIRONMENT_ID
    static ::StringW _get_ENVIRONMENT_ID();
    // Set static field: static private System.String ENVIRONMENT_ID
    static void _set_ENVIRONMENT_ID(::StringW value);
    // static field const value: static private System.String SONG_ID
    static constexpr const char* SONG_ID = "song_id";
    // Get static field: static private System.String SONG_ID
    static ::StringW _get_SONG_ID();
    // Set static field: static private System.String SONG_ID
    static void _set_SONG_ID(::StringW value);
    // static field const value: static private System.String TUTORIAL_VIDEO_ID
    static constexpr const char* TUTORIAL_VIDEO_ID = "tutorial_video_id";
    // Get static field: static private System.String TUTORIAL_VIDEO_ID
    static ::StringW _get_TUTORIAL_VIDEO_ID();
    // Set static field: static private System.String TUTORIAL_VIDEO_ID
    static void _set_TUTORIAL_VIDEO_ID(::StringW value);
    // static field const value: static private System.String TIME_OPEN
    static constexpr const char* TIME_OPEN = "time_open";
    // Get static field: static private System.String TIME_OPEN
    static ::StringW _get_TIME_OPEN();
    // Set static field: static private System.String TIME_OPEN
    static void _set_TIME_OPEN(::StringW value);
    // static field const value: static private System.String TIME_TO_COMPLETE
    static constexpr const char* TIME_TO_COMPLETE = "time_to_complete";
    // Get static field: static private System.String TIME_TO_COMPLETE
    static ::StringW _get_TIME_TO_COMPLETE();
    // Set static field: static private System.String TIME_TO_COMPLETE
    static void _set_TIME_TO_COMPLETE(::StringW value);
    // static field const value: static private System.String MAIN_MENU_OPTION
    static constexpr const char* MAIN_MENU_OPTION = "main_menu_option";
    // Get static field: static private System.String MAIN_MENU_OPTION
    static ::StringW _get_MAIN_MENU_OPTION();
    // Set static field: static private System.String MAIN_MENU_OPTION
    static void _set_MAIN_MENU_OPTION(::StringW value);
    // static field const value: static private System.String SONG_TYPE
    static constexpr const char* SONG_TYPE = "song_type";
    // Get static field: static private System.String SONG_TYPE
    static ::StringW _get_SONG_TYPE();
    // Set static field: static private System.String SONG_TYPE
    static void _set_SONG_TYPE(::StringW value);
    // static field const value: static private System.String IS_FAVORITE
    static constexpr const char* IS_FAVORITE = "is_favorite";
    // Get static field: static private System.String IS_FAVORITE
    static ::StringW _get_IS_FAVORITE();
    // Set static field: static private System.String IS_FAVORITE
    static void _set_IS_FAVORITE(::StringW value);
    // static field const value: static private System.String FAVORITE_ADD
    static constexpr const char* FAVORITE_ADD = "add_favorite";
    // Get static field: static private System.String FAVORITE_ADD
    static ::StringW _get_FAVORITE_ADD();
    // Set static field: static private System.String FAVORITE_ADD
    static void _set_FAVORITE_ADD(::StringW value);
    // static field const value: static private System.String UPVOTE_ADD
    static constexpr const char* UPVOTE_ADD = "add_upvote";
    // Get static field: static private System.String UPVOTE_ADD
    static ::StringW _get_UPVOTE_ADD();
    // Set static field: static private System.String UPVOTE_ADD
    static void _set_UPVOTE_ADD(::StringW value);
    // static field const value: static private System.String LOOP_LENGTH
    static constexpr const char* LOOP_LENGTH = "loop_length";
    // Get static field: static private System.String LOOP_LENGTH
    static ::StringW _get_LOOP_LENGTH();
    // Set static field: static private System.String LOOP_LENGTH
    static void _set_LOOP_LENGTH(::StringW value);
    // static field const value: static private System.String TUTORIAL_SKIPPED_STEP
    static constexpr const char* TUTORIAL_SKIPPED_STEP = "skipped_step";
    // Get static field: static private System.String TUTORIAL_SKIPPED_STEP
    static ::StringW _get_TUTORIAL_SKIPPED_STEP();
    // Set static field: static private System.String TUTORIAL_SKIPPED_STEP
    static void _set_TUTORIAL_SKIPPED_STEP(::StringW value);
    // static field const value: static private System.String AB_GROUP
    static constexpr const char* AB_GROUP = "ab_group";
    // Get static field: static private System.String AB_GROUP
    static ::StringW _get_AB_GROUP();
    // Set static field: static private System.String AB_GROUP
    static void _set_AB_GROUP(::StringW value);
    // static field const value: static private System.String AB_TEST_ID
    static constexpr const char* AB_TEST_ID = "ab_test_id";
    // Get static field: static private System.String AB_TEST_ID
    static ::StringW _get_AB_TEST_ID();
    // Set static field: static private System.String AB_TEST_ID
    static void _set_AB_TEST_ID(::StringW value);
    // static field const value: static private System.String LOCAL_SONG
    static constexpr const char* LOCAL_SONG = "Local";
    // Get static field: static private System.String LOCAL_SONG
    static ::StringW _get_LOCAL_SONG();
    // Set static field: static private System.String LOCAL_SONG
    static void _set_LOCAL_SONG(::StringW value);
    // static field const value: static private System.String CLOUD_SONG
    static constexpr const char* CLOUD_SONG = "Cloud";
    // Get static field: static private System.String CLOUD_SONG
    static ::StringW _get_CLOUD_SONG();
    // Set static field: static private System.String CLOUD_SONG
    static void _set_CLOUD_SONG(::StringW value);
    // static field const value: static private System.String COMMUNITY_SONG
    static constexpr const char* COMMUNITY_SONG = "Community";
    // Get static field: static private System.String COMMUNITY_SONG
    static ::StringW _get_COMMUNITY_SONG();
    // Set static field: static private System.String COMMUNITY_SONG
    static void _set_COMMUNITY_SONG(::StringW value);
    // Get static field: static private System.Single _tutorialStartTime
    static float _get__tutorialStartTime();
    // Set static field: static private System.Single _tutorialStartTime
    static void _set__tutorialStartTime(float value);
    // Get static field: static private System.Single _lastTutorialStepTime
    static float _get__lastTutorialStepTime();
    // Set static field: static private System.Single _lastTutorialStepTime
    static void _set__lastTutorialStepTime(float value);
    // Get static field: static private System.Single _lastEnvironmentEnterTime
    static float _get__lastEnvironmentEnterTime();
    // Set static field: static private System.Single _lastEnvironmentEnterTime
    static void _set__lastEnvironmentEnterTime(float value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Single> _instrumentsOpenTimes
    static ::System::Collections::Generic::Dictionary_2<::StringW, float>* _get__instrumentsOpenTimes();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Single> _instrumentsOpenTimes
    static void _set__instrumentsOpenTimes(::System::Collections::Generic::Dictionary_2<::StringW, float>* value);
    // static private System.Void .cctor()
    // Offset: 0xB30D74
    static void _cctor();
    // static public System.Void MainMenuSelection(System.String optionId)
    // Offset: 0xB2E1D4
    static void MainMenuSelection(::StringW optionId);
    // static public System.Void EnterScreen(System.String screenId)
    // Offset: 0xB2E35C
    static void EnterScreen(::StringW screenId);
    // static public System.Void InstrumentOpen(System.String instrumentId)
    // Offset: 0xB2E4A8
    static void InstrumentOpen(::StringW instrumentId);
    // static public System.Void InstrumentClose(System.String instrumentId)
    // Offset: 0xB2E73C
    static void InstrumentClose(::StringW instrumentId);
    // static public System.Void InstrumentChangePatch(System.String instrumentId, System.String patchId)
    // Offset: 0xB2E9E0
    static void InstrumentChangePatch(::StringW instrumentId, ::StringW patchId);
    // static public System.Void ToolOpen(System.String toolId)
    // Offset: 0xB2EB94
    static void ToolOpen(::StringW toolId);
    // static public System.Void ToolClose(System.String toolId)
    // Offset: 0xB2EE28
    static void ToolClose(::StringW toolId);
    // static public System.Void EnvironmentEnter(System.String environmentId)
    // Offset: 0xB2F0CC
    static void EnvironmentEnter(::StringW environmentId);
    // static public System.Void EnvironmentExit(System.String environmentId)
    // Offset: 0xB2F2A0
    static void EnvironmentExit(::StringW environmentId);
    // static public System.Void SongSave(System.String songId, System.Boolean isCloud, System.Boolean isCommunity)
    // Offset: 0xB2F4D0
    static void SongSave(::StringW songId, bool isCloud, bool isCommunity);
    // static public System.Void SongLoad(System.String songId, System.Boolean isCloud, System.Boolean isCommunity, System.Boolean isFavorite)
    // Offset: 0xB2F6D8
    static void SongLoad(::StringW songId, bool isCloud, bool isCommunity, bool isFavorite);
    // static public System.Void SongDelete(System.String songId, System.Boolean isCloud, System.Boolean isCommunity)
    // Offset: 0xB2F940
    static void SongDelete(::StringW songId, bool isCloud, bool isCommunity);
    // static public System.Void SongUpVote(System.String songId, System.Boolean add)
    // Offset: 0xB2FB48
    static void SongUpVote(::StringW songId, bool add);
    // static public System.Void SongFavorite(System.String songId, System.Boolean add)
    // Offset: 0xB2FD30
    static void SongFavorite(::StringW songId, bool add);
    // static public System.Void SongPreviewPlay(System.String songId)
    // Offset: 0xB2FF18
    static void SongPreviewPlay(::StringW songId);
    // static public System.Void SongDownload(System.String songId)
    // Offset: 0xB300A0
    static void SongDownload(::StringW songId);
    // static public System.Void LoopCreate(System.String instrumentId, System.String patchId, System.Int32 loopLength)
    // Offset: 0xB30228
    static void LoopCreate(::StringW instrumentId, ::StringW patchId, int loopLength);
    // static public System.Void TutorialStart(System.String tutorialId)
    // Offset: 0xB30438
    static void TutorialStart(::StringW tutorialId);
    // static public System.Void TutorialStepComplete(System.String tutorialId, System.Int32 stepIndex)
    // Offset: 0xB305E8
    static void TutorialStepComplete(::StringW tutorialId, int stepIndex);
    // static public System.Void TutorialSkip(System.String tutorialId, System.Int32 skippedStepIndex)
    // Offset: 0xB307F8
    static void TutorialSkip(::StringW tutorialId, int skippedStepIndex);
    // static public System.Void TutorialComplete(System.String tutorialId)
    // Offset: 0xB30A34
    static void TutorialComplete(::StringW tutorialId);
    // static public System.Void TutorialVideoPlay(System.String tutorialVideoId)
    // Offset: 0xB30C20
    static void TutorialVideoPlay(::StringW tutorialVideoId);
  }; // VROSC.ReallyAnalytics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::ReallyAnalytics::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::MainMenuSelection
// Il2CppName: MainMenuSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::MainMenuSelection)> {
  static const MethodInfo* get() {
    static auto* optionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "MainMenuSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{optionId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::EnterScreen
// Il2CppName: EnterScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::EnterScreen)> {
  static const MethodInfo* get() {
    static auto* screenId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "EnterScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::InstrumentOpen
// Il2CppName: InstrumentOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::InstrumentOpen)> {
  static const MethodInfo* get() {
    static auto* instrumentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "InstrumentOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::InstrumentClose
// Il2CppName: InstrumentClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::InstrumentClose)> {
  static const MethodInfo* get() {
    static auto* instrumentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "InstrumentClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::InstrumentChangePatch
// Il2CppName: InstrumentChangePatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&VROSC::ReallyAnalytics::InstrumentChangePatch)> {
  static const MethodInfo* get() {
    static auto* instrumentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* patchId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "InstrumentChangePatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentId, patchId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::ToolOpen
// Il2CppName: ToolOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::ToolOpen)> {
  static const MethodInfo* get() {
    static auto* toolId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "ToolOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::ToolClose
// Il2CppName: ToolClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::ToolClose)> {
  static const MethodInfo* get() {
    static auto* toolId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "ToolClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::EnvironmentEnter
// Il2CppName: EnvironmentEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::EnvironmentEnter)> {
  static const MethodInfo* get() {
    static auto* environmentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "EnvironmentEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::EnvironmentExit
// Il2CppName: EnvironmentExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::EnvironmentExit)> {
  static const MethodInfo* get() {
    static auto* environmentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "EnvironmentExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongSave
// Il2CppName: SongSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, bool)>(&VROSC::ReallyAnalytics::SongSave)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId, isCloud, isCommunity});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongLoad
// Il2CppName: SongLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, bool, bool)>(&VROSC::ReallyAnalytics::SongLoad)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isFavorite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId, isCloud, isCommunity, isFavorite});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongDelete
// Il2CppName: SongDelete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, bool)>(&VROSC::ReallyAnalytics::SongDelete)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isCloud = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isCommunity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongDelete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId, isCloud, isCommunity});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongUpVote
// Il2CppName: SongUpVote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&VROSC::ReallyAnalytics::SongUpVote)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* add = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongUpVote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId, add});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongFavorite
// Il2CppName: SongFavorite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&VROSC::ReallyAnalytics::SongFavorite)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* add = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongFavorite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId, add});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongPreviewPlay
// Il2CppName: SongPreviewPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::SongPreviewPlay)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongPreviewPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::SongDownload
// Il2CppName: SongDownload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::SongDownload)> {
  static const MethodInfo* get() {
    static auto* songId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "SongDownload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::LoopCreate
// Il2CppName: LoopCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, int)>(&VROSC::ReallyAnalytics::LoopCreate)> {
  static const MethodInfo* get() {
    static auto* instrumentId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* patchId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loopLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "LoopCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrumentId, patchId, loopLength});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::TutorialStart
// Il2CppName: TutorialStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::TutorialStart)> {
  static const MethodInfo* get() {
    static auto* tutorialId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "TutorialStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::TutorialStepComplete
// Il2CppName: TutorialStepComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int)>(&VROSC::ReallyAnalytics::TutorialStepComplete)> {
  static const MethodInfo* get() {
    static auto* tutorialId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stepIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "TutorialStepComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialId, stepIndex});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::TutorialSkip
// Il2CppName: TutorialSkip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int)>(&VROSC::ReallyAnalytics::TutorialSkip)> {
  static const MethodInfo* get() {
    static auto* tutorialId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* skippedStepIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "TutorialSkip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialId, skippedStepIndex});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::TutorialComplete
// Il2CppName: TutorialComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::TutorialComplete)> {
  static const MethodInfo* get() {
    static auto* tutorialId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "TutorialComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialId});
  }
};
// Writing MetadataGetter for method: VROSC::ReallyAnalytics::TutorialVideoPlay
// Il2CppName: TutorialVideoPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&VROSC::ReallyAnalytics::TutorialVideoPlay)> {
  static const MethodInfo* get() {
    static auto* tutorialVideoId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReallyAnalytics*), "TutorialVideoPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialVideoId});
  }
};
