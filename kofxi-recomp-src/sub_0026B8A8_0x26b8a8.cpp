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

// Function: sub_0026B8A8
// Address: 0x26b8a8 - 0x26b910
void sub_0026B8A8_0x26b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B8A8_0x26b8a8");
#endif

    switch (ctx->pc) {
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8e8u: goto label_26b8e8;
        default: break;
    }

    ctx->pc = 0x26b8a8u;

    // 0x26b8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b8b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26b8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b8bc: 0xc09a060  jal         func_268180
    ctx->pc = 0x26B8BCu;
    SET_GPR_U32(ctx, 31, 0x26B8C4u);
    ctx->pc = 0x26B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8BCu;
    // 0x26b8c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26B8BCu, 0x26B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8C4u;
label_26b8c4:
    // 0x26b8c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B8C4u;
    {
        const bool branch_taken_0x26b8c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C4u;
        // 0x26b8c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8c4) {
            ctx->pc = 0x26B8D4u;
            goto label_26b8d4;
        }
    }
    ctx->pc = 0x26B8CCu;
    // 0x26b8cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26B8CCu;
    {
        const bool branch_taken_0x26b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8CCu;
        // 0x26b8d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8cc) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8D4u;
label_26b8d4:
    // 0x26b8d4: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B8D4u;
    {
        const bool branch_taken_0x26b8d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b8d4) {
            ctx->pc = 0x26B8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B8D4u;
            // 0x26b8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8DCu;
    // 0x26b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8e0: 0xc099f30  jal         func_267CC0
    ctx->pc = 0x26B8E0u;
    SET_GPR_U32(ctx, 31, 0x26B8E8u);
    ctx->pc = 0x26B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8E0u;
    // 0x26b8e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267CC0u, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26b8e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8ec: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B8ECu;
    {
        const bool branch_taken_0x26b8ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8ECu;
        // 0x26b8f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8ec) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8F4u;
    // 0x26b8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b8f8:
    // 0x26b8f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b8fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b904: 0x3e00008  jr          $ra
    ctx->pc = 0x26B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B904u;
        // 0x26b908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B90Cu;
    // 0x26b90c: 0x0  nop
    ctx->pc = 0x26b90cu;
    // NOP
}
