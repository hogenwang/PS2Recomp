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

// Function: sub_0026B858
// Address: 0x26b858 - 0x26b8a8
void sub_0026B858_0x26b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B858_0x26b858");
#endif

    switch (ctx->pc) {
        case 0x26b860u: goto label_26b860;
        default: break;
    }

    ctx->pc = 0x26b858u;

    // 0x26b858: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B858u;
    {
        const bool branch_taken_0x26b858 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B858u;
        // 0x26b85c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b858) {
            ctx->pc = 0x26B87Cu;
            goto label_26b87c;
        }
    }
    ctx->pc = 0x26B860u;
label_26b860:
    // 0x26b860: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x26b860u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b864: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26b868: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x26b868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26b86c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x26b86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26b870: 0x0  nop
    ctx->pc = 0x26b870u;
    // NOP
    // 0x26b874: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B874u;
    {
        const bool branch_taken_0x26b874 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x26b874) {
            ctx->pc = 0x26B860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b860;
        }
    }
    ctx->pc = 0x26B87Cu;
label_26b87c:
    // 0x26b87c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x26b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x26b880: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x26b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x26b884: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x26b884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b888: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x26b888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26b88c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x26b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x26b890: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x26b890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26b894: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x26b894u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x26b898: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26b89c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B89Cu;
        // 0x26b8a0: 0x82100a  movz        $v0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B8A4u;
    // 0x26b8a4: 0x0  nop
    ctx->pc = 0x26b8a4u;
    // NOP
    if (ctx->pc == 0x26b8a4u) { ctx->pc = 0x26b8a8u; }
}
