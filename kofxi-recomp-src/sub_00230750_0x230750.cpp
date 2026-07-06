#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230750
// Address: 0x230750 - 0x2307d8
void sub_00230750_0x230750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230750_0x230750");
#endif

    switch (ctx->pc) {
        case 0x230768u: goto label_230768;
        case 0x230770u: goto label_230770;
        default: break;
    }

    ctx->pc = 0x230750u;

    // 0x230750: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x230750u;
    {
        const bool branch_taken_0x230750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x230754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230750u;
            // 0x230754: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230750) {
            ctx->pc = 0x23077Cu;
            goto label_23077c;
        }
    }
    ctx->pc = 0x230758u;
    // 0x230758: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x23075c: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x230760: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230760u;
    {
        const bool branch_taken_0x230760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230760) {
            ctx->pc = 0x230764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230760u;
            // 0x230764: 0x94c20030  lhu         $v0, 0x30($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230770u;
            goto label_230770;
        }
    }
    ctx->pc = 0x230768u;
label_230768:
    // 0x230768: 0x3e00008  jr          $ra
    ctx->pc = 0x230768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230768u;
            // 0x23076c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230770u;
label_230770:
    // 0x230770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230774u;
    {
        const bool branch_taken_0x230774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230774u;
            // 0x230778: 0xa4c20030  sh          $v0, 0x30($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230774) {
            ctx->pc = 0x230798u;
            goto label_230798;
        }
    }
    ctx->pc = 0x23077Cu;
label_23077c:
    // 0x23077c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x230780: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x230784: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x230784u;
    {
        const bool branch_taken_0x230784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230784) {
            ctx->pc = 0x230768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230768;
        }
    }
    ctx->pc = 0x23078Cu;
    // 0x23078c: 0x94c20032  lhu         $v0, 0x32($a2)
    ctx->pc = 0x23078cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
    // 0x230790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230794: 0xa4c20032  sh          $v0, 0x32($a2)
    ctx->pc = 0x230794u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
label_230798:
    // 0x230798: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x23079c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23079Cu;
    {
        const bool branch_taken_0x23079c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23079c) {
            ctx->pc = 0x2307A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23079Cu;
            // 0x2307a0: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2307B0u;
            goto label_2307b0;
        }
    }
    ctx->pc = 0x2307A4u;
    // 0x2307a4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2307a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2307A8u;
    {
        const bool branch_taken_0x2307a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307A8u;
            // 0x2307ac: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a8) {
            ctx->pc = 0x2307B8u;
            goto label_2307b8;
        }
    }
    ctx->pc = 0x2307B0u;
label_2307b0:
    // 0x2307b0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2307b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2307b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2307b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2307b8:
    // 0x2307b8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2307b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2307bc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2307c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2307c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2307c4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2307c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2307c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2307c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2307cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2307CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2307D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307CCu;
            // 0x2307d0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2307D4u;
    // 0x2307d4: 0x0  nop
    ctx->pc = 0x2307d4u;
    // NOP
    ctx->pc = 0x2307d8u;
}
