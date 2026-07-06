#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DA08
// Address: 0x11da08 - 0x11dad0
void sub_0011DA08_0x11da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DA08_0x11da08");
#endif

    switch (ctx->pc) {
        case 0x11da30u: goto label_11da30;
        case 0x11da70u: goto label_11da70;
        case 0x11daacu: goto label_11daac;
        default: break;
    }

    ctx->pc = 0x11da08u;

    // 0x11da08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11da0c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x11da0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x11da10: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x11da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x11da14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11da14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da18: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11da1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11da1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11da20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da24: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11da28: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11DA28u;
    SET_GPR_U32(ctx, 31, 0x11DA30u);
    ctx->pc = 0x11DA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA28u;
            // 0x11da2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DA30u; }
        if (ctx->pc != 0x11DA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DA30u; }
        if (ctx->pc != 0x11DA30u) { return; }
    }
    ctx->pc = 0x11DA30u;
label_11da30:
    // 0x11da30: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x11da30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11da34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11da38: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11DA38u;
    {
        const bool branch_taken_0x11da38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA38u;
            // 0x11da3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da38) {
            ctx->pc = 0x11DAB8u;
            goto label_11dab8;
        }
    }
    ctx->pc = 0x11DA40u;
    // 0x11da40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x11da40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11da44: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x11da44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11da48: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x11da48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11da4c: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x11da4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11da50: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11da54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11da54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da58: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11da5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11da60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11da64: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x11da64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11da68: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x11da68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x11da6c: 0x0  nop
    ctx->pc = 0x11da6cu;
    // NOP
label_11da70:
    // 0x11da70: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x11da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11da74: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x11da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11da78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11da78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11da7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11da80: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x11da80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x11da84: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11da84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11da88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DA88u;
    {
        const bool branch_taken_0x11da88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11da88) {
            ctx->pc = 0x11DA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11da70;
        }
    }
    ctx->pc = 0x11DA90u;
    // 0x11da90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11da90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11da94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11da98: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x11da98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x11da9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11da9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daa0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11daa4: 0xc047384  jal         func_11CE10
    ctx->pc = 0x11DAA4u;
    SET_GPR_U32(ctx, 31, 0x11DAACu);
    ctx->pc = 0x11DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAA4u;
            // 0x11daa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CE10u;
    if (runtime->hasFunction(0x11CE10u)) {
        auto targetFn = runtime->lookupFunction(0x11CE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DAACu; }
        if (ctx->pc != 0x11DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CE10_0x11ce10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DAACu; }
        if (ctx->pc != 0x11DAACu) { return; }
    }
    ctx->pc = 0x11DAACu;
label_11daac:
    // 0x11daac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11dab0: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x11dab0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x11dab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11dab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dab8:
    // 0x11dab8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11dab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11dabc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x11dabcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11dac0: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x11dac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11dac4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11dac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11dac8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAC8u;
            // 0x11dacc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DAD0u;
    ctx->pc = 0x11dad0u;
}
