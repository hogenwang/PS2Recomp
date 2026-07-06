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

// Function: sub_002E8470
// Address: 0x2e8470 - 0x2e84f0
void sub_002E8470_0x2e8470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8470_0x2e8470");
#endif

    switch (ctx->pc) {
        case 0x2e848cu: goto label_2e848c;
        case 0x2e8498u: goto label_2e8498;
        case 0x2e84c0u: goto label_2e84c0;
        case 0x2e84c8u: goto label_2e84c8;
        default: break;
    }

    ctx->pc = 0x2e8470u;

    // 0x2e8470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e8474: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2e8474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2e8478: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e8478u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e847c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e8480: 0x8e24ea10  lw          $a0, -0x15F0($s1)
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
    // 0x2e8484: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2E8484u;
    SET_GPR_U32(ctx, 31, 0x2E848Cu);
    ctx->pc = 0x2E8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8484u;
    // 0x2e8488: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2E8484u, 0x2E848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E848Cu;
label_2e848c:
    // 0x2e848c: 0x8e24ea10  lw          $a0, -0x15F0($s1)
    ctx->pc = 0x2e848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
    // 0x2e8490: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2E8490u;
    SET_GPR_U32(ctx, 31, 0x2E8498u);
    ctx->pc = 0x2E8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8490u;
    // 0x2e8494: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2E8490u, 0x2E8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8498u;
label_2e8498:
    // 0x2e8498: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8498u;
    {
        const bool branch_taken_0x2e8498 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8498u;
        // 0x2e849c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8498) {
            ctx->pc = 0x2E84A8u;
            goto label_2e84a8;
        }
    }
    ctx->pc = 0x2E84A0u;
    // 0x2e84a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E84A0u;
    {
        const bool branch_taken_0x2e84a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84A0u;
        // 0x2e84a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84a0) {
            ctx->pc = 0x2E84DCu;
            goto label_2e84dc;
        }
    }
    ctx->pc = 0x2E84A8u;
label_2e84a8:
    // 0x2e84a8: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E84A8u;
    {
        const bool branch_taken_0x2e84a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e84a8) {
            ctx->pc = 0x2E84ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E84A8u;
            // 0x2e84ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84DCu;
            goto label_2e84dc;
        }
    }
    ctx->pc = 0x2E84B0u;
    // 0x2e84b0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E84B0u;
    {
        const bool branch_taken_0x2e84b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84B0u;
        // 0x2e84b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84b0) {
            ctx->pc = 0x2E84D8u;
            goto label_2e84d8;
        }
    }
    ctx->pc = 0x2E84B8u;
    // 0x2e84b8: 0x8e24ea10  lw          $a0, -0x15F0($s1)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
    // 0x2e84bc: 0x0  nop
    ctx->pc = 0x2e84bcu;
    // NOP
label_2e84c0:
    // 0x2e84c0: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x2E84C0u;
    SET_GPR_U32(ctx, 31, 0x2E84C8u);
    ctx->pc = 0x2E84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84C0u;
    // 0x2e84c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2E84C0u, 0x2E84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84C8u;
label_2e84c8:
    // 0x2e84c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e84cc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2e84ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e84d0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E84D0u;
    {
        const bool branch_taken_0x2e84d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D0u;
        // 0x2e84d4: 0x8e24ea10  lw          $a0, -0x15F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d0) {
            ctx->pc = 0x2E84C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e84c0;
        }
    }
    ctx->pc = 0x2E84D8u;
label_2e84d8:
    // 0x2e84d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e84d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e84dc:
    // 0x2e84dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e84dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e84e0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2e84e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e84e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e84e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e84e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E84E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84E8u;
        // 0x2e84ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E84E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E84F0u;
}
