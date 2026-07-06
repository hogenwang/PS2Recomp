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

// Function: sub_00281848
// Address: 0x281848 - 0x2818e8
void sub_00281848_0x281848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281848_0x281848");
#endif

    switch (ctx->pc) {
        case 0x281870u: goto label_281870;
        case 0x2818b8u: goto label_2818b8;
        default: break;
    }

    ctx->pc = 0x281848u;

    // 0x281848: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x281848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x28184c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28184Cu;
    {
        const bool branch_taken_0x28184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28184Cu;
        // 0x281850: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28184c) {
            ctx->pc = 0x281860u;
            goto label_281860;
        }
    }
    ctx->pc = 0x281854u;
    // 0x281854: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x281854u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x281858: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x281858u;
    {
        const bool branch_taken_0x281858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281858u;
        // 0x28185c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281858) {
            ctx->pc = 0x2818E0u;
            goto label_2818e0;
        }
    }
    ctx->pc = 0x281860u;
label_281860:
    // 0x281860: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x281860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281864: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x281864u;
    {
        const bool branch_taken_0x281864 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x281868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281864u;
        // 0x281868: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281864) {
            ctx->pc = 0x281894u;
            goto label_281894;
        }
    }
    ctx->pc = 0x28186Cu;
    // 0x28186c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_281870:
    // 0x281870: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x281870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x281874: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x281874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x281878: 0x0  nop
    ctx->pc = 0x281878u;
    // NOP
    // 0x28187c: 0x0  nop
    ctx->pc = 0x28187cu;
    // NOP
    // 0x281880: 0x0  nop
    ctx->pc = 0x281880u;
    // NOP
    // 0x281884: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x281884u;
    {
        const bool branch_taken_0x281884 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x281884) {
            ctx->pc = 0x281870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281870;
        }
    }
    ctx->pc = 0x28188Cu;
    // 0x28188c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28188Cu;
    {
        const bool branch_taken_0x28188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28188Cu;
        // 0x281890: 0x34e20080  ori         $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28188c) {
            ctx->pc = 0x28189Cu;
            goto label_28189c;
        }
    }
    ctx->pc = 0x281894u;
label_281894:
    // 0x281894: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x281894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x281898: 0x34e20080  ori         $v0, $a3, 0x80
    ctx->pc = 0x281898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
label_28189c:
    // 0x28189c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x28189cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818a0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2818a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2818a4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2818a8: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2818A8u;
    {
        const bool branch_taken_0x2818a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2818ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818A8u;
        // 0x2818ac: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818a8) {
            ctx->pc = 0x2818DCu;
            goto label_2818dc;
        }
    }
    ctx->pc = 0x2818B0u;
    // 0x2818b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2818b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2818b4: 0x0  nop
    ctx->pc = 0x2818b4u;
    // NOP
label_2818b8:
    // 0x2818b8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2818bc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2818bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818c0: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2818c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2818c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2818c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2818c8: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x2818cc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2818CCu;
    {
        const bool branch_taken_0x2818cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2818cc) {
            ctx->pc = 0x2818B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2818b8;
        }
    }
    ctx->pc = 0x2818D4u;
    // 0x2818d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2818D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818D4u;
        // 0x2818d8: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2818DCu;
label_2818dc:
    // 0x2818dc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2818dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2818e0:
    // 0x2818e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2818E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818E0u;
        // 0x2818e4: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2818E8u;
}
