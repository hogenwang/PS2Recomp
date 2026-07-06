#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CA10
// Address: 0x11ca10 - 0x11cad0
void sub_0011CA10_0x11ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CA10_0x11ca10");
#endif

    switch (ctx->pc) {
        case 0x11ca2cu: goto label_11ca2c;
        case 0x11ca6cu: goto label_11ca6c;
        case 0x11ca80u: goto label_11ca80;
        case 0x11cab4u: goto label_11cab4;
        default: break;
    }

    ctx->pc = 0x11ca10u;

    // 0x11ca10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ca14: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ca18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ca20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ca24: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11CA24u;
    SET_GPR_U32(ctx, 31, 0x11CA2Cu);
    ctx->pc = 0x11CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA24u;
            // 0x11ca28: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (runtime->hasFunction(0x11BA80u)) {
        auto targetFn = runtime->lookupFunction(0x11BA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA2Cu; }
        if (ctx->pc != 0x11CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA80_0x11ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA2Cu; }
        if (ctx->pc != 0x11CA2Cu) { return; }
    }
    ctx->pc = 0x11CA2Cu;
label_11ca2c:
    // 0x11ca2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CA2Cu;
    {
        const bool branch_taken_0x11ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA2Cu;
            // 0x11ca30: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca2c) {
            ctx->pc = 0x11CA3Cu;
            goto label_11ca3c;
        }
    }
    ctx->pc = 0x11CA34u;
    // 0x11ca34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11CA34u;
    {
        const bool branch_taken_0x11ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA34u;
            // 0x11ca38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca34) {
            ctx->pc = 0x11CAB8u;
            goto label_11cab8;
        }
    }
    ctx->pc = 0x11CA3Cu;
label_11ca3c:
    // 0x11ca3c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11ca40: 0x2450afc0  addiu       $s0, $v0, -0x5040
    ctx->pc = 0x11ca40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11ca44: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11ca48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ca4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ca50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ca54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ca58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca60: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ca64: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11CA64u;
    SET_GPR_U32(ctx, 31, 0x11CA6Cu);
    ctx->pc = 0x11CA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA64u;
            // 0x11ca68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA6Cu; }
        if (ctx->pc != 0x11CA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA6Cu; }
        if (ctx->pc != 0x11CA6Cu) { return; }
    }
    ctx->pc = 0x11CA6Cu;
label_11ca6c:
    // 0x11ca6c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CA6Cu;
    {
        const bool branch_taken_0x11ca6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA6Cu;
            // 0x11ca70: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca6c) {
            ctx->pc = 0x11CA88u;
            goto label_11ca88;
        }
    }
    ctx->pc = 0x11CA74u;
    // 0x11ca74: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11ca78: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11CA78u;
    SET_GPR_U32(ctx, 31, 0x11CA80u);
    ctx->pc = 0x11CA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA78u;
            // 0x11ca7c: 0x8c449dec  lw          $a0, -0x6214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA80u; }
        if (ctx->pc != 0x11CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA80u; }
        if (ctx->pc != 0x11CA80u) { return; }
    }
    ctx->pc = 0x11CA80u;
label_11ca80:
    // 0x11ca80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11CA80u;
    {
        const bool branch_taken_0x11ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA80u;
            // 0x11ca84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca80) {
            ctx->pc = 0x11CAB8u;
            goto label_11cab8;
        }
    }
    ctx->pc = 0x11CA88u;
label_11ca88:
    // 0x11ca88: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11ca8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11ca90: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x11ca94: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x11ca94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11ca98: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x11ca98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11ca9c: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x11ca9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11caa0: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x11caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x11caa4: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x11caa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11caa8: 0x8ca49dec  lw          $a0, -0x6214($a1)
    ctx->pc = 0x11caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942188)));
    // 0x11caac: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11CAACu;
    SET_GPR_U32(ctx, 31, 0x11CAB4u);
    ctx->pc = 0x11CAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAACu;
            // 0x11cab0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAB4u; }
        if (ctx->pc != 0x11CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAB4u; }
        if (ctx->pc != 0x11CAB4u) { return; }
    }
    ctx->pc = 0x11CAB4u;
label_11cab4:
    // 0x11cab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cab8:
    // 0x11cab8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cabc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x11CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAC4u;
            // 0x11cac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CACCu;
    // 0x11cacc: 0x0  nop
    ctx->pc = 0x11caccu;
    // NOP
    ctx->pc = 0x11cad0u;
}
