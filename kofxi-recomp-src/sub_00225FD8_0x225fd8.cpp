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

// Function: sub_00225FD8
// Address: 0x225fd8 - 0x226068
void sub_00225FD8_0x225fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225FD8_0x225fd8");
#endif

    switch (ctx->pc) {
        case 0x22601cu: goto label_22601c;
        case 0x226050u: goto label_226050;
        default: break;
    }

    ctx->pc = 0x225fd8u;

    // 0x225fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225fdc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x225fdcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225fe4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x225fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ff0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x225FF0u;
    {
        const bool branch_taken_0x225ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FF0u;
        // 0x225ff4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ff0) {
            ctx->pc = 0x226020u;
            goto label_226020;
        }
    }
    ctx->pc = 0x225FF8u;
    // 0x225ff8: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x225FF8u;
    {
        const bool branch_taken_0x225ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ff8) {
            ctx->pc = 0x225FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225FF8u;
            // 0x225ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226024u;
            goto label_226024;
        }
    }
    ctx->pc = 0x226000u;
    // 0x226000: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x226000u;
    {
        const bool branch_taken_0x226000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226000u;
        // 0x226004: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226000) {
            ctx->pc = 0x226020u;
            goto label_226020;
        }
    }
    ctx->pc = 0x226008u;
    // 0x226008: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x226008u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x22600c: 0xade60008  sw          $a2, 0x8($t7)
    ctx->pc = 0x22600cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 6));
    // 0x226010: 0xadee0004  sw          $t6, 0x4($t7)
    ctx->pc = 0x226010u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 14));
    // 0x226014: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x226014u;
    SET_GPR_U32(ctx, 31, 0x22601Cu);
    ctx->pc = 0x226018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226014u;
    // 0x226018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x226014u, 0x22601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22601Cu;
label_22601c:
    // 0x22601c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22601cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226020:
    // 0x226020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226024:
    // 0x226024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x226024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226028: 0x3e00008  jr          $ra
    ctx->pc = 0x226028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226028u;
        // 0x22602c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226030u;
    // 0x226030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22603c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226044: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x226044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226048: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x226048u;
    SET_GPR_U32(ctx, 31, 0x226050u);
    ctx->pc = 0x22604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226048u;
    // 0x22604c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x226048u, 0x226050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x226054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22605c: 0x3e00008  jr          $ra
    ctx->pc = 0x22605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22605Cu;
        // 0x226060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226064u;
    // 0x226064: 0x0  nop
    ctx->pc = 0x226064u;
    // NOP
    if (ctx->pc == 0x226064u) { ctx->pc = 0x226068u; }
}
