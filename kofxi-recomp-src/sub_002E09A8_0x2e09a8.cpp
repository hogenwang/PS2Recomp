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

// Function: sub_002E09A8
// Address: 0x2e09a8 - 0x2e0a68
void sub_002E09A8_0x2e09a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E09A8_0x2e09a8");
#endif

    switch (ctx->pc) {
        case 0x2e09e0u: goto label_2e09e0;
        case 0x2e09f8u: goto label_2e09f8;
        case 0x2e0a10u: goto label_2e0a10;
        default: break;
    }

    ctx->pc = 0x2e09a8u;

label_2e09a8:
    // 0x2e09a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e09a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e09ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e09acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e09b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e09b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e09b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e09b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2e09bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e09c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e09c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09c8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e09c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09cc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e09ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e09d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e09d4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e09d8: 0xc0b805a  jal         func_2E0168
    ctx->pc = 0x2E09D8u;
    SET_GPR_U32(ctx, 31, 0x2E09E0u);
    ctx->pc = 0x2E09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09D8u;
    // 0x2e09dc: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0168u, 0x2E09D8u, 0x2E09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09E0u;
label_2e09e0:
    // 0x2e09e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e09e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e09e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E09E8u;
    {
        const bool branch_taken_0x2e09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09E8u;
        // 0x2e09ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09e8) {
            ctx->pc = 0x2E0A00u;
            goto label_2e0a00;
        }
    }
    ctx->pc = 0x2E09F0u;
    // 0x2e09f0: 0xc0b80de  jal         func_2E0378
    ctx->pc = 0x2E09F0u;
    SET_GPR_U32(ctx, 31, 0x2E09F8u);
    ctx->pc = 0x2E09F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09F0u;
    // 0x2e09f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0378u, 0x2E09F0u, 0x2E09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09F8u;
label_2e09f8:
    // 0x2e09f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E09F8u;
    {
        const bool branch_taken_0x2e09f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09f8) {
            ctx->pc = 0x2E0A08u;
            goto label_2e0a08;
        }
    }
    ctx->pc = 0x2E0A00u;
label_2e0a00:
    // 0x2e0a00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0A00u;
    {
        const bool branch_taken_0x2e0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A00u;
        // 0x2e0a04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a00) {
            ctx->pc = 0x2E0A1Cu;
            goto label_2e0a1c;
        }
    }
    ctx->pc = 0x2E0A08u;
label_2e0a08:
    // 0x2e0a08: 0xc0b80fe  jal         func_2E03F8
    ctx->pc = 0x2E0A08u;
    SET_GPR_U32(ctx, 31, 0x2E0A10u);
    ctx->pc = 0x2E0A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A08u;
    // 0x2e0a0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03F8u, 0x2E0A08u, 0x2E0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A10u;
label_2e0a10:
    // 0x2e0a10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0a14: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e0a14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0a18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a1c:
    // 0x2e0a1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0a24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e0a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0a28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A2Cu;
        // 0x2e0a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A34u;
    // 0x2e0a34: 0x0  nop
    ctx->pc = 0x2e0a34u;
    // NOP
    // 0x2e0a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0a3c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e0a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0a44: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2e0a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a48: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2e0a48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a4c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2e0a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e0a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e0a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a5c: 0x80b826a  j           func_2E09A8
    ctx->pc = 0x2E0A5Cu;
    ctx->pc = 0x2E0A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A5Cu;
    // 0x2e0a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2e09a8;
    ctx->pc = 0x2E0A64u;
    // 0x2e0a64: 0x0  nop
    ctx->pc = 0x2e0a64u;
    // NOP
    if (ctx->pc == 0x2e0a64u) { ctx->pc = 0x2e0a68u; }
}
