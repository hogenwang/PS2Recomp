#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4D20
// Address: 0x2d4d20 - 0x2d4d88
void sub_002D4D20_0x2d4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4D20_0x2d4d20");
#endif

    switch (ctx->pc) {
        case 0x2d4d34u: goto label_2d4d34;
        case 0x2d4d48u: goto label_2d4d48;
        default: break;
    }

    ctx->pc = 0x2d4d20u;

    // 0x2d4d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d4d2c: 0xc0b5362  jal         func_2D4D88
    ctx->pc = 0x2D4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D34u);
    ctx->pc = 0x2D4D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D2Cu;
            // 0x2d4d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D88u;
    if (runtime->hasFunction(0x2D4D88u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D34u; }
        if (ctx->pc != 0x2D4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D88_0x2d4d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D34u; }
        if (ctx->pc != 0x2D4D34u) { return; }
    }
    ctx->pc = 0x2D4D34u;
label_2d4d34:
    // 0x2d4d34: 0x26030078  addiu       $v1, $s0, 0x78
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2d4d38: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2d4d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d4d3c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4D3Cu;
    {
        const bool branch_taken_0x2d4d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d3c) {
            ctx->pc = 0x2D4D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D3Cu;
            // 0x2d4d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D7Cu;
            goto label_2d4d7c;
        }
    }
    ctx->pc = 0x2D4D44u;
    // 0x2d4d44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4d48:
    // 0x2d4d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4d4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d4d50: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d4d54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d4d58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d4d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4d5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d4d60: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d4d64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d4d68: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2d4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2d4d6c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2d4d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d4d70: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D4D70u;
    {
        const bool branch_taken_0x2d4d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d70) {
            ctx->pc = 0x2D4D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D70u;
            // 0x2d4d74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4d48;
        }
    }
    ctx->pc = 0x2D4D78u;
    // 0x2d4d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4d7c:
    // 0x2d4d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4d80: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D80u;
            // 0x2d4d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4D88u;
    ctx->pc = 0x2d4d88u;
}
