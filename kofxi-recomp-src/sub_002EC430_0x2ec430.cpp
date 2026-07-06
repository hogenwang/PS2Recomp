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

// Function: sub_002EC430
// Address: 0x2ec430 - 0x2eccb0
void sub_002EC430_0x2ec430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC430_0x2ec430");
#endif

    switch (ctx->pc) {
        case 0x2ec450u: goto label_2ec450;
        case 0x2ec480u: goto label_2ec480;
        case 0x2ec488u: goto label_2ec488;
        case 0x2ec48cu: goto label_2ec48c;
        case 0x2ec4d8u: goto label_2ec4d8;
        case 0x2ec520u: goto label_2ec520;
        case 0x2ec530u: goto label_2ec530;
        case 0x2ec540u: goto label_2ec540;
        case 0x2ec550u: goto label_2ec550;
        case 0x2ec560u: goto label_2ec560;
        case 0x2ec570u: goto label_2ec570;
        case 0x2ec580u: goto label_2ec580;
        case 0x2ec5c0u: goto label_2ec5c0;
        case 0x2ec5d4u: goto label_2ec5d4;
        case 0x2ec5f0u: goto label_2ec5f0;
        case 0x2ec640u: goto label_2ec640;
        case 0x2ec658u: goto label_2ec658;
        case 0x2ec670u: goto label_2ec670;
        case 0x2ec684u: goto label_2ec684;
        case 0x2ec690u: goto label_2ec690;
        case 0x2ec6a4u: goto label_2ec6a4;
        case 0x2ec6b4u: goto label_2ec6b4;
        case 0x2ec6c4u: goto label_2ec6c4;
        case 0x2ec6e4u: goto label_2ec6e4;
        case 0x2ec754u: goto label_2ec754;
        case 0x2ec75cu: goto label_2ec75c;
        case 0x2ec760u: goto label_2ec760;
        case 0x2ec7a0u: goto label_2ec7a0;
        case 0x2ec7d8u: goto label_2ec7d8;
        case 0x2ec7e4u: goto label_2ec7e4;
        case 0x2ec7f8u: goto label_2ec7f8;
        case 0x2ec804u: goto label_2ec804;
        case 0x2ec830u: goto label_2ec830;
        case 0x2ec848u: goto label_2ec848;
        case 0x2ec85cu: goto label_2ec85c;
        case 0x2ec868u: goto label_2ec868;
        case 0x2ec87cu: goto label_2ec87c;
        case 0x2ec8acu: goto label_2ec8ac;
        case 0x2ec8fcu: goto label_2ec8fc;
        case 0x2ec904u: goto label_2ec904;
        case 0x2ec908u: goto label_2ec908;
        case 0x2ec968u: goto label_2ec968;
        case 0x2ec980u: goto label_2ec980;
        case 0x2ec994u: goto label_2ec994;
        case 0x2ec9c0u: goto label_2ec9c0;
        case 0x2ec9d4u: goto label_2ec9d4;
        case 0x2ec9e0u: goto label_2ec9e0;
        case 0x2ec9f4u: goto label_2ec9f4;
        case 0x2eca20u: goto label_2eca20;
        case 0x2eca4cu: goto label_2eca4c;
        case 0x2eca54u: goto label_2eca54;
        case 0x2eca58u: goto label_2eca58;
        case 0x2ecabcu: goto label_2ecabc;
        case 0x2ecad4u: goto label_2ecad4;
        case 0x2ecae0u: goto label_2ecae0;
        case 0x2ecaf4u: goto label_2ecaf4;
        case 0x2ecb08u: goto label_2ecb08;
        case 0x2ecb10u: goto label_2ecb10;
        case 0x2ecb1cu: goto label_2ecb1c;
        case 0x2ecb30u: goto label_2ecb30;
        case 0x2ecb38u: goto label_2ecb38;
        case 0x2ecb74u: goto label_2ecb74;
        case 0x2ecbe0u: goto label_2ecbe0;
        case 0x2ecbe4u: goto label_2ecbe4;
        case 0x2ecc1cu: goto label_2ecc1c;
        case 0x2ecc34u: goto label_2ecc34;
        case 0x2ecc48u: goto label_2ecc48;
        case 0x2ecc74u: goto label_2ecc74;
        case 0x2ecc88u: goto label_2ecc88;
        case 0x2ecc94u: goto label_2ecc94;
        case 0x2ecca8u: goto label_2ecca8;
        default: break;
    }

    ctx->pc = 0x2ec430u;

    // 0x2ec430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ec430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ec434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ec434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ec438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec43c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ec43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ec440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ec440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ec444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ec444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec448: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC448u;
    SET_GPR_U32(ctx, 31, 0x2EC450u);
    ctx->pc = 0x2EC44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC448u;
    // 0x2ec44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC448u, 0x2EC450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC450u;
label_2ec450:
    // 0x2ec450: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ec450u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ec454: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ec458: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x2ec458u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ec45c: 0x11ae0013  beq         $t5, $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC45Cu;
    {
        const bool branch_taken_0x2ec45c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2EC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC45Cu;
        // 0x2ec460: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec45c) {
            ctx->pc = 0x2EC4ACu;
            goto label_2ec4ac;
        }
    }
    ctx->pc = 0x2EC464u;
    // 0x2ec464: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2ec464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ec468: 0x11af000f  beq         $t5, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC468u;
    {
        const bool branch_taken_0x2ec468 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC468u;
        // 0x2ec46c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec468) {
            ctx->pc = 0x2EC4A8u;
            goto label_2ec4a8;
        }
    }
    ctx->pc = 0x2EC470u;
    // 0x2ec470: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec474: 0x24840748  addiu       $a0, $a0, 0x748
    ctx->pc = 0x2ec474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    // 0x2ec478: 0x24e70758  addiu       $a3, $a3, 0x758
    ctx->pc = 0x2ec478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1880));
    // 0x2ec47c: 0x24050237  addiu       $a1, $zero, 0x237
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 567));
label_2ec480:
    // 0x2ec480: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC480u;
    SET_GPR_U32(ctx, 31, 0x2EC488u);
    ctx->pc = 0x2EC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC480u;
    // 0x2ec484: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC480u, 0x2EC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC488u;
label_2ec488:
    // 0x2ec488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec48c:
    // 0x2ec48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ec490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ec494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ec498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ec49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ec49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4A0u;
        // 0x2ec4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC4A8u;
label_2ec4a8:
    // 0x2ec4a8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ec4ac:
    // 0x2ec4ac: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ec4b0: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2ec4b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ec4b4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4B4u;
    {
        const bool branch_taken_0x2ec4b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4B4u;
        // 0x2ec4b8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4b4) {
            ctx->pc = 0x2EC4D0u;
            goto label_2ec4d0;
        }
    }
    ctx->pc = 0x2EC4BCu;
    // 0x2ec4bc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec4c0: 0x24840748  addiu       $a0, $a0, 0x748
    ctx->pc = 0x2ec4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    // 0x2ec4c4: 0x24e70770  addiu       $a3, $a3, 0x770
    ctx->pc = 0x2ec4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1904));
    // 0x2ec4c8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EC4C8u;
    {
        const bool branch_taken_0x2ec4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4C8u;
        // 0x2ec4cc: 0x2405023d  addiu       $a1, $zero, 0x23D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4c8) {
            ctx->pc = 0x2EC480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec480;
        }
    }
    ctx->pc = 0x2EC4D0u;
label_2ec4d0:
    // 0x2ec4d0: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EC4D0u;
    SET_GPR_U32(ctx, 31, 0x2EC4D8u);
    ctx->pc = 0x2EC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4D0u;
    // 0x2ec4d4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EC4D0u, 0x2EC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4D8u;
label_2ec4d8:
    // 0x2ec4d8: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ec4dc: 0x104f0006  beq         $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4DCu;
    {
        const bool branch_taken_0x2ec4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4DCu;
        // 0x2ec4e0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4dc) {
            ctx->pc = 0x2EC4F8u;
            goto label_2ec4f8;
        }
    }
    ctx->pc = 0x2EC4E4u;
    // 0x2ec4e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec4e8: 0x24840748  addiu       $a0, $a0, 0x748
    ctx->pc = 0x2ec4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    // 0x2ec4ec: 0x24e70790  addiu       $a3, $a3, 0x790
    ctx->pc = 0x2ec4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1936));
    // 0x2ec4f0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2EC4F0u;
    {
        const bool branch_taken_0x2ec4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4F0u;
        // 0x2ec4f4: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4f0) {
            ctx->pc = 0x2EC480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec480;
        }
    }
    ctx->pc = 0x2EC4F8u;
label_2ec4f8:
    // 0x2ec4f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2ec4fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec500: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2ec500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2ec504: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2ec504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2ec508: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x2ec508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ec50c: 0x248404e0  addiu       $a0, $a0, 0x4E0
    ctx->pc = 0x2ec50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    // 0x2ec510: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x2ec510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ec514: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x2ec514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ec518: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC518u;
    SET_GPR_U32(ctx, 31, 0x2EC520u);
    ctx->pc = 0x2EC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC518u;
    // 0x2ec51c: 0xa600001e  sh          $zero, 0x1E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC518u, 0x2EC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC520u;
label_2ec520:
    // 0x2ec520: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec524: 0x26050098  addiu       $a1, $s0, 0x98
    ctx->pc = 0x2ec524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x2ec528: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC528u;
    SET_GPR_U32(ctx, 31, 0x2EC530u);
    ctx->pc = 0x2EC52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC528u;
    // 0x2ec52c: 0x248404f0  addiu       $a0, $a0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC528u, 0x2EC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC530u;
label_2ec530:
    // 0x2ec530: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec534: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x2ec534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2ec538: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC538u;
    SET_GPR_U32(ctx, 31, 0x2EC540u);
    ctx->pc = 0x2EC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC538u;
    // 0x2ec53c: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC538u, 0x2EC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC540u;
label_2ec540:
    // 0x2ec540: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec544: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2ec544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ec548: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC548u;
    SET_GPR_U32(ctx, 31, 0x2EC550u);
    ctx->pc = 0x2EC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC548u;
    // 0x2ec54c: 0x24840510  addiu       $a0, $a0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC548u, 0x2EC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC550u;
label_2ec550:
    // 0x2ec550: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec554: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2ec554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ec558: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC558u;
    SET_GPR_U32(ctx, 31, 0x2EC560u);
    ctx->pc = 0x2EC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC558u;
    // 0x2ec55c: 0x24840520  addiu       $a0, $a0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC558u, 0x2EC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC560u;
label_2ec560:
    // 0x2ec560: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec564: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2ec564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ec568: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC568u;
    SET_GPR_U32(ctx, 31, 0x2EC570u);
    ctx->pc = 0x2EC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC568u;
    // 0x2ec56c: 0x24840530  addiu       $a0, $a0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC568u, 0x2EC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC570u;
label_2ec570:
    // 0x2ec570: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec574: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2ec574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2ec578: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC578u;
    SET_GPR_U32(ctx, 31, 0x2EC580u);
    ctx->pc = 0x2EC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC578u;
    // 0x2ec57c: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC578u, 0x2EC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC580u;
label_2ec580:
    // 0x2ec580: 0x8e0d0078  lw          $t5, 0x78($s0)
    ctx->pc = 0x2ec580u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2ec584: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x2ec584u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec58c: 0xa1ae0003  sb          $t6, 0x3($t5)
    ctx->pc = 0x2ec58cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x2ec590: 0x8e0f0070  lw          $t7, 0x70($s0)
    ctx->pc = 0x2ec590u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2ec594: 0xa1ee0003  sb          $t6, 0x3($t7)
    ctx->pc = 0x2ec594u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x2ec598: 0x8e0d0080  lw          $t5, 0x80($s0)
    ctx->pc = 0x2ec598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2ec59c: 0x95af0000  lhu         $t7, 0x0($t5)
    ctx->pc = 0x2ec59cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2ec5a0: 0x31effff0  andi        $t7, $t7, 0xFFF0
    ctx->pc = 0x2ec5a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65520);
    // 0x2ec5a4: 0x35ef000d  ori         $t7, $t7, 0xD
    ctx->pc = 0x2ec5a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13);
    // 0x2ec5a8: 0xa5af0000  sh          $t7, 0x0($t5)
    ctx->pc = 0x2ec5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ec5ac: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x2ec5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x2ec5b0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2ec5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2ec5b4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2ec5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2ec5b8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC5B8u;
    SET_GPR_U32(ctx, 31, 0x2EC5C0u);
    ctx->pc = 0x2EC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5B8u;
    // 0x2ec5bc: 0xae0003a0  sw          $zero, 0x3A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC5B8u, 0x2EC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5C0u;
label_2ec5c0:
    // 0x2ec5c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC5C0u;
    {
        const bool branch_taken_0x2ec5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5C0u;
        // 0x2ec5c4: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5c0) {
            ctx->pc = 0x2EC5F8u;
            goto label_2ec5f8;
        }
    }
    ctx->pc = 0x2EC5C8u;
    // 0x2ec5c8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ec5cc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2ec5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec5d0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2ec5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2ec5d4:
    // 0x2ec5d4: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2ec5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ec5d8: 0x11f00003  beq         $t7, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC5D8u;
    {
        const bool branch_taken_0x2ec5d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ec5d8) {
            ctx->pc = 0x2EC5E8u;
            goto label_2ec5e8;
        }
    }
    ctx->pc = 0x2EC5E0u;
    // 0x2ec5e0: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2ec5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x2ec5e4: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x2ec5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_2ec5e8:
    // 0x2ec5e8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC5E8u;
    SET_GPR_U32(ctx, 31, 0x2EC5F0u);
    ctx->pc = 0x2EC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5E8u;
    // 0x2ec5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC5E8u, 0x2EC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5F0u;
label_2ec5f0:
    // 0x2ec5f0: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EC5F0u;
    {
        const bool branch_taken_0x2ec5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5f0) {
            ctx->pc = 0x2EC5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5F0u;
            // 0x2ec5f4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec5d4;
        }
    }
    ctx->pc = 0x2EC5F8u;
label_2ec5f8:
    // 0x2ec5f8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ec5f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ec5fc: 0x25f2eca8  addiu       $s2, $t7, -0x1358
    ctx->pc = 0x2ec5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ec600: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x2ec600u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ec604: 0x8e4d0394  lw          $t5, 0x394($s2)
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
    // 0x2ec608: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x2ec608u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x2ec60c: 0x1cd702b  sltu        $t6, $t6, $t5
    ctx->pc = 0x2ec60cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ec610: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC610u;
    {
        const bool branch_taken_0x2ec610 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC610u;
        // 0x2ec614: 0xae4f0054  sw          $t7, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec610) {
            ctx->pc = 0x2EC61Cu;
            goto label_2ec61c;
        }
    }
    ctx->pc = 0x2EC618u;
    // 0x2ec618: 0xae4d004c  sw          $t5, 0x4C($s2)
    ctx->pc = 0x2ec618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 13));
label_2ec61c:
    // 0x2ec61c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ec61cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ec620: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x2ec620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ec624: 0x26100748  addiu       $s0, $s0, 0x748
    ctx->pc = 0x2ec624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1864));
    // 0x2ec628: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec62c: 0x24e707a8  addiu       $a3, $a3, 0x7A8
    ctx->pc = 0x2ec62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1960));
    // 0x2ec630: 0x24050284  addiu       $a1, $zero, 0x284
    ctx->pc = 0x2ec630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
    // 0x2ec634: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ec634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec638: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC638u;
    SET_GPR_U32(ctx, 31, 0x2EC640u);
    ctx->pc = 0x2EC63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC638u;
    // 0x2ec63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC638u, 0x2EC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC640u;
label_2ec640:
    // 0x2ec640: 0x26511458  addiu       $s1, $s2, 0x1458
    ctx->pc = 0x2ec640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5208));
    // 0x2ec644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec648: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ec648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec64c: 0x2405028c  addiu       $a1, $zero, 0x28C
    ctx->pc = 0x2ec64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
    // 0x2ec650: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EC650u;
    SET_GPR_U32(ctx, 31, 0x2EC658u);
    ctx->pc = 0x2EC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC650u;
    // 0x2ec654: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EC650u, 0x2EC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC658u;
label_2ec658:
    // 0x2ec658: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec658u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec660: 0x2405028f  addiu       $a1, $zero, 0x28F
    ctx->pc = 0x2ec660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x2ec664: 0x24e707c0  addiu       $a3, $a3, 0x7C0
    ctx->pc = 0x2ec664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1984));
    // 0x2ec668: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC668u;
    SET_GPR_U32(ctx, 31, 0x2EC670u);
    ctx->pc = 0x2EC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC668u;
    // 0x2ec66c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC668u, 0x2EC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC670u;
label_2ec670:
    // 0x2ec670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec67c: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EC67Cu;
    SET_GPR_U32(ctx, 31, 0x2EC684u);
    ctx->pc = 0x2EC680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC67Cu;
    // 0x2ec680: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EC67Cu, 0x2EC684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC684u;
label_2ec684:
    // 0x2ec684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec688: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EC688u;
    SET_GPR_U32(ctx, 31, 0x2EC690u);
    ctx->pc = 0x2EC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC688u;
    // 0x2ec68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EC688u, 0x2EC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC690u;
label_2ec690:
    // 0x2ec690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec698: 0x24050294  addiu       $a1, $zero, 0x294
    ctx->pc = 0x2ec698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x2ec69c: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC69Cu;
    SET_GPR_U32(ctx, 31, 0x2EC6A4u);
    ctx->pc = 0x2EC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC69Cu;
    // 0x2ec6a0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC69Cu, 0x2EC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6A4u;
label_2ec6a4:
    // 0x2ec6a4: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x2ec6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x2ec6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6ac: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EC6ACu;
    SET_GPR_U32(ctx, 31, 0x2EC6B4u);
    ctx->pc = 0x2EC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC6ACu;
    // 0x2ec6b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EC6ACu, 0x2EC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6B4u;
label_2ec6b4:
    // 0x2ec6b4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2ec6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2ec6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EC6BCu;
    SET_GPR_U32(ctx, 31, 0x2EC6C4u);
    ctx->pc = 0x2EC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC6BCu;
    // 0x2ec6c0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EC6BCu, 0x2EC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6C4u;
label_2ec6c4:
    // 0x2ec6c4: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2ec6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x2ec6c8: 0x8e4f0378  lw          $t7, 0x378($s2)
    ctx->pc = 0x2ec6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
    // 0x2ec6cc: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC6CCu;
    {
        const bool branch_taken_0x2ec6cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6CCu;
        // 0x2ec6d0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6cc) {
            ctx->pc = 0x2EC704u;
            goto label_2ec704;
        }
    }
    ctx->pc = 0x2EC6D4u;
    // 0x2ec6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6d8: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2ec6d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6dc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ec6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec6e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2ec6e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec6e4:
    // 0x2ec6e4: 0x1aa7004  sllv        $t6, $t2, $t5
    ctx->pc = 0x2ec6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2ec6e8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2ec6e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2ec6ec: 0x1ab782b  sltu        $t7, $t5, $t3
    ctx->pc = 0x2ec6ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2ec6f0: 0x0  nop
    ctx->pc = 0x2ec6f0u;
    // NOP
    // 0x2ec6f4: 0x0  nop
    ctx->pc = 0x2ec6f4u;
    // NOP
    // 0x2ec6f8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC6F8u;
    {
        const bool branch_taken_0x2ec6f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F8u;
        // 0x2ec6fc: 0x18e6025  or          $t4, $t4, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6f8) {
            ctx->pc = 0x2EC6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec6e4;
        }
    }
    ctx->pc = 0x2EC700u;
    // 0x2ec700: 0xac8c0040  sw          $t4, 0x40($a0)
    ctx->pc = 0x2ec700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 12));
label_2ec704:
    // 0x2ec704: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2ec704u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec708: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ec708u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ec70c: 0xadeeecf8  sw          $t6, -0x1308($t7)
    ctx->pc = 0x2ec70cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962424), GPR_U32(ctx, 14));
    // 0x2ec710: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
    ctx->pc = 0x2EC710u;
    {
        const bool branch_taken_0x2ec710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec710) {
            ctx->pc = 0x2EC48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec48c;
        }
    }
    ctx->pc = 0x2EC718u;
    // 0x2ec718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec71c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ec71cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ec720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec724: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2ec724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ec728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ec72c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ec72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ec730: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ec730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ec734: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2ec734u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ec738: 0x11ae000f  beq         $t5, $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC738u;
    {
        const bool branch_taken_0x2ec738 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2EC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC738u;
        // 0x2ec73c: 0x25efeca8  addiu       $t7, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec738) {
            ctx->pc = 0x2EC778u;
            goto label_2ec778;
        }
    }
    ctx->pc = 0x2EC740u;
    // 0x2ec740: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec744: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec748: 0x248407d0  addiu       $a0, $a0, 0x7D0
    ctx->pc = 0x2ec748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    // 0x2ec74c: 0x24e707e0  addiu       $a3, $a3, 0x7E0
    ctx->pc = 0x2ec74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2016));
    // 0x2ec750: 0x240502ba  addiu       $a1, $zero, 0x2BA
    ctx->pc = 0x2ec750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 698));
label_2ec754:
    // 0x2ec754: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC754u;
    SET_GPR_U32(ctx, 31, 0x2EC75Cu);
    ctx->pc = 0x2EC758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC754u;
    // 0x2ec758: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC754u, 0x2EC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC75Cu;
label_2ec75c:
    // 0x2ec75c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec760:
    // 0x2ec760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ec764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ec768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec76c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ec76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ec770: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC770u;
        // 0x2ec774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC778u;
label_2ec778:
    // 0x2ec778: 0x8def0004  lw          $t7, 0x4($t7)
    ctx->pc = 0x2ec778u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x2ec77c: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC77Cu;
    {
        const bool branch_taken_0x2ec77c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC77Cu;
        // 0x2ec780: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec77c) {
            ctx->pc = 0x2EC798u;
            goto label_2ec798;
        }
    }
    ctx->pc = 0x2EC784u;
    // 0x2ec784: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec788: 0x248407d0  addiu       $a0, $a0, 0x7D0
    ctx->pc = 0x2ec788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    // 0x2ec78c: 0x24e707f8  addiu       $a3, $a3, 0x7F8
    ctx->pc = 0x2ec78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2040));
    // 0x2ec790: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC790u;
    {
        const bool branch_taken_0x2ec790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC790u;
        // 0x2ec794: 0x240502bf  addiu       $a1, $zero, 0x2BF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 703));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec790) {
            ctx->pc = 0x2EC754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec754;
        }
    }
    ctx->pc = 0x2EC798u;
label_2ec798:
    // 0x2ec798: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC798u;
    SET_GPR_U32(ctx, 31, 0x2EC7A0u);
    ctx->pc = 0x2EC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC798u;
    // 0x2ec79c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC798u, 0x2EC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7A0u;
label_2ec7a0:
    // 0x2ec7a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC7A0u;
    {
        const bool branch_taken_0x2ec7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7A0u;
        // 0x2ec7a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7a0) {
            ctx->pc = 0x2EC7B8u;
            goto label_2ec7b8;
        }
    }
    ctx->pc = 0x2EC7A8u;
    // 0x2ec7a8: 0x8c4e0010  lw          $t6, 0x10($v0)
    ctx->pc = 0x2ec7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ec7ac: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2ec7acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec7b0: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC7B0u;
    {
        const bool branch_taken_0x2ec7b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ec7b0) {
            ctx->pc = 0x2EC7D0u;
            goto label_2ec7d0;
        }
    }
    ctx->pc = 0x2EC7B8u;
label_2ec7b8:
    // 0x2ec7b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec7bc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec7c0: 0x248407d0  addiu       $a0, $a0, 0x7D0
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    // 0x2ec7c4: 0x24e70818  addiu       $a3, $a3, 0x818
    ctx->pc = 0x2ec7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2072));
    // 0x2ec7c8: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x2EC7C8u;
    {
        const bool branch_taken_0x2ec7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7C8u;
        // 0x2ec7cc: 0x240502cb  addiu       $a1, $zero, 0x2CB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 715));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7c8) {
            ctx->pc = 0x2EC754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec754;
        }
    }
    ctx->pc = 0x2EC7D0u;
label_2ec7d0:
    // 0x2ec7d0: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC7D0u;
    SET_GPR_U32(ctx, 31, 0x2EC7D8u);
    ctx->pc = 0x2EC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7D0u;
    // 0x2ec7d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC7D0u, 0x2EC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7D8u;
label_2ec7d8:
    // 0x2ec7d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC7D8u;
    {
        const bool branch_taken_0x2ec7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D8u;
        // 0x2ec7dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7d8) {
            ctx->pc = 0x2EC80Cu;
            goto label_2ec80c;
        }
    }
    ctx->pc = 0x2EC7E0u;
    // 0x2ec7e0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2ec7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_2ec7e4:
    // 0x2ec7e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ec7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7e8: 0x264407d0  addiu       $a0, $s2, 0x7D0
    ctx->pc = 0x2ec7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2000));
    // 0x2ec7ec: 0x240502d1  addiu       $a1, $zero, 0x2D1
    ctx->pc = 0x2ec7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 721));
    // 0x2ec7f0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EC7F0u;
    SET_GPR_U32(ctx, 31, 0x2EC7F8u);
    ctx->pc = 0x2EC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7F0u;
    // 0x2ec7f4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EC7F0u, 0x2EC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7F8u;
label_2ec7f8:
    // 0x2ec7f8: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2ec7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7fc: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC7FCu;
    SET_GPR_U32(ctx, 31, 0x2EC804u);
    ctx->pc = 0x2EC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7FCu;
    // 0x2ec800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC7FCu, 0x2EC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC804u;
label_2ec804:
    // 0x2ec804: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EC804u;
    {
        const bool branch_taken_0x2ec804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC804u;
        // 0x2ec808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec804) {
            ctx->pc = 0x2EC7E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec7e4;
        }
    }
    ctx->pc = 0x2EC80Cu;
label_2ec80c:
    // 0x2ec80c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ec80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec810: 0x240502d6  addiu       $a1, $zero, 0x2D6
    ctx->pc = 0x2ec810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 726));
    // 0x2ec814: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2ec814u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2ec818: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ec818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec81c: 0x263107d0  addiu       $s1, $s1, 0x7D0
    ctx->pc = 0x2ec81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2000));
    // 0x2ec820: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2ec820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2ec824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec828: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EC828u;
    SET_GPR_U32(ctx, 31, 0x2EC830u);
    ctx->pc = 0x2EC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC828u;
    // 0x2ec82c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EC828u, 0x2EC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC830u;
label_2ec830:
    // 0x2ec830: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec838: 0x240502d9  addiu       $a1, $zero, 0x2D9
    ctx->pc = 0x2ec838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 729));
    // 0x2ec83c: 0x24e70838  addiu       $a3, $a3, 0x838
    ctx->pc = 0x2ec83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2104));
    // 0x2ec840: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC840u;
    SET_GPR_U32(ctx, 31, 0x2EC848u);
    ctx->pc = 0x2EC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC840u;
    // 0x2ec844: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC840u, 0x2EC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC848u;
label_2ec848:
    // 0x2ec848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec84c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec854: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EC854u;
    SET_GPR_U32(ctx, 31, 0x2EC85Cu);
    ctx->pc = 0x2EC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC854u;
    // 0x2ec858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EC854u, 0x2EC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC85Cu;
label_2ec85c:
    // 0x2ec85c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec860: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EC860u;
    SET_GPR_U32(ctx, 31, 0x2EC868u);
    ctx->pc = 0x2EC864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC860u;
    // 0x2ec864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EC860u, 0x2EC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC868u;
label_2ec868:
    // 0x2ec868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec86c: 0x240502de  addiu       $a1, $zero, 0x2DE
    ctx->pc = 0x2ec86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 734));
    // 0x2ec870: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ec870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec874: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC874u;
    SET_GPR_U32(ctx, 31, 0x2EC87Cu);
    ctx->pc = 0x2EC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC874u;
    // 0x2ec878: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC874u, 0x2EC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC87Cu;
label_2ec87c:
    // 0x2ec87c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x2EC87Cu;
    {
        const bool branch_taken_0x2ec87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC87Cu;
        // 0x2ec880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec87c) {
            ctx->pc = 0x2EC760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec760;
        }
    }
    ctx->pc = 0x2EC884u;
    // 0x2ec884: 0x0  nop
    ctx->pc = 0x2ec884u;
    // NOP
    // 0x2ec888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ec888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ec88c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ec88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ec890: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ec890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ec894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ec898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ec89c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ec89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ec8a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ec8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ec8a4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EC8A4u;
    SET_GPR_U32(ctx, 31, 0x2EC8ACu);
    ctx->pc = 0x2EC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8A4u;
    // 0x2ec8a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EC8A4u, 0x2EC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8ACu;
label_2ec8ac:
    // 0x2ec8ac: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2ec8acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2ec8b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec8b4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec8b8: 0x8dcdeca8  lw          $t5, -0x1358($t6)
    ctx->pc = 0x2ec8b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2ec8bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ec8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8c0: 0x24840848  addiu       $a0, $a0, 0x848
    ctx->pc = 0x2ec8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2120));
    // 0x2ec8c4: 0x24e707e0  addiu       $a3, $a3, 0x7E0
    ctx->pc = 0x2ec8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2016));
    // 0x2ec8c8: 0x240502f6  addiu       $a1, $zero, 0x2F6
    ctx->pc = 0x2ec8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 758));
    // 0x2ec8cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ec8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec8d0: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ec8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec8d4: 0x15af0009  bne         $t5, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC8D4u;
    {
        const bool branch_taken_0x2ec8d4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8D4u;
        // 0x2ec8d8: 0x25d3eca8  addiu       $s3, $t6, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8d4) {
            ctx->pc = 0x2EC8FCu;
            goto label_2ec8fc;
        }
    }
    ctx->pc = 0x2EC8DCu;
    // 0x2ec8dc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x2ec8dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ec8e0: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC8E0u;
    {
        const bool branch_taken_0x2ec8e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E0u;
        // 0x2ec8e4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8e0) {
            ctx->pc = 0x2EC928u;
            goto label_2ec928;
        }
    }
    ctx->pc = 0x2EC8E8u;
    // 0x2ec8e8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec8ec: 0x240502fb  addiu       $a1, $zero, 0x2FB
    ctx->pc = 0x2ec8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 763));
    // 0x2ec8f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ec8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec8f4: 0x24840848  addiu       $a0, $a0, 0x848
    ctx->pc = 0x2ec8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2120));
    // 0x2ec8f8: 0x24e707f8  addiu       $a3, $a3, 0x7F8
    ctx->pc = 0x2ec8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2040));
label_2ec8fc:
    // 0x2ec8fc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC8FCu;
    SET_GPR_U32(ctx, 31, 0x2EC904u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC8FCu, 0x2EC904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC904u;
label_2ec904:
    // 0x2ec904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec908:
    // 0x2ec908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec90c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ec90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ec910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec914: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ec914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ec918: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ec918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec91c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ec91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ec920: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC920u;
        // 0x2ec924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC928u;
label_2ec928:
    // 0x2ec928: 0x8e6f0024  lw          $t7, 0x24($s3)
    ctx->pc = 0x2ec928u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2ec92c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC92Cu;
    {
        const bool branch_taken_0x2ec92c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC92Cu;
        // 0x2ec930: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec92c) {
            ctx->pc = 0x2EC950u;
            goto label_2ec950;
        }
    }
    ctx->pc = 0x2EC934u;
    // 0x2ec934: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec938: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec93c: 0x240502ff  addiu       $a1, $zero, 0x2FF
    ctx->pc = 0x2ec93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
    // 0x2ec940: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ec940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec944: 0x24840848  addiu       $a0, $a0, 0x848
    ctx->pc = 0x2ec944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2120));
    // 0x2ec948: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2EC948u;
    {
        const bool branch_taken_0x2ec948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC948u;
        // 0x2ec94c: 0x24e70858  addiu       $a3, $a3, 0x858 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec948) {
            ctx->pc = 0x2EC8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec8fc;
        }
    }
    ctx->pc = 0x2EC950u;
label_2ec950:
    // 0x2ec950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ec950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec954: 0x26310848  addiu       $s1, $s1, 0x848
    ctx->pc = 0x2ec954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
    // 0x2ec958: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2ec958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ec95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec960: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EC960u;
    SET_GPR_U32(ctx, 31, 0x2EC968u);
    ctx->pc = 0x2EC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC960u;
    // 0x2ec964: 0x2405030d  addiu       $a1, $zero, 0x30D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EC960u, 0x2EC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC968u;
label_2ec968:
    // 0x2ec968: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ec968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec96c: 0x96640018  lhu         $a0, 0x18($s3)
    ctx->pc = 0x2ec96cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ec970: 0x26721458  addiu       $s2, $s3, 0x1458
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 5208));
    // 0x2ec974: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ec978: 0xc0bc190  jal         func_2F0640
    ctx->pc = 0x2EC978u;
    SET_GPR_U32(ctx, 31, 0x2EC980u);
    ctx->pc = 0x2EC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC978u;
    // 0x2ec97c: 0xae700024  sw          $s0, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0640u, 0x2EC978u, 0x2EC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC980u;
label_2ec980:
    // 0x2ec980: 0x966f001a  lhu         $t7, 0x1A($s3)
    ctx->pc = 0x2ec980u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x2ec984: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x2ec984u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec988: 0xa66f002a  sh          $t7, 0x2A($s3)
    ctx->pc = 0x2ec988u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ec98c: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EC98Cu;
    SET_GPR_U32(ctx, 31, 0x2EC994u);
    ctx->pc = 0x2EC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC98Cu;
    // 0x2ec990: 0xa6620028  sh          $v0, 0x28($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DE0u, 0x2EC98Cu, 0x2EC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC994u;
label_2ec994:
    // 0x2ec994: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec998: 0xae700050  sw          $s0, 0x50($s3)
    ctx->pc = 0x2ec998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
    // 0x2ec99c: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x2ec99cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x2ec9a0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec9a4: 0x96690028  lhu         $t1, 0x28($s3)
    ctx->pc = 0x2ec9a4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2ec9a8: 0x24e70878  addiu       $a3, $a3, 0x878
    ctx->pc = 0x2ec9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2168));
    // 0x2ec9ac: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ec9acu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ec9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9b4: 0x2405031a  addiu       $a1, $zero, 0x31A
    ctx->pc = 0x2ec9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 794));
    // 0x2ec9b8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC9B8u;
    SET_GPR_U32(ctx, 31, 0x2EC9C0u);
    ctx->pc = 0x2EC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9B8u;
    // 0x2ec9bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC9B8u, 0x2EC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9C0u;
label_2ec9c0:
    // 0x2ec9c0: 0x26660024  addiu       $a2, $s3, 0x24
    ctx->pc = 0x2ec9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2ec9c4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2ec9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ec9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9cc: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EC9CCu;
    SET_GPR_U32(ctx, 31, 0x2EC9D4u);
    ctx->pc = 0x2EC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9CCu;
    // 0x2ec9d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2EC9CCu, 0x2EC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9D4u;
label_2ec9d4:
    // 0x2ec9d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9d8: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EC9D8u;
    SET_GPR_U32(ctx, 31, 0x2EC9E0u);
    ctx->pc = 0x2EC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9D8u;
    // 0x2ec9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2EC9D8u, 0x2EC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9E0u;
label_2ec9e0:
    // 0x2ec9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9e4: 0x2405031f  addiu       $a1, $zero, 0x31F
    ctx->pc = 0x2ec9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
    // 0x2ec9e8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ec9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec9ec: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC9ECu;
    SET_GPR_U32(ctx, 31, 0x2EC9F4u);
    ctx->pc = 0x2EC9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9ECu;
    // 0x2ec9f0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC9ECu, 0x2EC9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9F4u;
label_2ec9f4:
    // 0x2ec9f4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x2EC9F4u;
    {
        const bool branch_taken_0x2ec9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9F4u;
        // 0x2ec9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9f4) {
            ctx->pc = 0x2EC908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec908;
        }
    }
    ctx->pc = 0x2EC9FCu;
    // 0x2ec9fc: 0x0  nop
    ctx->pc = 0x2ec9fcu;
    // NOP
    // 0x2eca00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eca04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eca08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eca0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eca10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eca14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eca18: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECA18u;
    SET_GPR_U32(ctx, 31, 0x2ECA20u);
    ctx->pc = 0x2ECA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA18u;
    // 0x2eca1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECA18u, 0x2ECA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA20u;
label_2eca20:
    // 0x2eca20: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eca20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eca24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eca24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca28: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2eca28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2eca2c: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x2eca2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eca30: 0x11ae0010  beq         $t5, $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ECA30u;
    {
        const bool branch_taken_0x2eca30 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2ECA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA30u;
        // 0x2eca34: 0x25f0eca8  addiu       $s0, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca30) {
            ctx->pc = 0x2ECA74u;
            goto label_2eca74;
        }
    }
    ctx->pc = 0x2ECA38u;
    // 0x2eca38: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eca38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eca3c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2eca40: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x2eca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
    // 0x2eca44: 0x24e707e0  addiu       $a3, $a3, 0x7E0
    ctx->pc = 0x2eca44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2016));
    // 0x2eca48: 0x24050336  addiu       $a1, $zero, 0x336
    ctx->pc = 0x2eca48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 822));
label_2eca4c:
    // 0x2eca4c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECA4Cu;
    SET_GPR_U32(ctx, 31, 0x2ECA54u);
    ctx->pc = 0x2ECA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA4Cu;
    // 0x2eca50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2ECA4Cu, 0x2ECA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA54u;
label_2eca54:
    // 0x2eca54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eca54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eca58:
    // 0x2eca58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eca58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eca5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eca5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eca60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eca60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eca64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eca64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eca68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA6Cu;
        // 0x2eca70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECA74u;
label_2eca74:
    // 0x2eca74: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2eca74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eca78: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2eca78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2eca7c: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECA7Cu;
    {
        const bool branch_taken_0x2eca7c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ECA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA7Cu;
        // 0x2eca80: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca7c) {
            ctx->pc = 0x2ECA9Cu;
            goto label_2eca9c;
        }
    }
    ctx->pc = 0x2ECA84u;
    // 0x2eca84: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eca84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eca88: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2eca88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2eca8c: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x2eca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
    // 0x2eca90: 0x24e708b0  addiu       $a3, $a3, 0x8B0
    ctx->pc = 0x2eca90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2224));
    // 0x2eca94: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2ECA94u;
    {
        const bool branch_taken_0x2eca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA94u;
        // 0x2eca98: 0x2405033b  addiu       $a1, $zero, 0x33B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 827));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca94) {
            ctx->pc = 0x2ECA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2ECA9Cu;
label_2eca9c:
    // 0x2eca9c: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x2eca9cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecaa0: 0x26710898  addiu       $s1, $s3, 0x898
    ctx->pc = 0x2ecaa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2200));
    // 0x2ecaa4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecaa8: 0x24e708c8  addiu       $a3, $a3, 0x8C8
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2248));
    // 0x2ecaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecab0: 0x2405033f  addiu       $a1, $zero, 0x33F
    ctx->pc = 0x2ecab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 831));
    // 0x2ecab4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECAB4u;
    SET_GPR_U32(ctx, 31, 0x2ECABCu);
    ctx->pc = 0x2ECAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAB4u;
    // 0x2ecab8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2ECAB4u, 0x2ECABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECABCu;
label_2ecabc:
    // 0x2ecabc: 0x26101458  addiu       $s0, $s0, 0x1458
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5208));
    // 0x2ecac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ecac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecacc: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2ECACCu;
    SET_GPR_U32(ctx, 31, 0x2ECAD4u);
    ctx->pc = 0x2ECAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECACCu;
    // 0x2ecad0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2ECACCu, 0x2ECAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAD4u;
label_2ecad4:
    // 0x2ecad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecad8: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2ECAD8u;
    SET_GPR_U32(ctx, 31, 0x2ECAE0u);
    ctx->pc = 0x2ECADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAD8u;
    // 0x2ecadc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2ECAD8u, 0x2ECAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAE0u;
label_2ecae0:
    // 0x2ecae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecae4: 0x24050344  addiu       $a1, $zero, 0x344
    ctx->pc = 0x2ecae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
    // 0x2ecae8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ecaec: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2ECAECu;
    SET_GPR_U32(ctx, 31, 0x2ECAF4u);
    ctx->pc = 0x2ECAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAECu;
    // 0x2ecaf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2ECAECu, 0x2ECAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAF4u;
label_2ecaf4:
    // 0x2ecaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecafc: 0x24050346  addiu       $a1, $zero, 0x346
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x2ecb00: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2ECB00u;
    SET_GPR_U32(ctx, 31, 0x2ECB08u);
    ctx->pc = 0x2ECB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB00u;
    // 0x2ecb04: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2ECB00u, 0x2ECB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB08u;
label_2ecb08:
    // 0x2ecb08: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECB08u;
    SET_GPR_U32(ctx, 31, 0x2ECB10u);
    ctx->pc = 0x2ECB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB08u;
    // 0x2ecb0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECB08u, 0x2ECB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB10u;
label_2ecb10:
    // 0x2ecb10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ECB10u;
    {
        const bool branch_taken_0x2ecb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB10u;
        // 0x2ecb14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb10) {
            ctx->pc = 0x2ECB40u;
            goto label_2ecb40;
        }
    }
    ctx->pc = 0x2ECB18u;
    // 0x2ecb18: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2ecb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb1c:
    // 0x2ecb1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ecb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb20: 0x24050348  addiu       $a1, $zero, 0x348
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
    // 0x2ecb24: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2ecb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ecb28: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2ECB28u;
    SET_GPR_U32(ctx, 31, 0x2ECB30u);
    ctx->pc = 0x2ECB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB28u;
    // 0x2ecb2c: 0x26240898  addiu       $a0, $s1, 0x898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2ECB28u, 0x2ECB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB30u;
label_2ecb30:
    // 0x2ecb30: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECB30u;
    SET_GPR_U32(ctx, 31, 0x2ECB38u);
    ctx->pc = 0x2ECB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB30u;
    // 0x2ecb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECB30u, 0x2ECB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB38u;
label_2ecb38:
    // 0x2ecb38: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2ECB38u;
    {
        const bool branch_taken_0x2ecb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB38u;
        // 0x2ecb3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb38) {
            ctx->pc = 0x2ECB1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecb1c;
        }
    }
    ctx->pc = 0x2ECB40u;
label_2ecb40:
    // 0x2ecb40: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecb40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ecb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ecb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecb48: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x2ECB48u;
    {
        const bool branch_taken_0x2ecb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB48u;
        // 0x2ecb4c: 0xade0eccc  sw          $zero, -0x1334($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294962380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb48) {
            ctx->pc = 0x2ECA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eca58;
        }
    }
    ctx->pc = 0x2ECB50u;
    // 0x2ecb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ecb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ecb54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ecb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ecb58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ecb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ecb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecb60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ecb64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ecb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ecb68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ecb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ecb6c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECB6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB74u);
    ctx->pc = 0x2ECB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB6Cu;
    // 0x2ecb70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECB6Cu, 0x2ECB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB74u;
label_2ecb74:
    // 0x2ecb74: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2ecb74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2ecb78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ecb7c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecb80: 0x8dcdeca8  lw          $t5, -0x1358($t6)
    ctx->pc = 0x2ecb80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2ecb84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ecb84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb88: 0x248408e0  addiu       $a0, $a0, 0x8E0
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2272));
    // 0x2ecb8c: 0x24e708f0  addiu       $a3, $a3, 0x8F0
    ctx->pc = 0x2ecb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2288));
    // 0x2ecb90: 0x24050360  addiu       $a1, $zero, 0x360
    ctx->pc = 0x2ecb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x2ecb94: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ecb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecb98: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ecb98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ecb9c: 0x15af000e  bne         $t5, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x2ECB9Cu;
    {
        const bool branch_taken_0x2ecb9c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ECBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB9Cu;
        // 0x2ecba0: 0x25d3eca8  addiu       $s3, $t6, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb9c) {
            ctx->pc = 0x2ECBD8u;
            goto label_2ecbd8;
        }
    }
    ctx->pc = 0x2ECBA4u;
    // 0x2ecba4: 0x8e6f0030  lw          $t7, 0x30($s3)
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2ecba8: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECBA8u;
    {
        const bool branch_taken_0x2ecba8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecba8) {
            ctx->pc = 0x2ECBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECBA8u;
            // 0x2ecbac: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBC4u;
            goto label_2ecbc4;
        }
    }
    ctx->pc = 0x2ECBB0u;
    // 0x2ecbb0: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x2ecbb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ecbb4: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x2ecbb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ecbb8: 0x15cf0012  bne         $t6, $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ECBB8u;
    {
        const bool branch_taken_0x2ecbb8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ECBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB8u;
        // 0x2ecbbc: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbb8) {
            ctx->pc = 0x2ECC04u;
            goto label_2ecc04;
        }
    }
    ctx->pc = 0x2ECBC0u;
    // 0x2ecbc0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2ecbc4:
    // 0x2ecbc4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecbc8: 0x24050365  addiu       $a1, $zero, 0x365
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x2ecbcc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecbd0: 0x248408e0  addiu       $a0, $a0, 0x8E0
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2272));
    // 0x2ecbd4: 0x24e70858  addiu       $a3, $a3, 0x858
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2136));
label_2ecbd8:
    // 0x2ecbd8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECBD8u;
    SET_GPR_U32(ctx, 31, 0x2ECBE0u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2ECBD8u, 0x2ECBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBE0u;
label_2ecbe0:
    // 0x2ecbe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbe4:
    // 0x2ecbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecbe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecbec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecbecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecbf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ecbf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ecbf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecbf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ecbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ecbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBFCu;
        // 0x2ecc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECC04u;
label_2ecc04:
    // 0x2ecc04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ecc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc08: 0x263108e0  addiu       $s1, $s1, 0x8E0
    ctx->pc = 0x2ecc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
    // 0x2ecc0c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x2ecc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ecc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc14: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2ECC14u;
    SET_GPR_U32(ctx, 31, 0x2ECC1Cu);
    ctx->pc = 0x2ECC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC14u;
    // 0x2ecc18: 0x24050374  addiu       $a1, $zero, 0x374 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2ECC14u, 0x2ECC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC1Cu;
label_2ecc1c:
    // 0x2ecc1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ecc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecc20: 0x96640018  lhu         $a0, 0x18($s3)
    ctx->pc = 0x2ecc20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ecc24: 0x26721458  addiu       $s2, $s3, 0x1458
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 5208));
    // 0x2ecc28: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x2ecc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ecc2c: 0xc0bc190  jal         func_2F0640
    ctx->pc = 0x2ECC2Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC34u);
    ctx->pc = 0x2ECC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC2Cu;
    // 0x2ecc30: 0xae700030  sw          $s0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0640u, 0x2ECC2Cu, 0x2ECC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC34u;
label_2ecc34:
    // 0x2ecc34: 0x966f001a  lhu         $t7, 0x1A($s3)
    ctx->pc = 0x2ecc34u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x2ecc38: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x2ecc38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecc3c: 0xa66f0036  sh          $t7, 0x36($s3)
    ctx->pc = 0x2ecc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ecc40: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2ECC40u;
    SET_GPR_U32(ctx, 31, 0x2ECC48u);
    ctx->pc = 0x2ECC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC40u;
    // 0x2ecc44: 0xa6620034  sh          $v0, 0x34($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DE0u, 0x2ECC40u, 0x2ECC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC48u;
label_2ecc48:
    // 0x2ecc48: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ecc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ecc4c: 0xae700050  sw          $s0, 0x50($s3)
    ctx->pc = 0x2ecc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
    // 0x2ecc50: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x2ecc50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x2ecc54: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecc58: 0x96690034  lhu         $t1, 0x34($s3)
    ctx->pc = 0x2ecc58u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2ecc5c: 0x24e70918  addiu       $a3, $a3, 0x918
    ctx->pc = 0x2ecc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2328));
    // 0x2ecc60: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x2ecc60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ecc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc68: 0x24050381  addiu       $a1, $zero, 0x381
    ctx->pc = 0x2ecc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 897));
    // 0x2ecc6c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECC6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC74u);
    ctx->pc = 0x2ECC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC6Cu;
    // 0x2ecc70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2ECC6Cu, 0x2ECC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC74u;
label_2ecc74:
    // 0x2ecc74: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2ecc78: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ecc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc80: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2ECC80u;
    SET_GPR_U32(ctx, 31, 0x2ECC88u);
    ctx->pc = 0x2ECC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC80u;
    // 0x2ecc84: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0800u, 0x2ECC80u, 0x2ECC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC88u;
label_2ecc88:
    // 0x2ecc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ecc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc8c: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2ECC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC94u);
    ctx->pc = 0x2ECC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC8Cu;
    // 0x2ecc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A00u, 0x2ECC8Cu, 0x2ECC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC94u;
label_2ecc94:
    // 0x2ecc94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc98: 0x24050386  addiu       $a1, $zero, 0x386
    ctx->pc = 0x2ecc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 902));
    // 0x2ecc9c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ecca0: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2ECCA0u;
    SET_GPR_U32(ctx, 31, 0x2ECCA8u);
    ctx->pc = 0x2ECCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCA0u;
    // 0x2ecca4: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2ECCA0u, 0x2ECCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCA8u;
label_2ecca8:
    // 0x2ecca8: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x2ECCA8u;
    {
        const bool branch_taken_0x2ecca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCA8u;
        // 0x2eccac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecca8) {
            ctx->pc = 0x2ECBE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecbe4;
        }
    }
    ctx->pc = 0x2ECCB0u;
}
