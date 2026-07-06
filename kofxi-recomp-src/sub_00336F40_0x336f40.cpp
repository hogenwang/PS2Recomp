#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336F40
// Address: 0x336f40 - 0x336fe0
void sub_00336F40_0x336f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336F40_0x336f40");
#endif

    switch (ctx->pc) {
        case 0x336f88u: goto label_336f88;
        default: break;
    }

    ctx->pc = 0x336f40u;

    // 0x336f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336f44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x336f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x336f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x336f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336f50: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x336f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336f58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x336f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336f60: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x336f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336f68: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x336f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x336f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x336f70: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x336f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f74: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x336f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x336f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f7c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x336f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x336f80: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x336F80u;
    SET_GPR_U32(ctx, 31, 0x336F88u);
    ctx->pc = 0x336F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336F80u;
            // 0x336f84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F88u; }
        if (ctx->pc != 0x336F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F88u; }
        if (ctx->pc != 0x336F88u) { return; }
    }
    ctx->pc = 0x336F88u;
label_336f88:
    // 0x336f88: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x336f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x336f8c: 0x142e3c  dsll32      $a1, $s4, 24
    ctx->pc = 0x336f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 24));
    // 0x336f90: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x336f90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x336f94: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x336f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x336f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336f9c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x336f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x336fa0: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x336fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x336fa4: 0xa0d30000  sb          $s3, 0x0($a2)
    ctx->pc = 0x336fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x336fa8: 0xa4d20002  sh          $s2, 0x2($a2)
    ctx->pc = 0x336fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x336fac: 0xa4d10004  sh          $s1, 0x4($a2)
    ctx->pc = 0x336facu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x336fb0: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x336fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x336fb4: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x336fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x336fb8: 0xacd00018  sw          $s0, 0x18($a2)
    ctx->pc = 0x336fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 16));
    // 0x336fbc: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x336fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x336fc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x336fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336fc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x336FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336FD8u;
            // 0x336fdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336FE0u;
    ctx->pc = 0x336fe0u;
}
