#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BDA8
// Address: 0x26bda8 - 0x26bf70
void sub_0026BDA8_0x26bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BDA8_0x26bda8");
#endif

    switch (ctx->pc) {
        case 0x26bdecu: goto label_26bdec;
        case 0x26be00u: goto label_26be00;
        case 0x26be24u: goto label_26be24;
        case 0x26be38u: goto label_26be38;
        case 0x26be48u: goto label_26be48;
        case 0x26be64u: goto label_26be64;
        case 0x26bea8u: goto label_26bea8;
        case 0x26beecu: goto label_26beec;
        case 0x26befcu: goto label_26befc;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf20u: goto label_26bf20;
        case 0x26bf3cu: goto label_26bf3c;
        default: break;
    }

    ctx->pc = 0x26bda8u;

    // 0x26bda8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26bdac: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x26bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x26bdb0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x26bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x26bdb4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x26bdb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdb8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26bdbc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26bdbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26bdc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdc4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26bdc8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26bdcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdd0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x26bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x26bdd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdd8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x26bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x26bddc: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x26bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x26bde0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26bde4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26BDE4u;
    SET_GPR_U32(ctx, 31, 0x26BDECu);
    ctx->pc = 0x26BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDE4u;
            // 0x26bde8: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDECu; }
        if (ctx->pc != 0x26BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDECu; }
        if (ctx->pc != 0x26BDECu) { return; }
    }
    ctx->pc = 0x26BDECu;
label_26bdec:
    // 0x26bdec: 0x8ac40003  lwl         $a0, 0x3($s6)
    ctx->pc = 0x26bdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26bdf0: 0x9ac40000  lwr         $a0, 0x0($s6)
    ctx->pc = 0x26bdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26bdf4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x26bdf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdf8: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x26BDF8u;
    SET_GPR_U32(ctx, 31, 0x26BE00u);
    ctx->pc = 0x26BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDF8u;
            // 0x26bdfc: 0x27b2000e  addiu       $s2, $sp, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE00u; }
        if (ctx->pc != 0x26BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE00u; }
        if (ctx->pc != 0x26BE00u) { return; }
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x26be00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x26be04: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x26be08: 0xac621b4c  sw          $v0, 0x1B4C($v1)
    ctx->pc = 0x26be08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6988), GPR_U32(ctx, 2));
    // 0x26be0c: 0x24c61b60  addiu       $a2, $a2, 0x1B60
    ctx->pc = 0x26be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7008));
    // 0x26be10: 0x34058008  ori         $a1, $zero, 0x8008
    ctx->pc = 0x26be10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x26be14: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26be14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26be18: 0x34a54267  ori         $a1, $a1, 0x4267
    ctx->pc = 0x26be18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16999);
    // 0x26be1c: 0xc0980e6  jal         func_260398
    ctx->pc = 0x26BE1Cu;
    SET_GPR_U32(ctx, 31, 0x26BE24u);
    ctx->pc = 0x26BE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE1Cu;
            // 0x26be20: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BE24u;
    {
        const bool branch_taken_0x26be24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE24u;
            // 0x26be28: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be24) {
            ctx->pc = 0x26BE40u;
            goto label_26be40;
        }
    }
    ctx->pc = 0x26BE2Cu;
    // 0x26be2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26be30: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26BE30u;
    SET_GPR_U32(ctx, 31, 0x26BE38u);
    ctx->pc = 0x26BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE30u;
            // 0x26be34: 0x24a589d8  addiu       $a1, $a1, -0x7628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE38u; }
        if (ctx->pc != 0x26BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE38u; }
        if (ctx->pc != 0x26BE38u) { return; }
    }
    ctx->pc = 0x26BE38u;
label_26be38:
    // 0x26be38: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26BE38u;
    {
        const bool branch_taken_0x26be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE38u;
            // 0x26be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be38) {
            ctx->pc = 0x26BF40u;
            goto label_26bf40;
        }
    }
    ctx->pc = 0x26BE40u;
label_26be40:
    // 0x26be40: 0xc08a262  jal         func_228988
    ctx->pc = 0x26BE40u;
    SET_GPR_U32(ctx, 31, 0x26BE48u);
    ctx->pc = 0x26BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE40u;
            // 0x26be44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE48u; }
        if (ctx->pc != 0x26BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE48u; }
        if (ctx->pc != 0x26BE48u) { return; }
    }
    ctx->pc = 0x26BE48u;
label_26be48:
    // 0x26be48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26be48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be4c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x26be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26be50: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26be50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be54: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x26be54u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x26be58: 0xa3b1000e  sb          $s1, 0xE($sp)
    ctx->pc = 0x26be58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 17));
    // 0x26be5c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26BE5Cu;
    SET_GPR_U32(ctx, 31, 0x26BE64u);
    ctx->pc = 0x26BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE5Cu;
            // 0x26be60: 0xa2500001  sb          $s0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE64u; }
        if (ctx->pc != 0x26BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE64u; }
        if (ctx->pc != 0x26BE64u) { return; }
    }
    ctx->pc = 0x26BE64u;
label_26be64:
    // 0x26be64: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26be68: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26be6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26be70: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x26be70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26be74: 0xa2440004  sb          $a0, 0x4($s2)
    ctx->pc = 0x26be74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x26be78: 0x27ad001c  addiu       $t5, $sp, 0x1C
    ctx->pc = 0x26be78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26be7c: 0xa2450005  sb          $a1, 0x5($s2)
    ctx->pc = 0x26be7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x26be80: 0x27b50026  addiu       $s5, $sp, 0x26
    ctx->pc = 0x26be80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    // 0x26be84: 0xa2510006  sb          $s1, 0x6($s2)
    ctx->pc = 0x26be84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 17));
    // 0x26be88: 0x27ac0016  addiu       $t4, $sp, 0x16
    ctx->pc = 0x26be88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
    // 0x26be8c: 0xa2500007  sb          $s0, 0x7($s2)
    ctx->pc = 0x26be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 16));
    // 0x26be90: 0x268b006a  addiu       $t3, $s4, 0x6A
    ctx->pc = 0x26be90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 106));
    // 0x26be94: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x26be94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26be98: 0x37aa0006  ori         $t2, $sp, 0x6
    ctx->pc = 0x26be98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x26be9c: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x26be9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bea0: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x26bea0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26bea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26bea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bea8:
    // 0x26bea8: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x26beac: 0x1882021  addu        $a0, $t4, $t0
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x26beb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x26beb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26beb4: 0x1482821  addu        $a1, $t2, $t0
    ctx->pc = 0x26beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x26beb8: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x26bebc: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x26bec0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x26bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bec4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26bec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26bec8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x26bec8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26becc: 0x29020006  slti        $v0, $t0, 0x6
    ctx->pc = 0x26beccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26bed0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x26bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bed4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26BED4u;
    {
        const bool branch_taken_0x26bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BED4u;
            // 0x26bed8: 0xa0ee0000  sb          $t6, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bed4) {
            ctx->pc = 0x26BEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26bea8;
        }
    }
    ctx->pc = 0x26BEDCu;
    // 0x26bedc: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x26bedcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x26bee0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x26bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bee4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26BEE4u;
    SET_GPR_U32(ctx, 31, 0x26BEECu);
    ctx->pc = 0x26BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEE4u;
            // 0x26bee8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEECu; }
        if (ctx->pc != 0x26BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEECu; }
        if (ctx->pc != 0x26BEECu) { return; }
    }
    ctx->pc = 0x26BEECu;
label_26beec:
    // 0x26beec: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x26beecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x26bef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bef4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26BEF4u;
    SET_GPR_U32(ctx, 31, 0x26BEFCu);
    ctx->pc = 0x26BEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEF4u;
            // 0x26bef8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEFCu; }
        if (ctx->pc != 0x26BEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEFCu; }
        if (ctx->pc != 0x26BEFCu) { return; }
    }
    ctx->pc = 0x26BEFCu;
label_26befc:
    // 0x26befc: 0xc08a262  jal         func_228988
    ctx->pc = 0x26BEFCu;
    SET_GPR_U32(ctx, 31, 0x26BF04u);
    ctx->pc = 0x26BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEFCu;
            // 0x26bf00: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF04u; }
        if (ctx->pc != 0x26BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF04u; }
        if (ctx->pc != 0x26BF04u) { return; }
    }
    ctx->pc = 0x26BF04u;
label_26bf04:
    // 0x26bf04: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x26bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x26bf08: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26bf0c: 0xa263000d  sb          $v1, 0xD($s3)
    ctx->pc = 0x26bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bf10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf14: 0xa262000c  sb          $v0, 0xC($s3)
    ctx->pc = 0x26bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bf18: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x26BF18u;
    SET_GPR_U32(ctx, 31, 0x26BF20u);
    ctx->pc = 0x26BF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF18u;
            // 0x26bf1c: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF20u; }
        if (ctx->pc != 0x26BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF20u; }
        if (ctx->pc != 0x26BF20u) { return; }
    }
    ctx->pc = 0x26BF20u;
label_26bf20:
    // 0x26bf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf24: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BF24u;
    {
        const bool branch_taken_0x26bf24 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x26BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF24u;
            // 0x26bf28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf24) {
            ctx->pc = 0x26BF40u;
            goto label_26bf40;
        }
    }
    ctx->pc = 0x26BF2Cu;
    // 0x26bf2c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26bf30: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26bf34: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26BF34u;
    SET_GPR_U32(ctx, 31, 0x26BF3Cu);
    ctx->pc = 0x26BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF34u;
            // 0x26bf38: 0x24a58a10  addiu       $a1, $a1, -0x75F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF3Cu; }
        if (ctx->pc != 0x26BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF3Cu; }
        if (ctx->pc != 0x26BF3Cu) { return; }
    }
    ctx->pc = 0x26BF3Cu;
label_26bf3c:
    // 0x26bf3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26bf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bf40:
    // 0x26bf40: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x26bf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26bf44: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x26bf44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bf48: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x26bf48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bf4c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x26bf4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26bf50: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26bf50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bf54: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26bf54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26bf58: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26bf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bf5c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26bf5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bf60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26bf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bf64: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF64u;
            // 0x26bf68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BF6Cu;
    // 0x26bf6c: 0x0  nop
    ctx->pc = 0x26bf6cu;
    // NOP
    ctx->pc = 0x26bf70u;
}
