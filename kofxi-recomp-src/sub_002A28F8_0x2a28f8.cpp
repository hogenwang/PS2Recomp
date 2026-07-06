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

// Function: sub_002A28F8
// Address: 0x2a28f8 - 0x2a2940
void sub_002A28F8_0x2a28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A28F8_0x2a28f8");
#endif

    switch (ctx->pc) {
        case 0x2a28f8u: goto label_2a28f8;
        case 0x2a28fcu: goto label_2a28fc;
        case 0x2a2900u: goto label_2a2900;
        case 0x2a2904u: goto label_2a2904;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a290cu: goto label_2a290c;
        case 0x2a2910u: goto label_2a2910;
        case 0x2a2914u: goto label_2a2914;
        case 0x2a2918u: goto label_2a2918;
        case 0x2a291cu: goto label_2a291c;
        case 0x2a2920u: goto label_2a2920;
        case 0x2a2924u: goto label_2a2924;
        case 0x2a2928u: goto label_2a2928;
        case 0x2a292cu: goto label_2a292c;
        case 0x2a2930u: goto label_2a2930;
        case 0x2a2934u: goto label_2a2934;
        case 0x2a2938u: goto label_2a2938;
        case 0x2a293cu: goto label_2a293c;
        default: break;
    }

    ctx->pc = 0x2a28f8u;

label_2a28f8:
    // 0x2a28f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a28fc:
    // 0x2a28fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a28fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2900:
    // 0x2a2900: 0x8c426980  lw          $v0, 0x6980($v0)
    ctx->pc = 0x2a2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27008)));
label_2a2904:
    // 0x2a2904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a2908:
    if (ctx->pc == 0x2A2908u) {
        ctx->pc = 0x2A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2904u;
        // 0x2a2908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A290Cu;
        goto label_2a290c;
    }
    ctx->pc = 0x2A2904u;
    {
        const bool branch_taken_0x2a2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2904u;
        // 0x2a2908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2904) {
            ctx->pc = 0x2A291Cu;
            goto label_2a291c;
        }
    }
    ctx->pc = 0x2A290Cu;
label_2a290c:
    // 0x2a290c: 0x40f809  jalr        $v0
label_2a2910:
    if (ctx->pc == 0x2A2910u) {
        ctx->pc = 0x2A2914u;
        goto label_2a2914;
    }
    ctx->pc = 0x2A290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A290Cu, 0x2A2914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2914u;
label_2a2914:
    // 0x2a2914: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a2918:
    if (ctx->pc == 0x2A2918u) {
        ctx->pc = 0x2A2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2914u;
        // 0x2a2918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A291Cu;
        goto label_2a291c;
    }
    ctx->pc = 0x2A2914u;
    {
        const bool branch_taken_0x2a2914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2914u;
        // 0x2a2918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2914) {
            ctx->pc = 0x2A2924u;
            goto label_2a2924;
        }
    }
    ctx->pc = 0x2A291Cu;
label_2a291c:
    // 0x2a291c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a291cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2920:
    // 0x2a2920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2924:
    // 0x2a2924: 0x3e00008  jr          $ra
label_2a2928:
    if (ctx->pc == 0x2A2928u) {
        ctx->pc = 0x2A2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2924u;
        // 0x2a2928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A292Cu;
        goto label_2a292c;
    }
    ctx->pc = 0x2A2924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2924u;
        // 0x2a2928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A292Cu;
label_2a292c:
    // 0x2a292c: 0x0  nop
    ctx->pc = 0x2a292cu;
    // NOP
label_2a2930:
    // 0x2a2930: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2934:
    // 0x2a2934: 0x3e00008  jr          $ra
label_2a2938:
    if (ctx->pc == 0x2A2938u) {
        ctx->pc = 0x2A2938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2934u;
        // 0x2a2938: 0x8c626980  lw          $v0, 0x6980($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A293Cu;
        goto label_2a293c;
    }
    ctx->pc = 0x2A2934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2934u;
        // 0x2a2938: 0x8c626980  lw          $v0, 0x6980($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27008)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A293Cu;
label_2a293c:
    // 0x2a293c: 0x0  nop
    ctx->pc = 0x2a293cu;
    // NOP
    if (ctx->pc == 0x2a293cu) { ctx->pc = 0x2a2940u; }
}
