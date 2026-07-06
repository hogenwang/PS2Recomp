#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177DE0
// Address: 0x177de0 - 0x177e30
void sub_00177DE0_0x177de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177DE0_0x177de0");
#endif

    switch (ctx->pc) {
        case 0x177e08u: goto label_177e08;
        default: break;
    }

    ctx->pc = 0x177de0u;

    // 0x177de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177de4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x177de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x177de8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x177dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177df0: 0x24848170  addiu       $a0, $a0, -0x7E90
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934896));
    // 0x177df4: 0x24a5e688  addiu       $a1, $a1, -0x1978
    ctx->pc = 0x177df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960776));
    // 0x177df8: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x177df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x177dfc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x177dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x177e00: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x177E00u;
    SET_GPR_U32(ctx, 31, 0x177E08u);
    ctx->pc = 0x177E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E00u;
            // 0x177e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E08u; }
        if (ctx->pc != 0x177E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E08u; }
        if (ctx->pc != 0x177E08u) { return; }
    }
    ctx->pc = 0x177E08u;
label_177e08:
    // 0x177e08: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x177e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177e10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177e14: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x177e14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x177e18: 0xa0a40004  sb          $a0, 0x4($a1)
    ctx->pc = 0x177e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x177e1c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x177e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x177e20: 0xa064ace8  sb          $a0, -0x5318($v1)
    ctx->pc = 0x177e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294946024), (uint8_t)GPR_U32(ctx, 4));
    // 0x177e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e28: 0x3e00008  jr          $ra
    ctx->pc = 0x177E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E28u;
            // 0x177e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E30u;
    ctx->pc = 0x177e30u;
}
