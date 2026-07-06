#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336C10
// Address: 0x336c10 - 0x336ca0
void sub_00336C10_0x336c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336C10_0x336c10");
#endif

    switch (ctx->pc) {
        case 0x336c2cu: goto label_336c2c;
        default: break;
    }

    ctx->pc = 0x336c10u;

    // 0x336c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336c14: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336c1c: 0x2484b270  addiu       $a0, $a0, -0x4D90
    ctx->pc = 0x336c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947440));
    // 0x336c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c24: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336C24u;
    SET_GPR_U32(ctx, 31, 0x336C2Cu);
    ctx->pc = 0x336C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336C24u;
            // 0x336c28: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C2Cu; }
        if (ctx->pc != 0x336C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C2Cu; }
        if (ctx->pc != 0x336C2Cu) { return; }
    }
    ctx->pc = 0x336C2Cu;
label_336c2c:
    // 0x336c2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x336c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336c30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c34: 0xa066b270  sb          $a2, -0x4D90($v1)
    ctx->pc = 0x336c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947440), (uint8_t)GPR_U32(ctx, 6));
    // 0x336c38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x336c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336c3c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x336c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336c44: 0xa065b271  sb          $a1, -0x4D8F($v1)
    ctx->pc = 0x336c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947441), (uint8_t)GPR_U32(ctx, 5));
    // 0x336c48: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c4c: 0xa064b272  sb          $a0, -0x4D8E($v1)
    ctx->pc = 0x336c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947442), (uint8_t)GPR_U32(ctx, 4));
    // 0x336c50: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c54: 0xa066b273  sb          $a2, -0x4D8D($v1)
    ctx->pc = 0x336c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947443), (uint8_t)GPR_U32(ctx, 6));
    // 0x336c58: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c5c: 0xa065b275  sb          $a1, -0x4D8B($v1)
    ctx->pc = 0x336c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947445), (uint8_t)GPR_U32(ctx, 5));
    // 0x336c60: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c64: 0xa065b276  sb          $a1, -0x4D8A($v1)
    ctx->pc = 0x336c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947446), (uint8_t)GPR_U32(ctx, 5));
    // 0x336c68: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c6c: 0xa060b277  sb          $zero, -0x4D89($v1)
    ctx->pc = 0x336c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947447), (uint8_t)GPR_U32(ctx, 0));
    // 0x336c70: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c74: 0xa060b278  sb          $zero, -0x4D88($v1)
    ctx->pc = 0x336c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947448), (uint8_t)GPR_U32(ctx, 0));
    // 0x336c78: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c7c: 0xa060b279  sb          $zero, -0x4D87($v1)
    ctx->pc = 0x336c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947449), (uint8_t)GPR_U32(ctx, 0));
    // 0x336c80: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c84: 0xa060b27a  sb          $zero, -0x4D86($v1)
    ctx->pc = 0x336c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947450), (uint8_t)GPR_U32(ctx, 0));
    // 0x336c88: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336c8c: 0xa066b274  sb          $a2, -0x4D8C($v1)
    ctx->pc = 0x336c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947444), (uint8_t)GPR_U32(ctx, 6));
    // 0x336c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336c94: 0x3e00008  jr          $ra
    ctx->pc = 0x336C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336C94u;
            // 0x336c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336C9Cu;
    // 0x336c9c: 0x0  nop
    ctx->pc = 0x336c9cu;
    // NOP
    ctx->pc = 0x336ca0u;
}
