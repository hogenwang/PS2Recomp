#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBAA0
// Address: 0x1ebaa0 - 0x1ebcc8
void sub_001EBAA0_0x1ebaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBAA0_0x1ebaa0");
#endif

    switch (ctx->pc) {
        case 0x1ebad4u: goto label_1ebad4;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbecu: goto label_1ebbec;
        case 0x1ebc14u: goto label_1ebc14;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc94u: goto label_1ebc94;
        default: break;
    }

    ctx->pc = 0x1ebaa0u;

    // 0x1ebaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebaa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebaa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ebaa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebaac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebab0: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1ebab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ebab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebab8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebabc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ebabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ebac0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ebac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebac4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ebac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ebac8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ebac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ebacc: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EBACCu;
    SET_GPR_U32(ctx, 31, 0x1EBAD4u);
    ctx->pc = 0x1EBAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBACCu;
            // 0x1ebad0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAD4u; }
        if (ctx->pc != 0x1EBAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAD4u; }
        if (ctx->pc != 0x1EBAD4u) { return; }
    }
    ctx->pc = 0x1EBAD4u;
label_1ebad4:
    // 0x1ebad4: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1ebad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1ebad8: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1ebad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1ebadc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ebadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebae0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBAE0u;
    {
        const bool branch_taken_0x1ebae0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EBAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAE0u;
            // 0x1ebae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebae0) {
            ctx->pc = 0x1EBAF8u;
            goto label_1ebaf8;
        }
    }
    ctx->pc = 0x1EBAE8u;
    // 0x1ebae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebaec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ebaecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebaf0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBAF0u;
    {
        const bool branch_taken_0x1ebaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAF0u;
            // 0x1ebaf4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebaf0) {
            ctx->pc = 0x1EBB40u;
            goto label_1ebb40;
        }
    }
    ctx->pc = 0x1EBAF8u;
label_1ebaf8:
    // 0x1ebaf8: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1ebafc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1ebafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebb00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ebb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ebb04: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1ebb08: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1ebb08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ebb0c: 0x2466001f  addiu       $a2, $v1, 0x1F
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ebb10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ebb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb14: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1ebb14u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1ebb18: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ebb18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1ebb1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ebb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ebb20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ebb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebb24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ebb28: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ebb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ebb2c: 0x8c650f84  lw          $a1, 0xF84($v1)
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3972)));
    // 0x1ebb30: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1ebb30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1ebb34: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x1ebb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1ebb38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebb3c: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x1ebb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
label_1ebb40:
    // 0x1ebb40: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EBB40u;
    SET_GPR_U32(ctx, 31, 0x1EBB48u);
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB48u; }
        if (ctx->pc != 0x1EBB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB48u; }
        if (ctx->pc != 0x1EBB48u) { return; }
    }
    ctx->pc = 0x1EBB48u;
label_1ebb48:
    // 0x1ebb48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ebb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebb50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebb54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebb58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ebb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebb5c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ebb5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebb60: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ebb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ebb64: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB64u;
            // 0x1ebb68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBB6Cu;
    // 0x1ebb6c: 0x0  nop
    ctx->pc = 0x1ebb6cu;
    // NOP
label_1ebb70:
    // 0x1ebb70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ebb74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ebb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ebb80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ebb80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb84: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ebb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ebb88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ebb88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb8c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1ebb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1ebb90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebb94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebb98: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ebb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ebb9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1ebb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1ebba0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1ebba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1ebba4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ebba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ebba8: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1EBBA8u;
    SET_GPR_U32(ctx, 31, 0x1EBBB0u);
    ctx->pc = 0x1EBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBA8u;
            // 0x1ebbac: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBB0u; }
        if (ctx->pc != 0x1EBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBB0u; }
        if (ctx->pc != 0x1EBBB0u) { return; }
    }
    ctx->pc = 0x1EBBB0u;
label_1ebbb0:
    // 0x1ebbb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBBB0u;
    {
        const bool branch_taken_0x1ebbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBB0u;
            // 0x1ebbb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbb0) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBBB8u;
    // 0x1ebbb8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ebbbc: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EBBBCu;
    SET_GPR_U32(ctx, 31, 0x1EBBC4u);
    ctx->pc = 0x1EBBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBBCu;
            // 0x1ebbc0: 0x34a50162  ori         $a1, $a1, 0x162 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)354);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBC4u; }
        if (ctx->pc != 0x1EBBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBC4u; }
        if (ctx->pc != 0x1EBBC4u) { return; }
    }
    ctx->pc = 0x1EBBC4u;
label_1ebbc4:
    // 0x1ebbc4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EBBC4u;
    {
        const bool branch_taken_0x1ebbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBC4u;
            // 0x1ebbc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbc4) {
            ctx->pc = 0x1EBC9Cu;
            goto label_1ebc9c;
        }
    }
    ctx->pc = 0x1EBBCCu;
    // 0x1ebbcc: 0x0  nop
    ctx->pc = 0x1ebbccu;
    // NOP
label_1ebbd0:
    // 0x1ebbd0: 0x8e160ec8  lw          $s6, 0xEC8($s0)
    ctx->pc = 0x1ebbd0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3784)));
    // 0x1ebbd4: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1ebbd8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1ebbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1ebbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ebbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbe4: 0xc07ef46  jal         func_1FBD18
    ctx->pc = 0x1EBBE4u;
    SET_GPR_U32(ctx, 31, 0x1EBBECu);
    ctx->pc = 0x1EBBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBE4u;
            // 0x1ebbe8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD18u;
    if (runtime->hasFunction(0x1FBD18u)) {
        auto targetFn = runtime->lookupFunction(0x1FBD18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBECu; }
        if (ctx->pc != 0x1EBBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBD18_0x1fbd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBECu; }
        if (ctx->pc != 0x1EBBECu) { return; }
    }
    ctx->pc = 0x1EBBECu;
label_1ebbec:
    // 0x1ebbec: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1ebbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1ebbf0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ebbf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbf4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EBBF4u;
    {
        const bool branch_taken_0x1ebbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBF4u;
            // 0x1ebbf8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbf4) {
            ctx->pc = 0x1EBC98u;
            goto label_1ebc98;
        }
    }
    ctx->pc = 0x1EBBFCu;
    // 0x1ebbfc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1ebbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ebc00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ebc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebc04: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EBC04u;
    {
        const bool branch_taken_0x1ebc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EBC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC04u;
            // 0x1ebc08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc04) {
            ctx->pc = 0x1EBC98u;
            goto label_1ebc98;
        }
    }
    ctx->pc = 0x1EBC0Cu;
    // 0x1ebc0c: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EBC0Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC14u);
    ctx->pc = 0x1EBC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC0Cu;
            // 0x1ebc10: 0x26150d94  addiu       $s5, $s0, 0xD94 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC14u; }
        if (ctx->pc != 0x1EBC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC14u; }
        if (ctx->pc != 0x1EBC14u) { return; }
    }
    ctx->pc = 0x1EBC14u;
label_1ebc14:
    // 0x1ebc14: 0x8e300168  lw          $s0, 0x168($s1)
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x1ebc18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ebc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc1c: 0x0  nop
    ctx->pc = 0x1ebc1cu;
    // NOP
label_1ebc20:
    // 0x1ebc20: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1ebc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ebc24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBC24u;
    {
        const bool branch_taken_0x1ebc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC24u;
            // 0x1ebc28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc24) {
            ctx->pc = 0x1EBC74u;
            goto label_1ebc74;
        }
    }
    ctx->pc = 0x1EBC2Cu;
    // 0x1ebc2c: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x1ebc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1ebc30: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1ebc30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ebc34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc38: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ebc3c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1ebc3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ebc40: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ebc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc44: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ebc44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1ebc48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ebc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ebc4c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1ebc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ebc50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ebc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ebc54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1ebc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ebc58: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1EBC58u;
    SET_GPR_U32(ctx, 31, 0x1EBC60u);
    ctx->pc = 0x1EBC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC58u;
            // 0x1ebc5c: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC60u; }
        if (ctx->pc != 0x1EBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC60u; }
        if (ctx->pc != 0x1EBC60u) { return; }
    }
    ctx->pc = 0x1EBC60u;
label_1ebc60:
    // 0x1ebc60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ebc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ebc68: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1ebc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ebc6c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1EBC6Cu;
    {
        const bool branch_taken_0x1ebc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc6c) {
            ctx->pc = 0x1EBC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC6Cu;
            // 0x1ebc70: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBC74u;
label_1ebc74:
    // 0x1ebc74: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x1ebc74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x1ebc78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ebc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ebc80: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ebc84: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1ebc84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ebc88: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ebc88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ebc8c: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EBC8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC94u);
    ctx->pc = 0x1EBC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC8Cu;
            // 0x1ebc90: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC94u; }
        if (ctx->pc != 0x1EBC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC94u; }
        if (ctx->pc != 0x1EBC94u) { return; }
    }
    ctx->pc = 0x1EBC94u;
label_1ebc94:
    // 0x1ebc94: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1ebc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc98:
    // 0x1ebc98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebc9c:
    // 0x1ebc9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebca0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebca4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ebca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebca8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ebca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebcac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ebcacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ebcb0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ebcb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebcb4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1ebcb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ebcb8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1ebcb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebcbc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ebcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ebcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCC0u;
            // 0x1ebcc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBCC8u;
    ctx->pc = 0x1ebcc8u;
}
