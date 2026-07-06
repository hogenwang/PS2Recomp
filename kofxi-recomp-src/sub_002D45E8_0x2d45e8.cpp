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

// Function: sub_002D45E8
// Address: 0x2d45e8 - 0x2d4640
void sub_002D45E8_0x2d45e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D45E8_0x2d45e8");
#endif

    switch (ctx->pc) {
        case 0x2d4614u: goto label_2d4614;
        default: break;
    }

    ctx->pc = 0x2d45e8u;

    // 0x2d45e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d45e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d45ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d45f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d45f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d45f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d45f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d45fc: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x2d45fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d4600: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4600u;
    {
        const bool branch_taken_0x2d4600 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4600u;
        // 0x2d4604: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4600) {
            ctx->pc = 0x2D4620u;
            goto label_2d4620;
        }
    }
    ctx->pc = 0x2D4608u;
    // 0x2d4608: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d460c: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2D460Cu;
    SET_GPR_U32(ctx, 31, 0x2D4614u);
    ctx->pc = 0x2D4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D460Cu;
    // 0x2d4610: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8288u, 0x2D460Cu, 0x2D4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4614u;
label_2d4614:
    // 0x2d4614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4614u;
    {
        const bool branch_taken_0x2d4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4614u;
        // 0x2d4618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4614) {
            ctx->pc = 0x2D4634u;
            goto label_2d4634;
        }
    }
    ctx->pc = 0x2D461Cu;
    // 0x2d461c: 0x0  nop
    ctx->pc = 0x2d461cu;
    // NOP
label_2d4620:
    // 0x2d4620: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d4624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4628: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2d4628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2d462c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d462cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4630: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x2d4630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
label_2d4634:
    // 0x2d4634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4638: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4638u;
        // 0x2d463c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4640u;
}
