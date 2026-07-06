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

// Function: sub_002E02F8
// Address: 0x2e02f8 - 0x2e0378
void sub_002E02F8_0x2e02f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E02F8_0x2e02f8");
#endif

    switch (ctx->pc) {
        case 0x2e0328u: goto label_2e0328;
        default: break;
    }

    ctx->pc = 0x2e02f8u;

label_2e02f8:
    // 0x2e02f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e02f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e02fc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e02fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0300: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0304: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e0308: 0x780c0  sll         $s0, $a3, 3
    ctx->pc = 0x2e0308u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2e030c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0310: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e0310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e0314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0318: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e0318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e031c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e031cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0320: 0xc0b55fa  jal         func_2D57E8
    ctx->pc = 0x2E0320u;
    SET_GPR_U32(ctx, 31, 0x2E0328u);
    ctx->pc = 0x2E0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0320u;
    // 0x2e0324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D57E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D57E8u, 0x2E0320u, 0x2E0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0328u;
label_2e0328:
    // 0x2e0328: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e0328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e032c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E032Cu;
    {
        const bool branch_taken_0x2e032c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E032Cu;
        // 0x2e0330: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e032c) {
            ctx->pc = 0x2E0340u;
            goto label_2e0340;
        }
    }
    ctx->pc = 0x2E0334u;
    // 0x2e0334: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0338: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2e0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2e033c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2e033cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_2e0340:
    // 0x2e0340: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0344: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0348: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e0348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e034c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E034Cu;
        // 0x2e0350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E034Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0354u;
    // 0x2e0354: 0x0  nop
    ctx->pc = 0x2e0354u;
    // NOP
    // 0x2e0358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e035c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e035cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0364: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e0364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e036c: 0x80b80be  j           func_2E02F8
    ctx->pc = 0x2E036Cu;
    ctx->pc = 0x2E0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E036Cu;
    // 0x2e0370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2e02f8;
    ctx->pc = 0x2E0374u;
    // 0x2e0374: 0x0  nop
    ctx->pc = 0x2e0374u;
    // NOP
    if (ctx->pc == 0x2e0374u) { ctx->pc = 0x2e0378u; }
}
