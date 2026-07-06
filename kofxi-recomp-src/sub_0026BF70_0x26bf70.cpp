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

// Function: sub_0026BF70
// Address: 0x26bf70 - 0x26bfc8
void sub_0026BF70_0x26bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF70_0x26bf70");
#endif

    switch (ctx->pc) {
        case 0x26bf90u: goto label_26bf90;
        case 0x26bfacu: goto label_26bfac;
        default: break;
    }

    ctx->pc = 0x26bf70u;

    // 0x26bf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bf74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26bf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26bf7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26bf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26bf88: 0xc09af6a  jal         func_26BDA8
    ctx->pc = 0x26BF88u;
    SET_GPR_U32(ctx, 31, 0x26BF90u);
    ctx->pc = 0x26BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF88u;
    // 0x26bf8c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BDA8u, 0x26BF88u, 0x26BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF90u;
label_26bf90:
    // 0x26bf90: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BF90u;
    {
        const bool branch_taken_0x26bf90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26bf90) {
            ctx->pc = 0x26BF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BF90u;
            // 0x26bf94: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BFA0u;
            goto label_26bfa0;
        }
    }
    ctx->pc = 0x26BF98u;
    // 0x26bf98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26BF98u;
    {
        const bool branch_taken_0x26bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF98u;
        // 0x26bf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf98) {
            ctx->pc = 0x26BFB8u;
            goto label_26bfb8;
        }
    }
    ctx->pc = 0x26BFA0u;
label_26bfa0:
    // 0x26bfa0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x26bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x26bfa4: 0xc098092  jal         func_260248
    ctx->pc = 0x26BFA4u;
    SET_GPR_U32(ctx, 31, 0x26BFACu);
    ctx->pc = 0x26BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFA4u;
    // 0x26bfa8: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260248u, 0x26BFA4u, 0x26BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFACu;
label_26bfac:
    // 0x26bfac: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x26bfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26bfb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bfb4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x26bfb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_26bfb8:
    // 0x26bfb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bfbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26bfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC0u;
        // 0x26bfc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BFC8u;
}
