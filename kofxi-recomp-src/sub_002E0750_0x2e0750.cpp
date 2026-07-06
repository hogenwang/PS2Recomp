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

// Function: sub_002E0750
// Address: 0x2e0750 - 0x2e07e0
void sub_002E0750_0x2e0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0750_0x2e0750");
#endif

    switch (ctx->pc) {
        case 0x2e0788u: goto label_2e0788;
        case 0x2e07a0u: goto label_2e07a0;
        case 0x2e07b8u: goto label_2e07b8;
        default: break;
    }

    ctx->pc = 0x2e0750u;

    // 0x2e0750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0754: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e0754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e0758: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e0758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e075c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0764: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2e0764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0768: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e0768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e076c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0770: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e0770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0774: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e0774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0778: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e077c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e0780: 0xc0b7e80  jal         func_2DFA00
    ctx->pc = 0x2E0780u;
    SET_GPR_U32(ctx, 31, 0x2E0788u);
    ctx->pc = 0x2E0784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0780u;
    // 0x2e0784: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFA00u, 0x2E0780u, 0x2E0788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0788u;
label_2e0788:
    // 0x2e0788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e078c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e078cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0790: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0790u;
    {
        const bool branch_taken_0x2e0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0790u;
        // 0x2e0794: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0790) {
            ctx->pc = 0x2E07A8u;
            goto label_2e07a8;
        }
    }
    ctx->pc = 0x2E0798u;
    // 0x2e0798: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E0798u;
    SET_GPR_U32(ctx, 31, 0x2E07A0u);
    ctx->pc = 0x2E079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0798u;
    // 0x2e079c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E0798u, 0x2E07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07A0u;
label_2e07a0:
    // 0x2e07a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E07A0u;
    {
        const bool branch_taken_0x2e07a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e07a0) {
            ctx->pc = 0x2E07B0u;
            goto label_2e07b0;
        }
    }
    ctx->pc = 0x2E07A8u;
label_2e07a8:
    // 0x2e07a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E07A8u;
    {
        const bool branch_taken_0x2e07a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07A8u;
        // 0x2e07ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07a8) {
            ctx->pc = 0x2E07C4u;
            goto label_2e07c4;
        }
    }
    ctx->pc = 0x2E07B0u;
label_2e07b0:
    // 0x2e07b0: 0xc0b7f24  jal         func_2DFC90
    ctx->pc = 0x2E07B0u;
    SET_GPR_U32(ctx, 31, 0x2E07B8u);
    ctx->pc = 0x2E07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07B0u;
    // 0x2e07b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC90u, 0x2E07B0u, 0x2E07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07B8u;
label_2e07b8:
    // 0x2e07b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e07bc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e07bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e07c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e07c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e07c4:
    // 0x2e07c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e07c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e07c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e07c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e07cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e07ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e07d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e07d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e07d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E07D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07D4u;
        // 0x2e07d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E07D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E07DCu;
    // 0x2e07dc: 0x0  nop
    ctx->pc = 0x2e07dcu;
    // NOP
    if (ctx->pc == 0x2e07dcu) { ctx->pc = 0x2e07e0u; }
}
