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

// Function: sub_002C0458
// Address: 0x2c0458 - 0x2c0538
void sub_002C0458_0x2c0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0458_0x2c0458");
#endif

    switch (ctx->pc) {
        case 0x2c0478u: goto label_2c0478;
        case 0x2c04b0u: goto label_2c04b0;
        case 0x2c04e0u: goto label_2c04e0;
        case 0x2c04ecu: goto label_2c04ec;
        case 0x2c0504u: goto label_2c0504;
        case 0x2c0510u: goto label_2c0510;
        case 0x2c051cu: goto label_2c051c;
        default: break;
    }

    ctx->pc = 0x2c0458u;

    // 0x2c0458: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c0458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c045c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c045cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0460: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x2c0460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2c0464: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2c0464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2c0468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c046c: 0x24841d58  addiu       $a0, $a0, 0x1D58
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7512));
    // 0x2c0470: 0xc0a0018  jal         func_280060
    ctx->pc = 0x2C0470u;
    SET_GPR_U32(ctx, 31, 0x2C0478u);
    ctx->pc = 0x2C0474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0470u;
    // 0x2c0474: 0x24a51e20  addiu       $a1, $a1, 0x1E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280060u, 0x2C0470u, 0x2C0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0478u;
label_2c0478:
    // 0x2c0478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c047c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C047Cu;
        // 0x2c0480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0484u;
    // 0x2c0484: 0x0  nop
    ctx->pc = 0x2c0484u;
    // NOP
    // 0x2c0488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c048c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2c048cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0494: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c0494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0498: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2c0498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2c049c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c04a0: 0x24845468  addiu       $a0, $a0, 0x5468
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21608));
    // 0x2c04a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c04a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04a8: 0xc09ffd0  jal         func_27FF40
    ctx->pc = 0x2C04A8u;
    SET_GPR_U32(ctx, 31, 0x2C04B0u);
    ctx->pc = 0x2C04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04A8u;
    // 0x2c04ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF40u, 0x2C04A8u, 0x2C04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04B0u;
label_2c04b0:
    // 0x2c04b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c04b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c04b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C04B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04B4u;
        // 0x2c04b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C04B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C04BCu;
    // 0x2c04bc: 0x0  nop
    ctx->pc = 0x2c04bcu;
    // NOP
    // 0x2c04c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c04c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c04c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c04c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c04c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c04c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c04cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c04ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c04d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c04d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c04d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c04d8: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2C04D8u;
    SET_GPR_U32(ctx, 31, 0x2C04E0u);
    ctx->pc = 0x2C04DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04D8u;
    // 0x2c04dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2C04D8u, 0x2C04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04E0u;
label_2c04e0:
    // 0x2c04e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c04e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04e4: 0xc0a8a3e  jal         func_2A28F8
    ctx->pc = 0x2C04E4u;
    SET_GPR_U32(ctx, 31, 0x2C04ECu);
    ctx->pc = 0x2C04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04E4u;
    // 0x2c04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28F8u, 0x2C04E4u, 0x2C04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04ECu;
label_2c04ec:
    // 0x2c04ec: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x2c04ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2c04f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2c04f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2c04f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c04f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c04f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04fc: 0xc0a8e0c  jal         func_2A3830
    ctx->pc = 0x2C04FCu;
    SET_GPR_U32(ctx, 31, 0x2C0504u);
    ctx->pc = 0x2C0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04FCu;
    // 0x2c0500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3830u, 0x2C04FCu, 0x2C0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0504u;
label_2c0504:
    // 0x2c0504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0508: 0xc0a050e  jal         func_281438
    ctx->pc = 0x2C0508u;
    SET_GPR_U32(ctx, 31, 0x2C0510u);
    ctx->pc = 0x2C050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0508u;
    // 0x2c050c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281438u, 0x2C0508u, 0x2C0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0510u;
label_2c0510:
    // 0x2c0510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0514: 0xc0a8e0a  jal         func_2A3828
    ctx->pc = 0x2C0514u;
    SET_GPR_U32(ctx, 31, 0x2C051Cu);
    ctx->pc = 0x2C0518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0514u;
    // 0x2c0518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2C0514u, 0x2C051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C051Cu;
label_2c051c:
    // 0x2c051c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c051cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0520: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0524: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0528: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c0528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c052c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c052cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0530: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0530u;
        // 0x2c0534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0538u;
}
