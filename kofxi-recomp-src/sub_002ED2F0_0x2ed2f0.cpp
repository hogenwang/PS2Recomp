#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED2F0
// Address: 0x2ed2f0 - 0x2ed460
void sub_002ED2F0_0x2ed2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED2F0_0x2ed2f0");
#endif

    switch (ctx->pc) {
        case 0x2ed308u: goto label_2ed308;
        case 0x2ed380u: goto label_2ed380;
        case 0x2ed3a8u: goto label_2ed3a8;
        case 0x2ed3b0u: goto label_2ed3b0;
        case 0x2ed3ccu: goto label_2ed3cc;
        case 0x2ed3f4u: goto label_2ed3f4;
        case 0x2ed3f8u: goto label_2ed3f8;
        case 0x2ed404u: goto label_2ed404;
        case 0x2ed444u: goto label_2ed444;
        default: break;
    }

    ctx->pc = 0x2ed2f0u;

    // 0x2ed2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ed2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ed2f4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed2f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ed2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ed2fc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ed2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2ed300: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ed300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2ed304: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ed304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed308:
    // 0x2ed308: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2ed308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2ed30c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2ed30cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed314: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ed314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed318: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ed318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ed31c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ed31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ed320: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ed320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ed324: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ed324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2ed328: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2ed328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2ed32c: 0x8deeeca8  lw          $t6, -0x1358($t7)
    ctx->pc = 0x2ed32cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ed330: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed330u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed334: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED334u;
    {
        const bool branch_taken_0x2ed334 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED334u;
            // 0x2ed338: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed334) {
            ctx->pc = 0x2ED350u;
            goto label_2ed350;
        }
    }
    ctx->pc = 0x2ED33Cu;
    // 0x2ed33c: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ed33cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ed340: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED340u;
    {
        const bool branch_taken_0x2ed340 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED340u;
            // 0x2ed344: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed340) {
            ctx->pc = 0x2ED350u;
            goto label_2ed350;
        }
    }
    ctx->pc = 0x2ED348u;
    // 0x2ed348: 0x15cf000d  bne         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED348u;
    {
        const bool branch_taken_0x2ed348 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ED34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED348u;
            // 0x2ed34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed348) {
            ctx->pc = 0x2ED380u;
            goto label_2ed380;
        }
    }
    ctx->pc = 0x2ED350u;
label_2ed350:
    // 0x2ed350: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed350u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed354: 0x8df0ed28  lw          $s0, -0x12D8($t7)
    ctx->pc = 0x2ed354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962472)));
    // 0x2ed358: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED358u;
    {
        const bool branch_taken_0x2ed358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed358) {
            ctx->pc = 0x2ED35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED358u;
            // 0x2ed35c: 0x960f0000  lhu         $t7, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3B0u;
            goto label_2ed3b0;
        }
    }
    ctx->pc = 0x2ED360u;
    // 0x2ed360: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed364: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed364u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed368: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x2ed368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    // 0x2ed36c: 0x25080a88  addiu       $t0, $t0, 0xA88
    ctx->pc = 0x2ed36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2696));
    // 0x2ed370: 0x240504c8  addiu       $a1, $zero, 0x4C8
    ctx->pc = 0x2ed370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x2ed374: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed378: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2ED378u;
    SET_GPR_U32(ctx, 31, 0x2ED380u);
    ctx->pc = 0x2ED37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED378u;
            // 0x2ed37c: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED380u; }
        if (ctx->pc != 0x2ED380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED380u; }
        if (ctx->pc != 0x2ED380u) { return; }
    }
    ctx->pc = 0x2ED380u;
label_2ed380:
    // 0x2ed380: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ed380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed384: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ed384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed388: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ed388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed38c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ed38cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ed390: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ed390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed394: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ed394u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ed398: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ed398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed39c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ed39cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ed3a0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ed3a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed3a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ed3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2ed3a8:
    // 0x2ed3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3A8u;
            // 0x2ed3ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED3B0u;
label_2ed3b0:
    // 0x2ed3b0: 0x31ee000f  andi        $t6, $t7, 0xF
    ctx->pc = 0x2ed3b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2ed3b4: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2ed3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ed3b8: 0x11cf0016  beq         $t6, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED3B8u;
    {
        const bool branch_taken_0x2ed3b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3B8u;
            // 0x2ed3bc: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3b8) {
            ctx->pc = 0x2ED414u;
            goto label_2ed414;
        }
    }
    ctx->pc = 0x2ED3C0u;
    // 0x2ed3c0: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2ed3c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2ed3c4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2ed3c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x2ed3c8: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x2ed3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ed3cc:
    // 0x2ed3cc: 0x55d2000a  bnel        $t6, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED3CCu;
    {
        const bool branch_taken_0x2ed3cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ed3cc) {
            ctx->pc = 0x2ED3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3CCu;
            // 0x2ed3d0: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3F8u;
            goto label_2ed3f8;
        }
    }
    ctx->pc = 0x2ED3D4u;
    // 0x2ed3d4: 0x920f0001  lbu         $t7, 0x1($s0)
    ctx->pc = 0x2ed3d4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2ed3d8: 0x26f782a  slt         $t7, $s3, $t7
    ctx->pc = 0x2ed3d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2ed3dc: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED3DCu;
    {
        const bool branch_taken_0x2ed3dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3DCu;
            // 0x2ed3e0: 0x26a40a70  addiu       $a0, $s5, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3dc) {
            ctx->pc = 0x2ED41Cu;
            goto label_2ed41c;
        }
    }
    ctx->pc = 0x2ED3E4u;
    // 0x2ed3e4: 0x240504dc  addiu       $a1, $zero, 0x4DC
    ctx->pc = 0x2ed3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x2ed3e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed3ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ED3ECu;
    SET_GPR_U32(ctx, 31, 0x2ED3F4u);
    ctx->pc = 0x2ED3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3ECu;
            // 0x2ed3f0: 0x26870aa0  addiu       $a3, $s4, 0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3F4u; }
        if (ctx->pc != 0x2ED3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3F4u; }
        if (ctx->pc != 0x2ED3F4u) { return; }
    }
    ctx->pc = 0x2ED3F4u;
label_2ed3f4:
    // 0x2ed3f4: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2ed3f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2ed3f8:
    // 0x2ed3f8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2ed3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ed3fc: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2ED3FCu;
    SET_GPR_U32(ctx, 31, 0x2ED404u);
    ctx->pc = 0x2ED400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3FCu;
            // 0x2ed400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED404u; }
        if (ctx->pc != 0x2ED404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED404u; }
        if (ctx->pc != 0x2ED404u) { return; }
    }
    ctx->pc = 0x2ED404u;
label_2ed404:
    // 0x2ed404: 0x944f0000  lhu         $t7, 0x0($v0)
    ctx->pc = 0x2ed404u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed408: 0x31ee000f  andi        $t6, $t7, 0xF
    ctx->pc = 0x2ed408u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2ed40c: 0x15d1ffef  bne         $t6, $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2ED40Cu;
    {
        const bool branch_taken_0x2ed40c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 17));
        ctx->pc = 0x2ED410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED40Cu;
            // 0x2ed410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed40c) {
            ctx->pc = 0x2ED3CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed3cc;
        }
    }
    ctx->pc = 0x2ED414u;
label_2ed414:
    // 0x2ed414: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x2ED414u;
    {
        const bool branch_taken_0x2ed414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED414u;
            // 0x2ed418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed414) {
            ctx->pc = 0x2ED380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed380;
        }
    }
    ctx->pc = 0x2ED41Cu;
label_2ed41c:
    // 0x2ed41c: 0x960e0002  lhu         $t6, 0x2($s0)
    ctx->pc = 0x2ed41cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ed420: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2ed420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ed424: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ed424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed428: 0xa6ce0000  sh          $t6, 0x0($s6)
    ctx->pc = 0x2ed428u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2ed42c: 0xa7ae0000  sh          $t6, 0x0($sp)
    ctx->pc = 0x2ed42cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2ed430: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x2ed430u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ed434: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x2ed434u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x2ed438: 0xa3cf0000  sb          $t7, 0x0($fp)
    ctx->pc = 0x2ed438u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x2ed43c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2ED43Cu;
    SET_GPR_U32(ctx, 31, 0x2ED444u);
    ctx->pc = 0x2ED440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED43Cu;
            // 0x2ed440: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED444u; }
        if (ctx->pc != 0x2ED444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED444u; }
        if (ctx->pc != 0x2ED444u) { return; }
    }
    ctx->pc = 0x2ED444u;
label_2ed444:
    // 0x2ed444: 0x960f0000  lhu         $t7, 0x0($s0)
    ctx->pc = 0x2ed444u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ed448: 0x31effff0  andi        $t7, $t7, 0xFFF0
    ctx->pc = 0x2ed448u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65520);
    // 0x2ed44c: 0x35ef000b  ori         $t7, $t7, 0xB
    ctx->pc = 0x2ed44cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)11);
    // 0x2ed450: 0xa60f0000  sh          $t7, 0x0($s0)
    ctx->pc = 0x2ed450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ed454: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x2ED454u;
    {
        const bool branch_taken_0x2ed454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED454u;
            // 0x2ed458: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed454) {
            ctx->pc = 0x2ED380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed380;
        }
    }
    ctx->pc = 0x2ED45Cu;
    // 0x2ed45c: 0x0  nop
    ctx->pc = 0x2ed45cu;
    // NOP
    ctx->pc = 0x2ed460u;
}
