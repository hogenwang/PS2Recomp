#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190D70
// Address: 0x190d70 - 0x190dd0
void sub_00190D70_0x190d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190D70_0x190d70");
#endif

    ctx->pc = 0x190d70u;

    // 0x190d70: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x190d74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x190d74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x190d78: 0x28810000  slti        $at, $a0, 0x0
    ctx->pc = 0x190d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x190d7c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x190D7Cu;
    {
        const bool branch_taken_0x190d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D7Cu;
        // 0x190d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d7c) {
            ctx->pc = 0x190D98u;
            goto label_190d98;
        }
    }
    ctx->pc = 0x190D84u;
    // 0x190d84: 0x2883fff6  slti        $v1, $a0, -0xA
    ctx->pc = 0x190d84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x190d88: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D88u;
    {
        const bool branch_taken_0x190d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d88) {
            ctx->pc = 0x190D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190D88u;
            // 0x190d8c: 0x2881fff6  slti        $at, $a0, -0xA (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967286) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D9Cu;
            goto label_190d9c;
        }
    }
    ctx->pc = 0x190D90u;
    // 0x190d90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190D90u;
    {
        const bool branch_taken_0x190d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D90u;
        // 0x190d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d90) {
            ctx->pc = 0x190DC8u;
            goto label_190dc8;
        }
    }
    ctx->pc = 0x190D98u;
label_190d98:
    // 0x190d98: 0x2881fff6  slti        $at, $a0, -0xA
    ctx->pc = 0x190d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967286) ? 1 : 0);
label_190d9c:
    // 0x190d9c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x190D9Cu;
    {
        const bool branch_taken_0x190d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d9c) {
            ctx->pc = 0x190DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190D9Cu;
            // 0x190da0: 0x2881ffe2  slti        $at, $a0, -0x1E (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967266) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190DBCu;
            goto label_190dbc;
        }
    }
    ctx->pc = 0x190DA4u;
    // 0x190da4: 0x2883ffe2  slti        $v1, $a0, -0x1E
    ctx->pc = 0x190da4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967266) ? 1 : 0);
    // 0x190da8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190DA8u;
    {
        const bool branch_taken_0x190da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190da8) {
            ctx->pc = 0x190DB8u;
            goto label_190db8;
        }
    }
    ctx->pc = 0x190DB0u;
    // 0x190db0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190DB0u;
    {
        const bool branch_taken_0x190db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DB0u;
        // 0x190db4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190db0) {
            ctx->pc = 0x190DC8u;
            goto label_190dc8;
        }
    }
    ctx->pc = 0x190DB8u;
label_190db8:
    // 0x190db8: 0x2881ffe2  slti        $at, $a0, -0x1E
    ctx->pc = 0x190db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967266) ? 1 : 0);
label_190dbc:
    // 0x190dbc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x190DBCu;
    {
        const bool branch_taken_0x190dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dbc) {
            ctx->pc = 0x190DC8u;
            goto label_190dc8;
        }
    }
    ctx->pc = 0x190DC4u;
    // 0x190dc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_190dc8:
    // 0x190dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x190DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190DD0u;
}
