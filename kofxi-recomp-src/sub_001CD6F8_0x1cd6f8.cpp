#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD6F8
// Address: 0x1cd6f8 - 0x1cd890
void sub_001CD6F8_0x1cd6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD6F8_0x1cd6f8");
#endif

    switch (ctx->pc) {
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd750u: goto label_1cd750;
        case 0x1cd778u: goto label_1cd778;
        case 0x1cd78cu: goto label_1cd78c;
        case 0x1cd790u: goto label_1cd790;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd85cu: goto label_1cd85c;
        default: break;
    }

    ctx->pc = 0x1cd6f8u;

    // 0x1cd6f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd6fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cd6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cd700: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1cd704: 0x8ea2d9ec  lw          $v0, -0x2614($s5)
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294957548)));
    // 0x1cd708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd70c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd710: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd714: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cd714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cd718: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cd718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cd71c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1CD71Cu;
    {
        const bool branch_taken_0x1cd71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD71Cu;
            // 0x1cd720: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd71c) {
            ctx->pc = 0x1CD85Cu;
            goto label_1cd85c;
        }
    }
    ctx->pc = 0x1CD724u;
    // 0x1cd724: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1cd724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1cd728: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1cd728u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1cd72c: 0x2610dc88  addiu       $s0, $s0, -0x2378
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958216));
    // 0x1cd730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd738: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1cd738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cd73c: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x1cd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1cd740: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CD740u;
    SET_GPR_U32(ctx, 31, 0x1CD748u);
    ctx->pc = 0x1CD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD740u;
            // 0x1cd744: 0x2693d9f4  addiu       $s3, $s4, -0x260C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957556));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD748u; }
        if (ctx->pc != 0x1CD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD748u; }
        if (ctx->pc != 0x1CD748u) { return; }
    }
    ctx->pc = 0x1CD748u;
label_1cd748:
    // 0x1cd748: 0xc070914  jal         func_1C2450
    ctx->pc = 0x1CD748u;
    SET_GPR_U32(ctx, 31, 0x1CD750u);
    ctx->pc = 0x1CD74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD748u;
            // 0x1cd74c: 0x3c120039  lui         $s2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2450u;
    if (runtime->hasFunction(0x1C2450u)) {
        auto targetFn = runtime->lookupFunction(0x1C2450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD750u; }
        if (ctx->pc != 0x1CD750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2450_0x1c2450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD750u; }
        if (ctx->pc != 0x1CD750u) { return; }
    }
    ctx->pc = 0x1CD750u;
label_1cd750:
    // 0x1cd750: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1cd754: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cd758: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x1cd75c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1cd75cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1cd760: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1cd760u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1cd764: 0xae44dc84  sw          $a0, -0x237C($s2)
    ctx->pc = 0x1cd764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294958212), GPR_U32(ctx, 4));
    // 0x1cd768: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CD768u;
    {
        const bool branch_taken_0x1cd768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd768) {
            ctx->pc = 0x1CD7B0u;
            goto label_1cd7b0;
        }
    }
    ctx->pc = 0x1CD770u;
    // 0x1cd770: 0xc045448  jal         func_115120
    ctx->pc = 0x1CD770u;
    SET_GPR_U32(ctx, 31, 0x1CD778u);
    ctx->pc = 0x1CD774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD770u;
            // 0x1cd774: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115120u;
    if (runtime->hasFunction(0x115120u)) {
        auto targetFn = runtime->lookupFunction(0x115120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD778u; }
        if (ctx->pc != 0x1CD778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiIopHeapAlloc_0x115120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD778u; }
        if (ctx->pc != 0x1CD778u) { return; }
    }
    ctx->pc = 0x1CD778u;
label_1cd778:
    // 0x1cd778: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD778u;
    {
        const bool branch_taken_0x1cd778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD778u;
            // 0x1cd77c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd778) {
            ctx->pc = 0x1CD7B0u;
            goto label_1cd7b0;
        }
    }
    ctx->pc = 0x1CD780u;
    // 0x1cd780: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cd780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cd784: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1CD784u;
    SET_GPR_U32(ctx, 31, 0x1CD78Cu);
    ctx->pc = 0x1CD788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD784u;
            // 0x1cd788: 0x2484bd60  addiu       $a0, $a0, -0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    }
    ctx->pc = 0x1CD78Cu;
label_1cd78c:
    // 0x1cd78c: 0x0  nop
    ctx->pc = 0x1cd78cu;
    // NOP
label_1cd790:
    // 0x1cd790: 0x0  nop
    ctx->pc = 0x1cd790u;
    // NOP
    // 0x1cd794: 0x0  nop
    ctx->pc = 0x1cd794u;
    // NOP
    // 0x1cd798: 0x0  nop
    ctx->pc = 0x1cd798u;
    // NOP
    // 0x1cd79c: 0x0  nop
    ctx->pc = 0x1cd79cu;
    // NOP
    // 0x1cd7a0: 0x0  nop
    ctx->pc = 0x1cd7a0u;
    // NOP
    // 0x1cd7a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD7A4u;
    {
        const bool branch_taken_0x1cd7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7a4) {
            ctx->pc = 0x1CD790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd790;
        }
    }
    ctx->pc = 0x1CD7ACu;
    // 0x1cd7ac: 0x0  nop
    ctx->pc = 0x1cd7acu;
    // NOP
label_1cd7b0:
    // 0x1cd7b0: 0x8e82d9f4  lw          $v0, -0x260C($s4)
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294957556)));
    // 0x1cd7b4: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1cd7b8: 0x8e25d9f0  lw          $a1, -0x2610($s1)
    ctx->pc = 0x1cd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957552)));
    // 0x1cd7bc: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1cd7c0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1cd7c4: 0x8e47dc84  lw          $a3, -0x237C($s2)
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958212)));
    // 0x1cd7c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cd7cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cd7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cd7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7d4: 0x0  nop
    ctx->pc = 0x1cd7d4u;
    // NOP
    // 0x1cd7d8: 0xc070830  jal         func_1C20C0
    ctx->pc = 0x1CD7D8u;
    SET_GPR_U32(ctx, 31, 0x1CD7E0u);
    ctx->pc = 0x1CD7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7D8u;
            // 0x1cd7dc: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C20C0u;
    if (runtime->hasFunction(0x1C20C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C20C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C20C0_0x1c20c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    }
    ctx->pc = 0x1CD7E0u;
label_1cd7e0:
    // 0x1cd7e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD7E0u;
    {
        const bool branch_taken_0x1cd7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7E0u;
            // 0x1cd7e4: 0xae02dc80  sw          $v0, -0x2380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294958208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7e0) {
            ctx->pc = 0x1CD818u;
            goto label_1cd818;
        }
    }
    ctx->pc = 0x1CD7E8u;
    // 0x1cd7e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cd7ec: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1CD7ECu;
    SET_GPR_U32(ctx, 31, 0x1CD7F4u);
    ctx->pc = 0x1CD7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7ECu;
            // 0x1cd7f0: 0x2484bd90  addiu       $a0, $a0, -0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7F4u; }
        if (ctx->pc != 0x1CD7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7F4u; }
        if (ctx->pc != 0x1CD7F4u) { return; }
    }
    ctx->pc = 0x1CD7F4u;
label_1cd7f4:
    // 0x1cd7f4: 0x0  nop
    ctx->pc = 0x1cd7f4u;
    // NOP
label_1cd7f8:
    // 0x1cd7f8: 0x0  nop
    ctx->pc = 0x1cd7f8u;
    // NOP
    // 0x1cd7fc: 0x0  nop
    ctx->pc = 0x1cd7fcu;
    // NOP
    // 0x1cd800: 0x0  nop
    ctx->pc = 0x1cd800u;
    // NOP
    // 0x1cd804: 0x0  nop
    ctx->pc = 0x1cd804u;
    // NOP
    // 0x1cd808: 0x0  nop
    ctx->pc = 0x1cd808u;
    // NOP
    // 0x1cd80c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD80Cu;
    {
        const bool branch_taken_0x1cd80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd80c) {
            ctx->pc = 0x1CD7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd7f8;
        }
    }
    ctx->pc = 0x1CD814u;
    // 0x1cd814: 0x0  nop
    ctx->pc = 0x1cd814u;
    // NOP
label_1cd818:
    // 0x1cd818: 0x2610dc80  addiu       $s0, $s0, -0x2380
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1cd81c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1cd820: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cd820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd824: 0x24a5d530  addiu       $a1, $a1, -0x2AD0
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956336));
    // 0x1cd828: 0xc0708b0  jal         func_1C22C0
    ctx->pc = 0x1CD828u;
    SET_GPR_U32(ctx, 31, 0x1CD830u);
    ctx->pc = 0x1CD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD828u;
            // 0x1cd82c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22C0u;
    if (runtime->hasFunction(0x1C22C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C22C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD830u; }
        if (ctx->pc != 0x1CD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22C0_0x1c22c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD830u; }
        if (ctx->pc != 0x1CD830u) { return; }
    }
    ctx->pc = 0x1CD830u;
label_1cd830:
    // 0x1cd830: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1cd830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1cd834: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd838: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
    // 0x1cd83c: 0xc0708b4  jal         func_1C22D0
    ctx->pc = 0x1CD83Cu;
    SET_GPR_U32(ctx, 31, 0x1CD844u);
    ctx->pc = 0x1CD840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD83Cu;
            // 0x1cd840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22D0u;
    if (runtime->hasFunction(0x1C22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD844u; }
        if (ctx->pc != 0x1CD844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22D0_0x1c22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD844u; }
        if (ctx->pc != 0x1CD844u) { return; }
    }
    ctx->pc = 0x1CD844u;
label_1cd844:
    // 0x1cd844: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd854: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD854u;
    SET_GPR_U32(ctx, 31, 0x1CD85Cu);
    ctx->pc = 0x1CD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD854u;
            // 0x1cd858: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD85Cu; }
        if (ctx->pc != 0x1CD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD85Cu; }
        if (ctx->pc != 0x1CD85Cu) { return; }
    }
    ctx->pc = 0x1CD85Cu;
label_1cd85c:
    // 0x1cd85c: 0x26a3d9ec  addiu       $v1, $s5, -0x2614
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957548));
    // 0x1cd860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cd860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cd864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cd874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cd878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd87c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cd87cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd884: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cd884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cd888: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD888u;
            // 0x1cd88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD890u;
    ctx->pc = 0x1cd890u;
}
