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

// Function: sub_002DFB90
// Address: 0x2dfb90 - 0x2dfc10
void sub_002DFB90_0x2dfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFB90_0x2dfb90");
#endif

    switch (ctx->pc) {
        case 0x2dfbb0u: goto label_2dfbb0;
        case 0x2dfbc0u: goto label_2dfbc0;
        default: break;
    }

    ctx->pc = 0x2dfb90u;

label_2dfb90:
    // 0x2dfb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfb94: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2dfb94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dfb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dfb9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dfb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dfba0: 0x780c0  sll         $s0, $a3, 3
    ctx->pc = 0x2dfba0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2dfba4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2dfba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfba8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dfba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dfbacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbb0:
    // 0x2dfbb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dfbb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbb4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dfbb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbb8: 0xc0b5570  jal         func_2D55C0
    ctx->pc = 0x2DFBB8u;
    SET_GPR_U32(ctx, 31, 0x2DFBC0u);
    ctx->pc = 0x2DFBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBB8u;
    // 0x2dfbbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D55C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D55C0u, 0x2DFBB8u, 0x2DFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBC0u;
label_2dfbc0:
    // 0x2dfbc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dfbc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFBC4u;
    {
        const bool branch_taken_0x2dfbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBC4u;
        // 0x2dfbc8: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfbc4) {
            ctx->pc = 0x2DFBD8u;
            goto label_2dfbd8;
        }
    }
    ctx->pc = 0x2DFBCCu;
    // 0x2dfbcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfbd0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2dfbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2dfbd4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2dfbd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_2dfbd8:
    // 0x2dfbd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dfbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfbdc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2dfbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbe0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dfbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dfbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBE4u;
        // 0x2dfbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFBECu;
    // 0x2dfbec: 0x0  nop
    ctx->pc = 0x2dfbecu;
    // NOP
    // 0x2dfbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfbf4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2dfbf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfbfc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc04: 0x80b7ee4  j           func_2DFB90
    ctx->pc = 0x2DFC04u;
    ctx->pc = 0x2DFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC04u;
    // 0x2dfc08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2dfb90;
    ctx->pc = 0x2DFC0Cu;
    // 0x2dfc0c: 0x0  nop
    ctx->pc = 0x2dfc0cu;
    // NOP
    if (ctx->pc == 0x2dfc0cu) { ctx->pc = 0x2dfc10u; }
}
