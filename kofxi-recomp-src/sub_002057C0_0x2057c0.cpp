#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002057C0
// Address: 0x2057c0 - 0x205800
void sub_002057C0_0x2057c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002057C0_0x2057c0");
#endif

    switch (ctx->pc) {
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d8u: goto label_2057d8;
        default: break;
    }

    ctx->pc = 0x2057c0u;

    // 0x2057c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2057c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2057c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2057c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2057c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2057cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2057ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2057d0:
    // 0x2057d0: 0xc0815d4  jal         func_205750
    ctx->pc = 0x2057D0u;
    SET_GPR_U32(ctx, 31, 0x2057D8u);
    ctx->pc = 0x2057D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2057D0u;
            // 0x2057d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205750u;
    if (runtime->hasFunction(0x205750u)) {
        auto targetFn = runtime->lookupFunction(0x205750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057D8u; }
        if (ctx->pc != 0x2057D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205750_0x205750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057D8u; }
        if (ctx->pc != 0x2057D8u) { return; }
    }
    ctx->pc = 0x2057D8u;
label_2057d8:
    // 0x2057d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2057d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2057dc: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x2057dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2057e0: 0x0  nop
    ctx->pc = 0x2057e0u;
    // NOP
    // 0x2057e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2057E4u;
    {
        const bool branch_taken_0x2057e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057e4) {
            ctx->pc = 0x2057D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2057d0;
        }
    }
    ctx->pc = 0x2057ECu;
    // 0x2057ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2057f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2057f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2057F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057F4u;
            // 0x2057f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2057FCu;
    // 0x2057fc: 0x0  nop
    ctx->pc = 0x2057fcu;
    // NOP
    ctx->pc = 0x205800u;
}
