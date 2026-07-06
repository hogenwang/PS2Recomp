#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE998
// Address: 0x1fe998 - 0x1feac8
void sub_001FE998_0x1fe998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE998_0x1fe998");
#endif

    switch (ctx->pc) {
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea8cu: goto label_1fea8c;
        case 0x1fea9cu: goto label_1fea9c;
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feab0u: goto label_1feab0;
        default: break;
    }

    ctx->pc = 0x1fe998u;

    // 0x1fe998: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x1fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x1fe99c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fe99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fe9a0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1fe9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1fe9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9A4u;
            // 0x1fe9a8: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9ACu;
    // 0x1fe9ac: 0x0  nop
    ctx->pc = 0x1fe9acu;
    // NOP
label_1fe9b0:
    // 0x1fe9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9B0u;
            // 0x1fe9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9B8u;
label_1fe9b8:
    // 0x1fe9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9B8u;
            // 0x1fe9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9C0u;
label_1fe9c0:
    // 0x1fe9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9C0u;
            // 0x1fe9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9C8u;
label_1fe9c8:
    // 0x1fe9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9C8u;
            // 0x1fe9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9D0u;
label_1fe9d0:
    // 0x1fe9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9D0u;
            // 0x1fe9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE9D8u;
label_1fe9d8:
    // 0x1fe9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe9dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fe9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe9e4: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1fe9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1fe9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe9ec: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FE9ECu;
    ctx->pc = 0x1FE9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9ECu;
            // 0x1fe9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE9F4u;
    // 0x1fe9f4: 0x0  nop
    ctx->pc = 0x1fe9f4u;
    // NOP
label_1fe9f8:
    // 0x1fe9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe9fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fea00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea04: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1fea04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1fea08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea0c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FEA0Cu;
    ctx->pc = 0x1FEA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA0Cu;
            // 0x1fea10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FEA14u;
    // 0x1fea14: 0x0  nop
    ctx->pc = 0x1fea14u;
    // NOP
label_1fea18:
    // 0x1fea18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fea1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fea20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea24: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1fea24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1fea28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea2c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FEA2Cu;
    ctx->pc = 0x1FEA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA2Cu;
            // 0x1fea30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FEA34u;
    // 0x1fea34: 0x0  nop
    ctx->pc = 0x1fea34u;
    // NOP
label_1fea38:
    // 0x1fea38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fea3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fea40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea44: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x1fea44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x1fea48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea4c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FEA4Cu;
    ctx->pc = 0x1FEA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA4Cu;
            // 0x1fea50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FEA54u;
    // 0x1fea54: 0x0  nop
    ctx->pc = 0x1fea54u;
    // NOP
label_1fea58:
    // 0x1fea58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA58u;
            // 0x1fea5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA60u;
label_1fea60:
    // 0x1fea60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA60u;
            // 0x1fea64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA68u;
label_1fea68:
    // 0x1fea68: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA68u;
            // 0x1fea6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEA70u;
label_1fea70:
    // 0x1fea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fea74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fea78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fea7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fea80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fea84: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FEA84u;
    SET_GPR_U32(ctx, 31, 0x1FEA8Cu);
    ctx->pc = 0x1FEA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA84u;
            // 0x1fea88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA8Cu; }
        if (ctx->pc != 0x1FEA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA8Cu; }
        if (ctx->pc != 0x1FEA8Cu) { return; }
    }
    ctx->pc = 0x1FEA8Cu;
label_1fea8c:
    // 0x1fea8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEA8Cu;
    {
        const bool branch_taken_0x1fea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA8Cu;
            // 0x1fea90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea8c) {
            ctx->pc = 0x1FEAB4u;
            goto label_1feab4;
        }
    }
    ctx->pc = 0x1FEA94u;
    // 0x1fea94: 0xc07fab2  jal         func_1FEAC8
    ctx->pc = 0x1FEA94u;
    SET_GPR_U32(ctx, 31, 0x1FEA9Cu);
    ctx->pc = 0x1FEAC8u;
    if (runtime->hasFunction(0x1FEAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA9Cu; }
        if (ctx->pc != 0x1FEA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEAC8_0x1feac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA9Cu; }
        if (ctx->pc != 0x1FEA9Cu) { return; }
    }
    ctx->pc = 0x1FEA9Cu;
label_1fea9c:
    // 0x1fea9c: 0xc07fb06  jal         func_1FEC18
    ctx->pc = 0x1FEA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEAA4u);
    ctx->pc = 0x1FEAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA9Cu;
            // 0x1feaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC18u;
    if (runtime->hasFunction(0x1FEC18u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAA4u; }
        if (ctx->pc != 0x1FEAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEC18_0x1fec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAA4u; }
        if (ctx->pc != 0x1FEAA4u) { return; }
    }
    ctx->pc = 0x1FEAA4u;
label_1feaa4:
    // 0x1feaa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feaa8: 0xc07fae4  jal         func_1FEB90
    ctx->pc = 0x1FEAA8u;
    SET_GPR_U32(ctx, 31, 0x1FEAB0u);
    ctx->pc = 0x1FEAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAA8u;
            // 0x1feaac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB90u;
    if (runtime->hasFunction(0x1FEB90u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAB0u; }
        if (ctx->pc != 0x1FEAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEB90_0x1feb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAB0u; }
        if (ctx->pc != 0x1FEAB0u) { return; }
    }
    ctx->pc = 0x1FEAB0u;
label_1feab0:
    // 0x1feab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1feab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1feab4:
    // 0x1feab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feabc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAC0u;
            // 0x1feac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAC8u;
    ctx->pc = 0x1feac8u;
}
