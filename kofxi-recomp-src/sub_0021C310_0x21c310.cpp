#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C310
// Address: 0x21c310 - 0x21c4e0
void sub_0021C310_0x21c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C310_0x21c310");
#endif

    switch (ctx->pc) {
        case 0x21c32cu: goto label_21c32c;
        case 0x21c33cu: goto label_21c33c;
        case 0x21c34cu: goto label_21c34c;
        case 0x21c35cu: goto label_21c35c;
        case 0x21c378u: goto label_21c378;
        case 0x21c3bcu: goto label_21c3bc;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3e4u: goto label_21c3e4;
        case 0x21c3f8u: goto label_21c3f8;
        case 0x21c408u: goto label_21c408;
        case 0x21c430u: goto label_21c430;
        case 0x21c474u: goto label_21c474;
        case 0x21c488u: goto label_21c488;
        case 0x21c49cu: goto label_21c49c;
        case 0x21c4b0u: goto label_21c4b0;
        case 0x21c4b8u: goto label_21c4b8;
        default: break;
    }

    ctx->pc = 0x21c310u;

label_21c310:
    // 0x21c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c320: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c324: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C324u;
    SET_GPR_U32(ctx, 31, 0x21C32Cu);
    ctx->pc = 0x21C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C324u;
            // 0x21c328: 0x24841730  addiu       $a0, $a0, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C32Cu; }
        if (ctx->pc != 0x21C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C32Cu; }
        if (ctx->pc != 0x21C32Cu) { return; }
    }
    ctx->pc = 0x21C32Cu;
label_21c32c:
    // 0x21c32c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c330: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c334: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C334u;
    SET_GPR_U32(ctx, 31, 0x21C33Cu);
    ctx->pc = 0x21C338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C334u;
            // 0x21c338: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C33Cu; }
        if (ctx->pc != 0x21C33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C33Cu; }
        if (ctx->pc != 0x21C33Cu) { return; }
    }
    ctx->pc = 0x21C33Cu;
label_21c33c:
    // 0x21c33c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c340: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c344: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C344u;
    SET_GPR_U32(ctx, 31, 0x21C34Cu);
    ctx->pc = 0x21C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C344u;
            // 0x21c348: 0x24841750  addiu       $a0, $a0, 0x1750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C34Cu; }
        if (ctx->pc != 0x21C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C34Cu; }
        if (ctx->pc != 0x21C34Cu) { return; }
    }
    ctx->pc = 0x21C34Cu;
label_21c34c:
    // 0x21c34c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21c350: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c354: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C354u;
    SET_GPR_U32(ctx, 31, 0x21C35Cu);
    ctx->pc = 0x21C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C354u;
            // 0x21c358: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C35Cu; }
        if (ctx->pc != 0x21C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C35Cu; }
        if (ctx->pc != 0x21C35Cu) { return; }
    }
    ctx->pc = 0x21C35Cu;
label_21c35c:
    // 0x21c35c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x21c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c360: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c368: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21c36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c370: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C370u;
    ctx->pc = 0x21C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C370u;
            // 0x21c374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c37c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c380: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c384: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21c384u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21c388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c38c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c390: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c394: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21c394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c398: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c39c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c3a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3ac: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21c3acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c3b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c3b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C3B4u;
    SET_GPR_U32(ctx, 31, 0x21C3BCu);
    ctx->pc = 0x21C3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3B4u;
            // 0x21c3b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3BCu; }
        if (ctx->pc != 0x21C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3BCu; }
        if (ctx->pc != 0x21C3BCu) { return; }
    }
    ctx->pc = 0x21C3BCu;
label_21c3bc:
    // 0x21c3bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3c8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C3C8u;
    SET_GPR_U32(ctx, 31, 0x21C3D0u);
    ctx->pc = 0x21C3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3C8u;
            // 0x21c3cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3D0u; }
        if (ctx->pc != 0x21C3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3D0u; }
        if (ctx->pc != 0x21C3D0u) { return; }
    }
    ctx->pc = 0x21C3D0u;
label_21c3d0:
    // 0x21c3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3dc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C3DCu;
    SET_GPR_U32(ctx, 31, 0x21C3E4u);
    ctx->pc = 0x21C3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3DCu;
            // 0x21c3e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3E4u; }
        if (ctx->pc != 0x21C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3E4u; }
        if (ctx->pc != 0x21C3E4u) { return; }
    }
    ctx->pc = 0x21C3E4u;
label_21c3e4:
    // 0x21c3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3f0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C3F0u;
    SET_GPR_U32(ctx, 31, 0x21C3F8u);
    ctx->pc = 0x21C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3F0u;
            // 0x21c3f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3F8u; }
        if (ctx->pc != 0x21C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3F8u; }
        if (ctx->pc != 0x21C3F8u) { return; }
    }
    ctx->pc = 0x21C3F8u;
label_21c3f8:
    // 0x21c3f8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21c3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c3fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c400: 0xc0870c4  jal         func_21C310
    ctx->pc = 0x21C400u;
    SET_GPR_U32(ctx, 31, 0x21C408u);
    ctx->pc = 0x21C404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C400u;
            // 0x21c404: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C310u;
    goto label_21c310;
    ctx->pc = 0x21C408u;
label_21c408:
    // 0x21c408: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21c408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c41c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21c41cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c420: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c424: 0x3e00008  jr          $ra
    ctx->pc = 0x21C424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C424u;
            // 0x21c428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C42Cu;
    // 0x21c42c: 0x0  nop
    ctx->pc = 0x21c42cu;
    // NOP
label_21c430:
    // 0x21c430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c434: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c434u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c438: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c44c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c450: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21c450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c454: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c458: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c45c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21c460: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c464: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21c464u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c468: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c46c: 0xc084612  jal         func_211848
    ctx->pc = 0x21C46Cu;
    SET_GPR_U32(ctx, 31, 0x21C474u);
    ctx->pc = 0x21C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C46Cu;
            // 0x21c470: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C474u; }
        if (ctx->pc != 0x21C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C474u; }
        if (ctx->pc != 0x21C474u) { return; }
    }
    ctx->pc = 0x21C474u;
label_21c474:
    // 0x21c474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c47c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c480: 0xc084612  jal         func_211848
    ctx->pc = 0x21C480u;
    SET_GPR_U32(ctx, 31, 0x21C488u);
    ctx->pc = 0x21C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C480u;
            // 0x21c484: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C488u; }
        if (ctx->pc != 0x21C488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C488u; }
        if (ctx->pc != 0x21C488u) { return; }
    }
    ctx->pc = 0x21C488u;
label_21c488:
    // 0x21c488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c48c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c490: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c494: 0xc084612  jal         func_211848
    ctx->pc = 0x21C494u;
    SET_GPR_U32(ctx, 31, 0x21C49Cu);
    ctx->pc = 0x21C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C494u;
            // 0x21c498: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C49Cu; }
        if (ctx->pc != 0x21C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C49Cu; }
        if (ctx->pc != 0x21C49Cu) { return; }
    }
    ctx->pc = 0x21C49Cu;
label_21c49c:
    // 0x21c49c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4a8: 0xc084612  jal         func_211848
    ctx->pc = 0x21C4A8u;
    SET_GPR_U32(ctx, 31, 0x21C4B0u);
    ctx->pc = 0x21C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4A8u;
            // 0x21c4ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4B0u; }
        if (ctx->pc != 0x21C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4B0u; }
        if (ctx->pc != 0x21C4B0u) { return; }
    }
    ctx->pc = 0x21C4B0u;
label_21c4b0:
    // 0x21c4b0: 0xc0870c4  jal         func_21C310
    ctx->pc = 0x21C4B0u;
    SET_GPR_U32(ctx, 31, 0x21C4B8u);
    ctx->pc = 0x21C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4B0u;
            // 0x21c4b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C310u;
    goto label_21c310;
    ctx->pc = 0x21C4B8u;
label_21c4b8:
    // 0x21c4b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c4c0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21c4c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c4c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c4cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c4d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21c4d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c4d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21c4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4D8u;
            // 0x21c4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C4E0u;
    ctx->pc = 0x21c4e0u;
}
