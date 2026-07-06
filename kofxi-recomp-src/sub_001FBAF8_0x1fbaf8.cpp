#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBAF8
// Address: 0x1fbaf8 - 0x1fbb38
void sub_001FBAF8_0x1fbaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBAF8_0x1fbaf8");
#endif

    switch (ctx->pc) {
        case 0x1fbb0cu: goto label_1fbb0c;
        case 0x1fbb20u: goto label_1fbb20;
        default: break;
    }

    ctx->pc = 0x1fbaf8u;

    // 0x1fbaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbb00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fbb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fbb04: 0xc07eece  jal         func_1FBB38
    ctx->pc = 0x1FBB04u;
    SET_GPR_U32(ctx, 31, 0x1FBB0Cu);
    ctx->pc = 0x1FBB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB04u;
            // 0x1fbb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBB38u;
    if (runtime->hasFunction(0x1FBB38u)) {
        auto targetFn = runtime->lookupFunction(0x1FBB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB0Cu; }
        if (ctx->pc != 0x1FBB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBB38_0x1fbb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB0Cu; }
        if (ctx->pc != 0x1FBB0Cu) { return; }
    }
    ctx->pc = 0x1FBB0Cu;
label_1fbb0c:
    // 0x1fbb0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fbb10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB10u;
            // 0x1fbb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB24u;
            goto label_1fbb24;
        }
    }
    ctx->pc = 0x1FBB18u;
    // 0x1fbb18: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1FBB18u;
    SET_GPR_U32(ctx, 31, 0x1FBB20u);
    ctx->pc = 0x1FBB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB18u;
            // 0x1fbb1c: 0x34a50222  ori         $a1, $a1, 0x222 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)546);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB20u; }
        if (ctx->pc != 0x1FBB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB20u; }
        if (ctx->pc != 0x1FBB20u) { return; }
    }
    ctx->pc = 0x1FBB20u;
label_1fbb20:
    // 0x1fbb20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbb24:
    // 0x1fbb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbb28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fbb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB2Cu;
            // 0x1fbb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBB34u;
    // 0x1fbb34: 0x0  nop
    ctx->pc = 0x1fbb34u;
    // NOP
    ctx->pc = 0x1fbb38u;
}
