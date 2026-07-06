#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0B00
// Address: 0x2f0b00 - 0x2f0be0
void sub_002F0B00_0x2f0b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0B00_0x2f0b00");
#endif

    switch (ctx->pc) {
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0bb4u: goto label_2f0bb4;
        default: break;
    }

    ctx->pc = 0x2f0b00u;

    // 0x2f0b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0b04: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f0b04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f0b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f0b0c: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2f0b0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f0b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0b14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0b18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f0b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f0b1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0b20: 0x8da20078  lw          $v0, 0x78($t5)
    ctx->pc = 0x2f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 120)));
    // 0x2f0b24: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F0B24u;
    {
        const bool branch_taken_0x2f0b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B24u;
            // 0x2f0b28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b24) {
            ctx->pc = 0x2F0B68u;
            goto label_2f0b68;
        }
    }
    ctx->pc = 0x2F0B2Cu;
    // 0x2f0b2c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0b34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0b3c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0b48: 0x24841750  addiu       $a0, $a0, 0x1750
    ctx->pc = 0x2f0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5968));
    // 0x2f0b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0b50: 0x25081770  addiu       $t0, $t0, 0x1770
    ctx->pc = 0x2f0b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6000));
    // 0x2f0b54: 0x24050dff  addiu       $a1, $zero, 0xDFF
    ctx->pc = 0x2f0b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3583));
    // 0x2f0b58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0b5c: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f0b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2f0b60: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0B60u;
    ctx->pc = 0x2F0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B60u;
            // 0x2f0b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F0B68u;
label_2f0b68:
    // 0x2f0b68: 0x904e0003  lbu         $t6, 0x3($v0)
    ctx->pc = 0x2f0b68u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f0b6c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f0b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0b70: 0x11ee0013  beq         $t7, $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F0B70u;
    {
        const bool branch_taken_0x2f0b70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B70u;
            // 0x2f0b74: 0x1a0982d  daddu       $s3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b70) {
            ctx->pc = 0x2F0BC0u;
            goto label_2f0bc0;
        }
    }
    ctx->pc = 0x2F0B78u;
    // 0x2f0b78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f0b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0b7c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2f0b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0b80: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x2f0b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_2f0b84:
    // 0x2f0b84: 0x15f10007  bne         $t7, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0B84u;
    {
        const bool branch_taken_0x2f0b84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F0B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B84u;
            // 0x2f0b88: 0x90450001  lbu         $a1, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b84) {
            ctx->pc = 0x2F0BA4u;
            goto label_2f0ba4;
        }
    }
    ctx->pc = 0x2F0B8Cu;
    // 0x2f0b8c: 0x904e0002  lbu         $t6, 0x2($v0)
    ctx->pc = 0x2f0b8cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2f0b90: 0x8e6f00b0  lw          $t7, 0xB0($s3)
    ctx->pc = 0x2f0b90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2f0b94: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0B94u;
    {
        const bool branch_taken_0x2f0b94 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2f0b94) {
            ctx->pc = 0x2F0BA4u;
            goto label_2f0ba4;
        }
    }
    ctx->pc = 0x2F0B9Cu;
    // 0x2f0b9c: 0x24af0001  addiu       $t7, $a1, 0x1
    ctx->pc = 0x2f0b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f0ba0: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x2f0ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
label_2f0ba4:
    // 0x2f0ba4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2f0ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f0ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bac: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0BACu;
    SET_GPR_U32(ctx, 31, 0x2F0BB4u);
    ctx->pc = 0x2F0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BACu;
            // 0x2f0bb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BB4u; }
        if (ctx->pc != 0x2F0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BB4u; }
        if (ctx->pc != 0x2F0BB4u) { return; }
    }
    ctx->pc = 0x2F0BB4u;
label_2f0bb4:
    // 0x2f0bb4: 0x904e0003  lbu         $t6, 0x3($v0)
    ctx->pc = 0x2f0bb4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f0bb8: 0x160efff2  bne         $s0, $t6, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F0BB8u;
    {
        const bool branch_taken_0x2f0bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 14));
        ctx->pc = 0x2F0BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BB8u;
            // 0x2f0bbc: 0x31cf00ff  andi        $t7, $t6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bb8) {
            ctx->pc = 0x2F0B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0b84;
        }
    }
    ctx->pc = 0x2F0BC0u;
label_2f0bc0:
    // 0x2f0bc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f0bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BD8u;
            // 0x2f0bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0BE0u;
    ctx->pc = 0x2f0be0u;
}
