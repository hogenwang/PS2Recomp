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

// Function: sub_00127F28
// Address: 0x127f28 - 0x127fe0
void sub_00127F28_0x127f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127F28_0x127f28");
#endif

    switch (ctx->pc) {
        case 0x127fb8u: goto label_127fb8;
        default: break;
    }

    ctx->pc = 0x127f28u;

    // 0x127f28: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x127f28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x127f2c: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x127f2cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x127f30: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x127f30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x127f34: 0x3c0dfcc0  lui         $t5, 0xFCC0
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64704 << 16));
    // 0x127f38: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x127f38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x127f3c: 0xd7023  negu        $t6, $t5
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x127f40: 0x19a00008  blez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x127F40u;
    {
        const bool branch_taken_0x127f40 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x127F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F40u;
        // 0x127f44: 0xd783c  dsll32      $t7, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f40) {
            ctx->pc = 0x127F64u;
            goto label_127f64;
        }
    }
    ctx->pc = 0x127F48u;
    // 0x127f48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127f4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127f50: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x127f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x127f54: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127f54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127f58: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x127f58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x127f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x127F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F5Cu;
        // 0x127f60: 0x4f1024  and         $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127F64u;
label_127f64:
    // 0x127f64: 0xe6d03  sra         $t5, $t6, 20
    ctx->pc = 0x127f64u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 20));
    // 0x127f68: 0x29af0014  slti        $t7, $t5, 0x14
    ctx->pc = 0x127f68u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x127f6c: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x127F6Cu;
    {
        const bool branch_taken_0x127f6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f6c) {
            ctx->pc = 0x127F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127F6Cu;
            // 0x127f70: 0x25adffec  addiu       $t5, $t5, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127F9Cu;
            goto label_127f9c;
        }
    }
    ctx->pc = 0x127F74u;
    // 0x127f74: 0x3c0f0008  lui         $t7, 0x8
    ctx->pc = 0x127f74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8 << 16));
    // 0x127f78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127f7c: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x127f7cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x127f80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127f84: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x127f84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x127f88: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x127f88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127f8c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x127f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x127f90: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x127f90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x127f94: 0x3e00008  jr          $ra
    ctx->pc = 0x127F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F94u;
        // 0x127f98: 0x4e1024  and         $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127F9Cu;
label_127f9c:
    // 0x127f9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127fa0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127fa4: 0x29af001f  slti        $t7, $t5, 0x1F
    ctx->pc = 0x127fa4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x127fa8: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x127FA8u;
    {
        const bool branch_taken_0x127fa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FA8u;
        // 0x127fac: 0xd7027  nor         $t6, $zero, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fa8) {
            ctx->pc = 0x127FD4u;
            goto label_127fd4;
        }
    }
    ctx->pc = 0x127FB0u;
    // 0x127fb0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127fb4: 0x1cf7004  sllv        $t6, $t7, $t6
    ctx->pc = 0x127fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
label_127fb8:
    // 0x127fb8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127fbc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x127fbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x127fc0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x127fc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x127fc4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x127fc4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x127fc8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x127fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x127fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x127FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FCCu;
        // 0x127fd0: 0x4e1025  or          $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127FD4u;
label_127fd4:
    // 0x127fd4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x127FD4u;
    {
        const bool branch_taken_0x127fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FD4u;
        // 0x127fd8: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fd4) {
            ctx->pc = 0x127FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127fb8;
        }
    }
    ctx->pc = 0x127FDCu;
    // 0x127fdc: 0x0  nop
    ctx->pc = 0x127fdcu;
    // NOP
    if (ctx->pc == 0x127fdcu) { ctx->pc = 0x127fe0u; }
}
