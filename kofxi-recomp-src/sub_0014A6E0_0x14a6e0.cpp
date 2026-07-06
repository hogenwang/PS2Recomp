#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A6E0
// Address: 0x14a6e0 - 0x14a8f0
void sub_0014A6E0_0x14a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A6E0_0x14a6e0");
#endif

    switch (ctx->pc) {
        case 0x14a708u: goto label_14a708;
        case 0x14a724u: goto label_14a724;
        case 0x14a740u: goto label_14a740;
        case 0x14a75cu: goto label_14a75c;
        case 0x14a778u: goto label_14a778;
        case 0x14a794u: goto label_14a794;
        case 0x14a7b0u: goto label_14a7b0;
        case 0x14a7ccu: goto label_14a7cc;
        case 0x14a7e8u: goto label_14a7e8;
        case 0x14a800u: goto label_14a800;
        case 0x14a818u: goto label_14a818;
        case 0x14a830u: goto label_14a830;
        case 0x14a848u: goto label_14a848;
        case 0x14a860u: goto label_14a860;
        case 0x14a878u: goto label_14a878;
        case 0x14a890u: goto label_14a890;
        case 0x14a8a8u: goto label_14a8a8;
        case 0x14a8c0u: goto label_14a8c0;
        case 0x14a8d8u: goto label_14a8d8;
        default: break;
    }

    ctx->pc = 0x14a6e0u;

    // 0x14a6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a6e4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x14a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x14a6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a6f0: 0x8c850410  lw          $a1, 0x410($a0)
    ctx->pc = 0x14a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
    // 0x14a6f4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14a6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14a6f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A6F8u;
    {
        const bool branch_taken_0x14a6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6F8u;
            // 0x14a6fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6f8) {
            ctx->pc = 0x14A708u;
            goto label_14a708;
        }
    }
    ctx->pc = 0x14A700u;
    // 0x14a700: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A700u;
    SET_GPR_U32(ctx, 31, 0x14A708u);
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A708u; }
        if (ctx->pc != 0x14A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A708u; }
        if (ctx->pc != 0x14A708u) { return; }
    }
    ctx->pc = 0x14A708u;
label_14a708:
    // 0x14a708: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14a70c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14a710: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a714: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A714u;
    {
        const bool branch_taken_0x14a714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a714) {
            ctx->pc = 0x14A718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A714u;
            // 0x14a718: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A71Cu;
    // 0x14a71c: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A71Cu;
    SET_GPR_U32(ctx, 31, 0x14A724u);
    ctx->pc = 0x14A720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A71Cu;
            // 0x14a720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A724u; }
        if (ctx->pc != 0x14A724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A724u; }
        if (ctx->pc != 0x14A724u) { return; }
    }
    ctx->pc = 0x14A724u;
label_14a724:
    // 0x14a724: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a728:
    // 0x14a728: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14a72c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a730: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A730u;
    {
        const bool branch_taken_0x14a730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a730) {
            ctx->pc = 0x14A734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A730u;
            // 0x14a734: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A744u;
            goto label_14a744;
        }
    }
    ctx->pc = 0x14A738u;
    // 0x14a738: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A738u;
    SET_GPR_U32(ctx, 31, 0x14A740u);
    ctx->pc = 0x14A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A738u;
            // 0x14a73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    }
    ctx->pc = 0x14A740u;
label_14a740:
    // 0x14a740: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a744:
    // 0x14a744: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14a748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a74c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A74Cu;
    {
        const bool branch_taken_0x14a74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a74c) {
            ctx->pc = 0x14A750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A74Cu;
            // 0x14a750: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A760u;
            goto label_14a760;
        }
    }
    ctx->pc = 0x14A754u;
    // 0x14a754: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A754u;
    SET_GPR_U32(ctx, 31, 0x14A75Cu);
    ctx->pc = 0x14A758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A754u;
            // 0x14a758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A75Cu; }
        if (ctx->pc != 0x14A75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A75Cu; }
        if (ctx->pc != 0x14A75Cu) { return; }
    }
    ctx->pc = 0x14A75Cu;
label_14a75c:
    // 0x14a75c: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a760:
    // 0x14a760: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x14a764: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a768: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A768u;
    {
        const bool branch_taken_0x14a768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a768) {
            ctx->pc = 0x14A76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A768u;
            // 0x14a76c: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A77Cu;
            goto label_14a77c;
        }
    }
    ctx->pc = 0x14A770u;
    // 0x14a770: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A770u;
    SET_GPR_U32(ctx, 31, 0x14A778u);
    ctx->pc = 0x14A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A770u;
            // 0x14a774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A778u; }
        if (ctx->pc != 0x14A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A778u; }
        if (ctx->pc != 0x14A778u) { return; }
    }
    ctx->pc = 0x14A778u;
label_14a778:
    // 0x14a778: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a77c:
    // 0x14a77c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14a780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a784: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A784u;
    {
        const bool branch_taken_0x14a784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a784) {
            ctx->pc = 0x14A788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A784u;
            // 0x14a788: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A798u;
            goto label_14a798;
        }
    }
    ctx->pc = 0x14A78Cu;
    // 0x14a78c: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A78Cu;
    SET_GPR_U32(ctx, 31, 0x14A794u);
    ctx->pc = 0x14A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A78Cu;
            // 0x14a790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A794u; }
        if (ctx->pc != 0x14A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A794u; }
        if (ctx->pc != 0x14A794u) { return; }
    }
    ctx->pc = 0x14A794u;
label_14a794:
    // 0x14a794: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a798:
    // 0x14a798: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14a79c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a7a0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7A0u;
    {
        const bool branch_taken_0x14a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7a0) {
            ctx->pc = 0x14A7A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7A0u;
            // 0x14a7a4: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A7B4u;
            goto label_14a7b4;
        }
    }
    ctx->pc = 0x14A7A8u;
    // 0x14a7a8: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A7A8u;
    SET_GPR_U32(ctx, 31, 0x14A7B0u);
    ctx->pc = 0x14A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7A8u;
            // 0x14a7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    }
    ctx->pc = 0x14A7B0u;
label_14a7b0:
    // 0x14a7b0: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a7b4:
    // 0x14a7b4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14a7b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a7bc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7BCu;
    {
        const bool branch_taken_0x14a7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7bc) {
            ctx->pc = 0x14A7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7BCu;
            // 0x14a7c0: 0x8e040410  lw          $a0, 0x410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A7D0u;
            goto label_14a7d0;
        }
    }
    ctx->pc = 0x14A7C4u;
    // 0x14a7c4: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A7C4u;
    SET_GPR_U32(ctx, 31, 0x14A7CCu);
    ctx->pc = 0x14A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7C4u;
            // 0x14a7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7CCu; }
        if (ctx->pc != 0x14A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7CCu; }
        if (ctx->pc != 0x14A7CCu) { return; }
    }
    ctx->pc = 0x14A7CCu;
label_14a7cc:
    // 0x14a7cc: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x14a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_14a7d0:
    // 0x14a7d0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x14a7d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a7d8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7D8u;
    {
        const bool branch_taken_0x14a7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7d8) {
            ctx->pc = 0x14A7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7D8u;
            // 0x14a7dc: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A7ECu;
            goto label_14a7ec;
        }
    }
    ctx->pc = 0x14A7E0u;
    // 0x14a7e0: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A7E0u;
    SET_GPR_U32(ctx, 31, 0x14A7E8u);
    ctx->pc = 0x14A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7E0u;
            // 0x14a7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    }
    ctx->pc = 0x14A7E8u;
label_14a7e8:
    // 0x14a7e8: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a7e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a7ec:
    // 0x14a7ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x14a7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x14a7f0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7F0u;
    {
        const bool branch_taken_0x14a7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7f0) {
            ctx->pc = 0x14A7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7F0u;
            // 0x14a7f4: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A804u;
            goto label_14a804;
        }
    }
    ctx->pc = 0x14A7F8u;
    // 0x14a7f8: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A7F8u;
    SET_GPR_U32(ctx, 31, 0x14A800u);
    ctx->pc = 0x14A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7F8u;
            // 0x14a7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A800u; }
        if (ctx->pc != 0x14A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A800u; }
        if (ctx->pc != 0x14A800u) { return; }
    }
    ctx->pc = 0x14A800u;
label_14a800:
    // 0x14a800: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a804:
    // 0x14a804: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x14a804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x14a808: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A808u;
    {
        const bool branch_taken_0x14a808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a808) {
            ctx->pc = 0x14A80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A808u;
            // 0x14a80c: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A81Cu;
            goto label_14a81c;
        }
    }
    ctx->pc = 0x14A810u;
    // 0x14a810: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A810u;
    SET_GPR_U32(ctx, 31, 0x14A818u);
    ctx->pc = 0x14A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A810u;
            // 0x14a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A818u; }
        if (ctx->pc != 0x14A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A818u; }
        if (ctx->pc != 0x14A818u) { return; }
    }
    ctx->pc = 0x14A818u;
label_14a818:
    // 0x14a818: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a81c:
    // 0x14a81c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x14a81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x14a820: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A820u;
    {
        const bool branch_taken_0x14a820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a820) {
            ctx->pc = 0x14A824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A820u;
            // 0x14a824: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A834u;
            goto label_14a834;
        }
    }
    ctx->pc = 0x14A828u;
    // 0x14a828: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A828u;
    SET_GPR_U32(ctx, 31, 0x14A830u);
    ctx->pc = 0x14A82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A828u;
            // 0x14a82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A830u; }
        if (ctx->pc != 0x14A830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A830u; }
        if (ctx->pc != 0x14A830u) { return; }
    }
    ctx->pc = 0x14A830u;
label_14a830:
    // 0x14a830: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a830u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a834:
    // 0x14a834: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x14a834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x14a838: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A838u;
    {
        const bool branch_taken_0x14a838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a838) {
            ctx->pc = 0x14A83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A838u;
            // 0x14a83c: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A84Cu;
            goto label_14a84c;
        }
    }
    ctx->pc = 0x14A840u;
    // 0x14a840: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A840u;
    SET_GPR_U32(ctx, 31, 0x14A848u);
    ctx->pc = 0x14A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A840u;
            // 0x14a844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A848u; }
        if (ctx->pc != 0x14A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A848u; }
        if (ctx->pc != 0x14A848u) { return; }
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a848u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a84c:
    // 0x14a84c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x14a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x14a850: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A850u;
    {
        const bool branch_taken_0x14a850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a850) {
            ctx->pc = 0x14A854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A850u;
            // 0x14a854: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A864u;
            goto label_14a864;
        }
    }
    ctx->pc = 0x14A858u;
    // 0x14a858: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A858u;
    SET_GPR_U32(ctx, 31, 0x14A860u);
    ctx->pc = 0x14A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A858u;
            // 0x14a85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A860u; }
        if (ctx->pc != 0x14A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A860u; }
        if (ctx->pc != 0x14A860u) { return; }
    }
    ctx->pc = 0x14A860u;
label_14a860:
    // 0x14a860: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a860u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a864:
    // 0x14a864: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x14a864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14a868: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A868u;
    {
        const bool branch_taken_0x14a868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a868) {
            ctx->pc = 0x14A86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A868u;
            // 0x14a86c: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A87Cu;
            goto label_14a87c;
        }
    }
    ctx->pc = 0x14A870u;
    // 0x14a870: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A870u;
    SET_GPR_U32(ctx, 31, 0x14A878u);
    ctx->pc = 0x14A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A870u;
            // 0x14a874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A878u; }
        if (ctx->pc != 0x14A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A878u; }
        if (ctx->pc != 0x14A878u) { return; }
    }
    ctx->pc = 0x14A878u;
label_14a878:
    // 0x14a878: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a878u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a87c:
    // 0x14a87c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x14a87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x14a880: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A880u;
    {
        const bool branch_taken_0x14a880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a880) {
            ctx->pc = 0x14A884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A880u;
            // 0x14a884: 0x9603046c  lhu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A894u;
            goto label_14a894;
        }
    }
    ctx->pc = 0x14A888u;
    // 0x14a888: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A888u;
    SET_GPR_U32(ctx, 31, 0x14A890u);
    ctx->pc = 0x14A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A888u;
            // 0x14a88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A890u; }
        if (ctx->pc != 0x14A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A890u; }
        if (ctx->pc != 0x14A890u) { return; }
    }
    ctx->pc = 0x14A890u;
label_14a890:
    // 0x14a890: 0x9603046c  lhu         $v1, 0x46C($s0)
    ctx->pc = 0x14a890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a894:
    // 0x14a894: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x14a898: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A898u;
    {
        const bool branch_taken_0x14a898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a898) {
            ctx->pc = 0x14A89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A898u;
            // 0x14a89c: 0x8e030474  lw          $v1, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A8ACu;
            goto label_14a8ac;
        }
    }
    ctx->pc = 0x14A8A0u;
    // 0x14a8a0: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A8A0u;
    SET_GPR_U32(ctx, 31, 0x14A8A8u);
    ctx->pc = 0x14A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8A0u;
            // 0x14a8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A8u; }
        if (ctx->pc != 0x14A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A8u; }
        if (ctx->pc != 0x14A8A8u) { return; }
    }
    ctx->pc = 0x14A8A8u;
label_14a8a8:
    // 0x14a8a8: 0x8e030474  lw          $v1, 0x474($s0)
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
label_14a8ac:
    // 0x14a8ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14a8b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A8B0u;
    {
        const bool branch_taken_0x14a8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a8b0) {
            ctx->pc = 0x14A8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8B0u;
            // 0x14a8b4: 0x8e030474  lw          $v1, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A8C4u;
            goto label_14a8c4;
        }
    }
    ctx->pc = 0x14A8B8u;
    // 0x14a8b8: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A8B8u;
    SET_GPR_U32(ctx, 31, 0x14A8C0u);
    ctx->pc = 0x14A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8B8u;
            // 0x14a8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8C0u; }
        if (ctx->pc != 0x14A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8C0u; }
        if (ctx->pc != 0x14A8C0u) { return; }
    }
    ctx->pc = 0x14A8C0u;
label_14a8c0:
    // 0x14a8c0: 0x8e030474  lw          $v1, 0x474($s0)
    ctx->pc = 0x14a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
label_14a8c4:
    // 0x14a8c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14a8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14a8c8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A8C8u;
    {
        const bool branch_taken_0x14a8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a8c8) {
            ctx->pc = 0x14A8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8C8u;
            // 0x14a8cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A8DCu;
            goto label_14a8dc;
        }
    }
    ctx->pc = 0x14A8D0u;
    // 0x14a8d0: 0xc05071c  jal         func_141C70
    ctx->pc = 0x14A8D0u;
    SET_GPR_U32(ctx, 31, 0x14A8D8u);
    ctx->pc = 0x14A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8D0u;
            // 0x14a8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C70u;
    if (runtime->hasFunction(0x141C70u)) {
        auto targetFn = runtime->lookupFunction(0x141C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C70_0x141c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    }
    ctx->pc = 0x14A8D8u;
label_14a8d8:
    // 0x14a8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14a8dc:
    // 0x14a8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8E0u;
            // 0x14a8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A8E8u;
    // 0x14a8e8: 0x0  nop
    ctx->pc = 0x14a8e8u;
    // NOP
    // 0x14a8ec: 0x0  nop
    ctx->pc = 0x14a8ecu;
    // NOP
    ctx->pc = 0x14a8f0u;
}
