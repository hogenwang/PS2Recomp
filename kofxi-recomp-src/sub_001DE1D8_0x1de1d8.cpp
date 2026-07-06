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

// Function: sub_001DE1D8
// Address: 0x1de1d8 - 0x1de5a8
void sub_001DE1D8_0x1de1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE1D8_0x1de1d8");
#endif

    switch (ctx->pc) {
        case 0x1de240u: goto label_1de240;
        case 0x1de258u: goto label_1de258;
        case 0x1de280u: goto label_1de280;
        case 0x1de2b8u: goto label_1de2b8;
        case 0x1de2d0u: goto label_1de2d0;
        case 0x1de2e8u: goto label_1de2e8;
        case 0x1de2fcu: goto label_1de2fc;
        case 0x1de308u: goto label_1de308;
        case 0x1de374u: goto label_1de374;
        case 0x1de398u: goto label_1de398;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de478u: goto label_1de478;
        case 0x1de484u: goto label_1de484;
        case 0x1de494u: goto label_1de494;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de514u: goto label_1de514;
        case 0x1de520u: goto label_1de520;
        case 0x1de538u: goto label_1de538;
        case 0x1de540u: goto label_1de540;
        case 0x1de550u: goto label_1de550;
        case 0x1de558u: goto label_1de558;
        case 0x1de560u: goto label_1de560;
        default: break;
    }

    ctx->pc = 0x1de1d8u;

label_1de1d8:
    // 0x1de1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1de1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1e4: 0x8c4603d0  lw          $a2, 0x3D0($v0)
    ctx->pc = 0x1de1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x1de1e8: 0x8c4403c8  lw          $a0, 0x3C8($v0)
    ctx->pc = 0x1de1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x1de1ec: 0x8c4503cc  lw          $a1, 0x3CC($v0)
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x1de1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1f4: 0x8072cec  j           func_1CB3B0
    ctx->pc = 0x1DE1F4u;
    ctx->pc = 0x1DE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1F4u;
    // 0x1de1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    sub_001CB3B0_0x1cb3b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1FCu;
    // 0x1de1fc: 0x0  nop
    ctx->pc = 0x1de1fcu;
    // NOP
    // 0x1de200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1de204: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1de204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1de208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de20c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1de20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1de210: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1de210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1de214: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1de214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1de218: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1de218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1de21c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1de21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1de220: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE220u;
    {
        const bool branch_taken_0x1de220 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE220u;
        // 0x1de224: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de220) {
            ctx->pc = 0x1DE238u;
            goto label_1de238;
        }
    }
    ctx->pc = 0x1DE228u;
    // 0x1de228: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de22c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1DE22Cu;
    {
        const bool branch_taken_0x1de22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE22Cu;
        // 0x1de230: 0x2484c690  addiu       $a0, $a0, -0x3970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de22c) {
            ctx->pc = 0x1DE2E0u;
            goto label_1de2e0;
        }
    }
    ctx->pc = 0x1DE234u;
    // 0x1de234: 0x0  nop
    ctx->pc = 0x1de234u;
    // NOP
label_1de238:
    // 0x1de238: 0xc077994  jal         func_1DE650
    ctx->pc = 0x1DE238u;
    SET_GPR_U32(ctx, 31, 0x1DE240u);
    ctx->pc = 0x1DE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE650u, 0x1DE238u, 0x1DE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE240u;
label_1de240:
    // 0x1de240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de248: 0x164300cd  bne         $s2, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x1DE248u;
    {
        const bool branch_taken_0x1de248 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE248u;
        // 0x1de24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de248) {
            ctx->pc = 0x1DE580u;
            goto label_1de580;
        }
    }
    ctx->pc = 0x1DE250u;
    // 0x1de250: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1DE250u;
    SET_GPR_U32(ctx, 31, 0x1DE258u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1DE250u, 0x1DE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE258u;
label_1de258:
    // 0x1de258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de25c: 0x2450006c  addiu       $s0, $v0, 0x6C
    ctx->pc = 0x1de25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1de260: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1de260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1de264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de268: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1DE268u;
    {
        const bool branch_taken_0x1de268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1DE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE268u;
        // 0x1de26c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de268) {
            ctx->pc = 0x1DE2A8u;
            goto label_1de2a8;
        }
    }
    ctx->pc = 0x1DE270u;
    // 0x1de270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de274: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1de274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
label_1de280:
    // 0x1de280: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1de280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1de284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE284u;
    {
        const bool branch_taken_0x1de284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE284u;
        // 0x1de288: 0x2463050c  addiu       $v1, $v1, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de284) {
            ctx->pc = 0x1DE2A4u;
            goto label_1de2a4;
        }
    }
    ctx->pc = 0x1DE28Cu;
    // 0x1de28c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1de28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de294: 0x0  nop
    ctx->pc = 0x1de294u;
    // NOP
    // 0x1de298: 0x0  nop
    ctx->pc = 0x1de298u;
    // NOP
    // 0x1de29c: 0x5045fff8  beql        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DE29Cu;
    {
        const bool branch_taken_0x1de29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1de29c) {
            ctx->pc = 0x1DE2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE29Cu;
            // 0x1de2a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de280;
        }
    }
    ctx->pc = 0x1DE2A4u;
label_1de2a4:
    // 0x1de2a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1de2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1de2a8:
    // 0x1de2a8: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE2A8u;
    {
        const bool branch_taken_0x1de2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de2a8) {
            ctx->pc = 0x1DE2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE2A8u;
            // 0x1de2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE2C8u;
            goto label_1de2c8;
        }
    }
    ctx->pc = 0x1DE2B0u;
    // 0x1de2b0: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DE2B0u;
    SET_GPR_U32(ctx, 31, 0x1DE2B8u);
    ctx->pc = 0x1DE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2B0u;
    // 0x1de2b4: 0x2404fff5  addiu       $a0, $zero, -0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1DE2B0u, 0x1DE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2B8u;
label_1de2b8:
    // 0x1de2b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de2bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE2BCu;
    {
        const bool branch_taken_0x1de2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2BCu;
        // 0x1de2c0: 0x2484c6c0  addiu       $a0, $a0, -0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2bc) {
            ctx->pc = 0x1DE2E0u;
            goto label_1de2e0;
        }
    }
    ctx->pc = 0x1DE2C4u;
    // 0x1de2c4: 0x0  nop
    ctx->pc = 0x1de2c4u;
    // NOP
label_1de2c8:
    // 0x1de2c8: 0xc07796a  jal         func_1DE5A8
    ctx->pc = 0x1DE2C8u;
    SET_GPR_U32(ctx, 31, 0x1DE2D0u);
    ctx->pc = 0x1DE2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2C8u;
    // 0x1de2cc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5A8u, 0x1DE2C8u, 0x1DE2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2D0u;
label_1de2d0:
    // 0x1de2d0: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE2D0u;
    {
        const bool branch_taken_0x1de2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1DE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2D0u;
        // 0x1de2d4: 0x2406050c  addiu       $a2, $zero, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2d0) {
            ctx->pc = 0x1DE2F0u;
            goto label_1de2f0;
        }
    }
    ctx->pc = 0x1DE2D8u;
    // 0x1de2d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de2dc: 0x2484c710  addiu       $a0, $a0, -0x38F0
    ctx->pc = 0x1de2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952720));
label_1de2e0:
    // 0x1de2e0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE2E0u;
    SET_GPR_U32(ctx, 31, 0x1DE2E8u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE2E0u, 0x1DE2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2E8u;
label_1de2e8:
    // 0x1de2e8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1DE2E8u;
    {
        const bool branch_taken_0x1de2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2E8u;
        // 0x1de2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2e8) {
            ctx->pc = 0x1DE580u;
            goto label_1de580;
        }
    }
    ctx->pc = 0x1DE2F0u;
label_1de2f0:
    // 0x1de2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1DE2F4u;
    SET_GPR_U32(ctx, 31, 0x1DE2FCu);
    ctx->pc = 0x1DE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2F4u;
    // 0x1de2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1DE2F4u, 0x1DE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2FCu;
label_1de2fc:
    // 0x1de2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de300: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1DE300u;
    SET_GPR_U32(ctx, 31, 0x1DE308u);
    ctx->pc = 0x1DE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE300u;
    // 0x1de304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1DE300u, 0x1DE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE308u;
label_1de308:
    // 0x1de308: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1de308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de30c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1de30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1de310: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x1de310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de314: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x1de314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de318: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x1de318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de31c: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x1de31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de320: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x1de320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de324: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x1de324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de328: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x1de328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de32c: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x1de32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de330: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x1de330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de334: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x1de334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de338: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x1de338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de33c: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x1de33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de340: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x1de340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de344: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x1de344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de348: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x1de348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de34c: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x1de34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1de350: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x1de350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de354: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x1de354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de358: 0xb202002f  sdl         $v0, 0x2F($s0)
    ctx->pc = 0x1de358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de35c: 0xb6020028  sdr         $v0, 0x28($s0)
    ctx->pc = 0x1de35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de360: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x1de360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de364: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x1de364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de36c: 0xc0775a8  jal         func_1DD6A0
    ctx->pc = 0x1DE36Cu;
    SET_GPR_U32(ctx, 31, 0x1DE374u);
    ctx->pc = 0x1DE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE36Cu;
    // 0x1de370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6A0u, 0x1DE36Cu, 0x1DE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE374u;
label_1de374:
    // 0x1de374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de378: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE378u;
    {
        const bool branch_taken_0x1de378 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE378u;
        // 0x1de37c: 0xae12003c  sw          $s2, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de378) {
            ctx->pc = 0x1DE390u;
            goto label_1de390;
        }
    }
    ctx->pc = 0x1DE380u;
    // 0x1de380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de384: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1DE384u;
    {
        const bool branch_taken_0x1de384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE384u;
        // 0x1de388: 0x2484c750  addiu       $a0, $a0, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de384) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE38Cu;
    // 0x1de38c: 0x0  nop
    ctx->pc = 0x1de38cu;
    // NOP
label_1de390:
    // 0x1de390: 0xc0787f8  jal         func_1E1FE0
    ctx->pc = 0x1DE390u;
    SET_GPR_U32(ctx, 31, 0x1DE398u);
    ctx->pc = 0x1DE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE390u;
    // 0x1de394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1FE0u, 0x1DE390u, 0x1DE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE398u;
label_1de398:
    // 0x1de398: 0xc077792  jal         func_1DDE48
    ctx->pc = 0x1DE398u;
    SET_GPR_U32(ctx, 31, 0x1DE3A0u);
    ctx->pc = 0x1DE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE398u;
    // 0x1de39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDE48u, 0x1DE398u, 0x1DE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3A0u;
label_1de3a0:
    // 0x1de3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1de3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1de3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1de3ac: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1de3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1de3b0: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1de3b4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1de3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1de3b8: 0xc0773b6  jal         func_1DCED8
    ctx->pc = 0x1DE3B8u;
    SET_GPR_U32(ctx, 31, 0x1DE3C0u);
    ctx->pc = 0x1DE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B8u;
    // 0x1de3bc: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCED8u, 0x1DE3B8u, 0x1DE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3C0u;
label_1de3c0:
    // 0x1de3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1de3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1de3c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3cc: 0xc0777fc  jal         func_1DDFF0
    ctx->pc = 0x1DE3CCu;
    SET_GPR_U32(ctx, 31, 0x1DE3D4u);
    ctx->pc = 0x1DE3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3CCu;
    // 0x1de3d0: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDFF0u, 0x1DE3CCu, 0x1DE3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3D4u;
label_1de3d4:
    // 0x1de3d4: 0xc077876  jal         func_1DE1D8
    ctx->pc = 0x1DE3D4u;
    SET_GPR_U32(ctx, 31, 0x1DE3DCu);
    ctx->pc = 0x1DE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3D4u;
    // 0x1de3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1D8u;
    goto label_1de1d8;
    ctx->pc = 0x1DE3DCu;
label_1de3dc:
    // 0x1de3dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE3DCu;
    {
        const bool branch_taken_0x1de3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3DCu;
        // 0x1de3e0: 0xae0203c4  sw          $v0, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3dc) {
            ctx->pc = 0x1DE3F0u;
            goto label_1de3f0;
        }
    }
    ctx->pc = 0x1DE3E4u;
    // 0x1de3e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de3e8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1DE3E8u;
    {
        const bool branch_taken_0x1de3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3E8u;
        // 0x1de3ec: 0x2484c778  addiu       $a0, $a0, -0x3888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3e8) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE3F0u;
label_1de3f0:
    // 0x1de3f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3f4: 0xc072a66  jal         func_1CA998
    ctx->pc = 0x1DE3F4u;
    SET_GPR_U32(ctx, 31, 0x1DE3FCu);
    ctx->pc = 0x1DE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3F4u;
    // 0x1de3f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA998u, 0x1DE3F4u, 0x1DE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3FCu;
label_1de3fc:
    // 0x1de3fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE3FCu;
    {
        const bool branch_taken_0x1de3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3FCu;
        // 0x1de400: 0xae0203e4  sw          $v0, 0x3E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3fc) {
            ctx->pc = 0x1DE410u;
            goto label_1de410;
        }
    }
    ctx->pc = 0x1DE404u;
    // 0x1de404: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de408: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1DE408u;
    {
        const bool branch_taken_0x1de408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE408u;
        // 0x1de40c: 0x2484c7a0  addiu       $a0, $a0, -0x3860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de408) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE410u;
label_1de410:
    // 0x1de410: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1de410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de414: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1de414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de418: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1de418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x1de41c: 0x26130044  addiu       $s3, $s0, 0x44
    ctx->pc = 0x1de41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1de420: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1de420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1de424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de428: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1de428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1de42c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1de42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de430: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1de430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1de434: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de438: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1de438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1de43c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1de43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1de440: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1de440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1de444: 0xc07ecd4  jal         func_1FB350
    ctx->pc = 0x1DE444u;
    SET_GPR_U32(ctx, 31, 0x1DE44Cu);
    ctx->pc = 0x1DE448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE444u;
    // 0x1de448: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB350u, 0x1DE444u, 0x1DE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE44Cu;
label_1de44c:
    // 0x1de44c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE44Cu;
    {
        const bool branch_taken_0x1de44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de44c) {
            ctx->pc = 0x1DE450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE44Cu;
            // 0x1de450: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE454u;
            goto label_1de454;
        }
    }
    ctx->pc = 0x1DE454u;
label_1de454:
    // 0x1de454: 0xae14006c  sw          $s4, 0x6C($s0)
    ctx->pc = 0x1de454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 20));
    // 0x1de458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de45c: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x1de45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de464: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x1de464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de468: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x1de468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de46c: 0xa2000073  sb          $zero, 0x73($s0)
    ctx->pc = 0x1de46cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de470: 0xc079e1e  jal         func_1E7878
    ctx->pc = 0x1DE470u;
    SET_GPR_U32(ctx, 31, 0x1DE478u);
    ctx->pc = 0x1DE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE470u;
    // 0x1de474: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7878u, 0x1DE470u, 0x1DE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE478u;
label_1de478:
    // 0x1de478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de47c: 0xc079e22  jal         func_1E7888
    ctx->pc = 0x1DE47Cu;
    SET_GPR_U32(ctx, 31, 0x1DE484u);
    ctx->pc = 0x1DE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE47Cu;
    // 0x1de480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7888u, 0x1DE47Cu, 0x1DE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x1de484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x1de488: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1de488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1de48c: 0xc079f58  jal         func_1E7D60
    ctx->pc = 0x1DE48Cu;
    SET_GPR_U32(ctx, 31, 0x1DE494u);
    ctx->pc = 0x1DE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE48Cu;
    // 0x1de490: 0x8e0403c4  lw          $a0, 0x3C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D60u, 0x1DE48Cu, 0x1DE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE494u;
label_1de494:
    // 0x1de494: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DE494u;
    {
        const bool branch_taken_0x1de494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE494u;
        // 0x1de498: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de494) {
            ctx->pc = 0x1DE538u;
            goto label_1de538;
        }
    }
    ctx->pc = 0x1DE49Cu;
    // 0x1de49c: 0xc078686  jal         func_1E1A18
    ctx->pc = 0x1DE49Cu;
    SET_GPR_U32(ctx, 31, 0x1DE4A4u);
    ctx->pc = 0x1DE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE49Cu;
    // 0x1de4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A18u, 0x1DE49Cu, 0x1DE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4A4u;
label_1de4a4:
    // 0x1de4a4: 0xc07174a  jal         func_1C5D28
    ctx->pc = 0x1DE4A4u;
    SET_GPR_U32(ctx, 31, 0x1DE4ACu);
    ctx->pc = 0x1DE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4A4u;
    // 0x1de4a8: 0x8e0403c4  lw          $a0, 0x3C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D28u, 0x1DE4A4u, 0x1DE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4ACu;
label_1de4ac:
    // 0x1de4ac: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1de4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1de4b0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1de4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1de4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4b8: 0xc0717ba  jal         func_1C5EE8
    ctx->pc = 0x1DE4B8u;
    SET_GPR_U32(ctx, 31, 0x1DE4C0u);
    ctx->pc = 0x1DE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4B8u;
    // 0x1de4bc: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5EE8u, 0x1DE4B8u, 0x1DE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4C0u;
label_1de4c0:
    // 0x1de4c0: 0xc0779b6  jal         func_1DE6D8
    ctx->pc = 0x1DE4C0u;
    SET_GPR_U32(ctx, 31, 0x1DE4C8u);
    ctx->pc = 0x1DE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4C0u;
    // 0x1de4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6D8u, 0x1DE4C0u, 0x1DE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4C8u;
label_1de4c8:
    // 0x1de4c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de4cc: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DE4CCu;
    {
        const bool branch_taken_0x1de4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de4cc) {
            ctx->pc = 0x1DE538u;
            goto label_1de538;
        }
    }
    ctx->pc = 0x1DE4D4u;
    // 0x1de4d4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1de4d8: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1de4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1de4dc: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1de4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1de4e0: 0xc078e84  jal         func_1E3A10
    ctx->pc = 0x1DE4E0u;
    SET_GPR_U32(ctx, 31, 0x1DE4E8u);
    ctx->pc = 0x1DE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4E0u;
    // 0x1de4e4: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A10u, 0x1DE4E0u, 0x1DE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4E8u;
label_1de4e8:
    // 0x1de4e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE4E8u;
    {
        const bool branch_taken_0x1de4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de4e8) {
            ctx->pc = 0x1DE4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE4E8u;
            // 0x1de4ec: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE500u;
            goto label_1de500;
        }
    }
    ctx->pc = 0x1DE4F0u;
    // 0x1de4f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de4f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DE4F4u;
    {
        const bool branch_taken_0x1de4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F4u;
        // 0x1de4f8: 0x2484c7c8  addiu       $a0, $a0, -0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f4) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE4FCu;
    // 0x1de4fc: 0x0  nop
    ctx->pc = 0x1de4fcu;
    // NOP
label_1de500:
    // 0x1de500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de504: 0xc079096  jal         func_1E4258
    ctx->pc = 0x1DE504u;
    SET_GPR_U32(ctx, 31, 0x1DE50Cu);
    ctx->pc = 0x1DE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE504u;
    // 0x1de508: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4258u, 0x1DE504u, 0x1DE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE50Cu;
label_1de50c:
    // 0x1de50c: 0xc079188  jal         func_1E4620
    ctx->pc = 0x1DE50Cu;
    SET_GPR_U32(ctx, 31, 0x1DE514u);
    ctx->pc = 0x1DE510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE50Cu;
    // 0x1de510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4620u, 0x1DE50Cu, 0x1DE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE514u;
label_1de514:
    // 0x1de514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de518: 0xc0791ac  jal         func_1E46B0
    ctx->pc = 0x1DE518u;
    SET_GPR_U32(ctx, 31, 0x1DE520u);
    ctx->pc = 0x1DE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE518u;
    // 0x1de51c: 0xae020380  sw          $v0, 0x380($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E46B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E46B0u, 0x1DE518u, 0x1DE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE520u;
label_1de520:
    // 0x1de520: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE520u;
    {
        const bool branch_taken_0x1de520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de520) {
            ctx->pc = 0x1DE548u;
            goto label_1de548;
        }
    }
    ctx->pc = 0x1DE528u;
    // 0x1de528: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de52c: 0x2484c7e8  addiu       $a0, $a0, -0x3818
    ctx->pc = 0x1de52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952936));
label_1de530:
    // 0x1de530: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE530u;
    SET_GPR_U32(ctx, 31, 0x1DE538u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE530u, 0x1DE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE538u;
label_1de538:
    // 0x1de538: 0xc0779e8  jal         func_1DE7A0
    ctx->pc = 0x1DE538u;
    SET_GPR_U32(ctx, 31, 0x1DE540u);
    ctx->pc = 0x1DE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE538u;
    // 0x1de53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7A0u, 0x1DE538u, 0x1DE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE540u;
label_1de540:
    // 0x1de540: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DE540u;
    {
        const bool branch_taken_0x1de540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE540u;
        // 0x1de544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de540) {
            ctx->pc = 0x1DE580u;
            goto label_1de580;
        }
    }
    ctx->pc = 0x1DE548u;
label_1de548:
    // 0x1de548: 0xc0791c4  jal         func_1E4710
    ctx->pc = 0x1DE548u;
    SET_GPR_U32(ctx, 31, 0x1DE550u);
    ctx->pc = 0x1DE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE548u;
    // 0x1de54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4710u, 0x1DE548u, 0x1DE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE550u;
label_1de550:
    // 0x1de550: 0xc078008  jal         func_1E0020
    ctx->pc = 0x1DE550u;
    SET_GPR_U32(ctx, 31, 0x1DE558u);
    ctx->pc = 0x1DE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE550u;
    // 0x1de554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0020u, 0x1DE550u, 0x1DE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE558u;
label_1de558:
    // 0x1de558: 0xc078038  jal         func_1E00E0
    ctx->pc = 0x1DE558u;
    SET_GPR_U32(ctx, 31, 0x1DE560u);
    ctx->pc = 0x1DE55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE558u;
    // 0x1de55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00E0u, 0x1DE558u, 0x1DE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1de560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x1de564: 0xae150500  sw          $s5, 0x500($s0)
    ctx->pc = 0x1de564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 21));
    // 0x1de568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de56c: 0xae0004ec  sw          $zero, 0x4EC($s0)
    ctx->pc = 0x1de56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 0));
    // 0x1de570: 0xae0004dc  sw          $zero, 0x4DC($s0)
    ctx->pc = 0x1de570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1244), GPR_U32(ctx, 0));
    // 0x1de574: 0xae0004e0  sw          $zero, 0x4E0($s0)
    ctx->pc = 0x1de574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 0));
    // 0x1de578: 0xae0004e4  sw          $zero, 0x4E4($s0)
    ctx->pc = 0x1de578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 0));
    // 0x1de57c: 0xae000504  sw          $zero, 0x504($s0)
    ctx->pc = 0x1de57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
label_1de580:
    // 0x1de580: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1de580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de584: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1de584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de588: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1de588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de58c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1de58cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de590: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1de590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de594: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1de594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de598: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1de598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE59Cu;
        // 0x1de5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5A4u;
    // 0x1de5a4: 0x0  nop
    ctx->pc = 0x1de5a4u;
    // NOP
}
