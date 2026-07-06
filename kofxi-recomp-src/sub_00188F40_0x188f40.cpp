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

// Function: sub_00188F40
// Address: 0x188f40 - 0x188f90
void sub_00188F40_0x188f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188F40_0x188f40");
#endif

    ctx->pc = 0x188f40u;

    // 0x188f40: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x188f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x188f44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188f48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x188f48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x188f4c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188F4Cu;
    {
        const bool branch_taken_0x188f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188f4c) {
            ctx->pc = 0x188F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F4Cu;
            // 0x188f50: 0x9082008c  lbu         $v0, 0x8C($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F74u;
            goto label_188f74;
        }
    }
    ctx->pc = 0x188F54u;
    // 0x188f54: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x188f54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x188f58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x188f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x188f5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188f60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x188f64: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188f68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188f68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188f6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188F6Cu;
    {
        const bool branch_taken_0x188f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F6Cu;
        // 0x188f70: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f6c) {
            ctx->pc = 0x188F80u;
            goto label_188f80;
        }
    }
    ctx->pc = 0x188F74u;
label_188f74:
    // 0x188f74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x188f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x188f78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188f7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_188f80:
    // 0x188f80: 0x3e00008  jr          $ra
    ctx->pc = 0x188F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F88u;
    // 0x188f88: 0x0  nop
    ctx->pc = 0x188f88u;
    // NOP
    // 0x188f8c: 0x0  nop
    ctx->pc = 0x188f8cu;
    // NOP
}
