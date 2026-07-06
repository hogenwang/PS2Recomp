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

// Function: sub_002A05B0
// Address: 0x2a05b0 - 0x2a05f0
void sub_002A05B0_0x2a05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A05B0_0x2a05b0");
#endif

    switch (ctx->pc) {
        case 0x2a05b0u: goto label_2a05b0;
        case 0x2a05b4u: goto label_2a05b4;
        case 0x2a05b8u: goto label_2a05b8;
        case 0x2a05bcu: goto label_2a05bc;
        case 0x2a05c0u: goto label_2a05c0;
        case 0x2a05c4u: goto label_2a05c4;
        case 0x2a05c8u: goto label_2a05c8;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05d0u: goto label_2a05d0;
        case 0x2a05d4u: goto label_2a05d4;
        case 0x2a05d8u: goto label_2a05d8;
        case 0x2a05dcu: goto label_2a05dc;
        case 0x2a05e0u: goto label_2a05e0;
        case 0x2a05e4u: goto label_2a05e4;
        case 0x2a05e8u: goto label_2a05e8;
        case 0x2a05ecu: goto label_2a05ec;
        default: break;
    }

    ctx->pc = 0x2a05b0u;

label_2a05b0:
    // 0x2a05b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a05b4:
    // 0x2a05b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a05b8:
    // 0x2a05b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a05bc:
    // 0x2a05bc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a05bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a05c0:
    // 0x2a05c0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a05c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a05c4:
    // 0x2a05c4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2a05c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a05c8:
    // 0x2a05c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a05c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a05cc:
    // 0x2a05cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2a05d0:
    // 0x2a05d0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2a05d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a05d4:
    // 0x2a05d4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2a05d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2a05d8:
    // 0x2a05d8: 0x40f809  jalr        $v0
label_2a05dc:
    if (ctx->pc == 0x2A05DCu) {
        ctx->pc = 0x2A05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05D8u;
        // 0x2a05dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05E0u;
        goto label_2a05e0;
    }
    ctx->pc = 0x2A05D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A05E0u);
        ctx->pc = 0x2A05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05D8u;
        // 0x2a05dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05D8u, 0x2A05E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A05E0u;
label_2a05e0:
    // 0x2a05e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a05e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a05e4:
    // 0x2a05e4: 0x3e00008  jr          $ra
label_2a05e8:
    if (ctx->pc == 0x2A05E8u) {
        ctx->pc = 0x2A05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05E4u;
        // 0x2a05e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05ECu;
        goto label_2a05ec;
    }
    ctx->pc = 0x2A05E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05E4u;
        // 0x2a05e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A05ECu;
label_2a05ec:
    // 0x2a05ec: 0x0  nop
    ctx->pc = 0x2a05ecu;
    // NOP
}
