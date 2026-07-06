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

// Function: sub_001EF338
// Address: 0x1ef338 - 0x1ef430
void sub_001EF338_0x1ef338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF338_0x1ef338");
#endif

    switch (ctx->pc) {
        case 0x1ef358u: goto label_1ef358;
        case 0x1ef368u: goto label_1ef368;
        case 0x1ef378u: goto label_1ef378;
        case 0x1ef394u: goto label_1ef394;
        case 0x1ef3a8u: goto label_1ef3a8;
        case 0x1ef3b4u: goto label_1ef3b4;
        case 0x1ef3c4u: goto label_1ef3c4;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef3f4u: goto label_1ef3f4;
        default: break;
    }

    ctx->pc = 0x1ef338u;

    // 0x1ef338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef33c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ef33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef34c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef350: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EF350u;
    SET_GPR_U32(ctx, 31, 0x1EF358u);
    ctx->pc = 0x1EF354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF350u;
    // 0x1ef354: 0x8e111fd4  lw          $s1, 0x1FD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EF350u, 0x1EF358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF358u;
label_1ef358:
    // 0x1ef358: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF358u;
    {
        const bool branch_taken_0x1ef358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF358u;
        // 0x1ef35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef358) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF360u;
    // 0x1ef360: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EF360u;
    SET_GPR_U32(ctx, 31, 0x1EF368u);
    ctx->pc = 0x1EF364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF360u;
    // 0x1ef364: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EF360u, 0x1EF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF368u;
label_1ef368:
    // 0x1ef368: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF368u;
    {
        const bool branch_taken_0x1ef368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF368u;
        // 0x1ef36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef368) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF370u;
    // 0x1ef370: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1EF370u;
    SET_GPR_U32(ctx, 31, 0x1EF378u);
    ctx->pc = 0x1EF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF370u;
    // 0x1ef374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADE0u, 0x1EF370u, 0x1EF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF378u;
label_1ef378:
    // 0x1ef378: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF378u;
    {
        const bool branch_taken_0x1ef378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF378u;
        // 0x1ef37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef378) {
            ctx->pc = 0x1EF3ACu;
            goto label_1ef3ac;
        }
    }
    ctx->pc = 0x1EF380u;
    // 0x1ef380: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef384: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF384u;
    {
        const bool branch_taken_0x1ef384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef384) {
            ctx->pc = 0x1EF3ACu;
            goto label_1ef3ac;
        }
    }
    ctx->pc = 0x1EF38Cu;
    // 0x1ef38c: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1EF38Cu;
    SET_GPR_U32(ctx, 31, 0x1EF394u);
    ctx->pc = 0x1EF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF38Cu;
    // 0x1ef390: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9F0u, 0x1EF38Cu, 0x1EF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF394u;
label_1ef394:
    // 0x1ef394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF394u;
    {
        const bool branch_taken_0x1ef394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF394u;
        // 0x1ef398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef394) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF39Cu;
    // 0x1ef39c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ef39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef3a0: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1EF3A0u;
    SET_GPR_U32(ctx, 31, 0x1EF3A8u);
    ctx->pc = 0x1EF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3A0u;
    // 0x1ef3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1EF3A0u, 0x1EF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3A8u;
label_1ef3a8:
    // 0x1ef3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3ac:
    // 0x1ef3ac: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EF3ACu;
    SET_GPR_U32(ctx, 31, 0x1EF3B4u);
    ctx->pc = 0x1EF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3ACu;
    // 0x1ef3b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EF3ACu, 0x1EF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3B4u;
label_1ef3b4:
    // 0x1ef3b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EF3B4u;
    {
        const bool branch_taken_0x1ef3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3B4u;
        // 0x1ef3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3b4) {
            ctx->pc = 0x1EF418u;
            goto label_1ef418;
        }
    }
    ctx->pc = 0x1EF3BCu;
    // 0x1ef3bc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EF3BCu;
    SET_GPR_U32(ctx, 31, 0x1EF3C4u);
    ctx->pc = 0x1EF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3BCu;
    // 0x1ef3c0: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EF3BCu, 0x1EF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3C4u;
label_1ef3c4:
    // 0x1ef3c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EF3C4u;
    {
        const bool branch_taken_0x1ef3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3C4u;
        // 0x1ef3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3c4) {
            ctx->pc = 0x1EF418u;
            goto label_1ef418;
        }
    }
    ctx->pc = 0x1EF3CCu;
    // 0x1ef3cc: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1EF3CCu;
    SET_GPR_U32(ctx, 31, 0x1EF3D4u);
    ctx->pc = 0x1EF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3CCu;
    // 0x1ef3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADE0u, 0x1EF3CCu, 0x1EF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3D4u;
label_1ef3d4:
    // 0x1ef3d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF3D4u;
    {
        const bool branch_taken_0x1ef3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3d4) {
            ctx->pc = 0x1EF3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF3D4u;
            // 0x1ef3d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF41Cu;
            goto label_1ef41c;
        }
    }
    ctx->pc = 0x1EF3DCu;
    // 0x1ef3dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ef3e0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF3E0u;
    {
        const bool branch_taken_0x1ef3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3e0) {
            ctx->pc = 0x1EF3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF3E0u;
            // 0x1ef3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF41Cu;
            goto label_1ef41c;
        }
    }
    ctx->pc = 0x1EF3E8u;
    // 0x1ef3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3ec: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1EF3ECu;
    SET_GPR_U32(ctx, 31, 0x1EF3F4u);
    ctx->pc = 0x1EF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3ECu;
    // 0x1ef3f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9F0u, 0x1EF3ECu, 0x1EF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3F4u;
label_1ef3f4:
    // 0x1ef3f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF3F4u;
    {
        const bool branch_taken_0x1ef3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3F4u;
        // 0x1ef3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3f4) {
            ctx->pc = 0x1EF418u;
            goto label_1ef418;
        }
    }
    ctx->pc = 0x1EF3FCu;
    // 0x1ef3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef404: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ef408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef40c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef410: 0x807eb90  j           func_1FAE40
    ctx->pc = 0x1EF410u;
    ctx->pc = 0x1EF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF410u;
    // 0x1ef414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    sub_001FAE40_0x1fae40(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF418u;
label_1ef418:
    // 0x1ef418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef41c:
    // 0x1ef41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef424: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF424u;
        // 0x1ef428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF42Cu;
    // 0x1ef42c: 0x0  nop
    ctx->pc = 0x1ef42cu;
    // NOP
}
