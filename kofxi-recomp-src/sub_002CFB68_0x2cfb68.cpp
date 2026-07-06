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

// Function: sub_002CFB68
// Address: 0x2cfb68 - 0x2cfbb8
void sub_002CFB68_0x2cfb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB68_0x2cfb68");
#endif

    switch (ctx->pc) {
        case 0x2cfb78u: goto label_2cfb78;
        case 0x2cfb90u: goto label_2cfb90;
        default: break;
    }

    ctx->pc = 0x2cfb68u;

    // 0x2cfb68: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFB68u;
    {
        const bool branch_taken_0x2cfb68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb68) {
            ctx->pc = 0x2CFB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFB68u;
            // 0x2cfb6c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB80u;
            goto label_2cfb80;
        }
    }
    ctx->pc = 0x2CFB70u;
    // 0x2cfb70: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB70u;
        // 0x2cfb74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB78u;
label_2cfb78:
    // 0x2cfb78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB78u;
        // 0x2cfb7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB80u;
label_2cfb80:
    // 0x2cfb80: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cfb84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2cfb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFB88u;
    {
        const bool branch_taken_0x2cfb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB88u;
        // 0x2cfb8c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb88) {
            ctx->pc = 0x2CFBACu;
            goto label_2cfbac;
        }
    }
    ctx->pc = 0x2CFB90u;
label_2cfb90:
    // 0x2cfb90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfb94: 0x1045fff8  beq         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CFB94u;
    {
        const bool branch_taken_0x2cfb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2cfb94) {
            ctx->pc = 0x2CFB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfb78;
        }
    }
    ctx->pc = 0x2CFB9Cu;
    // 0x2cfb9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2cfb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfba0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cfba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CFBA4u;
    {
        const bool branch_taken_0x2cfba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBA4u;
        // 0x2cfba8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfba4) {
            ctx->pc = 0x2CFB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfb90;
        }
    }
    ctx->pc = 0x2CFBACu;
label_2cfbac:
    // 0x2cfbac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBACu;
        // 0x2cfbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFBB4u;
    // 0x2cfbb4: 0x0  nop
    ctx->pc = 0x2cfbb4u;
    // NOP
    if (ctx->pc == 0x2cfbb4u) { ctx->pc = 0x2cfbb8u; }
}
