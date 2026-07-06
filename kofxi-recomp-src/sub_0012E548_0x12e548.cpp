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

// Function: sub_0012E548
// Address: 0x12e548 - 0x12e610
void sub_0012E548_0x12e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E548_0x12e548");
#endif

    switch (ctx->pc) {
        case 0x12e594u: goto label_12e594;
        case 0x12e5f4u: goto label_12e5f4;
        default: break;
    }

    ctx->pc = 0x12e548u;

    // 0x12e548: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e54c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12e54cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12e550: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12e554: 0x24aeffff  addiu       $t6, $a1, -0x1
    ctx->pc = 0x12e554u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12e558: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12e55c: 0x5700a  movz        $t6, $zero, $a1
    ctx->pc = 0x12e55cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
    // 0x12e560: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e564: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12e564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12e568: 0x8dedbde8  lw          $t5, -0x4218($t7)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12e56c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e570: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12e574: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12e574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e578: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12e578u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12e57c: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12e580: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12e580u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12e584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e588: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x12e588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x12e58c: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x12E58Cu;
    SET_GPR_U32(ctx, 31, 0x12E594u);
    ctx->pc = 0x12E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E58Cu;
    // 0x12e590: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BEC8u, 0x12E58Cu, 0x12E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E594u;
label_12e594:
    // 0x12e594: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E594u;
        // 0x12e598: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E5A0u;
            goto label_12e5a0;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
label_12e5a0:
    // 0x12e5a0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12e5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e5a4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x12e5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12e5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5A8u;
        // 0x12e5ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E5B0u;
    // 0x12e5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e5b4: 0x24ceffff  addiu       $t6, $a2, -0x1
    ctx->pc = 0x12e5b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12e5b8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12e5bc: 0x6700a  movz        $t6, $zero, $a2
    ctx->pc = 0x12e5bcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
    // 0x12e5c0: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12e5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12e5c4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12e5c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12e5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12e5d0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12e5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5d4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12e5d8: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12e5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12e5dc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x12e5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5e0: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12e5e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5e8: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x12e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12e5ec: 0xc04afd0  jal         func_12BF40
    ctx->pc = 0x12E5ECu;
    SET_GPR_U32(ctx, 31, 0x12E5F4u);
    ctx->pc = 0x12E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5ECu;
    // 0x12e5f0: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF40u, 0x12E5ECu, 0x12E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E5F4u;
    {
        const bool branch_taken_0x12e5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5F4u;
        // 0x12e5f8: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5f4) {
            ctx->pc = 0x12E600u;
            goto label_12e600;
        }
    }
    ctx->pc = 0x12E5FCu;
    // 0x12e5fc: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12e5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
label_12e600:
    // 0x12e600: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12e600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e604: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x12e604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12e608: 0x3e00008  jr          $ra
    ctx->pc = 0x12E608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E608u;
        // 0x12e60c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E610u;
}
