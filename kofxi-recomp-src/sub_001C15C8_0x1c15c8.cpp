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

// Function: sub_001C15C8
// Address: 0x1c15c8 - 0x1c1640
void sub_001C15C8_0x1c15c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C15C8_0x1c15c8");
#endif

    switch (ctx->pc) {
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15fcu: goto label_1c15fc;
        case 0x1c1618u: goto label_1c1618;
        case 0x1c1620u: goto label_1c1620;
        default: break;
    }

    ctx->pc = 0x1c15c8u;

    // 0x1c15c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c15cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c15ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c15d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c15d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c15d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c15d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c15d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c15e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c15e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c15e4: 0xc070506  jal         func_1C1418
    ctx->pc = 0x1C15E4u;
    SET_GPR_U32(ctx, 31, 0x1C15ECu);
    ctx->pc = 0x1C15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15E4u;
    // 0x1c15e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1418u, 0x1C15E4u, 0x1C15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ECu;
label_1c15ec:
    // 0x1c15ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c15ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c15f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15f4: 0xc044b3a  jal         func_112CE8
    ctx->pc = 0x1C15F4u;
    SET_GPR_U32(ctx, 31, 0x1C15FCu);
    ctx->pc = 0x1C15F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15F4u;
    // 0x1c15f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112CE8u, 0x1C15F4u, 0x1C15FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15FCu;
label_1c15fc:
    // 0x1c15fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1604: 0x248499f0  addiu       $a0, $a0, -0x6610
    ctx->pc = 0x1c1604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x1c1608: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1608u;
    {
        const bool branch_taken_0x1c1608 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1608u;
        // 0x1c160c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1608) {
            ctx->pc = 0x1C1618u;
            goto label_1c1618;
        }
    }
    ctx->pc = 0x1C1610u;
    // 0x1c1610: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1610u;
    SET_GPR_U32(ctx, 31, 0x1C1618u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C1610u, 0x1C1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1618u;
label_1c1618:
    // 0x1c1618: 0xc070514  jal         func_1C1450
    ctx->pc = 0x1C1618u;
    SET_GPR_U32(ctx, 31, 0x1C1620u);
    ctx->pc = 0x1C1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1450u, 0x1C1618u, 0x1C1620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1620u;
label_1c1620:
    // 0x1c1620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c162c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c162cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1630: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1634: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1634u;
        // 0x1c1638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C163Cu;
    // 0x1c163c: 0x0  nop
    ctx->pc = 0x1c163cu;
    // NOP
}
