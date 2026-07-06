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

// Function: sub_00293FC8
// Address: 0x293fc8 - 0x294050
void sub_00293FC8_0x293fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293FC8_0x293fc8");
#endif

    switch (ctx->pc) {
        case 0x293ff8u: goto label_293ff8;
        case 0x294014u: goto label_294014;
        case 0x294028u: goto label_294028;
        default: break;
    }

    ctx->pc = 0x293fc8u;

    // 0x293fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x293fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fd4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x293FD4u;
    {
        const bool branch_taken_0x293fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FD4u;
        // 0x293fd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fd4) {
            ctx->pc = 0x29403Cu;
            goto label_29403c;
        }
    }
    ctx->pc = 0x293FDCu;
    // 0x293fdc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x293fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x293fe0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x293fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x293fe4: 0x24e7b400  addiu       $a3, $a3, -0x4C00
    ctx->pc = 0x293fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947840));
    // 0x293fe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x293fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293fec: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x293fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x293ff0: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x293FF0u;
    SET_GPR_U32(ctx, 31, 0x293FF8u);
    ctx->pc = 0x293FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FF0u;
    // 0x293ff4: 0x24080070  addiu       $t0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x293FF0u, 0x293FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FF8u;
label_293ff8:
    // 0x293ff8: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x293FF8u;
    {
        const bool branch_taken_0x293ff8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x293FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF8u;
        // 0x293ffc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ff8) {
            ctx->pc = 0x294040u;
            goto label_294040;
        }
    }
    ctx->pc = 0x294000u;
    // 0x294000: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294004: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x294004u;
    {
        const bool branch_taken_0x294004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294004) {
            ctx->pc = 0x294008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294004u;
            // 0x294008: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294018u;
            goto label_294018;
        }
    }
    ctx->pc = 0x29400Cu;
    // 0x29400c: 0xc0a80c2  jal         func_2A0308
    ctx->pc = 0x29400Cu;
    SET_GPR_U32(ctx, 31, 0x294014u);
    ctx->pc = 0x2A0308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0308u, 0x29400Cu, 0x294014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294014u;
label_294014:
    // 0x294014: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_294018:
    // 0x294018: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x294018u;
    {
        const bool branch_taken_0x294018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294018) {
            ctx->pc = 0x29401Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294018u;
            // 0x29401c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29402Cu;
            goto label_29402c;
        }
    }
    ctx->pc = 0x294020u;
    // 0x294020: 0xc0a88d0  jal         func_2A2340
    ctx->pc = 0x294020u;
    SET_GPR_U32(ctx, 31, 0x294028u);
    ctx->pc = 0x2A2340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2340u, 0x294020u, 0x294028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294028u;
label_294028:
    // 0x294028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29402c:
    // 0x29402c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294034: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x294034u;
    ctx->pc = 0x294038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294034u;
    // 0x294038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x29403Cu;
label_29403c:
    // 0x29403c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_294040:
    // 0x294040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294044: 0x3e00008  jr          $ra
    ctx->pc = 0x294044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294044u;
        // 0x294048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29404Cu;
    // 0x29404c: 0x0  nop
    ctx->pc = 0x29404cu;
    // NOP
}
