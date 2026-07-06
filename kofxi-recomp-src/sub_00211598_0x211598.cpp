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

// Function: sub_00211598
// Address: 0x211598 - 0x211608
void sub_00211598_0x211598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211598_0x211598");
#endif

    switch (ctx->pc) {
        case 0x211598u: goto label_211598;
        case 0x21159cu: goto label_21159c;
        case 0x2115a0u: goto label_2115a0;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115a8u: goto label_2115a8;
        case 0x2115acu: goto label_2115ac;
        case 0x2115b0u: goto label_2115b0;
        case 0x2115b4u: goto label_2115b4;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115bcu: goto label_2115bc;
        case 0x2115c0u: goto label_2115c0;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115c8u: goto label_2115c8;
        case 0x2115ccu: goto label_2115cc;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d4u: goto label_2115d4;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115dcu: goto label_2115dc;
        case 0x2115e0u: goto label_2115e0;
        case 0x2115e4u: goto label_2115e4;
        case 0x2115e8u: goto label_2115e8;
        case 0x2115ecu: goto label_2115ec;
        case 0x2115f0u: goto label_2115f0;
        case 0x2115f4u: goto label_2115f4;
        case 0x2115f8u: goto label_2115f8;
        case 0x2115fcu: goto label_2115fc;
        case 0x211600u: goto label_211600;
        case 0x211604u: goto label_211604;
        default: break;
    }

    ctx->pc = 0x211598u;

label_211598:
    // 0x211598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21159c:
    // 0x21159c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x21159cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2115a0:
    // 0x2115a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2115a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2115a4:
    // 0x2115a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2115a8:
    // 0x2115a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2115a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2115ac:
    // 0x2115ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2115acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115b0:
    // 0x2115b0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2115b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_2115b4:
    // 0x2115b4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2115b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2115b8:
    // 0x2115b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2115b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2115bc:
    // 0x2115bc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2115c0:
    // 0x2115c0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2115c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_2115c4:
    // 0x2115c4: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
label_2115c8:
    if (ctx->pc == 0x2115C8u) {
        ctx->pc = 0x2115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C4u;
        // 0x2115c8: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115CCu;
        goto label_2115cc;
    }
    ctx->pc = 0x2115C4u;
    {
        const bool branch_taken_0x2115c4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C4u;
        // 0x2115c8: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c4) {
            ctx->pc = 0x2115F4u;
            goto label_2115f4;
        }
    }
    ctx->pc = 0x2115CCu;
label_2115cc:
    // 0x2115cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2115d0:
    // 0x2115d0: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
label_2115d4:
    // 0x2115d4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2115d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
label_2115d8:
    // 0x2115d8: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x2115d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
label_2115dc:
    // 0x2115dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2115e0:
    // 0x2115e0: 0x1a0f809  jalr        $t5
label_2115e4:
    if (ctx->pc == 0x2115E4u) {
        ctx->pc = 0x2115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E0u;
        // 0x2115e4: 0xade0ab60  sw          $zero, -0x54A0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115E8u;
        goto label_2115e8;
    }
    ctx->pc = 0x2115E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        SET_GPR_U32(ctx, 31, 0x2115E8u);
        ctx->pc = 0x2115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E0u;
        // 0x2115e4: 0xade0ab60  sw          $zero, -0x54A0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115E0u, 0x2115E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2115E8u;
label_2115e8:
    // 0x2115e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2115e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115ec:
    // 0x2115ec: 0xc0846c8  jal         func_211B20
label_2115f0:
    if (ctx->pc == 0x2115F0u) {
        ctx->pc = 0x2115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115ECu;
        // 0x2115f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115F4u;
        goto label_2115f4;
    }
    ctx->pc = 0x2115ECu;
    SET_GPR_U32(ctx, 31, 0x2115F4u);
    ctx->pc = 0x2115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115ECu;
    // 0x2115f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211B20u, 0x2115ECu, 0x2115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115F4u;
label_2115f4:
    // 0x2115f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2115f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2115f8:
    // 0x2115f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2115f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2115fc:
    // 0x2115fc: 0x3e00008  jr          $ra
label_211600:
    if (ctx->pc == 0x211600u) {
        ctx->pc = 0x211600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115FCu;
        // 0x211600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211604u;
        goto label_211604;
    }
    ctx->pc = 0x2115FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115FCu;
        // 0x211600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211604u;
label_211604:
    // 0x211604: 0x0  nop
    ctx->pc = 0x211604u;
    // NOP
}
