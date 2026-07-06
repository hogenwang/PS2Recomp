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

// Function: sub_0024A2B0
// Address: 0x24a2b0 - 0x24a690
void sub_0024A2B0_0x24a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A2B0_0x24a2b0");
#endif

    switch (ctx->pc) {
        case 0x24a2f4u: goto label_24a2f4;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a424u: goto label_24a424;
        case 0x24a434u: goto label_24a434;
        case 0x24a444u: goto label_24a444;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a478u: goto label_24a478;
        case 0x24a494u: goto label_24a494;
        case 0x24a4acu: goto label_24a4ac;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a514u: goto label_24a514;
        case 0x24a530u: goto label_24a530;
        case 0x24a534u: goto label_24a534;
        case 0x24a590u: goto label_24a590;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5ccu: goto label_24a5cc;
        case 0x24a5d4u: goto label_24a5d4;
        case 0x24a5f0u: goto label_24a5f0;
        case 0x24a600u: goto label_24a600;
        case 0x24a610u: goto label_24a610;
        case 0x24a630u: goto label_24a630;
        case 0x24a648u: goto label_24a648;
        case 0x24a664u: goto label_24a664;
        default: break;
    }

    ctx->pc = 0x24a2b0u;

    // 0x24a2b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x24a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x24a2b4: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x24a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x24a2b8: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x24a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x24a2bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24a2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2c0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x24a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x24a2c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x24a2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2c8: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x24a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x24a2cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24a2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2d0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x24a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x24a2d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24a2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A2D8u;
    {
        const bool branch_taken_0x24a2d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2D8u;
        // 0x24a2dc: 0xffb000b0  sd          $s0, 0xB0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2d8) {
            ctx->pc = 0x24A2E8u;
            goto label_24a2e8;
        }
    }
    ctx->pc = 0x24A2E0u;
    // 0x24a2e0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A2E0u;
    {
        const bool branch_taken_0x24a2e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a2e0) {
            ctx->pc = 0x24A2F4u;
            goto label_24a2f4;
        }
    }
    ctx->pc = 0x24A2E8u;
label_24a2e8:
    // 0x24a2e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x24a2ec: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x24A2ECu;
    SET_GPR_U32(ctx, 31, 0x24A2F4u);
    ctx->pc = 0x24A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2ECu;
    // 0x24a2f0: 0x24846af8  addiu       $a0, $a0, 0x6AF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24A2ECu, 0x24A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2F4u;
label_24a2f4:
    // 0x24a2f4: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x24a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
    // 0x24a2f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a2fc: 0x3442691e  ori         $v0, $v0, 0x691E
    ctx->pc = 0x24a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26910);
    // 0x24a300: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24A300u;
    {
        const bool branch_taken_0x24a300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A300u;
        // 0x24a304: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a300) {
            ctx->pc = 0x24A350u;
            goto label_24a350;
        }
    }
    ctx->pc = 0x24A308u;
    // 0x24a308: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A308u;
    {
        const bool branch_taken_0x24a308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a308) {
            ctx->pc = 0x24A32Cu;
            goto label_24a32c;
        }
    }
    ctx->pc = 0x24A310u;
    // 0x24a310: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x24a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
    // 0x24a314: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a318: 0x3442691c  ori         $v0, $v0, 0x691C
    ctx->pc = 0x24a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26908);
    // 0x24a31c: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A31Cu;
    {
        const bool branch_taken_0x24a31c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A31Cu;
        // 0x24a320: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a31c) {
            ctx->pc = 0x24A350u;
            goto label_24a350;
        }
    }
    ctx->pc = 0x24A324u;
    // 0x24a324: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x24A324u;
    {
        const bool branch_taken_0x24a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a324) {
            ctx->pc = 0x24A670u;
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A32Cu;
label_24a32c:
    // 0x24a32c: 0x3402c118  ori         $v0, $zero, 0xC118
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49432);
    // 0x24a330: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a334: 0x3442691d  ori         $v0, $v0, 0x691D
    ctx->pc = 0x24a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26909);
    // 0x24a338: 0x164200cc  bne         $s2, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x24A338u;
    {
        const bool branch_taken_0x24a338 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A338u;
        // 0x24a33c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a338) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A340u;
    // 0x24a340: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24a344: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x24a348: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x24A348u;
    {
        const bool branch_taken_0x24a348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a348) {
            ctx->pc = 0x24A34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A348u;
            // 0x24a34c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A3A8u;
            goto label_24a3a8;
        }
    }
    ctx->pc = 0x24A350u;
label_24a350:
    // 0x24a350: 0x92240019  lbu         $a0, 0x19($s1)
    ctx->pc = 0x24a350u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x24a354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a358: 0x148200c4  bne         $a0, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x24A358u;
    {
        const bool branch_taken_0x24a358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A358u;
        // 0x24a35c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a358) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A360u;
    // 0x24a360: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x24a360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24a364: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24a368: 0x146200c0  bne         $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x24A368u;
    {
        const bool branch_taken_0x24a368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A368u;
        // 0x24a36c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a368) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A370u;
    // 0x24a370: 0x26230098  addiu       $v1, $s1, 0x98
    ctx->pc = 0x24a370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x24a374: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x24a374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x24a378: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A378u;
    {
        const bool branch_taken_0x24a378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a378) {
            ctx->pc = 0x24A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A378u;
            // 0x24a37c: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A38Cu;
            goto label_24a38c;
        }
    }
    ctx->pc = 0x24A380u;
    // 0x24a380: 0x144400ba  bne         $v0, $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x24A380u;
    {
        const bool branch_taken_0x24a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A380u;
        // 0x24a384: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a380) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A388u;
    // 0x24a388: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24a388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24a38c:
    // 0x24a38c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A38Cu;
    {
        const bool branch_taken_0x24a38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A38Cu;
        // 0x24a390: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a38c) {
            ctx->pc = 0x24A3A4u;
            goto label_24a3a4;
        }
    }
    ctx->pc = 0x24A394u;
    // 0x24a394: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A394u;
    {
        const bool branch_taken_0x24a394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a394) {
            ctx->pc = 0x24A398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A394u;
            // 0x24a398: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A3A8u;
            goto label_24a3a8;
        }
    }
    ctx->pc = 0x24A39Cu;
label_24a39c:
    // 0x24a39c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x24A39Cu;
    {
        const bool branch_taken_0x24a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A39Cu;
        // 0x24a3a0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a39c) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A3A4u;
label_24a3a4:
    // 0x24a3a4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_24a3a8:
    // 0x24a3a8: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x24a3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x24a3ac: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x24A3ACu;
    {
        const bool branch_taken_0x24a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3ACu;
        // 0x24a3b0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3ac) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A3B4u;
    // 0x24a3b4: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x24a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
    // 0x24a3b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a3bc: 0x3442691e  ori         $v0, $v0, 0x691E
    ctx->pc = 0x24a3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26910);
    // 0x24a3c0: 0x12420036  beq         $s2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x24A3C0u;
    {
        const bool branch_taken_0x24a3c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3C0u;
        // 0x24a3c4: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3c0) {
            ctx->pc = 0x24A49Cu;
            goto label_24a49c;
        }
    }
    ctx->pc = 0x24A3C8u;
    // 0x24a3c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A3C8u;
    {
        const bool branch_taken_0x24a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a3c8) {
            ctx->pc = 0x24A3ECu;
            goto label_24a3ec;
        }
    }
    ctx->pc = 0x24A3D0u;
    // 0x24a3d0: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
    // 0x24a3d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a3d8: 0x3442691c  ori         $v0, $v0, 0x691C
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26908);
    // 0x24a3dc: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A3DCu;
    {
        const bool branch_taken_0x24a3dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3DCu;
        // 0x24a3e0: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3dc) {
            ctx->pc = 0x24A408u;
            goto label_24a408;
        }
    }
    ctx->pc = 0x24A3E4u;
    // 0x24a3e4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x24A3E4u;
    {
        const bool branch_taken_0x24a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3E4u;
        // 0x24a3e8: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3e4) {
            ctx->pc = 0x24A670u;
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A3ECu;
label_24a3ec:
    // 0x24a3ec: 0x3402c118  ori         $v0, $zero, 0xC118
    ctx->pc = 0x24a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49432);
    // 0x24a3f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a3f4: 0x3442691d  ori         $v0, $v0, 0x691D
    ctx->pc = 0x24a3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26909);
    // 0x24a3f8: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24A3F8u;
    {
        const bool branch_taken_0x24a3f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3F8u;
        // 0x24a3fc: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3f8) {
            ctx->pc = 0x24A49Cu;
            goto label_24a49c;
        }
    }
    ctx->pc = 0x24A400u;
    // 0x24a400: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x24A400u;
    {
        const bool branch_taken_0x24a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A400u;
        // 0x24a404: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a400) {
            ctx->pc = 0x24A670u;
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A408u;
label_24a408:
    // 0x24a408: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24a40c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x24a410: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A418u;
    // 0x24a418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a41c: 0xc048c96  jal         func_123258
    ctx->pc = 0x24A41Cu;
    SET_GPR_U32(ctx, 31, 0x24A424u);
    ctx->pc = 0x24A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A41Cu;
    // 0x24a420: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24A41Cu, 0x24A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A424u;
label_24a424:
    // 0x24a424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a42c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A42Cu;
    SET_GPR_U32(ctx, 31, 0x24A434u);
    ctx->pc = 0x24A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A42Cu;
    // 0x24a430: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A42Cu, 0x24A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A434u;
label_24a434:
    // 0x24a434: 0x92260018  lbu         $a2, 0x18($s1)
    ctx->pc = 0x24a434u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24a438: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x24a43c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A43Cu;
    SET_GPR_U32(ctx, 31, 0x24A444u);
    ctx->pc = 0x24A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A43Cu;
    // 0x24a440: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A43Cu, 0x24A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A444u;
label_24a444:
    // 0x24a444: 0x92220099  lbu         $v0, 0x99($s1)
    ctx->pc = 0x24a444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
    // 0x24a448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A448u;
    {
        const bool branch_taken_0x24a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A448u;
        // 0x24a44c: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a448) {
            ctx->pc = 0x24A45Cu;
            goto label_24a45c;
        }
    }
    ctx->pc = 0x24A450u;
    // 0x24a450: 0x92260098  lbu         $a2, 0x98($s1)
    ctx->pc = 0x24a450u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x24a454: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A454u;
    SET_GPR_U32(ctx, 31, 0x24A45Cu);
    ctx->pc = 0x24A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A454u;
    // 0x24a458: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A454u, 0x24A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A45Cu;
label_24a45c:
    // 0x24a45c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x24a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24a460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a464: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24a464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24a468: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x24a468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a46c: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x24a46cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a470: 0xc0925cc  jal         func_249730
    ctx->pc = 0x24A470u;
    SET_GPR_U32(ctx, 31, 0x24A478u);
    ctx->pc = 0x24A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A470u;
    // 0x24a474: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249730u, 0x24A470u, 0x24A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A478u;
label_24a478:
    // 0x24a478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a47c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24a47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a480: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x24a480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x24a484: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x24a484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x24a488: 0x34a5691a  ori         $a1, $a1, 0x691A
    ctx->pc = 0x24a488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26906);
    // 0x24a48c: 0xc0925fc  jal         func_2497F0
    ctx->pc = 0x24A48Cu;
    SET_GPR_U32(ctx, 31, 0x24A494u);
    ctx->pc = 0x24A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A48Cu;
    // 0x24a490: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2497F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2497F0u, 0x24A48Cu, 0x24A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A494u;
label_24a494:
    // 0x24a494: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x24A494u;
    {
        const bool branch_taken_0x24a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A494u;
        // 0x24a498: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a494) {
            ctx->pc = 0x24A670u;
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A49Cu;
label_24a49c:
    // 0x24a49c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x24a49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24a4a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24a4a4: 0xc048c96  jal         func_123258
    ctx->pc = 0x24A4A4u;
    SET_GPR_U32(ctx, 31, 0x24A4ACu);
    ctx->pc = 0x24A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4A4u;
    // 0x24a4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24A4A4u, 0x24A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4ACu;
label_24a4ac:
    // 0x24a4ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24a4b0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x24a4b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24A4B4u;
    {
        const bool branch_taken_0x24a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a4b4) {
            ctx->pc = 0x24A4F0u;
            goto label_24a4f0;
        }
    }
    ctx->pc = 0x24A4BCu;
    // 0x24a4bc: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24a4c0: 0xc0925cc  jal         func_249730
    ctx->pc = 0x24A4C0u;
    SET_GPR_U32(ctx, 31, 0x24A4C8u);
    ctx->pc = 0x24A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4C0u;
    // 0x24a4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249730u, 0x24A4C0u, 0x24A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4C8u;
label_24a4c8:
    // 0x24a4c8: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x24a4cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a4d0: 0x88620007  lwl         $v0, 0x7($v1)
    ctx->pc = 0x24a4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24a4d4: 0x98620004  lwr         $v0, 0x4($v1)
    ctx->pc = 0x24a4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24a4d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24a4e0: 0x1445ffae  bne         $v0, $a1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x24A4E0u;
    {
        const bool branch_taken_0x24a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x24A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E0u;
        // 0x24a4e4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4e0) {
            ctx->pc = 0x24A39Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a39c;
        }
    }
    ctx->pc = 0x24A4E8u;
    // 0x24a4e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24A4E8u;
    {
        const bool branch_taken_0x24a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E8u;
        // 0x24a4ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4e8) {
            ctx->pc = 0x24A524u;
            goto label_24a524;
        }
    }
    ctx->pc = 0x24A4F0u;
label_24a4f0:
    // 0x24a4f0: 0x3402c118  ori         $v0, $zero, 0xC118
    ctx->pc = 0x24a4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49432);
    // 0x24a4f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a4f8: 0x3442691d  ori         $v0, $v0, 0x691D
    ctx->pc = 0x24a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26909);
    // 0x24a4fc: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A4FCu;
    {
        const bool branch_taken_0x24a4fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4FCu;
        // 0x24a500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4fc) {
            ctx->pc = 0x24A50Cu;
            goto label_24a50c;
        }
    }
    ctx->pc = 0x24A504u;
    // 0x24a504: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24A504u;
    {
        const bool branch_taken_0x24a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A504u;
        // 0x24a508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a504) {
            ctx->pc = 0x24A524u;
            goto label_24a524;
        }
    }
    ctx->pc = 0x24A50Cu;
label_24a50c:
    // 0x24a50c: 0xc0925cc  jal         func_249730
    ctx->pc = 0x24A50Cu;
    SET_GPR_U32(ctx, 31, 0x24A514u);
    ctx->pc = 0x24A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A50Cu;
    // 0x24a510: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249730u, 0x24A50Cu, 0x24A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A514u;
label_24a514:
    // 0x24a514: 0x8a22001f  lwl         $v0, 0x1F($s1)
    ctx->pc = 0x24a514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24a518: 0x9a22001c  lwr         $v0, 0x1C($s1)
    ctx->pc = 0x24a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24a51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a520: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x24a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_24a524:
    // 0x24a524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A524u;
    {
        const bool branch_taken_0x24a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A524u;
        // 0x24a528: 0x8e70000c  lw          $s0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a524) {
            ctx->pc = 0x24A534u;
            goto label_24a534;
        }
    }
    ctx->pc = 0x24A52Cu;
    // 0x24a52c: 0x0  nop
    ctx->pc = 0x24a52cu;
    // NOP
label_24a530:
    // 0x24a530: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x24a530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24a534:
    // 0x24a534: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24A534u;
    {
        const bool branch_taken_0x24a534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A534u;
        // 0x24a538: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a534) {
            ctx->pc = 0x24A5A8u;
            goto label_24a5a8;
        }
    }
    ctx->pc = 0x24A53Cu;
    // 0x24a53c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a540: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24a540u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24a544: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24A544u;
    {
        const bool branch_taken_0x24a544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24a544) {
            ctx->pc = 0x24A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A544u;
            // 0x24a548: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a534;
        }
    }
    ctx->pc = 0x24A54Cu;
    // 0x24a54c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A54Cu;
    {
        const bool branch_taken_0x24a54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A54Cu;
        // 0x24a550: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a54c) {
            ctx->pc = 0x24A56Cu;
            goto label_24a56c;
        }
    }
    ctx->pc = 0x24A554u;
    // 0x24a554: 0x8a020007  lwl         $v0, 0x7($s0)
    ctx->pc = 0x24a554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24a558: 0x9a020004  lwr         $v0, 0x4($s0)
    ctx->pc = 0x24a558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24a55c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x24a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a560: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24a564: 0x1444fff2  bne         $v0, $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24A564u;
    {
        const bool branch_taken_0x24a564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A564u;
        // 0x24a568: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a564) {
            ctx->pc = 0x24A530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a530;
        }
    }
    ctx->pc = 0x24A56Cu;
label_24a56c:
    // 0x24a56c: 0x3402c118  ori         $v0, $zero, 0xC118
    ctx->pc = 0x24a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49432);
    // 0x24a570: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a574: 0x3442691d  ori         $v0, $v0, 0x691D
    ctx->pc = 0x24a574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26909);
    // 0x24a578: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24A578u;
    {
        const bool branch_taken_0x24a578 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x27b20070  addiu       $s2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a578) {
            ctx->pc = 0x24A5E4u;
            goto label_24a5e4;
        }
    }
    ctx->pc = 0x24A580u;
    // 0x24a580: 0x9206005c  lbu         $a2, 0x5C($s0)
    ctx->pc = 0x24a580u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x24a584: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x24a588: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A588u;
    SET_GPR_U32(ctx, 31, 0x24A590u);
    ctx->pc = 0x24A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A588u;
    // 0x24a58c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A588u, 0x24A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A590u;
label_24a590:
    // 0x24a590: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x24a590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x24a594: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24a594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24a598: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A598u;
    {
        const bool branch_taken_0x24a598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A598u;
        // 0x24a59c: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a598) {
            ctx->pc = 0x24A5C4u;
            goto label_24a5c4;
        }
    }
    ctx->pc = 0x24A5A0u;
    // 0x24a5a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A5A0u;
    {
        const bool branch_taken_0x24a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A0u;
        // 0x24a5a4: 0x9206006c  lbu         $a2, 0x6C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5a0) {
            ctx->pc = 0x24A5B0u;
            goto label_24a5b0;
        }
    }
    ctx->pc = 0x24A5A8u;
label_24a5a8:
    // 0x24a5a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24A5A8u;
    {
        const bool branch_taken_0x24a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A8u;
        // 0x24a5ac: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5a8) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A5B0u;
label_24a5b0:
    // 0x24a5b0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x24a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x24a5b4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A5B4u;
    SET_GPR_U32(ctx, 31, 0x24A5BCu);
    ctx->pc = 0x24A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5B4u;
    // 0x24a5b8: 0x26250098  addiu       $a1, $s1, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A5B4u, 0x24A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5BCu;
label_24a5bc:
    // 0x24a5bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A5BCu;
    {
        const bool branch_taken_0x24a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5bc) {
            ctx->pc = 0x24A5CCu;
            goto label_24a5cc;
        }
    }
    ctx->pc = 0x24A5C4u;
label_24a5c4:
    // 0x24a5c4: 0xc048c96  jal         func_123258
    ctx->pc = 0x24A5C4u;
    SET_GPR_U32(ctx, 31, 0x24A5CCu);
    ctx->pc = 0x24A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5C4u;
    // 0x24a5c8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24A5C4u, 0x24A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5CCu;
label_24a5cc:
    // 0x24a5cc: 0xc0925a6  jal         func_249698
    ctx->pc = 0x24A5CCu;
    SET_GPR_U32(ctx, 31, 0x24A5D4u);
    ctx->pc = 0x24A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5CCu;
    // 0x24a5d0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249698u, 0x24A5CCu, 0x24A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5D4u;
label_24a5d4:
    // 0x24a5d4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x24a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x24a5d8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x24a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x24a5dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x24A5DCu;
    {
        const bool branch_taken_0x24a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5DCu;
        // 0x24a5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5dc) {
            ctx->pc = 0x24A66Cu;
            goto label_24a66c;
        }
    }
    ctx->pc = 0x24A5E4u;
label_24a5e4:
    // 0x24a5e4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x24a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24a5e8: 0xc048c96  jal         func_123258
    ctx->pc = 0x24A5E8u;
    SET_GPR_U32(ctx, 31, 0x24A5F0u);
    ctx->pc = 0x24A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5E8u;
    // 0x24a5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24A5E8u, 0x24A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5F0u;
label_24a5f0:
    // 0x24a5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5f8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A5F8u;
    SET_GPR_U32(ctx, 31, 0x24A600u);
    ctx->pc = 0x24A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5F8u;
    // 0x24a5fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A5F8u, 0x24A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A600u;
label_24a600:
    // 0x24a600: 0x9206005c  lbu         $a2, 0x5C($s0)
    ctx->pc = 0x24a600u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x24a604: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x24a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x24a608: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A608u;
    SET_GPR_U32(ctx, 31, 0x24A610u);
    ctx->pc = 0x24A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A608u;
    // 0x24a60c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A608u, 0x24A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A610u;
label_24a610:
    // 0x24a610: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x24a610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x24a614: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24a618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A618u;
    {
        const bool branch_taken_0x24a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A618u;
        // 0x24a61c: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a618) {
            ctx->pc = 0x24A638u;
            goto label_24a638;
        }
    }
    ctx->pc = 0x24A620u;
    // 0x24a620: 0x9206006c  lbu         $a2, 0x6C($s0)
    ctx->pc = 0x24a620u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24a624: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x24a624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x24a628: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A628u;
    SET_GPR_U32(ctx, 31, 0x24A630u);
    ctx->pc = 0x24A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A628u;
    // 0x24a62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A628u, 0x24A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A630u;
label_24a630:
    // 0x24a630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A630u;
    {
        const bool branch_taken_0x24a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A630u;
        // 0x24a634: 0x9206007c  lbu         $a2, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a630) {
            ctx->pc = 0x24A63Cu;
            goto label_24a63c;
        }
    }
    ctx->pc = 0x24A638u;
label_24a638:
    // 0x24a638: 0x9206007c  lbu         $a2, 0x7C($s0)
    ctx->pc = 0x24a638u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_24a63c:
    // 0x24a63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a640: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24A640u;
    SET_GPR_U32(ctx, 31, 0x24A648u);
    ctx->pc = 0x24A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A640u;
    // 0x24a644: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24A640u, 0x24A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A648u;
label_24a648:
    // 0x24a648: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24a648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a64c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24a64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a650: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x24a650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x24a654: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x24a654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x24a658: 0x34a56919  ori         $a1, $a1, 0x6919
    ctx->pc = 0x24a658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26905);
    // 0x24a65c: 0xc0925fc  jal         func_2497F0
    ctx->pc = 0x24A65Cu;
    SET_GPR_U32(ctx, 31, 0x24A664u);
    ctx->pc = 0x24A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A65Cu;
    // 0x24a660: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2497F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2497F0u, 0x24A65Cu, 0x24A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A664u;
label_24a664:
    // 0x24a664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A664u;
    {
        const bool branch_taken_0x24a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A664u;
        // 0x24a668: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a664) {
            ctx->pc = 0x24A670u;
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A66Cu;
label_24a66c:
    // 0x24a66c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x24a66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_24a670:
    // 0x24a670: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x24a670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24a674: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x24a674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24a678: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x24a678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24a67c: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24a680: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x24a680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24a684: 0x3e00008  jr          $ra
    ctx->pc = 0x24A684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A684u;
        // 0x24a688: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A68Cu;
    // 0x24a68c: 0x0  nop
    ctx->pc = 0x24a68cu;
    // NOP
    if (ctx->pc == 0x24a68cu) { ctx->pc = 0x24a690u; }
}
