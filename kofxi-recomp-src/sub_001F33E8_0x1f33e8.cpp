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

// Function: sub_001F33E8
// Address: 0x1f33e8 - 0x1f34d8
void sub_001F33E8_0x1f33e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F33E8_0x1f33e8");
#endif

    switch (ctx->pc) {
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f34acu: goto label_1f34ac;
        default: break;
    }

    ctx->pc = 0x1f33e8u;

    // 0x1f33e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f33ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f33ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f33f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f33f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f33f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f33f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f33f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f33fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3400: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f3400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f3404: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f3408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f340c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f3410: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f3410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f3414: 0x8e552018  lw          $s5, 0x2018($s2)
    ctx->pc = 0x1f3414u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8216)));
    // 0x1f3418: 0xc07cd36  jal         func_1F34D8
    ctx->pc = 0x1F3418u;
    SET_GPR_U32(ctx, 31, 0x1F3420u);
    ctx->pc = 0x1F341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3418u;
    // 0x1f341c: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34D8u, 0x1F3418u, 0x1F3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3420u;
label_1f3420:
    // 0x1f3420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f342c: 0xc072ff8  jal         func_1CBFE0
    ctx->pc = 0x1F342Cu;
    SET_GPR_U32(ctx, 31, 0x1F3434u);
    ctx->pc = 0x1F3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F342Cu;
    // 0x1f3430: 0x26b6008c  addiu       $s6, $s5, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F342Cu, 0x1F3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3434u;
label_1f3434:
    // 0x1f3434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f343c: 0xc076706  jal         func_1D9C18
    ctx->pc = 0x1F343Cu;
    SET_GPR_U32(ctx, 31, 0x1F3444u);
    ctx->pc = 0x1F3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F343Cu;
    // 0x1f3440: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C18u, 0x1F343Cu, 0x1F3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3444u;
label_1f3444:
    // 0x1f3444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f344c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3450: 0xc072ff8  jal         func_1CBFE0
    ctx->pc = 0x1F3450u;
    SET_GPR_U32(ctx, 31, 0x1F3458u);
    ctx->pc = 0x1F3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3450u;
    // 0x1f3454: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F3450u, 0x1F3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3458u;
label_1f3458:
    // 0x1f3458: 0x548823  subu        $s1, $v0, $s4
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f345c: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x1f3460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3468: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f346c: 0xc07c61c  jal         func_1F1870
    ctx->pc = 0x1F346Cu;
    SET_GPR_U32(ctx, 31, 0x1F3474u);
    ctx->pc = 0x1F3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F346Cu;
    // 0x1f3470: 0x34e70f07  ori         $a3, $a3, 0xF07 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3847);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1870u, 0x1F346Cu, 0x1F3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3474u;
label_1f3474:
    // 0x1f3474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f347c: 0xc07c5f2  jal         func_1F17C8
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x1F3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F347Cu;
    // 0x1f3480: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F17C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F17C8u, 0x1F347Cu, 0x1F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f3484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f348c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F348Cu;
    {
        const bool branch_taken_0x1f348c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F348Cu;
        // 0x1f3490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f348c) {
            ctx->pc = 0x1F34B0u;
            goto label_1f34b0;
        }
    }
    ctx->pc = 0x1F3494u;
    // 0x1f3494: 0x82c20058  lb          $v0, 0x58($s6)
    ctx->pc = 0x1f3494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1f3498: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3498u;
    {
        const bool branch_taken_0x1f3498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3498u;
        // 0x1f349c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3498) {
            ctx->pc = 0x1F34A4u;
            goto label_1f34a4;
        }
    }
    ctx->pc = 0x1F34A0u;
    // 0x1f34a0: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x1f34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_1f34a4:
    // 0x1f34a4: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F34A4u;
    SET_GPR_U32(ctx, 31, 0x1F34ACu);
    ctx->pc = 0x1F34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34A4u;
    // 0x1f34a8: 0x8ec60018  lw          $a2, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8AF8u, 0x1F34A4u, 0x1F34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34ACu;
label_1f34ac:
    // 0x1f34ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f34acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f34b0:
    // 0x1f34b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f34b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f34b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f34b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f34b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f34bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f34bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f34c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f34c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f34c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f34c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f34c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f34c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f34cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f34ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f34d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F34D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34D0u;
        // 0x1f34d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F34D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F34D8u;
}
