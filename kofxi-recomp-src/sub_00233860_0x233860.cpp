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

// Function: sub_00233860
// Address: 0x233860 - 0x2338d8
void sub_00233860_0x233860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233860_0x233860");
#endif

    switch (ctx->pc) {
        case 0x233884u: goto label_233884;
        case 0x233898u: goto label_233898;
        case 0x2338acu: goto label_2338ac;
        case 0x2338c0u: goto label_2338c0;
        default: break;
    }

    ctx->pc = 0x233860u;

    // 0x233860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23386c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23386cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233870: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233874: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x233874u;
    {
        const bool branch_taken_0x233874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233874) {
            ctx->pc = 0x233878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233874u;
            // 0x233878: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338B0u;
            goto label_2338b0;
        }
    }
    ctx->pc = 0x23387Cu;
    // 0x23387c: 0xc098560  jal         func_261580
    ctx->pc = 0x23387Cu;
    SET_GPR_U32(ctx, 31, 0x233884u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x23387Cu, 0x233884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233884u;
label_233884:
    // 0x233884: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x233888: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233888u;
    {
        const bool branch_taken_0x233888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233888) {
            ctx->pc = 0x23388Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233888u;
            // 0x23388c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23389Cu;
            goto label_23389c;
        }
    }
    ctx->pc = 0x233890u;
    // 0x233890: 0xc098560  jal         func_261580
    ctx->pc = 0x233890u;
    SET_GPR_U32(ctx, 31, 0x233898u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x233890u, 0x233898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233898u;
label_233898:
    // 0x233898: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23389c:
    // 0x23389c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23389Cu;
    {
        const bool branch_taken_0x23389c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23389c) {
            ctx->pc = 0x2338A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23389Cu;
            // 0x2338a0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338B0u;
            goto label_2338b0;
        }
    }
    ctx->pc = 0x2338A4u;
    // 0x2338a4: 0xc098560  jal         func_261580
    ctx->pc = 0x2338A4u;
    SET_GPR_U32(ctx, 31, 0x2338ACu);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2338A4u, 0x2338ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338ACu;
label_2338ac:
    // 0x2338ac: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2338b0:
    // 0x2338b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2338B0u;
    {
        const bool branch_taken_0x2338b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2338b0) {
            ctx->pc = 0x2338B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338B0u;
            // 0x2338b4: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338C4u;
            goto label_2338c4;
        }
    }
    ctx->pc = 0x2338B8u;
    // 0x2338b8: 0xc098560  jal         func_261580
    ctx->pc = 0x2338B8u;
    SET_GPR_U32(ctx, 31, 0x2338C0u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2338B8u, 0x2338C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x2338c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_2338c4:
    // 0x2338c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2338c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2338c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2338c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2338cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2338CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2338D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338CCu;
        // 0x2338d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2338CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2338D4u;
    // 0x2338d4: 0x0  nop
    ctx->pc = 0x2338d4u;
    // NOP
    if (ctx->pc == 0x2338d4u) { ctx->pc = 0x2338d8u; }
}
