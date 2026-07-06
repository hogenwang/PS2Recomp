#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032FF70
// Address: 0x32ff70 - 0x330010
void sub_0032FF70_0x32ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FF70_0x32ff70");
#endif

    switch (ctx->pc) {
        case 0x32ffb8u: goto label_32ffb8;
        default: break;
    }

    ctx->pc = 0x32ff70u;

    // 0x32ff70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32ff74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32ff78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32ff7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32ff80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32ff80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ff88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32ff88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ff90: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x32ff90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ff98: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x32ff98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff9c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32ffa0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x32ffa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ffa4: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x32ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x32ffa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32ffa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ffac: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x32ffb0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x32FFB0u;
    SET_GPR_U32(ctx, 31, 0x32FFB8u);
    ctx->pc = 0x32FFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FFB0u;
            // 0x32ffb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FFB8u; }
        if (ctx->pc != 0x32FFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FFB8u; }
        if (ctx->pc != 0x32FFB8u) { return; }
    }
    ctx->pc = 0x32FFB8u;
label_32ffb8:
    // 0x32ffb8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x32ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32ffbc: 0x14263c  dsll32      $a0, $s4, 24
    ctx->pc = 0x32ffbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 24));
    // 0x32ffc0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32ffc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32ffc4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32ffc8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x32ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x32ffcc: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x32ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x32ffd0: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x32ffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x32ffd4: 0xa4b20002  sh          $s2, 0x2($a1)
    ctx->pc = 0x32ffd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x32ffd8: 0xa4b10004  sh          $s1, 0x4($a1)
    ctx->pc = 0x32ffd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x32ffdc: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x32ffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ffe0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x32ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x32ffe4: 0xacb00018  sw          $s0, 0x18($a1)
    ctx->pc = 0x32ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 16));
    // 0x32ffe8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x32ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x32ffec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32fff0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32fff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330004: 0x3e00008  jr          $ra
    ctx->pc = 0x330004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330004u;
            // 0x330008: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33000Cu;
    // 0x33000c: 0x0  nop
    ctx->pc = 0x33000cu;
    // NOP
    ctx->pc = 0x330010u;
}
