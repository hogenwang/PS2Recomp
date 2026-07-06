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

// Function: sub_00321F90
// Address: 0x321f90 - 0x321fe0
void sub_00321F90_0x321f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321F90_0x321f90");
#endif

    switch (ctx->pc) {
        case 0x321fa8u: goto label_321fa8;
        default: break;
    }

    ctx->pc = 0x321f90u;

    // 0x321f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321fa0: 0xc0c87dc  jal         func_321F70
    ctx->pc = 0x321FA0u;
    SET_GPR_U32(ctx, 31, 0x321FA8u);
    ctx->pc = 0x321FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FA0u;
    // 0x321fa4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F70u, 0x321FA0u, 0x321FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FA8u;
label_321fa8:
    // 0x321fa8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x321fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x321fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321fb0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x321fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x321fb4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x321fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x321fb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x321fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321fc4: 0x2442c410  addiu       $v0, $v0, -0x3BF0
    ctx->pc = 0x321fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
    // 0x321fc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x321fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x321fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x321FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FD0u;
        // 0x321fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321FD8u;
    // 0x321fd8: 0x0  nop
    ctx->pc = 0x321fd8u;
    // NOP
    // 0x321fdc: 0x0  nop
    ctx->pc = 0x321fdcu;
    // NOP
}
