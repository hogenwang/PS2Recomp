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

// Function: sub_002C12F8
// Address: 0x2c12f8 - 0x2c1358
void sub_002C12F8_0x2c12f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C12F8_0x2c12f8");
#endif

    switch (ctx->pc) {
        case 0x2c1308u: goto label_2c1308;
        case 0x2c1330u: goto label_2c1330;
        case 0x2c1348u: goto label_2c1348;
        default: break;
    }

    ctx->pc = 0x2c12f8u;

    // 0x2c12f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c12f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c12fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1300: 0xc0b04e0  jal         func_2C1380
    ctx->pc = 0x2C1300u;
    SET_GPR_U32(ctx, 31, 0x2C1308u);
    ctx->pc = 0x2C1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1380u, 0x2C1300u, 0x2C1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1308u;
label_2c1308:
    // 0x2c1308: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1308u;
    {
        const bool branch_taken_0x2c1308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1308) {
            ctx->pc = 0x2C130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1308u;
            // 0x2c130c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C1310u;
    // 0x2c1310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c1310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1314:
    // 0x2c1314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1318: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1318u;
        // 0x2c131c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1320u;
    // 0x2c1320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1328: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2C1328u;
    SET_GPR_U32(ctx, 31, 0x2C1330u);
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x2C1328u, 0x2C1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1330u;
label_2c1330:
    // 0x2c1330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1330u;
    {
        const bool branch_taken_0x2c1330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1330) {
            ctx->pc = 0x2C1340u;
            goto label_2c1340;
        }
    }
    ctx->pc = 0x2C1338u;
    // 0x2c1338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1338u;
    {
        const bool branch_taken_0x2c1338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1338u;
        // 0x2c133c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1338) {
            ctx->pc = 0x2C1348u;
            goto label_2c1348;
        }
    }
    ctx->pc = 0x2C1340u;
label_2c1340:
    // 0x2c1340: 0xc0b04d6  jal         func_2C1358
    ctx->pc = 0x2C1340u;
    SET_GPR_U32(ctx, 31, 0x2C1348u);
    ctx->pc = 0x2C1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1340u;
    // 0x2c1344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1358u, 0x2C1340u, 0x2C1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1348u;
label_2c1348:
    // 0x2c1348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c134c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C134Cu;
        // 0x2c1350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1354u;
    // 0x2c1354: 0x0  nop
    ctx->pc = 0x2c1354u;
    // NOP
}
