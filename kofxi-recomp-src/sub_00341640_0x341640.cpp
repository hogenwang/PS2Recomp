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

// Function: sub_00341640
// Address: 0x341640 - 0x3416c0
void sub_00341640_0x341640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341640_0x341640");
#endif

    ctx->pc = 0x341640u;

    // 0x341640: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341644: 0x8c65ea78  lw          $a1, -0x1588($v1)
    ctx->pc = 0x341644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x341648: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x341648u;
    {
        const bool branch_taken_0x341648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x341648) {
            ctx->pc = 0x34164Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341648u;
            // 0x34164c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34167Cu;
            goto label_34167c;
        }
    }
    ctx->pc = 0x341650u;
    // 0x341650: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341654: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341658: 0x2463ec90  addiu       $v1, $v1, -0x1370
    ctx->pc = 0x341658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962320));
    // 0x34165c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x341660: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x341660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x341664: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x341664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x341668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34166c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x341670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x341674: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x341674u;
    {
        const bool branch_taken_0x341674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341674u;
        // 0x341678: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341674) {
            ctx->pc = 0x3416B8u;
            goto label_3416b8;
        }
    }
    ctx->pc = 0x34167Cu;
label_34167c:
    // 0x34167c: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34167Cu;
    {
        const bool branch_taken_0x34167c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x34167c) {
            ctx->pc = 0x341680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34167Cu;
            // 0x341680: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34168Cu;
            goto label_34168c;
        }
    }
    ctx->pc = 0x341684u;
    // 0x341684: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x341684u;
    {
        const bool branch_taken_0x341684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341684u;
        // 0x341688: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341684) {
            ctx->pc = 0x3416B8u;
            goto label_3416b8;
        }
    }
    ctx->pc = 0x34168Cu;
label_34168c:
    // 0x34168c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34168Cu;
    {
        const bool branch_taken_0x34168c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x34168c) {
            ctx->pc = 0x3416B8u;
            goto label_3416b8;
        }
    }
    ctx->pc = 0x341694u;
    // 0x341694: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341698: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34169c: 0x2463ecb8  addiu       $v1, $v1, -0x1348
    ctx->pc = 0x34169cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962360));
    // 0x3416a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3416a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3416a4: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x3416a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x3416a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3416ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3416acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3416b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3416b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3416b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3416b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3416b8:
    // 0x3416b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3416B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3416B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3416C0u;
}
