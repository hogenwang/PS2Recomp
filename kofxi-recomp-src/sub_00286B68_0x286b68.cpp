#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286B68
// Address: 0x286b68 - 0x286c30
void sub_00286B68_0x286b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286B68_0x286b68");
#endif

    switch (ctx->pc) {
        case 0x286bacu: goto label_286bac;
        case 0x286bd8u: goto label_286bd8;
        case 0x286c04u: goto label_286c04;
        case 0x286c0cu: goto label_286c0c;
        default: break;
    }

    ctx->pc = 0x286b68u;

    // 0x286b68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286b6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x286b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x286b70: 0x8c4736e8  lw          $a3, 0x36E8($v0)
    ctx->pc = 0x286b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14056)));
    // 0x286b74: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x286b78: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x286b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x286b7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x286b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x286b8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x286b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x286b90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286b94: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x286b98: 0x24a5a738  addiu       $a1, $a1, -0x58C8
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944568));
    // 0x286b9c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x286b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x286ba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ba4: 0xc0a8db2  jal         func_2A36C8
    ctx->pc = 0x286BA4u;
    SET_GPR_U32(ctx, 31, 0x286BACu);
    ctx->pc = 0x286BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286BA4u;
            // 0x286ba8: 0xac4736e8  sw          $a3, 0x36E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14056), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A36C8u;
    if (runtime->hasFunction(0x2A36C8u)) {
        auto targetFn = runtime->lookupFunction(0x2A36C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BACu; }
        if (ctx->pc != 0x286BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A36C8_0x2a36c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BACu; }
        if (ctx->pc != 0x286BACu) { return; }
    }
    ctx->pc = 0x286BACu;
label_286bac:
    // 0x286bac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x286bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286bb0: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x286bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x286bb4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x286BB4u;
    {
        const bool branch_taken_0x286bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286BB4u;
            // 0x286bb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bb4) {
            ctx->pc = 0x286C18u;
            goto label_286c18;
        }
    }
    ctx->pc = 0x286BBCu;
    // 0x286bbc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x286bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286bc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x286bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x286bc4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x286BC4u;
    {
        const bool branch_taken_0x286bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286BC4u;
            // 0x286bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bc4) {
            ctx->pc = 0x286C18u;
            goto label_286c18;
        }
    }
    ctx->pc = 0x286BCCu;
    // 0x286bcc: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x286bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x286bd0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x286BD0u;
    SET_GPR_U32(ctx, 31, 0x286BD8u);
    ctx->pc = 0x286BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286BD0u;
            // 0x286bd4: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BD8u; }
        if (ctx->pc != 0x286BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BD8u; }
        if (ctx->pc != 0x286BD8u) { return; }
    }
    ctx->pc = 0x286BD8u;
label_286bd8:
    // 0x286bd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x286bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bdc: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286BDCu;
    {
        const bool branch_taken_0x286bdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x286bdc) {
            ctx->pc = 0x286BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BDCu;
            // 0x286be0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286BECu;
            goto label_286bec;
        }
    }
    ctx->pc = 0x286BE4u;
    // 0x286be4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x286BE4u;
    {
        const bool branch_taken_0x286be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286BE4u;
            // 0x286be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286be4) {
            ctx->pc = 0x286C18u;
            goto label_286c18;
        }
    }
    ctx->pc = 0x286BECu;
label_286bec:
    // 0x286bec: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x286BECu;
    {
        const bool branch_taken_0x286bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x286bec) {
            ctx->pc = 0x286BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BECu;
            // 0x286bf0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C10u;
            goto label_286c10;
        }
    }
    ctx->pc = 0x286BF4u;
    // 0x286bf4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bfc: 0xc049c48  jal         func_127120
    ctx->pc = 0x286BFCu;
    SET_GPR_U32(ctx, 31, 0x286C04u);
    ctx->pc = 0x286C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286BFCu;
            // 0x286c00: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C04u; }
        if (ctx->pc != 0x286C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C04u; }
        if (ctx->pc != 0x286C04u) { return; }
    }
    ctx->pc = 0x286C04u;
label_286c04:
    // 0x286c04: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x286C04u;
    SET_GPR_U32(ctx, 31, 0x286C0Cu);
    ctx->pc = 0x286C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286C04u;
            // 0x286c08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C0Cu; }
        if (ctx->pc != 0x286C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C0Cu; }
        if (ctx->pc != 0x286C0Cu) { return; }
    }
    ctx->pc = 0x286C0Cu;
label_286c0c:
    // 0x286c0c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x286c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_286c10:
    // 0x286c10: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x286c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x286c14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286c18:
    // 0x286c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x286c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286c1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286c20: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x286c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286c28: 0x3e00008  jr          $ra
    ctx->pc = 0x286C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C28u;
            // 0x286c2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286C30u;
    ctx->pc = 0x286c30u;
}
