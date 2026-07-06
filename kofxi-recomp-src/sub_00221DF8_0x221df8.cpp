#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221DF8
// Address: 0x221df8 - 0x221e40
void sub_00221DF8_0x221df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221DF8_0x221df8");
#endif

    switch (ctx->pc) {
        case 0x221e18u: goto label_221e18;
        case 0x221e34u: goto label_221e34;
        default: break;
    }

    ctx->pc = 0x221df8u;

    // 0x221df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221dfc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x221dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221e04: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x221e04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221e08: 0x11ae000a  beq         $t5, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x221E08u;
    {
        const bool branch_taken_0x221e08 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x221E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E08u;
            // 0x221e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e08) {
            ctx->pc = 0x221E34u;
            goto label_221e34;
        }
    }
    ctx->pc = 0x221E10u;
    // 0x221e10: 0xc089144  jal         func_224510
    ctx->pc = 0x221E10u;
    SET_GPR_U32(ctx, 31, 0x221E18u);
    ctx->pc = 0x221E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221E10u;
            // 0x221e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E18u; }
        if (ctx->pc != 0x221E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E18u; }
        if (ctx->pc != 0x221E18u) { return; }
    }
    ctx->pc = 0x221E18u;
label_221e18:
    // 0x221e18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221e1c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221e20: 0x24842cb0  addiu       $a0, $a0, 0x2CB0
    ctx->pc = 0x221e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11440));
    // 0x221e24: 0x24e72cc0  addiu       $a3, $a3, 0x2CC0
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11456));
    // 0x221e28: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x221e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x221e2c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221E2Cu;
    SET_GPR_U32(ctx, 31, 0x221E34u);
    ctx->pc = 0x221E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221E2Cu;
            // 0x221e30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E34u; }
        if (ctx->pc != 0x221E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E34u; }
        if (ctx->pc != 0x221E34u) { return; }
    }
    ctx->pc = 0x221E34u;
label_221e34:
    // 0x221e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e38: 0x3e00008  jr          $ra
    ctx->pc = 0x221E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E38u;
            // 0x221e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221E40u;
    ctx->pc = 0x221e40u;
}
