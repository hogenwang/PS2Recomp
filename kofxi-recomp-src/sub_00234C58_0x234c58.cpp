#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234C58
// Address: 0x234c58 - 0x234cc8
void sub_00234C58_0x234c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234C58_0x234c58");
#endif

    switch (ctx->pc) {
        case 0x234c98u: goto label_234c98;
        default: break;
    }

    ctx->pc = 0x234c58u;

    // 0x234c58: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234c5c: 0x8c62fcb8  lw          $v0, -0x348($v1)
    ctx->pc = 0x234c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966456)));
    // 0x234c60: 0x2465fcb8  addiu       $a1, $v1, -0x348
    ctx->pc = 0x234c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966456));
    // 0x234c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234C64u;
    {
        const bool branch_taken_0x234c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C64u;
            // 0x234c68: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c64) {
            ctx->pc = 0x234C78u;
            goto label_234c78;
        }
    }
    ctx->pc = 0x234C6Cu;
    // 0x234c6c: 0x8c62fcb8  lw          $v0, -0x348($v1)
    ctx->pc = 0x234c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966456)));
    // 0x234c70: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x234c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x234c74: 0x0  nop
    ctx->pc = 0x234c74u;
    // NOP
label_234c78:
    // 0x234c78: 0xac64fcb8  sw          $a0, -0x348($v1)
    ctx->pc = 0x234c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966456), GPR_U32(ctx, 4));
    // 0x234c7c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x234c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x234c80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234c84: 0x8c62fcf8  lw          $v0, -0x308($v1)
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966520)));
    // 0x234c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x234C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C8Cu;
            // 0x234c90: 0xac62fcf8  sw          $v0, -0x308($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234C94u;
    // 0x234c94: 0x0  nop
    ctx->pc = 0x234c94u;
    // NOP
label_234c98:
    // 0x234c98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x234c9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234C9Cu;
    {
        const bool branch_taken_0x234c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C9Cu;
            // 0x234ca0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c9c) {
            ctx->pc = 0x234CB0u;
            goto label_234cb0;
        }
    }
    ctx->pc = 0x234CA4u;
    // 0x234ca4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x234ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x234ca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x234cac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_234cb0:
    // 0x234cb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x234cb4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234cb8: 0x8c62fcf8  lw          $v0, -0x308($v1)
    ctx->pc = 0x234cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966520)));
    // 0x234cbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x234CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CC0u;
            // 0x234cc4: 0xac62fcf8  sw          $v0, -0x308($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234CC8u;
    ctx->pc = 0x234cc8u;
}
