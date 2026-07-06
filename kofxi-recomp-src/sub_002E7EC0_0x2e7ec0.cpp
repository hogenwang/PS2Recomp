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

// Function: sub_002E7EC0
// Address: 0x2e7ec0 - 0x2e7f28
void sub_002E7EC0_0x2e7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7EC0_0x2e7ec0");
#endif

    switch (ctx->pc) {
        case 0x2e7ee0u: goto label_2e7ee0;
        default: break;
    }

    ctx->pc = 0x2e7ec0u;

    // 0x2e7ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ed0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e7ed4: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x2e7ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ed8: 0xc098552  jal         func_261548
    ctx->pc = 0x2E7ED8u;
    SET_GPR_U32(ctx, 31, 0x2E7EE0u);
    ctx->pc = 0x2E7EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7ED8u;
    // 0x2e7edc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E7ED8u, 0x2E7EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EE0u;
label_2e7ee0:
    // 0x2e7ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e7ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ee4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7EE4u;
    {
        const bool branch_taken_0x2e7ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ee4) {
            ctx->pc = 0x2E7EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7EE4u;
            // 0x2e7ee8: 0xac900004  sw          $s0, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7EF4u;
            goto label_2e7ef4;
        }
    }
    ctx->pc = 0x2E7EECu;
    // 0x2e7eec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7EECu;
    {
        const bool branch_taken_0x2e7eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EECu;
        // 0x2e7ef0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7eec) {
            ctx->pc = 0x2E7F10u;
            goto label_2e7f10;
        }
    }
    ctx->pc = 0x2E7EF4u;
label_2e7ef4:
    // 0x2e7ef4: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x2e7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
    // 0x2e7ef8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2e7efc: 0x8c62fd98  lw          $v0, -0x268($v1)
    ctx->pc = 0x2e7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966680)));
    // 0x2e7f00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e7f04: 0xac64fd98  sw          $a0, -0x268($v1)
    ctx->pc = 0x2e7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966680), GPR_U32(ctx, 4));
    // 0x2e7f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f0c: 0x0  nop
    ctx->pc = 0x2e7f0cu;
    // NOP
label_2e7f10:
    // 0x2e7f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7f14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e7f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F1Cu;
        // 0x2e7f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7F24u;
    // 0x2e7f24: 0x0  nop
    ctx->pc = 0x2e7f24u;
    // NOP
    if (ctx->pc == 0x2e7f24u) { ctx->pc = 0x2e7f28u; }
}
