#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E6D8
// Address: 0x11e6d8 - 0x11e800
void sub_0011E6D8_0x11e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E6D8_0x11e6d8");
#endif

    switch (ctx->pc) {
        case 0x11e730u: goto label_11e730;
        case 0x11e754u: goto label_11e754;
        case 0x11e770u: goto label_11e770;
        case 0x11e7b4u: goto label_11e7b4;
        case 0x11e7c4u: goto label_11e7c4;
        default: break;
    }

    ctx->pc = 0x11e6d8u;

    // 0x11e6d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11e6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11e6dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11e6e0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11e6e4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11e6e8: 0x2456de00  addiu       $s6, $v0, -0x2200
    ctx->pc = 0x11e6e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11e6ec: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11e6f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11e6f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6f4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11e6f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e700: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11e700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e704: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11e708: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e70c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e710: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x11e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x11e714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E714u;
    {
        const bool branch_taken_0x11e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E714u;
            // 0x11e718: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e714) {
            ctx->pc = 0x11E724u;
            goto label_11e724;
        }
    }
    ctx->pc = 0x11E71Cu;
    // 0x11e71c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11E71Cu;
    {
        const bool branch_taken_0x11e71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E71Cu;
            // 0x11e720: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e71c) {
            ctx->pc = 0x11E7D8u;
            goto label_11e7d8;
        }
    }
    ctx->pc = 0x11E724u;
label_11e724:
    // 0x11e724: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e728: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11E728u;
    SET_GPR_U32(ctx, 31, 0x11E730u);
    ctx->pc = 0x11E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E728u;
            // 0x11e72c: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E730u; }
        if (ctx->pc != 0x11E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E730u; }
        if (ctx->pc != 0x11E730u) { return; }
    }
    ctx->pc = 0x11E730u;
label_11e730:
    // 0x11e730: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11E730u;
    {
        const bool branch_taken_0x11e730 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E730u;
            // 0x11e734: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e730) {
            ctx->pc = 0x11E7D8u;
            goto label_11e7d8;
        }
    }
    ctx->pc = 0x11E738u;
    // 0x11e738: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E738u;
    {
        const bool branch_taken_0x11e738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e738) {
            ctx->pc = 0x11E74Cu;
            goto label_11e74c;
        }
    }
    ctx->pc = 0x11E740u;
    // 0x11e740: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11e744: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E744u;
    {
        const bool branch_taken_0x11e744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E744u;
            // 0x11e748: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e744) {
            ctx->pc = 0x11E75Cu;
            goto label_11e75c;
        }
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E74Cu;
    SET_GPR_U32(ctx, 31, 0x11E754u);
    ctx->pc = 0x11E750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E74Cu;
            // 0x11e750: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E754u; }
        if (ctx->pc != 0x11E754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E754u; }
        if (ctx->pc != 0x11E754u) { return; }
    }
    ctx->pc = 0x11E754u;
label_11e754:
    // 0x11e754: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E754u;
    {
        const bool branch_taken_0x11e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E754u;
            // 0x11e758: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e754) {
            ctx->pc = 0x11E7D8u;
            goto label_11e7d8;
        }
    }
    ctx->pc = 0x11E75Cu;
label_11e75c:
    // 0x11e75c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e760: 0x2610dec4  addiu       $s0, $s0, -0x213C
    ctx->pc = 0x11e760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958788));
    // 0x11e764: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x11e764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11e768: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11E768u;
    SET_GPR_U32(ctx, 31, 0x11E770u);
    ctx->pc = 0x11E76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E768u;
            // 0x11e76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E770u; }
        if (ctx->pc != 0x11E770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E770u; }
        if (ctx->pc != 0x11E770u) { return; }
    }
    ctx->pc = 0x11E770u;
label_11e770:
    // 0x11e770: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x11e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x11e774: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x11e774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x11e778: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11e778u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11e77c: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11e77cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11e780: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x11e780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x11e784: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e788: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x11e788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x11e78c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x11e78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e790: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x11e790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e794: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11e794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11e798: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11e79c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e7a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e7a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e7a8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11e7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11e7ac: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E7ACu;
    SET_GPR_U32(ctx, 31, 0x11E7B4u);
    ctx->pc = 0x11E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7ACu;
            // 0x11e7b0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E7B4u; }
        if (ctx->pc != 0x11E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E7B4u; }
        if (ctx->pc != 0x11E7B4u) { return; }
    }
    ctx->pc = 0x11E7B4u;
label_11e7b4:
    // 0x11e7b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E7B4u;
    {
        const bool branch_taken_0x11e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7B4u;
            // 0x11e7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7b4) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E7BCu;
    // 0x11e7bc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E7BCu;
    SET_GPR_U32(ctx, 31, 0x11E7C4u);
    ctx->pc = 0x11E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7BCu;
            // 0x11e7c0: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E7C4u; }
        if (ctx->pc != 0x11E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E7C4u; }
        if (ctx->pc != 0x11E7C4u) { return; }
    }
    ctx->pc = 0x11E7C4u;
label_11e7c4:
    // 0x11e7c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7C4u;
            // 0x11e7c8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E7D8u;
            goto label_11e7d8;
        }
    }
    ctx->pc = 0x11E7CCu;
label_11e7cc:
    // 0x11e7cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e7d0: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11e7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e7d8:
    // 0x11e7d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e7dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11e7dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e7e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11e7e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e7e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11e7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e7e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11e7e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e7ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e7f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e7f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7F8u;
            // 0x11e7fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E800u;
    ctx->pc = 0x11e800u;
}
