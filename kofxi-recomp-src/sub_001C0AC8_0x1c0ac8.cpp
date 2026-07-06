#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0AC8
// Address: 0x1c0ac8 - 0x1c0cb0
void sub_001C0AC8_0x1c0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AC8_0x1c0ac8");
#endif

    switch (ctx->pc) {
        case 0x1c0b20u: goto label_1c0b20;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b58u: goto label_1c0b58;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b68u: goto label_1c0b68;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0bf4u: goto label_1c0bf4;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c60u: goto label_1c0c60;
        case 0x1c0c68u: goto label_1c0c68;
        default: break;
    }

    ctx->pc = 0x1c0ac8u;

    // 0x1c0ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0adc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0ae0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c0ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c0ae4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c0ae8: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0AE8u;
    {
        const bool branch_taken_0x1c0ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AE8u;
            // 0x1c0aec: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ae8) {
            ctx->pc = 0x1C0B9Cu;
            goto label_1c0b9c;
        }
    }
    ctx->pc = 0x1C0AF0u;
    // 0x1c0af0: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1c0af0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c0af4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1c0af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c0af8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C0AF8u;
    {
        const bool branch_taken_0x1c0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0af8) {
            ctx->pc = 0x1C0AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AF8u;
            // 0x1c0afc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B9Cu;
            goto label_1c0b9c;
        }
    }
    ctx->pc = 0x1C0B00u;
    // 0x1c0b00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0b04: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c0b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0b0c: 0x8c639820  lw          $v1, -0x67E0($v1)
    ctx->pc = 0x1c0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940704)));
    // 0x1c0b10: 0x600008  jr          $v1
    ctx->pc = 0x1C0B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0B18u: goto label_1c0b18;
            case 0x1C0B90u: goto label_1c0b90;
            case 0x1C0B98u: goto label_1c0b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0B18u;
label_1c0b18:
    // 0x1c0b18: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0B18u;
    SET_GPR_U32(ctx, 31, 0x1C0B20u);
    ctx->pc = 0x1C0B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B18u;
            // 0x1c0b1c: 0x24041600  addiu       $a0, $zero, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B20u; }
        if (ctx->pc != 0x1C0B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B20u; }
        if (ctx->pc != 0x1C0B20u) { return; }
    }
    ctx->pc = 0x1C0B20u;
label_1c0b20:
    // 0x1c0b20: 0xc0471ea  jal         func_11C7A8
    ctx->pc = 0x1C0B20u;
    SET_GPR_U32(ctx, 31, 0x1C0B28u);
    ctx->pc = 0x11C7A8u;
    if (runtime->hasFunction(0x11C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B28u; }
        if (ctx->pc != 0x1C0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C7A8_0x11c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B28u; }
        if (ctx->pc != 0x1C0B28u) { return; }
    }
    ctx->pc = 0x1C0B28u;
label_1c0b28:
    // 0x1c0b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b2c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B34u);
    ctx->pc = 0x1C0B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B2Cu;
            // 0x1c0b30: 0x24041601  addiu       $a0, $zero, 0x1601 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B34u; }
        if (ctx->pc != 0x1C0B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B34u; }
        if (ctx->pc != 0x1C0B34u) { return; }
    }
    ctx->pc = 0x1C0B34u;
label_1c0b34:
    // 0x1c0b34: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B34u;
    {
        const bool branch_taken_0x1c0b34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B34u;
            // 0x1c0b38: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b34) {
            ctx->pc = 0x1C0B50u;
            goto label_1c0b50;
        }
    }
    ctx->pc = 0x1C0B3Cu;
    // 0x1c0b3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c0b40: 0x2442c824  addiu       $v0, $v0, -0x37DC
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952996));
    // 0x1c0b44: 0x248497f8  addiu       $a0, $a0, -0x6808
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940664));
    // 0x1c0b48: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C0B48u;
    SET_GPR_U32(ctx, 31, 0x1C0B50u);
    ctx->pc = 0x1C0B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B48u;
            // 0x1c0b4c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B50u; }
        if (ctx->pc != 0x1C0B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B50u; }
        if (ctx->pc != 0x1C0B50u) { return; }
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0B50u;
    SET_GPR_U32(ctx, 31, 0x1C0B58u);
    ctx->pc = 0x1C0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B50u;
            // 0x1c0b54: 0x24041700  addiu       $a0, $zero, 0x1700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B58u; }
        if (ctx->pc != 0x1C0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B58u; }
        if (ctx->pc != 0x1C0B58u) { return; }
    }
    ctx->pc = 0x1C0B58u;
label_1c0b58:
    // 0x1c0b58: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C0B58u;
    SET_GPR_U32(ctx, 31, 0x1C0B60u);
    ctx->pc = 0x1C0B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B58u;
            // 0x1c0b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B60u; }
        if (ctx->pc != 0x1C0B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B60u; }
        if (ctx->pc != 0x1C0B60u) { return; }
    }
    ctx->pc = 0x1C0B60u;
label_1c0b60:
    // 0x1c0b60: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0B60u;
    SET_GPR_U32(ctx, 31, 0x1C0B68u);
    ctx->pc = 0x1C0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B60u;
            // 0x1c0b64: 0x24041701  addiu       $a0, $zero, 0x1701 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B68u; }
        if (ctx->pc != 0x1C0B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B68u; }
        if (ctx->pc != 0x1C0B68u) { return; }
    }
    ctx->pc = 0x1C0B68u;
label_1c0b68:
    // 0x1c0b68: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c0b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0b6c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b74: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c0b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0b80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c0b84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0B84u;
    {
        const bool branch_taken_0x1c0b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B84u;
            // 0x1c0b88: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b84) {
            ctx->pc = 0x1C0B9Cu;
            goto label_1c0b9c;
        }
    }
    ctx->pc = 0x1C0B8Cu;
    // 0x1c0b8c: 0x0  nop
    ctx->pc = 0x1c0b8cu;
    // NOP
label_1c0b90:
    // 0x1c0b90: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c0b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b98:
    // 0x1c0b98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c0b9c:
    // 0x1c0b9c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c0ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ba4: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x1c0ba4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0ba8: 0x56430023  bnel        $s2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0BA8u;
    {
        const bool branch_taken_0x1c0ba8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0ba8) {
            ctx->pc = 0x1C0BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BA8u;
            // 0x1c0bac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C38u;
            goto label_1c0c38;
        }
    }
    ctx->pc = 0x1C0BB0u;
    // 0x1c0bb0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0BB0u;
    SET_GPR_U32(ctx, 31, 0x1C0BB8u);
    ctx->pc = 0x1C0BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BB0u;
            // 0x1c0bb4: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB8u; }
        if (ctx->pc != 0x1C0BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB8u; }
        if (ctx->pc != 0x1C0BB8u) { return; }
    }
    ctx->pc = 0x1C0BB8u;
label_1c0bb8:
    // 0x1c0bb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0bbc: 0x8c43c858  lw          $v1, -0x37A8($v0)
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953048)));
    // 0x1c0bc0: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0BC0u;
    {
        const bool branch_taken_0x1c0bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c0bc0) {
            ctx->pc = 0x1C0BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BC0u;
            // 0x1c0bc4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BD8u;
            goto label_1c0bd8;
        }
    }
    ctx->pc = 0x1C0BC8u;
    // 0x1c0bc8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0bcc: 0x9043c85c  lbu         $v1, -0x37A4($v0)
    ctx->pc = 0x1c0bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953052)));
    // 0x1c0bd0: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x1c0bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c0bd4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0bd8:
    // 0x1c0bd8: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x1c0bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c0bdc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c0be0: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x1C0BE0u;
    SET_GPR_U32(ctx, 31, 0x1C0BE8u);
    ctx->pc = 0x1C0BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BE0u;
            // 0x1c0be4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BE8u; }
        if (ctx->pc != 0x1C0BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BE8u; }
        if (ctx->pc != 0x1C0BE8u) { return; }
    }
    ctx->pc = 0x1C0BE8u;
label_1c0be8:
    // 0x1c0be8: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x1c0bec: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0BECu;
    SET_GPR_U32(ctx, 31, 0x1C0BF4u);
    ctx->pc = 0x1C0BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BECu;
            // 0x1c0bf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BF4u; }
        if (ctx->pc != 0x1C0BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BF4u; }
        if (ctx->pc != 0x1C0BF4u) { return; }
    }
    ctx->pc = 0x1C0BF4u;
label_1c0bf4:
    // 0x1c0bf4: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0BF4u;
    {
        const bool branch_taken_0x1c0bf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C0BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BF4u;
            // 0x1c0bf8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bf4) {
            ctx->pc = 0x1C0C20u;
            goto label_1c0c20;
        }
    }
    ctx->pc = 0x1C0BFCu;
    // 0x1c0bfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c0c00:
    // 0x1c0c00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0c04: 0x2442c828  addiu       $v0, $v0, -0x37D8
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953000));
    // 0x1c0c08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c0c14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c0c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0C18u;
    {
        const bool branch_taken_0x1c0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C18u;
            // 0x1c0c1c: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c18) {
            ctx->pc = 0x1C0C30u;
            goto label_1c0c30;
        }
    }
    ctx->pc = 0x1C0C20u;
label_1c0c20:
    // 0x1c0c20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0c24: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0c28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0c2c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_1c0c30:
    // 0x1c0c30: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c0c34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0c38:
    // 0x1c0c38: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0c3c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0C3Cu;
    {
        const bool branch_taken_0x1c0c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C3Cu;
            // 0x1c0c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c3c) {
            ctx->pc = 0x1C0C9Cu;
            goto label_1c0c9c;
        }
    }
    ctx->pc = 0x1C0C44u;
    // 0x1c0c44: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0C44u;
    SET_GPR_U32(ctx, 31, 0x1C0C4Cu);
    ctx->pc = 0x1C0C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C44u;
            // 0x1c0c48: 0x24041900  addiu       $a0, $zero, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C4Cu; }
        if (ctx->pc != 0x1C0C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C4Cu; }
        if (ctx->pc != 0x1C0C4Cu) { return; }
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C0C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C54u);
    ctx->pc = 0x1C0C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C4Cu;
            // 0x1c0c50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C54u; }
        if (ctx->pc != 0x1C0C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C54u; }
        if (ctx->pc != 0x1C0C54u) { return; }
    }
    ctx->pc = 0x1C0C54u;
label_1c0c54:
    // 0x1c0c54: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x1c0c58: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0C58u;
    SET_GPR_U32(ctx, 31, 0x1C0C60u);
    ctx->pc = 0x1C0C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C58u;
            // 0x1c0c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C60u; }
        if (ctx->pc != 0x1C0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C60u; }
        if (ctx->pc != 0x1C0C60u) { return; }
    }
    ctx->pc = 0x1C0C60u;
label_1c0c60:
    // 0x1c0c60: 0xc07025a  jal         func_1C0968
    ctx->pc = 0x1C0C60u;
    SET_GPR_U32(ctx, 31, 0x1C0C68u);
    ctx->pc = 0x1C0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C60u;
            // 0x1c0c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0968u;
    if (runtime->hasFunction(0x1C0968u)) {
        auto targetFn = runtime->lookupFunction(0x1C0968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C68u; }
        if (ctx->pc != 0x1C0C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0968_0x1c0968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C68u; }
        if (ctx->pc != 0x1C0C68u) { return; }
    }
    ctx->pc = 0x1C0C68u;
label_1c0c68:
    // 0x1c0c68: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0C68u;
    {
        const bool branch_taken_0x1c0c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C68u;
            // 0x1c0c6c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c68) {
            ctx->pc = 0x1C0C98u;
            goto label_1c0c98;
        }
    }
    ctx->pc = 0x1C0C70u;
    // 0x1c0c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c74: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C74u;
    {
        const bool branch_taken_0x1c0c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0c74) {
            ctx->pc = 0x1C0C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C74u;
            // 0x1c0c78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C80u;
            goto label_1c0c80;
        }
    }
    ctx->pc = 0x1C0C7Cu;
    // 0x1c0c7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c0c80:
    // 0x1c0c80: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0c80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0c84: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0c88: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c0c8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0c94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c0c98:
    // 0x1c0c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0c9c:
    // 0x1c0c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CA8u;
            // 0x1c0cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0CB0u;
    ctx->pc = 0x1c0cb0u;
}
