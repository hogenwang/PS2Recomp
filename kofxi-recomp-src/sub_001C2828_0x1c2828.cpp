#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2828
// Address: 0x1c2828 - 0x1c28f0
void sub_001C2828_0x1c2828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2828_0x1c2828");
#endif

    switch (ctx->pc) {
        case 0x1c284cu: goto label_1c284c;
        case 0x1c2854u: goto label_1c2854;
        case 0x1c28c8u: goto label_1c28c8;
        case 0x1c28e0u: goto label_1c28e0;
        default: break;
    }

    ctx->pc = 0x1c2828u;

    // 0x1c2828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c282c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2834: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c2834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c2838: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1c2838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c283c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C283Cu;
    {
        const bool branch_taken_0x1c283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c283c) {
            ctx->pc = 0x1C2840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C283Cu;
            // 0x1c2840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C28E0u;
            goto label_1c28e0;
        }
    }
    ctx->pc = 0x1C2844u;
    // 0x1c2844: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C2844u;
    SET_GPR_U32(ctx, 31, 0x1C284Cu);
    ctx->pc = 0x1CDB78u;
    if (runtime->hasFunction(0x1CDB78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C284Cu; }
        if (ctx->pc != 0x1C284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB78_0x1cdb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C284Cu; }
        if (ctx->pc != 0x1C284Cu) { return; }
    }
    ctx->pc = 0x1C284Cu;
label_1c284c:
    // 0x1c284c: 0xc07017e  jal         func_1C05F8
    ctx->pc = 0x1C284Cu;
    SET_GPR_U32(ctx, 31, 0x1C2854u);
    ctx->pc = 0x1C2850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C284Cu;
            // 0x1c2850: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C05F8u;
    if (runtime->hasFunction(0x1C05F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C05F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2854u; }
        if (ctx->pc != 0x1C2854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C05F8_0x1c05f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2854u; }
        if (ctx->pc != 0x1C2854u) { return; }
    }
    ctx->pc = 0x1C2854u;
label_1c2854:
    // 0x1c2854: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2858: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1c2858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c285c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C285Cu;
    {
        const bool branch_taken_0x1c285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c285c) {
            ctx->pc = 0x1C2860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C285Cu;
            // 0x1c2860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C28D0u;
            goto label_1c28d0;
        }
    }
    ctx->pc = 0x1C2864u;
    // 0x1c2864: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c2864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2868: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c286c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2870: 0x8c639cf0  lw          $v1, -0x6310($v1)
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941936)));
    // 0x1c2874: 0x600008  jr          $v1
    ctx->pc = 0x1C2874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2880u: goto label_1c2880;
            case 0x1C2890u: goto label_1c2890;
            case 0x1C28B8u: goto label_1c28b8;
            case 0x1C28CCu: goto label_1c28cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C287Cu;
    // 0x1c287c: 0x0  nop
    ctx->pc = 0x1c287cu;
    // NOP
label_1c2880:
    // 0x1c2880: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2884: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c2884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c2888: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C2888u;
    {
        const bool branch_taken_0x1c2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C288Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2888u;
            // 0x1c288c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2888) {
            ctx->pc = 0x1C28C0u;
            goto label_1c28c0;
        }
    }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2898: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c289c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1c289cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1c28a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c28a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c28a8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1c28a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c28ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28ACu;
    {
        const bool branch_taken_0x1c28ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28ACu;
            // 0x1c28b0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28ac) {
            ctx->pc = 0x1C28C0u;
            goto label_1c28c0;
        }
    }
    ctx->pc = 0x1C28B4u;
    // 0x1c28b4: 0x0  nop
    ctx->pc = 0x1c28b4u;
    // NOP
label_1c28b8:
    // 0x1c28b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c28b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c28bc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c28c0:
    // 0x1c28c0: 0xc0700ee  jal         func_1C03B8
    ctx->pc = 0x1C28C0u;
    SET_GPR_U32(ctx, 31, 0x1C28C8u);
    ctx->pc = 0x1C03B8u;
    if (runtime->hasFunction(0x1C03B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C03B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28C8u; }
        if (ctx->pc != 0x1C28C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C03B8_0x1c03b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28C8u; }
        if (ctx->pc != 0x1C28C8u) { return; }
    }
    ctx->pc = 0x1C28C8u;
label_1c28c8:
    // 0x1c28c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1c28cc:
    // 0x1c28cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c28ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c28d0:
    // 0x1c28d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c28d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c28d4: 0x80736fc  j           func_1CDBF0
    ctx->pc = 0x1C28D4u;
    ctx->pc = 0x1C28D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28D4u;
            // 0x1c28d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBF0u;
    if (runtime->hasFunction(0x1CDBF0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C28DCu;
    // 0x1c28dc: 0x0  nop
    ctx->pc = 0x1c28dcu;
    // NOP
label_1c28e0:
    // 0x1c28e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c28e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28E4u;
            // 0x1c28e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C28ECu;
    // 0x1c28ec: 0x0  nop
    ctx->pc = 0x1c28ecu;
    // NOP
    ctx->pc = 0x1c28f0u;
}
