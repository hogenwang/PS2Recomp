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

// Function: sub_001D6568
// Address: 0x1d6568 - 0x1d65b8
void sub_001D6568_0x1d6568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6568_0x1d6568");
#endif

    switch (ctx->pc) {
        case 0x1d658cu: goto label_1d658c;
        default: break;
    }

    ctx->pc = 0x1d6568u;

    // 0x1d6568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d656c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6578: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d6578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d657c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d6580: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d6584: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D6584u;
    SET_GPR_U32(ctx, 31, 0x1D658Cu);
    ctx->pc = 0x1D6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6584u;
    // 0x1d6588: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D6584u, 0x1D658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D658Cu;
label_1d658c:
    // 0x1d658c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D658Cu;
    {
        const bool branch_taken_0x1d658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d658c) {
            ctx->pc = 0x1D6590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D658Cu;
            // 0x1d6590: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D65A0u;
            goto label_1d65a0;
        }
    }
    ctx->pc = 0x1D6594u;
    // 0x1d6594: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x1d6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x1d6598: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x1d6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x1d659c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d659cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d65a0:
    // 0x1d65a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d65a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d65a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d65a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d65a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d65ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65ACu;
        // 0x1d65b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65B4u;
    // 0x1d65b4: 0x0  nop
    ctx->pc = 0x1d65b4u;
    // NOP
    if (ctx->pc == 0x1d65b4u) { ctx->pc = 0x1d65b8u; }
}
