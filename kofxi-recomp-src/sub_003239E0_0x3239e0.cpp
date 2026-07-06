#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003239E0
// Address: 0x3239e0 - 0x323ad0
void sub_003239E0_0x3239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239E0_0x3239e0");
#endif

    switch (ctx->pc) {
        case 0x323a40u: goto label_323a40;
        case 0x323a5cu: goto label_323a5c;
        case 0x323a74u: goto label_323a74;
        case 0x323a98u: goto label_323a98;
        default: break;
    }

    ctx->pc = 0x3239e0u;

    // 0x3239e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3239e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3239e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3239e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3239e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3239e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3239ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3239ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3239f0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3239f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3239f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3239f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3239f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3239fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x323a00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x323a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x323a04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x323a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x323a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323a0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x323a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323a14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x323a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323a1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x323a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a20: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x323a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x323a24: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x323a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x323a28: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x323a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a2c: 0x24847f10  addiu       $a0, $a0, 0x7F10
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32528));
    // 0x323a30: 0x24a53ef0  addiu       $a1, $a1, 0x3EF0
    ctx->pc = 0x323a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16112));
    // 0x323a34: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x323a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x323a38: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x323A38u;
    SET_GPR_U32(ctx, 31, 0x323A40u);
    ctx->pc = 0x323A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A38u;
            // 0x323a3c: 0x2407013c  addiu       $a3, $zero, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A40u; }
        if (ctx->pc != 0x323A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A40u; }
        if (ctx->pc != 0x323A40u) { return; }
    }
    ctx->pc = 0x323A40u;
label_323a40:
    // 0x323a40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x323a40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a44: 0x52c00015  beql        $s6, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x323A44u;
    {
        const bool branch_taken_0x323a44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a44) {
            ctx->pc = 0x323A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323A44u;
            // 0x323a48: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323A9Cu;
            goto label_323a9c;
        }
    }
    ctx->pc = 0x323A4Cu;
    // 0x323a4c: 0x8ed50010  lw          $s5, 0x10($s6)
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x323a50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x323a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a54: 0xc0c8d3c  jal         func_3234F0
    ctx->pc = 0x323A54u;
    SET_GPR_U32(ctx, 31, 0x323A5Cu);
    ctx->pc = 0x323A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A54u;
            // 0x323a58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3234F0u;
    if (runtime->hasFunction(0x3234F0u)) {
        auto targetFn = runtime->lookupFunction(0x3234F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A5Cu; }
        if (ctx->pc != 0x323A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003234F0_0x3234f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A5Cu; }
        if (ctx->pc != 0x323A5Cu) { return; }
    }
    ctx->pc = 0x323A5Cu;
label_323a5c:
    // 0x323a5c: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x323a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x323a60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x323a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a68: 0x26a600c8  addiu       $a2, $s5, 0xC8
    ctx->pc = 0x323a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x323a6c: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x323A6Cu;
    SET_GPR_U32(ctx, 31, 0x323A74u);
    ctx->pc = 0x323A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A6Cu;
            // 0x323a70: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (runtime->hasFunction(0x323AD0u)) {
        auto targetFn = runtime->lookupFunction(0x323AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A74u; }
        if (ctx->pc != 0x323A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323AD0_0x323ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A74u; }
        if (ctx->pc != 0x323A74u) { return; }
    }
    ctx->pc = 0x323A74u;
label_323a74:
    // 0x323a74: 0xa6b100e0  sh          $s1, 0xE0($s5)
    ctx->pc = 0x323a74u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 224), (uint16_t)GPR_U32(ctx, 17));
    // 0x323a78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x323a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a7c: 0xa6b700e2  sh          $s7, 0xE2($s5)
    ctx->pc = 0x323a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 226), (uint16_t)GPR_U32(ctx, 23));
    // 0x323a80: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x323a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a84: 0xa6b200de  sh          $s2, 0xDE($s5)
    ctx->pc = 0x323a84u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 222), (uint16_t)GPR_U32(ctx, 18));
    // 0x323a88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x323a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a90: 0xc0c8d7c  jal         func_3235F0
    ctx->pc = 0x323A90u;
    SET_GPR_U32(ctx, 31, 0x323A98u);
    ctx->pc = 0x323A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A90u;
            // 0x323a94: 0xa6b000dc  sh          $s0, 0xDC($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 220), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3235F0u;
    if (runtime->hasFunction(0x3235F0u)) {
        auto targetFn = runtime->lookupFunction(0x3235F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A98u; }
        if (ctx->pc != 0x323A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003235F0_0x3235f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A98u; }
        if (ctx->pc != 0x323A98u) { return; }
    }
    ctx->pc = 0x323A98u;
label_323a98:
    // 0x323a98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x323a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_323a9c:
    // 0x323a9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x323a9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x323aa0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x323aa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323aa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x323aa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323aa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x323aa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323aac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323abc: 0x3e00008  jr          $ra
    ctx->pc = 0x323ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323ABCu;
            // 0x323ac0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323AC4u;
    // 0x323ac4: 0x0  nop
    ctx->pc = 0x323ac4u;
    // NOP
    // 0x323ac8: 0x0  nop
    ctx->pc = 0x323ac8u;
    // NOP
    // 0x323acc: 0x0  nop
    ctx->pc = 0x323accu;
    // NOP
    ctx->pc = 0x323ad0u;
}
