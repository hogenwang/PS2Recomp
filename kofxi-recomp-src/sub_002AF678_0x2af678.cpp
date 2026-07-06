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

// Function: sub_002AF678
// Address: 0x2af678 - 0x2af718
void sub_002AF678_0x2af678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF678_0x2af678");
#endif

    switch (ctx->pc) {
        case 0x2af6bcu: goto label_2af6bc;
        default: break;
    }

    ctx->pc = 0x2af678u;

    // 0x2af678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2af678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2af67c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2af684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2af688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af68c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af690: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x2af690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2af694: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AF694u;
    {
        const bool branch_taken_0x2af694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF694u;
        // 0x2af698: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af694) {
            ctx->pc = 0x2AF6FCu;
            goto label_2af6fc;
        }
    }
    ctx->pc = 0x2AF69Cu;
    // 0x2af69c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2af69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2af6a0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AF6A0u;
    {
        const bool branch_taken_0x2af6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6A0u;
        // 0x2af6a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6a0) {
            ctx->pc = 0x2AF700u;
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF6A8u;
    // 0x2af6a8: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2af6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2af6ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF6ACu;
    {
        const bool branch_taken_0x2af6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6ACu;
        // 0x2af6b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6ac) {
            ctx->pc = 0x2AF700u;
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF6B4u;
    // 0x2af6b4: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x2AF6B4u;
    SET_GPR_U32(ctx, 31, 0x2AF6BCu);
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2AF6B4u, 0x2AF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6BCu;
label_2af6bc:
    // 0x2af6bc: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2af6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x2af6c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF6C0u;
    {
        const bool branch_taken_0x2af6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6C0u;
        // 0x2af6c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6c0) {
            ctx->pc = 0x2AF700u;
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF6C8u;
    // 0x2af6c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af6cc: 0x24023004  addiu       $v0, $zero, 0x3004
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12292));
    // 0x2af6d0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2af6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2af6d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af6d8: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x2af6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x2af6dc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af6e0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x2af6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x2af6e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af6e8: 0xac62011c  sw          $v0, 0x11C($v1)
    ctx->pc = 0x2af6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 2));
    // 0x2af6ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af6f0: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x2af6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2af6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af6f8: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x2af6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
label_2af6fc:
    // 0x2af6fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2af6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2af700:
    // 0x2af700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2af700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af704: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF70Cu;
        // 0x2af710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF714u;
    // 0x2af714: 0x0  nop
    ctx->pc = 0x2af714u;
    // NOP
}
