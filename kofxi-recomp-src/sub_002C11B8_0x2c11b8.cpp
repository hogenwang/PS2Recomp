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

// Function: sub_002C11B8
// Address: 0x2c11b8 - 0x2c1210
void sub_002C11B8_0x2c11b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C11B8_0x2c11b8");
#endif

    switch (ctx->pc) {
        case 0x2c11ecu: goto label_2c11ec;
        case 0x2c11f4u: goto label_2c11f4;
        default: break;
    }

    ctx->pc = 0x2c11b8u;

    // 0x2c11b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c11b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c11bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c11c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c11c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c11c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c11c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C11CCu;
    {
        const bool branch_taken_0x2c11cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11CCu;
        // 0x2c11d0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11cc) {
            ctx->pc = 0x2C11DCu;
            goto label_2c11dc;
        }
    }
    ctx->pc = 0x2C11D4u;
    // 0x2c11d4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C11D4u;
    {
        const bool branch_taken_0x2c11d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c11d4) {
            ctx->pc = 0x2C11E4u;
            goto label_2c11e4;
        }
    }
    ctx->pc = 0x2C11DCu;
label_2c11dc:
    // 0x2c11dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C11DCu;
    {
        const bool branch_taken_0x2c11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11DCu;
        // 0x2c11e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11dc) {
            ctx->pc = 0x2C11FCu;
            goto label_2c11fc;
        }
    }
    ctx->pc = 0x2C11E4u;
label_2c11e4:
    // 0x2c11e4: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x2C11E4u;
    SET_GPR_U32(ctx, 31, 0x2C11ECu);
    ctx->pc = 0x2C11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11E4u;
    // 0x2c11e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280ED8u, 0x2C11E4u, 0x2C11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11ECu;
label_2c11ec:
    // 0x2c11ec: 0xc0a6bda  jal         func_29AF68
    ctx->pc = 0x2C11ECu;
    SET_GPR_U32(ctx, 31, 0x2C11F4u);
    ctx->pc = 0x2C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11ECu;
    // 0x2c11f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AF68u, 0x2C11ECu, 0x2C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11F4u;
label_2c11f4:
    // 0x2c11f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c11f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c11fc:
    // 0x2c11fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c11fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1200: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1208: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1208u;
        // 0x2c120c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1210u;
}
