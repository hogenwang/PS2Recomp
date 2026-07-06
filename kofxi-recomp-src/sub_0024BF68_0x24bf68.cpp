#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024BF68
// Address: 0x24bf68 - 0x24c030
void sub_0024BF68_0x24bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF68_0x24bf68");
#endif

    switch (ctx->pc) {
        case 0x24bf8cu: goto label_24bf8c;
        case 0x24bfa0u: goto label_24bfa0;
        case 0x24bfb4u: goto label_24bfb4;
        case 0x24bfbcu: goto label_24bfbc;
        case 0x24bfc4u: goto label_24bfc4;
        case 0x24bfd4u: goto label_24bfd4;
        case 0x24c008u: goto label_24c008;
        case 0x24c010u: goto label_24c010;
        case 0x24c028u: goto label_24c028;
        default: break;
    }

    ctx->pc = 0x24bf68u;

    // 0x24bf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24bf6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bf70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24bf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24bf7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x24bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24bf80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf84: 0xc08b822  jal         func_22E088
    ctx->pc = 0x24BF84u;
    SET_GPR_U32(ctx, 31, 0x24BF8Cu);
    ctx->pc = 0x24BF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BF84u;
            // 0x24bf88: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E088u;
    if (runtime->hasFunction(0x22E088u)) {
        auto targetFn = runtime->lookupFunction(0x22E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BF8Cu; }
        if (ctx->pc != 0x24BF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E088_0x22e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BF8Cu; }
        if (ctx->pc != 0x24BF8Cu) { return; }
    }
    ctx->pc = 0x24BF8Cu;
label_24bf8c:
    // 0x24bf8c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x24bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24bf90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BF90u;
    {
        const bool branch_taken_0x24bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bf90) {
            ctx->pc = 0x24BF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BF90u;
            // 0x24bf94: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BFA4u;
            goto label_24bfa4;
        }
    }
    ctx->pc = 0x24BF98u;
    // 0x24bf98: 0xc08a996  jal         func_22A658
    ctx->pc = 0x24BF98u;
    SET_GPR_U32(ctx, 31, 0x24BFA0u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFA0u; }
        if (ctx->pc != 0x24BFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFA0u; }
        if (ctx->pc != 0x24BFA0u) { return; }
    }
    ctx->pc = 0x24BFA0u;
label_24bfa0:
    // 0x24bfa0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x24bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24bfa4:
    // 0x24bfa4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BFA4u;
    {
        const bool branch_taken_0x24bfa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bfa4) {
            ctx->pc = 0x24BFB4u;
            goto label_24bfb4;
        }
    }
    ctx->pc = 0x24BFACu;
    // 0x24bfac: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24BFACu;
    SET_GPR_U32(ctx, 31, 0x24BFB4u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFB4u; }
        if (ctx->pc != 0x24BFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFB4u; }
        if (ctx->pc != 0x24BFB4u) { return; }
    }
    ctx->pc = 0x24BFB4u;
label_24bfb4:
    // 0x24bfb4: 0xc094996  jal         func_252658
    ctx->pc = 0x24BFB4u;
    SET_GPR_U32(ctx, 31, 0x24BFBCu);
    ctx->pc = 0x24BFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFB4u;
            // 0x24bfb8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252658u;
    if (runtime->hasFunction(0x252658u)) {
        auto targetFn = runtime->lookupFunction(0x252658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFBCu; }
        if (ctx->pc != 0x24BFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252658_0x252658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFBCu; }
        if (ctx->pc != 0x24BFBCu) { return; }
    }
    ctx->pc = 0x24BFBCu;
label_24bfbc:
    // 0x24bfbc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24BFBCu;
    SET_GPR_U32(ctx, 31, 0x24BFC4u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFC4u; }
        if (ctx->pc != 0x24BFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFC4u; }
        if (ctx->pc != 0x24BFC4u) { return; }
    }
    ctx->pc = 0x24BFC4u;
label_24bfc4:
    // 0x24bfc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24bfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfcc: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x24BFCCu;
    SET_GPR_U32(ctx, 31, 0x24BFD4u);
    ctx->pc = 0x24BFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFCCu;
            // 0x24bfd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (runtime->hasFunction(0x24C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFD4u; }
        if (ctx->pc != 0x24BFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C8D0_0x24c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BFD4u; }
        if (ctx->pc != 0x24BFD4u) { return; }
    }
    ctx->pc = 0x24BFD4u;
label_24bfd4:
    // 0x24bfd4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24bfd8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x24bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24bfdc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BFDCu;
    {
        const bool branch_taken_0x24bfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFDCu;
            // 0x24bfe0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfdc) {
            ctx->pc = 0x24BFF0u;
            goto label_24bff0;
        }
    }
    ctx->pc = 0x24BFE4u;
    // 0x24bfe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BFE4u;
    {
        const bool branch_taken_0x24bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFE4u;
            // 0x24bfe8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfe4) {
            ctx->pc = 0x24BFF4u;
            goto label_24bff4;
        }
    }
    ctx->pc = 0x24BFECu;
    // 0x24bfec: 0x0  nop
    ctx->pc = 0x24bfecu;
    // NOP
label_24bff0:
    // 0x24bff0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_24bff4:
    // 0x24bff4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24bff8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x24bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24bffc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BFFCu;
    {
        const bool branch_taken_0x24bffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFFCu;
            // 0x24c000: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bffc) {
            ctx->pc = 0x24C028u;
            goto label_24c028;
        }
    }
    ctx->pc = 0x24C004u;
    // 0x24c004: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x24c004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_24c008:
    // 0x24c008: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24C008u;
    SET_GPR_U32(ctx, 31, 0x24C010u);
    ctx->pc = 0x24C00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C008u;
            // 0x24c00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C010u; }
        if (ctx->pc != 0x24C010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C010u; }
        if (ctx->pc != 0x24C010u) { return; }
    }
    ctx->pc = 0x24C010u;
label_24c010:
    // 0x24c010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c020: 0x8098560  j           func_261580
    ctx->pc = 0x24C020u;
    ctx->pc = 0x24C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C020u;
            // 0x24c024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x24C028u;
label_24c028:
    // 0x24c028: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x24C028u;
    {
        const bool branch_taken_0x24c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C028u;
            // 0x24c02c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c028) {
            ctx->pc = 0x24C008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c008;
        }
    }
    ctx->pc = 0x24C030u;
    ctx->pc = 0x24c030u;
}
