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

// Function: sub_00219350
// Address: 0x219350 - 0x2194b0
void sub_00219350_0x219350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219350_0x219350");
#endif

    switch (ctx->pc) {
        case 0x21936cu: goto label_21936c;
        case 0x21937cu: goto label_21937c;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193f0u: goto label_2193f0;
        case 0x219400u: goto label_219400;
        case 0x21946cu: goto label_21946c;
        case 0x219480u: goto label_219480;
        case 0x219488u: goto label_219488;
        default: break;
    }

    ctx->pc = 0x219350u;

label_219350:
    // 0x219350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21935c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21935cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219360: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219364: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219364u;
    SET_GPR_U32(ctx, 31, 0x21936Cu);
    ctx->pc = 0x219368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219364u;
    // 0x219368: 0x24841260  addiu       $a0, $a0, 0x1260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219364u, 0x21936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21936Cu;
label_21936c:
    // 0x21936c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219370: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219374: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219374u;
    SET_GPR_U32(ctx, 31, 0x21937Cu);
    ctx->pc = 0x219378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219374u;
    // 0x219378: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219374u, 0x21937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21937Cu;
label_21937c:
    // 0x21937c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x219380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219388: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x219388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21938c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21938cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219390: 0x8043e52  j           func_10F948
    ctx->pc = 0x219390u;
    ctx->pc = 0x219394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219390u;
    // 0x219394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219398u;
    // 0x219398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21939c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21939cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2193a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2193a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2193a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2193a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2193a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2193a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2193ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2193acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2193b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2193b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2193b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2193b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2193bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2193bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2193c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2193c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2193c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193c8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2193c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2193cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2193d0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2193d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2193d4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2193D4u;
    SET_GPR_U32(ctx, 31, 0x2193DCu);
    ctx->pc = 0x2193D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193D4u;
    // 0x2193d8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2193D4u, 0x2193DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193DCu;
label_2193dc:
    // 0x2193dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2193dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2193e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2193e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193e8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2193E8u;
    SET_GPR_U32(ctx, 31, 0x2193F0u);
    ctx->pc = 0x2193ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193E8u;
    // 0x2193ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2193E8u, 0x2193F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193F0u;
label_2193f0:
    // 0x2193f0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2193f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2193f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2193f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193f8: 0xc0864d4  jal         func_219350
    ctx->pc = 0x2193F8u;
    SET_GPR_U32(ctx, 31, 0x219400u);
    ctx->pc = 0x2193FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193F8u;
    // 0x2193fc: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219350u;
    goto label_219350;
    ctx->pc = 0x219400u;
label_219400:
    // 0x219400: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x219400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21940c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21940cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219414: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21941c: 0x3e00008  jr          $ra
    ctx->pc = 0x21941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21941Cu;
        // 0x219420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21941Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219424u;
    // 0x219424: 0x0  nop
    ctx->pc = 0x219424u;
    // NOP
    // 0x219428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21942c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21942cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219430: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21943c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219440: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219444: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21944c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219450: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219454: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x219454u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x219458: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21945c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21945cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219460: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219464: 0xc084612  jal         func_211848
    ctx->pc = 0x219464u;
    SET_GPR_U32(ctx, 31, 0x21946Cu);
    ctx->pc = 0x219468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219464u;
    // 0x219468: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219464u, 0x21946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21946Cu;
label_21946c:
    // 0x21946c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219470: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219478: 0xc084612  jal         func_211848
    ctx->pc = 0x219478u;
    SET_GPR_U32(ctx, 31, 0x219480u);
    ctx->pc = 0x21947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219478u;
    // 0x21947c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219478u, 0x219480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219480u;
label_219480:
    // 0x219480: 0xc0864d4  jal         func_219350
    ctx->pc = 0x219480u;
    SET_GPR_U32(ctx, 31, 0x219488u);
    ctx->pc = 0x219484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219480u;
    // 0x219484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219350u;
    goto label_219350;
    ctx->pc = 0x219488u;
label_219488:
    // 0x219488: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x219488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21948c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21948cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219490: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x219490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x219494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219498: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21949c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21949cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2194a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2194a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2194a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2194a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2194a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2194A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2194ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A8u;
        // 0x2194ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2194A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2194B0u;
}
