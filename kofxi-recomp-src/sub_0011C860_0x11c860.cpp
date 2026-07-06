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

// Function: sub_0011C860
// Address: 0x11c860 - 0x11c918
void sub_0011C860_0x11c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C860_0x11c860");
#endif

    switch (ctx->pc) {
        case 0x11c87cu: goto label_11c87c;
        case 0x11c8bcu: goto label_11c8bc;
        case 0x11c8d0u: goto label_11c8d0;
        case 0x11c8fcu: goto label_11c8fc;
        default: break;
    }

    ctx->pc = 0x11c860u;

    // 0x11c860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c864: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c86c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c870: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c874: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11C874u;
    SET_GPR_U32(ctx, 31, 0x11C87Cu);
    ctx->pc = 0x11C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C874u;
    // 0x11c878: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA80u, 0x11C874u, 0x11C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C87Cu;
label_11c87c:
    // 0x11c87c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C87Cu;
    {
        const bool branch_taken_0x11c87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C87Cu;
        // 0x11c880: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c87c) {
            ctx->pc = 0x11C88Cu;
            goto label_11c88c;
        }
    }
    ctx->pc = 0x11C884u;
    // 0x11c884: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11C884u;
    {
        const bool branch_taken_0x11c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C884u;
        // 0x11c888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c884) {
            ctx->pc = 0x11C900u;
            goto label_11c900;
        }
    }
    ctx->pc = 0x11C88Cu;
label_11c88c:
    // 0x11c88c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c890: 0x2450afc0  addiu       $s0, $v0, -0x5040
    ctx->pc = 0x11c890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11c894: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11c898: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c89c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x11c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11c8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11c8acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8b0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x11c8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c8b4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C8B4u;
    SET_GPR_U32(ctx, 31, 0x11C8BCu);
    ctx->pc = 0x11C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8B4u;
    // 0x11c8b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C8B4u, 0x11C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8BCu;
label_11c8bc:
    // 0x11c8bc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C8BCu;
    {
        const bool branch_taken_0x11c8bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8BCu;
        // 0x11c8c0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8bc) {
            ctx->pc = 0x11C8D8u;
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8C4u;
    // 0x11c8c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c8c8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C8C8u;
    SET_GPR_U32(ctx, 31, 0x11C8D0u);
    ctx->pc = 0x11C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8C8u;
    // 0x11c8cc: 0x8c449dec  lw          $a0, -0x6214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C8C8u, 0x11C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8D0u;
label_11c8d0:
    // 0x11c8d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C8D0u;
    {
        const bool branch_taken_0x11c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8D0u;
        // 0x11c8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8d0) {
            ctx->pc = 0x11C900u;
            goto label_11c900;
        }
    }
    ctx->pc = 0x11C8D8u;
label_11c8d8:
    // 0x11c8d8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11c8dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c8e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x11c8e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c8e8: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x11c8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x11c8ec: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c8f0: 0x8ca49dec  lw          $a0, -0x6214($a1)
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942188)));
    // 0x11c8f4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C8F4u;
    SET_GPR_U32(ctx, 31, 0x11C8FCu);
    ctx->pc = 0x11C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8F4u;
    // 0x11c8f8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C8F4u, 0x11C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8FCu;
label_11c8fc:
    // 0x11c8fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c900:
    // 0x11c900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c904: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c908: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C90Cu;
        // 0x11c910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C914u;
    // 0x11c914: 0x0  nop
    ctx->pc = 0x11c914u;
    // NOP
    if (ctx->pc == 0x11c914u) { ctx->pc = 0x11c918u; }
}
