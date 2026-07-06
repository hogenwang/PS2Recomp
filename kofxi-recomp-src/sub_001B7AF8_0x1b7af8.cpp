#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7AF8
// Address: 0x1b7af8 - 0x1b7b38
void sub_001B7AF8_0x1b7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7AF8_0x1b7af8");
#endif

    switch (ctx->pc) {
        case 0x1b7b00u: goto label_1b7b00;
        case 0x1b7b14u: goto label_1b7b14;
        case 0x1b7b1cu: goto label_1b7b1c;
        case 0x1b7b24u: goto label_1b7b24;
        default: break;
    }

    ctx->pc = 0x1b7af8u;

    // 0x1b7af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AF8u;
            // 0x1b7afc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B00u;
label_1b7b00:
    // 0x1b7b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7b08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7b0c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B14u);
    ctx->pc = 0x1B7B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B0Cu;
            // 0x1b7b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B14u; }
        if (ctx->pc != 0x1B7B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B14u; }
        if (ctx->pc != 0x1B7B14u) { return; }
    }
    ctx->pc = 0x1B7B14u;
label_1b7b14:
    // 0x1b7b14: 0xc06dece  jal         func_1B7B38
    ctx->pc = 0x1B7B14u;
    SET_GPR_U32(ctx, 31, 0x1B7B1Cu);
    ctx->pc = 0x1B7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B14u;
            // 0x1b7b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B38u;
    if (runtime->hasFunction(0x1B7B38u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B1Cu; }
        if (ctx->pc != 0x1B7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B38_0x1b7b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B1Cu; }
        if (ctx->pc != 0x1B7B1Cu) { return; }
    }
    ctx->pc = 0x1B7B1Cu;
label_1b7b1c:
    // 0x1b7b1c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B24u);
    ctx->pc = 0x1B7B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B1Cu;
            // 0x1b7b20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B24u; }
        if (ctx->pc != 0x1B7B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B24u; }
        if (ctx->pc != 0x1B7B24u) { return; }
    }
    ctx->pc = 0x1B7B24u;
label_1b7b24:
    // 0x1b7b24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7b28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B30u;
            // 0x1b7b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B38u;
    ctx->pc = 0x1b7b38u;
}
