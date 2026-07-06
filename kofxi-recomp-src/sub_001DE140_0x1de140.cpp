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

// Function: sub_001DE140
// Address: 0x1de140 - 0x1de1d8
void sub_001DE140_0x1de140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE140_0x1de140");
#endif

    switch (ctx->pc) {
        case 0x1de164u: goto label_1de164;
        case 0x1de190u: goto label_1de190;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1c0u: goto label_1de1c0;
        default: break;
    }

    ctx->pc = 0x1de140u;

    // 0x1de140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de154: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1de158: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1de158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1de15c: 0xc07e334  jal         func_1F8CD0
    ctx->pc = 0x1DE15Cu;
    SET_GPR_U32(ctx, 31, 0x1DE164u);
    ctx->pc = 0x1DE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE15Cu;
    // 0x1de160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8CD0u, 0x1DE15Cu, 0x1DE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE164u;
label_1de164:
    // 0x1de164: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1de168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de16c: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x1de16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x1de170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE170u;
    {
        const bool branch_taken_0x1de170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE170u;
        // 0x1de174: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de170) {
            ctx->pc = 0x1DE188u;
            goto label_1de188;
        }
    }
    ctx->pc = 0x1DE178u;
    // 0x1de178: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de17c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DE17Cu;
    {
        const bool branch_taken_0x1de17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE17Cu;
        // 0x1de180: 0x2484c628  addiu       $a0, $a0, -0x39D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de17c) {
            ctx->pc = 0x1DE1A8u;
            goto label_1de1a8;
        }
    }
    ctx->pc = 0x1DE184u;
    // 0x1de184: 0x0  nop
    ctx->pc = 0x1de184u;
    // NOP
label_1de188:
    // 0x1de188: 0xc07b5ec  jal         func_1ED7B0
    ctx->pc = 0x1DE188u;
    SET_GPR_U32(ctx, 31, 0x1DE190u);
    ctx->pc = 0x1DE18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE188u;
    // 0x1de18c: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED7B0u, 0x1DE188u, 0x1DE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE190u;
label_1de190:
    // 0x1de190: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE190u;
    {
        const bool branch_taken_0x1de190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE190u;
        // 0x1de194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de190) {
            ctx->pc = 0x1DE1B8u;
            goto label_1de1b8;
        }
    }
    ctx->pc = 0x1DE198u;
    // 0x1de198: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DE198u;
    SET_GPR_U32(ctx, 31, 0x1DE1A0u);
    ctx->pc = 0x1DE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE198u;
    // 0x1de19c: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1DE198u, 0x1DE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1A0u;
label_1de1a0:
    // 0x1de1a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de1a4: 0x2484c658  addiu       $a0, $a0, -0x39A8
    ctx->pc = 0x1de1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952536));
label_1de1a8:
    // 0x1de1a8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE1A8u;
    SET_GPR_U32(ctx, 31, 0x1DE1B0u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE1A8u, 0x1DE1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B0u;
label_1de1b0:
    // 0x1de1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE1B0u;
    {
        const bool branch_taken_0x1de1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1B0u;
        // 0x1de1b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1b0) {
            ctx->pc = 0x1DE1C4u;
            goto label_1de1c4;
        }
    }
    ctx->pc = 0x1DE1B8u;
label_1de1b8:
    // 0x1de1b8: 0xc077792  jal         func_1DDE48
    ctx->pc = 0x1DE1B8u;
    SET_GPR_U32(ctx, 31, 0x1DE1C0u);
    ctx->pc = 0x1DDE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDE48u, 0x1DE1B8u, 0x1DE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C0u;
label_1de1c0:
    // 0x1de1c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de1c4:
    // 0x1de1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D0u;
        // 0x1de1d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1D8u;
}
