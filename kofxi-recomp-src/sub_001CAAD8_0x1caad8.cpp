#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAAD8
// Address: 0x1caad8 - 0x1cab98
void sub_001CAAD8_0x1caad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAAD8_0x1caad8");
#endif

    switch (ctx->pc) {
        case 0x1cab10u: goto label_1cab10;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab48u: goto label_1cab48;
        case 0x1cab60u: goto label_1cab60;
        case 0x1cab74u: goto label_1cab74;
        case 0x1cab7cu: goto label_1cab7c;
        case 0x1cab84u: goto label_1cab84;
        default: break;
    }

    ctx->pc = 0x1caad8u;

    // 0x1caad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caae4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAAE4u;
    {
        const bool branch_taken_0x1caae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAE4u;
            // 0x1caae8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caae4) {
            ctx->pc = 0x1CAB10u;
            goto label_1cab10;
        }
    }
    ctx->pc = 0x1CAAECu;
    // 0x1caaec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1caaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1caaf0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1caaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caaf8: 0x2484b858  addiu       $a0, $a0, -0x47A8
    ctx->pc = 0x1caaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948952));
    // 0x1caafc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab00: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1cab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
    // 0x1cab04: 0x8072a14  j           func_1CA850
    ctx->pc = 0x1CAB04u;
    ctx->pc = 0x1CAB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB04u;
            // 0x1cab08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    if (runtime->hasFunction(0x1CA850u)) {
        auto targetFn = runtime->lookupFunction(0x1CA850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CAB0Cu;
    // 0x1cab0c: 0x0  nop
    ctx->pc = 0x1cab0cu;
    // NOP
label_1cab10:
    // 0x1cab10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cab14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAB14u;
    {
        const bool branch_taken_0x1cab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB14u;
            // 0x1cab18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab14) {
            ctx->pc = 0x1CAB40u;
            goto label_1cab40;
        }
    }
    ctx->pc = 0x1CAB1Cu;
    // 0x1cab1c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cab20: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cab20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cab24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cab24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab28: 0x2484b888  addiu       $a0, $a0, -0x4778
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949000));
    // 0x1cab2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab30: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
    // 0x1cab34: 0x8072a14  j           func_1CA850
    ctx->pc = 0x1CAB34u;
    ctx->pc = 0x1CAB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB34u;
            // 0x1cab38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    if (runtime->hasFunction(0x1CA850u)) {
        auto targetFn = runtime->lookupFunction(0x1CA850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CAB3Cu;
    // 0x1cab3c: 0x0  nop
    ctx->pc = 0x1cab3cu;
    // NOP
label_1cab40:
    // 0x1cab40: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CAB40u;
    SET_GPR_U32(ctx, 31, 0x1CAB48u);
    ctx->pc = 0x1CAB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB40u;
            // 0x1cab44: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB48u; }
        if (ctx->pc != 0x1CAB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB48u; }
        if (ctx->pc != 0x1CAB48u) { return; }
    }
    ctx->pc = 0x1CAB48u;
label_1cab48:
    // 0x1cab48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cab48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cab4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cab50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab54: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB54u;
            // 0x1cab58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAB5Cu;
    // 0x1cab5c: 0x0  nop
    ctx->pc = 0x1cab5cu;
    // NOP
label_1cab60:
    // 0x1cab60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cab64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cab68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cab6c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB74u);
    ctx->pc = 0x1CAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB6Cu;
            // 0x1cab70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB74u; }
        if (ctx->pc != 0x1CAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB74u; }
        if (ctx->pc != 0x1CAB74u) { return; }
    }
    ctx->pc = 0x1CAB74u;
label_1cab74:
    // 0x1cab74: 0xc072ae6  jal         func_1CAB98
    ctx->pc = 0x1CAB74u;
    SET_GPR_U32(ctx, 31, 0x1CAB7Cu);
    ctx->pc = 0x1CAB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB74u;
            // 0x1cab78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB98u;
    if (runtime->hasFunction(0x1CAB98u)) {
        auto targetFn = runtime->lookupFunction(0x1CAB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB7Cu; }
        if (ctx->pc != 0x1CAB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAB98_0x1cab98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB7Cu; }
        if (ctx->pc != 0x1CAB7Cu) { return; }
    }
    ctx->pc = 0x1CAB7Cu;
label_1cab7c:
    // 0x1cab7c: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB84u);
    ctx->pc = 0x1CAB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB7Cu;
            // 0x1cab80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB84u; }
        if (ctx->pc != 0x1CAB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB84u; }
        if (ctx->pc != 0x1CAB84u) { return; }
    }
    ctx->pc = 0x1CAB84u;
label_1cab84:
    // 0x1cab84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cab88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cab8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB90u;
            // 0x1cab94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAB98u;
    ctx->pc = 0x1cab98u;
}
