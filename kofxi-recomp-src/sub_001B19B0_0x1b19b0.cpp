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

// Function: sub_001B19B0
// Address: 0x1b19b0 - 0x1b1a20
void sub_001B19B0_0x1b19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B19B0_0x1b19b0");
#endif

    switch (ctx->pc) {
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b19fcu: goto label_1b19fc;
        case 0x1b1a04u: goto label_1b1a04;
        case 0x1b1a0cu: goto label_1b1a0c;
        default: break;
    }

    ctx->pc = 0x1b19b0u;

    // 0x1b19b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b19b4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B19B4u;
    {
        const bool branch_taken_0x1b19b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B4u;
        // 0x1b19b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19b4) {
            ctx->pc = 0x1B19D8u;
            goto label_1b19d8;
        }
    }
    ctx->pc = 0x1B19BCu;
    // 0x1b19bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b19c0: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B19C0u;
    SET_GPR_U32(ctx, 31, 0x1B19C8u);
    ctx->pc = 0x1B19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19C0u;
    // 0x1b19c4: 0x24847b10  addiu       $a0, $a0, 0x7B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B19C0u, 0x1B19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19C8u;
label_1b19c8:
    // 0x1b19c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b19c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b19ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B19D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19D0u;
        // 0x1b19d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B19D8u;
label_1b19d8:
    // 0x1b19d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b19d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19dc: 0x806dec0  j           func_1B7B00
    ctx->pc = 0x1B19DCu;
    ctx->pc = 0x1B19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19DCu;
    // 0x1b19e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B00u, 0x1B19DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B19E4u;
    // 0x1b19e4: 0x0  nop
    ctx->pc = 0x1b19e4u;
    // NOP
    // 0x1b19e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b19ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b19ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b19f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b19f4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B19F4u;
    SET_GPR_U32(ctx, 31, 0x1B19FCu);
    ctx->pc = 0x1B19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19F4u;
    // 0x1b19f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B19F4u, 0x1B19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19FCu;
label_1b19fc:
    // 0x1b19fc: 0xc06c688  jal         func_1B1A20
    ctx->pc = 0x1B19FCu;
    SET_GPR_U32(ctx, 31, 0x1B1A04u);
    ctx->pc = 0x1B1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19FCu;
    // 0x1b1a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A20u, 0x1B19FCu, 0x1B1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A04u;
label_1b1a04:
    // 0x1b1a04: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1A04u;
    SET_GPR_U32(ctx, 31, 0x1B1A0Cu);
    ctx->pc = 0x1B1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A04u;
    // 0x1b1a08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B1A04u, 0x1B1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A0Cu;
label_1b1a0c:
    // 0x1b1a0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A18u;
        // 0x1b1a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1A20u;
}
