#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001717D0
// Address: 0x1717d0 - 0x171810
void sub_001717D0_0x1717d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001717D0_0x1717d0");
#endif

    switch (ctx->pc) {
        case 0x1717e0u: goto label_1717e0;
        case 0x1717ecu: goto label_1717ec;
        default: break;
    }

    ctx->pc = 0x1717d0u;

    // 0x1717d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1717d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1717d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1717d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1717d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1717d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1717dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1717dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1717e0:
    // 0x1717e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1717e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717e4: 0xc05c604  jal         func_171810
    ctx->pc = 0x1717E4u;
    SET_GPR_U32(ctx, 31, 0x1717ECu);
    ctx->pc = 0x1717E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717E4u;
            // 0x1717e8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (runtime->hasFunction(0x171810u)) {
        auto targetFn = runtime->lookupFunction(0x171810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ECu; }
        if (ctx->pc != 0x1717ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171810_0x171810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ECu; }
        if (ctx->pc != 0x1717ECu) { return; }
    }
    ctx->pc = 0x1717ECu;
label_1717ec:
    // 0x1717ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1717ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1717f0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1717f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1717F4u;
    {
        const bool branch_taken_0x1717f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1717f4) {
            ctx->pc = 0x1717E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1717e0;
        }
    }
    ctx->pc = 0x1717FCu;
    // 0x1717fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1717fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171804: 0x3e00008  jr          $ra
    ctx->pc = 0x171804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171804u;
            // 0x171808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17180Cu;
    // 0x17180c: 0x0  nop
    ctx->pc = 0x17180cu;
    // NOP
    ctx->pc = 0x171810u;
}
