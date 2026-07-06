#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0B30
// Address: 0x1b0b30 - 0x1b0c58
void sub_001B0B30_0x1b0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0B30_0x1b0b30");
#endif

    switch (ctx->pc) {
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bc0u: goto label_1b0bc0;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0bd0u: goto label_1b0bd0;
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0c04u: goto label_1b0c04;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c44u: goto label_1b0c44;
        default: break;
    }

    ctx->pc = 0x1b0b30u;

    // 0x1b0b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0b48: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b0b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0b50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0b54: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0B54u;
    SET_GPR_U32(ctx, 31, 0x1B0B5Cu);
    ctx->pc = 0x1B0B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B54u;
            // 0x1b0b58: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B5Cu; }
        if (ctx->pc != 0x1B0B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B5Cu; }
        if (ctx->pc != 0x1B0B5Cu) { return; }
    }
    ctx->pc = 0x1B0B5Cu;
label_1b0b5c:
    // 0x1b0b5c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0b60: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0B60u;
    {
        const bool branch_taken_0x1b0b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B60u;
            // 0x1b0b64: 0x24847848  addiu       $a0, $a0, 0x7848 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b60) {
            ctx->pc = 0x1B0B78u;
            goto label_1b0b78;
        }
    }
    ctx->pc = 0x1B0B68u;
    // 0x1b0b68: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0B68u;
    SET_GPR_U32(ctx, 31, 0x1B0B70u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B70u; }
        if (ctx->pc != 0x1B0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B70u; }
        if (ctx->pc != 0x1B0B70u) { return; }
    }
    ctx->pc = 0x1B0B70u;
label_1b0b70:
    // 0x1b0b70: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B0B70u;
    {
        const bool branch_taken_0x1b0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B70u;
            // 0x1b0b74: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b70) {
            ctx->pc = 0x1B0C08u;
            goto label_1b0c08;
        }
    }
    ctx->pc = 0x1B0B78u;
label_1b0b78:
    // 0x1b0b78: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1b0b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0b7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0b80: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B0B80u;
    {
        const bool branch_taken_0x1b0b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B0B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B80u;
            // 0x1b0b84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b80) {
            ctx->pc = 0x1B0C04u;
            goto label_1b0c04;
        }
    }
    ctx->pc = 0x1B0B88u;
    // 0x1b0b88: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0B88u;
    {
        const bool branch_taken_0x1b0b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0b88) {
            ctx->pc = 0x1B0B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B88u;
            // 0x1b0b8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0B98u;
            goto label_1b0b98;
        }
    }
    ctx->pc = 0x1B0B90u;
    // 0x1b0b90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B0B90u;
    {
        const bool branch_taken_0x1b0b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B90u;
            // 0x1b0b94: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b90) {
            ctx->pc = 0x1B0C04u;
            goto label_1b0c04;
        }
    }
    ctx->pc = 0x1B0B98u;
label_1b0b98:
    // 0x1b0b98: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0B98u;
    {
        const bool branch_taken_0x1b0b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b98) {
            ctx->pc = 0x1B0BB8u;
            goto label_1b0bb8;
        }
    }
    ctx->pc = 0x1B0BA0u;
    // 0x1b0ba0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0ba4: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0BA4u;
    SET_GPR_U32(ctx, 31, 0x1B0BACu);
    ctx->pc = 0x1B0BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BA4u;
            // 0x1b0ba8: 0x24847870  addiu       $a0, $a0, 0x7870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BACu; }
        if (ctx->pc != 0x1B0BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BACu; }
        if (ctx->pc != 0x1B0BACu) { return; }
    }
    ctx->pc = 0x1B0BACu;
label_1b0bac:
    // 0x1b0bac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B0BACu;
    {
        const bool branch_taken_0x1b0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BACu;
            // 0x1b0bb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bac) {
            ctx->pc = 0x1B0C08u;
            goto label_1b0c08;
        }
    }
    ctx->pc = 0x1B0BB4u;
    // 0x1b0bb4: 0x0  nop
    ctx->pc = 0x1b0bb4u;
    // NOP
label_1b0bb8:
    // 0x1b0bb8: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1B0BB8u;
    SET_GPR_U32(ctx, 31, 0x1B0BC0u);
    ctx->pc = 0x1B6F30u;
    if (runtime->hasFunction(0x1B6F30u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BC0u; }
        if (ctx->pc != 0x1B0BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F30_0x1b6f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BC0u; }
        if (ctx->pc != 0x1B0BC0u) { return; }
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B0BC0u;
    SET_GPR_U32(ctx, 31, 0x1B0BC8u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BC8u; }
        if (ctx->pc != 0x1B0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BC8u; }
        if (ctx->pc != 0x1B0BC8u) { return; }
    }
    ctx->pc = 0x1B0BC8u;
label_1b0bc8:
    // 0x1b0bc8: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1B0BC8u;
    SET_GPR_U32(ctx, 31, 0x1B0BD0u);
    ctx->pc = 0x1B0BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BC8u;
            // 0x1b0bcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (runtime->hasFunction(0x1B6D08u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BD0u; }
        if (ctx->pc != 0x1B0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D08_0x1b6d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BD0u; }
        if (ctx->pc != 0x1B0BD0u) { return; }
    }
    ctx->pc = 0x1B0BD0u;
label_1b0bd0:
    // 0x1b0bd0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0bdc: 0xc06c10c  jal         func_1B0430
    ctx->pc = 0x1B0BDCu;
    SET_GPR_U32(ctx, 31, 0x1B0BE4u);
    ctx->pc = 0x1B0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BDCu;
            // 0x1b0be0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0430u;
    if (runtime->hasFunction(0x1B0430u)) {
        auto targetFn = runtime->lookupFunction(0x1B0430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BE4u; }
        if (ctx->pc != 0x1B0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0430_0x1b0430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BE4u; }
        if (ctx->pc != 0x1B0BE4u) { return; }
    }
    ctx->pc = 0x1B0BE4u;
label_1b0be4:
    // 0x1b0be4: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B0BE4u;
    SET_GPR_U32(ctx, 31, 0x1B0BECu);
    ctx->pc = 0x1B0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BE4u;
            // 0x1b0be8: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BECu; }
        if (ctx->pc != 0x1B0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BECu; }
        if (ctx->pc != 0x1B0BECu) { return; }
    }
    ctx->pc = 0x1B0BECu;
label_1b0bec:
    // 0x1b0bec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b0becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b0bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0bf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bf8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0bfc: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0BFCu;
    SET_GPR_U32(ctx, 31, 0x1B0C04u);
    ctx->pc = 0x1B0C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BFCu;
            // 0x1b0c00: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C04u; }
        if (ctx->pc != 0x1B0C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C04u; }
        if (ctx->pc != 0x1B0C04u) { return; }
    }
    ctx->pc = 0x1B0C04u;
label_1b0c04:
    // 0x1b0c04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0c08:
    // 0x1b0c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C14u;
            // 0x1b0c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C1Cu;
    // 0x1b0c1c: 0x0  nop
    ctx->pc = 0x1b0c1cu;
    // NOP
label_1b0c20:
    // 0x1b0c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0c28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0c2c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C34u);
    ctx->pc = 0x1B0C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C2Cu;
            // 0x1b0c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C34u; }
        if (ctx->pc != 0x1B0C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C34u; }
        if (ctx->pc != 0x1B0C34u) { return; }
    }
    ctx->pc = 0x1B0C34u;
label_1b0c34:
    // 0x1b0c34: 0xc06c316  jal         func_1B0C58
    ctx->pc = 0x1B0C34u;
    SET_GPR_U32(ctx, 31, 0x1B0C3Cu);
    ctx->pc = 0x1B0C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C34u;
            // 0x1b0c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C58u;
    if (runtime->hasFunction(0x1B0C58u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C3Cu; }
        if (ctx->pc != 0x1B0C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C58_0x1b0c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C3Cu; }
        if (ctx->pc != 0x1B0C3Cu) { return; }
    }
    ctx->pc = 0x1B0C3Cu;
label_1b0c3c:
    // 0x1b0c3c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C44u);
    ctx->pc = 0x1B0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C3Cu;
            // 0x1b0c40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C44u; }
        if (ctx->pc != 0x1B0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C44u; }
        if (ctx->pc != 0x1B0C44u) { return; }
    }
    ctx->pc = 0x1B0C44u;
label_1b0c44:
    // 0x1b0c44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C50u;
            // 0x1b0c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C58u;
    ctx->pc = 0x1b0c58u;
}
