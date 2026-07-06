#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8388
// Address: 0x2e8388 - 0x2e8470
void sub_002E8388_0x2e8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8388_0x2e8388");
#endif

    switch (ctx->pc) {
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e83ecu: goto label_2e83ec;
        case 0x2e83f4u: goto label_2e83f4;
        case 0x2e83fcu: goto label_2e83fc;
        case 0x2e8404u: goto label_2e8404;
        case 0x2e8410u: goto label_2e8410;
        case 0x2e8428u: goto label_2e8428;
        case 0x2e8440u: goto label_2e8440;
        case 0x2e8458u: goto label_2e8458;
        default: break;
    }

    ctx->pc = 0x2e8388u;

    // 0x2e8388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e838c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8390: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8394: 0xc0ba0ce  jal         func_2E8338
    ctx->pc = 0x2E8394u;
    SET_GPR_U32(ctx, 31, 0x2E839Cu);
    ctx->pc = 0x2E8398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8394u;
            // 0x2e8398: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8338u;
    if (runtime->hasFunction(0x2E8338u)) {
        auto targetFn = runtime->lookupFunction(0x2E8338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E839Cu; }
        if (ctx->pc != 0x2E839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8338_0x2e8338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E839Cu; }
        if (ctx->pc != 0x2E839Cu) { return; }
    }
    ctx->pc = 0x2E839Cu;
label_2e839c:
    // 0x2e839c: 0x440002f  bltz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E839Cu;
    {
        const bool branch_taken_0x2e839c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E83A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E839Cu;
            // 0x2e83a0: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e839c) {
            ctx->pc = 0x2E845Cu;
            goto label_2e845c;
        }
    }
    ctx->pc = 0x2E83A4u;
    // 0x2e83a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e83a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e83a8:
    // 0x2e83a8: 0x24c6fb20  addiu       $a2, $a2, -0x4E0
    ctx->pc = 0x2e83a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966048));
    // 0x2e83ac: 0xc0b9422  jal         func_2E5088
    ctx->pc = 0x2E83ACu;
    SET_GPR_U32(ctx, 31, 0x2E83B4u);
    ctx->pc = 0x2E83B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83ACu;
            // 0x2e83b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5088u;
    if (runtime->hasFunction(0x2E5088u)) {
        auto targetFn = runtime->lookupFunction(0x2E5088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83B4u; }
        if (ctx->pc != 0x2E83B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5088_0x2e5088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83B4u; }
        if (ctx->pc != 0x2E83B4u) { return; }
    }
    ctx->pc = 0x2E83B4u;
label_2e83b4:
    // 0x2e83b4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e83b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E83B8u;
    {
        const bool branch_taken_0x2e83b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E83BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83B8u;
            // 0x2e83bc: 0xae22ea1c  sw          $v0, -0x15E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294961692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83b8) {
            ctx->pc = 0x2E83C8u;
            goto label_2e83c8;
        }
    }
    ctx->pc = 0x2E83C0u;
    // 0x2e83c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E83C0u;
    {
        const bool branch_taken_0x2e83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83C0u;
            // 0x2e83c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83c0) {
            ctx->pc = 0x2E845Cu;
            goto label_2e845c;
        }
    }
    ctx->pc = 0x2E83C8u;
label_2e83c8:
    // 0x2e83c8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e83cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e83d0: 0x0  nop
    ctx->pc = 0x2e83d0u;
    // NOP
    // 0x2e83d4: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E83D4u;
    SET_GPR_U32(ctx, 31, 0x2E83DCu);
    ctx->pc = 0x2E83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83D4u;
            // 0x2e83d8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (runtime->hasFunction(0x2E8568u)) {
        auto targetFn = runtime->lookupFunction(0x2E8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83DCu; }
        if (ctx->pc != 0x2E83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8568_0x2e8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83DCu; }
        if (ctx->pc != 0x2E83DCu) { return; }
    }
    ctx->pc = 0x2E83DCu;
label_2e83dc:
    // 0x2e83dc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2E83DCu;
    SET_GPR_U32(ctx, 31, 0x2E83E4u);
    ctx->pc = 0x2E83E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83DCu;
            // 0x2e83e0: 0x8e24ea1c  lw          $a0, -0x15E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83E4u; }
        if (ctx->pc != 0x2E83E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83E4u; }
        if (ctx->pc != 0x2E83E4u) { return; }
    }
    ctx->pc = 0x2E83E4u;
label_2e83e4:
    // 0x2e83e4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E83E4u;
    SET_GPR_U32(ctx, 31, 0x2E83ECu);
    ctx->pc = 0x2E83E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83E4u;
            // 0x2e83e8: 0x8e24ea1c  lw          $a0, -0x15E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83ECu; }
        if (ctx->pc != 0x2E83ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83ECu; }
        if (ctx->pc != 0x2E83ECu) { return; }
    }
    ctx->pc = 0x2E83ECu;
label_2e83ec:
    // 0x2e83ec: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2E83ECu;
    SET_GPR_U32(ctx, 31, 0x2E83F4u);
    ctx->pc = 0x2E83F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83ECu;
            // 0x2e83f0: 0x8e04ea20  lw          $a0, -0x15E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961696)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83F4u; }
        if (ctx->pc != 0x2E83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83F4u; }
        if (ctx->pc != 0x2E83F4u) { return; }
    }
    ctx->pc = 0x2E83F4u;
label_2e83f4:
    // 0x2e83f4: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2E83F4u;
    SET_GPR_U32(ctx, 31, 0x2E83FCu);
    ctx->pc = 0x2E83F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83F4u;
            // 0x2e83f8: 0x8e04ea20  lw          $a0, -0x15E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961696)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83FCu; }
        if (ctx->pc != 0x2E83FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83FCu; }
        if (ctx->pc != 0x2E83FCu) { return; }
    }
    ctx->pc = 0x2E83FCu;
label_2e83fc:
    // 0x2e83fc: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2E83FCu;
    SET_GPR_U32(ctx, 31, 0x2E8404u);
    ctx->pc = 0x2E8400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83FCu;
            // 0x2e8400: 0x8e04ea20  lw          $a0, -0x15E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961696)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8404u; }
        if (ctx->pc != 0x2E8404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8404u; }
        if (ctx->pc != 0x2E8404u) { return; }
    }
    ctx->pc = 0x2E8404u;
label_2e8404:
    // 0x2e8404: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e8404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2e8408: 0xc098560  jal         func_261580
    ctx->pc = 0x2E8408u;
    SET_GPR_U32(ctx, 31, 0x2E8410u);
    ctx->pc = 0x2E840Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8408u;
            // 0x2e840c: 0x8c64fd90  lw          $a0, -0x270($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8410u; }
        if (ctx->pc != 0x2E8410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8410u; }
        if (ctx->pc != 0x2E8410u) { return; }
    }
    ctx->pc = 0x2E8410u;
label_2e8410:
    // 0x2e8410: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8414: 0x8c44ea10  lw          $a0, -0x15F0($v0)
    ctx->pc = 0x2e8414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961680)));
    // 0x2e8418: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8418u;
    {
        const bool branch_taken_0x2e8418 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2E841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8418u;
            // 0x2e841c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8418) {
            ctx->pc = 0x2E842Cu;
            goto label_2e842c;
        }
    }
    ctx->pc = 0x2E8420u;
    // 0x2e8420: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8420u;
    SET_GPR_U32(ctx, 31, 0x2E8428u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8428u; }
        if (ctx->pc != 0x2E8428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8428u; }
        if (ctx->pc != 0x2E8428u) { return; }
    }
    ctx->pc = 0x2E8428u;
label_2e8428:
    // 0x2e8428: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2e842c:
    // 0x2e842c: 0x8c44ea14  lw          $a0, -0x15EC($v0)
    ctx->pc = 0x2e842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961684)));
    // 0x2e8430: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2E8434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8430u;
            // 0x2e8434: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E8444u;
            goto label_2e8444;
        }
    }
    ctx->pc = 0x2E8438u;
    // 0x2e8438: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8438u;
    SET_GPR_U32(ctx, 31, 0x2E8440u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8440u; }
        if (ctx->pc != 0x2E8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8440u; }
        if (ctx->pc != 0x2E8440u) { return; }
    }
    ctx->pc = 0x2E8440u;
label_2e8440:
    // 0x2e8440: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2e8444:
    // 0x2e8444: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2e8444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
    // 0x2e8448: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8448u;
    {
        const bool branch_taken_0x2e8448 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2E844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8448u;
            // 0x2e844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8448) {
            ctx->pc = 0x2E845Cu;
            goto label_2e845c;
        }
    }
    ctx->pc = 0x2E8450u;
    // 0x2e8450: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2E8450u;
    SET_GPR_U32(ctx, 31, 0x2E8458u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8458u; }
        if (ctx->pc != 0x2E8458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8458u; }
        if (ctx->pc != 0x2E8458u) { return; }
    }
    ctx->pc = 0x2E8458u;
label_2e8458:
    // 0x2e8458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e845c:
    // 0x2e845c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8460: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8468: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8468u;
            // 0x2e846c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8470u;
    ctx->pc = 0x2e8470u;
}
