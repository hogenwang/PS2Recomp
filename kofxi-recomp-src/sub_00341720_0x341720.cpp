#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341720
// Address: 0x341720 - 0x3417f0
void sub_00341720_0x341720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341720_0x341720");
#endif

    switch (ctx->pc) {
        case 0x341758u: goto label_341758;
        case 0x341770u: goto label_341770;
        case 0x3417a0u: goto label_3417a0;
        case 0x3417b8u: goto label_3417b8;
        case 0x3417d0u: goto label_3417d0;
        case 0x3417e4u: goto label_3417e4;
        default: break;
    }

    ctx->pc = 0x341720u;

    // 0x341720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341724: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34172c: 0x8c43ea78  lw          $v1, -0x1588($v0)
    ctx->pc = 0x34172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x341730: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x341730u;
    {
        const bool branch_taken_0x341730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341730) {
            ctx->pc = 0x341734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341730u;
            // 0x341734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341778u;
            goto label_341778;
        }
    }
    ctx->pc = 0x341738u;
    // 0x341738: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x341738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34173c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34173Cu;
    {
        const bool branch_taken_0x34173c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34173c) {
            ctx->pc = 0x341740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34173Cu;
            // 0x341740: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341760u;
            goto label_341760;
        }
    }
    ctx->pc = 0x341744u;
    // 0x341744: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x341744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x341748: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x341748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34174c: 0x24a55000  addiu       $a1, $a1, 0x5000
    ctx->pc = 0x34174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
    // 0x341750: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x341750u;
    SET_GPR_U32(ctx, 31, 0x341758u);
    ctx->pc = 0x341754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341750u;
            // 0x341754: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341758u; }
        if (ctx->pc != 0x341758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341758u; }
        if (ctx->pc != 0x341758u) { return; }
    }
    ctx->pc = 0x341758u;
label_341758:
    // 0x341758: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x341758u;
    {
        const bool branch_taken_0x341758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341758) {
            ctx->pc = 0x3417D0u;
            goto label_3417d0;
        }
    }
    ctx->pc = 0x341760u;
label_341760:
    // 0x341760: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x341760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x341764: 0x24a55020  addiu       $a1, $a1, 0x5020
    ctx->pc = 0x341764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20512));
    // 0x341768: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x341768u;
    SET_GPR_U32(ctx, 31, 0x341770u);
    ctx->pc = 0x34176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341768u;
            // 0x34176c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341770u; }
        if (ctx->pc != 0x341770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341770u; }
        if (ctx->pc != 0x341770u) { return; }
    }
    ctx->pc = 0x341770u;
label_341770:
    // 0x341770: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x341770u;
    {
        const bool branch_taken_0x341770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341770) {
            ctx->pc = 0x3417D0u;
            goto label_3417d0;
        }
    }
    ctx->pc = 0x341778u;
label_341778:
    // 0x341778: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x341778u;
    {
        const bool branch_taken_0x341778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341778) {
            ctx->pc = 0x34177Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341778u;
            // 0x34177c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3417C0u;
            goto label_3417c0;
        }
    }
    ctx->pc = 0x341780u;
    // 0x341780: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x341780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x341784: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x341784u;
    {
        const bool branch_taken_0x341784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341784) {
            ctx->pc = 0x341788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341784u;
            // 0x341788: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3417A8u;
            goto label_3417a8;
        }
    }
    ctx->pc = 0x34178Cu;
    // 0x34178c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x34178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x341790: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x341790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x341794: 0x24a55040  addiu       $a1, $a1, 0x5040
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    // 0x341798: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x341798u;
    SET_GPR_U32(ctx, 31, 0x3417A0u);
    ctx->pc = 0x34179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341798u;
            // 0x34179c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417A0u; }
        if (ctx->pc != 0x3417A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417A0u; }
        if (ctx->pc != 0x3417A0u) { return; }
    }
    ctx->pc = 0x3417A0u;
label_3417a0:
    // 0x3417a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3417A0u;
    {
        const bool branch_taken_0x3417a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3417a0) {
            ctx->pc = 0x3417D0u;
            goto label_3417d0;
        }
    }
    ctx->pc = 0x3417A8u;
label_3417a8:
    // 0x3417a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3417a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3417ac: 0x24a55060  addiu       $a1, $a1, 0x5060
    ctx->pc = 0x3417acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20576));
    // 0x3417b0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x3417B0u;
    SET_GPR_U32(ctx, 31, 0x3417B8u);
    ctx->pc = 0x3417B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417B0u;
            // 0x3417b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417B8u; }
        if (ctx->pc != 0x3417B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417B8u; }
        if (ctx->pc != 0x3417B8u) { return; }
    }
    ctx->pc = 0x3417B8u;
label_3417b8:
    // 0x3417b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3417B8u;
    {
        const bool branch_taken_0x3417b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3417b8) {
            ctx->pc = 0x3417D0u;
            goto label_3417d0;
        }
    }
    ctx->pc = 0x3417C0u;
label_3417c0:
    // 0x3417c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3417c4: 0x24a55080  addiu       $a1, $a1, 0x5080
    ctx->pc = 0x3417c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20608));
    // 0x3417c8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x3417C8u;
    SET_GPR_U32(ctx, 31, 0x3417D0u);
    ctx->pc = 0x3417CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417C8u;
            // 0x3417cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417D0u; }
        if (ctx->pc != 0x3417D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417D0u; }
        if (ctx->pc != 0x3417D0u) { return; }
    }
    ctx->pc = 0x3417D0u;
label_3417d0:
    // 0x3417d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3417d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3417d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3417d8: 0x8c45ea58  lw          $a1, -0x15A8($v0)
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961752)));
    // 0x3417dc: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x3417DCu;
    SET_GPR_U32(ctx, 31, 0x3417E4u);
    ctx->pc = 0x3417E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417DCu;
            // 0x3417e0: 0x3c060050  lui         $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (runtime->hasFunction(0x1A3F30u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417E4u; }
        if (ctx->pc != 0x3417E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F30_0x1a3f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417E4u; }
        if (ctx->pc != 0x3417E4u) { return; }
    }
    ctx->pc = 0x3417E4u;
label_3417e4:
    // 0x3417e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3417e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3417e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3417E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3417ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3417E8u;
            // 0x3417ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3417F0u;
    ctx->pc = 0x3417f0u;
}
