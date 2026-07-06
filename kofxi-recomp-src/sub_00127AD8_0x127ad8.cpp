#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127AD8
// Address: 0x127ad8 - 0x127be0
void sub_00127AD8_0x127ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127AD8_0x127ad8");
#endif

    switch (ctx->pc) {
        case 0x127b24u: goto label_127b24;
        case 0x127b4cu: goto label_127b4c;
        case 0x127b58u: goto label_127b58;
        case 0x127b74u: goto label_127b74;
        case 0x127b88u: goto label_127b88;
        case 0x127bacu: goto label_127bac;
        default: break;
    }

    ctx->pc = 0x127ad8u;

    // 0x127ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127adc: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x127adcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x127ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127ae4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127ae8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127aec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x127aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127af4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x127af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127afc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x127afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x127b00: 0x11c00009  beqz        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x127B00u;
    {
        const bool branch_taken_0x127b00 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B00u;
            // 0x127b04: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b00) {
            ctx->pc = 0x127B28u;
            goto label_127b28;
        }
    }
    ctx->pc = 0x127B08u;
    // 0x127b08: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x127b0c: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x127b10: 0x25efb968  addiu       $t7, $t7, -0x4698
    ctx->pc = 0x127b10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949224));
    // 0x127b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b18: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x127b1c: 0xc049d48  jal         func_127520
    ctx->pc = 0x127B1Cu;
    SET_GPR_U32(ctx, 31, 0x127B24u);
    ctx->pc = 0x127B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B1Cu;
            // 0x127b20: 0x8dc6fffc  lw          $a2, -0x4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (runtime->hasFunction(0x127520u)) {
        auto targetFn = runtime->lookupFunction(0x127520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B24u; }
        if (ctx->pc != 0x127B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127520_0x127520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B24u; }
        if (ctx->pc != 0x127B24u) { return; }
    }
    ctx->pc = 0x127B24u;
label_127b24:
    // 0x127b24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x127b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127b28:
    // 0x127b28: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x127b2c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x127B2Cu;
    {
        const bool branch_taken_0x127b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B2Cu;
            // 0x127b30: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b2c) {
            ctx->pc = 0x127BBCu;
            goto label_127bbc;
        }
    }
    ctx->pc = 0x127B34u;
    // 0x127b34: 0x8e920048  lw          $s2, 0x48($s4)
    ctx->pc = 0x127b34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x127b38: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x127B38u;
    {
        const bool branch_taken_0x127b38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x127B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B38u;
            // 0x127b3c: 0x322f0001  andi        $t7, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b38) {
            ctx->pc = 0x127B5Cu;
            goto label_127b5c;
        }
    }
    ctx->pc = 0x127B40u;
    // 0x127b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b44: 0xc049e26  jal         func_127898
    ctx->pc = 0x127B44u;
    SET_GPR_U32(ctx, 31, 0x127B4Cu);
    ctx->pc = 0x127B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B44u;
            // 0x127b48: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127898u;
    if (runtime->hasFunction(0x127898u)) {
        auto targetFn = runtime->lookupFunction(0x127898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B4Cu; }
        if (ctx->pc != 0x127B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127898_0x127898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B4Cu; }
        if (ctx->pc != 0x127B4Cu) { return; }
    }
    ctx->pc = 0x127B4Cu;
label_127b4c:
    // 0x127b4c: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x127b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x127b50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_127b58:
    // 0x127b58: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x127b58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_127b5c:
    // 0x127b5c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x127B5Cu;
    {
        const bool branch_taken_0x127b5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B5Cu;
            // 0x127b60: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b5c) {
            ctx->pc = 0x127B88u;
            goto label_127b88;
        }
    }
    ctx->pc = 0x127B64u;
    // 0x127b64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x127b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b6c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x127B6Cu;
    SET_GPR_U32(ctx, 31, 0x127B74u);
    ctx->pc = 0x127B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B6Cu;
            // 0x127b70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (runtime->hasFunction(0x1278D0u)) {
        auto targetFn = runtime->lookupFunction(0x1278D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B74u; }
        if (ctx->pc != 0x127B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001278D0_0x1278d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B74u; }
        if (ctx->pc != 0x127B74u) { return; }
    }
    ctx->pc = 0x127B74u;
label_127b74:
    // 0x127b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x127b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b80: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x127B80u;
    SET_GPR_U32(ctx, 31, 0x127B88u);
    ctx->pc = 0x127B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B80u;
            // 0x127b84: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (runtime->hasFunction(0x1274F0u)) {
        auto targetFn = runtime->lookupFunction(0x1274F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B88u; }
        if (ctx->pc != 0x127B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001274F0_0x1274f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B88u; }
        if (ctx->pc != 0x127B88u) { return; }
    }
    ctx->pc = 0x127B88u;
label_127b88:
    // 0x127b88: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x127B88u;
    {
        const bool branch_taken_0x127b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B88u;
            // 0x127b8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b88) {
            ctx->pc = 0x127BBCu;
            goto label_127bbc;
        }
    }
    ctx->pc = 0x127B90u;
    // 0x127b90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127b94: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x127B94u;
    {
        const bool branch_taken_0x127b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b94) {
            ctx->pc = 0x127B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127B94u;
            // 0x127b98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127b58;
        }
    }
    ctx->pc = 0x127B9Cu;
    // 0x127b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x127ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x127BA4u;
    SET_GPR_U32(ctx, 31, 0x127BACu);
    ctx->pc = 0x127BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127BA4u;
            // 0x127ba8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (runtime->hasFunction(0x1278D0u)) {
        auto targetFn = runtime->lookupFunction(0x1278D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127BACu; }
        if (ctx->pc != 0x127BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001278D0_0x1278d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127BACu; }
        if (ctx->pc != 0x127BACu) { return; }
    }
    ctx->pc = 0x127BACu;
label_127bac:
    // 0x127bac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x127bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x127bb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127bb4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x127BB4u;
    {
        const bool branch_taken_0x127bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127BB4u;
            // 0x127bb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bb4) {
            ctx->pc = 0x127B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127b58;
        }
    }
    ctx->pc = 0x127BBCu;
label_127bbc:
    // 0x127bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127bc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127bc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127bcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127bd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x127bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x127BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127BD4u;
            // 0x127bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127BDCu;
    // 0x127bdc: 0x0  nop
    ctx->pc = 0x127bdcu;
    // NOP
    ctx->pc = 0x127be0u;
}
