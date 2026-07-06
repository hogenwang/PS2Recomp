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

// Function: sub_001F7190
// Address: 0x1f7190 - 0x1f7220
void sub_001F7190_0x1f7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7190_0x1f7190");
#endif

    switch (ctx->pc) {
        case 0x1f7208u: goto label_1f7208;
        default: break;
    }

    ctx->pc = 0x1f7190u;

    // 0x1f7190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7194: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f7194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f719c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f71a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f71a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71a4: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F71A4u;
    {
        const bool branch_taken_0x1f71a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71A4u;
        // 0x1f71a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71a4) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F71ACu;
    // 0x1f71ac: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F71ACu;
    {
        const bool branch_taken_0x1f71ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f71ac) {
            ctx->pc = 0x1F71B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F71ACu;
            // 0x1f71b0: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F71F0u;
            goto label_1f71f0;
        }
    }
    ctx->pc = 0x1F71B4u;
    // 0x1f71b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f71b8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F71B8u;
    {
        const bool branch_taken_0x1f71b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71B8u;
        // 0x1f71bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71b8) {
            ctx->pc = 0x1F7210u;
            goto label_1f7210;
        }
    }
    ctx->pc = 0x1F71C0u;
    // 0x1f71c0: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f71c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f71c8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F71C8u;
    {
        const bool branch_taken_0x1f71c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C8u;
        // 0x1f71cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c8) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F71D0u;
    // 0x1f71d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F71D0u;
    {
        const bool branch_taken_0x1f71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f71d0) {
            ctx->pc = 0x1F7200u;
            goto label_1f7200;
        }
    }
    ctx->pc = 0x1F71D8u;
label_1f71d8:
    // 0x1f71d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1f71dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f71e0: 0x1446000a  bne         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F71E0u;
    {
        const bool branch_taken_0x1f71e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71E0u;
        // 0x1f71e4: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71e0) {
            ctx->pc = 0x1F720Cu;
            goto label_1f720c;
        }
    }
    ctx->pc = 0x1F71E8u;
    // 0x1f71e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F71E8u;
    {
        const bool branch_taken_0x1f71e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f71e8) {
            ctx->pc = 0x1F7200u;
            goto label_1f7200;
        }
    }
    ctx->pc = 0x1F71F0u;
label_1f71f0:
    // 0x1f71f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f71f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F71F4u;
    {
        const bool branch_taken_0x1f71f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71F4u;
        // 0x1f71f8: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71f4) {
            ctx->pc = 0x1F720Cu;
            goto label_1f720c;
        }
    }
    ctx->pc = 0x1F71FCu;
    // 0x1f71fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f71fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7200:
    // 0x1f7200: 0xc07dc88  jal         func_1F7220
    ctx->pc = 0x1F7200u;
    SET_GPR_U32(ctx, 31, 0x1F7208u);
    ctx->pc = 0x1F7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7220u, 0x1F7200u, 0x1F7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7208u;
label_1f7208:
    // 0x1f7208: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f7208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f720c:
    // 0x1f720c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f720cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7210:
    // 0x1f7210: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f7210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f7214:
    // 0x1f7214: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7214u;
        // 0x1f7218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F721Cu;
    // 0x1f721c: 0x0  nop
    ctx->pc = 0x1f721cu;
    // NOP
}
