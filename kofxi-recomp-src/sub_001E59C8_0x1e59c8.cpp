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

// Function: sub_001E59C8
// Address: 0x1e59c8 - 0x1e5a50
void sub_001E59C8_0x1e59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E59C8_0x1e59c8");
#endif

    switch (ctx->pc) {
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e5a38u: goto label_1e5a38;
        default: break;
    }

    ctx->pc = 0x1e59c8u;

    // 0x1e59c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e59cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e59d0: 0xc07191e  jal         func_1C6478
    ctx->pc = 0x1E59D0u;
    SET_GPR_U32(ctx, 31, 0x1E59D8u);
    ctx->pc = 0x1C6478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6478u, 0x1E59D0u, 0x1E59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E59D8u;
label_1e59d8:
    // 0x1e59d8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1e59d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1e59dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e59dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e59e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e59e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e59e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E59E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59E4u;
        // 0x1e59e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E59E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E59ECu;
    // 0x1e59ec: 0x0  nop
    ctx->pc = 0x1e59ecu;
    // NOP
label_1e59f0:
    // 0x1e59f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e59f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e59f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e59f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e59f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e59fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E59FCu;
    {
        const bool branch_taken_0x1e59fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59FCu;
        // 0x1e5a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59fc) {
            ctx->pc = 0x1E5A10u;
            goto label_1e5a10;
        }
    }
    ctx->pc = 0x1E5A04u;
    // 0x1e5a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a08: 0x8071a30  j           func_1C68C0
    ctx->pc = 0x1E5A08u;
    ctx->pc = 0x1E5A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A08u;
    // 0x1e5a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C68C0u;
    sub_001C68C0_0x1c68c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5A10u;
label_1e5a10:
    // 0x1e5a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A14u;
        // 0x1e5a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A1Cu;
    // 0x1e5a1c: 0x0  nop
    ctx->pc = 0x1e5a1cu;
    // NOP
    // 0x1e5a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e5a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e5a30: 0xc071a5a  jal         func_1C6968
    ctx->pc = 0x1E5A30u;
    SET_GPR_U32(ctx, 31, 0x1E5A38u);
    ctx->pc = 0x1E5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A30u;
    // 0x1e5a34: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6968u, 0x1E5A30u, 0x1E5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A38u;
label_1e5a38:
    // 0x1e5a38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e5a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A44u;
        // 0x1e5a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A4Cu;
    // 0x1e5a4c: 0x0  nop
    ctx->pc = 0x1e5a4cu;
    // NOP
    if (ctx->pc == 0x1e5a4cu) { ctx->pc = 0x1e5a50u; }
}
