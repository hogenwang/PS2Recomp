#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D6A98
// Address: 0x2d6a98 - 0x2d7118
void sub_002D6A98_0x2d6a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6A98_0x2d6a98");
#endif

    switch (ctx->pc) {
        case 0x2d6ae8u: goto label_2d6ae8;
        case 0x2d6afcu: goto label_2d6afc;
        case 0x2d6b04u: goto label_2d6b04;
        case 0x2d6b1cu: goto label_2d6b1c;
        case 0x2d6b40u: goto label_2d6b40;
        case 0x2d6b84u: goto label_2d6b84;
        case 0x2d6be0u: goto label_2d6be0;
        case 0x2d6c38u: goto label_2d6c38;
        case 0x2d6cb0u: goto label_2d6cb0;
        case 0x2d6cb8u: goto label_2d6cb8;
        case 0x2d6ce0u: goto label_2d6ce0;
        case 0x2d6d04u: goto label_2d6d04;
        case 0x2d6d18u: goto label_2d6d18;
        case 0x2d6d30u: goto label_2d6d30;
        case 0x2d6d44u: goto label_2d6d44;
        case 0x2d6d4cu: goto label_2d6d4c;
        case 0x2d6d68u: goto label_2d6d68;
        case 0x2d6d90u: goto label_2d6d90;
        case 0x2d6dbcu: goto label_2d6dbc;
        case 0x2d6de4u: goto label_2d6de4;
        case 0x2d6e74u: goto label_2d6e74;
        case 0x2d6ef0u: goto label_2d6ef0;
        case 0x2d6ef8u: goto label_2d6ef8;
        case 0x2d6f10u: goto label_2d6f10;
        case 0x2d6f3cu: goto label_2d6f3c;
        case 0x2d6f54u: goto label_2d6f54;
        case 0x2d6f6cu: goto label_2d6f6c;
        case 0x2d6f90u: goto label_2d6f90;
        case 0x2d6fbcu: goto label_2d6fbc;
        case 0x2d6fc4u: goto label_2d6fc4;
        case 0x2d6fd8u: goto label_2d6fd8;
        case 0x2d6ff0u: goto label_2d6ff0;
        case 0x2d7020u: goto label_2d7020;
        case 0x2d7038u: goto label_2d7038;
        case 0x2d7048u: goto label_2d7048;
        case 0x2d7050u: goto label_2d7050;
        case 0x2d7068u: goto label_2d7068;
        case 0x2d708cu: goto label_2d708c;
        case 0x2d70b4u: goto label_2d70b4;
        case 0x2d70bcu: goto label_2d70bc;
        case 0x2d70e4u: goto label_2d70e4;
        case 0x2d7100u: goto label_2d7100;
        default: break;
    }

    ctx->pc = 0x2d6a98u;

    // 0x2d6a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d6a9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6aa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d6aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6aa4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d6aa8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d6aac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d6aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d6ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d6ab4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d6ab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d6ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d6abc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d6abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d6ac0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d6ac4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d6ac8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6acc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d6accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d6ad0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d6ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6ad8: 0x24560002  addiu       $s6, $v0, 0x2
    ctx->pc = 0x2d6ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2d6adc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2D6ADCu;
    {
        const bool branch_taken_0x2d6adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6ADCu;
            // 0x2d6ae0: 0x169880  sll         $s3, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6adc) {
            ctx->pc = 0x2D6CF8u;
            goto label_2d6cf8;
        }
    }
    ctx->pc = 0x2D6AE4u;
    // 0x2d6ae4: 0x0  nop
    ctx->pc = 0x2d6ae4u;
    // NOP
label_2d6ae8:
    // 0x2d6ae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6aec: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2d6aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6af0: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x2d6af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x2d6af4: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D6AF4u;
    SET_GPR_U32(ctx, 31, 0x2D6AFCu);
    ctx->pc = 0x2D6AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6AF4u;
            // 0x2d6af8: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AFCu; }
        if (ctx->pc != 0x2D6AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AFCu; }
        if (ctx->pc != 0x2D6AFCu) { return; }
    }
    ctx->pc = 0x2D6AFCu;
label_2d6afc:
    // 0x2d6afc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b00: 0x1640008e  bnez        $s2, . + 4 + (0x8E << 2)
label_2d6b04:
    if (ctx->pc == 0x2D6B04u) {
        ctx->pc = 0x2D6B04u;
            // 0x2d6b04: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D6B08u;
        goto label_fallthrough_0x2d6b00;
    }
    ctx->pc = 0x2D6B00u;
    {
        const bool branch_taken_0x2d6b00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B00u;
            // 0x2d6b04: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b00) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
label_fallthrough_0x2d6b00:
    ctx->pc = 0x2D6B08u;
    // 0x2d6b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b0c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2d6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6b10: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d6b14: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D6B14u;
    SET_GPR_U32(ctx, 31, 0x2D6B1Cu);
    ctx->pc = 0x2D6B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B14u;
            // 0x2d6b18: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B1Cu; }
        if (ctx->pc != 0x2D6B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B1Cu; }
        if (ctx->pc != 0x2D6B1Cu) { return; }
    }
    ctx->pc = 0x2D6B1Cu;
label_2d6b1c:
    // 0x2d6b1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b20: 0x16400086  bnez        $s2, . + 4 + (0x86 << 2)
    ctx->pc = 0x2D6B20u;
    {
        const bool branch_taken_0x2d6b20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B20u;
            // 0x2d6b24: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b20) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6B28u;
    // 0x2d6b28: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2d6b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b30: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d6b34: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x2d6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x2d6b38: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D6B38u;
    SET_GPR_U32(ctx, 31, 0x2D6B40u);
    ctx->pc = 0x2D6B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B38u;
            // 0x2d6b3c: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B40u; }
        if (ctx->pc != 0x2D6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B40u; }
        if (ctx->pc != 0x2D6B40u) { return; }
    }
    ctx->pc = 0x2D6B40u;
label_2d6b40:
    // 0x2d6b40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b44: 0x1640007d  bnez        $s2, . + 4 + (0x7D << 2)
    ctx->pc = 0x2D6B44u;
    {
        const bool branch_taken_0x2d6b44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B44u;
            // 0x2d6b48: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b44) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6B4Cu;
    // 0x2d6b4c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2d6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d6b50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d6b54: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6b58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d6b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d6b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b60: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d6b64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b68: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2d6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2d6b6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b70: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d6b74: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2d6b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2d6b78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b7c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d6b80: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2d6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_2d6b84:
    // 0x2d6b84: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2d6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d6b88: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d6b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d6b8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b90: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2d6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d6b94: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x2d6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x2d6b98: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6b9c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2d6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d6ba0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d6ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6ba8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6bac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d6bb0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6bb4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6bb8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d6bbc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2d6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d6bc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d6bc4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d6bc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d6bcc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6bd0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6bd4: 0x10520031  beq         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D6BD4u;
    {
        const bool branch_taken_0x2d6bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D6BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6BD4u;
            // 0x2d6bd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bd4) {
            ctx->pc = 0x2D6C9Cu;
            goto label_2d6c9c;
        }
    }
    ctx->pc = 0x2D6BDCu;
    // 0x2d6bdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2d6be0:
    // 0x2d6be0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d6be4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d6be8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d6be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d6bec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6bf0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d6bf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6bf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d6bfc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6c00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d6c08: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d6c0c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d6c10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d6c14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d6c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d6c18: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d6c1c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2d6c20: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d6c24: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2d6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2d6c28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d6c2c: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x2d6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2d6c30: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2d6c34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2d6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d6c38:
    // 0x2d6c38: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d6c3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d6c40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c44: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2d6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d6c48: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d6c4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d6c50: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6c54: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2d6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d6c58: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2d6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2d6c5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d6c60: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d6c64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d6c68: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d6c6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6c70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d6c78: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2d6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d6c7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6c80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d6c84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d6c88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d6c8c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6c90: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2d6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6c94: 0x1502ffd2  bne         $t0, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2D6C94u;
    {
        const bool branch_taken_0x2d6c94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C94u;
            // 0x2d6c98: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c94) {
            ctx->pc = 0x2D6BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6be0;
        }
    }
    ctx->pc = 0x2D6C9Cu;
label_2d6c9c:
    // 0x2d6c9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6ca0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d6ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ca4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2d6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2d6ca8: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x2d6ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d6cac: 0x0  nop
    ctx->pc = 0x2d6cacu;
    // NOP
label_2d6cb0:
    // 0x2d6cb0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D6CB0u;
    {
        const bool branch_taken_0x2d6cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CB0u;
            // 0x2d6cb4: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cb0) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6CB8u;
label_2d6cb8:
    // 0x2d6cb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d6cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d6cbc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6cc0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d6cc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6cc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d6cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ccc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6cd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6cd4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d6cd8: 0xc0b58fc  jal         func_2D63F0
    ctx->pc = 0x2D6CD8u;
    SET_GPR_U32(ctx, 31, 0x2D6CE0u);
    ctx->pc = 0x2D6CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CD8u;
            // 0x2d6cdc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D63F0u;
    if (runtime->hasFunction(0x2D63F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CE0u; }
        if (ctx->pc != 0x2D6CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D63F0_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CE0u; }
        if (ctx->pc != 0x2D6CE0u) { return; }
    }
    ctx->pc = 0x2D6CE0u;
label_2d6ce0:
    // 0x2d6ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ce4: 0x1240fff2  beqz        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D6CE4u;
    {
        const bool branch_taken_0x2d6ce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CE4u;
            // 0x2d6ce8: 0x276102a  slt         $v0, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ce4) {
            ctx->pc = 0x2D6CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6cb0;
        }
    }
    ctx->pc = 0x2D6CECu;
    // 0x2d6cec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6CECu;
    {
        const bool branch_taken_0x2d6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6cec) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6CF4u;
    // 0x2d6cf4: 0x0  nop
    ctx->pc = 0x2d6cf4u;
    // NOP
label_2d6cf8:
    // 0x2d6cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d6cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cfc: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D6CFCu;
    SET_GPR_U32(ctx, 31, 0x2D6D04u);
    ctx->pc = 0x2D6D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CFCu;
            // 0x2d6d00: 0x24120206  addiu       $s2, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D04u; }
        if (ctx->pc != 0x2D6D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D04u; }
        if (ctx->pc != 0x2D6D04u) { return; }
    }
    ctx->pc = 0x2D6D04u;
label_2d6d04:
    // 0x2d6d04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d08: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6D08u;
    {
        const bool branch_taken_0x2d6d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d08) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6D10u;
    // 0x2d6d10: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D6D10u;
    SET_GPR_U32(ctx, 31, 0x2D6D18u);
    ctx->pc = 0x2D6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D10u;
            // 0x2d6d14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D18u; }
        if (ctx->pc != 0x2D6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D18u; }
        if (ctx->pc != 0x2D6D18u) { return; }
    }
    ctx->pc = 0x2D6D18u;
label_2d6d18:
    // 0x2d6d18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d6d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d1c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D6D1Cu;
    {
        const bool branch_taken_0x2d6d1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D1Cu;
            // 0x2d6d20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d1c) {
            ctx->pc = 0x2D6D3Cu;
            goto label_2d6d3c;
        }
    }
    ctx->pc = 0x2D6D24u;
    // 0x2d6d24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d28: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D6D28u;
    SET_GPR_U32(ctx, 31, 0x2D6D30u);
    ctx->pc = 0x2D6D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D28u;
            // 0x2d6d2c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D30u; }
        if (ctx->pc != 0x2D6D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D30u; }
        if (ctx->pc != 0x2D6D30u) { return; }
    }
    ctx->pc = 0x2D6D30u;
label_2d6d30:
    // 0x2d6d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d34: 0x1240ff6c  beqz        $s2, . + 4 + (-0x94 << 2)
    ctx->pc = 0x2D6D34u;
    {
        const bool branch_taken_0x2d6d34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D34u;
            // 0x2d6d38: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d34) {
            ctx->pc = 0x2D6AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6ae8;
        }
    }
    ctx->pc = 0x2D6D3Cu;
label_2d6d3c:
    // 0x2d6d3c: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D6D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D44u);
    ctx->pc = 0x2D6D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D3Cu;
            // 0x2d6d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D44u; }
        if (ctx->pc != 0x2D6D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D44u; }
        if (ctx->pc != 0x2D6D44u) { return; }
    }
    ctx->pc = 0x2D6D44u;
label_2d6d44:
    // 0x2d6d44: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D6D44u;
    SET_GPR_U32(ctx, 31, 0x2D6D4Cu);
    ctx->pc = 0x2D6D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D44u;
            // 0x2d6d48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D4Cu; }
        if (ctx->pc != 0x2D6D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D4Cu; }
        if (ctx->pc != 0x2D6D4Cu) { return; }
    }
    ctx->pc = 0x2D6D4Cu;
label_2d6d4c:
    // 0x2d6d4c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6D4Cu;
    {
        const bool branch_taken_0x2d6d4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D4Cu;
            // 0x2d6d50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d4c) {
            ctx->pc = 0x2D6D68u;
            goto label_2d6d68;
        }
    }
    ctx->pc = 0x2D6D54u;
    // 0x2d6d54: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6d58: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6d5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d60: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2D6D60u;
    SET_GPR_U32(ctx, 31, 0x2D6D68u);
    ctx->pc = 0x2D6D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D60u;
            // 0x2d6d64: 0x24a59680  addiu       $a1, $a1, -0x6980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (runtime->hasFunction(0x2CF420u)) {
        auto targetFn = runtime->lookupFunction(0x2CF420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D68u; }
        if (ctx->pc != 0x2D6D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF420_0x2cf420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D68u; }
        if (ctx->pc != 0x2D6D68u) { return; }
    }
    ctx->pc = 0x2D6D68u;
label_2d6d68:
    // 0x2d6d68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6d6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6d70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d6d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6d74: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d6d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d6d78: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d6d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6d7c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d6d7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d80: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d6d80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d84: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d6d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d6d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D88u;
            // 0x2d6d8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6D90u;
label_2d6d90:
    // 0x2d6d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6d94: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6d98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6d9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d6d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6da0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d6da4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dac: 0x24c69680  addiu       $a2, $a2, -0x6980
    ctx->pc = 0x2d6dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940288));
    // 0x2d6db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6db4: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D6DB4u;
    SET_GPR_U32(ctx, 31, 0x2D6DBCu);
    ctx->pc = 0x2D6DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DB4u;
            // 0x2d6db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (runtime->hasFunction(0x2CF568u)) {
        auto targetFn = runtime->lookupFunction(0x2CF568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DBCu; }
        if (ctx->pc != 0x2D6DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF568_0x2cf568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DBCu; }
        if (ctx->pc != 0x2D6DBCu) { return; }
    }
    ctx->pc = 0x2D6DBCu;
label_2d6dbc:
    // 0x2d6dbc: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D6DBCu;
    {
        const bool branch_taken_0x2d6dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DBCu;
            // 0x2d6dc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6dbc) {
            ctx->pc = 0x2D6ED8u;
            goto label_2d6ed8;
        }
    }
    ctx->pc = 0x2D6DC4u;
    // 0x2d6dc4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6dc8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d6dcc: 0x14650042  bne         $v1, $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D6DCCu;
    {
        const bool branch_taken_0x2d6dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D6DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DCCu;
            // 0x2d6dd0: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6dcc) {
            ctx->pc = 0x2D6ED8u;
            goto label_2d6ed8;
        }
    }
    ctx->pc = 0x2D6DD4u;
    // 0x2d6dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ddc: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D6DDCu;
    SET_GPR_U32(ctx, 31, 0x2D6DE4u);
    ctx->pc = 0x2D6DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DDCu;
            // 0x2d6de0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DE4u; }
        if (ctx->pc != 0x2D6DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DE4u; }
        if (ctx->pc != 0x2D6DE4u) { return; }
    }
    ctx->pc = 0x2D6DE4u;
label_2d6de4:
    // 0x2d6de4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D6DE4u;
    {
        const bool branch_taken_0x2d6de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DE4u;
            // 0x2d6de8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6de4) {
            ctx->pc = 0x2D6EDCu;
            goto label_2d6edc;
        }
    }
    ctx->pc = 0x2D6DECu;
    // 0x2d6dec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6df0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d6df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d6df4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6df8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d6dfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6e04: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2d6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2d6e08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e0c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d6e10: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2d6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2d6e14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d6e1c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2d6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2d6e20: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d6e28: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2d6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2d6e2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e30: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d6e34: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2d6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2d6e38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e3c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d6e40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6e44: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x2d6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x2d6e48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e4c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2d6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d6e50: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6e54: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x2d6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x2d6e58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e5c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2d6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d6e60: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d6e64: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x2d6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
    // 0x2d6e68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e6c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2d6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d6e70: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d6e74:
    // 0x2d6e74: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x2d6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x2d6e78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e7c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6e80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6e84: 0xacc50028  sw          $a1, 0x28($a2)
    ctx->pc = 0x2d6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 5));
    // 0x2d6e88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e8c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6e90: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2d6e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6e94: 0xacc5002c  sw          $a1, 0x2C($a2)
    ctx->pc = 0x2d6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
    // 0x2d6e98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e9c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2d6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6ea0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d6ea4: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x2d6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x2d6ea8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6eac: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2d6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6eb0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d6eb4: 0xacc50034  sw          $a1, 0x34($a2)
    ctx->pc = 0x2d6eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 5));
    // 0x2d6eb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6ebc: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x2d6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2d6ec0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6ec4: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x2d6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x2d6ec8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6ecc: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x2d6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2d6ed0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2d6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6ed4: 0xacc5003c  sw          $a1, 0x3C($a2)
    ctx->pc = 0x2d6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 5));
label_2d6ed8:
    // 0x2d6ed8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6edc:
    // 0x2d6edc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d6edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6ee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6EE4u;
            // 0x2d6ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6EECu;
    // 0x2d6eec: 0x0  nop
    ctx->pc = 0x2d6eecu;
    // NOP
label_2d6ef0:
    // 0x2d6ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6EF0u;
            // 0x2d6ef4: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6EF8u;
label_2d6ef8:
    // 0x2d6ef8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d6efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6f00: 0x24639688  addiu       $v1, $v1, -0x6978
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940296));
    // 0x2d6f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F04u;
            // 0x2d6f08: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6F0Cu;
    // 0x2d6f0c: 0x0  nop
    ctx->pc = 0x2d6f0cu;
    // NOP
label_2d6f10:
    // 0x2d6f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6f14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d6f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f18: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d6f1c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2d6f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6f20: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2d6f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2d6f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d6f2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d6f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d6f30: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d6f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d6f34: 0xc0b5e76  jal         func_2D79D8
    ctx->pc = 0x2D6F34u;
    SET_GPR_U32(ctx, 31, 0x2D6F3Cu);
    ctx->pc = 0x2D6F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F34u;
            // 0x2d6f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D79D8u;
    if (runtime->hasFunction(0x2D79D8u)) {
        auto targetFn = runtime->lookupFunction(0x2D79D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F3Cu; }
        if (ctx->pc != 0x2D6F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D79D8_0x2d79d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F3Cu; }
        if (ctx->pc != 0x2D6F3Cu) { return; }
    }
    ctx->pc = 0x2D6F3Cu;
label_2d6f3c:
    // 0x2d6f3c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d6f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6f40: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x2d6f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x2d6f44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D6F44u;
    {
        const bool branch_taken_0x2d6f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F44u;
            // 0x2d6f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f44) {
            ctx->pc = 0x2D6FD8u;
            goto label_2d6fd8;
        }
    }
    ctx->pc = 0x2D6F4Cu;
    // 0x2d6f4c: 0xc0b5f18  jal         func_2D7C60
    ctx->pc = 0x2D6F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F54u);
    ctx->pc = 0x2D7C60u;
    if (runtime->hasFunction(0x2D7C60u)) {
        auto targetFn = runtime->lookupFunction(0x2D7C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F54u; }
        if (ctx->pc != 0x2D6F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7C60_0x2d7c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F54u; }
        if (ctx->pc != 0x2D6F54u) { return; }
    }
    ctx->pc = 0x2D6F54u;
label_2d6f54:
    // 0x2d6f54: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6F54u;
    {
        const bool branch_taken_0x2d6f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6f54) {
            ctx->pc = 0x2D6F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F54u;
            // 0x2d6f58: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6F80u;
            goto label_2d6f80;
        }
    }
    ctx->pc = 0x2D6F5Cu;
    // 0x2d6f5c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d6f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f64: 0xc0b5f18  jal         func_2D7C60
    ctx->pc = 0x2D6F64u;
    SET_GPR_U32(ctx, 31, 0x2D6F6Cu);
    ctx->pc = 0x2D6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F64u;
            // 0x2d6f68: 0x24a596f8  addiu       $a1, $a1, -0x6908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C60u;
    if (runtime->hasFunction(0x2D7C60u)) {
        auto targetFn = runtime->lookupFunction(0x2D7C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F6Cu; }
        if (ctx->pc != 0x2D6F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7C60_0x2d7c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F6Cu; }
        if (ctx->pc != 0x2D6F6Cu) { return; }
    }
    ctx->pc = 0x2D6F6Cu;
label_2d6f6c:
    // 0x2d6f6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6F6Cu;
    {
        const bool branch_taken_0x2d6f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F6Cu;
            // 0x2d6f70: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f6c) {
            ctx->pc = 0x2D6F80u;
            goto label_2d6f80;
        }
    }
    ctx->pc = 0x2D6F74u;
    // 0x2d6f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D6F74u;
    {
        const bool branch_taken_0x2d6f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F74u;
            // 0x2d6f78: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f74) {
            ctx->pc = 0x2D6FD8u;
            goto label_2d6fd8;
        }
    }
    ctx->pc = 0x2D6F7Cu;
    // 0x2d6f7c: 0x0  nop
    ctx->pc = 0x2d6f7cu;
    // NOP
label_2d6f80:
    // 0x2d6f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f84: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2d6f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d6f88: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D6F88u;
    SET_GPR_U32(ctx, 31, 0x2D6F90u);
    ctx->pc = 0x2D6F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F88u;
            // 0x2d6f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F90u; }
        if (ctx->pc != 0x2D6F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F90u; }
        if (ctx->pc != 0x2D6F90u) { return; }
    }
    ctx->pc = 0x2D6F90u;
label_2d6f90:
    // 0x2d6f90: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d6f94: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2d6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6f98: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2d6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d6f9c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d6fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fa4: 0x24849690  addiu       $a0, $a0, -0x6970
    ctx->pc = 0x2d6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
    // 0x2d6fa8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d6fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fb0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2d6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2d6fb4: 0xc0b34de  jal         func_2CD378
    ctx->pc = 0x2D6FB4u;
    SET_GPR_U32(ctx, 31, 0x2D6FBCu);
    ctx->pc = 0x2D6FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FB4u;
            // 0x2d6fb8: 0xafbd0044  sw          $sp, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD378u;
    if (runtime->hasFunction(0x2CD378u)) {
        auto targetFn = runtime->lookupFunction(0x2CD378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FBCu; }
        if (ctx->pc != 0x2D6FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD378_0x2cd378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FBCu; }
        if (ctx->pc != 0x2D6FBCu) { return; }
    }
    ctx->pc = 0x2D6FBCu;
label_2d6fbc:
    // 0x2d6fbc: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D6FBCu;
    SET_GPR_U32(ctx, 31, 0x2D6FC4u);
    ctx->pc = 0x2D6FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FBCu;
            // 0x2d6fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FC4u; }
        if (ctx->pc != 0x2D6FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FC4u; }
        if (ctx->pc != 0x2D6FC4u) { return; }
    }
    ctx->pc = 0x2D6FC4u;
label_2d6fc4:
    // 0x2d6fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6FC8u;
    {
        const bool branch_taken_0x2d6fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FC8u;
            // 0x2d6fcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fc8) {
            ctx->pc = 0x2D6FD8u;
            goto label_2d6fd8;
        }
    }
    ctx->pc = 0x2D6FD0u;
    // 0x2d6fd0: 0xc0b5c46  jal         func_2D7118
    ctx->pc = 0x2D6FD0u;
    SET_GPR_U32(ctx, 31, 0x2D6FD8u);
    ctx->pc = 0x2D7118u;
    if (runtime->hasFunction(0x2D7118u)) {
        auto targetFn = runtime->lookupFunction(0x2D7118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FD8u; }
        if (ctx->pc != 0x2D6FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7118_0x2d7118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FD8u; }
        if (ctx->pc != 0x2D6FD8u) { return; }
    }
    ctx->pc = 0x2D6FD8u;
label_2d6fd8:
    // 0x2d6fd8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6fdc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2d6fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d6fe0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d6fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FE4u;
            // 0x2d6fe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6FECu;
    // 0x2d6fec: 0x0  nop
    ctx->pc = 0x2d6fecu;
    // NOP
label_2d6ff0:
    // 0x2d6ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d6ff4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d6ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6ff8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d6ffc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d6ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7000: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d7004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7008: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d7008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d700c: 0x24c69708  addiu       $a2, $a2, -0x68F8
    ctx->pc = 0x2d700cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940424));
    // 0x2d7010: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7014: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d7018: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D7018u;
    SET_GPR_U32(ctx, 31, 0x2D7020u);
    ctx->pc = 0x2D701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7018u;
            // 0x2d701c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (runtime->hasFunction(0x2CF568u)) {
        auto targetFn = runtime->lookupFunction(0x2CF568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7020u; }
        if (ctx->pc != 0x2D7020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF568_0x2cf568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7020u; }
        if (ctx->pc != 0x2D7020u) { return; }
    }
    ctx->pc = 0x2D7020u;
label_2d7020:
    // 0x2d7020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7028: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D7028u;
    {
        const bool branch_taken_0x2d7028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7028u;
            // 0x2d702c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7028) {
            ctx->pc = 0x2D70E8u;
            goto label_2d70e8;
        }
    }
    ctx->pc = 0x2D7030u;
    // 0x2d7030: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D7030u;
    SET_GPR_U32(ctx, 31, 0x2D7038u);
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7038u; }
        if (ctx->pc != 0x2D7038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7038u; }
        if (ctx->pc != 0x2D7038u) { return; }
    }
    ctx->pc = 0x2D7038u;
label_2d7038:
    // 0x2d7038: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7038u;
    {
        const bool branch_taken_0x2d7038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7038u;
            // 0x2d703c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7038) {
            ctx->pc = 0x2D7070u;
            goto label_2d7070;
        }
    }
    ctx->pc = 0x2D7040u;
    // 0x2d7040: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D7040u;
    {
        const bool branch_taken_0x2d7040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7040u;
            // 0x2d7044: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7040) {
            ctx->pc = 0x2D70F0u;
            goto label_2d70f0;
        }
    }
    ctx->pc = 0x2D7048u;
label_2d7048:
    // 0x2d7048: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x2D7048u;
    SET_GPR_U32(ctx, 31, 0x2D7050u);
    ctx->pc = 0x2D7B30u;
    if (runtime->hasFunction(0x2D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x2D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7050u; }
        if (ctx->pc != 0x2D7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7B30_0x2d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7050u; }
        if (ctx->pc != 0x2D7050u) { return; }
    }
    ctx->pc = 0x2D7050u;
label_2d7050:
    // 0x2d7050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7058: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D7058u;
    {
        const bool branch_taken_0x2d7058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7058u;
            // 0x2d705c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7058) {
            ctx->pc = 0x2D70DCu;
            goto label_2d70dc;
        }
    }
    ctx->pc = 0x2D7060u;
    // 0x2d7060: 0xc0b3e2e  jal         func_2CF8B8
    ctx->pc = 0x2D7060u;
    SET_GPR_U32(ctx, 31, 0x2D7068u);
    ctx->pc = 0x2D7064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7060u;
            // 0x2d7064: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8B8u;
    if (runtime->hasFunction(0x2CF8B8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7068u; }
        if (ctx->pc != 0x2D7068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF8B8_0x2cf8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7068u; }
        if (ctx->pc != 0x2D7068u) { return; }
    }
    ctx->pc = 0x2D7068u;
label_2d7068:
    // 0x2d7068: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7068u;
    {
        const bool branch_taken_0x2d7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7068u;
            // 0x2d706c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7068) {
            ctx->pc = 0x2D70DCu;
            goto label_2d70dc;
        }
    }
    ctx->pc = 0x2D7070u;
label_2d7070:
    // 0x2d7070: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d7070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d707c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2d707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d7080: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2d7080u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7084: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7084u;
    SET_GPR_U32(ctx, 31, 0x2D708Cu);
    ctx->pc = 0x2D7088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7084u;
            // 0x2d7088: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D708Cu; }
        if (ctx->pc != 0x2D708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D708Cu; }
        if (ctx->pc != 0x2D708Cu) { return; }
    }
    ctx->pc = 0x2D708Cu;
label_2d708c:
    // 0x2d708c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7090: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7094: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d7094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d709c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2d709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d70a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d70a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70a4: 0x24849690  addiu       $a0, $a0, -0x6970
    ctx->pc = 0x2d70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
    // 0x2d70a8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2d70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2d70ac: 0xc0b2aa2  jal         func_2CAA88
    ctx->pc = 0x2D70ACu;
    SET_GPR_U32(ctx, 31, 0x2D70B4u);
    ctx->pc = 0x2D70B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70ACu;
            // 0x2d70b0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA88u;
    if (runtime->hasFunction(0x2CAA88u)) {
        auto targetFn = runtime->lookupFunction(0x2CAA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70B4u; }
        if (ctx->pc != 0x2D70B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAA88_0x2caa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70B4u; }
        if (ctx->pc != 0x2D70B4u) { return; }
    }
    ctx->pc = 0x2D70B4u;
label_2d70b4:
    // 0x2d70b4: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D70B4u;
    SET_GPR_U32(ctx, 31, 0x2D70BCu);
    ctx->pc = 0x2D70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70B4u;
            // 0x2d70b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70BCu; }
        if (ctx->pc != 0x2D70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70BCu; }
        if (ctx->pc != 0x2D70BCu) { return; }
    }
    ctx->pc = 0x2D70BCu;
label_2d70bc:
    // 0x2d70bc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d70c0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d70c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d70c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d70c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70c8: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x2d70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x2d70cc: 0x24c68538  addiu       $a2, $a2, -0x7AC8
    ctx->pc = 0x2d70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935864));
    // 0x2d70d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d70d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70d4: 0x1200ffdc  beqz        $s0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2D70D4u;
    {
        const bool branch_taken_0x2d70d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70D4u;
            // 0x2d70d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70d4) {
            ctx->pc = 0x2D7048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7048;
        }
    }
    ctx->pc = 0x2D70DCu;
label_2d70dc:
    // 0x2d70dc: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D70DCu;
    SET_GPR_U32(ctx, 31, 0x2D70E4u);
    ctx->pc = 0x2D70E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70DCu;
            // 0x2d70e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70E4u; }
        if (ctx->pc != 0x2D70E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70E4u; }
        if (ctx->pc != 0x2D70E4u) { return; }
    }
    ctx->pc = 0x2D70E4u;
label_2d70e4:
    // 0x2d70e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d70e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d70e8:
    // 0x2d70e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d70e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d70ec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d70ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d70f0:
    // 0x2d70f0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d70f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d70f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d70f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D70F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D70FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70F8u;
            // 0x2d70fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7100u;
label_2d7100:
    // 0x2d7100: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d7100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d7104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7108: 0x24639708  addiu       $v1, $v1, -0x68F8
    ctx->pc = 0x2d7108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x2d710c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D710Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D710Cu;
            // 0x2d7110: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7114u;
    // 0x2d7114: 0x0  nop
    ctx->pc = 0x2d7114u;
    // NOP
    ctx->pc = 0x2d7118u;
}
