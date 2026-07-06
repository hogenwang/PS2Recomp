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

// Function: sub_002E07E0
// Address: 0x2e07e0 - 0x2e08c0
void sub_002E07E0_0x2e07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E07E0_0x2e07e0");
#endif

    switch (ctx->pc) {
        case 0x2e0818u: goto label_2e0818;
        case 0x2e0830u: goto label_2e0830;
        case 0x2e0848u: goto label_2e0848;
        default: break;
    }

    ctx->pc = 0x2e07e0u;

    // 0x2e07e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e07e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e07e8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e07e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e07ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e07f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e07f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07f4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2e07f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e07f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e07fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0800: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e0800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0804: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e0804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0808: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e080c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e0810: 0xc0b805a  jal         func_2E0168
    ctx->pc = 0x2E0810u;
    SET_GPR_U32(ctx, 31, 0x2E0818u);
    ctx->pc = 0x2E0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0810u;
    // 0x2e0814: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0168u, 0x2E0810u, 0x2E0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0818u;
label_2e0818:
    // 0x2e0818: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e081c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e081cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0820u;
    {
        const bool branch_taken_0x2e0820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0820u;
        // 0x2e0824: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0820) {
            ctx->pc = 0x2E0838u;
            goto label_2e0838;
        }
    }
    ctx->pc = 0x2E0828u;
    // 0x2e0828: 0xc0b80de  jal         func_2E0378
    ctx->pc = 0x2E0828u;
    SET_GPR_U32(ctx, 31, 0x2E0830u);
    ctx->pc = 0x2E082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0828u;
    // 0x2e082c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0378u, 0x2E0828u, 0x2E0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0830u;
label_2e0830:
    // 0x2e0830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0830u;
    {
        const bool branch_taken_0x2e0830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0830) {
            ctx->pc = 0x2E0840u;
            goto label_2e0840;
        }
    }
    ctx->pc = 0x2E0838u;
label_2e0838:
    // 0x2e0838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0838u;
    {
        const bool branch_taken_0x2e0838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0838u;
        // 0x2e083c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0838) {
            ctx->pc = 0x2E0854u;
            goto label_2e0854;
        }
    }
    ctx->pc = 0x2E0840u;
label_2e0840:
    // 0x2e0840: 0xc0b80fe  jal         func_2E03F8
    ctx->pc = 0x2E0840u;
    SET_GPR_U32(ctx, 31, 0x2E0848u);
    ctx->pc = 0x2E0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0840u;
    // 0x2e0844: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03F8u, 0x2E0840u, 0x2E0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0848u;
label_2e0848:
    // 0x2e0848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e084c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e084cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0850: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e0854:
    // 0x2e0854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0858: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e085c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e085cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0860: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0864: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0864u;
        // 0x2e0868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E086Cu;
    // 0x2e086c: 0x0  nop
    ctx->pc = 0x2e086cu;
    // NOP
    // 0x2e0870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0874: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e0874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e087c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e087cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0880: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e0880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0884: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e0884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e088c: 0x80b818c  j           func_2E0630
    ctx->pc = 0x2E088Cu;
    ctx->pc = 0x2E0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E088Cu;
    // 0x2e0890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0630u, 0x2E088Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E0894u;
    // 0x2e0894: 0x0  nop
    ctx->pc = 0x2e0894u;
    // NOP
    // 0x2e0898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e089c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e089cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e08a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e08a4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e08a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e08a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e08acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e08b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e08b4: 0x80b81b0  j           func_2E06C0
    ctx->pc = 0x2E08B4u;
    ctx->pc = 0x2E08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08B4u;
    // 0x2e08b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E06C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06C0u, 0x2E08B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E08BCu;
    // 0x2e08bc: 0x0  nop
    ctx->pc = 0x2e08bcu;
    // NOP
}
