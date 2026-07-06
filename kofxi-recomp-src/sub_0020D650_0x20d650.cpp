#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D650
// Address: 0x20d650 - 0x20d6c0
void sub_0020D650_0x20d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D650_0x20d650");
#endif

    switch (ctx->pc) {
        case 0x20d670u: goto label_20d670;
        default: break;
    }

    ctx->pc = 0x20d650u;

    // 0x20d650: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20d650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20d654: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x20d654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x20d658: 0x9466a6f0  lhu         $a2, -0x5910($v1)
    ctx->pc = 0x20d658u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294944496)));
    // 0x20d65c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x20d65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d660: 0x24e7a6f0  addiu       $a3, $a3, -0x5910
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944496));
    // 0x20d664: 0x10c5000a  beq         $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x20D664u;
    {
        const bool branch_taken_0x20d664 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x20D668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D664u;
            // 0x20d668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d664) {
            ctx->pc = 0x20D690u;
            goto label_20d690;
        }
    }
    ctx->pc = 0x20D66Cu;
    // 0x20d66c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x20d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_20d670:
    // 0x20d670: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D670u;
    {
        const bool branch_taken_0x20d670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x20d670) {
            ctx->pc = 0x20D674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D670u;
            // 0x20d674: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D680u;
            goto label_20d680;
        }
    }
    ctx->pc = 0x20D678u;
    // 0x20d678: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20D678u;
    {
        const bool branch_taken_0x20d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d678) {
            ctx->pc = 0x20D6B8u;
            goto label_20d6b8;
        }
    }
    ctx->pc = 0x20D680u;
label_20d680:
    // 0x20d680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d684: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x20d684u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20d688: 0x14c5fff9  bne         $a2, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D688u;
    {
        const bool branch_taken_0x20d688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x20D68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D688u;
            // 0x20d68c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d688) {
            ctx->pc = 0x20D670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d670;
        }
    }
    ctx->pc = 0x20D690u;
label_20d690:
    // 0x20d690: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x20d690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x20d694: 0x340283b5  ori         $v0, $zero, 0x83B5
    ctx->pc = 0x20d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33717);
    // 0x20d698: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D698u;
    {
        const bool branch_taken_0x20d698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d698) {
            ctx->pc = 0x20D69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D698u;
            // 0x20d69c: 0x340283b6  ori         $v0, $zero, 0x83B6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33718);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D6A8u;
            goto label_20d6a8;
        }
    }
    ctx->pc = 0x20D6A0u;
    // 0x20d6a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20D6A0u;
    {
        const bool branch_taken_0x20d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6A0u;
            // 0x20d6a4: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6a0) {
            ctx->pc = 0x20D6B8u;
            goto label_20d6b8;
        }
    }
    ctx->pc = 0x20D6A8u;
label_20d6a8:
    // 0x20d6a8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D6A8u;
    {
        const bool branch_taken_0x20d6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d6a8) {
            ctx->pc = 0x20D6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6A8u;
            // 0x20d6ac: 0x3402fffe  ori         $v0, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D6B8u;
            goto label_20d6b8;
        }
    }
    ctx->pc = 0x20D6B0u;
    // 0x20d6b0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20D6B0u;
    {
        const bool branch_taken_0x20d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6B0u;
            // 0x20d6b4: 0x24020119  addiu       $v0, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6b0) {
            ctx->pc = 0x20D6B8u;
            goto label_20d6b8;
        }
    }
    ctx->pc = 0x20D6B8u;
label_20d6b8:
    // 0x20d6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D6C0u;
    ctx->pc = 0x20d6c0u;
}
