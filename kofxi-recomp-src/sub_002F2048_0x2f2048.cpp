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

// Function: sub_002F2048
// Address: 0x2f2048 - 0x2f20b8
void sub_002F2048_0x2f2048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2048_0x2f2048");
#endif

    switch (ctx->pc) {
        case 0x2f2068u: goto label_2f2068;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2094u: goto label_2f2094;
        default: break;
    }

    ctx->pc = 0x2f2048u;

    // 0x2f2048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f204c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2058: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2f2058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2f205c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2f205cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2f2060: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x2F2060u;
    SET_GPR_U32(ctx, 31, 0x2F2068u);
    ctx->pc = 0x2F2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2060u;
    // 0x2f2064: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5650u, 0x2F2060u, 0x2F2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2068u;
label_2f2068:
    // 0x2f2068: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x2f2068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2f206c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F206Cu;
    {
        const bool branch_taken_0x2f206c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F206Cu;
        // 0x2f2070: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f206c) {
            ctx->pc = 0x2F2080u;
            goto label_2f2080;
        }
    }
    ctx->pc = 0x2F2074u;
    // 0x2f2074: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2074u;
    SET_GPR_U32(ctx, 31, 0x2F207Cu);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F2074u, 0x2F207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F207Cu;
label_2f207c:
    // 0x2f207c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2f207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2f2080:
    // 0x2f2080: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x2f2080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2f2084: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2084u;
    {
        const bool branch_taken_0x2f2084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2084) {
            ctx->pc = 0x2F2088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2084u;
            // 0x2f2088: 0xfe000110  sd          $zero, 0x110($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F209Cu;
            goto label_2f209c;
        }
    }
    ctx->pc = 0x2F208Cu;
    // 0x2f208c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F208Cu;
    SET_GPR_U32(ctx, 31, 0x2F2094u);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F208Cu, 0x2F2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2094u;
label_2f2094:
    // 0x2f2094: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2f2094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x2f2098: 0xfe000110  sd          $zero, 0x110($s0)
    ctx->pc = 0x2f2098u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 0));
label_2f209c:
    // 0x2f209c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f209cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a0: 0xfe000100  sd          $zero, 0x100($s0)
    ctx->pc = 0x2f20a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 0));
    // 0x2f20a4: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2f20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x2f20a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f20a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f20ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f20acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f20b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F20B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20B0u;
        // 0x2f20b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F20B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F20B8u;
}
