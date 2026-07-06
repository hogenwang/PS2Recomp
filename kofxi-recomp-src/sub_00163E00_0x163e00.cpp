#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163E00
// Address: 0x163e00 - 0x163e40
void sub_00163E00_0x163e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163E00_0x163e00");
#endif

    switch (ctx->pc) {
        case 0x163e14u: goto label_163e14;
        default: break;
    }

    ctx->pc = 0x163e00u;

    // 0x163e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163e04: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x163e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x163e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163e0c: 0xc058f60  jal         func_163D80
    ctx->pc = 0x163E0Cu;
    SET_GPR_U32(ctx, 31, 0x163E14u);
    ctx->pc = 0x163E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E0Cu;
            // 0x163e10: 0x248447d8  addiu       $a0, $a0, 0x47D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163D80u;
    if (runtime->hasFunction(0x163D80u)) {
        auto targetFn = runtime->lookupFunction(0x163D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E14u; }
        if (ctx->pc != 0x163E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163D80_0x163d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E14u; }
        if (ctx->pc != 0x163E14u) { return; }
    }
    ctx->pc = 0x163E14u;
label_163e14:
    // 0x163e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x163e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e18: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163e1c: 0xa06447c8  sb          $a0, 0x47C8($v1)
    ctx->pc = 0x163e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18376), (uint8_t)GPR_U32(ctx, 4));
    // 0x163e20: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163e24: 0xa06447b8  sb          $a0, 0x47B8($v1)
    ctx->pc = 0x163e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18360), (uint8_t)GPR_U32(ctx, 4));
    // 0x163e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x163E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E2Cu;
            // 0x163e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163E34u;
    // 0x163e34: 0x0  nop
    ctx->pc = 0x163e34u;
    // NOP
    // 0x163e38: 0x0  nop
    ctx->pc = 0x163e38u;
    // NOP
    // 0x163e3c: 0x0  nop
    ctx->pc = 0x163e3cu;
    // NOP
    ctx->pc = 0x163e40u;
}
