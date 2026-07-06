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

// Function: sub_001CE350
// Address: 0x1ce350 - 0x1ce428
void sub_001CE350_0x1ce350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE350_0x1ce350");
#endif

    switch (ctx->pc) {
        case 0x1ce350u: goto label_1ce350;
        case 0x1ce354u: goto label_1ce354;
        case 0x1ce358u: goto label_1ce358;
        case 0x1ce35cu: goto label_1ce35c;
        case 0x1ce360u: goto label_1ce360;
        case 0x1ce364u: goto label_1ce364;
        case 0x1ce368u: goto label_1ce368;
        case 0x1ce36cu: goto label_1ce36c;
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce374u: goto label_1ce374;
        case 0x1ce378u: goto label_1ce378;
        case 0x1ce37cu: goto label_1ce37c;
        case 0x1ce380u: goto label_1ce380;
        case 0x1ce384u: goto label_1ce384;
        case 0x1ce388u: goto label_1ce388;
        case 0x1ce38cu: goto label_1ce38c;
        case 0x1ce390u: goto label_1ce390;
        case 0x1ce394u: goto label_1ce394;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce39cu: goto label_1ce39c;
        case 0x1ce3a0u: goto label_1ce3a0;
        case 0x1ce3a4u: goto label_1ce3a4;
        case 0x1ce3a8u: goto label_1ce3a8;
        case 0x1ce3acu: goto label_1ce3ac;
        case 0x1ce3b0u: goto label_1ce3b0;
        case 0x1ce3b4u: goto label_1ce3b4;
        case 0x1ce3b8u: goto label_1ce3b8;
        case 0x1ce3bcu: goto label_1ce3bc;
        case 0x1ce3c0u: goto label_1ce3c0;
        case 0x1ce3c4u: goto label_1ce3c4;
        case 0x1ce3c8u: goto label_1ce3c8;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce3d0u: goto label_1ce3d0;
        case 0x1ce3d4u: goto label_1ce3d4;
        case 0x1ce3d8u: goto label_1ce3d8;
        case 0x1ce3dcu: goto label_1ce3dc;
        case 0x1ce3e0u: goto label_1ce3e0;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce3e8u: goto label_1ce3e8;
        case 0x1ce3ecu: goto label_1ce3ec;
        case 0x1ce3f0u: goto label_1ce3f0;
        case 0x1ce3f4u: goto label_1ce3f4;
        case 0x1ce3f8u: goto label_1ce3f8;
        case 0x1ce3fcu: goto label_1ce3fc;
        case 0x1ce400u: goto label_1ce400;
        case 0x1ce404u: goto label_1ce404;
        case 0x1ce408u: goto label_1ce408;
        case 0x1ce40cu: goto label_1ce40c;
        case 0x1ce410u: goto label_1ce410;
        case 0x1ce414u: goto label_1ce414;
        case 0x1ce418u: goto label_1ce418;
        case 0x1ce41cu: goto label_1ce41c;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce424u: goto label_1ce424;
        default: break;
    }

    ctx->pc = 0x1ce350u;

label_1ce350:
    // 0x1ce350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ce354:
    // 0x1ce354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ce358:
    // 0x1ce358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce35c:
    // 0x1ce35c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ce360:
    // 0x1ce360: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ce360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce364:
    // 0x1ce364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ce368:
    // 0x1ce368: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ce368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1ce36c:
    // 0x1ce36c: 0xc0736d2  jal         func_1CDB48
label_1ce370:
    if (ctx->pc == 0x1CE370u) {
        ctx->pc = 0x1CE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE36Cu;
        // 0x1ce370: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE374u;
        goto label_1ce374;
    }
    ctx->pc = 0x1CE36Cu;
    SET_GPR_U32(ctx, 31, 0x1CE374u);
    ctx->pc = 0x1CE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE36Cu;
    // 0x1ce370: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE36Cu, 0x1CE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE374u;
label_1ce374:
    // 0x1ce374: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce378:
    // 0x1ce378: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1ce378u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1ce37c:
    // 0x1ce37c: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x1ce37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_1ce380:
    // 0x1ce380: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ce380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ce384:
    // 0x1ce384: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ce388:
    // 0x1ce388: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ce38c:
    // 0x1ce38c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1ce38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1ce390:
    // 0x1ce390: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1ce390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_1ce394:
    // 0x1ce394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce398:
    // 0x1ce398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ce39c:
    // 0x1ce39c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce3a0:
    // 0x1ce3a0: 0x80736d8  j           func_1CDB60
label_1ce3a4:
    if (ctx->pc == 0x1CE3A4u) {
        ctx->pc = 0x1CE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3A0u;
        // 0x1ce3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3A8u;
        goto label_1ce3a8;
    }
    ctx->pc = 0x1CE3A0u;
    ctx->pc = 0x1CE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3A0u;
    // 0x1ce3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE3A8u;
label_1ce3a8:
    // 0x1ce3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce3ac:
    // 0x1ce3ac: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce3b0:
    // 0x1ce3b0: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_1ce3b4:
    // 0x1ce3b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ce3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ce3b8:
    // 0x1ce3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce3bc:
    // 0x1ce3bc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce3c0:
    // 0x1ce3c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ce3c4:
    // 0x1ce3c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ce3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ce3c8:
    // 0x1ce3c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ce3cc:
    if (ctx->pc == 0x1CE3CCu) {
        ctx->pc = 0x1CE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3C8u;
        // 0x1ce3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3D0u;
        goto label_1ce3d0;
    }
    ctx->pc = 0x1CE3C8u;
    {
        const bool branch_taken_0x1ce3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3c8) {
            ctx->pc = 0x1CE3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE3C8u;
            // 0x1ce3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE3DCu;
            goto label_1ce3dc;
        }
    }
    ctx->pc = 0x1CE3D0u;
label_1ce3d0:
    // 0x1ce3d0: 0x40f809  jalr        $v0
label_1ce3d4:
    if (ctx->pc == 0x1CE3D4u) {
        ctx->pc = 0x1CE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3D0u;
        // 0x1ce3d4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3D8u;
        goto label_1ce3d8;
    }
    ctx->pc = 0x1CE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE3D8u);
        ctx->pc = 0x1CE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3D0u;
        // 0x1ce3d4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE3D0u, 0x1CE3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE3D8u;
label_1ce3d8:
    // 0x1ce3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce3dc:
    // 0x1ce3dc: 0x3e00008  jr          $ra
label_1ce3e0:
    if (ctx->pc == 0x1CE3E0u) {
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3E4u;
        goto label_1ce3e4;
    }
    ctx->pc = 0x1CE3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x0  nop
    ctx->pc = 0x1ce3e4u;
    // NOP
label_1ce3e8:
    // 0x1ce3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ce3ec:
    // 0x1ce3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ce3f0:
    // 0x1ce3f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce3f4:
    // 0x1ce3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ce3f8:
    // 0x1ce3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ce3fc:
    // 0x1ce3fc: 0xc0736d2  jal         func_1CDB48
label_1ce400:
    if (ctx->pc == 0x1CE400u) {
        ctx->pc = 0x1CE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3FCu;
        // 0x1ce400: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE404u;
        goto label_1ce404;
    }
    ctx->pc = 0x1CE3FCu;
    SET_GPR_U32(ctx, 31, 0x1CE404u);
    ctx->pc = 0x1CE400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3FCu;
    // 0x1ce400: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE3FCu, 0x1CE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE404u;
label_1ce404:
    // 0x1ce404: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce408:
    // 0x1ce408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce40c:
    // 0x1ce40c: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_1ce410:
    // 0x1ce410: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ce410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1ce414:
    // 0x1ce414: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1ce414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1ce418:
    // 0x1ce418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce41c:
    // 0x1ce41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ce420:
    // 0x1ce420: 0x80736d8  j           func_1CDB60
label_1ce424:
    if (ctx->pc == 0x1CE424u) {
        ctx->pc = 0x1CE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE420u;
        // 0x1ce424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE428u;
        goto label_fallthrough_0x1ce420;
    }
    ctx->pc = 0x1CE420u;
    ctx->pc = 0x1CE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE420u;
    // 0x1ce424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
label_fallthrough_0x1ce420:
    ctx->pc = 0x1CE428u;
}
