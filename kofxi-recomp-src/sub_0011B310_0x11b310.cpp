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

// Function: sub_0011B310
// Address: 0x11b310 - 0x11b3e8
void sub_0011B310_0x11b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B310_0x11b310");
#endif

    switch (ctx->pc) {
        case 0x11b310u: goto label_11b310;
        case 0x11b314u: goto label_11b314;
        case 0x11b318u: goto label_11b318;
        case 0x11b31cu: goto label_11b31c;
        case 0x11b320u: goto label_11b320;
        case 0x11b324u: goto label_11b324;
        case 0x11b328u: goto label_11b328;
        case 0x11b32cu: goto label_11b32c;
        case 0x11b330u: goto label_11b330;
        case 0x11b334u: goto label_11b334;
        case 0x11b338u: goto label_11b338;
        case 0x11b33cu: goto label_11b33c;
        case 0x11b340u: goto label_11b340;
        case 0x11b344u: goto label_11b344;
        case 0x11b348u: goto label_11b348;
        case 0x11b34cu: goto label_11b34c;
        case 0x11b350u: goto label_11b350;
        case 0x11b354u: goto label_11b354;
        case 0x11b358u: goto label_11b358;
        case 0x11b35cu: goto label_11b35c;
        case 0x11b360u: goto label_11b360;
        case 0x11b364u: goto label_11b364;
        case 0x11b368u: goto label_11b368;
        case 0x11b36cu: goto label_11b36c;
        case 0x11b370u: goto label_11b370;
        case 0x11b374u: goto label_11b374;
        case 0x11b378u: goto label_11b378;
        case 0x11b37cu: goto label_11b37c;
        case 0x11b380u: goto label_11b380;
        case 0x11b384u: goto label_11b384;
        case 0x11b388u: goto label_11b388;
        case 0x11b38cu: goto label_11b38c;
        case 0x11b390u: goto label_11b390;
        case 0x11b394u: goto label_11b394;
        case 0x11b398u: goto label_11b398;
        case 0x11b39cu: goto label_11b39c;
        case 0x11b3a0u: goto label_11b3a0;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3a8u: goto label_11b3a8;
        case 0x11b3acu: goto label_11b3ac;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3b4u: goto label_11b3b4;
        case 0x11b3b8u: goto label_11b3b8;
        case 0x11b3bcu: goto label_11b3bc;
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3c4u: goto label_11b3c4;
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3d0u: goto label_11b3d0;
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3d8u: goto label_11b3d8;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e0u: goto label_11b3e0;
        case 0x11b3e4u: goto label_11b3e4;
        default: break;
    }

    ctx->pc = 0x11b310u;

label_11b310:
    // 0x11b310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11b314:
    // 0x11b314: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11b318:
    // 0x11b318: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11b31c:
    // 0x11b31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b320:
    // 0x11b320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11b320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b324:
    // 0x11b324: 0x8c439e08  lw          $v1, -0x61F8($v0)
    ctx->pc = 0x11b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942216)));
label_11b328:
    // 0x11b328: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b32c:
    // 0x11b32c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11b330:
    // 0x11b330: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_11b334:
    if (ctx->pc == 0x11B334u) {
        ctx->pc = 0x11B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B330u;
        // 0x11b334: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B338u;
        goto label_11b338;
    }
    ctx->pc = 0x11B330u;
    {
        const bool branch_taken_0x11b330 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B330u;
        // 0x11b334: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b330) {
            ctx->pc = 0x11B340u;
            goto label_11b340;
        }
    }
    ctx->pc = 0x11B338u;
label_11b338:
    // 0x11b338: 0xc046cfa  jal         func_11B3E8
label_11b33c:
    if (ctx->pc == 0x11B33Cu) {
        ctx->pc = 0x11B340u;
        goto label_11b340;
    }
    ctx->pc = 0x11B338u;
    SET_GPR_U32(ctx, 31, 0x11B340u);
    ctx->pc = 0x11B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3E8u, 0x11B338u, 0x11B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B340u;
label_11b340:
    // 0x11b340: 0xc045ba8  jal         func_116EA0
label_11b344:
    if (ctx->pc == 0x11B344u) {
        ctx->pc = 0x11B348u;
        goto label_11b348;
    }
    ctx->pc = 0x11B340u;
    SET_GPR_U32(ctx, 31, 0x11B348u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11B340u, 0x11B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B348u;
label_11b348:
    // 0x11b348: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_11b34c:
    // 0x11b34c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_11b350:
    // 0x11b350: 0x8cb1d848  lw          $s1, -0x27B8($a1)
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294957128)));
label_11b354:
    // 0x11b354: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_11b358:
    // 0x11b358: 0xac90d850  sw          $s0, -0x27B0($a0)
    ctx->pc = 0x11b358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957136), GPR_U32(ctx, 16));
label_11b35c:
    // 0x11b35c: 0xacb2d848  sw          $s2, -0x27B8($a1)
    ctx->pc = 0x11b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294957128), GPR_U32(ctx, 18));
label_11b360:
    // 0x11b360: 0xac7cd84c  sw          $gp, -0x27B4($v1)
    ctx->pc = 0x11b360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957132), GPR_U32(ctx, 28));
label_11b364:
    // 0x11b364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11b368:
    if (ctx->pc == 0x11B368u) {
        ctx->pc = 0x11B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B364u;
        // 0x11b368: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B36Cu;
        goto label_11b36c;
    }
    ctx->pc = 0x11B364u;
    {
        const bool branch_taken_0x11b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B364u;
        // 0x11b368: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b364) {
            ctx->pc = 0x11B378u;
            goto label_11b378;
        }
    }
    ctx->pc = 0x11B36Cu;
label_11b36c:
    // 0x11b36c: 0xc045bbc  jal         func_116EF0
label_11b370:
    if (ctx->pc == 0x11B370u) {
        ctx->pc = 0x11B374u;
        goto label_11b374;
    }
    ctx->pc = 0x11B36Cu;
    SET_GPR_U32(ctx, 31, 0x11B374u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11B36Cu, 0x11B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B374u;
label_11b374:
    // 0x11b374: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11b374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b378:
    // 0x11b378: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11b37c:
    // 0x11b37c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11b380:
    // 0x11b380: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b384:
    // 0x11b384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b388:
    // 0x11b388: 0x3e00008  jr          $ra
label_11b38c:
    if (ctx->pc == 0x11B38Cu) {
        ctx->pc = 0x11B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B388u;
        // 0x11b38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B390u;
        goto label_11b390;
    }
    ctx->pc = 0x11B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B388u;
        // 0x11b38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B390u;
label_11b390:
    // 0x11b390: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_11b394:
    // 0x11b394: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b398:
    // 0x11b398: 0x8c45d848  lw          $a1, -0x27B8($v0)
    ctx->pc = 0x11b398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957128)));
label_11b39c:
    // 0x11b39c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b3a0:
    // 0x11b3a0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_11b3a4:
    if (ctx->pc == 0x11B3A4u) {
        ctx->pc = 0x11B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3A0u;
        // 0x11b3a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3A8u;
        goto label_11b3a8;
    }
    ctx->pc = 0x11B3A0u;
    {
        const bool branch_taken_0x11b3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3A0u;
        // 0x11b3a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3a0) {
            ctx->pc = 0x11B3D4u;
            goto label_11b3d4;
        }
    }
    ctx->pc = 0x11B3A8u;
label_11b3a8:
    // 0x11b3a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11b3ac:
    // 0x11b3ac: 0x8c439de4  lw          $v1, -0x621C($v0)
    ctx->pc = 0x11b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942180)));
label_11b3b0:
    // 0x11b3b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_11b3b4:
    if (ctx->pc == 0x11B3B4u) {
        ctx->pc = 0x11B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3B0u;
        // 0x11b3b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3B8u;
        goto label_11b3b8;
    }
    ctx->pc = 0x11B3B0u;
    {
        const bool branch_taken_0x11b3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3B0u;
        // 0x11b3b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3b0) {
            ctx->pc = 0x11B3D8u;
            goto label_11b3d8;
        }
    }
    ctx->pc = 0x11B3B8u;
label_11b3b8:
    // 0x11b3b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_11b3bc:
    // 0x11b3bc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11b3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11b3c0:
    // 0x11b3c0: 0x8c5cd84c  lw          $gp, -0x27B4($v0)
    ctx->pc = 0x11b3c0u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957132)));
label_11b3c4:
    // 0x11b3c4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_11b3c8:
    // 0x11b3c8: 0xa0f809  jalr        $a1
label_11b3cc:
    if (ctx->pc == 0x11B3CCu) {
        ctx->pc = 0x11B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3C8u;
        // 0x11b3cc: 0x8c64d850  lw          $a0, -0x27B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3D0u;
        goto label_11b3d0;
    }
    ctx->pc = 0x11B3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11B3D0u);
        ctx->pc = 0x11B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3C8u;
        // 0x11b3cc: 0x8c64d850  lw          $a0, -0x27B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3C8u, 0x11B3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B3D0u;
label_11b3d0:
    // 0x11b3d0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11b3d0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b3d4:
    // 0x11b3d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b3d8:
    // 0x11b3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b3dc:
    // 0x11b3dc: 0x3e00008  jr          $ra
label_11b3e0:
    if (ctx->pc == 0x11B3E0u) {
        ctx->pc = 0x11B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3DCu;
        // 0x11b3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3E4u;
        goto label_11b3e4;
    }
    ctx->pc = 0x11B3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3DCu;
        // 0x11b3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3E4u;
label_11b3e4:
    // 0x11b3e4: 0x0  nop
    ctx->pc = 0x11b3e4u;
    // NOP
}
