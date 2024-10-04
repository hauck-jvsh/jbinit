#include <stdint.h>
#include <stdio.h>
#include <substrate.h>
#include <CoreFoundation/CoreFoundation.h>
#include <dirent.h>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <objc/runtime.h>
#include <os/log.h>

volatile FILE *f = NULL;

#define BASEADDR 0x100000000


void FUN_1000021ec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000021ec called\n");
    }
}

void FUN_10000231c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000231c called\n");
    }
}

void FUN_100002454_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100002454 called\n");
    }
}

void LoadSystemBag_instrument()
{
    if (f != NULL){
        fprintf(f, "LoadSystemBag called\n");
    }
}

void LoadKeyBag_instrument()
{
    if (f != NULL){
        fprintf(f, "LoadKeyBag called\n");
    }
}

void LoadUserBag_instrument()
{
    if (f != NULL){
        fprintf(f, "LoadUserBag called\n");
    }
}

void FUN_1000029b8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000029b8 called\n");
    }
}

void FUN_100002aa0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100002aa0 called\n");
    }
}

void FUN_1000032e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000032e0 called\n");
    }
}

void savingofKeybagFORUSER_instrument()
{
    if (f != NULL){
        fprintf(f, "savingofKeybagFORUSER called\n");
    }
}

void ChangeSystemSecret_instrument()
{
    if (f != NULL){
        fprintf(f, "ChangeSystemSecret called\n");
    }
}

void FUN_100003bc0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100003bc0 called\n");
    }
}

void FUN_100003c84_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100003c84 called\n");
    }
}

void ChangeUserKeybag_instrument()
{
    if (f != NULL){
        fprintf(f, "ChangeUserKeybag called\n");
    }
}

void FUN_100003e80_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100003e80 called\n");
    }
}

void FUN_10000400c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000400c called\n");
    }
}

void FUN_10000427c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000427c called\n");
    }
}

void DecryptKBWithCrypto_instrument()
{
    if (f != NULL){
        fprintf(f, "DecryptKBWithCrypto called\n");
    }
}

void GetParseKB_MK_instrument()
{
    if (f != NULL){
        fprintf(f, "GetParseKB_MK called\n");
    }
}

void FUN_100004a60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100004a60 called\n");
    }
}

void FUN_100004b2c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100004b2c called\n");
    }
}

void FUN_100004b38_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100004b38 called\n");
    }
}

void listener_shouldAcceptNewConnection__instrument()
{
    if (f != NULL){
        fprintf(f, "listener_shouldAcceptNewConnection_ called\n");
    }
}

void sharedService_instrument()
{
    if (f != NULL){
        fprintf(f, "sharedService called\n");
    }
}

void FUN_100004c48_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100004c48 called\n");
    }
}

void remoteProcessHasBooleanEntitlement__instrument()
{
    if (f != NULL){
        fprintf(f, "remoteProcessHasBooleanEntitlement_ called\n");
    }
}

void remoteServiceName_instrument()
{
    if (f != NULL){
        fprintf(f, "remoteServiceName called\n");
    }
}

void retrievePasscodeFromFileHandle_ofLength_withbaseaddress__instrument()
{
    if (f != NULL){
        fprintf(f, "retrievePasscodeFromFileHandle_ofLength_withbaseaddress_ called\n");
    }
}

void changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_ called\n");
    }
}

void FUN_100005240_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005240 called\n");
    }
}

void FUN_100005250_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005250 called\n");
    }
}

void FUN_100005258_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005258 called\n");
    }
}

void FUN_10000541c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000541c called\n");
    }
}

void FUN_100005470_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005470 called\n");
    }
}

void getPasscodeBlobWithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "getPasscodeBlobWithReply_ called\n");
    }
}

void changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_ called\n");
    }
}

void FUN_100005a04_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005a04 called\n");
    }
}

void FUN_100005b58_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005b58 called\n");
    }
}

void FUN_100005ba4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100005ba4 called\n");
    }
}

void changeClassKeysGenerationWithSecret_secretSize_generationOption_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_ called\n");
    }
}

void registerBackupBag_withSecret_secretSize_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "registerBackupBag_withSecret_secretSize_reply_ called\n");
    }
}

void getBackupBlobreply__instrument()
{
    if (f != NULL){
        fprintf(f, "getBackupBlobreply_ called\n");
    }
}

void getBackupkeyForVolume_andCryptoID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "getBackupkeyForVolume_andCryptoID_withReply_ called\n");
    }
}

void startBackupSessionForVolume_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "startBackupSessionForVolume_withReply_ called\n");
    }
}

void stopBackupSessionForVolume_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "stopBackupSessionForVolume_withReply_ called\n");
    }
}

void enableBackupForVolume_withSecret_secretSize_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "enableBackupForVolume_withSecret_secretSize_reply_ called\n");
    }
}

void disableBackupForVolume_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "disableBackupForVolume_reply_ called\n");
    }
}

void backupUUIDForVolume_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "backupUUIDForVolume_reply_ called\n");
    }
}

void stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply__instrument()
{
    if (f != NULL){
        fprintf(f, "stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_ called\n");
    }
}

void stashCommitwithUID_WithFlags_WithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "stashCommitwithUID_WithFlags_WithReply_ called\n");
    }
}

void stashVerifywithUID_WithFlags_WithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "stashVerifywithUID_WithFlags_WithReply_ called\n");
    }
}

void stashDestroywithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "stashDestroywithReply_ called\n");
    }
}

void isKeyRollingInProgresswithreply__instrument()
{
    if (f != NULL){
        fprintf(f, "isKeyRollingInProgresswithreply_ called\n");
    }
}

void migrationWithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "migrationWithReply_ called\n");
    }
}

void getLockSateInfoforUser_WithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "getLockSateInfoforUser_WithReply_ called\n");
    }
}

void getDeviceLockState_needsExtended_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "getDeviceLockState_needsExtended_withReply_ called\n");
    }
}

void passcodeUnlockStartWithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "passcodeUnlockStartWithReply_ called\n");
    }
}

void passcodeUnlockSuccessWithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "passcodeUnlockSuccessWithReply_ called\n");
    }
}

void passcodeUnlockFailedWithReply__instrument()
{
    if (f != NULL){
        fprintf(f, "passcodeUnlockFailedWithReply_ called\n");
    }
}

void SeshatEnrollWithSecret_secretSize_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "SeshatEnrollWithSecret_secretSize_withReply_ called\n");
    }
}

void Event__instrument()
{
    if (f != NULL){
        fprintf(f, "Event_ called\n");
    }
}

void SeshatUnlockWithSecret_secretSize_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "SeshatUnlockWithSecret_secretSize_withReply_ called\n");
    }
}

void SeshatRecoverWithSecret_secretSize_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "SeshatRecoverWithSecret_secretSize_withReply_ called\n");
    }
}

void SeshatDebugWithDebugMask_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "SeshatDebugWithDebugMask_withReply_ called\n");
    }
}

void createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_ called\n");
    }
}

void FUN_100007500_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007500 called\n");
    }
}

void loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_ called\n");
    }
}

void KBXPCLoadKeyBagForUserSession_instrument()
{
    if (f != NULL){
        fprintf(f, "KBXPCLoadKeyBagForUserSession called\n");
    }
}

void FUN_100007a28_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007a28 called\n");
    }
}

void FUN_100007a6c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007a6c called\n");
    }
}

void unloadKeybagForUserSession_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "unloadKeybagForUserSession_withReply_ called\n");
    }
}

void FUN_100007be8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007be8 called\n");
    }
}

void FUN_100007c8c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007c8c called\n");
    }
}

void FUN_100007c9c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007c9c called\n");
    }
}

void deleteKeybagForUserSession_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "deleteKeybagForUserSession_withReply_ called\n");
    }
}

void FUN_100007e0c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100007e0c called\n");
    }
}

void setVolumeToPersona_withPersonaString_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "setVolumeToPersona_withPersonaString_withReply_ called\n");
    }
}

void FUN_10000804c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000804c called\n");
    }
}

void FUN_1000082a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000082a0 called\n");
    }
}

void FUN_1000082ec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000082ec called\n");
    }
}

void createSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "createSyncBagForUserSession_withSessionUID_withReply_ called\n");
    }
}

void FUN_1000084a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000084a0 called\n");
    }
}

void FUN_100008548_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100008548 called\n");
    }
}

void FUN_10000857c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000857c called\n");
    }
}

void loadSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "loadSyncBagForUserSession_withSessionUID_withReply_ called\n");
    }
}

void FUN_100008720_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100008720 called\n");
    }
}

void verifySyncBagForUserSession_withSessionUID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "verifySyncBagForUserSession_withSessionUID_withReply_ called\n");
    }
}

void FUN_100008940_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100008940 called\n");
    }
}

void unloadSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "unloadSyncBagForUserSession_withSessionUID_withReply_ called\n");
    }
}

void FUN_100008b60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100008b60 called\n");
    }
}

void removeSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "removeSyncBagForUserSession_withSessionUID_withReply_ called\n");
    }
}

void FUN_100008dd0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100008dd0 called\n");
    }
}

void createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_ called\n");
    }
}

void FUN_100009244_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009244 called\n");
    }
}

void removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply__instrument()
{
    if (f != NULL){
        fprintf(f, "removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_ called\n");
    }
}

void FUN_1000094a8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000094a8 called\n");
    }
}

void FUN_10000954c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000954c called\n");
    }
}

void FUN_100009588_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009588 called\n");
    }
}

void FUN_1000095bc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000095bc called\n");
    }
}

void sharedLockModelWithUID__instrument()
{
    if (f != NULL){
        fprintf(f, "sharedLockModelWithUID_ called\n");
    }
}

void FUN_100009728_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009728 called\n");
    }
}

void initWithUID__instrument()
{
    if (f != NULL){
        fprintf(f, "initWithUID_ called\n");
    }
}

void initWithJournalPath_uid__instrument()
{
    if (f != NULL){
        fprintf(f, "initWithJournalPath_uid_ called\n");
    }
}

void dealloc_instrument()
{
    if (f != NULL){
        fprintf(f, "dealloc called\n");
    }
}

void notePasscodeEntryBegan_instrument()
{
    if (f != NULL){
        fprintf(f, "notePasscodeEntryBegan called\n");
    }
}

void FUN_1000098c4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000098c4 called\n");
    }
}

void FUN_1000098cc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000098cc called\n");
    }
}

void FUN_1000098dc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000098dc called\n");
    }
}

void notePasscodeEntryCancelled_instrument()
{
    if (f != NULL){
        fprintf(f, "notePasscodeEntryCancelled called\n");
    }
}

void FUN_100009940_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009940 called\n");
    }
}

void notePasscodeUnlockSucceeded_instrument()
{
    if (f != NULL){
        fprintf(f, "notePasscodeUnlockSucceeded called\n");
    }
}

void FUN_1000099a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000099a0 called\n");
    }
}

void notePasscodeUnlockFailed_instrument()
{
    if (f != NULL){
        fprintf(f, "notePasscodeUnlockFailed called\n");
    }
}

void FUN_100009a00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009a00 called\n");
    }
}

void isPermanentlyBlocked_instrument()
{
    if (f != NULL){
        fprintf(f, "isPermanentlyBlocked called\n");
    }
}

void FUN_100009a9c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009a9c called\n");
    }
}

void FUN_100009ab0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009ab0 called\n");
    }
}

void FUN_100009aec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009aec called\n");
    }
}

void isTemporarilyBlocked_instrument()
{
    if (f != NULL){
        fprintf(f, "isTemporarilyBlocked called\n");
    }
}

void timeUntilUnblockedSinceReferenceDate_instrument()
{
    if (f != NULL){
        fprintf(f, "timeUntilUnblockedSinceReferenceDate called\n");
    }
}

void FUN_100009bec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009bec called\n");
    }
}

void isWipePending_instrument()
{
    if (f != NULL){
        fprintf(f, "isWipePending called\n");
    }
}

void FUN_100009c90_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009c90 called\n");
    }
}

void failedPasscodeAttempts_instrument()
{
    if (f != NULL){
        fprintf(f, "failedPasscodeAttempts called\n");
    }
}

void FUN_100009d30_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100009d30 called\n");
    }
}

void userDeleted_instrument()
{
    if (f != NULL){
        fprintf(f, "userDeleted called\n");
    }
}

void _persistentStateQueue_beginSpeculativeFailureCharge_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_beginSpeculativeFailureCharge called\n");
    }
}

void _persistentStateQueue_cancelSpeculativeFailureCharge_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_cancelSpeculativeFailureCharge called\n");
    }
}

void _persistentStateQueue_rollbackSpeculativeFailureCharge_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_rollbackSpeculativeFailureCharge called\n");
    }
}

void _persistentStateQueue_unlockSucceeded_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_unlockSucceeded called\n");
    }
}

void _persistentStateQueue_unlockFailed_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_unlockFailed called\n");
    }
}

void _persistentStateQueue_loadLockState_instrument()
{
    if (f != NULL){
        fprintf(f, "_persistentStateQueue_loadLockState called\n");
    }
}

void _loadLockState_instrument()
{
    if (f != NULL){
        fprintf(f, "_loadLockState called\n");
    }
}

void _lockStateValueForKey_ofType__instrument()
{
    if (f != NULL){
        fprintf(f, "_lockStateValueForKey_ofType_ called\n");
    }
}

void _setLockStateValue_forKey__instrument()
{
    if (f != NULL){
        fprintf(f, "_setLockStateValue_forKey_ called\n");
    }
}

void FUN_10000a368_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a368 called\n");
    }
}

void FUN_10000a4d0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a4d0 called\n");
    }
}

void FUN_10000a4f0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a4f0 called\n");
    }
}

void FUN_10000a510_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a510 called\n");
    }
}

void FUN_10000a530_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a530 called\n");
    }
}

void FUN_10000a590_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a590 called\n");
    }
}

void FUN_10000a620_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a620 called\n");
    }
}

void FUN_10000a67c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a67c called\n");
    }
}

void FUN_10000a708_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a708 called\n");
    }
}

void FUN_10000a954_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a954 called\n");
    }
}

void FUN_10000a95c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a95c called\n");
    }
}

void FUN_10000a9a4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000a9a4 called\n");
    }
}

void FUN_10000ab68_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ab68 called\n");
    }
}

void FUN_10000ace8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ace8 called\n");
    }
}

void FUN_10000adac_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000adac called\n");
    }
}

void FUN_10000ae88_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ae88 called\n");
    }
}

void FUN_10000af5c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000af5c called\n");
    }
}

void FUN_10000afe8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000afe8 called\n");
    }
}

void FUN_10000b088_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b088 called\n");
    }
}

void FUN_10000b100_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b100 called\n");
    }
}

void FUN_10000b200_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b200 called\n");
    }
}

void FUN_10000b238_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b238 called\n");
    }
}

void FUN_10000b278_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b278 called\n");
    }
}

void FUN_10000b2c4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b2c4 called\n");
    }
}

void memcopy_instrument()
{
    if (f != NULL){
        fprintf(f, "memcopy called\n");
    }
}

void FUN_10000b450_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b450 called\n");
    }
}

void FUN_10000b4c8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b4c8 called\n");
    }
}

void FUN_10000b61c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b61c called\n");
    }
}

void LerbPlist_instrument()
{
    if (f != NULL){
        fprintf(f, "LerbPlist called\n");
    }
}

void FUN_10000b884_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b884 called\n");
    }
}

void FUN_10000b8d8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b8d8 called\n");
    }
}

void FUN_10000b91c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b91c called\n");
    }
}

void FUN_10000b958_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b958 called\n");
    }
}

void FUN_10000b98c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000b98c called\n");
    }
}

void FUN_10000bb64_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bb64 called\n");
    }
}

void FUN_10000bc28_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bc28 called\n");
    }
}

void FUN_10000bcb0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bcb0 called\n");
    }
}

void FUN_10000bd70_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bd70 called\n");
    }
}

void FUN_10000be4c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000be4c called\n");
    }
}

void FUN_10000beb4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000beb4 called\n");
    }
}

void FUN_10000bfa4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bfa4 called\n");
    }
}

void FUN_10000bfb4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bfb4 called\n");
    }
}

void FUN_10000bfc0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000bfc0 called\n");
    }
}

void FUN_10000c040_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c040 called\n");
    }
}

void FUN_10000c0a8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c0a8 called\n");
    }
}

void FUN_10000c198_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c198 called\n");
    }
}

void FUN_10000c218_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c218 called\n");
    }
}

void FUN_10000c5d8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c5d8 called\n");
    }
}

void FUN_10000c63c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c63c called\n");
    }
}

void FUN_10000c918_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000c918 called\n");
    }
}

void FUN_10000cacc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cacc called\n");
    }
}

void FUN_10000cad8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cad8 called\n");
    }
}

void FUN_10000cb6c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cb6c called\n");
    }
}

void FUN_10000cb7c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cb7c called\n");
    }
}

void FUN_10000cb88_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cb88 called\n");
    }
}

void FUN_10000cbac_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cbac called\n");
    }
}

void FUN_10000cc60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cc60 called\n");
    }
}

void FUN_10000cd14_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cd14 called\n");
    }
}

void FUN_10000ce08_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ce08 called\n");
    }
}

void FUN_10000cf68_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000cf68 called\n");
    }
}

void FUN_10000d024_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d024 called\n");
    }
}

void FUN_10000d094_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d094 called\n");
    }
}

void FUN_10000d150_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d150 called\n");
    }
}

void FUN_10000d1c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d1c0 called\n");
    }
}

void FUN_10000d27c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d27c called\n");
    }
}

void FUN_10000d2ec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d2ec called\n");
    }
}

void FUN_10000d364_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d364 called\n");
    }
}

void FUN_10000d4a4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000d4a4 called\n");
    }
}

void LoadKeyBagForUserSession_instrument()
{
    if (f != NULL){
        fprintf(f, "LoadKeyBagForUserSession called\n");
    }
}

void SetAPFSVolumeIDforKeybag_instrument()
{
    if (f != NULL){
        fprintf(f, "SetAPFSVolumeIDforKeybag called\n");
    }
}

void FUN_10000db5c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000db5c called\n");
    }
}

void FUN_10000ddf8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ddf8 called\n");
    }
}

void FUN_10000de00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000de00 called\n");
    }
}

void FUN_10000decc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000decc called\n");
    }
}

void FUN_10000e140_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000e140 called\n");
    }
}

void FUN_10000e424_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000e424 called\n");
    }
}

void FUN_10000e6a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000e6a0 called\n");
    }
}

void FUN_10000e774_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000e774 called\n");
    }
}

void FUN_10000e844_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000e844 called\n");
    }
}

void FUN_10000ea00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ea00 called\n");
    }
}

void thunk_FUN_10000b91c_instrument()
{
    if (f != NULL){
        fprintf(f, "thunk_FUN_10000b91c called\n");
    }
}

void LogFunc_instrument()
{
    if (f != NULL){
        fprintf(f, "LogFunc called\n");
    }
}

void FUN_10000ec2c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ec2c called\n");
    }
}

void FUN_10000ed60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ed60 called\n");
    }
}

void FUN_10000ef4c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ef4c called\n");
    }
}

void FUN_10000f07c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f07c called\n");
    }
}

void FUN_10000f17c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f17c called\n");
    }
}

void FUN_10000f220_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f220 called\n");
    }
}

void FUN_10000f2b4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f2b4 called\n");
    }
}

void FUN_10000f304_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f304 called\n");
    }
}

void FUN_10000f3cc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f3cc called\n");
    }
}

void FUN_10000f45c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000f45c called\n");
    }
}

void FUN_10000fa38_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fa38 called\n");
    }
}

void FUN_10000fc6c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fc6c called\n");
    }
}

void FUN_10000fccc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fccc called\n");
    }
}

void FUN_10000fd0c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fd0c called\n");
    }
}

void FUN_10000fd7c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fd7c called\n");
    }
}

void FUN_10000fde4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fde4 called\n");
    }
}

void FUN_10000fdf8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fdf8 called\n");
    }
}

void FUN_10000fee0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000fee0 called\n");
    }
}

void FUN_10000ff04_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ff04 called\n");
    }
}

void FUN_10000ff18_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10000ff18 called\n");
    }
}

void FUN_100010204_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010204 called\n");
    }
}

void keybagd_getpasscodeblob_block_invoke_instrument()
{
    if (f != NULL){
        fprintf(f, "keybagd_getpasscodeblob_block_invoke called\n");
    }
}

void FUN_10001033c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001033c called\n");
    }
}

void FUN_1000103d8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000103d8 called\n");
    }
}

void FUN_100010484_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010484 called\n");
    }
}

void FUN_1000105a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000105a0 called\n");
    }
}

void FUN_100010650_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010650 called\n");
    }
}

void FUN_100010780_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010780 called\n");
    }
}

void FUN_10001084c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001084c called\n");
    }
}

void FUN_1000109d8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000109d8 called\n");
    }
}

void FUN_100010ab0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010ab0 called\n");
    }
}

void FUN_100010c04_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010c04 called\n");
    }
}

void FUN_100010ca8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010ca8 called\n");
    }
}

void FUN_100010dd0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010dd0 called\n");
    }
}

void keybagd_stashcreate_block_invoke_instrument()
{
    if (f != NULL){
        fprintf(f, "keybagd_stashcreate_block_invoke called\n");
    }
}

void FUN_100010fe0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100010fe0 called\n");
    }
}

void FUN_10001101c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001101c called\n");
    }
}

void FUN_10001104c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001104c called\n");
    }
}

void FUN_1000110fc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000110fc called\n");
    }
}

void FUN_100011180_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011180 called\n");
    }
}

void FUN_100011214_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011214 called\n");
    }
}

void FUN_10001126c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001126c called\n");
    }
}

void FUN_10001137c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001137c called\n");
    }
}

void FUN_10001141c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001141c called\n");
    }
}

void FUN_100011468_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011468 called\n");
    }
}

void FUN_1000114a4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000114a4 called\n");
    }
}

void FUN_100011544_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011544 called\n");
    }
}

void FUN_10001176c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001176c called\n");
    }
}

void FUN_100011824_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011824 called\n");
    }
}

void FUN_1000118d0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000118d0 called\n");
    }
}

void FUN_100011968_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011968 called\n");
    }
}

void FUN_1000119a8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000119a8 called\n");
    }
}

void FUN_100011a34_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011a34 called\n");
    }
}

void FUN_100011a70_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011a70 called\n");
    }
}

void FUN_100011c04_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011c04 called\n");
    }
}

void FUN_100011ca0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011ca0 called\n");
    }
}

void FUN_100011da4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011da4 called\n");
    }
}

void FUN_100011e30_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011e30 called\n");
    }
}

void FUN_100011eb8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011eb8 called\n");
    }
}

void FUN_100011fb4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011fb4 called\n");
    }
}

void FUN_100011ff0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100011ff0 called\n");
    }
}

void FUN_100012018_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012018 called\n");
    }
}

void FUN_10001210c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001210c called\n");
    }
}

void FUN_10001224c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001224c called\n");
    }
}

void FUN_100012318_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012318 called\n");
    }
}

void FUN_100012370_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012370 called\n");
    }
}

void FUN_1000123c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000123c0 called\n");
    }
}

void FUN_100012450_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012450 called\n");
    }
}

void FUN_100012468_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012468 called\n");
    }
}

void FUN_100012564_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012564 called\n");
    }
}

void FUN_100012580_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012580 called\n");
    }
}

void FUN_1000125d0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000125d0 called\n");
    }
}

void InterageSEP_instrument()
{
    if (f != NULL){
        fprintf(f, "InterageSEP called\n");
    }
}

void FUN_100012758_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012758 called\n");
    }
}

void FUN_1000127cc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000127cc called\n");
    }
}

void FUN_10001285c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001285c called\n");
    }
}

void FUN_100012980_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012980 called\n");
    }
}

void FUN_100012a9c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012a9c called\n");
    }
}

void FUN_100012ad8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012ad8 called\n");
    }
}

void FUN_100012aec_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012aec called\n");
    }
}

void FUN_100012c44_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012c44 called\n");
    }
}

void FUN_100012d04_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012d04 called\n");
    }
}

void FUN_100012dc8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012dc8 called\n");
    }
}

void SetBagHandleForUID_instrument()
{
    if (f != NULL){
        fprintf(f, "SetBagHandleForUID called\n");
    }
}

void FUN_100012e84_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012e84 called\n");
    }
}

void FUN_100012e98_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012e98 called\n");
    }
}

void FUN_100012ea4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012ea4 called\n");
    }
}

void FUN_100012fb8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100012fb8 called\n");
    }
}

void FUN_100013104_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013104 called\n");
    }
}

void FUN_1000131b4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000131b4 called\n");
    }
}

void FUN_1000132b0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000132b0 called\n");
    }
}

void updateofGraceperiodFORUSER_instrument()
{
    if (f != NULL){
        fprintf(f, "updateofGraceperiodFORUSER called\n");
    }
}

void FUN_100013624_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013624 called\n");
    }
}

void FUN_100013728_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013728 called\n");
    }
}

void FUN_100013820_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013820 called\n");
    }
}

void FUN_100013868_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013868 called\n");
    }
}

void FUN_1000139f8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000139f8 called\n");
    }
}

void FUN_100013a88_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013a88 called\n");
    }
}

void FUN_100013bfc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013bfc called\n");
    }
}

void FUN_100013c08_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013c08 called\n");
    }
}

void FUN_100013cf4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013cf4 called\n");
    }
}

void FUN_100013d00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013d00 called\n");
    }
}

void FUN_100013d8c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013d8c called\n");
    }
}

void FUN_100013e14_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013e14 called\n");
    }
}

void FUN_100013e28_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013e28 called\n");
    }
}

void FUN_100013fa0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013fa0 called\n");
    }
}

void FUN_100013fcc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100013fcc called\n");
    }
}

void FUN_10001410c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001410c called\n");
    }
}

void FUN_1000141b8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000141b8 called\n");
    }
}

void FUN_1000142dc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000142dc called\n");
    }
}

void FUN_1000142f4_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000142f4 called\n");
    }
}

void FUN_100014390_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014390 called\n");
    }
}

void FUN_1000144f0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000144f0 called\n");
    }
}

void FUN_100014578_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014578 called\n");
    }
}

void FUN_1000145f0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000145f0 called\n");
    }
}

void FUN_100014a0c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014a0c called\n");
    }
}

void FUN_100014c44_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014c44 called\n");
    }
}

void FUN_100014d08_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014d08 called\n");
    }
}

void FUN_100014e00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014e00 called\n");
    }
}

void FUN_100014ed0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014ed0 called\n");
    }
}

void FUN_100014fac_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100014fac called\n");
    }
}

void FUN_100015034_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015034 called\n");
    }
}

void FUN_1000150ac_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000150ac called\n");
    }
}

void FUN_100015214_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015214 called\n");
    }
}

void FUN_1000153b8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000153b8 called\n");
    }
}

void FUN_1000154f8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000154f8 called\n");
    }
}

void FUN_100015630_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015630 called\n");
    }
}

void FUN_1000157fc_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000157fc called\n");
    }
}

void FUN_10001580c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_10001580c called\n");
    }
}

void FUN_100015874_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015874 called\n");
    }
}

void FUN_100015a84_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015a84 called\n");
    }
}

void FUN_100015b10_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015b10 called\n");
    }
}

void FUN_100015be8_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015be8 called\n");
    }
}

void FUN_100015c4c_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015c4c called\n");
    }
}

void FUN_100015cb0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015cb0 called\n");
    }
}

void FUN_100015d14_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100015d14 called\n");
    }
}

void FUN_100017440_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017440 called\n");
    }
}

void FUN_100017460_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017460 called\n");
    }
}

void FUN_100017480_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017480 called\n");
    }
}

void FUN_1000174a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000174a0 called\n");
    }
}

void FUN_1000174c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000174c0 called\n");
    }
}

void FUN_1000174e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000174e0 called\n");
    }
}

void FUN_100017500_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017500 called\n");
    }
}

void FUN_100017520_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017520 called\n");
    }
}

void FUN_100017540_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017540 called\n");
    }
}

void FUN_100017560_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017560 called\n");
    }
}

void FUN_100017580_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017580 called\n");
    }
}

void FUN_1000175a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000175a0 called\n");
    }
}

void FUN_1000175c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000175c0 called\n");
    }
}

void FUN_1000175e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000175e0 called\n");
    }
}

void FUN_100017600_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017600 called\n");
    }
}

void FUN_100017620_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017620 called\n");
    }
}

void FUN_100017640_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017640 called\n");
    }
}

void FUN_100017660_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017660 called\n");
    }
}

void FUN_100017680_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017680 called\n");
    }
}

void FUN_1000176a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000176a0 called\n");
    }
}

void FUN_1000176c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000176c0 called\n");
    }
}

void FUN_1000176e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000176e0 called\n");
    }
}

void FUN_100017700_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017700 called\n");
    }
}

void FUN_100017720_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017720 called\n");
    }
}

void FUN_100017740_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017740 called\n");
    }
}

void FUN_100017760_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017760 called\n");
    }
}

void FUN_100017780_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017780 called\n");
    }
}

void FUN_1000177a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000177a0 called\n");
    }
}

void FUN_1000177c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000177c0 called\n");
    }
}

void FUN_1000177e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000177e0 called\n");
    }
}

void FUN_100017800_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017800 called\n");
    }
}

void FUN_100017820_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017820 called\n");
    }
}

void FUN_100017840_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017840 called\n");
    }
}

void FUN_100017860_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017860 called\n");
    }
}

void FUN_100017880_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017880 called\n");
    }
}

void FUN_1000178a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000178a0 called\n");
    }
}

void FUN_1000178c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000178c0 called\n");
    }
}

void FUN_1000178e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000178e0 called\n");
    }
}

void FUN_100017900_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017900 called\n");
    }
}

void FUN_100017920_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017920 called\n");
    }
}

void FUN_100017940_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017940 called\n");
    }
}

void FUN_100017960_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017960 called\n");
    }
}

void FUN_100017980_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017980 called\n");
    }
}

void FUN_1000179a0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000179a0 called\n");
    }
}

void FUN_1000179c0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000179c0 called\n");
    }
}

void FUN_1000179e0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_1000179e0 called\n");
    }
}

void FUN_100017a00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017a00 called\n");
    }
}

void FUN_100017a20_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017a20 called\n");
    }
}

void FUN_100017a40_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017a40 called\n");
    }
}

void FUN_100017a60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017a60 called\n");
    }
}

void FUN_100017a80_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017a80 called\n");
    }
}

void FUN_100017aa0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017aa0 called\n");
    }
}

void FUN_100017ac0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017ac0 called\n");
    }
}

void FUN_100017ae0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017ae0 called\n");
    }
}

void FUN_100017b00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017b00 called\n");
    }
}

void FUN_100017b20_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017b20 called\n");
    }
}

void FUN_100017b40_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017b40 called\n");
    }
}

void FUN_100017b60_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017b60 called\n");
    }
}

void FUN_100017b80_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017b80 called\n");
    }
}

void FUN_100017ba0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017ba0 called\n");
    }
}

void FUN_100017bc0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017bc0 called\n");
    }
}

void FUN_100017be0_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017be0 called\n");
    }
}

void FUN_100017c00_instrument()
{
    if (f != NULL){
        fprintf(f, "FUN_100017c00 called\n");
    }
}

void keybagdInit(void)
{
    while (f == NULL)
        f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    // Get the image reference for keybagd
    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);

    // Calculate and hook into FUN_1000021ec
    void *addr= (void *)image + (0x1000021ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000021ec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000021ec_instrument);

    // Calculate and hook into FUN_10000231c
    addr= (void *)image + (0x10000231c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000231c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000231c_instrument);

    // Calculate and hook into FUN_100002454
    addr= (void *)image + (0x100002454 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100002454  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100002454_instrument);

    // Calculate and hook into LoadSystemBag
    addr= (void *)image + (0x1000025fc - BASEADDR);
    fprintf(f, "Pegou o addr LoadSystemBag  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LoadSystemBag_instrument);

    // Calculate and hook into LoadKeyBag
    addr= (void *)image + (0x1000026f4 - BASEADDR);
    fprintf(f, "Pegou o addr LoadKeyBag  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LoadKeyBag_instrument);

    // Calculate and hook into LoadUserBag
    addr= (void *)image + (0x10000285c - BASEADDR);
    fprintf(f, "Pegou o addr LoadUserBag  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LoadUserBag_instrument);

    // Calculate and hook into FUN_1000029b8
    addr= (void *)image + (0x1000029b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000029b8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000029b8_instrument);

    // Calculate and hook into FUN_100002aa0
    addr= (void *)image + (0x100002aa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100002aa0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100002aa0_instrument);

    // Calculate and hook into FUN_1000032e0
    addr= (void *)image + (0x1000032e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000032e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000032e0_instrument);

    // Calculate and hook into savingofKeybagFORUSER
    addr= (void *)image + (0x1000034ac - BASEADDR);
    fprintf(f, "Pegou o addr savingofKeybagFORUSER  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&savingofKeybagFORUSER_instrument);

    // Calculate and hook into ChangeSystemSecret
    addr= (void *)image + (0x100003844 - BASEADDR);
    fprintf(f, "Pegou o addr ChangeSystemSecret  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&ChangeSystemSecret_instrument);

    // Calculate and hook into FUN_100003bc0
    addr= (void *)image + (0x100003bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003bc0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100003bc0_instrument);

    // Calculate and hook into FUN_100003c84
    addr= (void *)image + (0x100003c84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003c84  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100003c84_instrument);

    // Calculate and hook into ChangeUserKeybag
    addr= (void *)image + (0x100003d60 - BASEADDR);
    fprintf(f, "Pegou o addr ChangeUserKeybag  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&ChangeUserKeybag_instrument);

    // Calculate and hook into FUN_100003e80
    addr= (void *)image + (0x100003e80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003e80  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100003e80_instrument);

    // Calculate and hook into FUN_10000400c
    addr= (void *)image + (0x10000400c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000400c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000400c_instrument);

    // Calculate and hook into FUN_10000427c
    addr= (void *)image + (0x10000427c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000427c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000427c_instrument);

    // Calculate and hook into DecryptKBWithCrypto
    addr= (void *)image + (0x10000443c - BASEADDR);
    fprintf(f, "Pegou o addr DecryptKBWithCrypto  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&DecryptKBWithCrypto_instrument);

    // Calculate and hook into GetParseKB_MK
    addr= (void *)image + (0x100004758 - BASEADDR);
    fprintf(f, "Pegou o addr GetParseKB_MK  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&GetParseKB_MK_instrument);

    // Calculate and hook into FUN_100004a60
    addr= (void *)image + (0x100004a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004a60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100004a60_instrument);

    // Calculate and hook into FUN_100004b2c
    addr= (void *)image + (0x100004b2c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b2c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100004b2c_instrument);

    // Calculate and hook into FUN_100004b38
    addr= (void *)image + (0x100004b38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b38  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100004b38_instrument);

    // Calculate and hook into listener_shouldAcceptNewConnection_
    addr= (void *)image + (0x100004b44 - BASEADDR);
    fprintf(f, "Pegou o addr listener_shouldAcceptNewConnection_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&listener_shouldAcceptNewConnection__instrument);

    // Calculate and hook into sharedService
    addr= (void *)image + (0x100004bd4 - BASEADDR);
    fprintf(f, "Pegou o addr sharedService  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&sharedService_instrument);

    // Calculate and hook into FUN_100004c48
    addr= (void *)image + (0x100004c48 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004c48  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100004c48_instrument);

    // Calculate and hook into remoteProcessHasBooleanEntitlement_
    addr= (void *)image + (0x100004c70 - BASEADDR);
    fprintf(f, "Pegou o addr remoteProcessHasBooleanEntitlement_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&remoteProcessHasBooleanEntitlement__instrument);

    // Calculate and hook into remoteServiceName
    addr= (void *)image + (0x100004d00 - BASEADDR);
    fprintf(f, "Pegou o addr remoteServiceName  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&remoteServiceName_instrument);

    // Calculate and hook into retrievePasscodeFromFileHandle_ofLength_withbaseaddress_
    addr= (void *)image + (0x100004d40 - BASEADDR);
    fprintf(f, "Pegou o addr retrievePasscodeFromFileHandle_ofLength_withbaseaddress_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&retrievePasscodeFromFileHandle_ofLength_withbaseaddress__instrument);

    // Calculate and hook into changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_
    addr= (void *)image + (0x100004db8 - BASEADDR);
    fprintf(f, "Pegou o addr changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply__instrument);

    // Calculate and hook into FUN_100005240
    addr= (void *)image + (0x100005240 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005240  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005240_instrument);

    // Calculate and hook into FUN_100005250
    addr= (void *)image + (0x100005250 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005250  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005250_instrument);

    // Calculate and hook into FUN_100005258
    addr= (void *)image + (0x100005258 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005258  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005258_instrument);

    // Calculate and hook into FUN_10000541c
    addr= (void *)image + (0x10000541c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000541c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000541c_instrument);

    // Calculate and hook into FUN_100005470
    addr= (void *)image + (0x100005470 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005470  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005470_instrument);

    // Calculate and hook into getPasscodeBlobWithReply_
    addr= (void *)image + (0x1000054b4 - BASEADDR);
    fprintf(f, "Pegou o addr getPasscodeBlobWithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&getPasscodeBlobWithReply__instrument);

    // Calculate and hook into changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_
    addr= (void *)image + (0x100005574 - BASEADDR);
    fprintf(f, "Pegou o addr changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply__instrument);

    // Calculate and hook into FUN_100005a04
    addr= (void *)image + (0x100005a04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005a04  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005a04_instrument);

    // Calculate and hook into FUN_100005b58
    addr= (void *)image + (0x100005b58 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005b58  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005b58_instrument);

    // Calculate and hook into FUN_100005ba4
    addr= (void *)image + (0x100005ba4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005ba4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100005ba4_instrument);

    // Calculate and hook into changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_
    addr= (void *)image + (0x100005be4 - BASEADDR);
    fprintf(f, "Pegou o addr changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&changeClassKeysGenerationWithSecret_secretSize_generationOption_reply__instrument);

    // Calculate and hook into registerBackupBag_withSecret_secretSize_reply_
    addr= (void *)image + (0x100005e10 - BASEADDR);
    fprintf(f, "Pegou o addr registerBackupBag_withSecret_secretSize_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&registerBackupBag_withSecret_secretSize_reply__instrument);

    // Calculate and hook into getBackupBlobreply_
    addr= (void *)image + (0x100006048 - BASEADDR);
    fprintf(f, "Pegou o addr getBackupBlobreply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&getBackupBlobreply__instrument);

    // Calculate and hook into getBackupkeyForVolume_andCryptoID_withReply_
    addr= (void *)image + (0x1000060fc - BASEADDR);
    fprintf(f, "Pegou o addr getBackupkeyForVolume_andCryptoID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&getBackupkeyForVolume_andCryptoID_withReply__instrument);

    // Calculate and hook into startBackupSessionForVolume_withReply_
    addr= (void *)image + (0x100006200 - BASEADDR);
    fprintf(f, "Pegou o addr startBackupSessionForVolume_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&startBackupSessionForVolume_withReply__instrument);

    // Calculate and hook into stopBackupSessionForVolume_withReply_
    addr= (void *)image + (0x1000062dc - BASEADDR);
    fprintf(f, "Pegou o addr stopBackupSessionForVolume_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&stopBackupSessionForVolume_withReply__instrument);

    // Calculate and hook into enableBackupForVolume_withSecret_secretSize_reply_
    addr= (void *)image + (0x1000063b8 - BASEADDR);
    fprintf(f, "Pegou o addr enableBackupForVolume_withSecret_secretSize_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&enableBackupForVolume_withSecret_secretSize_reply__instrument);

    // Calculate and hook into disableBackupForVolume_reply_
    addr= (void *)image + (0x100006658 - BASEADDR);
    fprintf(f, "Pegou o addr disableBackupForVolume_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&disableBackupForVolume_reply__instrument);

    // Calculate and hook into backupUUIDForVolume_reply_
    addr= (void *)image + (0x100006730 - BASEADDR);
    fprintf(f, "Pegou o addr backupUUIDForVolume_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&backupUUIDForVolume_reply__instrument);

    // Calculate and hook into stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_
    addr= (void *)image + (0x1000067ac - BASEADDR);
    fprintf(f, "Pegou o addr stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply__instrument);

    // Calculate and hook into stashCommitwithUID_WithFlags_WithReply_
    addr= (void *)image + (0x1000069e8 - BASEADDR);
    fprintf(f, "Pegou o addr stashCommitwithUID_WithFlags_WithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&stashCommitwithUID_WithFlags_WithReply__instrument);

    // Calculate and hook into stashVerifywithUID_WithFlags_WithReply_
    addr= (void *)image + (0x100006ac8 - BASEADDR);
    fprintf(f, "Pegou o addr stashVerifywithUID_WithFlags_WithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&stashVerifywithUID_WithFlags_WithReply__instrument);

    // Calculate and hook into stashDestroywithReply_
    addr= (void *)image + (0x100006bbc - BASEADDR);
    fprintf(f, "Pegou o addr stashDestroywithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&stashDestroywithReply__instrument);

    // Calculate and hook into isKeyRollingInProgresswithreply_
    addr= (void *)image + (0x100006c84 - BASEADDR);
    fprintf(f, "Pegou o addr isKeyRollingInProgresswithreply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&isKeyRollingInProgresswithreply__instrument);

    // Calculate and hook into migrationWithReply_
    addr= (void *)image + (0x100006d1c - BASEADDR);
    fprintf(f, "Pegou o addr migrationWithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&migrationWithReply__instrument);

    // Calculate and hook into getLockSateInfoforUser_WithReply_
    addr= (void *)image + (0x100006da4 - BASEADDR);
    fprintf(f, "Pegou o addr getLockSateInfoforUser_WithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&getLockSateInfoforUser_WithReply__instrument);

    // Calculate and hook into getDeviceLockState_needsExtended_withReply_
    addr= (void *)image + (0x100006e30 - BASEADDR);
    fprintf(f, "Pegou o addr getDeviceLockState_needsExtended_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&getDeviceLockState_needsExtended_withReply__instrument);

    // Calculate and hook into passcodeUnlockStartWithReply_
    addr= (void *)image + (0x100006ecc - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockStartWithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&passcodeUnlockStartWithReply__instrument);

    // Calculate and hook into passcodeUnlockSuccessWithReply_
    addr= (void *)image + (0x100006f08 - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockSuccessWithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&passcodeUnlockSuccessWithReply__instrument);

    // Calculate and hook into passcodeUnlockFailedWithReply_
    addr= (void *)image + (0x100006f44 - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockFailedWithReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&passcodeUnlockFailedWithReply__instrument);

    // Calculate and hook into SeshatEnrollWithSecret_secretSize_withReply_
    addr= (void *)image + (0x100006f80 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatEnrollWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SeshatEnrollWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into Event_
    addr= (void *)image + (0x100006ffc - BASEADDR);
    fprintf(f, "Pegou o addr Event_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&Event__instrument);

    // Calculate and hook into SeshatUnlockWithSecret_secretSize_withReply_
    addr= (void *)image + (0x100007004 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatUnlockWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SeshatUnlockWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into SeshatRecoverWithSecret_secretSize_withReply_
    addr= (void *)image + (0x100007084 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatRecoverWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SeshatRecoverWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into SeshatDebugWithDebugMask_withReply_
    addr= (void *)image + (0x100007104 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatDebugWithDebugMask_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SeshatDebugWithDebugMask_withReply__instrument);

    // Calculate and hook into createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_
    addr= (void *)image + (0x100007180 - BASEADDR);
    fprintf(f, "Pegou o addr createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply__instrument);

    // Calculate and hook into FUN_100007500
    addr= (void *)image + (0x100007500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007500  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007500_instrument);

    // Calculate and hook into loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_
    addr= (void *)image + (0x1000075dc - BASEADDR);
    fprintf(f, "Pegou o addr loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply__instrument);

    // Calculate and hook into KBXPCLoadKeyBagForUserSession
    addr= (void *)image + (0x100007954 - BASEADDR);
    fprintf(f, "Pegou o addr KBXPCLoadKeyBagForUserSession  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&KBXPCLoadKeyBagForUserSession_instrument);

    // Calculate and hook into FUN_100007a28
    addr= (void *)image + (0x100007a28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a28  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007a28_instrument);

    // Calculate and hook into FUN_100007a6c
    addr= (void *)image + (0x100007a6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a6c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007a6c_instrument);

    // Calculate and hook into unloadKeybagForUserSession_withReply_
    addr= (void *)image + (0x100007aa4 - BASEADDR);
    fprintf(f, "Pegou o addr unloadKeybagForUserSession_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&unloadKeybagForUserSession_withReply__instrument);

    // Calculate and hook into FUN_100007be8
    addr= (void *)image + (0x100007be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007be8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007be8_instrument);

    // Calculate and hook into FUN_100007c8c
    addr= (void *)image + (0x100007c8c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c8c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007c8c_instrument);

    // Calculate and hook into FUN_100007c9c
    addr= (void *)image + (0x100007c9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c9c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007c9c_instrument);

    // Calculate and hook into deleteKeybagForUserSession_withReply_
    addr= (void *)image + (0x100007ca8 - BASEADDR);
    fprintf(f, "Pegou o addr deleteKeybagForUserSession_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&deleteKeybagForUserSession_withReply__instrument);

    // Calculate and hook into FUN_100007e0c
    addr= (void *)image + (0x100007e0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007e0c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100007e0c_instrument);

    // Calculate and hook into setVolumeToPersona_withPersonaString_withReply_
    addr= (void *)image + (0x100007ebc - BASEADDR);
    fprintf(f, "Pegou o addr setVolumeToPersona_withPersonaString_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&setVolumeToPersona_withPersonaString_withReply__instrument);

    // Calculate and hook into FUN_10000804c
    addr= (void *)image + (0x10000804c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000804c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000804c_instrument);

    // Calculate and hook into FUN_1000082a0
    addr= (void *)image + (0x1000082a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000082a0_instrument);

    // Calculate and hook into FUN_1000082ec
    addr= (void *)image + (0x1000082ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082ec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000082ec_instrument);

    // Calculate and hook into createSyncBagForUserSession_withSessionUID_withReply_
    addr= (void *)image + (0x100008328 - BASEADDR);
    fprintf(f, "Pegou o addr createSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&createSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_1000084a0
    addr= (void *)image + (0x1000084a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000084a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000084a0_instrument);

    // Calculate and hook into FUN_100008548
    addr= (void *)image + (0x100008548 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008548  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100008548_instrument);

    // Calculate and hook into FUN_10000857c
    addr= (void *)image + (0x10000857c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000857c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000857c_instrument);

    // Calculate and hook into loadSyncBagForUserSession_withSessionUID_withReply_
    addr= (void *)image + (0x1000085a8 - BASEADDR);
    fprintf(f, "Pegou o addr loadSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&loadSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008720
    addr= (void *)image + (0x100008720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008720  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100008720_instrument);

    // Calculate and hook into verifySyncBagForUserSession_withSessionUID_withReply_
    addr= (void *)image + (0x1000087c8 - BASEADDR);
    fprintf(f, "Pegou o addr verifySyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&verifySyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008940
    addr= (void *)image + (0x100008940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008940  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100008940_instrument);

    // Calculate and hook into unloadSyncBagForUserSession_withSessionUID_withReply_
    addr= (void *)image + (0x1000089e8 - BASEADDR);
    fprintf(f, "Pegou o addr unloadSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&unloadSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008b60
    addr= (void *)image + (0x100008b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008b60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100008b60_instrument);

    // Calculate and hook into removeSyncBagForUserSession_withSessionUID_withReply_
    addr= (void *)image + (0x100008c58 - BASEADDR);
    fprintf(f, "Pegou o addr removeSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&removeSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008dd0
    addr= (void *)image + (0x100008dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008dd0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100008dd0_instrument);

    // Calculate and hook into createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_
    addr= (void *)image + (0x100008ed8 - BASEADDR);
    fprintf(f, "Pegou o addr createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply__instrument);

    // Calculate and hook into FUN_100009244
    addr= (void *)image + (0x100009244 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009244  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009244_instrument);

    // Calculate and hook into removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_
    addr= (void *)image + (0x100009308 - BASEADDR);
    fprintf(f, "Pegou o addr removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply__instrument);

    // Calculate and hook into FUN_1000094a8
    addr= (void *)image + (0x1000094a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000094a8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000094a8_instrument);

    // Calculate and hook into FUN_10000954c
    addr= (void *)image + (0x10000954c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000954c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000954c_instrument);

    // Calculate and hook into FUN_100009588
    addr= (void *)image + (0x100009588 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009588  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009588_instrument);

    // Calculate and hook into FUN_1000095bc
    addr= (void *)image + (0x1000095bc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000095bc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000095bc_instrument);

    // Calculate and hook into sharedLockModelWithUID_
    addr= (void *)image + (0x100009628 - BASEADDR);
    fprintf(f, "Pegou o addr sharedLockModelWithUID_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&sharedLockModelWithUID__instrument);

    // Calculate and hook into FUN_100009728
    addr= (void *)image + (0x100009728 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009728  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009728_instrument);

    // Calculate and hook into initWithUID_
    addr= (void *)image + (0x100009750 - BASEADDR);
    fprintf(f, "Pegou o addr initWithUID_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&initWithUID__instrument);

    // Calculate and hook into initWithJournalPath_uid_
    addr= (void *)image + (0x100009760 - BASEADDR);
    fprintf(f, "Pegou o addr initWithJournalPath_uid_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&initWithJournalPath_uid__instrument);

    // Calculate and hook into dealloc
    addr= (void *)image + (0x100009800 - BASEADDR);
    fprintf(f, "Pegou o addr dealloc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&dealloc_instrument);

    // Calculate and hook into notePasscodeEntryBegan
    addr= (void *)image + (0x10000986c - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeEntryBegan  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&notePasscodeEntryBegan_instrument);

    // Calculate and hook into FUN_1000098c4
    addr= (void *)image + (0x1000098c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098c4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000098c4_instrument);

    // Calculate and hook into FUN_1000098cc
    addr= (void *)image + (0x1000098cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098cc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000098cc_instrument);

    // Calculate and hook into FUN_1000098dc
    addr= (void *)image + (0x1000098dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098dc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000098dc_instrument);

    // Calculate and hook into notePasscodeEntryCancelled
    addr= (void *)image + (0x1000098e8 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeEntryCancelled  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&notePasscodeEntryCancelled_instrument);

    // Calculate and hook into FUN_100009940
    addr= (void *)image + (0x100009940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009940  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009940_instrument);

    // Calculate and hook into notePasscodeUnlockSucceeded
    addr= (void *)image + (0x100009948 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeUnlockSucceeded  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&notePasscodeUnlockSucceeded_instrument);

    // Calculate and hook into FUN_1000099a0
    addr= (void *)image + (0x1000099a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000099a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000099a0_instrument);

    // Calculate and hook into notePasscodeUnlockFailed
    addr= (void *)image + (0x1000099a8 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeUnlockFailed  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&notePasscodeUnlockFailed_instrument);

    // Calculate and hook into FUN_100009a00
    addr= (void *)image + (0x100009a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009a00_instrument);

    // Calculate and hook into isPermanentlyBlocked
    addr= (void *)image + (0x100009a08 - BASEADDR);
    fprintf(f, "Pegou o addr isPermanentlyBlocked  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&isPermanentlyBlocked_instrument);

    // Calculate and hook into FUN_100009a9c
    addr= (void *)image + (0x100009a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a9c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009a9c_instrument);

    // Calculate and hook into FUN_100009ab0
    addr= (void *)image + (0x100009ab0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009ab0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009ab0_instrument);

    // Calculate and hook into FUN_100009aec
    addr= (void *)image + (0x100009aec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009aec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009aec_instrument);

    // Calculate and hook into isTemporarilyBlocked
    addr= (void *)image + (0x100009b1c - BASEADDR);
    fprintf(f, "Pegou o addr isTemporarilyBlocked  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&isTemporarilyBlocked_instrument);

    // Calculate and hook into timeUntilUnblockedSinceReferenceDate
    addr= (void *)image + (0x100009b60 - BASEADDR);
    fprintf(f, "Pegou o addr timeUntilUnblockedSinceReferenceDate  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&timeUntilUnblockedSinceReferenceDate_instrument);

    // Calculate and hook into FUN_100009bec
    addr= (void *)image + (0x100009bec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009bec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009bec_instrument);

    // Calculate and hook into isWipePending
    addr= (void *)image + (0x100009c00 - BASEADDR);
    fprintf(f, "Pegou o addr isWipePending  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&isWipePending_instrument);

    // Calculate and hook into FUN_100009c90
    addr= (void *)image + (0x100009c90 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009c90  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009c90_instrument);

    // Calculate and hook into failedPasscodeAttempts
    addr= (void *)image + (0x100009ca4 - BASEADDR);
    fprintf(f, "Pegou o addr failedPasscodeAttempts  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&failedPasscodeAttempts_instrument);

    // Calculate and hook into FUN_100009d30
    addr= (void *)image + (0x100009d30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009d30  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100009d30_instrument);

    // Calculate and hook into userDeleted
    addr= (void *)image + (0x100009d44 - BASEADDR);
    fprintf(f, "Pegou o addr userDeleted  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&userDeleted_instrument);

    // Calculate and hook into _persistentStateQueue_beginSpeculativeFailureCharge
    addr= (void *)image + (0x100009d48 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_beginSpeculativeFailureCharge  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_beginSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_cancelSpeculativeFailureCharge
    addr= (void *)image + (0x100009fd8 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_cancelSpeculativeFailureCharge  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_cancelSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_rollbackSpeculativeFailureCharge
    addr= (void *)image + (0x10000a004 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_rollbackSpeculativeFailureCharge  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_rollbackSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_unlockSucceeded
    addr= (void *)image + (0x10000a0d0 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_unlockSucceeded  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_unlockSucceeded_instrument);

    // Calculate and hook into _persistentStateQueue_unlockFailed
    addr= (void *)image + (0x10000a144 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_unlockFailed  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_unlockFailed_instrument);

    // Calculate and hook into _persistentStateQueue_loadLockState
    addr= (void *)image + (0x10000a168 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_loadLockState  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_persistentStateQueue_loadLockState_instrument);

    // Calculate and hook into _loadLockState
    addr= (void *)image + (0x10000a230 - BASEADDR);
    fprintf(f, "Pegou o addr _loadLockState  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_loadLockState_instrument);

    // Calculate and hook into _lockStateValueForKey_ofType_
    addr= (void *)image + (0x10000a280 - BASEADDR);
    fprintf(f, "Pegou o addr _lockStateValueForKey_ofType_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_lockStateValueForKey_ofType__instrument);

    // Calculate and hook into _setLockStateValue_forKey_
    addr= (void *)image + (0x10000a2e4 - BASEADDR);
    fprintf(f, "Pegou o addr _setLockStateValue_forKey_  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&_setLockStateValue_forKey__instrument);

    // Calculate and hook into FUN_10000a368
    addr= (void *)image + (0x10000a368 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a368  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a368_instrument);

    // Calculate and hook into FUN_10000a4d0
    addr= (void *)image + (0x10000a4d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4d0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a4d0_instrument);

    // Calculate and hook into FUN_10000a4f0
    addr= (void *)image + (0x10000a4f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4f0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a4f0_instrument);

    // Calculate and hook into FUN_10000a510
    addr= (void *)image + (0x10000a510 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a510  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a510_instrument);

    // Calculate and hook into FUN_10000a530
    addr= (void *)image + (0x10000a530 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a530  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a530_instrument);

    // Calculate and hook into FUN_10000a590
    addr= (void *)image + (0x10000a590 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a590  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a590_instrument);

    // Calculate and hook into FUN_10000a620
    addr= (void *)image + (0x10000a620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a620  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a620_instrument);

    // Calculate and hook into FUN_10000a67c
    addr= (void *)image + (0x10000a67c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a67c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a67c_instrument);

    // Calculate and hook into FUN_10000a708
    addr= (void *)image + (0x10000a708 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a708  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a708_instrument);

    // Calculate and hook into FUN_10000a954
    addr= (void *)image + (0x10000a954 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a954  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a954_instrument);

    // Calculate and hook into FUN_10000a95c
    addr= (void *)image + (0x10000a95c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a95c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a95c_instrument);

    // Calculate and hook into FUN_10000a9a4
    addr= (void *)image + (0x10000a9a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a9a4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000a9a4_instrument);

    // Calculate and hook into FUN_10000ab68
    addr= (void *)image + (0x10000ab68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ab68  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ab68_instrument);

    // Calculate and hook into FUN_10000ace8
    addr= (void *)image + (0x10000ace8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ace8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ace8_instrument);

    // Calculate and hook into FUN_10000adac
    addr= (void *)image + (0x10000adac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000adac  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000adac_instrument);

    // Calculate and hook into FUN_10000ae88
    addr= (void *)image + (0x10000ae88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ae88  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ae88_instrument);

    // Calculate and hook into FUN_10000af5c
    addr= (void *)image + (0x10000af5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000af5c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000af5c_instrument);

    // Calculate and hook into FUN_10000afe8
    addr= (void *)image + (0x10000afe8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000afe8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000afe8_instrument);

    // Calculate and hook into FUN_10000b088
    addr= (void *)image + (0x10000b088 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b088  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b088_instrument);

    // Calculate and hook into FUN_10000b100
    addr= (void *)image + (0x10000b100 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b100  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b100_instrument);

    // Calculate and hook into FUN_10000b200
    addr= (void *)image + (0x10000b200 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b200  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b200_instrument);

    // Calculate and hook into FUN_10000b238
    addr= (void *)image + (0x10000b238 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b238  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b238_instrument);

    // Calculate and hook into FUN_10000b278
    addr= (void *)image + (0x10000b278 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b278  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b278_instrument);

    // Calculate and hook into FUN_10000b2c4
    addr= (void *)image + (0x10000b2c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b2c4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b2c4_instrument);

    // Calculate and hook into memcopy
    addr= (void *)image + (0x10000b368 - BASEADDR);
    fprintf(f, "Pegou o addr memcopy  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&memcopy_instrument);

    // Calculate and hook into FUN_10000b450
    addr= (void *)image + (0x10000b450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b450  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b450_instrument);

    // Calculate and hook into FUN_10000b4c8
    addr= (void *)image + (0x10000b4c8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b4c8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b4c8_instrument);

    // Calculate and hook into FUN_10000b61c
    addr= (void *)image + (0x10000b61c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b61c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b61c_instrument);

    // Calculate and hook into LerbPlist
    addr= (void *)image + (0x10000b744 - BASEADDR);
    fprintf(f, "Pegou o addr LerbPlist  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LerbPlist_instrument);

    // Calculate and hook into FUN_10000b884
    addr= (void *)image + (0x10000b884 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b884  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b884_instrument);

    // Calculate and hook into FUN_10000b8d8
    addr= (void *)image + (0x10000b8d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b8d8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b8d8_instrument);

    // Calculate and hook into FUN_10000b91c
    addr= (void *)image + (0x10000b91c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b91c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b91c_instrument);

    // Calculate and hook into FUN_10000b958
    addr= (void *)image + (0x10000b958 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b958  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b958_instrument);

    // Calculate and hook into FUN_10000b98c
    addr= (void *)image + (0x10000b98c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b98c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000b98c_instrument);

    // Calculate and hook into FUN_10000bb64
    addr= (void *)image + (0x10000bb64 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bb64  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bb64_instrument);

    // Calculate and hook into FUN_10000bc28
    addr= (void *)image + (0x10000bc28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bc28  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bc28_instrument);

    // Calculate and hook into FUN_10000bcb0
    addr= (void *)image + (0x10000bcb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bcb0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bcb0_instrument);

    // Calculate and hook into FUN_10000bd70
    addr= (void *)image + (0x10000bd70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bd70  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bd70_instrument);

    // Calculate and hook into FUN_10000be4c
    addr= (void *)image + (0x10000be4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000be4c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000be4c_instrument);

    // Calculate and hook into FUN_10000beb4
    addr= (void *)image + (0x10000beb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000beb4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000beb4_instrument);

    // Calculate and hook into FUN_10000bfa4
    addr= (void *)image + (0x10000bfa4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfa4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bfa4_instrument);

    // Calculate and hook into FUN_10000bfb4
    addr= (void *)image + (0x10000bfb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfb4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bfb4_instrument);

    // Calculate and hook into FUN_10000bfc0
    addr= (void *)image + (0x10000bfc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfc0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000bfc0_instrument);

    // Calculate and hook into FUN_10000c040
    addr= (void *)image + (0x10000c040 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c040  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c040_instrument);

    // Calculate and hook into FUN_10000c0a8
    addr= (void *)image + (0x10000c0a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c0a8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c0a8_instrument);

    // Calculate and hook into FUN_10000c198
    addr= (void *)image + (0x10000c198 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c198  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c198_instrument);

    // Calculate and hook into FUN_10000c218
    addr= (void *)image + (0x10000c218 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c218  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c218_instrument);

    // Calculate and hook into FUN_10000c5d8
    addr= (void *)image + (0x10000c5d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c5d8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c5d8_instrument);

    // Calculate and hook into FUN_10000c63c
    addr= (void *)image + (0x10000c63c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c63c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c63c_instrument);

    // Calculate and hook into FUN_10000c918
    addr= (void *)image + (0x10000c918 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c918  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000c918_instrument);

    // Calculate and hook into FUN_10000cacc
    addr= (void *)image + (0x10000cacc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cacc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cacc_instrument);

    // Calculate and hook into FUN_10000cad8
    addr= (void *)image + (0x10000cad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cad8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cad8_instrument);

    // Calculate and hook into FUN_10000cb6c
    addr= (void *)image + (0x10000cb6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb6c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cb6c_instrument);

    // Calculate and hook into FUN_10000cb7c
    addr= (void *)image + (0x10000cb7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb7c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cb7c_instrument);

    // Calculate and hook into FUN_10000cb88
    addr= (void *)image + (0x10000cb88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb88  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cb88_instrument);

    // Calculate and hook into FUN_10000cbac
    addr= (void *)image + (0x10000cbac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cbac  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cbac_instrument);

    // Calculate and hook into FUN_10000cc60
    addr= (void *)image + (0x10000cc60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cc60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cc60_instrument);

    // Calculate and hook into FUN_10000cd14
    addr= (void *)image + (0x10000cd14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cd14  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cd14_instrument);

    // Calculate and hook into FUN_10000ce08
    addr= (void *)image + (0x10000ce08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ce08  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ce08_instrument);

    // Calculate and hook into FUN_10000cf68
    addr= (void *)image + (0x10000cf68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cf68  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000cf68_instrument);

    // Calculate and hook into FUN_10000d024
    addr= (void *)image + (0x10000d024 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d024  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d024_instrument);

    // Calculate and hook into FUN_10000d094
    addr= (void *)image + (0x10000d094 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d094  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d094_instrument);

    // Calculate and hook into FUN_10000d150
    addr= (void *)image + (0x10000d150 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d150  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d150_instrument);

    // Calculate and hook into FUN_10000d1c0
    addr= (void *)image + (0x10000d1c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d1c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d1c0_instrument);

    // Calculate and hook into FUN_10000d27c
    addr= (void *)image + (0x10000d27c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d27c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d27c_instrument);

    // Calculate and hook into FUN_10000d2ec
    addr= (void *)image + (0x10000d2ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d2ec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d2ec_instrument);

    // Calculate and hook into FUN_10000d364
    addr= (void *)image + (0x10000d364 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d364  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d364_instrument);

    // Calculate and hook into FUN_10000d4a4
    addr= (void *)image + (0x10000d4a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d4a4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000d4a4_instrument);

    // Calculate and hook into LoadKeyBagForUserSession
    addr= (void *)image + (0x10000d530 - BASEADDR);
    fprintf(f, "Pegou o addr LoadKeyBagForUserSession  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LoadKeyBagForUserSession_instrument);

    // Calculate and hook into SetAPFSVolumeIDforKeybag
    addr= (void *)image + (0x10000d8b8 - BASEADDR);
    fprintf(f, "Pegou o addr SetAPFSVolumeIDforKeybag  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SetAPFSVolumeIDforKeybag_instrument);

    // Calculate and hook into FUN_10000db5c
    addr= (void *)image + (0x10000db5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000db5c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000db5c_instrument);

    // Calculate and hook into FUN_10000ddf8
    addr= (void *)image + (0x10000ddf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ddf8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ddf8_instrument);

    // Calculate and hook into FUN_10000de00
    addr= (void *)image + (0x10000de00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000de00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000de00_instrument);

    // Calculate and hook into FUN_10000decc
    addr= (void *)image + (0x10000decc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000decc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000decc_instrument);

    // Calculate and hook into FUN_10000e140
    addr= (void *)image + (0x10000e140 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e140  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000e140_instrument);

    // Calculate and hook into FUN_10000e424
    addr= (void *)image + (0x10000e424 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e424  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000e424_instrument);

    // Calculate and hook into FUN_10000e6a0
    addr= (void *)image + (0x10000e6a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e6a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000e6a0_instrument);

    // Calculate and hook into FUN_10000e774
    addr= (void *)image + (0x10000e774 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e774  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000e774_instrument);

    // Calculate and hook into FUN_10000e844
    addr= (void *)image + (0x10000e844 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e844  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000e844_instrument);

    // Calculate and hook into FUN_10000ea00
    addr= (void *)image + (0x10000ea00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ea00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ea00_instrument);

    // Calculate and hook into thunk_FUN_10000b91c
    addr= (void *)image + (0x10000ebf0 - BASEADDR);
    fprintf(f, "Pegou o addr thunk_FUN_10000b91c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&thunk_FUN_10000b91c_instrument);

    // Calculate and hook into LogFunc
    addr= (void *)image + (0x10000ebf4 - BASEADDR);
    fprintf(f, "Pegou o addr LogFunc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&LogFunc_instrument);

    // Calculate and hook into FUN_10000ec2c
    addr= (void *)image + (0x10000ec2c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ec2c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ec2c_instrument);

    // Calculate and hook into FUN_10000ed60
    addr= (void *)image + (0x10000ed60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ed60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ed60_instrument);

    // Calculate and hook into FUN_10000ef4c
    addr= (void *)image + (0x10000ef4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ef4c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ef4c_instrument);

    // Calculate and hook into FUN_10000f07c
    addr= (void *)image + (0x10000f07c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f07c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f07c_instrument);

    // Calculate and hook into FUN_10000f17c
    addr= (void *)image + (0x10000f17c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f17c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f17c_instrument);

    // Calculate and hook into FUN_10000f220
    addr= (void *)image + (0x10000f220 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f220  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f220_instrument);

    // Calculate and hook into FUN_10000f2b4
    addr= (void *)image + (0x10000f2b4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f2b4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f2b4_instrument);

    // Calculate and hook into FUN_10000f304
    addr= (void *)image + (0x10000f304 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f304  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f304_instrument);

    // Calculate and hook into FUN_10000f3cc
    addr= (void *)image + (0x10000f3cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f3cc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f3cc_instrument);

    // Calculate and hook into FUN_10000f45c
    addr= (void *)image + (0x10000f45c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f45c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000f45c_instrument);

    // Calculate and hook into FUN_10000fa38
    addr= (void *)image + (0x10000fa38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fa38  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fa38_instrument);

    // Calculate and hook into FUN_10000fc6c
    addr= (void *)image + (0x10000fc6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fc6c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fc6c_instrument);

    // Calculate and hook into FUN_10000fccc
    addr= (void *)image + (0x10000fccc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fccc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fccc_instrument);

    // Calculate and hook into FUN_10000fd0c
    addr= (void *)image + (0x10000fd0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd0c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fd0c_instrument);

    // Calculate and hook into FUN_10000fd7c
    addr= (void *)image + (0x10000fd7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd7c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fd7c_instrument);

    // Calculate and hook into FUN_10000fde4
    addr= (void *)image + (0x10000fde4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fde4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fde4_instrument);

    // Calculate and hook into FUN_10000fdf8
    addr= (void *)image + (0x10000fdf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fdf8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fdf8_instrument);

    // Calculate and hook into FUN_10000fee0
    addr= (void *)image + (0x10000fee0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fee0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000fee0_instrument);

    // Calculate and hook into FUN_10000ff04
    addr= (void *)image + (0x10000ff04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ff04  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ff04_instrument);

    // Calculate and hook into FUN_10000ff18
    addr= (void *)image + (0x10000ff18 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ff18  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10000ff18_instrument);

    // Calculate and hook into FUN_100010204
    addr= (void *)image + (0x100010204 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010204  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010204_instrument);

    // Calculate and hook into keybagd_getpasscodeblob_block_invoke
    addr= (void *)image + (0x10001029c - BASEADDR);
    fprintf(f, "Pegou o addr keybagd_getpasscodeblob_block_invoke  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&keybagd_getpasscodeblob_block_invoke_instrument);

    // Calculate and hook into FUN_10001033c
    addr= (void *)image + (0x10001033c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001033c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001033c_instrument);

    // Calculate and hook into FUN_1000103d8
    addr= (void *)image + (0x1000103d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000103d8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000103d8_instrument);

    // Calculate and hook into FUN_100010484
    addr= (void *)image + (0x100010484 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010484  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010484_instrument);

    // Calculate and hook into FUN_1000105a0
    addr= (void *)image + (0x1000105a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000105a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000105a0_instrument);

    // Calculate and hook into FUN_100010650
    addr= (void *)image + (0x100010650 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010650  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010650_instrument);

    // Calculate and hook into FUN_100010780
    addr= (void *)image + (0x100010780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010780  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010780_instrument);

    // Calculate and hook into FUN_10001084c
    addr= (void *)image + (0x10001084c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001084c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001084c_instrument);

    // Calculate and hook into FUN_1000109d8
    addr= (void *)image + (0x1000109d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000109d8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000109d8_instrument);

    // Calculate and hook into FUN_100010ab0
    addr= (void *)image + (0x100010ab0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010ab0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010ab0_instrument);

    // Calculate and hook into FUN_100010c04
    addr= (void *)image + (0x100010c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010c04  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010c04_instrument);

    // Calculate and hook into FUN_100010ca8
    addr= (void *)image + (0x100010ca8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010ca8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010ca8_instrument);

    // Calculate and hook into FUN_100010dd0
    addr= (void *)image + (0x100010dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010dd0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010dd0_instrument);

    // Calculate and hook into keybagd_stashcreate_block_invoke
    addr= (void *)image + (0x100010f0c - BASEADDR);
    fprintf(f, "Pegou o addr keybagd_stashcreate_block_invoke  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&keybagd_stashcreate_block_invoke_instrument);

    // Calculate and hook into FUN_100010fe0
    addr= (void *)image + (0x100010fe0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010fe0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100010fe0_instrument);

    // Calculate and hook into FUN_10001101c
    addr= (void *)image + (0x10001101c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001101c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001101c_instrument);

    // Calculate and hook into FUN_10001104c
    addr= (void *)image + (0x10001104c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001104c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001104c_instrument);

    // Calculate and hook into FUN_1000110fc
    addr= (void *)image + (0x1000110fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000110fc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000110fc_instrument);

    // Calculate and hook into FUN_100011180
    addr= (void *)image + (0x100011180 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011180  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011180_instrument);

    // Calculate and hook into FUN_100011214
    addr= (void *)image + (0x100011214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011214  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011214_instrument);

    // Calculate and hook into FUN_10001126c
    addr= (void *)image + (0x10001126c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001126c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001126c_instrument);

    // Calculate and hook into FUN_10001137c
    addr= (void *)image + (0x10001137c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001137c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001137c_instrument);

    // Calculate and hook into FUN_10001141c
    addr= (void *)image + (0x10001141c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001141c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001141c_instrument);

    // Calculate and hook into FUN_100011468
    addr= (void *)image + (0x100011468 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011468  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011468_instrument);

    // Calculate and hook into FUN_1000114a4
    addr= (void *)image + (0x1000114a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000114a4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000114a4_instrument);

    // Calculate and hook into FUN_100011544
    addr= (void *)image + (0x100011544 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011544  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011544_instrument);

    // Calculate and hook into FUN_10001176c
    addr= (void *)image + (0x10001176c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001176c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001176c_instrument);

    // Calculate and hook into FUN_100011824
    addr= (void *)image + (0x100011824 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011824  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011824_instrument);

    // Calculate and hook into FUN_1000118d0
    addr= (void *)image + (0x1000118d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000118d0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000118d0_instrument);

    // Calculate and hook into FUN_100011968
    addr= (void *)image + (0x100011968 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011968  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011968_instrument);

    // Calculate and hook into FUN_1000119a8
    addr= (void *)image + (0x1000119a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000119a8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000119a8_instrument);

    // Calculate and hook into FUN_100011a34
    addr= (void *)image + (0x100011a34 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a34  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011a34_instrument);

    // Calculate and hook into FUN_100011a70
    addr= (void *)image + (0x100011a70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a70  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011a70_instrument);

    // Calculate and hook into FUN_100011c04
    addr= (void *)image + (0x100011c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011c04  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011c04_instrument);

    // Calculate and hook into FUN_100011ca0
    addr= (void *)image + (0x100011ca0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011ca0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011ca0_instrument);

    // Calculate and hook into FUN_100011da4
    addr= (void *)image + (0x100011da4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011da4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011da4_instrument);

    // Calculate and hook into FUN_100011e30
    addr= (void *)image + (0x100011e30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011e30  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011e30_instrument);

    // Calculate and hook into FUN_100011eb8
    addr= (void *)image + (0x100011eb8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011eb8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011eb8_instrument);

    // Calculate and hook into FUN_100011fb4
    addr= (void *)image + (0x100011fb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011fb4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011fb4_instrument);

    // Calculate and hook into FUN_100011ff0
    addr= (void *)image + (0x100011ff0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011ff0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100011ff0_instrument);

    // Calculate and hook into FUN_100012018
    addr= (void *)image + (0x100012018 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012018  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012018_instrument);

    // Calculate and hook into FUN_10001210c
    addr= (void *)image + (0x10001210c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001210c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001210c_instrument);

    // Calculate and hook into FUN_10001224c
    addr= (void *)image + (0x10001224c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001224c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001224c_instrument);

    // Calculate and hook into FUN_100012318
    addr= (void *)image + (0x100012318 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012318  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012318_instrument);

    // Calculate and hook into FUN_100012370
    addr= (void *)image + (0x100012370 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012370  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012370_instrument);

    // Calculate and hook into FUN_1000123c0
    addr= (void *)image + (0x1000123c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000123c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000123c0_instrument);

    // Calculate and hook into FUN_100012450
    addr= (void *)image + (0x100012450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012450  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012450_instrument);

    // Calculate and hook into FUN_100012468
    addr= (void *)image + (0x100012468 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012468  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012468_instrument);

    // Calculate and hook into FUN_100012564
    addr= (void *)image + (0x100012564 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012564  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012564_instrument);

    // Calculate and hook into FUN_100012580
    addr= (void *)image + (0x100012580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012580  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012580_instrument);

    // Calculate and hook into FUN_1000125d0
    addr= (void *)image + (0x1000125d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000125d0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000125d0_instrument);

    // Calculate and hook into InterageSEP
    addr= (void *)image + (0x100012698 - BASEADDR);
    fprintf(f, "Pegou o addr InterageSEP  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&InterageSEP_instrument);

    // Calculate and hook into FUN_100012758
    addr= (void *)image + (0x100012758 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012758  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012758_instrument);

    // Calculate and hook into FUN_1000127cc
    addr= (void *)image + (0x1000127cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000127cc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000127cc_instrument);

    // Calculate and hook into FUN_10001285c
    addr= (void *)image + (0x10001285c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001285c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001285c_instrument);

    // Calculate and hook into FUN_100012980
    addr= (void *)image + (0x100012980 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012980  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012980_instrument);

    // Calculate and hook into FUN_100012a9c
    addr= (void *)image + (0x100012a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012a9c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012a9c_instrument);

    // Calculate and hook into FUN_100012ad8
    addr= (void *)image + (0x100012ad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012ad8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012ad8_instrument);

    // Calculate and hook into FUN_100012aec
    addr= (void *)image + (0x100012aec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012aec  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012aec_instrument);

    // Calculate and hook into FUN_100012c44
    addr= (void *)image + (0x100012c44 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012c44  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012c44_instrument);

    // Calculate and hook into FUN_100012d04
    addr= (void *)image + (0x100012d04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012d04  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012d04_instrument);

    // Calculate and hook into FUN_100012dc8
    addr= (void *)image + (0x100012dc8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012dc8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012dc8_instrument);

    // Calculate and hook into SetBagHandleForUID
    addr= (void *)image + (0x100012e78 - BASEADDR);
    fprintf(f, "Pegou o addr SetBagHandleForUID  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&SetBagHandleForUID_instrument);

    // Calculate and hook into FUN_100012e84
    addr= (void *)image + (0x100012e84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e84  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012e84_instrument);

    // Calculate and hook into FUN_100012e98
    addr= (void *)image + (0x100012e98 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e98  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012e98_instrument);

    // Calculate and hook into FUN_100012ea4
    addr= (void *)image + (0x100012ea4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012ea4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012ea4_instrument);

    // Calculate and hook into FUN_100012fb8
    addr= (void *)image + (0x100012fb8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012fb8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100012fb8_instrument);

    // Calculate and hook into FUN_100013104
    addr= (void *)image + (0x100013104 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013104  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013104_instrument);

    // Calculate and hook into FUN_1000131b4
    addr= (void *)image + (0x1000131b4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000131b4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000131b4_instrument);

    // Calculate and hook into FUN_1000132b0
    addr= (void *)image + (0x1000132b0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000132b0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000132b0_instrument);

    // Calculate and hook into updateofGraceperiodFORUSER
    addr= (void *)image + (0x100013398 - BASEADDR);
    fprintf(f, "Pegou o addr updateofGraceperiodFORUSER  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&updateofGraceperiodFORUSER_instrument);

    // Calculate and hook into FUN_100013624
    addr= (void *)image + (0x100013624 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013624  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013624_instrument);

    // Calculate and hook into FUN_100013728
    addr= (void *)image + (0x100013728 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013728  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013728_instrument);

    // Calculate and hook into FUN_100013820
    addr= (void *)image + (0x100013820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013820  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013820_instrument);

    // Calculate and hook into FUN_100013868
    addr= (void *)image + (0x100013868 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013868  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013868_instrument);

    // Calculate and hook into FUN_1000139f8
    addr= (void *)image + (0x1000139f8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000139f8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000139f8_instrument);

    // Calculate and hook into FUN_100013a88
    addr= (void *)image + (0x100013a88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013a88  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013a88_instrument);

    // Calculate and hook into FUN_100013bfc
    addr= (void *)image + (0x100013bfc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013bfc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013bfc_instrument);

    // Calculate and hook into FUN_100013c08
    addr= (void *)image + (0x100013c08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013c08  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013c08_instrument);

    // Calculate and hook into FUN_100013cf4
    addr= (void *)image + (0x100013cf4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013cf4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013cf4_instrument);

    // Calculate and hook into FUN_100013d00
    addr= (void *)image + (0x100013d00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013d00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013d00_instrument);

    // Calculate and hook into FUN_100013d8c
    addr= (void *)image + (0x100013d8c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013d8c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013d8c_instrument);

    // Calculate and hook into FUN_100013e14
    addr= (void *)image + (0x100013e14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013e14  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013e14_instrument);

    // Calculate and hook into FUN_100013e28
    addr= (void *)image + (0x100013e28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013e28  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013e28_instrument);

    // Calculate and hook into FUN_100013fa0
    addr= (void *)image + (0x100013fa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fa0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013fa0_instrument);

    // Calculate and hook into FUN_100013fcc
    addr= (void *)image + (0x100013fcc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fcc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100013fcc_instrument);

    // Calculate and hook into FUN_10001410c
    addr= (void *)image + (0x10001410c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001410c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001410c_instrument);

    // Calculate and hook into FUN_1000141b8
    addr= (void *)image + (0x1000141b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000141b8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000141b8_instrument);

    // Calculate and hook into FUN_1000142dc
    addr= (void *)image + (0x1000142dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000142dc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000142dc_instrument);

    // Calculate and hook into FUN_1000142f4
    addr= (void *)image + (0x1000142f4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000142f4  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000142f4_instrument);

    // Calculate and hook into FUN_100014390
    addr= (void *)image + (0x100014390 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014390  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014390_instrument);

    // Calculate and hook into FUN_1000144f0
    addr= (void *)image + (0x1000144f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000144f0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000144f0_instrument);

    // Calculate and hook into FUN_100014578
    addr= (void *)image + (0x100014578 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014578  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014578_instrument);

    // Calculate and hook into FUN_1000145f0
    addr= (void *)image + (0x1000145f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000145f0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000145f0_instrument);

    // Calculate and hook into FUN_100014a0c
    addr= (void *)image + (0x100014a0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014a0c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014a0c_instrument);

    // Calculate and hook into FUN_100014c44
    addr= (void *)image + (0x100014c44 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014c44  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014c44_instrument);

    // Calculate and hook into FUN_100014d08
    addr= (void *)image + (0x100014d08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014d08  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014d08_instrument);

    // Calculate and hook into FUN_100014e00
    addr= (void *)image + (0x100014e00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014e00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014e00_instrument);

    // Calculate and hook into FUN_100014ed0
    addr= (void *)image + (0x100014ed0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014ed0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014ed0_instrument);

    // Calculate and hook into FUN_100014fac
    addr= (void *)image + (0x100014fac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014fac  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100014fac_instrument);

    // Calculate and hook into FUN_100015034
    addr= (void *)image + (0x100015034 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015034  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015034_instrument);

    // Calculate and hook into FUN_1000150ac
    addr= (void *)image + (0x1000150ac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000150ac  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000150ac_instrument);

    // Calculate and hook into FUN_100015214
    addr= (void *)image + (0x100015214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015214  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015214_instrument);

    // Calculate and hook into FUN_1000153b8
    addr= (void *)image + (0x1000153b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000153b8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000153b8_instrument);

    // Calculate and hook into FUN_1000154f8
    addr= (void *)image + (0x1000154f8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000154f8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000154f8_instrument);

    // Calculate and hook into FUN_100015630
    addr= (void *)image + (0x100015630 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015630  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015630_instrument);

    // Calculate and hook into FUN_1000157fc
    addr= (void *)image + (0x1000157fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000157fc  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000157fc_instrument);

    // Calculate and hook into FUN_10001580c
    addr= (void *)image + (0x10001580c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001580c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_10001580c_instrument);

    // Calculate and hook into FUN_100015874
    addr= (void *)image + (0x100015874 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015874  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015874_instrument);

    // Calculate and hook into FUN_100015a84
    addr= (void *)image + (0x100015a84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015a84  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015a84_instrument);

    // Calculate and hook into FUN_100015b10
    addr= (void *)image + (0x100015b10 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015b10  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015b10_instrument);

    // Calculate and hook into FUN_100015be8
    addr= (void *)image + (0x100015be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015be8  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015be8_instrument);

    // Calculate and hook into FUN_100015c4c
    addr= (void *)image + (0x100015c4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015c4c  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015c4c_instrument);

    // Calculate and hook into FUN_100015cb0
    addr= (void *)image + (0x100015cb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015cb0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015cb0_instrument);

    // Calculate and hook into FUN_100015d14
    addr= (void *)image + (0x100015d14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015d14  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100015d14_instrument);

    // Calculate and hook into FUN_100017440
    addr= (void *)image + (0x100017440 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017440  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017440_instrument);

    // Calculate and hook into FUN_100017460
    addr= (void *)image + (0x100017460 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017460  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017460_instrument);

    // Calculate and hook into FUN_100017480
    addr= (void *)image + (0x100017480 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017480  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017480_instrument);

    // Calculate and hook into FUN_1000174a0
    addr= (void *)image + (0x1000174a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000174a0_instrument);

    // Calculate and hook into FUN_1000174c0
    addr= (void *)image + (0x1000174c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000174c0_instrument);

    // Calculate and hook into FUN_1000174e0
    addr= (void *)image + (0x1000174e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000174e0_instrument);

    // Calculate and hook into FUN_100017500
    addr= (void *)image + (0x100017500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017500  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017500_instrument);

    // Calculate and hook into FUN_100017520
    addr= (void *)image + (0x100017520 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017520  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017520_instrument);

    // Calculate and hook into FUN_100017540
    addr= (void *)image + (0x100017540 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017540  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017540_instrument);

    // Calculate and hook into FUN_100017560
    addr= (void *)image + (0x100017560 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017560  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017560_instrument);

    // Calculate and hook into FUN_100017580
    addr= (void *)image + (0x100017580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017580  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017580_instrument);

    // Calculate and hook into FUN_1000175a0
    addr= (void *)image + (0x1000175a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000175a0_instrument);

    // Calculate and hook into FUN_1000175c0
    addr= (void *)image + (0x1000175c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000175c0_instrument);

    // Calculate and hook into FUN_1000175e0
    addr= (void *)image + (0x1000175e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000175e0_instrument);

    // Calculate and hook into FUN_100017600
    addr= (void *)image + (0x100017600 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017600  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017600_instrument);

    // Calculate and hook into FUN_100017620
    addr= (void *)image + (0x100017620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017620  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017620_instrument);

    // Calculate and hook into FUN_100017640
    addr= (void *)image + (0x100017640 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017640  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017640_instrument);

    // Calculate and hook into FUN_100017660
    addr= (void *)image + (0x100017660 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017660  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017660_instrument);

    // Calculate and hook into FUN_100017680
    addr= (void *)image + (0x100017680 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017680  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017680_instrument);

    // Calculate and hook into FUN_1000176a0
    addr= (void *)image + (0x1000176a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000176a0_instrument);

    // Calculate and hook into FUN_1000176c0
    addr= (void *)image + (0x1000176c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000176c0_instrument);

    // Calculate and hook into FUN_1000176e0
    addr= (void *)image + (0x1000176e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000176e0_instrument);

    // Calculate and hook into FUN_100017700
    addr= (void *)image + (0x100017700 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017700  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017700_instrument);

    // Calculate and hook into FUN_100017720
    addr= (void *)image + (0x100017720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017720  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017720_instrument);

    // Calculate and hook into FUN_100017740
    addr= (void *)image + (0x100017740 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017740  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017740_instrument);

    // Calculate and hook into FUN_100017760
    addr= (void *)image + (0x100017760 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017760  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017760_instrument);

    // Calculate and hook into FUN_100017780
    addr= (void *)image + (0x100017780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017780  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017780_instrument);

    // Calculate and hook into FUN_1000177a0
    addr= (void *)image + (0x1000177a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000177a0_instrument);

    // Calculate and hook into FUN_1000177c0
    addr= (void *)image + (0x1000177c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000177c0_instrument);

    // Calculate and hook into FUN_1000177e0
    addr= (void *)image + (0x1000177e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000177e0_instrument);

    // Calculate and hook into FUN_100017800
    addr= (void *)image + (0x100017800 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017800  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017800_instrument);

    // Calculate and hook into FUN_100017820
    addr= (void *)image + (0x100017820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017820  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017820_instrument);

    // Calculate and hook into FUN_100017840
    addr= (void *)image + (0x100017840 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017840  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017840_instrument);

    // Calculate and hook into FUN_100017860
    addr= (void *)image + (0x100017860 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017860  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017860_instrument);

    // Calculate and hook into FUN_100017880
    addr= (void *)image + (0x100017880 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017880  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017880_instrument);

    // Calculate and hook into FUN_1000178a0
    addr= (void *)image + (0x1000178a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000178a0_instrument);

    // Calculate and hook into FUN_1000178c0
    addr= (void *)image + (0x1000178c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000178c0_instrument);

    // Calculate and hook into FUN_1000178e0
    // addr= (void *)image + (0x1000178e0 - BASEADDR);
    // fprintf(f, "Pegou o addr FUN_1000178e0  %x \n", (uint64_t)addr);
    // MSInstrumentFunction(addr, (void *)&FUN_1000178e0_instrument);

    // Calculate and hook into FUN_100017900
    addr= (void *)image + (0x100017900 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017900  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017900_instrument);

    // Calculate and hook into FUN_100017920
    addr= (void *)image + (0x100017920 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017920  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017920_instrument);

    // Calculate and hook into FUN_100017940
    addr= (void *)image + (0x100017940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017940  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017940_instrument);

    // Calculate and hook into FUN_100017960
    addr= (void *)image + (0x100017960 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017960  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017960_instrument);

    // Calculate and hook into FUN_100017980
    addr= (void *)image + (0x100017980 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017980  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017980_instrument);

    // Calculate and hook into FUN_1000179a0
    addr= (void *)image + (0x1000179a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179a0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000179a0_instrument);

    // Calculate and hook into FUN_1000179c0
    addr= (void *)image + (0x1000179c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179c0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000179c0_instrument);

    // Calculate and hook into FUN_1000179e0
    addr= (void *)image + (0x1000179e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179e0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_1000179e0_instrument);

    // Calculate and hook into FUN_100017a00
    addr= (void *)image + (0x100017a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017a00_instrument);

    // Calculate and hook into FUN_100017a20
    addr= (void *)image + (0x100017a20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a20  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017a20_instrument);

    // Calculate and hook into FUN_100017a40
    addr= (void *)image + (0x100017a40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a40  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017a40_instrument);

    // Calculate and hook into FUN_100017a60
    addr= (void *)image + (0x100017a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017a60_instrument);

    // Calculate and hook into FUN_100017a80
    addr= (void *)image + (0x100017a80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a80  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017a80_instrument);

    // Calculate and hook into FUN_100017aa0
    addr= (void *)image + (0x100017aa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017aa0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017aa0_instrument);

    // Calculate and hook into FUN_100017ac0
    addr= (void *)image + (0x100017ac0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ac0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017ac0_instrument);

    // Calculate and hook into FUN_100017ae0
    addr= (void *)image + (0x100017ae0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ae0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017ae0_instrument);

    // Calculate and hook into FUN_100017b00
    addr= (void *)image + (0x100017b00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017b00_instrument);

    // Calculate and hook into FUN_100017b20
    addr= (void *)image + (0x100017b20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b20  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017b20_instrument);

    // Calculate and hook into FUN_100017b40
    addr= (void *)image + (0x100017b40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b40  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017b40_instrument);

    // Calculate and hook into FUN_100017b60
    addr= (void *)image + (0x100017b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b60  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017b60_instrument);

    // Calculate and hook into FUN_100017b80
    addr= (void *)image + (0x100017b80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b80  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017b80_instrument);

    // Calculate and hook into FUN_100017ba0
    addr= (void *)image + (0x100017ba0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ba0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017ba0_instrument);

    // Calculate and hook into FUN_100017bc0
    addr= (void *)image + (0x100017bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017bc0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017bc0_instrument);

    // Calculate and hook into FUN_100017be0
    addr= (void *)image + (0x100017be0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017be0  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017be0_instrument);

    // Calculate and hook into FUN_100017c00
    addr= (void *)image + (0x100017c00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017c00  %x \n", (uint64_t)addr);
    MSInstrumentFunction(addr, (void *)&FUN_100017c00_instrument);
}
