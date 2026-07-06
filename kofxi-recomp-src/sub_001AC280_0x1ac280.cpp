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

// Function: sub_001AC280
// Address: 0x1ac280 - 0x1ac3d0
void sub_001AC280_0x1ac280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC280_0x1ac280");
#endif

    switch (ctx->pc) {
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        default: break;
    }

    ctx->pc = 0x1ac280u;

label_1ac280:
    // 0x1ac280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac284:
    // 0x1ac284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac288:
    // 0x1ac288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ac28c:
    // 0x1ac28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac290:
    // 0x1ac290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ac294:
    // 0x1ac294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ac298:
    // 0x1ac298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ac298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ac29c:
    // 0x1ac29c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ac2a0:
    // 0x1ac2a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ac2a4:
    // 0x1ac2a4: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_1ac2a8:
    if (ctx->pc == 0x1AC2A8u) {
        ctx->pc = 0x1AC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A4u;
        // 0x1ac2a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2ACu;
        goto label_1ac2ac;
    }
    ctx->pc = 0x1AC2A4u;
    {
        const bool branch_taken_0x1ac2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac2a4) {
            ctx->pc = 0x1AC2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2A4u;
            // 0x1ac2a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC2F4u;
            goto label_1ac2f4;
        }
    }
    ctx->pc = 0x1AC2ACu;
label_1ac2ac:
    // 0x1ac2ac: 0xc06f700  jal         func_1BDC00
label_1ac2b0:
    if (ctx->pc == 0x1AC2B0u) {
        ctx->pc = 0x1AC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2ACu;
        // 0x1ac2b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B4u;
        goto label_1ac2b4;
    }
    ctx->pc = 0x1AC2ACu;
    SET_GPR_U32(ctx, 31, 0x1AC2B4u);
    ctx->pc = 0x1AC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2ACu;
    // 0x1ac2b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AC2ACu, 0x1AC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2B4u;
label_1ac2b4:
    // 0x1ac2b4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1ac2b8:
    if (ctx->pc == 0x1AC2B8u) {
        ctx->pc = 0x1AC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2B4u;
        // 0x1ac2b8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2BCu;
        goto label_1ac2bc;
    }
    ctx->pc = 0x1AC2B4u;
    {
        const bool branch_taken_0x1ac2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac2b4) {
            ctx->pc = 0x1AC2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2B4u;
            // 0x1ac2b8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC2F0u;
            goto label_1ac2f0;
        }
    }
    ctx->pc = 0x1AC2BCu;
label_1ac2bc:
    // 0x1ac2bc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1ac2c0:
    // 0x1ac2c0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1ac2c4:
    // 0x1ac2c4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1ac2c8:
    // 0x1ac2c8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1ac2cc:
    // 0x1ac2cc: 0x40f809  jalr        $v0
label_1ac2d0:
    if (ctx->pc == 0x1AC2D0u) {
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2D4u;
        goto label_1ac2d4;
    }
    ctx->pc = 0x1AC2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC2D4u);
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2CCu, 0x1AC2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC2D4u;
label_1ac2d4:
    // 0x1ac2d4: 0xc06afcc  jal         func_1ABF30
label_1ac2d8:
    if (ctx->pc == 0x1AC2D8u) {
        ctx->pc = 0x1AC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2D4u;
        // 0x1ac2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2DCu;
        goto label_1ac2dc;
    }
    ctx->pc = 0x1AC2D4u;
    SET_GPR_U32(ctx, 31, 0x1AC2DCu);
    ctx->pc = 0x1AC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D4u;
    // 0x1ac2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF30u, 0x1AC2D4u, 0x1AC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2DCu;
label_1ac2dc:
    // 0x1ac2dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac2e0:
    // 0x1ac2e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac2e4:
    // 0x1ac2e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac2e8:
    if (ctx->pc == 0x1AC2E8u) {
        ctx->pc = 0x1AC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E4u;
        // 0x1ac2e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2ECu;
        goto label_1ac2ec;
    }
    ctx->pc = 0x1AC2E4u;
    {
        const bool branch_taken_0x1ac2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E4u;
        // 0x1ac2e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2e4) {
            ctx->pc = 0x1AC2F4u;
            goto label_1ac2f4;
        }
    }
    ctx->pc = 0x1AC2ECu;
label_1ac2ec:
    // 0x1ac2ec: 0x0  nop
    ctx->pc = 0x1ac2ecu;
    // NOP
label_1ac2f0:
    // 0x1ac2f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac2f4:
    // 0x1ac2f4: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_1ac2f8:
    if (ctx->pc == 0x1AC2F8u) {
        ctx->pc = 0x1AC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F4u;
        // 0x1ac2f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2FCu;
        goto label_1ac2fc;
    }
    ctx->pc = 0x1AC2F4u;
    {
        const bool branch_taken_0x1ac2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac2f4) {
            ctx->pc = 0x1AC2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2F4u;
            // 0x1ac2f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3B8u;
            goto label_1ac3b8;
        }
    }
    ctx->pc = 0x1AC2FCu;
label_1ac2fc:
    // 0x1ac2fc: 0xc06f744  jal         func_1BDD10
label_1ac300:
    if (ctx->pc == 0x1AC300u) {
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC304u;
        goto label_1ac304;
    }
    ctx->pc = 0x1AC2FCu;
    SET_GPR_U32(ctx, 31, 0x1AC304u);
    ctx->pc = 0x1AC300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2FCu;
    // 0x1ac300: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD10u, 0x1AC2FCu, 0x1AC304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC304u;
label_1ac304:
    // 0x1ac304: 0xc06f700  jal         func_1BDC00
label_1ac308:
    if (ctx->pc == 0x1AC308u) {
        ctx->pc = 0x1AC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC304u;
        // 0x1ac308: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC30Cu;
        goto label_1ac30c;
    }
    ctx->pc = 0x1AC304u;
    SET_GPR_U32(ctx, 31, 0x1AC30Cu);
    ctx->pc = 0x1AC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC304u;
    // 0x1ac308: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AC304u, 0x1AC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC30Cu;
label_1ac30c:
    // 0x1ac30c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ac30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac310:
    // 0x1ac310: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_1ac314:
    if (ctx->pc == 0x1AC314u) {
        ctx->pc = 0x1AC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC310u;
        // 0x1ac314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC318u;
        goto label_1ac318;
    }
    ctx->pc = 0x1AC310u;
    {
        const bool branch_taken_0x1ac310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac310) {
            ctx->pc = 0x1AC314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC310u;
            // 0x1ac314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3B8u;
            goto label_1ac3b8;
        }
    }
    ctx->pc = 0x1AC318u;
label_1ac318:
    // 0x1ac318: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1ac31c:
    // 0x1ac31c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ac320:
    if (ctx->pc == 0x1AC320u) {
        ctx->pc = 0x1AC324u;
        goto label_1ac324;
    }
    ctx->pc = 0x1AC31Cu;
    {
        const bool branch_taken_0x1ac31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac31c) {
            ctx->pc = 0x1AC388u;
            goto label_1ac388;
        }
    }
    ctx->pc = 0x1AC324u;
label_1ac324:
    // 0x1ac324: 0xc06b48e  jal         func_1AD238
label_1ac328:
    if (ctx->pc == 0x1AC328u) {
        ctx->pc = 0x1AC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC324u;
        // 0x1ac328: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC32Cu;
        goto label_1ac32c;
    }
    ctx->pc = 0x1AC324u;
    SET_GPR_U32(ctx, 31, 0x1AC32Cu);
    ctx->pc = 0x1AC328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC324u;
    // 0x1ac328: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1AC324u, 0x1AC32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC32Cu;
label_1ac32c:
    // 0x1ac32c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ac32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ac330:
    // 0x1ac330: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ac330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ac334:
    // 0x1ac334: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_1ac338:
    if (ctx->pc == 0x1AC338u) {
        ctx->pc = 0x1AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC334u;
        // 0x1ac338: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC33Cu;
        goto label_1ac33c;
    }
    ctx->pc = 0x1AC334u;
    {
        const bool branch_taken_0x1ac334 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC334u;
        // 0x1ac338: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac334) {
            ctx->pc = 0x1AC380u;
            goto label_1ac380;
        }
    }
    ctx->pc = 0x1AC33Cu;
label_1ac33c:
    // 0x1ac33c: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1ac340:
    // 0x1ac340: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1ac340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ac344:
    // 0x1ac344: 0x0  nop
    ctx->pc = 0x1ac344u;
    // NOP
label_1ac348:
    // 0x1ac348: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x1ac348u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1ac34c:
    // 0x1ac34c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ac34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1ac350:
    // 0x1ac350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac354:
    // 0x1ac354: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1ac354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1ac358:
    // 0x1ac358: 0x8e63e694  lw          $v1, -0x196C($s3)
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960788)));
label_1ac35c:
    // 0x1ac35c: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x1ac35cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1ac360:
    // 0x1ac360: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1ac360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1ac364:
    // 0x1ac364: 0x60f809  jalr        $v1
label_1ac368:
    if (ctx->pc == 0x1AC368u) {
        ctx->pc = 0x1AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC364u;
        // 0x1ac368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC36Cu;
        goto label_1ac36c;
    }
    ctx->pc = 0x1AC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC36Cu);
        ctx->pc = 0x1AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC364u;
        // 0x1ac368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC364u, 0x1AC36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC36Cu;
label_1ac36c:
    // 0x1ac36c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ac36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ac370:
    // 0x1ac370: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ac374:
    // 0x1ac374: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ac374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ac378:
    // 0x1ac378: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1ac37c:
    if (ctx->pc == 0x1AC37Cu) {
        ctx->pc = 0x1AC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC378u;
        // 0x1ac37c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC380u;
        goto label_1ac380;
    }
    ctx->pc = 0x1AC378u;
    {
        const bool branch_taken_0x1ac378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac378) {
            ctx->pc = 0x1AC37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC378u;
            // 0x1ac37c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac348;
        }
    }
    ctx->pc = 0x1AC380u;
label_1ac380:
    // 0x1ac380: 0xc06b494  jal         func_1AD250
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    SET_GPR_U32(ctx, 31, 0x1AC388u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1AC380u, 0x1AC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0xc06b03e  jal         func_1AC0F8
label_1ac38c:
    if (ctx->pc == 0x1AC38Cu) {
        ctx->pc = 0x1AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC388u;
        // 0x1ac38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC390u;
        goto label_1ac390;
    }
    ctx->pc = 0x1AC388u;
    SET_GPR_U32(ctx, 31, 0x1AC390u);
    ctx->pc = 0x1AC38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC388u;
    // 0x1ac38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC0F8u, 0x1AC388u, 0x1AC390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC390u;
label_1ac390:
    // 0x1ac390: 0xc06f738  jal         func_1BDCE0
label_1ac394:
    if (ctx->pc == 0x1AC394u) {
        ctx->pc = 0x1AC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC390u;
        // 0x1ac394: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC398u;
        goto label_1ac398;
    }
    ctx->pc = 0x1AC390u;
    SET_GPR_U32(ctx, 31, 0x1AC398u);
    ctx->pc = 0x1AC394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC390u;
    // 0x1ac394: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE0u, 0x1AC390u, 0x1AC398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC398u;
label_1ac398:
    // 0x1ac398: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1ac398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ac39c:
    // 0x1ac39c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1ac39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1ac3a0:
    // 0x1ac3a0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1ac3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1ac3a4:
    // 0x1ac3a4: 0x60f809  jalr        $v1
label_1ac3a8:
    if (ctx->pc == 0x1AC3A8u) {
        ctx->pc = 0x1AC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A4u;
        // 0x1ac3a8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3ACu;
        goto label_1ac3ac;
    }
    ctx->pc = 0x1AC3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC3ACu);
        ctx->pc = 0x1AC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A4u;
        // 0x1ac3a8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC3A4u, 0x1AC3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC3ACu;
label_1ac3ac:
    // 0x1ac3ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac3b0:
    // 0x1ac3b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac3b4:
    // 0x1ac3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac3b8:
    // 0x1ac3b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac3bc:
    // 0x1ac3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac3c0:
    // 0x1ac3c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ac3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ac3c4:
    // 0x1ac3c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac3c8:
    // 0x1ac3c8: 0x3e00008  jr          $ra
label_1ac3cc:
    if (ctx->pc == 0x1AC3CCu) {
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D0u;
        goto label_fallthrough_0x1ac3c8;
    }
    ctx->pc = 0x1AC3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac3c8:
    ctx->pc = 0x1AC3D0u;
}
