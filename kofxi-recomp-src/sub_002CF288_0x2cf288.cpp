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

// Function: sub_002CF288
// Address: 0x2cf288 - 0x2cf358
void sub_002CF288_0x2cf288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF288_0x2cf288");
#endif

    switch (ctx->pc) {
        case 0x2cf288u: goto label_2cf288;
        case 0x2cf28cu: goto label_2cf28c;
        case 0x2cf290u: goto label_2cf290;
        case 0x2cf294u: goto label_2cf294;
        case 0x2cf298u: goto label_2cf298;
        case 0x2cf29cu: goto label_2cf29c;
        case 0x2cf2a0u: goto label_2cf2a0;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2a8u: goto label_2cf2a8;
        case 0x2cf2acu: goto label_2cf2ac;
        case 0x2cf2b0u: goto label_2cf2b0;
        case 0x2cf2b4u: goto label_2cf2b4;
        case 0x2cf2b8u: goto label_2cf2b8;
        case 0x2cf2bcu: goto label_2cf2bc;
        case 0x2cf2c0u: goto label_2cf2c0;
        case 0x2cf2c4u: goto label_2cf2c4;
        case 0x2cf2c8u: goto label_2cf2c8;
        case 0x2cf2ccu: goto label_2cf2cc;
        case 0x2cf2d0u: goto label_2cf2d0;
        case 0x2cf2d4u: goto label_2cf2d4;
        case 0x2cf2d8u: goto label_2cf2d8;
        case 0x2cf2dcu: goto label_2cf2dc;
        case 0x2cf2e0u: goto label_2cf2e0;
        case 0x2cf2e4u: goto label_2cf2e4;
        case 0x2cf2e8u: goto label_2cf2e8;
        case 0x2cf2ecu: goto label_2cf2ec;
        case 0x2cf2f0u: goto label_2cf2f0;
        case 0x2cf2f4u: goto label_2cf2f4;
        case 0x2cf2f8u: goto label_2cf2f8;
        case 0x2cf2fcu: goto label_2cf2fc;
        case 0x2cf300u: goto label_2cf300;
        case 0x2cf304u: goto label_2cf304;
        case 0x2cf308u: goto label_2cf308;
        case 0x2cf30cu: goto label_2cf30c;
        case 0x2cf310u: goto label_2cf310;
        case 0x2cf314u: goto label_2cf314;
        case 0x2cf318u: goto label_2cf318;
        case 0x2cf31cu: goto label_2cf31c;
        case 0x2cf320u: goto label_2cf320;
        case 0x2cf324u: goto label_2cf324;
        case 0x2cf328u: goto label_2cf328;
        case 0x2cf32cu: goto label_2cf32c;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf338u: goto label_2cf338;
        case 0x2cf33cu: goto label_2cf33c;
        case 0x2cf340u: goto label_2cf340;
        case 0x2cf344u: goto label_2cf344;
        case 0x2cf348u: goto label_2cf348;
        case 0x2cf34cu: goto label_2cf34c;
        case 0x2cf350u: goto label_2cf350;
        case 0x2cf354u: goto label_2cf354;
        default: break;
    }

    ctx->pc = 0x2cf288u;

label_2cf288:
    // 0x2cf288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf28c:
    // 0x2cf28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cf290:
    // 0x2cf290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cf294:
    // 0x2cf294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf298:
    // 0x2cf298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cf29c:
    // 0x2cf29c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cf29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2cf2a0:
    // 0x2cf2a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2cf2a4:
    if (ctx->pc == 0x2CF2A4u) {
        ctx->pc = 0x2CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2A0u;
        // 0x2cf2a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2A8u;
        goto label_2cf2a8;
    }
    ctx->pc = 0x2CF2A0u;
    {
        const bool branch_taken_0x2cf2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2A0u;
        // 0x2cf2a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2a0) {
            ctx->pc = 0x2CF2F8u;
            goto label_2cf2f8;
        }
    }
    ctx->pc = 0x2CF2A8u;
label_2cf2a8:
    // 0x2cf2a8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2cf2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2cf2ac:
    // 0x2cf2ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2cf2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2cf2b0:
    // 0x2cf2b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cf2b4:
    if (ctx->pc == 0x2CF2B4u) {
        ctx->pc = 0x2CF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2B0u;
        // 0x2cf2b4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2B8u;
        goto label_2cf2b8;
    }
    ctx->pc = 0x2CF2B0u;
    {
        const bool branch_taken_0x2cf2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2B0u;
        // 0x2cf2b4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2b0) {
            ctx->pc = 0x2CF2C4u;
            goto label_2cf2c4;
        }
    }
    ctx->pc = 0x2CF2B8u;
label_2cf2b8:
    // 0x2cf2b8: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x2cf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_2cf2bc:
    // 0x2cf2bc: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
label_2cf2c0:
    if (ctx->pc == 0x2CF2C0u) {
        ctx->pc = 0x2CF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2BCu;
        // 0x2cf2c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2C4u;
        goto label_2cf2c4;
    }
    ctx->pc = 0x2CF2BCu;
    {
        const bool branch_taken_0x2cf2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf2bc) {
            ctx->pc = 0x2CF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF2BCu;
            // 0x2cf2c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF2FCu;
            goto label_2cf2fc;
        }
    }
    ctx->pc = 0x2CF2C4u;
label_2cf2c4:
    // 0x2cf2c4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2cf2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2cf2c8:
    // 0x2cf2c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cf2cc:
    if (ctx->pc == 0x2CF2CCu) {
        ctx->pc = 0x2CF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2C8u;
        // 0x2cf2cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2D0u;
        goto label_2cf2d0;
    }
    ctx->pc = 0x2CF2C8u;
    {
        const bool branch_taken_0x2cf2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2C8u;
        // 0x2cf2cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2c8) {
            ctx->pc = 0x2CF2DCu;
            goto label_2cf2dc;
        }
    }
    ctx->pc = 0x2CF2D0u;
label_2cf2d0:
    // 0x2cf2d0: 0x244281d8  addiu       $v0, $v0, -0x7E28
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935000));
label_2cf2d4:
    // 0x2cf2d4: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
label_2cf2d8:
    if (ctx->pc == 0x2CF2D8u) {
        ctx->pc = 0x2CF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2D4u;
        // 0x2cf2d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2DCu;
        goto label_2cf2dc;
    }
    ctx->pc = 0x2CF2D4u;
    {
        const bool branch_taken_0x2cf2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf2d4) {
            ctx->pc = 0x2CF2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF2D4u;
            // 0x2cf2d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF2FCu;
            goto label_2cf2fc;
        }
    }
    ctx->pc = 0x2CF2DCu;
label_2cf2dc:
    // 0x2cf2dc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2cf2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2cf2e0:
    // 0x2cf2e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2cf2e4:
    if (ctx->pc == 0x2CF2E4u) {
        ctx->pc = 0x2CF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2E0u;
        // 0x2cf2e4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2E8u;
        goto label_2cf2e8;
    }
    ctx->pc = 0x2CF2E0u;
    {
        const bool branch_taken_0x2cf2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2E0u;
        // 0x2cf2e4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2e0) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF2E8u;
label_2cf2e8:
    // 0x2cf2e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2cf2ec:
    // 0x2cf2ec: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x2cf2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
label_2cf2f0:
    // 0x2cf2f0: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_2cf2f4:
    if (ctx->pc == 0x2CF2F4u) {
        ctx->pc = 0x2CF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2F0u;
        // 0x2cf2f4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF2F8u;
        goto label_2cf2f8;
    }
    ctx->pc = 0x2CF2F0u;
    {
        const bool branch_taken_0x2cf2f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2F0u;
        // 0x2cf2f4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2f0) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF2F8u;
label_2cf2f8:
    // 0x2cf2f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cf2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf2fc:
    // 0x2cf2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf300:
    // 0x2cf300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf304:
    // 0x2cf304: 0x40f809  jalr        $v0
label_2cf308:
    if (ctx->pc == 0x2CF308u) {
        ctx->pc = 0x2CF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF304u;
        // 0x2cf308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF30Cu;
        goto label_2cf30c;
    }
    ctx->pc = 0x2CF304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF30Cu);
        ctx->pc = 0x2CF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF304u;
        // 0x2cf308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF304u, 0x2CF30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF30Cu;
label_2cf30c:
    // 0x2cf30c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2cf310:
    if (ctx->pc == 0x2CF310u) {
        ctx->pc = 0x2CF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF30Cu;
        // 0x2cf310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF314u;
        goto label_2cf314;
    }
    ctx->pc = 0x2CF30Cu;
    {
        const bool branch_taken_0x2cf30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf30c) {
            ctx->pc = 0x2CF310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF30Cu;
            // 0x2cf310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF344u;
            goto label_2cf344;
        }
    }
    ctx->pc = 0x2CF314u;
label_2cf314:
    // 0x2cf314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cf314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf318:
    // 0x2cf318: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2cf318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2cf31c:
    // 0x2cf31c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2cf320:
    if (ctx->pc == 0x2CF320u) {
        ctx->pc = 0x2CF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF31Cu;
        // 0x2cf320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF324u;
        goto label_2cf324;
    }
    ctx->pc = 0x2CF31Cu;
    {
        const bool branch_taken_0x2cf31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF31Cu;
        // 0x2cf320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf31c) {
            ctx->pc = 0x2CF33Cu;
            goto label_2cf33c;
        }
    }
    ctx->pc = 0x2CF324u;
label_2cf324:
    // 0x2cf324: 0x40f809  jalr        $v0
label_2cf328:
    if (ctx->pc == 0x2CF328u) {
        ctx->pc = 0x2CF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF324u;
        // 0x2cf328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF32Cu;
        goto label_2cf32c;
    }
    ctx->pc = 0x2CF324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF32Cu);
        ctx->pc = 0x2CF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF324u;
        // 0x2cf328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF324u, 0x2CF32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF32Cu;
label_2cf32c:
    // 0x2cf32c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cf32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf330:
    // 0x2cf330: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_2cf334:
    // 0x2cf334: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2cf338:
    if (ctx->pc == 0x2CF338u) {
        ctx->pc = 0x2CF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF334u;
        // 0x2cf338: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF33Cu;
        goto label_2cf33c;
    }
    ctx->pc = 0x2CF334u;
    {
        const bool branch_taken_0x2cf334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF334u;
        // 0x2cf338: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf334) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF33Cu;
label_2cf33c:
    // 0x2cf33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf340:
    // 0x2cf340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf344:
    // 0x2cf344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf348:
    // 0x2cf348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf34c:
    // 0x2cf34c: 0x3e00008  jr          $ra
label_2cf350:
    if (ctx->pc == 0x2CF350u) {
        ctx->pc = 0x2CF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF34Cu;
        // 0x2cf350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF354u;
        goto label_2cf354;
    }
    ctx->pc = 0x2CF34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF34Cu;
        // 0x2cf350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF354u;
label_2cf354:
    // 0x2cf354: 0x0  nop
    ctx->pc = 0x2cf354u;
    // NOP
}
