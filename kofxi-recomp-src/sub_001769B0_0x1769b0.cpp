#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001769B0
// Address: 0x1769b0 - 0x1769f0
void sub_001769B0_0x1769b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001769B0_0x1769b0");
#endif

    switch (ctx->pc) {
        case 0x1769d4u: goto label_1769d4;
        default: break;
    }

    ctx->pc = 0x1769b0u;

    // 0x1769b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1769b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1769b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1769b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1769b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1769bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1769c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1769C0u;
    {
        const bool branch_taken_0x1769c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1769C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769C0u;
            // 0x1769c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769c0) {
            ctx->pc = 0x1769D8u;
            goto label_1769d8;
        }
    }
    ctx->pc = 0x1769C8u;
    // 0x1769c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1769cc: 0xc0694e4  jal         func_1A5390
    ctx->pc = 0x1769CCu;
    SET_GPR_U32(ctx, 31, 0x1769D4u);
    ctx->pc = 0x1769D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769CCu;
            // 0x1769d0: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5390u;
    if (runtime->hasFunction(0x1A5390u)) {
        auto targetFn = runtime->lookupFunction(0x1A5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769D4u; }
        if (ctx->pc != 0x1769D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5390_0x1a5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769D4u; }
        if (ctx->pc != 0x1769D4u) { return; }
    }
    ctx->pc = 0x1769D4u;
label_1769d4:
    // 0x1769d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1769d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1769d8:
    // 0x1769d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1769d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1769dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1769dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1769e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1769E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769E0u;
            // 0x1769e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1769E8u;
    // 0x1769e8: 0x0  nop
    ctx->pc = 0x1769e8u;
    // NOP
    // 0x1769ec: 0x0  nop
    ctx->pc = 0x1769ecu;
    // NOP
    ctx->pc = 0x1769f0u;
}
