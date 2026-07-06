#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FA660
// Address: 0x2fa660 - 0x2faa30
void sub_002FA660_0x2fa660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA660_0x2fa660");
#endif

    switch (ctx->pc) {
        case 0x2fa664u: goto label_2fa664;
        case 0x2fa68cu: goto label_2fa68c;
        case 0x2fa6a4u: goto label_2fa6a4;
        case 0x2fa6c0u: goto label_2fa6c0;
        case 0x2fa6f4u: goto label_2fa6f4;
        case 0x2fa704u: goto label_2fa704;
        case 0x2fa71cu: goto label_2fa71c;
        case 0x2fa74cu: goto label_2fa74c;
        case 0x2fa764u: goto label_2fa764;
        case 0x2fa798u: goto label_2fa798;
        case 0x2fa7a8u: goto label_2fa7a8;
        case 0x2fa7c0u: goto label_2fa7c0;
        case 0x2fa7ccu: goto label_2fa7cc;
        case 0x2fa7f0u: goto label_2fa7f0;
        case 0x2fa808u: goto label_2fa808;
        case 0x2fa828u: goto label_2fa828;
        case 0x2fa83cu: goto label_2fa83c;
        case 0x2fa854u: goto label_2fa854;
        case 0x2fa868u: goto label_2fa868;
        case 0x2fa870u: goto label_2fa870;
        case 0x2fa888u: goto label_2fa888;
        case 0x2fa8a0u: goto label_2fa8a0;
        case 0x2fa8b4u: goto label_2fa8b4;
        case 0x2fa8bcu: goto label_2fa8bc;
        case 0x2fa8c8u: goto label_2fa8c8;
        case 0x2fa8e4u: goto label_2fa8e4;
        case 0x2fa8f8u: goto label_2fa8f8;
        case 0x2fa908u: goto label_2fa908;
        case 0x2fa920u: goto label_2fa920;
        case 0x2fa928u: goto label_2fa928;
        case 0x2fa930u: goto label_2fa930;
        case 0x2fa93cu: goto label_2fa93c;
        case 0x2fa97cu: goto label_2fa97c;
        case 0x2fa988u: goto label_2fa988;
        case 0x2fa9b0u: goto label_2fa9b0;
        case 0x2fa9c4u: goto label_2fa9c4;
        case 0x2fa9f8u: goto label_2fa9f8;
        case 0x2faa08u: goto label_2faa08;
        default: break;
    }

    ctx->pc = 0x2fa660u;

    // 0x2fa660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fa660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fa664:
    // 0x2fa664: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fa664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fa668: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fa668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fa66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa670: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fa670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2fa674: 0x8c440688  lw          $a0, 0x688($v0)
    ctx->pc = 0x2fa674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2fa678: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fa678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa67c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fa67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2fa680: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fa680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fa684: 0xc0ac27c  jal         func_2B09F0
    ctx->pc = 0x2FA684u;
    SET_GPR_U32(ctx, 31, 0x2FA68Cu);
    ctx->pc = 0x2FA688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA684u;
            // 0x2fa688: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B09F0u;
    if (runtime->hasFunction(0x2B09F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B09F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA68Cu; }
        if (ctx->pc != 0x2FA68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B09F0_0x2b09f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA68Cu; }
        if (ctx->pc != 0x2FA68Cu) { return; }
    }
    ctx->pc = 0x2FA68Cu;
label_2fa68c:
    // 0x2fa68c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA68Cu;
    {
        const bool branch_taken_0x2fa68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA68Cu;
            // 0x2fa690: 0xae22016c  sw          $v0, 0x16C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa68c) {
            ctx->pc = 0x2FA6ACu;
            goto label_2fa6ac;
        }
    }
    ctx->pc = 0x2FA694u;
    // 0x2fa694: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa698: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa69c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA69Cu;
    SET_GPR_U32(ctx, 31, 0x2FA6A4u);
    ctx->pc = 0x2FA6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA69Cu;
            // 0x2fa6a0: 0x24842838  addiu       $a0, $a0, 0x2838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6A4u; }
        if (ctx->pc != 0x2FA6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6A4u; }
        if (ctx->pc != 0x2FA6A4u) { return; }
    }
    ctx->pc = 0x2FA6A4u;
label_2fa6a4:
    // 0x2fa6a4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2FA6A4u;
    {
        const bool branch_taken_0x2fa6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa6a4) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA6ACu;
label_2fa6ac:
    // 0x2fa6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa6b4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa6b8: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x2FA6B8u;
    SET_GPR_U32(ctx, 31, 0x2FA6C0u);
    ctx->pc = 0x2FA6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6B8u;
            // 0x2fa6bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (runtime->hasFunction(0x2B04E8u)) {
        auto targetFn = runtime->lookupFunction(0x2B04E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6C0u; }
        if (ctx->pc != 0x2FA6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B04E8_0x2b04e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6C0u; }
        if (ctx->pc != 0x2FA6C0u) { return; }
    }
    ctx->pc = 0x2FA6C0u;
label_2fa6c0:
    // 0x2fa6c0: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2fa6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2fa6c4: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x2fa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
    // 0x2fa6c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa6cc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FA6CCu;
    {
        const bool branch_taken_0x2fa6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6CCu;
            // 0x2fa6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6cc) {
            ctx->pc = 0x2FA72Cu;
            goto label_2fa72c;
        }
    }
    ctx->pc = 0x2FA6D4u;
    // 0x2fa6d4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fa6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fa6d8: 0x80620a20  lb          $v0, 0xA20($v1)
    ctx->pc = 0x2fa6d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2592)));
    // 0x2fa6dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FA6DCu;
    {
        const bool branch_taken_0x2fa6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6DCu;
            // 0x2fa6e0: 0x24700a20  addiu       $s0, $v1, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6dc) {
            ctx->pc = 0x2FA724u;
            goto label_2fa724;
        }
    }
    ctx->pc = 0x2FA6E4u;
    // 0x2fa6e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA6ECu;
    SET_GPR_U32(ctx, 31, 0x2FA6F4u);
    ctx->pc = 0x2FA6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6ECu;
            // 0x2fa6f0: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6F4u; }
        if (ctx->pc != 0x2FA6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA6F4u; }
        if (ctx->pc != 0x2FA6F4u) { return; }
    }
    ctx->pc = 0x2FA6F4u;
label_2fa6f4:
    // 0x2fa6f4: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2fa6f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6fc: 0xc0ac77c  jal         func_2B1DF0
    ctx->pc = 0x2FA6FCu;
    SET_GPR_U32(ctx, 31, 0x2FA704u);
    ctx->pc = 0x2FA700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6FCu;
            // 0x2fa700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1DF0u;
    if (runtime->hasFunction(0x2B1DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B1DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA704u; }
        if (ctx->pc != 0x2FA704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1DF0_0x2b1df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA704u; }
        if (ctx->pc != 0x2FA704u) { return; }
    }
    ctx->pc = 0x2FA704u;
label_2fa704:
    // 0x2fa704: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA704u;
    {
        const bool branch_taken_0x2fa704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA704u;
            // 0x2fa708: 0x8e43068c  lw          $v1, 0x68C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa704) {
            ctx->pc = 0x2FA76Cu;
            goto label_2fa76c;
        }
    }
    ctx->pc = 0x2FA70Cu;
    // 0x2fa70c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa710: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa714: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA714u;
    SET_GPR_U32(ctx, 31, 0x2FA71Cu);
    ctx->pc = 0x2FA718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA714u;
            // 0x2fa718: 0x24842860  addiu       $a0, $a0, 0x2860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA71Cu; }
        if (ctx->pc != 0x2FA71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA71Cu; }
        if (ctx->pc != 0x2FA71Cu) { return; }
    }
    ctx->pc = 0x2FA71Cu;
label_2fa71c:
    // 0x2fa71c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2FA71Cu;
    {
        const bool branch_taken_0x2fa71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa71c) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA724u;
label_2fa724:
    // 0x2fa724: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x2fa724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
    // 0x2fa728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa72c:
    // 0x2fa72c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FA72Cu;
    {
        const bool branch_taken_0x2fa72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA72Cu;
            // 0x2fa730: 0x8e43068c  lw          $v1, 0x68C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa72c) {
            ctx->pc = 0x2FA76Cu;
            goto label_2fa76c;
        }
    }
    ctx->pc = 0x2FA734u;
    // 0x2fa734: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fa738: 0x8c450690  lw          $a1, 0x690($v0)
    ctx->pc = 0x2fa738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
    // 0x2fa73c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FA73Cu;
    {
        const bool branch_taken_0x2fa73c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA73Cu;
            // 0x2fa740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa73c) {
            ctx->pc = 0x2FA770u;
            goto label_2fa770;
        }
    }
    ctx->pc = 0x2FA744u;
    // 0x2fa744: 0xc0ac6f0  jal         func_2B1BC0
    ctx->pc = 0x2FA744u;
    SET_GPR_U32(ctx, 31, 0x2FA74Cu);
    ctx->pc = 0x2FA748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA744u;
            // 0x2fa748: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1BC0u;
    if (runtime->hasFunction(0x2B1BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B1BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA74Cu; }
        if (ctx->pc != 0x2FA74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1BC0_0x2b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA74Cu; }
        if (ctx->pc != 0x2FA74Cu) { return; }
    }
    ctx->pc = 0x2FA74Cu;
label_2fa74c:
    // 0x2fa74c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA74Cu;
    {
        const bool branch_taken_0x2fa74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA74Cu;
            // 0x2fa750: 0x8e43068c  lw          $v1, 0x68C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa74c) {
            ctx->pc = 0x2FA76Cu;
            goto label_2fa76c;
        }
    }
    ctx->pc = 0x2FA754u;
    // 0x2fa754: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa758: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa75c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA75Cu;
    SET_GPR_U32(ctx, 31, 0x2FA764u);
    ctx->pc = 0x2FA760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA75Cu;
            // 0x2fa760: 0x24842880  addiu       $a0, $a0, 0x2880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA764u; }
        if (ctx->pc != 0x2FA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA764u; }
        if (ctx->pc != 0x2FA764u) { return; }
    }
    ctx->pc = 0x2FA764u;
label_2fa764:
    // 0x2fa764: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2FA764u;
    {
        const bool branch_taken_0x2fa764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa764) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA76Cu;
label_2fa76c:
    // 0x2fa76c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fa770:
    // 0x2fa770: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA770u;
    {
        const bool branch_taken_0x2fa770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA770u;
            // 0x2fa774: 0x8e43068c  lw          $v1, 0x68C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa770) {
            ctx->pc = 0x2FA7CCu;
            goto label_2fa7cc;
        }
    }
    ctx->pc = 0x2FA778u;
    // 0x2fa778: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fa778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fa77c: 0x80620b20  lb          $v0, 0xB20($v1)
    ctx->pc = 0x2fa77cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2848)));
    // 0x2fa780: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FA780u;
    {
        const bool branch_taken_0x2fa780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA780u;
            // 0x2fa784: 0x24700b20  addiu       $s0, $v1, 0xB20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa780) {
            ctx->pc = 0x2FA7C8u;
            goto label_2fa7c8;
        }
    }
    ctx->pc = 0x2FA788u;
    // 0x2fa788: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa78c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa790: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA790u;
    SET_GPR_U32(ctx, 31, 0x2FA798u);
    ctx->pc = 0x2FA794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA790u;
            // 0x2fa794: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA798u; }
        if (ctx->pc != 0x2FA798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA798u; }
        if (ctx->pc != 0x2FA798u) { return; }
    }
    ctx->pc = 0x2FA798u;
label_2fa798:
    // 0x2fa798: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2fa79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7a0: 0xc0ac7fc  jal         func_2B1FF0
    ctx->pc = 0x2FA7A0u;
    SET_GPR_U32(ctx, 31, 0x2FA7A8u);
    ctx->pc = 0x2FA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7A0u;
            // 0x2fa7a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1FF0u;
    if (runtime->hasFunction(0x2B1FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B1FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7A8u; }
        if (ctx->pc != 0x2FA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1FF0_0x2b1ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7A8u; }
        if (ctx->pc != 0x2FA7A8u) { return; }
    }
    ctx->pc = 0x2FA7A8u;
label_2fa7a8:
    // 0x2fa7a8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA7A8u;
    {
        const bool branch_taken_0x2fa7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7a8) {
            ctx->pc = 0x2FA7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7A8u;
            // 0x2fa7ac: 0x8e220174  lw          $v0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FA810u;
            goto label_2fa810;
        }
    }
    ctx->pc = 0x2FA7B0u;
    // 0x2fa7b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa7b4: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa7b8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA7B8u;
    SET_GPR_U32(ctx, 31, 0x2FA7C0u);
    ctx->pc = 0x2FA7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7B8u;
            // 0x2fa7bc: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7C0u; }
        if (ctx->pc != 0x2FA7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7C0u; }
        if (ctx->pc != 0x2FA7C0u) { return; }
    }
    ctx->pc = 0x2FA7C0u;
label_2fa7c0:
    // 0x2fa7c0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2FA7C0u;
    {
        const bool branch_taken_0x2fa7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7c0) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA7C8u;
label_2fa7c8:
    // 0x2fa7c8: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x2fa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
label_2fa7cc:
    // 0x2fa7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa7d0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FA7D0u;
    {
        const bool branch_taken_0x2fa7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa7d0) {
            ctx->pc = 0x2FA7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7D0u;
            // 0x2fa7d4: 0x8e220174  lw          $v0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FA810u;
            goto label_2fa810;
        }
    }
    ctx->pc = 0x2FA7D8u;
    // 0x2fa7d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fa7dc: 0x8c450694  lw          $a1, 0x694($v0)
    ctx->pc = 0x2fa7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1684)));
    // 0x2fa7e0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA7E0u;
    {
        const bool branch_taken_0x2fa7e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7e0) {
            ctx->pc = 0x2FA7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7E0u;
            // 0x2fa7e4: 0x8e220174  lw          $v0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FA810u;
            goto label_2fa810;
        }
    }
    ctx->pc = 0x2FA7E8u;
    // 0x2fa7e8: 0xc0ac7da  jal         func_2B1F68
    ctx->pc = 0x2FA7E8u;
    SET_GPR_U32(ctx, 31, 0x2FA7F0u);
    ctx->pc = 0x2FA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7E8u;
            // 0x2fa7ec: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1F68u;
    if (runtime->hasFunction(0x2B1F68u)) {
        auto targetFn = runtime->lookupFunction(0x2B1F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7F0u; }
        if (ctx->pc != 0x2FA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1F68_0x2b1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7F0u; }
        if (ctx->pc != 0x2FA7F0u) { return; }
    }
    ctx->pc = 0x2FA7F0u;
label_2fa7f0:
    // 0x2fa7f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA7F0u;
    {
        const bool branch_taken_0x2fa7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7f0) {
            ctx->pc = 0x2FA7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7F0u;
            // 0x2fa7f4: 0x8e220174  lw          $v0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FA810u;
            goto label_2fa810;
        }
    }
    ctx->pc = 0x2FA7F8u;
    // 0x2fa7f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa7fc: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa800: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA800u;
    SET_GPR_U32(ctx, 31, 0x2FA808u);
    ctx->pc = 0x2FA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA800u;
            // 0x2fa804: 0x248428c8  addiu       $a0, $a0, 0x28C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA808u; }
        if (ctx->pc != 0x2FA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA808u; }
        if (ctx->pc != 0x2FA808u) { return; }
    }
    ctx->pc = 0x2FA808u;
label_2fa808:
    // 0x2fa808: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2FA808u;
    {
        const bool branch_taken_0x2fa808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa808) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA810u;
label_2fa810:
    // 0x2fa810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa814: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA814u;
    {
        const bool branch_taken_0x2fa814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA814u;
            // 0x2fa818: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa814) {
            ctx->pc = 0x2FA844u;
            goto label_2fa844;
        }
    }
    ctx->pc = 0x2FA81Cu;
    // 0x2fa81c: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2fa820: 0xc0ac37a  jal         func_2B0DE8
    ctx->pc = 0x2FA820u;
    SET_GPR_U32(ctx, 31, 0x2FA828u);
    ctx->pc = 0x2FA824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA820u;
            // 0x2fa824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0DE8u;
    if (runtime->hasFunction(0x2B0DE8u)) {
        auto targetFn = runtime->lookupFunction(0x2B0DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA828u; }
        if (ctx->pc != 0x2FA828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0DE8_0x2b0de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA828u; }
        if (ctx->pc != 0x2FA828u) { return; }
    }
    ctx->pc = 0x2FA828u;
label_2fa828:
    // 0x2fa828: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fa828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fa82c: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2fa830: 0x24a5bda0  addiu       $a1, $a1, -0x4260
    ctx->pc = 0x2fa830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950304));
    // 0x2fa834: 0xc0ac376  jal         func_2B0DD8
    ctx->pc = 0x2FA834u;
    SET_GPR_U32(ctx, 31, 0x2FA83Cu);
    ctx->pc = 0x2FA838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA834u;
            // 0x2fa838: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0DD8u;
    if (runtime->hasFunction(0x2B0DD8u)) {
        auto targetFn = runtime->lookupFunction(0x2B0DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA83Cu; }
        if (ctx->pc != 0x2FA83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0DD8_0x2b0dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA83Cu; }
        if (ctx->pc != 0x2FA83Cu) { return; }
    }
    ctx->pc = 0x2FA83Cu;
label_2fa83c:
    // 0x2fa83c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA83Cu;
    {
        const bool branch_taken_0x2fa83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA83Cu;
            // 0x2fa840: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa83c) {
            ctx->pc = 0x2FA858u;
            goto label_2fa858;
        }
    }
    ctx->pc = 0x2FA844u;
label_2fa844:
    // 0x2fa844: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2fa848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa84c: 0xc0ac37a  jal         func_2B0DE8
    ctx->pc = 0x2FA84Cu;
    SET_GPR_U32(ctx, 31, 0x2FA854u);
    ctx->pc = 0x2FA850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA84Cu;
            // 0x2fa850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0DE8u;
    if (runtime->hasFunction(0x2B0DE8u)) {
        auto targetFn = runtime->lookupFunction(0x2B0DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA854u; }
        if (ctx->pc != 0x2FA854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0DE8_0x2b0de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA854u; }
        if (ctx->pc != 0x2FA854u) { return; }
    }
    ctx->pc = 0x2FA854u;
label_2fa854:
    // 0x2fa854: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x2fa854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_2fa858:
    // 0x2fa858: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa85c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2fa85cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2fa860: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x2FA860u;
    SET_GPR_U32(ctx, 31, 0x2FA868u);
    ctx->pc = 0x2FA864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA860u;
            // 0x2fa864: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (runtime->hasFunction(0x2B04E8u)) {
        auto targetFn = runtime->lookupFunction(0x2B04E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B04E8_0x2b04e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    }
    ctx->pc = 0x2FA868u;
label_2fa868:
    // 0x2fa868: 0xc0abf34  jal         func_2AFCD0
    ctx->pc = 0x2FA868u;
    SET_GPR_U32(ctx, 31, 0x2FA870u);
    ctx->pc = 0x2FA86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA868u;
            // 0x2fa86c: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFCD0u;
    if (runtime->hasFunction(0x2AFCD0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA870u; }
        if (ctx->pc != 0x2FA870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFCD0_0x2afcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA870u; }
        if (ctx->pc != 0x2FA870u) { return; }
    }
    ctx->pc = 0x2FA870u;
label_2fa870:
    // 0x2fa870: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA870u;
    {
        const bool branch_taken_0x2fa870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA870u;
            // 0x2fa874: 0xae220170  sw          $v0, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa870) {
            ctx->pc = 0x2FA890u;
            goto label_2fa890;
        }
    }
    ctx->pc = 0x2FA878u;
    // 0x2fa878: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa87c: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa880: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA880u;
    SET_GPR_U32(ctx, 31, 0x2FA888u);
    ctx->pc = 0x2FA884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA880u;
            // 0x2fa884: 0x248428f0  addiu       $a0, $a0, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA888u; }
        if (ctx->pc != 0x2FA888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA888u; }
        if (ctx->pc != 0x2FA888u) { return; }
    }
    ctx->pc = 0x2FA888u;
label_2fa888:
    // 0x2fa888: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FA888u;
    {
        const bool branch_taken_0x2fa888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa888) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA890u;
label_2fa890:
    // 0x2fa890: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fa890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fa894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa898: 0xc0ac5f0  jal         func_2B17C0
    ctx->pc = 0x2FA898u;
    SET_GPR_U32(ctx, 31, 0x2FA8A0u);
    ctx->pc = 0x2FA89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA898u;
            // 0x2fa89c: 0x24a5ac50  addiu       $a1, $a1, -0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B17C0u;
    if (runtime->hasFunction(0x2B17C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B17C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8A0u; }
        if (ctx->pc != 0x2FA8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B17C0_0x2b17c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8A0u; }
        if (ctx->pc != 0x2FA8A0u) { return; }
    }
    ctx->pc = 0x2FA8A0u;
label_2fa8a0:
    // 0x2fa8a0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fa8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fa8a4: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x2fa8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2fa8a8: 0x24a5b100  addiu       $a1, $a1, -0x4F00
    ctx->pc = 0x2fa8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947072));
    // 0x2fa8ac: 0xc0ac5f2  jal         func_2B17C8
    ctx->pc = 0x2FA8ACu;
    SET_GPR_U32(ctx, 31, 0x2FA8B4u);
    ctx->pc = 0x2FA8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8ACu;
            // 0x2fa8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B17C8u;
    if (runtime->hasFunction(0x2B17C8u)) {
        auto targetFn = runtime->lookupFunction(0x2B17C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8B4u; }
        if (ctx->pc != 0x2FA8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B17C8_0x2b17c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8B4u; }
        if (ctx->pc != 0x2FA8B4u) { return; }
    }
    ctx->pc = 0x2FA8B4u;
label_2fa8b4:
    // 0x2fa8b4: 0xc0ac52c  jal         func_2B14B0
    ctx->pc = 0x2FA8B4u;
    SET_GPR_U32(ctx, 31, 0x2FA8BCu);
    ctx->pc = 0x2FA8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8B4u;
            // 0x2fa8b8: 0x8e240170  lw          $a0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B14B0u;
    if (runtime->hasFunction(0x2B14B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B14B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8BCu; }
        if (ctx->pc != 0x2FA8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B14B0_0x2b14b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8BCu; }
        if (ctx->pc != 0x2FA8BCu) { return; }
    }
    ctx->pc = 0x2FA8BCu;
label_2fa8bc:
    // 0x2fa8bc: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2fa8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2fa8c0: 0xc0a31c4  jal         func_28C710
    ctx->pc = 0x2FA8C0u;
    SET_GPR_U32(ctx, 31, 0x2FA8C8u);
    ctx->pc = 0x2FA8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8C0u;
            // 0x2fa8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C710u;
    if (runtime->hasFunction(0x28C710u)) {
        auto targetFn = runtime->lookupFunction(0x28C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8C8u; }
        if (ctx->pc != 0x2FA8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C710_0x28c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8C8u; }
        if (ctx->pc != 0x2FA8C8u) { return; }
    }
    ctx->pc = 0x2FA8C8u;
label_2fa8c8:
    // 0x2fa8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8cc: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA8CCu;
    {
        const bool branch_taken_0x2fa8cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8CCu;
            // 0x2fa8d0: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8cc) {
            ctx->pc = 0x2FA8ECu;
            goto label_2fa8ec;
        }
    }
    ctx->pc = 0x2FA8D4u;
    // 0x2fa8d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa8d8: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa8dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA8DCu;
    SET_GPR_U32(ctx, 31, 0x2FA8E4u);
    ctx->pc = 0x2FA8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8DCu;
            // 0x2fa8e0: 0x24842908  addiu       $a0, $a0, 0x2908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8E4u; }
        if (ctx->pc != 0x2FA8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8E4u; }
        if (ctx->pc != 0x2FA8E4u) { return; }
    }
    ctx->pc = 0x2FA8E4u;
label_2fa8e4:
    // 0x2fa8e4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2FA8E4u;
    {
        const bool branch_taken_0x2fa8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8e4) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA8ECu;
label_2fa8ec:
    // 0x2fa8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8f0: 0xc0a13ca  jal         func_284F28
    ctx->pc = 0x2FA8F0u;
    SET_GPR_U32(ctx, 31, 0x2FA8F8u);
    ctx->pc = 0x2FA8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8F0u;
            // 0x2fa8f4: 0x24a5bff8  addiu       $a1, $a1, -0x4008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F28u;
    if (runtime->hasFunction(0x284F28u)) {
        auto targetFn = runtime->lookupFunction(0x284F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8F8u; }
        if (ctx->pc != 0x2FA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F28_0x284f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8F8u; }
        if (ctx->pc != 0x2FA8F8u) { return; }
    }
    ctx->pc = 0x2FA8F8u;
label_2fa8f8:
    // 0x2fa8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8fc: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x2fa8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2fa900: 0xc0ac02a  jal         func_2B00A8
    ctx->pc = 0x2FA900u;
    SET_GPR_U32(ctx, 31, 0x2FA908u);
    ctx->pc = 0x2FA904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA900u;
            // 0x2fa904: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A8u;
    if (runtime->hasFunction(0x2B00A8u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA908u; }
        if (ctx->pc != 0x2FA908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B00A8_0x2b00a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA908u; }
        if (ctx->pc != 0x2FA908u) { return; }
    }
    ctx->pc = 0x2FA908u;
label_2fa908:
    // 0x2fa908: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2fa90c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2fa910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA910u;
    {
        const bool branch_taken_0x2fa910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA910u;
            // 0x2fa914: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa910) {
            ctx->pc = 0x2FA920u;
            goto label_2fa920;
        }
    }
    ctx->pc = 0x2FA918u;
    // 0x2fa918: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA918u;
    SET_GPR_U32(ctx, 31, 0x2FA920u);
    ctx->pc = 0x2FA91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA918u;
            // 0x2fa91c: 0x24842928  addiu       $a0, $a0, 0x2928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA920u; }
        if (ctx->pc != 0x2FA920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA920u; }
        if (ctx->pc != 0x2FA920u) { return; }
    }
    ctx->pc = 0x2FA920u;
label_2fa920:
    // 0x2fa920: 0x2402f82f  addiu       $v0, $zero, -0x7D1
    ctx->pc = 0x2fa920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965295));
    // 0x2fa924: 0xae220168  sw          $v0, 0x168($s1)
    ctx->pc = 0x2fa924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 2));
label_2fa928:
    // 0x2fa928: 0xc0ac504  jal         func_2B1410
    ctx->pc = 0x2FA928u;
    SET_GPR_U32(ctx, 31, 0x2FA930u);
    ctx->pc = 0x2FA92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA928u;
            // 0x2fa92c: 0x8e240170  lw          $a0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1410u;
    if (runtime->hasFunction(0x2B1410u)) {
        auto targetFn = runtime->lookupFunction(0x2B1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA930u; }
        if (ctx->pc != 0x2FA930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1410_0x2b1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA930u; }
        if (ctx->pc != 0x2FA930u) { return; }
    }
    ctx->pc = 0x2FA930u;
label_2fa930:
    // 0x2fa930: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2fa934: 0xc0ac49e  jal         func_2B1278
    ctx->pc = 0x2FA934u;
    SET_GPR_U32(ctx, 31, 0x2FA93Cu);
    ctx->pc = 0x2FA938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA934u;
            // 0x2fa938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1278u;
    if (runtime->hasFunction(0x2B1278u)) {
        auto targetFn = runtime->lookupFunction(0x2B1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA93Cu; }
        if (ctx->pc != 0x2FA93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1278_0x2b1278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA93Cu; }
        if (ctx->pc != 0x2FA93Cu) { return; }
    }
    ctx->pc = 0x2FA93Cu;
label_2fa93c:
    // 0x2fa93c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fa93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa940: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2fa940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fa944: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FA944u;
    {
        const bool branch_taken_0x2fa944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA944u;
            // 0x2fa948: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa944) {
            ctx->pc = 0x2FA9CCu;
            goto label_2fa9cc;
        }
    }
    ctx->pc = 0x2FA94Cu;
    // 0x2fa94c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa950: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x2fa950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x2fa954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa958: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa95c: 0x800008  jr          $a0
    ctx->pc = 0x2FA95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA964u: goto label_2fa964;
            case 0x2FA96Cu: goto label_2fa96c;
            case 0x2FA9A0u: goto label_2fa9a0;
            case 0x2FA9B8u: goto label_2fa9b8;
            case 0x2FA9CCu: goto label_2fa9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FA964u;
label_2fa964:
    // 0x2fa964: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FA964u;
    {
        const bool branch_taken_0x2fa964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA964u;
            // 0x2fa968: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa964) {
            ctx->pc = 0x2FA9D4u;
            goto label_2fa9d4;
        }
    }
    ctx->pc = 0x2FA96Cu;
label_2fa96c:
    // 0x2fa96c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fa96cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fa970: 0x2412f82f  addiu       $s2, $zero, -0x7D1
    ctx->pc = 0x2fa970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965295));
    // 0x2fa974: 0xc0a56c0  jal         func_295B00
    ctx->pc = 0x2FA974u;
    SET_GPR_U32(ctx, 31, 0x2FA97Cu);
    ctx->pc = 0x2FA978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA974u;
            // 0x2fa978: 0x26102940  addiu       $s0, $s0, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295B00u;
    if (runtime->hasFunction(0x295B00u)) {
        auto targetFn = runtime->lookupFunction(0x295B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA97Cu; }
        if (ctx->pc != 0x2FA97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295B00_0x295b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA97Cu; }
        if (ctx->pc != 0x2FA97Cu) { return; }
    }
    ctx->pc = 0x2FA97Cu;
label_2fa97c:
    // 0x2fa97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa980: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA980u;
    SET_GPR_U32(ctx, 31, 0x2FA988u);
    ctx->pc = 0x2FA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA980u;
            // 0x2fa984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA988u; }
        if (ctx->pc != 0x2FA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA988u; }
        if (ctx->pc != 0x2FA988u) { return; }
    }
    ctx->pc = 0x2FA988u;
label_2fa988:
    // 0x2fa988: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x2fa988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2fa98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa990: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FA990u;
    {
        const bool branch_taken_0x2fa990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa990) {
            ctx->pc = 0x2FA994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA990u;
            // 0x2fa994: 0x8e320168  lw          $s2, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA998u;
    // 0x2fa998: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA998u;
    {
        const bool branch_taken_0x2fa998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa998) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA9A0u;
label_2fa9a0:
    // 0x2fa9a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa9a4: 0x2412f82d  addiu       $s2, $zero, -0x7D3
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fa9a8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA9A8u;
    SET_GPR_U32(ctx, 31, 0x2FA9B0u);
    ctx->pc = 0x2FA9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9A8u;
            // 0x2fa9ac: 0x24842968  addiu       $a0, $a0, 0x2968 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9B0u; }
        if (ctx->pc != 0x2FA9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9B0u; }
        if (ctx->pc != 0x2FA9B0u) { return; }
    }
    ctx->pc = 0x2FA9B0u;
label_2fa9b0:
    // 0x2fa9b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2FA9B0u;
    {
        const bool branch_taken_0x2fa9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa9b0) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA9B8u;
label_2fa9b8:
    // 0x2fa9b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa9bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA9BCu;
    SET_GPR_U32(ctx, 31, 0x2FA9C4u);
    ctx->pc = 0x2FA9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9BCu;
            // 0x2fa9c0: 0x24842980  addiu       $a0, $a0, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9C4u; }
        if (ctx->pc != 0x2FA9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9C4u; }
        if (ctx->pc != 0x2FA9C4u) { return; }
    }
    ctx->pc = 0x2FA9C4u;
label_2fa9c4:
    // 0x2fa9c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA9C4u;
    {
        const bool branch_taken_0x2fa9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa9c4) {
            ctx->pc = 0x2FA9D4u;
            goto label_2fa9d4;
        }
    }
    ctx->pc = 0x2FA9CCu;
label_2fa9cc:
    // 0x2fa9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FA9CCu;
    {
        const bool branch_taken_0x2fa9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9CCu;
            // 0x2fa9d0: 0x2412f82d  addiu       $s2, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9cc) {
            ctx->pc = 0x2FAA00u;
            goto label_2faa00;
        }
    }
    ctx->pc = 0x2FA9D4u;
label_2fa9d4:
    // 0x2fa9d4: 0x1260ffd4  beqz        $s3, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2FA9D4u;
    {
        const bool branch_taken_0x2fa9d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa9d4) {
            ctx->pc = 0x2FA928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa928;
        }
    }
    ctx->pc = 0x2FA9DCu;
    // 0x2fa9dc: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x2fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2fa9e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2fa9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2fa9e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA9E4u;
    {
        const bool branch_taken_0x2fa9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9E4u;
            // 0x2fa9e8: 0xae200168  sw          $zero, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9e4) {
            ctx->pc = 0x2FA9F8u;
            goto label_2fa9f8;
        }
    }
    ctx->pc = 0x2FA9ECu;
    // 0x2fa9ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fa9f0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FA9F0u;
    SET_GPR_U32(ctx, 31, 0x2FA9F8u);
    ctx->pc = 0x2FA9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9F0u;
            // 0x2fa9f4: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9F8u; }
        if (ctx->pc != 0x2FA9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9F8u; }
        if (ctx->pc != 0x2FA9F8u) { return; }
    }
    ctx->pc = 0x2FA9F8u;
label_2fa9f8:
    // 0x2fa9f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA9F8u;
    {
        const bool branch_taken_0x2fa9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9F8u;
            // 0x2fa9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9f8) {
            ctx->pc = 0x2FAA10u;
            goto label_2faa10;
        }
    }
    ctx->pc = 0x2FAA00u;
label_2faa00:
    // 0x2faa00: 0xc0beab8  jal         func_2FAAE0
    ctx->pc = 0x2FAA00u;
    SET_GPR_U32(ctx, 31, 0x2FAA08u);
    ctx->pc = 0x2FAA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA00u;
            // 0x2faa04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAAE0u;
    if (runtime->hasFunction(0x2FAAE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FAAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA08u; }
        if (ctx->pc != 0x2FAA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FAAE0_0x2faae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA08u; }
        if (ctx->pc != 0x2FAA08u) { return; }
    }
    ctx->pc = 0x2FAA08u;
label_2faa08:
    // 0x2faa08: 0xae320168  sw          $s2, 0x168($s1)
    ctx->pc = 0x2faa08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 18));
    // 0x2faa0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2faa10:
    // 0x2faa10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2faa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2faa14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2faa14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2faa18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2faa18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faa1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2faa1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faa20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2faa20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faa24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA24u;
            // 0x2faa28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAA2Cu;
    // 0x2faa2c: 0x0  nop
    ctx->pc = 0x2faa2cu;
    // NOP
    ctx->pc = 0x2faa30u;
}
