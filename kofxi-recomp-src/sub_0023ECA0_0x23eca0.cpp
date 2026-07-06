#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023ECA0
// Address: 0x23eca0 - 0x23f1c8
void sub_0023ECA0_0x23eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ECA0_0x23eca0");
#endif

    switch (ctx->pc) {
        case 0x23eca0u: goto label_23eca0;
        case 0x23eca4u: goto label_23eca4;
        case 0x23eca8u: goto label_23eca8;
        case 0x23ecacu: goto label_23ecac;
        case 0x23ecb0u: goto label_23ecb0;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ecb8u: goto label_23ecb8;
        case 0x23ecbcu: goto label_23ecbc;
        case 0x23ecc0u: goto label_23ecc0;
        case 0x23ecc4u: goto label_23ecc4;
        case 0x23ecc8u: goto label_23ecc8;
        case 0x23ecccu: goto label_23eccc;
        case 0x23ecd0u: goto label_23ecd0;
        case 0x23ecd4u: goto label_23ecd4;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ecdcu: goto label_23ecdc;
        case 0x23ece0u: goto label_23ece0;
        case 0x23ece4u: goto label_23ece4;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ececu: goto label_23ecec;
        case 0x23ecf0u: goto label_23ecf0;
        case 0x23ecf4u: goto label_23ecf4;
        case 0x23ecf8u: goto label_23ecf8;
        case 0x23ecfcu: goto label_23ecfc;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ed04u: goto label_23ed04;
        case 0x23ed08u: goto label_23ed08;
        case 0x23ed0cu: goto label_23ed0c;
        case 0x23ed10u: goto label_23ed10;
        case 0x23ed14u: goto label_23ed14;
        case 0x23ed18u: goto label_23ed18;
        case 0x23ed1cu: goto label_23ed1c;
        case 0x23ed20u: goto label_23ed20;
        case 0x23ed24u: goto label_23ed24;
        case 0x23ed28u: goto label_23ed28;
        case 0x23ed2cu: goto label_23ed2c;
        case 0x23ed30u: goto label_23ed30;
        case 0x23ed34u: goto label_23ed34;
        case 0x23ed38u: goto label_23ed38;
        case 0x23ed3cu: goto label_23ed3c;
        case 0x23ed40u: goto label_23ed40;
        case 0x23ed44u: goto label_23ed44;
        case 0x23ed48u: goto label_23ed48;
        case 0x23ed4cu: goto label_23ed4c;
        case 0x23ed50u: goto label_23ed50;
        case 0x23ed54u: goto label_23ed54;
        case 0x23ed58u: goto label_23ed58;
        case 0x23ed5cu: goto label_23ed5c;
        case 0x23ed60u: goto label_23ed60;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed68u: goto label_23ed68;
        case 0x23ed6cu: goto label_23ed6c;
        case 0x23ed70u: goto label_23ed70;
        case 0x23ed74u: goto label_23ed74;
        case 0x23ed78u: goto label_23ed78;
        case 0x23ed7cu: goto label_23ed7c;
        case 0x23ed80u: goto label_23ed80;
        case 0x23ed84u: goto label_23ed84;
        case 0x23ed88u: goto label_23ed88;
        case 0x23ed8cu: goto label_23ed8c;
        case 0x23ed90u: goto label_23ed90;
        case 0x23ed94u: goto label_23ed94;
        case 0x23ed98u: goto label_23ed98;
        case 0x23ed9cu: goto label_23ed9c;
        case 0x23eda0u: goto label_23eda0;
        case 0x23eda4u: goto label_23eda4;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edacu: goto label_23edac;
        case 0x23edb0u: goto label_23edb0;
        case 0x23edb4u: goto label_23edb4;
        case 0x23edb8u: goto label_23edb8;
        case 0x23edbcu: goto label_23edbc;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edc4u: goto label_23edc4;
        case 0x23edc8u: goto label_23edc8;
        case 0x23edccu: goto label_23edcc;
        case 0x23edd0u: goto label_23edd0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23edd8u: goto label_23edd8;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ede0u: goto label_23ede0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ede8u: goto label_23ede8;
        case 0x23edecu: goto label_23edec;
        case 0x23edf0u: goto label_23edf0;
        case 0x23edf4u: goto label_23edf4;
        case 0x23edf8u: goto label_23edf8;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee00u: goto label_23ee00;
        case 0x23ee04u: goto label_23ee04;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee0cu: goto label_23ee0c;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee18u: goto label_23ee18;
        case 0x23ee1cu: goto label_23ee1c;
        case 0x23ee20u: goto label_23ee20;
        case 0x23ee24u: goto label_23ee24;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee34u: goto label_23ee34;
        case 0x23ee38u: goto label_23ee38;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee40u: goto label_23ee40;
        case 0x23ee44u: goto label_23ee44;
        case 0x23ee48u: goto label_23ee48;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee50u: goto label_23ee50;
        case 0x23ee54u: goto label_23ee54;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee5cu: goto label_23ee5c;
        case 0x23ee60u: goto label_23ee60;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee6cu: goto label_23ee6c;
        case 0x23ee70u: goto label_23ee70;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee78u: goto label_23ee78;
        case 0x23ee7cu: goto label_23ee7c;
        case 0x23ee80u: goto label_23ee80;
        case 0x23ee84u: goto label_23ee84;
        case 0x23ee88u: goto label_23ee88;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee90u: goto label_23ee90;
        case 0x23ee94u: goto label_23ee94;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eea0u: goto label_23eea0;
        case 0x23eea4u: goto label_23eea4;
        case 0x23eea8u: goto label_23eea8;
        case 0x23eeacu: goto label_23eeac;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eeb4u: goto label_23eeb4;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eebcu: goto label_23eebc;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eec8u: goto label_23eec8;
        case 0x23eeccu: goto label_23eecc;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eed4u: goto label_23eed4;
        case 0x23eed8u: goto label_23eed8;
        case 0x23eedcu: goto label_23eedc;
        case 0x23eee0u: goto label_23eee0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eee8u: goto label_23eee8;
        case 0x23eeecu: goto label_23eeec;
        case 0x23eef0u: goto label_23eef0;
        case 0x23eef4u: goto label_23eef4;
        case 0x23eef8u: goto label_23eef8;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef00u: goto label_23ef00;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef08u: goto label_23ef08;
        case 0x23ef0cu: goto label_23ef0c;
        case 0x23ef10u: goto label_23ef10;
        case 0x23ef14u: goto label_23ef14;
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        case 0x23efd8u: goto label_23efd8;
        case 0x23efdcu: goto label_23efdc;
        case 0x23efe0u: goto label_23efe0;
        case 0x23efe4u: goto label_23efe4;
        case 0x23efe8u: goto label_23efe8;
        case 0x23efecu: goto label_23efec;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff4u: goto label_23eff4;
        case 0x23eff8u: goto label_23eff8;
        case 0x23effcu: goto label_23effc;
        case 0x23f000u: goto label_23f000;
        case 0x23f004u: goto label_23f004;
        case 0x23f008u: goto label_23f008;
        case 0x23f00cu: goto label_23f00c;
        case 0x23f010u: goto label_23f010;
        case 0x23f014u: goto label_23f014;
        case 0x23f018u: goto label_23f018;
        case 0x23f01cu: goto label_23f01c;
        case 0x23f020u: goto label_23f020;
        case 0x23f024u: goto label_23f024;
        case 0x23f028u: goto label_23f028;
        case 0x23f02cu: goto label_23f02c;
        case 0x23f030u: goto label_23f030;
        case 0x23f034u: goto label_23f034;
        case 0x23f038u: goto label_23f038;
        case 0x23f03cu: goto label_23f03c;
        case 0x23f040u: goto label_23f040;
        case 0x23f044u: goto label_23f044;
        case 0x23f048u: goto label_23f048;
        case 0x23f04cu: goto label_23f04c;
        case 0x23f050u: goto label_23f050;
        case 0x23f054u: goto label_23f054;
        case 0x23f058u: goto label_23f058;
        case 0x23f05cu: goto label_23f05c;
        case 0x23f060u: goto label_23f060;
        case 0x23f064u: goto label_23f064;
        case 0x23f068u: goto label_23f068;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f070u: goto label_23f070;
        case 0x23f074u: goto label_23f074;
        case 0x23f078u: goto label_23f078;
        case 0x23f07cu: goto label_23f07c;
        case 0x23f080u: goto label_23f080;
        case 0x23f084u: goto label_23f084;
        case 0x23f088u: goto label_23f088;
        case 0x23f08cu: goto label_23f08c;
        case 0x23f090u: goto label_23f090;
        case 0x23f094u: goto label_23f094;
        case 0x23f098u: goto label_23f098;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0a0u: goto label_23f0a0;
        case 0x23f0a4u: goto label_23f0a4;
        case 0x23f0a8u: goto label_23f0a8;
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0b4u: goto label_23f0b4;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0bcu: goto label_23f0bc;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0c8u: goto label_23f0c8;
        case 0x23f0ccu: goto label_23f0cc;
        case 0x23f0d0u: goto label_23f0d0;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0dcu: goto label_23f0dc;
        case 0x23f0e0u: goto label_23f0e0;
        case 0x23f0e4u: goto label_23f0e4;
        case 0x23f0e8u: goto label_23f0e8;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f0f4u: goto label_23f0f4;
        case 0x23f0f8u: goto label_23f0f8;
        case 0x23f0fcu: goto label_23f0fc;
        case 0x23f100u: goto label_23f100;
        case 0x23f104u: goto label_23f104;
        case 0x23f108u: goto label_23f108;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f110u: goto label_23f110;
        case 0x23f114u: goto label_23f114;
        case 0x23f118u: goto label_23f118;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f120u: goto label_23f120;
        case 0x23f124u: goto label_23f124;
        case 0x23f128u: goto label_23f128;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f130u: goto label_23f130;
        case 0x23f134u: goto label_23f134;
        case 0x23f138u: goto label_23f138;
        case 0x23f13cu: goto label_23f13c;
        case 0x23f140u: goto label_23f140;
        case 0x23f144u: goto label_23f144;
        case 0x23f148u: goto label_23f148;
        case 0x23f14cu: goto label_23f14c;
        case 0x23f150u: goto label_23f150;
        case 0x23f154u: goto label_23f154;
        case 0x23f158u: goto label_23f158;
        case 0x23f15cu: goto label_23f15c;
        case 0x23f160u: goto label_23f160;
        case 0x23f164u: goto label_23f164;
        case 0x23f168u: goto label_23f168;
        case 0x23f16cu: goto label_23f16c;
        case 0x23f170u: goto label_23f170;
        case 0x23f174u: goto label_23f174;
        case 0x23f178u: goto label_23f178;
        case 0x23f17cu: goto label_23f17c;
        case 0x23f180u: goto label_23f180;
        case 0x23f184u: goto label_23f184;
        case 0x23f188u: goto label_23f188;
        case 0x23f18cu: goto label_23f18c;
        case 0x23f190u: goto label_23f190;
        case 0x23f194u: goto label_23f194;
        case 0x23f198u: goto label_23f198;
        case 0x23f19cu: goto label_23f19c;
        case 0x23f1a0u: goto label_23f1a0;
        case 0x23f1a4u: goto label_23f1a4;
        case 0x23f1a8u: goto label_23f1a8;
        case 0x23f1acu: goto label_23f1ac;
        case 0x23f1b0u: goto label_23f1b0;
        case 0x23f1b4u: goto label_23f1b4;
        case 0x23f1b8u: goto label_23f1b8;
        case 0x23f1bcu: goto label_23f1bc;
        case 0x23f1c0u: goto label_23f1c0;
        case 0x23f1c4u: goto label_23f1c4;
        default: break;
    }

    ctx->pc = 0x23eca0u;

label_23eca0:
    // 0x23eca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23eca4:
    // 0x23eca4: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x23eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
label_23eca8:
    // 0x23eca8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x23eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
label_23ecac:
    // 0x23ecac: 0xac8001a8  sw          $zero, 0x1A8($a0)
    ctx->pc = 0x23ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 0));
label_23ecb0:
    // 0x23ecb0: 0x3e00008  jr          $ra
label_23ecb4:
    if (ctx->pc == 0x23ECB4u) {
        ctx->pc = 0x23ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB0u;
        // 0x23ecb4: 0xac800148  sw          $zero, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECB8u;
        goto label_23ecb8;
    }
    ctx->pc = 0x23ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB0u;
        // 0x23ecb4: 0xac800148  sw          $zero, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ECB8u;
label_23ecb8:
    // 0x23ecb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ecb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23ecbc:
    // 0x23ecbc: 0x3403c223  ori         $v1, $zero, 0xC223
    ctx->pc = 0x23ecbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23ecc0:
    // 0x23ecc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23ecc4:
    // 0x23ecc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23ecc8:
    // 0x23ecc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ecc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23eccc:
    // 0x23eccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ecd0:
    // 0x23ecd0: 0x9622423c  lhu         $v0, 0x423C($s1)
    ctx->pc = 0x23ecd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16956)));
label_23ecd4:
    // 0x23ecd4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_23ecd8:
    if (ctx->pc == 0x23ECD8u) {
        ctx->pc = 0x23ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD4u;
        // 0x23ecd8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECDCu;
        goto label_23ecdc;
    }
    ctx->pc = 0x23ECD4u;
    {
        const bool branch_taken_0x23ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD4u;
        // 0x23ecd8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecd4) {
            ctx->pc = 0x23ED28u;
            goto label_23ed28;
        }
    }
    ctx->pc = 0x23ECDCu;
label_23ecdc:
    // 0x23ecdc: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_23ece0:
    // 0x23ece0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23ece4:
    // 0x23ece4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_23ece8:
    if (ctx->pc == 0x23ECE8u) {
        ctx->pc = 0x23ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECE4u;
        // 0x23ece8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECECu;
        goto label_23ecec;
    }
    ctx->pc = 0x23ECE4u;
    {
        const bool branch_taken_0x23ece4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ece4) {
            ctx->pc = 0x23ECE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ECE4u;
            // 0x23ece8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED2Cu;
            goto label_23ed2c;
        }
    }
    ctx->pc = 0x23ECECu;
label_23ecec:
    // 0x23ecec: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ecf0:
    // 0x23ecf0: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
label_23ecf4:
    // 0x23ecf4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23ecf8:
    // 0x23ecf8: 0x40f809  jalr        $v0
label_23ecfc:
    if (ctx->pc == 0x23ECFCu) {
        ctx->pc = 0x23ED00u;
        goto label_23ed00;
    }
    ctx->pc = 0x23ECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23ED00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ECF8u, 0x23ED00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23ED00u;
label_23ed00:
    // 0x23ed00: 0x8e234244  lw          $v1, 0x4244($s1)
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16964)));
label_23ed04:
    // 0x23ed04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ed08:
    // 0x23ed08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ed0c:
    // 0x23ed0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23ed0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23ed10:
    // 0x23ed10: 0xae230190  sw          $v1, 0x190($s1)
    ctx->pc = 0x23ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 3));
label_23ed14:
    // 0x23ed14: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23ed14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23ed18:
    // 0x23ed18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ed18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ed1c:
    // 0x23ed1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ed1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ed20:
    // 0x23ed20: 0x808eef2  j           func_23BBC8
label_23ed24:
    if (ctx->pc == 0x23ED24u) {
        ctx->pc = 0x23ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED20u;
        // 0x23ed24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED28u;
        goto label_23ed28;
    }
    ctx->pc = 0x23ED20u;
    ctx->pc = 0x23ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED20u;
    // 0x23ed24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23ED28u;
label_23ed28:
    // 0x23ed28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ed28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ed2c:
    // 0x23ed2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ed2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ed30:
    // 0x23ed30: 0x3e00008  jr          $ra
label_23ed34:
    if (ctx->pc == 0x23ED34u) {
        ctx->pc = 0x23ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED30u;
        // 0x23ed34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED38u;
        goto label_23ed38;
    }
    ctx->pc = 0x23ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED30u;
        // 0x23ed34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ED38u;
label_23ed38:
    // 0x23ed38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ed3c:
    // 0x23ed3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ed40:
    // 0x23ed40: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x23ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
label_23ed44:
    // 0x23ed44: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_23ed48:
    if (ctx->pc == 0x23ED48u) {
        ctx->pc = 0x23ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED44u;
        // 0x23ed48: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED4Cu;
        goto label_23ed4c;
    }
    ctx->pc = 0x23ED44u;
    {
        const bool branch_taken_0x23ed44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED44u;
        // 0x23ed48: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed44) {
            ctx->pc = 0x23ED58u;
            goto label_23ed58;
        }
    }
    ctx->pc = 0x23ED4Cu;
label_23ed4c:
    // 0x23ed4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ed50:
    // 0x23ed50: 0x808eef2  j           func_23BBC8
label_23ed54:
    if (ctx->pc == 0x23ED54u) {
        ctx->pc = 0x23ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED50u;
        // 0x23ed54: 0x24845180  addiu       $a0, $a0, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED58u;
        goto label_23ed58;
    }
    ctx->pc = 0x23ED50u;
    ctx->pc = 0x23ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED50u;
    // 0x23ed54: 0x24845180  addiu       $a0, $a0, 0x5180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23ED58u;
label_23ed58:
    // 0x23ed58: 0x3e00008  jr          $ra
label_23ed5c:
    if (ctx->pc == 0x23ED5Cu) {
        ctx->pc = 0x23ED60u;
        goto label_23ed60;
    }
    ctx->pc = 0x23ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ED60u;
label_23ed60:
    // 0x23ed60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23ed64:
    // 0x23ed64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23ed68:
    // 0x23ed68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23ed68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ed6c:
    // 0x23ed6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23ed70:
    // 0x23ed70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23ed74:
    // 0x23ed74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ed78:
    // 0x23ed78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23ed7c:
    // 0x23ed7c: 0xc08c682  jal         func_231A08
label_23ed80:
    if (ctx->pc == 0x23ED80u) {
        ctx->pc = 0x23ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED7Cu;
        // 0x23ed80: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED84u;
        goto label_23ed84;
    }
    ctx->pc = 0x23ED7Cu;
    SET_GPR_U32(ctx, 31, 0x23ED84u);
    ctx->pc = 0x23ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED7Cu;
    // 0x23ed80: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23ED7Cu, 0x23ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED84u;
label_23ed84:
    // 0x23ed84: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ed88:
    // 0x23ed88: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_23ed8c:
    // 0x23ed8c: 0x26105e38  addiu       $s0, $s0, 0x5E38
    ctx->pc = 0x23ed8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24120));
label_23ed90:
    // 0x23ed90: 0xc09038e  jal         func_240E38
label_23ed94:
    if (ctx->pc == 0x23ED94u) {
        ctx->pc = 0x23ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED90u;
        // 0x23ed94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED98u;
        goto label_23ed98;
    }
    ctx->pc = 0x23ED90u;
    SET_GPR_U32(ctx, 31, 0x23ED98u);
    ctx->pc = 0x23ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED90u;
    // 0x23ed94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23ED90u, 0x23ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED98u;
label_23ed98:
    // 0x23ed98: 0x8e480190  lw          $t0, 0x190($s2)
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_23ed9c:
    // 0x23ed9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eda0:
    // 0x23eda0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23eda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23eda4:
    // 0x23eda4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23eda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23eda8:
    // 0x23eda8: 0xc08b5ac  jal         func_22D6B0
label_23edac:
    if (ctx->pc == 0x23EDACu) {
        ctx->pc = 0x23EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA8u;
        // 0x23edac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDB0u;
        goto label_23edb0;
    }
    ctx->pc = 0x23EDA8u;
    SET_GPR_U32(ctx, 31, 0x23EDB0u);
    ctx->pc = 0x23EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDA8u;
    // 0x23edac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EDA8u, 0x23EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDB0u;
label_23edb0:
    // 0x23edb0: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_23edb4:
    // 0x23edb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23edb8:
    // 0x23edb8: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_23edbc:
    if (ctx->pc == 0x23EDBCu) {
        ctx->pc = 0x23EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB8u;
        // 0x23edbc: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDC0u;
        goto label_23edc0;
    }
    ctx->pc = 0x23EDB8u;
    {
        const bool branch_taken_0x23edb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB8u;
        // 0x23edbc: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edb8) {
            ctx->pc = 0x23EDFCu;
            goto label_23edfc;
        }
    }
    ctx->pc = 0x23EDC0u;
label_23edc0:
    // 0x23edc0: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x23edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_23edc4:
    // 0x23edc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23edc8:
    // 0x23edc8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_23edcc:
    if (ctx->pc == 0x23EDCCu) {
        ctx->pc = 0x23EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC8u;
        // 0x23edcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDD0u;
        goto label_23edd0;
    }
    ctx->pc = 0x23EDC8u;
    {
        const bool branch_taken_0x23edc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC8u;
        // 0x23edcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edc8) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EDD0u;
label_23edd0:
    // 0x23edd0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23edd4:
    // 0x23edd4: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
label_23edd8:
    // 0x23edd8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23eddc:
    // 0x23eddc: 0x40f809  jalr        $v0
label_23ede0:
    if (ctx->pc == 0x23EDE0u) {
        ctx->pc = 0x23EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDDCu;
        // 0x23ede0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDE4u;
        goto label_23ede4;
    }
    ctx->pc = 0x23EDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EDE4u);
        ctx->pc = 0x23EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDDCu;
        // 0x23ede0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EDDCu, 0x23EDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EDE4u;
label_23ede4:
    // 0x23ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ede8:
    // 0x23ede8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23ede8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23edec:
    // 0x23edec: 0xc08eef2  jal         func_23BBC8
label_23edf0:
    if (ctx->pc == 0x23EDF0u) {
        ctx->pc = 0x23EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDECu;
        // 0x23edf0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDF4u;
        goto label_23edf4;
    }
    ctx->pc = 0x23EDECu;
    SET_GPR_U32(ctx, 31, 0x23EDF4u);
    ctx->pc = 0x23EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDECu;
    // 0x23edf0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23EDECu, 0x23EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDF4u;
label_23edf4:
    // 0x23edf4: 0x1000000f  b           . + 4 + (0xF << 2)
label_23edf8:
    if (ctx->pc == 0x23EDF8u) {
        ctx->pc = 0x23EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDF4u;
        // 0x23edf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDFCu;
        goto label_23edfc;
    }
    ctx->pc = 0x23EDF4u;
    {
        const bool branch_taken_0x23edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDF4u;
        // 0x23edf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edf4) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EDFCu;
label_23edfc:
    // 0x23edfc: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_23ee00:
    // 0x23ee00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23ee04:
    // 0x23ee04: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_23ee08:
    if (ctx->pc == 0x23EE08u) {
        ctx->pc = 0x23EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE04u;
        // 0x23ee08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE0Cu;
        goto label_23ee0c;
    }
    ctx->pc = 0x23EE04u;
    {
        const bool branch_taken_0x23ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE04u;
        // 0x23ee08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee04) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EE0Cu;
label_23ee0c:
    // 0x23ee0c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ee0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ee10:
    // 0x23ee10: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
label_23ee14:
    // 0x23ee14: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23ee18:
    // 0x23ee18: 0x40f809  jalr        $v0
label_23ee1c:
    if (ctx->pc == 0x23EE1Cu) {
        ctx->pc = 0x23EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE18u;
        // 0x23ee1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE20u;
        goto label_23ee20;
    }
    ctx->pc = 0x23EE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EE20u);
        ctx->pc = 0x23EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE18u;
        // 0x23ee1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EE18u, 0x23EE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EE20u;
label_23ee20:
    // 0x23ee20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ee24:
    // 0x23ee24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ee28:
    // 0x23ee28: 0xc08eef2  jal         func_23BBC8
label_23ee2c:
    if (ctx->pc == 0x23EE2Cu) {
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE30u;
        goto label_23ee30;
    }
    ctx->pc = 0x23EE28u;
    SET_GPR_U32(ctx, 31, 0x23EE30u);
    ctx->pc = 0x23EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE28u;
    // 0x23ee2c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23EE28u, 0x23EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE30u;
label_23ee30:
    // 0x23ee30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ee34:
    // 0x23ee34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23ee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23ee38:
    // 0x23ee38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23ee38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23ee3c:
    // 0x23ee3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ee3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23ee40:
    // 0x23ee40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ee40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ee44:
    // 0x23ee44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ee44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ee48:
    // 0x23ee48: 0x808c698  j           func_231A60
label_23ee4c:
    if (ctx->pc == 0x23EE4Cu) {
        ctx->pc = 0x23EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE48u;
        // 0x23ee4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE50u;
        goto label_23ee50;
    }
    ctx->pc = 0x23EE48u;
    ctx->pc = 0x23EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE48u;
    // 0x23ee4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x23EE50u;
label_23ee50:
    // 0x23ee50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_23ee54:
    // 0x23ee54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23ee58:
    // 0x23ee58: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x23ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
label_23ee5c:
    // 0x23ee5c: 0x24a55e60  addiu       $a1, $a1, 0x5E60
    ctx->pc = 0x23ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24160));
label_23ee60:
    // 0x23ee60: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x23ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_23ee64:
    // 0x23ee64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23ee64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ee68:
    // 0x23ee68: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x23ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
label_23ee6c:
    // 0x23ee6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ee70:
    // 0x23ee70: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x23ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_23ee74:
    // 0x23ee74: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x23ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_23ee78:
    // 0x23ee78: 0xc08b5ac  jal         func_22D6B0
label_23ee7c:
    if (ctx->pc == 0x23EE7Cu) {
        ctx->pc = 0x23EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE78u;
        // 0x23ee7c: 0x8e470194  lw          $a3, 0x194($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE80u;
        goto label_23ee80;
    }
    ctx->pc = 0x23EE78u;
    SET_GPR_U32(ctx, 31, 0x23EE80u);
    ctx->pc = 0x23EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE78u;
    // 0x23ee7c: 0x8e470194  lw          $a3, 0x194($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EE78u, 0x23EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE80u;
label_23ee80:
    // 0x23ee80: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_23ee84:
    // 0x23ee84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ee88:
    // 0x23ee88: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_23ee8c:
    if (ctx->pc == 0x23EE8Cu) {
        ctx->pc = 0x23EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE88u;
        // 0x23ee8c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE90u;
        goto label_23ee90;
    }
    ctx->pc = 0x23EE88u;
    {
        const bool branch_taken_0x23ee88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE88u;
        // 0x23ee8c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee88) {
            ctx->pc = 0x23EEBCu;
            goto label_23eebc;
        }
    }
    ctx->pc = 0x23EE90u;
label_23ee90:
    // 0x23ee90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23ee94:
    // 0x23ee94: 0x8c4351ac  lw          $v1, 0x51AC($v0)
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20908)));
label_23ee98:
    // 0x23ee98: 0x60f809  jalr        $v1
label_23ee9c:
    if (ctx->pc == 0x23EE9Cu) {
        ctx->pc = 0x23EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE98u;
        // 0x23ee9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEA0u;
        goto label_23eea0;
    }
    ctx->pc = 0x23EE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23EEA0u);
        ctx->pc = 0x23EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE98u;
        // 0x23ee9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EE98u, 0x23EEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EEA0u;
label_23eea0:
    // 0x23eea0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23eea4:
    // 0x23eea4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23eea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23eea8:
    // 0x23eea8: 0x24845138  addiu       $a0, $a0, 0x5138
    ctx->pc = 0x23eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
label_23eeac:
    // 0x23eeac: 0xc08eef2  jal         func_23BBC8
label_23eeb0:
    if (ctx->pc == 0x23EEB0u) {
        ctx->pc = 0x23EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEACu;
        // 0x23eeb0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEB4u;
        goto label_23eeb4;
    }
    ctx->pc = 0x23EEACu;
    SET_GPR_U32(ctx, 31, 0x23EEB4u);
    ctx->pc = 0x23EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEACu;
    // 0x23eeb0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23EEACu, 0x23EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB4u;
label_23eeb4:
    // 0x23eeb4: 0x10000031  b           . + 4 + (0x31 << 2)
label_23eeb8:
    if (ctx->pc == 0x23EEB8u) {
        ctx->pc = 0x23EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB4u;
        // 0x23eeb8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEBCu;
        goto label_23eebc;
    }
    ctx->pc = 0x23EEB4u;
    {
        const bool branch_taken_0x23eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB4u;
        // 0x23eeb8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eeb4) {
            ctx->pc = 0x23EF7Cu;
            goto label_23ef7c;
        }
    }
    ctx->pc = 0x23EEBCu;
label_23eebc:
    // 0x23eebc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eec0:
    // 0x23eec0: 0xc08b07e  jal         func_22C1F8
label_23eec4:
    if (ctx->pc == 0x23EEC4u) {
        ctx->pc = 0x23EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEC0u;
        // 0x23eec4: 0x26504128  addiu       $s0, $s2, 0x4128 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEC8u;
        goto label_23eec8;
    }
    ctx->pc = 0x23EEC0u;
    SET_GPR_U32(ctx, 31, 0x23EEC8u);
    ctx->pc = 0x23EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEC0u;
    // 0x23eec4: 0x26504128  addiu       $s0, $s2, 0x4128 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1F8u, 0x23EEC0u, 0x23EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEC8u;
label_23eec8:
    // 0x23eec8: 0x26514028  addiu       $s1, $s2, 0x4028
    ctx->pc = 0x23eec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16424));
label_23eecc:
    // 0x23eecc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eed0:
    // 0x23eed0: 0x26454458  addiu       $a1, $s2, 0x4458
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17496));
label_23eed4:
    // 0x23eed4: 0xc08b08e  jal         func_22C238
label_23eed8:
    if (ctx->pc == 0x23EED8u) {
        ctx->pc = 0x23EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EED4u;
        // 0x23eed8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEDCu;
        goto label_23eedc;
    }
    ctx->pc = 0x23EED4u;
    SET_GPR_U32(ctx, 31, 0x23EEDCu);
    ctx->pc = 0x23EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EED4u;
    // 0x23eed8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EED4u, 0x23EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEDCu;
label_23eedc:
    // 0x23eedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eee0:
    // 0x23eee0: 0xc090460  jal         func_241180
label_23eee4:
    if (ctx->pc == 0x23EEE4u) {
        ctx->pc = 0x23EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE0u;
        // 0x23eee4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEE8u;
        goto label_23eee8;
    }
    ctx->pc = 0x23EEE0u;
    SET_GPR_U32(ctx, 31, 0x23EEE8u);
    ctx->pc = 0x23EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEE0u;
    // 0x23eee4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23EEE0u, 0x23EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEE8u;
label_23eee8:
    // 0x23eee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23eee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eeec:
    // 0x23eeec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23eeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23eef0:
    // 0x23eef0: 0xc08b08e  jal         func_22C238
label_23eef4:
    if (ctx->pc == 0x23EEF4u) {
        ctx->pc = 0x23EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF0u;
        // 0x23eef4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEF8u;
        goto label_23eef8;
    }
    ctx->pc = 0x23EEF0u;
    SET_GPR_U32(ctx, 31, 0x23EEF8u);
    ctx->pc = 0x23EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEF0u;
    // 0x23eef4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EEF0u, 0x23EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEF8u;
label_23eef8:
    // 0x23eef8: 0x8e464558  lw          $a2, 0x4558($s2)
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17752)));
label_23eefc:
    // 0x23eefc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ef00:
    // 0x23ef00: 0xc08b08e  jal         func_22C238
label_23ef04:
    if (ctx->pc == 0x23EF04u) {
        ctx->pc = 0x23EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF00u;
        // 0x23ef04: 0x26454459  addiu       $a1, $s2, 0x4459 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17497));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF08u;
        goto label_23ef08;
    }
    ctx->pc = 0x23EF00u;
    SET_GPR_U32(ctx, 31, 0x23EF08u);
    ctx->pc = 0x23EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF00u;
    // 0x23ef04: 0x26454459  addiu       $a1, $s2, 0x4459 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17497));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EF00u, 0x23EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF08u;
label_23ef08:
    // 0x23ef08: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23ef0c:
    // 0x23ef0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ef10:
    // 0x23ef10: 0xc08b0ca  jal         func_22C328
label_23ef14:
    if (ctx->pc == 0x23EF14u) {
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF10u;
        // 0x23ef14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF18u;
        goto label_23ef18;
    }
    ctx->pc = 0x23EF10u;
    SET_GPR_U32(ctx, 31, 0x23EF18u);
    ctx->pc = 0x23EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF10u;
    // 0x23ef14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C328u, 0x23EF10u, 0x23EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF18u;
label_23ef18:
    // 0x23ef18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ef1c:
    // 0x23ef1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ef20:
    // 0x23ef20: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x23ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
label_23ef24:
    // 0x23ef24: 0xc090460  jal         func_241180
label_23ef28:
    if (ctx->pc == 0x23EF28u) {
        ctx->pc = 0x23EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF24u;
        // 0x23ef28: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF2Cu;
        goto label_23ef2c;
    }
    ctx->pc = 0x23EF24u;
    SET_GPR_U32(ctx, 31, 0x23EF2Cu);
    ctx->pc = 0x23EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF24u;
    // 0x23ef28: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23EF24u, 0x23EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF2Cu;
label_23ef2c:
    // 0x23ef2c: 0x92474458  lbu         $a3, 0x4458($s2)
    ctx->pc = 0x23ef2cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17496)));
label_23ef30:
    // 0x23ef30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23ef34:
    // 0x23ef34: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x23ef34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ef38:
    // 0x23ef38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ef3c:
    // 0x23ef3c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x23ef3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23ef40:
    // 0x23ef40: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ef44:
    // 0x23ef44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23ef48:
    // 0x23ef48: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
label_23ef4c:
    // 0x23ef4c: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x23ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_23ef50:
    // 0x23ef50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23ef50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ef54:
    // 0x23ef54: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_23ef58:
    // 0x23ef58: 0xc08fecc  jal         func_23FB30
label_23ef5c:
    if (ctx->pc == 0x23EF5Cu) {
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF60u;
        goto label_23ef60;
    }
    ctx->pc = 0x23EF58u;
    SET_GPR_U32(ctx, 31, 0x23EF60u);
    ctx->pc = 0x23EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF58u;
    // 0x23ef5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23EF58u, 0x23EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_23ef64:
    // 0x23ef64: 0x8e454020  lw          $a1, 0x4020($s2)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16416)));
label_23ef68:
    // 0x23ef68: 0x24c6ee50  addiu       $a2, $a2, -0x11B0
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962768));
label_23ef6c:
    // 0x23ef6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23ef6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ef70:
    // 0x23ef70: 0xc08a058  jal         func_228160
label_23ef74:
    if (ctx->pc == 0x23EF74u) {
        ctx->pc = 0x23EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF70u;
        // 0x23ef74: 0x26440250  addiu       $a0, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF78u;
        goto label_23ef78;
    }
    ctx->pc = 0x23EF70u;
    SET_GPR_U32(ctx, 31, 0x23EF78u);
    ctx->pc = 0x23EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF70u;
    // 0x23ef74: 0x26440250  addiu       $a0, $s2, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23EF70u, 0x23EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF78u;
label_23ef78:
    // 0x23ef78: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x23ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_23ef7c:
    // 0x23ef7c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x23ef7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23ef80:
    // 0x23ef80: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x23ef80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23ef84:
    // 0x23ef84: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x23ef84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23ef88:
    // 0x23ef88: 0x3e00008  jr          $ra
label_23ef8c:
    if (ctx->pc == 0x23EF8Cu) {
        ctx->pc = 0x23EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF88u;
        // 0x23ef8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF90u;
        goto label_23ef90;
    }
    ctx->pc = 0x23EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF88u;
        // 0x23ef8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EF90u;
label_23ef90:
    // 0x23ef90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23ef94:
    // 0x23ef94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23ef98:
    // 0x23ef98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ef9c:
    // 0x23ef9c: 0x24455e88  addiu       $a1, $v0, 0x5E88
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24200));
label_23efa0:
    // 0x23efa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23efa4:
    // 0x23efa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23efa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23efa8:
    // 0x23efa8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x23efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23efac:
    // 0x23efac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23efb0:
    // 0x23efb0: 0x8e034244  lw          $v1, 0x4244($s0)
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16964)));
label_23efb4:
    // 0x23efb4: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x23efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_23efb8:
    // 0x23efb8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_23efbc:
    if (ctx->pc == 0x23EFBCu) {
        ctx->pc = 0x23EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB8u;
        // 0x23efbc: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFC0u;
        goto label_23efc0;
    }
    ctx->pc = 0x23EFB8u;
    {
        const bool branch_taken_0x23efb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB8u;
        // 0x23efbc: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb8) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFC0u;
label_23efc0:
    // 0x23efc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23efc4:
    // 0x23efc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23efc8:
    if (ctx->pc == 0x23EFC8u) {
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x24475e98  addiu       $a3, $v0, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFCCu;
        goto label_23efcc;
    }
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x24475e98  addiu       $a3, $v0, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23efd0:
    // 0x23efd0: 0x24475ea8  addiu       $a3, $v0, 0x5EA8
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
label_23efd4:
    // 0x23efd4: 0xc08b5ac  jal         func_22D6B0
label_23efd8:
    if (ctx->pc == 0x23EFD8u) {
        ctx->pc = 0x23EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD4u;
        // 0x23efd8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFDCu;
        goto label_23efdc;
    }
    ctx->pc = 0x23EFD4u;
    SET_GPR_U32(ctx, 31, 0x23EFDCu);
    ctx->pc = 0x23EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFD4u;
    // 0x23efd8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EFD4u, 0x23EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFDCu;
label_23efdc:
    // 0x23efdc: 0x9602423e  lhu         $v0, 0x423E($s0)
    ctx->pc = 0x23efdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16958)));
label_23efe0:
    // 0x23efe0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_23efe4:
    // 0x23efe4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23efe8:
    if (ctx->pc == 0x23EFE8u) {
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFECu;
        goto label_23efec;
    }
    ctx->pc = 0x23EFE4u;
    {
        const bool branch_taken_0x23efe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efe4) {
            ctx->pc = 0x23F008u;
            goto label_23f008;
        }
    }
    ctx->pc = 0x23EFECu;
label_23efec:
    // 0x23efec: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23eff0:
    // 0x23eff0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23eff4:
    // 0x23eff4: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0
    ctx->pc = 0x23eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
label_23eff8:
    // 0x23eff8: 0xc08b5ac  jal         func_22D6B0
label_23effc:
    if (ctx->pc == 0x23EFFCu) {
        ctx->pc = 0x23EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF8u;
        // 0x23effc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F000u;
        goto label_23f000;
    }
    ctx->pc = 0x23EFF8u;
    SET_GPR_U32(ctx, 31, 0x23F000u);
    ctx->pc = 0x23EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFF8u;
    // 0x23effc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EFF8u, 0x23F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F000u;
label_23f000:
    // 0x23f000: 0x10000004  b           . + 4 + (0x4 << 2)
label_23f004:
    if (ctx->pc == 0x23F004u) {
        ctx->pc = 0x23F008u;
        goto label_23f008;
    }
    ctx->pc = 0x23F000u;
    {
        const bool branch_taken_0x23f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f000) {
            ctx->pc = 0x23F014u;
            goto label_23f014;
        }
    }
    ctx->pc = 0x23F008u;
label_23f008:
    // 0x23f008: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f00c:
    // 0x23f00c: 0xc08b5ac  jal         func_22D6B0
label_23f010:
    if (ctx->pc == 0x23F010u) {
        ctx->pc = 0x23F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F00Cu;
        // 0x23f010: 0x24a55ed8  addiu       $a1, $a1, 0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F014u;
        goto label_23f014;
    }
    ctx->pc = 0x23F00Cu;
    SET_GPR_U32(ctx, 31, 0x23F014u);
    ctx->pc = 0x23F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F00Cu;
    // 0x23f010: 0x24a55ed8  addiu       $a1, $a1, 0x5ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F00Cu, 0x23F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F014u;
label_23f014:
    // 0x23f014: 0xc08c682  jal         func_231A08
label_23f018:
    if (ctx->pc == 0x23F018u) {
        ctx->pc = 0x23F01Cu;
        goto label_23f01c;
    }
    ctx->pc = 0x23F014u;
    SET_GPR_U32(ctx, 31, 0x23F01Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23F014u, 0x23F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F01Cu;
label_23f01c:
    // 0x23f01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f020:
    // 0x23f020: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x23f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_23f024:
    // 0x23f024: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x23f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_23f028:
    // 0x23f028: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x23f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_23f02c:
    // 0x23f02c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_23f030:
    // 0x23f030: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23f034:
    if (ctx->pc == 0x23F034u) {
        ctx->pc = 0x23F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F030u;
        // 0x23f034: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F038u;
        goto label_23f038;
    }
    ctx->pc = 0x23F030u;
    {
        const bool branch_taken_0x23f030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F030u;
        // 0x23f034: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f030) {
            ctx->pc = 0x23F048u;
            goto label_23f048;
        }
    }
    ctx->pc = 0x23F038u;
label_23f038:
    // 0x23f038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f03c:
    // 0x23f03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f040:
    // 0x23f040: 0x808c698  j           func_231A60
label_23f044:
    if (ctx->pc == 0x23F044u) {
        ctx->pc = 0x23F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F040u;
        // 0x23f044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F048u;
        goto label_23f048;
    }
    ctx->pc = 0x23F040u;
    ctx->pc = 0x23F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F040u;
    // 0x23f044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0xc08c698  jal         func_231A60
label_23f04c:
    if (ctx->pc == 0x23F04Cu) {
        ctx->pc = 0x23F050u;
        goto label_23f050;
    }
    ctx->pc = 0x23F048u;
    SET_GPR_U32(ctx, 31, 0x23F050u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23F048u, 0x23F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F050u;
label_23f050:
    // 0x23f050: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x23f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_23f054:
    // 0x23f054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23f058:
    // 0x23f058: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_23f05c:
    if (ctx->pc == 0x23F05Cu) {
        ctx->pc = 0x23F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F058u;
        // 0x23f05c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F060u;
        goto label_23f060;
    }
    ctx->pc = 0x23F058u;
    {
        const bool branch_taken_0x23f058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F058u;
        // 0x23f05c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f058) {
            ctx->pc = 0x23F06Cu;
            goto label_23f06c;
        }
    }
    ctx->pc = 0x23F060u;
label_23f060:
    // 0x23f060: 0xc09026a  jal         func_2409A8
label_23f064:
    if (ctx->pc == 0x23F064u) {
        ctx->pc = 0x23F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F060u;
        // 0x23f064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F068u;
        goto label_23f068;
    }
    ctx->pc = 0x23F060u;
    SET_GPR_U32(ctx, 31, 0x23F068u);
    ctx->pc = 0x23F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F060u;
    // 0x23f064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2409A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2409A8u, 0x23F060u, 0x23F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F068u;
label_23f068:
    // 0x23f068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f06c:
    // 0x23f06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f070:
    // 0x23f070: 0x3e00008  jr          $ra
label_23f074:
    if (ctx->pc == 0x23F074u) {
        ctx->pc = 0x23F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F070u;
        // 0x23f074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F078u;
        goto label_23f078;
    }
    ctx->pc = 0x23F070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F070u;
        // 0x23f074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F078u;
label_23f078:
    // 0x23f078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f07c:
    // 0x23f07c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f080:
    // 0x23f080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f084:
    // 0x23f084: 0x24a55ef8  addiu       $a1, $a1, 0x5EF8
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24312));
label_23f088:
    // 0x23f088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f08c:
    // 0x23f08c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f090:
    // 0x23f090: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23f094:
    // 0x23f094: 0xc08b5ac  jal         func_22D6B0
label_23f098:
    if (ctx->pc == 0x23F098u) {
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F094u;
        // 0x23f098: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F09Cu;
        goto label_23f09c;
    }
    ctx->pc = 0x23F094u;
    SET_GPR_U32(ctx, 31, 0x23F09Cu);
    ctx->pc = 0x23F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F094u;
    // 0x23f098: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F094u, 0x23F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0xc08a08c  jal         func_228230
label_23f0a0:
    if (ctx->pc == 0x23F0A0u) {
        ctx->pc = 0x23F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F09Cu;
        // 0x23f0a0: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0A4u;
        goto label_23f0a4;
    }
    ctx->pc = 0x23F09Cu;
    SET_GPR_U32(ctx, 31, 0x23F0A4u);
    ctx->pc = 0x23F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F09Cu;
    // 0x23f0a0: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23F09Cu, 0x23F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0A4u;
label_23f0a4:
    // 0x23f0a4: 0xc08a08c  jal         func_228230
label_23f0a8:
    if (ctx->pc == 0x23F0A8u) {
        ctx->pc = 0x23F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A4u;
        // 0x23f0a8: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0ACu;
        goto label_23f0ac;
    }
    ctx->pc = 0x23F0A4u;
    SET_GPR_U32(ctx, 31, 0x23F0ACu);
    ctx->pc = 0x23F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0A4u;
    // 0x23f0a8: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23F0A4u, 0x23F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_23f0b0:
    // 0x23f0b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23f0b4:
    // 0x23f0b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23f0b8:
    // 0x23f0b8: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x23f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_23f0bc:
    // 0x23f0bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23f0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23f0c0:
    // 0x23f0c0: 0x8c855074  lw          $a1, 0x5074($a0)
    ctx->pc = 0x23f0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20596)));
label_23f0c4:
    // 0x23f0c4: 0xae03029c  sw          $v1, 0x29C($s0)
    ctx->pc = 0x23f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 3));
label_23f0c8:
    // 0x23f0c8: 0xa0f809  jalr        $a1
label_23f0cc:
    if (ctx->pc == 0x23F0CCu) {
        ctx->pc = 0x23F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C8u;
        // 0x23f0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0D0u;
        goto label_23f0d0;
    }
    ctx->pc = 0x23F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23F0D0u);
        ctx->pc = 0x23F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C8u;
        // 0x23f0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F0C8u, 0x23F0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F0D0u;
label_23f0d0:
    // 0x23f0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f0d4:
    // 0x23f0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f0d8:
    // 0x23f0d8: 0x3e00008  jr          $ra
label_23f0dc:
    if (ctx->pc == 0x23F0DCu) {
        ctx->pc = 0x23F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D8u;
        // 0x23f0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0E0u;
        goto label_23f0e0;
    }
    ctx->pc = 0x23F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D8u;
        // 0x23f0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F0E0u;
label_23f0e0:
    // 0x23f0e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_23f0e4:
    // 0x23f0e4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x23f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_23f0e8:
    // 0x23f0e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f0ec:
    // 0x23f0ec: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x23f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_23f0f0:
    // 0x23f0f0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_23f0f4:
    // 0x23f0f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23f0f8:
    // 0x23f0f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x23f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_23f0fc:
    // 0x23f0fc: 0x26324228  addiu       $s2, $s1, 0x4228
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16936));
label_23f100:
    // 0x23f100: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_23f104:
    // 0x23f104: 0xc08c84a  jal         func_232128
label_23f108:
    if (ctx->pc == 0x23F108u) {
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F104u;
        // 0x23f108: 0x26334028  addiu       $s3, $s1, 0x4028 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F10Cu;
        goto label_23f10c;
    }
    ctx->pc = 0x23F104u;
    SET_GPR_U32(ctx, 31, 0x23F10Cu);
    ctx->pc = 0x23F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F104u;
    // 0x23f108: 0x26334028  addiu       $s3, $s1, 0x4028 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232128u, 0x23F104u, 0x23F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F10Cu;
label_23f10c:
    // 0x23f10c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23f10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f110:
    // 0x23f110: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x23f110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23f114:
    // 0x23f114: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23f118:
    // 0x23f118: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_23f11c:
    // 0x23f11c: 0xc08b614  jal         func_22D850
label_23f120:
    if (ctx->pc == 0x23F120u) {
        ctx->pc = 0x23F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F11Cu;
        // 0x23f120: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F124u;
        goto label_23f124;
    }
    ctx->pc = 0x23F11Cu;
    SET_GPR_U32(ctx, 31, 0x23F124u);
    ctx->pc = 0x23F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F11Cu;
    // 0x23f120: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23F11Cu, 0x23F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F124u;
label_23f124:
    // 0x23f124: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23f128:
    // 0x23f128: 0xc08b614  jal         func_22D850
label_23f12c:
    if (ctx->pc == 0x23F12Cu) {
        ctx->pc = 0x23F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F128u;
        // 0x23f12c: 0xae224228  sw          $v0, 0x4228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F130u;
        goto label_23f130;
    }
    ctx->pc = 0x23F128u;
    SET_GPR_U32(ctx, 31, 0x23F130u);
    ctx->pc = 0x23F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F128u;
    // 0x23f12c: 0xae224228  sw          $v0, 0x4228($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16936), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23F128u, 0x23F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F130u;
label_23f130:
    // 0x23f130: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x23f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23f134:
    // 0x23f134: 0xc08b614  jal         func_22D850
label_23f138:
    if (ctx->pc == 0x23F138u) {
        ctx->pc = 0x23F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F134u;
        // 0x23f138: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F13Cu;
        goto label_23f13c;
    }
    ctx->pc = 0x23F134u;
    SET_GPR_U32(ctx, 31, 0x23F13Cu);
    ctx->pc = 0x23F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F134u;
    // 0x23f138: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23F134u, 0x23F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F13Cu;
label_23f13c:
    // 0x23f13c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x23f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23f140:
    // 0x23f140: 0xc08b614  jal         func_22D850
label_23f144:
    if (ctx->pc == 0x23F144u) {
        ctx->pc = 0x23F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F140u;
        // 0x23f144: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F148u;
        goto label_23f148;
    }
    ctx->pc = 0x23F140u;
    SET_GPR_U32(ctx, 31, 0x23F148u);
    ctx->pc = 0x23F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F140u;
    // 0x23f144: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x23F140u, 0x23F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F148u;
label_23f148:
    // 0x23f148: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x23f148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23f14c:
    // 0x23f14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f150:
    // 0x23f150: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x23f150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_23f154:
    // 0x23f154: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23f158:
    // 0x23f158: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x23f158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_23f15c:
    // 0x23f15c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_23f160:
    // 0x23f160: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_23f164:
    // 0x23f164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23f168:
    // 0x23f168: 0xa222017c  sb          $v0, 0x17C($s1)
    ctx->pc = 0x23f168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 380), (uint8_t)GPR_U32(ctx, 2));
label_23f16c:
    // 0x23f16c: 0xc090460  jal         func_241180
label_23f170:
    if (ctx->pc == 0x23F170u) {
        ctx->pc = 0x23F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F16Cu;
        // 0x23f170: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F174u;
        goto label_23f174;
    }
    ctx->pc = 0x23F16Cu;
    SET_GPR_U32(ctx, 31, 0x23F174u);
    ctx->pc = 0x23F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F16Cu;
    // 0x23f170: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23F16Cu, 0x23F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F174u;
label_23f174:
    // 0x23f174: 0x9227017c  lbu         $a3, 0x17C($s1)
    ctx->pc = 0x23f174u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 380)));
label_23f178:
    // 0x23f178: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23f178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23f17c:
    // 0x23f17c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x23f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_23f180:
    // 0x23f180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23f180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f184:
    // 0x23f184: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x23f184u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f188:
    // 0x23f188: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23f18c:
    // 0x23f18c: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
label_23f190:
    // 0x23f190: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23f190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_23f194:
    // 0x23f194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f198:
    // 0x23f198: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f19c:
    // 0x23f19c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23f1a0:
    // 0x23f1a0: 0xc08fecc  jal         func_23FB30
label_23f1a4:
    if (ctx->pc == 0x23F1A4u) {
        ctx->pc = 0x23F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1A0u;
        // 0x23f1a4: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1A8u;
        goto label_23f1a8;
    }
    ctx->pc = 0x23F1A0u;
    SET_GPR_U32(ctx, 31, 0x23F1A8u);
    ctx->pc = 0x23F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1A0u;
    // 0x23f1a4: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23F1A0u, 0x23F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1A8u;
label_23f1a8:
    // 0x23f1a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23f1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23f1ac:
    // 0x23f1ac: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x23f1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23f1b0:
    // 0x23f1b0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23f1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23f1b4:
    // 0x23f1b4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23f1b8:
    // 0x23f1b8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x23f1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23f1bc:
    // 0x23f1bc: 0x3e00008  jr          $ra
label_23f1c0:
    if (ctx->pc == 0x23F1C0u) {
        ctx->pc = 0x23F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1BCu;
        // 0x23f1c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1C4u;
        goto label_23f1c4;
    }
    ctx->pc = 0x23F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1BCu;
        // 0x23f1c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F1C4u;
label_23f1c4:
    // 0x23f1c4: 0x0  nop
    ctx->pc = 0x23f1c4u;
    // NOP
}
