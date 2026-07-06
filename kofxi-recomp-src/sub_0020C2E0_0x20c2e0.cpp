#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C2E0
// Address: 0x20c2e0 - 0x20c440
void sub_0020C2E0_0x20c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C2E0_0x20c2e0");
#endif

    switch (ctx->pc) {
        case 0x20c30cu: goto label_20c30c;
        case 0x20c314u: goto label_20c314;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c328u: goto label_20c328;
        case 0x20c334u: goto label_20c334;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c374u: goto label_20c374;
        case 0x20c380u: goto label_20c380;
        case 0x20c390u: goto label_20c390;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c410u: goto label_20c410;
        default: break;
    }

    ctx->pc = 0x20c2e0u;

    // 0x20c2e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20c2e4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c2e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20c2ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20c2f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20c2f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c304: 0xc083044  jal         func_20C110
    ctx->pc = 0x20C304u;
    SET_GPR_U32(ctx, 31, 0x20C30Cu);
    ctx->pc = 0x20C308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C304u;
            // 0x20c308: 0xac40a498  sw          $zero, -0x5B68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C110u;
    if (runtime->hasFunction(0x20C110u)) {
        auto targetFn = runtime->lookupFunction(0x20C110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C30Cu; }
        if (ctx->pc != 0x20C30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C110_0x20c110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C30Cu; }
        if (ctx->pc != 0x20C30Cu) { return; }
    }
    ctx->pc = 0x20C30Cu;
label_20c30c:
    // 0x20c30c: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20C30Cu;
    SET_GPR_U32(ctx, 31, 0x20C314u);
    ctx->pc = 0x20C310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C30Cu;
            // 0x20c310: 0x26140400  addiu       $s4, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C0F0u;
    if (runtime->hasFunction(0x20C0F0u)) {
        auto targetFn = runtime->lookupFunction(0x20C0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C314u; }
        if (ctx->pc != 0x20C314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C0F0_0x20c0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C314u; }
        if (ctx->pc != 0x20C314u) { return; }
    }
    ctx->pc = 0x20C314u;
label_20c314:
    // 0x20c314: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20c314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20c318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c31c:
    // 0x20c31c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20c31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c324: 0x0  nop
    ctx->pc = 0x20c324u;
    // NOP
label_20c328:
    // 0x20c328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c32c: 0xc040454  jal         func_101150
    ctx->pc = 0x20C32Cu;
    SET_GPR_U32(ctx, 31, 0x20C334u);
    ctx->pc = 0x20C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C32Cu;
            // 0x20c330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C334u; }
        if (ctx->pc != 0x20C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C334u; }
        if (ctx->pc != 0x20C334u) { return; }
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c338: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x20c338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20c33c: 0x8c42a498  lw          $v0, -0x5B68($v0)
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943896)));
    // 0x20c340: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20c344: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c348: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20c348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c354: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20c354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20c358: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x20c358u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c35c: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x20c360: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x20c360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c364: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20C364u;
    SET_GPR_U32(ctx, 31, 0x20C36Cu);
    ctx->pc = 0x20C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C364u;
            // 0x20c368: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C36Cu; }
        if (ctx->pc != 0x20C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C36Cu; }
        if (ctx->pc != 0x20C36Cu) { return; }
    }
    ctx->pc = 0x20C36Cu;
label_20c36c:
    // 0x20c36c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C36Cu;
    SET_GPR_U32(ctx, 31, 0x20C374u);
    ctx->pc = 0x20C370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C36Cu;
            // 0x20c370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C374u; }
        if (ctx->pc != 0x20C374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C374u; }
        if (ctx->pc != 0x20C374u) { return; }
    }
    ctx->pc = 0x20C374u;
label_20c374:
    // 0x20c374: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20c378: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20C378u;
    SET_GPR_U32(ctx, 31, 0x20C380u);
    ctx->pc = 0x20C37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C378u;
            // 0x20c37c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C380u; }
        if (ctx->pc != 0x20C380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C380u; }
        if (ctx->pc != 0x20C380u) { return; }
    }
    ctx->pc = 0x20C380u;
label_20c380:
    // 0x20c380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c388: 0xc040454  jal         func_101150
    ctx->pc = 0x20C388u;
    SET_GPR_U32(ctx, 31, 0x20C390u);
    ctx->pc = 0x20C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C388u;
            // 0x20c38c: 0x26940400  addiu       $s4, $s4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C390u; }
        if (ctx->pc != 0x20C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C390u; }
        if (ctx->pc != 0x20C390u) { return; }
    }
    ctx->pc = 0x20C390u;
label_20c390:
    // 0x20c390: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c398: 0x8c46a498  lw          $a2, -0x5B68($v0)
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943896)));
    // 0x20c39c: 0xc082f94  jal         func_20BE50
    ctx->pc = 0x20C39Cu;
    SET_GPR_U32(ctx, 31, 0x20C3A4u);
    ctx->pc = 0x20C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C39Cu;
            // 0x20c3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20BE50u;
    if (runtime->hasFunction(0x20BE50u)) {
        auto targetFn = runtime->lookupFunction(0x20BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3A4u; }
        if (ctx->pc != 0x20C3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020BE50_0x20be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3A4u; }
        if (ctx->pc != 0x20C3A4u) { return; }
    }
    ctx->pc = 0x20C3A4u;
label_20c3a4:
    // 0x20c3a4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c3a8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c3ac: 0x8c85a498  lw          $a1, -0x5B68($a0)
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943896)));
    // 0x20c3b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20c3b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x20c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20c3b8: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C3B8u;
    {
        const bool branch_taken_0x20c3b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3B8u;
            // 0x20c3bc: 0xac65a498  sw          $a1, -0x5B68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3b8) {
            ctx->pc = 0x20C3D8u;
            goto label_20c3d8;
        }
    }
    ctx->pc = 0x20C3C0u;
    // 0x20c3c0: 0xc083010  jal         func_20C040
    ctx->pc = 0x20C3C0u;
    SET_GPR_U32(ctx, 31, 0x20C3C8u);
    ctx->pc = 0x20C040u;
    if (runtime->hasFunction(0x20C040u)) {
        auto targetFn = runtime->lookupFunction(0x20C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C8u; }
        if (ctx->pc != 0x20C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C040_0x20c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C8u; }
        if (ctx->pc != 0x20C3C8u) { return; }
    }
    ctx->pc = 0x20C3C8u;
label_20c3c8:
    // 0x20c3c8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3d0: 0xac60a498  sw          $zero, -0x5B68($v1)
    ctx->pc = 0x20c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 0));
    // 0x20c3d4: 0x0  nop
    ctx->pc = 0x20c3d4u;
    // NOP
label_20c3d8:
    // 0x20c3d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20c3dc: 0x2a43000e  slti        $v1, $s2, 0xE
    ctx->pc = 0x20c3dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x20c3e0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20C3E0u;
    {
        const bool branch_taken_0x20c3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3E0u;
            // 0x20c3e4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3e0) {
            ctx->pc = 0x20C328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c328;
        }
    }
    ctx->pc = 0x20C3E8u;
    // 0x20c3e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20c3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20c3ec: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x20c3ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x20c3f0: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x20C3F0u;
    {
        const bool branch_taken_0x20c3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3F0u;
            // 0x20c3f4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3f0) {
            ctx->pc = 0x20C31Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c31c;
        }
    }
    ctx->pc = 0x20C3F8u;
    // 0x20c3f8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x20c3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20c3fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20c3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20c400: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C400u;
    {
        const bool branch_taken_0x20c400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c400) {
            ctx->pc = 0x20C404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C400u;
            // 0x20c404: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C41Cu;
            goto label_20c41c;
        }
    }
    ctx->pc = 0x20C408u;
    // 0x20c408: 0xc083010  jal         func_20C040
    ctx->pc = 0x20C408u;
    SET_GPR_U32(ctx, 31, 0x20C410u);
    ctx->pc = 0x20C040u;
    if (runtime->hasFunction(0x20C040u)) {
        auto targetFn = runtime->lookupFunction(0x20C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C410u; }
        if (ctx->pc != 0x20C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C040_0x20c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C410u; }
        if (ctx->pc != 0x20C410u) { return; }
    }
    ctx->pc = 0x20C410u;
label_20c410:
    // 0x20c410: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c414: 0xac60a498  sw          $zero, -0x5B68($v1)
    ctx->pc = 0x20c414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 0));
    // 0x20c418: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20c41c:
    // 0x20c41c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20c420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c430: 0x3e00008  jr          $ra
    ctx->pc = 0x20C430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C430u;
            // 0x20c434: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C438u;
    // 0x20c438: 0x0  nop
    ctx->pc = 0x20c438u;
    // NOP
    // 0x20c43c: 0x0  nop
    ctx->pc = 0x20c43cu;
    // NOP
    ctx->pc = 0x20c440u;
}
