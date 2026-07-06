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

// Function: sub_0018DCC0
// Address: 0x18dcc0 - 0x18dd20
void sub_0018DCC0_0x18dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DCC0_0x18dcc0");
#endif

    switch (ctx->pc) {
        case 0x18dce4u: goto label_18dce4;
        case 0x18dcf4u: goto label_18dcf4;
        default: break;
    }

    ctx->pc = 0x18dcc0u;

    // 0x18dcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dcc4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18dcc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18dcc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dccc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18dcd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dcd4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DCD4u;
    {
        const bool branch_taken_0x18dcd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD4u;
        // 0x18dcd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcd4) {
            ctx->pc = 0x18DCECu;
            goto label_18dcec;
        }
    }
    ctx->pc = 0x18DCDCu;
    // 0x18dcdc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x18DCDCu;
    SET_GPR_U32(ctx, 31, 0x18DCE4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x18DCDCu, 0x18DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE4u;
label_18dce4:
    // 0x18dce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DCE4u;
    {
        const bool branch_taken_0x18dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dce4) {
            ctx->pc = 0x18DCF4u;
            goto label_18dcf4;
        }
    }
    ctx->pc = 0x18DCECu;
label_18dcec:
    // 0x18dcec: 0xc063708  jal         func_18DC20
    ctx->pc = 0x18DCECu;
    SET_GPR_U32(ctx, 31, 0x18DCF4u);
    ctx->pc = 0x18DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC20u, 0x18DCECu, 0x18DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCF4u;
label_18dcf4:
    // 0x18dcf4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DCF4u;
    {
        const bool branch_taken_0x18dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcf4) {
            ctx->pc = 0x18DCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DCF4u;
            // 0x18dcf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD10u;
            goto label_18dd10;
        }
    }
    ctx->pc = 0x18DCFCu;
    // 0x18dcfc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18dcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18dd00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dd04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dd08: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18dd08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dd0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dd10:
    // 0x18dd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18dd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd18: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD18u;
        // 0x18dd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD20u;
}
