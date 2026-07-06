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

// Function: sub_00129840
// Address: 0x129840 - 0x129ac8
void sub_00129840_0x129840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129840_0x129840");
#endif

    switch (ctx->pc) {
        case 0x12987cu: goto label_12987c;
        case 0x1298b8u: goto label_1298b8;
        case 0x12990cu: goto label_12990c;
        case 0x129948u: goto label_129948;
        case 0x129988u: goto label_129988;
        case 0x1299a4u: goto label_1299a4;
        case 0x129a00u: goto label_129a00;
        case 0x129a20u: goto label_129a20;
        case 0x129a68u: goto label_129a68;
        case 0x129a80u: goto label_129a80;
        default: break;
    }

    ctx->pc = 0x129840u;

    // 0x129840: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x129844: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x129844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129848: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x129848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12984c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x129850: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x129850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x129854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129858: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x129858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x12985c: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x12985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x129860: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x129860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x129864: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x129864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x129868: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x129868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x12986c: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12986cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x129870: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x129870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x129874: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x129874u;
    SET_GPR_U32(ctx, 31, 0x12987Cu);
    ctx->pc = 0x129878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129874u;
    // 0x129878: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x129874u, 0x12987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12987Cu;
label_12987c:
    // 0x12987c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x129880: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x129880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x129884: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x129884u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x129888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12988c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x129890: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x129890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129894: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x129894u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x129898: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x129898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12989c: 0x25ef9838  addiu       $t7, $t7, -0x67C8
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940728));
    // 0x1298a0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1298a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1298a4: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x1298a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x1298a8: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1298a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298ac: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x1298acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x1298b0: 0xc04b5f2  jal         func_12D7C8
    ctx->pc = 0x1298B0u;
    SET_GPR_U32(ctx, 31, 0x1298B8u);
    ctx->pc = 0x1298B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298B0u;
    // 0x1298b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7C8u, 0x1298B0u, 0x1298B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1298B8u;
label_1298b8:
    // 0x1298b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1298b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1298bc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1298bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1298c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1298C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298C0u;
        // 0x1298c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1298C8u;
    // 0x1298c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1298c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1298cc: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1298ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1298d0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1298d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1298d4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1298d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1298d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1298d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1298dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1298dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298e0: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x1298e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x1298e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1298e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298e8: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x1298e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x1298ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1298ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298f0: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x1298f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x1298f4: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x1298f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x1298f8: 0xffab00a8  sd          $t3, 0xA8($sp)
    ctx->pc = 0x1298f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x1298fc: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x1298fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x129900: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x129900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x129904: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x129904u;
    SET_GPR_U32(ctx, 31, 0x12990Cu);
    ctx->pc = 0x129908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129904u;
    // 0x129908: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x129904u, 0x12990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12990Cu;
label_12990c:
    // 0x12990c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x129910: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x129910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x129914: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x129914u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x129918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12991c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x129920: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x129920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129924: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x129924u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x129928: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x129928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x12992c: 0x25ef9838  addiu       $t7, $t7, -0x67C8
    ctx->pc = 0x12992cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940728));
    // 0x129930: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x129930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x129934: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x129934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x129938: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x12993c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x12993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x129940: 0xc04b5f2  jal         func_12D7C8
    ctx->pc = 0x129940u;
    SET_GPR_U32(ctx, 31, 0x129948u);
    ctx->pc = 0x129944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129940u;
    // 0x129944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7C8u, 0x129940u, 0x129948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129948u;
label_129948:
    // 0x129948: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x129948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12994c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x12994cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x129950: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129954: 0x3e00008  jr          $ra
    ctx->pc = 0x129954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129954u;
        // 0x129958: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12995Cu;
    // 0x12995c: 0x0  nop
    ctx->pc = 0x12995cu;
    // NOP
    // 0x129960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129964: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x129964u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12996c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x129970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x129974: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x129974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12997c: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12997cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x129980: 0xc04a3d4  jal         func_128F50
    ctx->pc = 0x129980u;
    SET_GPR_U32(ctx, 31, 0x129988u);
    ctx->pc = 0x129984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129980u;
    // 0x129984: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F50u, 0x129980u, 0x129988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129988u;
label_129988:
    // 0x129988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12998c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12998cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129990: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129990u;
    {
        const bool branch_taken_0x129990 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129990) {
            ctx->pc = 0x129994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129990u;
            // 0x129994: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1299B4u;
            goto label_1299b4;
        }
    }
    ctx->pc = 0x129998u;
    // 0x129998: 0x8e0f0050  lw          $t7, 0x50($s0)
    ctx->pc = 0x129998u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x12999c: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1299a0: 0xae0f0050  sw          $t7, 0x50($s0)
    ctx->pc = 0x1299a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 15));
label_1299a4:
    // 0x1299a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1299a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1299a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1299a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1299ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1299ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1299B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299ACu;
        // 0x1299b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1299B4u;
label_1299b4:
    // 0x1299b4: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x1299b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x1299b8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1299B8u;
    {
        const bool branch_taken_0x1299b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299B8u;
        // 0x1299bc: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299b8) {
            ctx->pc = 0x1299A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1299a4;
        }
    }
    ctx->pc = 0x1299C0u;
    // 0x1299c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1299c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1299c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1299c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1299c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1299c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1299cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1299ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1299d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1299d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1299d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1299d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1299d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1299dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299e0: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x1299e0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1299e4: 0x31ef0100  andi        $t7, $t7, 0x100
    ctx->pc = 0x1299e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)256);
    // 0x1299e8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1299E8u;
    {
        const bool branch_taken_0x1299e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299E8u;
        // 0x1299ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299e8) {
            ctx->pc = 0x129A00u;
            goto label_129a00;
        }
    }
    ctx->pc = 0x1299F0u;
    // 0x1299f0: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1299f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1299f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1299f8: 0xc049898  jal         func_126260
    ctx->pc = 0x1299F8u;
    SET_GPR_U32(ctx, 31, 0x129A00u);
    ctx->pc = 0x1299FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1299F8u;
    // 0x1299fc: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126260u, 0x1299F8u, 0x129A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A00u;
label_129a00:
    // 0x129a00: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129a00u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129a04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x129a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a08: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x129a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x129a0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x129a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a10: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x129a10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x129a14: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x129a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x129a18: 0xc04b9ae  jal         func_12E6B8
    ctx->pc = 0x129A18u;
    SET_GPR_U32(ctx, 31, 0x129A20u);
    ctx->pc = 0x129A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A18u;
    // 0x129a1c: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E6B8u, 0x129A18u, 0x129A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A20u;
label_129a20:
    // 0x129a20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129a2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x129a2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x129a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129a34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x129a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129a38: 0x3e00008  jr          $ra
    ctx->pc = 0x129A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A38u;
        // 0x129a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129A40u;
    // 0x129a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129a44: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x129a44u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129a4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x129a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x129a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x129a54: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x129a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a5c: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x129a60: 0xc049898  jal         func_126260
    ctx->pc = 0x129A60u;
    SET_GPR_U32(ctx, 31, 0x129A68u);
    ctx->pc = 0x129A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A60u;
    // 0x129a64: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126260u, 0x129A60u, 0x129A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A68u;
label_129a68:
    // 0x129a68: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x129a68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129a6c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x129a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129a70: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x129A70u;
    {
        const bool branch_taken_0x129a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x129A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A70u;
        // 0x129a74: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a70) {
            ctx->pc = 0x129A94u;
            goto label_129a94;
        }
    }
    ctx->pc = 0x129A78u;
    // 0x129a78: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129a78u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129a7c: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x129a7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
label_129a80:
    // 0x129a80: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x129a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x129a84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x129a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x129A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A8Cu;
        // 0x129a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129A94u;
label_129a94:
    // 0x129a94: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129a94u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129a98: 0xae0e0050  sw          $t6, 0x50($s0)
    ctx->pc = 0x129a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 14));
    // 0x129a9c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x129A9Cu;
    {
        const bool branch_taken_0x129a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A9Cu;
        // 0x129aa0: 0x35ef1000  ori         $t7, $t7, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a9c) {
            ctx->pc = 0x129A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129a80;
        }
    }
    ctx->pc = 0x129AA4u;
    // 0x129aa4: 0x0  nop
    ctx->pc = 0x129aa4u;
    // NOP
    // 0x129aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129ab0: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x129ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x129ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129ab8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x129ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x129abc: 0x8048cdc  j           func_123370
    ctx->pc = 0x129ABCu;
    ctx->pc = 0x129AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ABCu;
    // 0x129ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123370u, 0x129ABCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x129AC4u;
    // 0x129ac4: 0x0  nop
    ctx->pc = 0x129ac4u;
    // NOP
    if (ctx->pc == 0x129ac4u) { ctx->pc = 0x129ac8u; }
}
