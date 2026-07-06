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

// Function: sub_0021A378
// Address: 0x21a378 - 0x21a470
void sub_0021A378_0x21a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A378_0x21a378");
#endif

    switch (ctx->pc) {
        case 0x21a394u: goto label_21a394;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a444u: goto label_21a444;
        case 0x21a44cu: goto label_21a44c;
        default: break;
    }

    ctx->pc = 0x21a378u;

label_21a378:
    // 0x21a378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a388: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a38c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A38Cu;
    SET_GPR_U32(ctx, 31, 0x21A394u);
    ctx->pc = 0x21A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A38Cu;
    // 0x21a390: 0x24841410  addiu       $a0, $a0, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21A38Cu, 0x21A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A394u;
label_21a394:
    // 0x21a394: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21a394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a398: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a39c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a3a0: 0x24841430  addiu       $a0, $a0, 0x1430
    ctx->pc = 0x21a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5168));
    // 0x21a3a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a3a8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A3A8u;
    ctx->pc = 0x21A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3A8u;
    // 0x21a3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21A3B0u;
    // 0x21a3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a3b4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a3b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a3bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a3c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a3c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a3cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3d0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21a3d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a3d8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21a3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a3dc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A3DCu;
    SET_GPR_U32(ctx, 31, 0x21A3E4u);
    ctx->pc = 0x21A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3DCu;
    // 0x21a3e0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21A3DCu, 0x21A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3E4u;
label_21a3e4:
    // 0x21a3e4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21a3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3ec: 0xc0868de  jal         func_21A378
    ctx->pc = 0x21A3ECu;
    SET_GPR_U32(ctx, 31, 0x21A3F4u);
    ctx->pc = 0x21A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3ECu;
    // 0x21a3f0: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A378u;
    goto label_21a378;
    ctx->pc = 0x21A3F4u;
label_21a3f4:
    // 0x21a3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a408: 0x3e00008  jr          $ra
    ctx->pc = 0x21A408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A408u;
        // 0x21a40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A410u;
    // 0x21a410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a414: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a414u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a418: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a41c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21a41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a430: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21a430u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a438: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a438u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a43c: 0xc084612  jal         func_211848
    ctx->pc = 0x21A43Cu;
    SET_GPR_U32(ctx, 31, 0x21A444u);
    ctx->pc = 0x21A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A43Cu;
    // 0x21a440: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21A43Cu, 0x21A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A444u;
label_21a444:
    // 0x21a444: 0xc0868de  jal         func_21A378
    ctx->pc = 0x21A444u;
    SET_GPR_U32(ctx, 31, 0x21A44Cu);
    ctx->pc = 0x21A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A444u;
    // 0x21a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A378u;
    goto label_21a378;
    ctx->pc = 0x21A44Cu;
label_21a44c:
    // 0x21a44c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a454: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21a454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21a458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a460: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a464: 0x3e00008  jr          $ra
    ctx->pc = 0x21A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A464u;
        // 0x21a468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A46Cu;
    // 0x21a46c: 0x0  nop
    ctx->pc = 0x21a46cu;
    // NOP
}
