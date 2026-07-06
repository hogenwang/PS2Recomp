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

// Function: sub_002EB798
// Address: 0x2eb798 - 0x2eb808
void sub_002EB798_0x2eb798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB798_0x2eb798");
#endif

    switch (ctx->pc) {
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        default: break;
    }

    ctx->pc = 0x2eb798u;

    // 0x2eb798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb79c: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2eb79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2eb7a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eb7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eb7a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eb7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb7a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eb7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eb7ac: 0x24840648  addiu       $a0, $a0, 0x648
    ctx->pc = 0x2eb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    // 0x2eb7b0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2eb7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2eb7b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb7b8: 0x8e09eca0  lw          $t1, -0x1360($s0)
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
    // 0x2eb7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7c8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb7cc: 0xc04434c  jal         func_110D30
    ctx->pc = 0x2EB7CCu;
    SET_GPR_U32(ctx, 31, 0x2EB7D4u);
    ctx->pc = 0x2EB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7CCu;
    // 0x2eb7d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x2EB7CCu, 0x2EB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7D4u;
label_2eb7d4:
    // 0x2eb7d4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB7D4u;
    {
        const bool branch_taken_0x2eb7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D4u;
        // 0x2eb7d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7d4) {
            ctx->pc = 0x2EB7FCu;
            goto label_2eb7fc;
        }
    }
    ctx->pc = 0x2EB7DCu;
    // 0x2eb7dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb7e0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2EB7E0u;
    SET_GPR_U32(ctx, 31, 0x2EB7E8u);
    ctx->pc = 0x2EB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7E0u;
    // 0x2eb7e4: 0x248403a0  addiu       $a0, $a0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2EB7E0u, 0x2EB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7E8u;
label_2eb7e8:
    // 0x2eb7e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eb7ec:
    // 0x2eb7ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb7f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eb7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F4u;
        // 0x2eb7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB7FCu;
label_2eb7fc:
    // 0x2eb7fc: 0x8e0feca0  lw          $t7, -0x1360($s0)
    ctx->pc = 0x2eb7fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
    // 0x2eb800: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EB800u;
    {
        const bool branch_taken_0x2eb800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB800u;
        // 0x2eb804: 0x8de20000  lw          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb800) {
            ctx->pc = 0x2EB7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb7ec;
        }
    }
    ctx->pc = 0x2EB808u;
}
