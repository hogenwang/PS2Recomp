#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A36F0
// Address: 0x1a36f0 - 0x1a39a0
void sub_001A36F0_0x1a36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A36F0_0x1a36f0");
#endif

    switch (ctx->pc) {
        case 0x1a370cu: goto label_1a370c;
        case 0x1a3714u: goto label_1a3714;
        case 0x1a371cu: goto label_1a371c;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a3780u: goto label_1a3780;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a3790u: goto label_1a3790;
        case 0x1a37acu: goto label_1a37ac;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37dcu: goto label_1a37dc;
        case 0x1a37f8u: goto label_1a37f8;
        case 0x1a380cu: goto label_1a380c;
        case 0x1a3830u: goto label_1a3830;
        case 0x1a3844u: goto label_1a3844;
        case 0x1a3874u: goto label_1a3874;
        case 0x1a38a0u: goto label_1a38a0;
        case 0x1a38b4u: goto label_1a38b4;
        case 0x1a38e8u: goto label_1a38e8;
        case 0x1a38f8u: goto label_1a38f8;
        case 0x1a3920u: goto label_1a3920;
        case 0x1a3928u: goto label_1a3928;
        case 0x1a3938u: goto label_1a3938;
        case 0x1a3958u: goto label_1a3958;
        case 0x1a3960u: goto label_1a3960;
        case 0x1a3984u: goto label_1a3984;
        default: break;
    }

    ctx->pc = 0x1a36f0u;

    // 0x1a36f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a36f4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a36f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a36fc: 0x2484f440  addiu       $a0, $a0, -0xBC0
    ctx->pc = 0x1a36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964288));
    // 0x1a3700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3704: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3704u;
    SET_GPR_U32(ctx, 31, 0x1A370Cu);
    ctx->pc = 0x1A3708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3704u;
            // 0x1a3708: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A370Cu; }
        if (ctx->pc != 0x1A370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A370Cu; }
        if (ctx->pc != 0x1A370Cu) { return; }
    }
    ctx->pc = 0x1A370Cu;
label_1a370c:
    // 0x1a370c: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x1A370Cu;
    SET_GPR_U32(ctx, 31, 0x1A3714u);
    ctx->pc = 0x1A3710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A370Cu;
            // 0x1a3710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3714u; }
        if (ctx->pc != 0x1A3714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3714u; }
        if (ctx->pc != 0x1A3714u) { return; }
    }
    ctx->pc = 0x1A3714u;
label_1a3714:
    // 0x1a3714: 0xc046f22  jal         func_11BC88
    ctx->pc = 0x1A3714u;
    SET_GPR_U32(ctx, 31, 0x1A371Cu);
    ctx->pc = 0x1A3718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3714u;
            // 0x1a3718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BC88u;
    if (runtime->hasFunction(0x11BC88u)) {
        auto targetFn = runtime->lookupFunction(0x11BC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A371Cu; }
        if (ctx->pc != 0x1A371Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BC88_0x11bc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A371Cu; }
        if (ctx->pc != 0x1A371Cu) { return; }
    }
    ctx->pc = 0x1A371Cu;
label_1a371c:
    // 0x1a371c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a371cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3720: 0xc045946  jal         func_116518
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1A3724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3720u;
            // 0x1a3724: 0x2484f460  addiu       $a0, $a0, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116518u;
    if (runtime->hasFunction(0x116518u)) {
        auto targetFn = runtime->lookupFunction(0x116518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3728u; }
        if (ctx->pc != 0x1A3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116518_0x116518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3728u; }
        if (ctx->pc != 0x1A3728u) { return; }
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a372c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3730: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3730u;
    {
        const bool branch_taken_0x1a3730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3730) {
            ctx->pc = 0x1A371Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a371c;
        }
    }
    ctx->pc = 0x1A3738u;
label_1a3738:
    // 0x1a3738: 0xc045932  jal         func_1164C8
    ctx->pc = 0x1A3738u;
    SET_GPR_U32(ctx, 31, 0x1A3740u);
    ctx->pc = 0x1164C8u;
    if (runtime->hasFunction(0x1164C8u)) {
        auto targetFn = runtime->lookupFunction(0x1164C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3740u; }
        if (ctx->pc != 0x1A3740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001164C8_0x1164c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3740u; }
        if (ctx->pc != 0x1A3740u) { return; }
    }
    ctx->pc = 0x1A3740u;
label_1a3740:
    // 0x1a3740: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3744: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3748: 0x0  nop
    ctx->pc = 0x1a3748u;
    // NOP
    // 0x1a374c: 0x0  nop
    ctx->pc = 0x1a374cu;
    // NOP
    // 0x1a3750: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A3750u;
    {
        const bool branch_taken_0x1a3750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3750) {
            ctx->pc = 0x1A3738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3738;
        }
    }
    ctx->pc = 0x1A3758u;
    // 0x1a3758: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x1A3758u;
    SET_GPR_U32(ctx, 31, 0x1A3760u);
    ctx->pc = 0x1A375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3758u;
            // 0x1a375c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3760u; }
        if (ctx->pc != 0x1A3760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3760u; }
        if (ctx->pc != 0x1A3760u) { return; }
    }
    ctx->pc = 0x1A3760u;
label_1a3760:
    // 0x1a3760: 0xc0455de  jal         func_115778
    ctx->pc = 0x1A3760u;
    SET_GPR_U32(ctx, 31, 0x1A3768u);
    ctx->pc = 0x115778u;
    if (runtime->hasFunction(0x115778u)) {
        auto targetFn = runtime->lookupFunction(0x115778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3768u; }
        if (ctx->pc != 0x1A3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115778_0x115778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3768u; }
        if (ctx->pc != 0x1A3768u) { return; }
    }
    ctx->pc = 0x1A3768u;
label_1a3768:
    // 0x1a3768: 0xc0447c2  jal         func_111F08
    ctx->pc = 0x1A3768u;
    SET_GPR_U32(ctx, 31, 0x1A3770u);
    ctx->pc = 0x111F08u;
    if (runtime->hasFunction(0x111F08u)) {
        auto targetFn = runtime->lookupFunction(0x111F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3770u; }
        if (ctx->pc != 0x1A3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111F08_0x111f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3770u; }
        if (ctx->pc != 0x1A3770u) { return; }
    }
    ctx->pc = 0x1A3770u;
label_1a3770:
    // 0x1a3770: 0xc046f22  jal         func_11BC88
    ctx->pc = 0x1A3770u;
    SET_GPR_U32(ctx, 31, 0x1A3778u);
    ctx->pc = 0x1A3774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3770u;
            // 0x1a3774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BC88u;
    if (runtime->hasFunction(0x11BC88u)) {
        auto targetFn = runtime->lookupFunction(0x11BC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3778u; }
        if (ctx->pc != 0x1A3778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BC88_0x11bc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3778u; }
        if (ctx->pc != 0x1A3778u) { return; }
    }
    ctx->pc = 0x1A3778u;
label_1a3778:
    // 0x1a3778: 0xc047246  jal         func_11C918
    ctx->pc = 0x1A3778u;
    SET_GPR_U32(ctx, 31, 0x1A3780u);
    ctx->pc = 0x1A377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3778u;
            // 0x1a377c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C918u;
    if (runtime->hasFunction(0x11C918u)) {
        auto targetFn = runtime->lookupFunction(0x11C918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3780u; }
        if (ctx->pc != 0x1A3780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C918_0x11c918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3780u; }
        if (ctx->pc != 0x1A3780u) { return; }
    }
    ctx->pc = 0x1A3780u;
label_1a3780:
    // 0x1a3780: 0xc045426  jal         func_115098
    ctx->pc = 0x1A3780u;
    SET_GPR_U32(ctx, 31, 0x1A3788u);
    ctx->pc = 0x115098u;
    if (runtime->hasFunction(0x115098u)) {
        auto targetFn = runtime->lookupFunction(0x115098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3788u; }
        if (ctx->pc != 0x1A3788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiIopHeapRpcInit_0x115098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3788u; }
        if (ctx->pc != 0x1A3788u) { return; }
    }
    ctx->pc = 0x1A3788u;
label_1a3788:
    // 0x1a3788: 0xc047062  jal         func_11C188
    ctx->pc = 0x1A3788u;
    SET_GPR_U32(ctx, 31, 0x1A3790u);
    ctx->pc = 0x1A378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3788u;
            // 0x1a378c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (runtime->hasFunction(0x11C188u)) {
        auto targetFn = runtime->lookupFunction(0x11C188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3790u; }
        if (ctx->pc != 0x1A3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C188_0x11c188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3790u; }
        if (ctx->pc != 0x1A3790u) { return; }
    }
    ctx->pc = 0x1A3790u;
label_1a3790:
    // 0x1a3790: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3794: 0x80426440  lb          $v0, 0x6440($v0)
    ctx->pc = 0x1a3794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a3798: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1A3798u;
    {
        const bool branch_taken_0x1a3798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3798) {
            ctx->pc = 0x1A3958u;
            goto label_1a3958;
        }
    }
    ctx->pc = 0x1A37A0u;
    // 0x1a37a0: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x1a37a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x1a37a4: 0x26316440  addiu       $s1, $s1, 0x6440
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25664));
    // 0x1a37a8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a37a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a37ac:
    // 0x1a37ac: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1a37b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a37b4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A37B4u;
    {
        const bool branch_taken_0x1a37b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a37b4) {
            ctx->pc = 0x1A37E8u;
            goto label_1a37e8;
        }
    }
    ctx->pc = 0x1A37BCu;
    // 0x1a37bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a37bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a37c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37c4: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A37C4u;
    SET_GPR_U32(ctx, 31, 0x1A37CCu);
    ctx->pc = 0x1A37C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37C4u;
            // 0x1a37c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37CCu; }
        if (ctx->pc != 0x1A37CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37CCu; }
        if (ctx->pc != 0x1A37CCu) { return; }
    }
    ctx->pc = 0x1A37CCu;
label_1a37cc:
    // 0x1a37cc: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1A37CCu;
    {
        const bool branch_taken_0x1a37cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a37cc) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A37D4u;
    // 0x1a37d4: 0xc068f44  jal         func_1A3D10
    ctx->pc = 0x1A37D4u;
    SET_GPR_U32(ctx, 31, 0x1A37DCu);
    ctx->pc = 0x1A3D10u;
    if (runtime->hasFunction(0x1A3D10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37DCu; }
        if (ctx->pc != 0x1A37DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3D10_0x1a3d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37DCu; }
        if (ctx->pc != 0x1A37DCu) { return; }
    }
    ctx->pc = 0x1A37DCu;
label_1a37dc:
    // 0x1a37dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A37DCu;
    {
        const bool branch_taken_0x1a37dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a37dc) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A37E4u;
    // 0x1a37e4: 0x0  nop
    ctx->pc = 0x1a37e4u;
    // NOP
label_1a37e8:
    // 0x1a37e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a37ec: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A37ECu;
    {
        const bool branch_taken_0x1a37ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a37ec) {
            ctx->pc = 0x1A3820u;
            goto label_1a3820;
        }
    }
    ctx->pc = 0x1A37F4u;
    // 0x1a37f4: 0x0  nop
    ctx->pc = 0x1a37f4u;
    // NOP
label_1a37f8:
    // 0x1a37f8: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a37f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a37fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3800: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1a3800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a3804: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3804u;
    SET_GPR_U32(ctx, 31, 0x1A380Cu);
    ctx->pc = 0x1A3808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3804u;
            // 0x1a3808: 0x24c6f480  addiu       $a2, $a2, -0xB80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A380Cu; }
        if (ctx->pc != 0x1A380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A380Cu; }
        if (ctx->pc != 0x1A380Cu) { return; }
    }
    ctx->pc = 0x1A380Cu;
label_1a380c:
    // 0x1a380c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A380Cu;
    {
        const bool branch_taken_0x1a380c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a380c) {
            ctx->pc = 0x1A37F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a37f8;
        }
    }
    ctx->pc = 0x1A3814u;
    // 0x1a3814: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1A3814u;
    {
        const bool branch_taken_0x1a3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3814) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A381Cu;
    // 0x1a381c: 0x0  nop
    ctx->pc = 0x1a381cu;
    // NOP
label_1a3820:
    // 0x1a3820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3824: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3824u;
    {
        const bool branch_taken_0x1a3824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3824) {
            ctx->pc = 0x1A3858u;
            goto label_1a3858;
        }
    }
    ctx->pc = 0x1A382Cu;
    // 0x1a382c: 0x0  nop
    ctx->pc = 0x1a382cu;
    // NOP
label_1a3830:
    // 0x1a3830: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a3834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3838: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a383c: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A383Cu;
    SET_GPR_U32(ctx, 31, 0x1A3844u);
    ctx->pc = 0x1A3840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A383Cu;
            // 0x1a3840: 0x24c6f4e0  addiu       $a2, $a2, -0xB20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3844u; }
        if (ctx->pc != 0x1A3844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3844u; }
        if (ctx->pc != 0x1A3844u) { return; }
    }
    ctx->pc = 0x1A3844u;
label_1a3844:
    // 0x1a3844: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3844u;
    {
        const bool branch_taken_0x1a3844 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3844) {
            ctx->pc = 0x1A3830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3830;
        }
    }
    ctx->pc = 0x1A384Cu;
    // 0x1a384c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1A384Cu;
    {
        const bool branch_taken_0x1a384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a384c) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A3854u;
    // 0x1a3854: 0x0  nop
    ctx->pc = 0x1a3854u;
    // NOP
label_1a3858:
    // 0x1a3858: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a385c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A385Cu;
    {
        const bool branch_taken_0x1a385c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a385c) {
            ctx->pc = 0x1A3890u;
            goto label_1a3890;
        }
    }
    ctx->pc = 0x1A3864u;
    // 0x1a3864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a386c: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A386Cu;
    SET_GPR_U32(ctx, 31, 0x1A3874u);
    ctx->pc = 0x1A3870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A386Cu;
            // 0x1a3870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3874u; }
        if (ctx->pc != 0x1A3874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3874u; }
        if (ctx->pc != 0x1A3874u) { return; }
    }
    ctx->pc = 0x1A3874u;
label_1a3874:
    // 0x1a3874: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A3874u;
    {
        const bool branch_taken_0x1a3874 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a3874) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A387Cu;
    // 0x1a387c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3880: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3884: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A3884u;
    {
        const bool branch_taken_0x1a3884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3884u;
            // 0x1a3888: 0xac4397b0  sw          $v1, -0x6850($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3884) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A388Cu;
    // 0x1a388c: 0x0  nop
    ctx->pc = 0x1a388cu;
    // NOP
label_1a3890:
    // 0x1a3890: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3894: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3894u;
    {
        const bool branch_taken_0x1a3894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3894) {
            ctx->pc = 0x1A38C8u;
            goto label_1a38c8;
        }
    }
    ctx->pc = 0x1A389Cu;
    // 0x1a389c: 0x0  nop
    ctx->pc = 0x1a389cu;
    // NOP
label_1a38a0:
    // 0x1a38a0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a38a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a38a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a38ac: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A38ACu;
    SET_GPR_U32(ctx, 31, 0x1A38B4u);
    ctx->pc = 0x1A38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38ACu;
            // 0x1a38b0: 0x24c6f500  addiu       $a2, $a2, -0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B4u; }
        if (ctx->pc != 0x1A38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B4u; }
        if (ctx->pc != 0x1A38B4u) { return; }
    }
    ctx->pc = 0x1A38B4u;
label_1a38b4:
    // 0x1a38b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A38A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a38a0;
        }
    }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A38BCu;
    {
        const bool branch_taken_0x1a38bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38bc) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A38C4u;
    // 0x1a38c4: 0x0  nop
    ctx->pc = 0x1a38c4u;
    // NOP
label_1a38c8:
    // 0x1a38c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a38cc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A3928u;
            goto label_1a3928;
        }
    }
    ctx->pc = 0x1A38D4u;
    // 0x1a38d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a38d8: 0x8c4297b0  lw          $v0, -0x6850($v0)
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940592)));
    // 0x1a38dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A38DCu;
    {
        const bool branch_taken_0x1a38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38dc) {
            ctx->pc = 0x1A3910u;
            goto label_1a3910;
        }
    }
    ctx->pc = 0x1A38E4u;
    // 0x1a38e4: 0x0  nop
    ctx->pc = 0x1a38e4u;
    // NOP
label_1a38e8:
    // 0x1a38e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a38e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a38ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38f0: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A38F0u;
    SET_GPR_U32(ctx, 31, 0x1A38F8u);
    ctx->pc = 0x1A38F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38F0u;
            // 0x1a38f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38F8u; }
        if (ctx->pc != 0x1A38F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38F8u; }
        if (ctx->pc != 0x1A38F8u) { return; }
    }
    ctx->pc = 0x1A38F8u;
label_1a38f8:
    // 0x1a38f8: 0x0  nop
    ctx->pc = 0x1a38f8u;
    // NOP
    // 0x1a38fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A38FCu;
    {
        const bool branch_taken_0x1a38fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a38fc) {
            ctx->pc = 0x1A38E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a38e8;
        }
    }
    ctx->pc = 0x1A3904u;
    // 0x1a3904: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A3904u;
    {
        const bool branch_taken_0x1a3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3904) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A390Cu;
    // 0x1a390c: 0x0  nop
    ctx->pc = 0x1a390cu;
    // NOP
label_1a3910:
    // 0x1a3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3918: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3918u;
    SET_GPR_U32(ctx, 31, 0x1A3920u);
    ctx->pc = 0x1A391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3918u;
            // 0x1a391c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3920u; }
        if (ctx->pc != 0x1A3920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3920u; }
        if (ctx->pc != 0x1A3920u) { return; }
    }
    ctx->pc = 0x1A3920u;
label_1a3920:
    // 0x1a3920: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3920u;
    {
        const bool branch_taken_0x1a3920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3920) {
            ctx->pc = 0x1A3948u;
            goto label_1a3948;
        }
    }
    ctx->pc = 0x1A3928u;
label_1a3928:
    // 0x1a3928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a392c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3930: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3930u;
    SET_GPR_U32(ctx, 31, 0x1A3938u);
    ctx->pc = 0x1A3934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3930u;
            // 0x1a3934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (runtime->hasFunction(0x115FE8u)) {
        auto targetFn = runtime->lookupFunction(0x115FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3938u; }
        if (ctx->pc != 0x1A3938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115FE8_0x115fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3938u; }
        if (ctx->pc != 0x1A3938u) { return; }
    }
    ctx->pc = 0x1A3938u;
label_1a3938:
    // 0x1a3938: 0x0  nop
    ctx->pc = 0x1a3938u;
    // NOP
    // 0x1a393c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A393Cu;
    {
        const bool branch_taken_0x1a393c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a393c) {
            ctx->pc = 0x1A3928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3928;
        }
    }
    ctx->pc = 0x1A3944u;
    // 0x1a3944: 0x0  nop
    ctx->pc = 0x1a3944u;
    // NOP
label_1a3948:
    // 0x1a3948: 0x26310054  addiu       $s1, $s1, 0x54
    ctx->pc = 0x1a3948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1a394c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a3950: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x1A3950u;
    {
        const bool branch_taken_0x1a3950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3950u;
            // 0x1a3954: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3950) {
            ctx->pc = 0x1A37ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a37ac;
        }
    }
    ctx->pc = 0x1A3958u;
label_1a3958:
    // 0x1a3958: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A3958u;
    SET_GPR_U32(ctx, 31, 0x1A3960u);
    ctx->pc = 0x1A7F60u;
    if (runtime->hasFunction(0x1A7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3960u; }
        if (ctx->pc != 0x1A3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F60_0x1a7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3960u; }
        if (ctx->pc != 0x1A3960u) { return; }
    }
    ctx->pc = 0x1A3960u;
label_1a3960:
    // 0x1a3960: 0x0  nop
    ctx->pc = 0x1a3960u;
    // NOP
    // 0x1a3964: 0x0  nop
    ctx->pc = 0x1a3964u;
    // NOP
    // 0x1a3968: 0x0  nop
    ctx->pc = 0x1a3968u;
    // NOP
    // 0x1a396c: 0x0  nop
    ctx->pc = 0x1a396cu;
    // NOP
    // 0x1a3970: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A3970u;
    {
        const bool branch_taken_0x1a3970 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3970) {
            ctx->pc = 0x1A3958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3958;
        }
    }
    ctx->pc = 0x1A3978u;
    // 0x1a3978: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a397c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A397Cu;
    SET_GPR_U32(ctx, 31, 0x1A3984u);
    ctx->pc = 0x1A3980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A397Cu;
            // 0x1a3980: 0x2484f518  addiu       $a0, $a0, -0xAE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3984u; }
        if (ctx->pc != 0x1A3984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3984u; }
        if (ctx->pc != 0x1A3984u) { return; }
    }
    ctx->pc = 0x1A3984u;
label_1a3984:
    // 0x1a3984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a398c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3990: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3990u;
            // 0x1a3994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3998u;
    // 0x1a3998: 0x0  nop
    ctx->pc = 0x1a3998u;
    // NOP
    // 0x1a399c: 0x0  nop
    ctx->pc = 0x1a399cu;
    // NOP
    ctx->pc = 0x1a39a0u;
}
