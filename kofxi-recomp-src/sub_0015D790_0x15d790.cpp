#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D790
// Address: 0x15d790 - 0x15d980
void sub_0015D790_0x15d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D790_0x15d790");
#endif

    switch (ctx->pc) {
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d850u: goto label_15d850;
        case 0x15d894u: goto label_15d894;
        case 0x15d8dcu: goto label_15d8dc;
        case 0x15d924u: goto label_15d924;
        default: break;
    }

    ctx->pc = 0x15d790u;

    // 0x15d790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15d794: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15d798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d7a4: 0x80634074  lb          $v1, 0x4074($v1)
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16500)));
    // 0x15d7a8: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x15D7A8u;
    {
        const bool branch_taken_0x15d7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7A8u;
            // 0x15d7ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a8) {
            ctx->pc = 0x15D96Cu;
            goto label_15d96c;
        }
    }
    ctx->pc = 0x15D7B0u;
    // 0x15d7b0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15d7b4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15d7b8: 0x2484d550  addiu       $a0, $a0, -0x2AB0
    ctx->pc = 0x15d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956368));
    // 0x15d7bc: 0x24a5d320  addiu       $a1, $a1, -0x2CE0
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    // 0x15d7c0: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x15d7c4: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x15d7c8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x15D7C8u;
    SET_GPR_U32(ctx, 31, 0x15D7D0u);
    ctx->pc = 0x15D7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7C8u;
            // 0x15d7cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7D0u; }
        if (ctx->pc != 0x15D7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7D0u; }
        if (ctx->pc != 0x15D7D0u) { return; }
    }
    ctx->pc = 0x15D7D0u;
label_15d7d0:
    // 0x15d7d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7d4: 0x52000066  beql        $s0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x15D7D4u;
    {
        const bool branch_taken_0x15d7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7d4) {
            ctx->pc = 0x15D7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7D4u;
            // 0x15d7d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D970u;
            goto label_15d970;
        }
    }
    ctx->pc = 0x15D7DCu;
    // 0x15d7dc: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x15D7DCu;
    SET_GPR_U32(ctx, 31, 0x15D7E4u);
    ctx->pc = 0x15D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7DCu;
            // 0x15d7e0: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7E4u; }
        if (ctx->pc != 0x15D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7E4u; }
        if (ctx->pc != 0x15D7E4u) { return; }
    }
    ctx->pc = 0x15D7E4u;
label_15d7e4:
    // 0x15d7e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7e8: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x15d7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7f0: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15D7F0u;
    SET_GPR_U32(ctx, 31, 0x15D7F8u);
    ctx->pc = 0x15D7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7F0u;
            // 0x15d7f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7F8u; }
        if (ctx->pc != 0x15D7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7F8u; }
        if (ctx->pc != 0x15D7F8u) { return; }
    }
    ctx->pc = 0x15D7F8u;
label_15d7f8:
    // 0x15d7f8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15d7fc: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x15d800: 0x3c07c3c8  lui         $a3, 0xC3C8
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50120 << 16));
    // 0x15d804: 0x3c06c40d  lui         $a2, 0xC40D
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50189 << 16));
    // 0x15d808: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
    // 0x15d80c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d810: 0x3064000c  andi        $a0, $v1, 0xC
    ctx->pc = 0x15d810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15d814: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15d818: 0x44882  srl         $t1, $a0, 2
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15d81c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x15d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x15d820: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x15d824: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d828: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x15d828u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d82c: 0x81270000  lb          $a3, 0x0($t1)
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15d830: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15d830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d834: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x15d834u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d838: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15d83c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x15d83cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d840: 0xa0484074  sb          $t0, 0x4074($v0)
    ctx->pc = 0x15d840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16500), (uint8_t)GPR_U32(ctx, 8));
    // 0x15d844: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15d848: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D848u;
    SET_GPR_U32(ctx, 31, 0x15D850u);
    ctx->pc = 0x15D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D848u;
            // 0x15d84c: 0x3c05ff00  lui         $a1, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    }
    ctx->pc = 0x15D850u;
label_15d850:
    // 0x15d850: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x15d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d854: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x15d858: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x15d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d85c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d864: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x15d864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x15d868: 0x3c02c40d  lui         $v0, 0xC40D
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50189 << 16));
    // 0x15d86c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d870: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15d874: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x15d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d878: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x15d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d87c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d880: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x15d880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15d884: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x15d884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15d888: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x15d888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15d88c: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D88Cu;
    SET_GPR_U32(ctx, 31, 0x15D894u);
    ctx->pc = 0x15D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D88Cu;
            // 0x15d890: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D894u; }
        if (ctx->pc != 0x15D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D894u; }
        if (ctx->pc != 0x15D894u) { return; }
    }
    ctx->pc = 0x15D894u;
label_15d894:
    // 0x15d894: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x15d898: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15d89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d8a0: 0x3c02c384  lui         $v0, 0xC384
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50052 << 16));
    // 0x15d8a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d8a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15d8ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d8b0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x15d8b4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x15d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d8b8: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d8bc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x15d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d8c0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d8c4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x15d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d8c8: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x15d8c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x15d8cc: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x15d8ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x15d8d0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x15d8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x15d8d4: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D8D4u;
    SET_GPR_U32(ctx, 31, 0x15D8DCu);
    ctx->pc = 0x15D8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8D4u;
            // 0x15d8d8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8DCu; }
        if (ctx->pc != 0x15D8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8DCu; }
        if (ctx->pc != 0x15D8DCu) { return; }
    }
    ctx->pc = 0x15D8DCu;
label_15d8dc:
    // 0x15d8dc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x15d8e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15d8e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d8e8: 0x3c02c384  lui         $v0, 0xC384
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50052 << 16));
    // 0x15d8ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d8f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15d8f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d8f8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x15d8fc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x15d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d900: 0x344500ff  ori         $a1, $v0, 0xFF
    ctx->pc = 0x15d900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x15d904: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x15d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d908: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x15d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d90c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d910: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x15d910u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x15d914: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x15d914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15d918: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x15d918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15d91c: 0xc057290  jal         func_15CA40
    ctx->pc = 0x15D91Cu;
    SET_GPR_U32(ctx, 31, 0x15D924u);
    ctx->pc = 0x15D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D91Cu;
            // 0x15d920: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA40u;
    if (runtime->hasFunction(0x15CA40u)) {
        auto targetFn = runtime->lookupFunction(0x15CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D924u; }
        if (ctx->pc != 0x15D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA40_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D924u; }
        if (ctx->pc != 0x15D924u) { return; }
    }
    ctx->pc = 0x15D924u;
label_15d924:
    // 0x15d924: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x15d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d92c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x15d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d934: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d938: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d93c: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x15d93cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15d940: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x15d940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15d944: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x15d944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15d948: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x15d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x15d94c: 0xa2040040  sb          $a0, 0x40($s0)
    ctx->pc = 0x15d94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d950: 0xa2030049  sb          $v1, 0x49($s0)
    ctx->pc = 0x15d950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d954: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x15d954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d958: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x15d958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15d95c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15d960: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D960u;
    {
        const bool branch_taken_0x15d960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d960) {
            ctx->pc = 0x15D964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D960u;
            // 0x15d964: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D96Cu;
            goto label_15d96c;
        }
    }
    ctx->pc = 0x15D968u;
    // 0x15d968: 0xa2040048  sb          $a0, 0x48($s0)
    ctx->pc = 0x15d968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 4));
label_15d96c:
    // 0x15d96c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d970:
    // 0x15d970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d978: 0x3e00008  jr          $ra
    ctx->pc = 0x15D978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D978u;
            // 0x15d97c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D980u;
    ctx->pc = 0x15d980u;
}
