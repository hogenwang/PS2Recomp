#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336EA0
// Address: 0x336ea0 - 0x336f40
void sub_00336EA0_0x336ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336EA0_0x336ea0");
#endif

    switch (ctx->pc) {
        case 0x336ee8u: goto label_336ee8;
        default: break;
    }

    ctx->pc = 0x336ea0u;

    // 0x336ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x336ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x336ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x336eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336eb0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x336eb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336eb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336eb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x336eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336ec0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x336ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336ec4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336ec8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x336ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336ecc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x336eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x336ed0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x336ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336ed4: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x336ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x336ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336edc: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x336edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x336ee0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x336EE0u;
    SET_GPR_U32(ctx, 31, 0x336EE8u);
    ctx->pc = 0x336EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336EE0u;
            // 0x336ee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336EE8u; }
        if (ctx->pc != 0x336EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336EE8u; }
        if (ctx->pc != 0x336EE8u) { return; }
    }
    ctx->pc = 0x336EE8u;
label_336ee8:
    // 0x336ee8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x336ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x336eec: 0x14263c  dsll32      $a0, $s4, 24
    ctx->pc = 0x336eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 24));
    // 0x336ef0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x336ef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x336ef4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x336ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x336ef8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x336ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x336efc: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x336efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x336f00: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x336f00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x336f04: 0xa4b20002  sh          $s2, 0x2($a1)
    ctx->pc = 0x336f04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x336f08: 0xa4b10004  sh          $s1, 0x4($a1)
    ctx->pc = 0x336f08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x336f0c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x336f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x336f10: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x336f14: 0xacb00018  sw          $s0, 0x18($a1)
    ctx->pc = 0x336f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 16));
    // 0x336f18: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x336f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x336f1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x336f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f34: 0x3e00008  jr          $ra
    ctx->pc = 0x336F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336F34u;
            // 0x336f38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336F3Cu;
    // 0x336f3c: 0x0  nop
    ctx->pc = 0x336f3cu;
    // NOP
    ctx->pc = 0x336f40u;
}
