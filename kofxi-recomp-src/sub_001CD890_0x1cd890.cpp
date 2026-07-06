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

// Function: sub_001CD890
// Address: 0x1cd890 - 0x1cd908
void sub_001CD890_0x1cd890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD890_0x1cd890");
#endif

    switch (ctx->pc) {
        case 0x1cd8c4u: goto label_1cd8c4;
        case 0x1cd8e4u: goto label_1cd8e4;
        default: break;
    }

    ctx->pc = 0x1cd890u;

    // 0x1cd890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd894: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cd898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd89c: 0x2463d9ec  addiu       $v1, $v1, -0x2614
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957548));
    // 0x1cd8a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd8a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd8a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd8ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD8ACu;
    {
        const bool branch_taken_0x1cd8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8ACu;
        // 0x1cd8b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8ac) {
            ctx->pc = 0x1CD8F8u;
            goto label_1cd8f8;
        }
    }
    ctx->pc = 0x1CD8B4u;
    // 0x1cd8b4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1cd8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1cd8b8: 0x2610dc80  addiu       $s0, $s0, -0x2380
    ctx->pc = 0x1cd8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1cd8bc: 0xc070896  jal         func_1C2258
    ctx->pc = 0x1CD8BCu;
    SET_GPR_U32(ctx, 31, 0x1CD8C4u);
    ctx->pc = 0x1CD8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8BCu;
    // 0x1cd8c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2258u, 0x1CD8BCu, 0x1CD8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8C4u;
label_1cd8c4:
    // 0x1cd8c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cd8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cd8c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd8cc: 0x2450d9f4  addiu       $s0, $v0, -0x260C
    ctx->pc = 0x1cd8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957556));
    // 0x1cd8d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd8d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD8D4u;
    {
        const bool branch_taken_0x1cd8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8D4u;
        // 0x1cd8d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8d4) {
            ctx->pc = 0x1CD8E8u;
            goto label_1cd8e8;
        }
    }
    ctx->pc = 0x1CD8DCu;
    // 0x1cd8dc: 0xc0454a2  jal         func_115288
    ctx->pc = 0x1CD8DCu;
    SET_GPR_U32(ctx, 31, 0x1CD8E4u);
    ctx->pc = 0x115288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115288u, 0x1CD8DCu, 0x1CD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8E4u;
label_1cd8e4:
    // 0x1cd8e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cd8e8:
    // 0x1cd8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd8ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd8f0: 0x8070950  j           func_1C2540
    ctx->pc = 0x1CD8F0u;
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8F0u;
    // 0x1cd8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2540u;
    sub_001C2540_0x1c2540(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd900: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD900u;
        // 0x1cd904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD908u;
}
