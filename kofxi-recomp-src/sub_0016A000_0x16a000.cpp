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

// Function: sub_0016A000
// Address: 0x16a000 - 0x16a050
void sub_0016A000_0x16a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A000_0x16a000");
#endif

    switch (ctx->pc) {
        case 0x16a018u: goto label_16a018;
        case 0x16a024u: goto label_16a024;
        default: break;
    }

    ctx->pc = 0x16a000u;

    // 0x16a000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a010: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x16A010u;
    SET_GPR_U32(ctx, 31, 0x16A018u);
    ctx->pc = 0x16A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A010u;
    // 0x16a014: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x16A010u, 0x16A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A018u;
label_16a018:
    // 0x16a018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a01c: 0xc059cb0  jal         func_1672C0
    ctx->pc = 0x16A01Cu;
    SET_GPR_U32(ctx, 31, 0x16A024u);
    ctx->pc = 0x16A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A01Cu;
    // 0x16a020: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672C0u, 0x16A01Cu, 0x16A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A024u;
label_16a024:
    // 0x16a024: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A024u;
    {
        const bool branch_taken_0x16a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a024) {
            ctx->pc = 0x16A028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A024u;
            // 0x16a028: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A03Cu;
            goto label_16a03c;
        }
    }
    ctx->pc = 0x16A02Cu;
    // 0x16a02c: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x16a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x16a030: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16a034: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x16a034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
    // 0x16a038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a03c:
    // 0x16a03c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a044: 0x3e00008  jr          $ra
    ctx->pc = 0x16A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A044u;
        // 0x16a048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A04Cu;
    // 0x16a04c: 0x0  nop
    ctx->pc = 0x16a04cu;
    // NOP
}
