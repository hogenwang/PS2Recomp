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

// Function: sub_0021E2A8
// Address: 0x21e2a8 - 0x21e458
void sub_0021E2A8_0x21e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E2A8_0x21e2a8");
#endif

    switch (ctx->pc) {
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e2f0u: goto label_21e2f0;
        case 0x21e304u: goto label_21e304;
        case 0x21e310u: goto label_21e310;
        case 0x21e330u: goto label_21e330;
        case 0x21e35cu: goto label_21e35c;
        case 0x21e3bcu: goto label_21e3bc;
        case 0x21e3c8u: goto label_21e3c8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e408u: goto label_21e408;
        case 0x21e434u: goto label_21e434;
        default: break;
    }

    ctx->pc = 0x21e2a8u;

    // 0x21e2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21e2ac: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21e2acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21e2b0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x21e2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x21e2b4: 0xddee1b80  ld          $t6, 0x1B80($t7)
    ctx->pc = 0x21e2b4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 7040)));
    // 0x21e2b8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x21e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x21e2bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21e2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21e2c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21e2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21e2cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21e2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2d0: 0xffae0000  sd          $t6, 0x0($sp)
    ctx->pc = 0x21e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 14));
    // 0x21e2d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21e2dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21e2e0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x21E2E0u;
    SET_GPR_U32(ctx, 31, 0x21E2E8u);
    ctx->pc = 0x21E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2E0u;
    // 0x21e2e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x21E2E0u, 0x21E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2E8u;
label_21e2e8:
    // 0x21e2e8: 0xc048c54  jal         func_123150
    ctx->pc = 0x21E2E8u;
    SET_GPR_U32(ctx, 31, 0x21E2F0u);
    ctx->pc = 0x21E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2E8u;
    // 0x21e2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x21E2E8u, 0x21E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2F0u;
label_21e2f0:
    // 0x21e2f0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x21e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21e2f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21e2f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e2fc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x21E2FCu;
    SET_GPR_U32(ctx, 31, 0x21E304u);
    ctx->pc = 0x21E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2FCu;
    // 0x21e300: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x21E2FCu, 0x21E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E304u;
label_21e304:
    // 0x21e304: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x21e304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x21e308: 0xc048c54  jal         func_123150
    ctx->pc = 0x21E308u;
    SET_GPR_U32(ctx, 31, 0x21E310u);
    ctx->pc = 0x21E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E308u;
    // 0x21e30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x21E308u, 0x21E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E310u;
label_21e310:
    // 0x21e310: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e314: 0x524821  addu        $t1, $v0, $s2
    ctx->pc = 0x21e314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21e318: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21e318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e31c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e320: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x21e320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x21e324: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21e324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e328: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21E328u;
    SET_GPR_U32(ctx, 31, 0x21E330u);
    ctx->pc = 0x21E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E328u;
    // 0x21e32c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21E328u, 0x21E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E330u;
label_21e330:
    // 0x21e330: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e334: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e338: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21e338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e33c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x21e33cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e340: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x21e340u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e344: 0x24841b98  addiu       $a0, $a0, 0x1B98
    ctx->pc = 0x21e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7064));
    // 0x21e348: 0x24e71bb0  addiu       $a3, $a3, 0x1BB0
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7088));
    // 0x21e34c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x21e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x21e350: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21e350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e354: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E354u;
    SET_GPR_U32(ctx, 31, 0x21E35Cu);
    ctx->pc = 0x21E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E354u;
    // 0x21e358: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21E354u, 0x21E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E35Cu;
label_21e35c:
    // 0x21e35c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21e35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e360: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21e360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e364: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x21e364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e368: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x21e368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21e36c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21e36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e370: 0x3e00008  jr          $ra
    ctx->pc = 0x21E370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E370u;
        // 0x21e374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E378u;
    // 0x21e378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21e37c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21e380: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x21e380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x21e384: 0xddee1bd8  ld          $t6, 0x1BD8($t7)
    ctx->pc = 0x21e384u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 7128)));
    // 0x21e388: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21e38c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21e38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e390: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x21e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x21e394: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21e394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e398: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21e39c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21e39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3a0: 0xffae0000  sd          $t6, 0x0($sp)
    ctx->pc = 0x21e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 14));
    // 0x21e3a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21e3ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21e3b0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x21e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x21e3b4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x21E3B4u;
    SET_GPR_U32(ctx, 31, 0x21E3BCu);
    ctx->pc = 0x21E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3B4u;
    // 0x21e3b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x21E3B4u, 0x21E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3BCu;
label_21e3bc:
    // 0x21e3bc: 0x138823  negu        $s1, $s3
    ctx->pc = 0x21e3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x21e3c0: 0xc048c54  jal         func_123150
    ctx->pc = 0x21E3C0u;
    SET_GPR_U32(ctx, 31, 0x21E3C8u);
    ctx->pc = 0x21E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3C0u;
    // 0x21e3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x21E3C0u, 0x21E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3C8u;
label_21e3c8:
    // 0x21e3c8: 0x26450005  addiu       $a1, $s2, 0x5
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x21e3cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21e3d0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21e3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3d4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x21E3D4u;
    SET_GPR_U32(ctx, 31, 0x21E3DCu);
    ctx->pc = 0x21E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3D4u;
    // 0x21e3d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x21E3D4u, 0x21E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3DCu;
label_21e3dc:
    // 0x21e3dc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x21e3e0: 0xc048c54  jal         func_123150
    ctx->pc = 0x21E3E0u;
    SET_GPR_U32(ctx, 31, 0x21E3E8u);
    ctx->pc = 0x21E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3E0u;
    // 0x21e3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x21E3E0u, 0x21E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3E8u;
label_21e3e8:
    // 0x21e3e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e3ec: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x21e3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21e3f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21e3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3f8: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x21e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x21e3fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21e3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e400: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21E400u;
    SET_GPR_U32(ctx, 31, 0x21E408u);
    ctx->pc = 0x21E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E400u;
    // 0x21e404: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21E400u, 0x21E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E408u;
label_21e408:
    // 0x21e408: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e40c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e410: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x21e410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e414: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x21e414u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e418: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x21e418u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e41c: 0x24841be0  addiu       $a0, $a0, 0x1BE0
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7136));
    // 0x21e420: 0x24e71bb0  addiu       $a3, $a3, 0x1BB0
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7088));
    // 0x21e424: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x21e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x21e428: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21e428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e42c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E42Cu;
    SET_GPR_U32(ctx, 31, 0x21E434u);
    ctx->pc = 0x21E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E42Cu;
    // 0x21e430: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21E42Cu, 0x21E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E434u;
label_21e434:
    // 0x21e434: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21e434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e438: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21e438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e43c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x21e43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e440: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21e444: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21e444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e448: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21e44c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E44Cu;
        // 0x21e450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E454u;
    // 0x21e454: 0x0  nop
    ctx->pc = 0x21e454u;
    // NOP
}
