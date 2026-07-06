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

// Function: sub_0010A790
// Address: 0x10a790 - 0x10a810
void sub_0010A790_0x10a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A790_0x10a790");
#endif

    switch (ctx->pc) {
        case 0x10a7ecu: goto label_10a7ec;
        default: break;
    }

    ctx->pc = 0x10a790u;

    // 0x10a790: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10a794: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a798: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x10a798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10a79c: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x10a7a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10a7a4: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x10a7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a7ac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x10a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x10a7b0: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x10a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x10a7b4: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10a7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10a7b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7BCu;
        // 0x10a7c0: 0xad030014  sw          $v1, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A7C4u;
    // 0x10a7c4: 0x0  nop
    ctx->pc = 0x10a7c4u;
    // NOP
    // 0x10a7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a7cc: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x10a7ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10a7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a7d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A7D4u;
    {
        const bool branch_taken_0x10a7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D4u;
        // 0x10a7d8: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7d4) {
            ctx->pc = 0x10A7E4u;
            goto label_10a7e4;
        }
    }
    ctx->pc = 0x10A7DCu;
    // 0x10a7dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A7DCu;
    {
        const bool branch_taken_0x10a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7DCu;
        // 0x10a7e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7dc) {
            ctx->pc = 0x10A7F0u;
            goto label_10a7f0;
        }
    }
    ctx->pc = 0x10A7E4u;
label_10a7e4:
    // 0x10a7e4: 0xc04262a  jal         func_1098A8
    ctx->pc = 0x10A7E4u;
    SET_GPR_U32(ctx, 31, 0x10A7ECu);
    ctx->pc = 0x10A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E4u;
    // 0x10a7e8: 0xac85087c  sw          $a1, 0x87C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 2172), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1098A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1098A8u, 0x10A7E4u, 0x10A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7ECu;
label_10a7ec:
    // 0x10a7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a7f0:
    // 0x10a7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7F4u;
        // 0x10a7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A7FCu;
    // 0x10a7fc: 0x0  nop
    ctx->pc = 0x10a7fcu;
    // NOP
    // 0x10a800: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a804: 0x3e00008  jr          $ra
    ctx->pc = 0x10A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A804u;
        // 0x10a808: 0x8c62087c  lw          $v0, 0x87C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A80Cu;
    // 0x10a80c: 0x0  nop
    ctx->pc = 0x10a80cu;
    // NOP
}
