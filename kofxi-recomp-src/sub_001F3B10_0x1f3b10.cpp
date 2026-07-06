#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3B10
// Address: 0x1f3b10 - 0x1f3b98
void sub_001F3B10_0x1f3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3B10_0x1f3b10");
#endif

    switch (ctx->pc) {
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b88u: goto label_1f3b88;
        default: break;
    }

    ctx->pc = 0x1f3b10u;

    // 0x1f3b10: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x1f3b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1f3b14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3b18: 0x1502001b  bne         $t0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3B18u;
    {
        const bool branch_taken_0x1f3b18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B18u;
            // 0x1f3b1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b18) {
            ctx->pc = 0x1F3B88u;
            goto label_1f3b88;
        }
    }
    ctx->pc = 0x1F3B20u;
    // 0x1f3b20: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1f3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1f3b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3b28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3B28u;
    {
        const bool branch_taken_0x1f3b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B28u;
            // 0x1f3b2c: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b28) {
            ctx->pc = 0x1F3B48u;
            goto label_1f3b48;
        }
    }
    ctx->pc = 0x1F3B30u;
    // 0x1f3b30: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F3B30u;
    {
        const bool branch_taken_0x1f3b30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b30) {
            ctx->pc = 0x1F3B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B30u;
            // 0x1f3b34: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3B8Cu;
            goto label_1f3b8c;
        }
    }
    ctx->pc = 0x1F3B38u;
    // 0x1f3b38: 0x50680009  beql        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3B38u;
    {
        const bool branch_taken_0x1f3b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1f3b38) {
            ctx->pc = 0x1F3B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B38u;
            // 0x1f3b3c: 0x8c850164  lw          $a1, 0x164($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3B60u;
            goto label_1f3b60;
        }
    }
    ctx->pc = 0x1F3B40u;
    // 0x1f3b40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3B40u;
    {
        const bool branch_taken_0x1f3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B40u;
            // 0x1f3b44: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b40) {
            ctx->pc = 0x1F3B8Cu;
            goto label_1f3b8c;
        }
    }
    ctx->pc = 0x1F3B48u;
label_1f3b48:
    // 0x1f3b48: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x1f3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1f3b4c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1f3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f3b50: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1f3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1f3b54: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1f3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f3b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B58u;
            // 0x1f3b5c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3B60u;
label_1f3b60:
    // 0x1f3b60: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1f3b64: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1f3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1f3b68: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1f3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f3b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3b70: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f3b74: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1f3b78: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1f3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1f3b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B80u;
            // 0x1f3b84: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3B88u;
label_1f3b88:
    // 0x1f3b88: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1f3b8c:
    // 0x1f3b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B8Cu;
            // 0x1f3b90: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3B94u;
    // 0x1f3b94: 0x0  nop
    ctx->pc = 0x1f3b94u;
    // NOP
    ctx->pc = 0x1f3b98u;
}
