#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBE80
// Address: 0x1ebe80 - 0x1ebf38
void sub_001EBE80_0x1ebe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE80_0x1ebe80");
#endif

    switch (ctx->pc) {
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf1cu: goto label_1ebf1c;
        default: break;
    }

    ctx->pc = 0x1ebe80u;

    // 0x1ebe80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebe84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebe88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ebe88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ebe8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebe94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebe98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ebe98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ebe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ebea0: 0xc07afce  jal         func_1EBF38
    ctx->pc = 0x1EBEA0u;
    SET_GPR_U32(ctx, 31, 0x1EBEA8u);
    ctx->pc = 0x1EBEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEA0u;
            // 0x1ebea4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF38u;
    if (runtime->hasFunction(0x1EBF38u)) {
        auto targetFn = runtime->lookupFunction(0x1EBF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEA8u; }
        if (ctx->pc != 0x1EBEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBF38_0x1ebf38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEA8u; }
        if (ctx->pc != 0x1EBEA8u) { return; }
    }
    ctx->pc = 0x1EBEA8u;
label_1ebea8:
    // 0x1ebea8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ebea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebeac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBEACu;
    {
        const bool branch_taken_0x1ebeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEACu;
            // 0x1ebeb0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebeac) {
            ctx->pc = 0x1EBF20u;
            goto label_1ebf20;
        }
    }
    ctx->pc = 0x1EBEB4u;
    // 0x1ebeb4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1ebeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1ebeb8: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EBEB8u;
    {
        const bool branch_taken_0x1ebeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EBEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEB8u;
            // 0x1ebebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebeb8) {
            ctx->pc = 0x1EBF20u;
            goto label_1ebf20;
        }
    }
    ctx->pc = 0x1EBEC0u;
    // 0x1ebec0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ebec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebec4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEC4u;
    {
        const bool branch_taken_0x1ebec4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EBEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEC4u;
            // 0x1ebec8: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebec4) {
            ctx->pc = 0x1EBEE0u;
            goto label_1ebee0;
        }
    }
    ctx->pc = 0x1EBECCu;
    // 0x1ebecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebed0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ebed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ebed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebed8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ebed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ebedc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ebedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1ebee0:
    // 0x1ebee0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ebee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ebee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebee8: 0x2442e868  addiu       $v0, $v0, -0x1798
    ctx->pc = 0x1ebee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961256));
    // 0x1ebeec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebef0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ebef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ebef4: 0xc07b02e  jal         func_1EC0B8
    ctx->pc = 0x1EBEF4u;
    SET_GPR_U32(ctx, 31, 0x1EBEFCu);
    ctx->pc = 0x1EBEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEF4u;
            // 0x1ebef8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC0B8u;
    if (runtime->hasFunction(0x1EC0B8u)) {
        auto targetFn = runtime->lookupFunction(0x1EC0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEFCu; }
        if (ctx->pc != 0x1EBEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC0B8_0x1ec0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEFCu; }
        if (ctx->pc != 0x1EBEFCu) { return; }
    }
    ctx->pc = 0x1EBEFCu;
label_1ebefc:
    // 0x1ebefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf04: 0xc07b07e  jal         func_1EC1F8
    ctx->pc = 0x1EBF04u;
    SET_GPR_U32(ctx, 31, 0x1EBF0Cu);
    ctx->pc = 0x1EBF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF04u;
            // 0x1ebf08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC1F8u;
    if (runtime->hasFunction(0x1EC1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1EC1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF0Cu; }
        if (ctx->pc != 0x1EBF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC1F8_0x1ec1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF0Cu; }
        if (ctx->pc != 0x1EBF0Cu) { return; }
    }
    ctx->pc = 0x1EBF0Cu;
label_1ebf0c:
    // 0x1ebf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf14: 0xc07b220  jal         func_1EC880
    ctx->pc = 0x1EBF14u;
    SET_GPR_U32(ctx, 31, 0x1EBF1Cu);
    ctx->pc = 0x1EBF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF14u;
            // 0x1ebf18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC880u;
    if (runtime->hasFunction(0x1EC880u)) {
        auto targetFn = runtime->lookupFunction(0x1EC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF1Cu; }
        if (ctx->pc != 0x1EBF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC880_0x1ec880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF1Cu; }
        if (ctx->pc != 0x1EBF1Cu) { return; }
    }
    ctx->pc = 0x1EBF1Cu;
label_1ebf1c:
    // 0x1ebf1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebf20:
    // 0x1ebf20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebf24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebf24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebf28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebf28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebf2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ebf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebf30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF30u;
            // 0x1ebf34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBF38u;
    ctx->pc = 0x1ebf38u;
}
