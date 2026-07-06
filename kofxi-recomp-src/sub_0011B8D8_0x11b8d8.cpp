#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B8D8
// Address: 0x11b8d8 - 0x11b970
void sub_0011B8D8_0x11b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B8D8_0x11b8d8");
#endif

    switch (ctx->pc) {
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b92cu: goto label_11b92c;
        case 0x11b940u: goto label_11b940;
        case 0x11b95cu: goto label_11b95c;
        default: break;
    }

    ctx->pc = 0x11b8d8u;

    // 0x11b8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b8dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b8e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b8e4: 0xc046de0  jal         func_11B780
    ctx->pc = 0x11B8E4u;
    SET_GPR_U32(ctx, 31, 0x11B8ECu);
    ctx->pc = 0x11B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8E4u;
            // 0x11b8e8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B780u;
    if (runtime->hasFunction(0x11B780u)) {
        auto targetFn = runtime->lookupFunction(0x11B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8ECu; }
        if (ctx->pc != 0x11B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B780_0x11b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8ECu; }
        if (ctx->pc != 0x11B8ECu) { return; }
    }
    ctx->pc = 0x11B8ECu;
label_11b8ec:
    // 0x11b8ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8ECu;
    {
        const bool branch_taken_0x11b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8ECu;
            // 0x11b8f0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8ec) {
            ctx->pc = 0x11B8FCu;
            goto label_11b8fc;
        }
    }
    ctx->pc = 0x11B8F4u;
    // 0x11b8f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11B8F4u;
    {
        const bool branch_taken_0x11b8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8F4u;
            // 0x11b8f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f4) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B8FCu;
label_11b8fc:
    // 0x11b8fc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11b900: 0x24509e40  addiu       $s0, $v0, -0x61C0
    ctx->pc = 0x11b900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
    // 0x11b904: 0x2484af90  addiu       $a0, $a0, -0x5070
    ctx->pc = 0x11b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946704));
    // 0x11b908: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b90c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b91c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b920: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b924: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11B924u;
    SET_GPR_U32(ctx, 31, 0x11B92Cu);
    ctx->pc = 0x11B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B924u;
            // 0x11b928: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B92Cu; }
        if (ctx->pc != 0x11B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B92Cu; }
        if (ctx->pc != 0x11B92Cu) { return; }
    }
    ctx->pc = 0x11B92Cu;
label_11b92c:
    // 0x11b92c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B92Cu;
    {
        const bool branch_taken_0x11b92c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B92Cu;
            // 0x11b930: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b92c) {
            ctx->pc = 0x11B948u;
            goto label_11b948;
        }
    }
    ctx->pc = 0x11B934u;
    // 0x11b934: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b938: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B938u;
    SET_GPR_U32(ctx, 31, 0x11B940u);
    ctx->pc = 0x11B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B938u;
            // 0x11b93c: 0x8c449de8  lw          $a0, -0x6218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B940u; }
        if (ctx->pc != 0x11B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B940u; }
        if (ctx->pc != 0x11B940u) { return; }
    }
    ctx->pc = 0x11B940u;
label_11b940:
    // 0x11b940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B940u;
    {
        const bool branch_taken_0x11b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B940u;
            // 0x11b944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b940) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B948u;
label_11b948:
    // 0x11b948: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11b94c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11b950: 0x8c649de8  lw          $a0, -0x6218($v1)
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942184)));
    // 0x11b954: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B954u;
            // 0x11b958: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B95Cu; }
        if (ctx->pc != 0x11B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B95Cu; }
        if (ctx->pc != 0x11B95Cu) { return; }
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b960:
    // 0x11b960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b968: 0x3e00008  jr          $ra
    ctx->pc = 0x11B968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B968u;
            // 0x11b96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B970u;
    ctx->pc = 0x11b970u;
}
