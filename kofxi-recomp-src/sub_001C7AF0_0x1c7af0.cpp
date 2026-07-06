#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7AF0
// Address: 0x1c7af0 - 0x1c7b30
void sub_001C7AF0_0x1c7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7AF0_0x1c7af0");
#endif

    switch (ctx->pc) {
        case 0x1c7b0cu: goto label_1c7b0c;
        default: break;
    }

    ctx->pc = 0x1c7af0u;

    // 0x1c7af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7af4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c7af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7afc: 0x24844338  addiu       $a0, $a0, 0x4338
    ctx->pc = 0x1c7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17208));
    // 0x1c7b00: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1c7b04: 0xc049c22  jal         func_127088
    ctx->pc = 0x1C7B04u;
    SET_GPR_U32(ctx, 31, 0x1C7B0Cu);
    ctx->pc = 0x1C7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B04u;
            // 0x1c7b08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B0Cu; }
        if (ctx->pc != 0x1C7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B0Cu; }
        if (ctx->pc != 0x1C7B0Cu) { return; }
    }
    ctx->pc = 0x1C7B0Cu;
label_1c7b0c:
    // 0x1c7b0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c7b10: 0x24634368  addiu       $v1, $v1, 0x4368
    ctx->pc = 0x1c7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17256));
    // 0x1c7b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7b20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B24u;
            // 0x1c7b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7B2Cu;
    // 0x1c7b2c: 0x0  nop
    ctx->pc = 0x1c7b2cu;
    // NOP
    ctx->pc = 0x1c7b30u;
}
