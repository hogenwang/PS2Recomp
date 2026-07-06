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

// Function: sub_002320C8
// Address: 0x2320c8 - 0x232128
void sub_002320C8_0x2320c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002320C8_0x2320c8");
#endif

    switch (ctx->pc) {
        case 0x232118u: goto label_232118;
        default: break;
    }

    ctx->pc = 0x2320c8u;

    // 0x2320c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2320cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2320ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2320d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2320d4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2320D4u;
    {
        const bool branch_taken_0x2320d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320D4u;
        // 0x2320d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d4) {
            ctx->pc = 0x2320E4u;
            goto label_2320e4;
        }
    }
    ctx->pc = 0x2320DCu;
    // 0x2320dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2320DCu;
    {
        const bool branch_taken_0x2320dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320DCu;
        // 0x2320e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320dc) {
            ctx->pc = 0x23211Cu;
            goto label_23211c;
        }
    }
    ctx->pc = 0x2320E4u;
label_2320e4:
    // 0x2320e4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2320E4u;
    {
        const bool branch_taken_0x2320e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320E4u;
        // 0x2320e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320e4) {
            ctx->pc = 0x23211Cu;
            goto label_23211c;
        }
    }
    ctx->pc = 0x2320ECu;
    // 0x2320ec: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2320ECu;
    {
        const bool branch_taken_0x2320ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2320ec) {
            ctx->pc = 0x2320F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2320ECu;
            // 0x2320f0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2320FCu;
            goto label_2320fc;
        }
    }
    ctx->pc = 0x2320F4u;
    // 0x2320f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2320F4u;
    {
        const bool branch_taken_0x2320f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F4u;
        // 0x2320f8: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320f4) {
            ctx->pc = 0x23211Cu;
            goto label_23211c;
        }
    }
    ctx->pc = 0x2320FCu;
label_2320fc:
    // 0x2320fc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2320fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x232100: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232100u;
    {
        const bool branch_taken_0x232100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232100u;
        // 0x232104: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232100) {
            ctx->pc = 0x23211Cu;
            goto label_23211c;
        }
    }
    ctx->pc = 0x232108u;
    // 0x232108: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x232108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x23210c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x23210cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232110: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x232110u;
    SET_GPR_U32(ctx, 31, 0x232118u);
    ctx->pc = 0x232114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232110u;
    // 0x232114: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x232110u, 0x232118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232118u;
label_232118:
    // 0x232118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23211c:
    // 0x23211c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232120: 0x3e00008  jr          $ra
    ctx->pc = 0x232120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232120u;
        // 0x232124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232128u;
}
