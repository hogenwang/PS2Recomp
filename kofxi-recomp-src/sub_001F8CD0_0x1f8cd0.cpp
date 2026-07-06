#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8CD0
// Address: 0x1f8cd0 - 0x1f8d28
void sub_001F8CD0_0x1f8cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8CD0_0x1f8cd0");
#endif

    switch (ctx->pc) {
        case 0x1f8ce4u: goto label_1f8ce4;
        case 0x1f8d08u: goto label_1f8d08;
        case 0x1f8d10u: goto label_1f8d10;
        default: break;
    }

    ctx->pc = 0x1f8cd0u;

    // 0x1f8cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f8cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f8cdc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F8CDCu;
    SET_GPR_U32(ctx, 31, 0x1F8CE4u);
    ctx->pc = 0x1F8CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CDCu;
            // 0x1f8ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CE4u; }
        if (ctx->pc != 0x1F8CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CE4u; }
        if (ctx->pc != 0x1F8CE4u) { return; }
    }
    ctx->pc = 0x1F8CE4u;
label_1f8ce4:
    // 0x1f8ce4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f8ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f8ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8CECu;
    {
        const bool branch_taken_0x1f8cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CECu;
            // 0x1f8cf0: 0x34a50133  ori         $a1, $a1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cec) {
            ctx->pc = 0x1F8D08u;
            goto label_1f8d08;
        }
    }
    ctx->pc = 0x1F8CF4u;
    // 0x1f8cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8cf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8d00: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F8D00u;
    ctx->pc = 0x1F8D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D00u;
            // 0x1f8d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F8D08u;
label_1f8d08:
    // 0x1f8d08: 0xc07e34a  jal         func_1F8D28
    ctx->pc = 0x1F8D08u;
    SET_GPR_U32(ctx, 31, 0x1F8D10u);
    ctx->pc = 0x1F8D28u;
    if (runtime->hasFunction(0x1F8D28u)) {
        auto targetFn = runtime->lookupFunction(0x1F8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D10u; }
        if (ctx->pc != 0x1F8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8D28_0x1f8d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D10u; }
        if (ctx->pc != 0x1F8D10u) { return; }
    }
    ctx->pc = 0x1F8D10u;
label_1f8d10:
    // 0x1f8d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d14: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1f8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1f8d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D20u;
            // 0x1f8d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8D28u;
    ctx->pc = 0x1f8d28u;
}
