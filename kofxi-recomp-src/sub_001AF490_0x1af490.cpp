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

// Function: sub_001AF490
// Address: 0x1af490 - 0x1af568
void sub_001AF490_0x1af490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF490_0x1af490");
#endif

    switch (ctx->pc) {
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af51cu: goto label_1af51c;
        case 0x1af538u: goto label_1af538;
        case 0x1af540u: goto label_1af540;
        default: break;
    }

    ctx->pc = 0x1af490u;

    // 0x1af490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af494: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1af494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af498: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1af498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4a0: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x1af4a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x1af4a4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af4a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4a8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1af4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1af4ac: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1af4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af4b8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1af4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1af4bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4c4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1af4c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1af4c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af4cc: 0xc06bd6a  jal         func_1AF5A8
    ctx->pc = 0x1AF4CCu;
    SET_GPR_U32(ctx, 31, 0x1AF4D4u);
    ctx->pc = 0x1AF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4CCu;
    // 0x1af4d0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF5A8u, 0x1AF4CCu, 0x1AF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4D4u;
label_1af4d4:
    // 0x1af4d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D8u;
        // 0x1af4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF4E0u;
    // 0x1af4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af4f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af4f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af500: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1af500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af504: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1af504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1af508: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af50c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1af50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1af510: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af514: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF514u;
    SET_GPR_U32(ctx, 31, 0x1AF51Cu);
    ctx->pc = 0x1AF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF514u;
    // 0x1af518: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AF514u, 0x1AF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF51Cu;
label_1af51c:
    // 0x1af51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af524: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af528: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1af528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af52c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1af52cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af530: 0xc06bd5a  jal         func_1AF568
    ctx->pc = 0x1AF530u;
    SET_GPR_U32(ctx, 31, 0x1AF538u);
    ctx->pc = 0x1AF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF530u;
    // 0x1af534: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF568u, 0x1AF530u, 0x1AF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF538u;
label_1af538:
    // 0x1af538: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF538u;
    SET_GPR_U32(ctx, 31, 0x1AF540u);
    ctx->pc = 0x1AF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF538u;
    // 0x1af53c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1AF538u, 0x1AF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF540u;
label_1af540:
    // 0x1af540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af550: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af554: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af558: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af55c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af560: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF560u;
        // 0x1af564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF568u;
}
