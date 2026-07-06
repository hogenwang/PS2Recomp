#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024CE80
// Address: 0x24ce80 - 0x24cf10
void sub_0024CE80_0x24ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE80_0x24ce80");
#endif

    switch (ctx->pc) {
        case 0x24ceb0u: goto label_24ceb0;
        case 0x24ceccu: goto label_24cecc;
        default: break;
    }

    ctx->pc = 0x24ce80u;

    // 0x24ce80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ce84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24ce88: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x24ce88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x24ce8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ce90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ce94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24ce94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce98: 0x8e430dc0  lw          $v1, 0xDC0($s2)
    ctx->pc = 0x24ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3520)));
    // 0x24ce9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ce9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cea0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CEA0u;
    {
        const bool branch_taken_0x24cea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEA0u;
            // 0x24cea4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cea0) {
            ctx->pc = 0x24CEC4u;
            goto label_24cec4;
        }
    }
    ctx->pc = 0x24CEA8u;
    // 0x24cea8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24ceac: 0x0  nop
    ctx->pc = 0x24ceacu;
    // NOP
label_24ceb0:
    // 0x24ceb0: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24CEB0u;
    {
        const bool branch_taken_0x24ceb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x24CEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEB0u;
            // 0x24ceb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ceb0) {
            ctx->pc = 0x24CEFCu;
            goto label_24cefc;
        }
    }
    ctx->pc = 0x24CEB8u;
    // 0x24ceb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24cebc: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24CEBCu;
    {
        const bool branch_taken_0x24cebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cebc) {
            ctx->pc = 0x24CEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEBCu;
            // 0x24cec0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ceb0;
        }
    }
    ctx->pc = 0x24CEC4u;
label_24cec4:
    // 0x24cec4: 0xc098552  jal         func_261548
    ctx->pc = 0x24CEC4u;
    SET_GPR_U32(ctx, 31, 0x24CECCu);
    ctx->pc = 0x24CEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEC4u;
            // 0x24cec8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CECCu; }
        if (ctx->pc != 0x24CECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CECCu; }
        if (ctx->pc != 0x24CECCu) { return; }
    }
    ctx->pc = 0x24CECCu;
label_24cecc:
    // 0x24cecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24ceccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ced0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CED0u;
    {
        const bool branch_taken_0x24ced0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CED0u;
            // 0x24ced4: 0x26240dc0  addiu       $a0, $s1, 0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ced0) {
            ctx->pc = 0x24CEF8u;
            goto label_24cef8;
        }
    }
    ctx->pc = 0x24CED8u;
    // 0x24ced8: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x24ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x24cedc: 0x8e220dc0  lw          $v0, 0xDC0($s1)
    ctx->pc = 0x24cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3520)));
    // 0x24cee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CEE0u;
    {
        const bool branch_taken_0x24cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEE0u;
            // 0x24cee4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cee0) {
            ctx->pc = 0x24CEF0u;
            goto label_24cef0;
        }
    }
    ctx->pc = 0x24CEE8u;
    // 0x24cee8: 0x8e420dc0  lw          $v0, 0xDC0($s2)
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3520)));
    // 0x24ceec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_24cef0:
    // 0x24cef0: 0xae430dc0  sw          $v1, 0xDC0($s2)
    ctx->pc = 0x24cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3520), GPR_U32(ctx, 3));
    // 0x24cef4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_24cef8:
    // 0x24cef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24cefc:
    // 0x24cefc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cf00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x24CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF08u;
            // 0x24cf0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24CF10u;
    ctx->pc = 0x24cf10u;
}
