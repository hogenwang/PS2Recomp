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

// Function: sub_00111550
// Address: 0x111550 - 0x1115d8
void sub_00111550_0x111550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111550_0x111550");
#endif

    switch (ctx->pc) {
        case 0x111568u: goto label_111568;
        case 0x111570u: goto label_111570;
        case 0x111590u: goto label_111590;
        case 0x1115a4u: goto label_1115a4;
        case 0x1115c0u: goto label_1115c0;
        default: break;
    }

    ctx->pc = 0x111550u;

    // 0x111550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111554: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11155c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111560: 0xc044518  jal         func_111460
    ctx->pc = 0x111560u;
    SET_GPR_U32(ctx, 31, 0x111568u);
    ctx->pc = 0x111564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111560u;
    // 0x111564: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111460u, 0x111560u, 0x111568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111568u;
label_111568:
    // 0x111568: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x111568u;
    SET_GPR_U32(ctx, 31, 0x111570u);
    ctx->pc = 0x11156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111568u;
    // 0x11156c: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x111568u, 0x111570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111570u;
label_111570:
    // 0x111570: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x111574: 0x24709780  addiu       $s0, $v1, -0x6880
    ctx->pc = 0x111574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x111578: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x111578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x11157c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x11157cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x111580: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111580u;
    {
        const bool branch_taken_0x111580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111580) {
            ctx->pc = 0x1115B8u;
            goto label_1115b8;
        }
    }
    ctx->pc = 0x111588u;
    // 0x111588: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x111588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11158c: 0x0  nop
    ctx->pc = 0x11158cu;
    // NOP
label_111590:
    // 0x111590: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x111590u;
    {
        const bool branch_taken_0x111590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111590) {
            ctx->pc = 0x111594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111590u;
            // 0x111594: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1115ACu;
            goto label_1115ac;
        }
    }
    ctx->pc = 0x111598u;
    // 0x111598: 0x8e248748  lw          $a0, -0x78B8($s1)
    ctx->pc = 0x111598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
    // 0x11159c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11159Cu;
    SET_GPR_U32(ctx, 31, 0x1115A4u);
    ctx->pc = 0x1115A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11159Cu;
    // 0x1115a0: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11159Cu, 0x1115A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115A4u;
label_1115a4:
    // 0x1115a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1115A4u;
    {
        const bool branch_taken_0x1115a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115A4u;
        // 0x1115a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115a4) {
            ctx->pc = 0x1115C4u;
            goto label_1115c4;
        }
    }
    ctx->pc = 0x1115ACu;
label_1115ac:
    // 0x1115ac: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1115b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1115B0u;
    {
        const bool branch_taken_0x1115b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1115b0) {
            ctx->pc = 0x1115B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1115B0u;
            // 0x1115b4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111590;
        }
    }
    ctx->pc = 0x1115B8u;
label_1115b8:
    // 0x1115b8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1115B8u;
    SET_GPR_U32(ctx, 31, 0x1115C0u);
    ctx->pc = 0x1115BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115B8u;
    // 0x1115bc: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x1115B8u, 0x1115C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115C0u;
label_1115c0:
    // 0x1115c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1115c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1115c4:
    // 0x1115c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1115c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1115c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1115c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1115cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1115D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1115D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D0u;
        // 0x1115d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1115D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1115D8u;
}
