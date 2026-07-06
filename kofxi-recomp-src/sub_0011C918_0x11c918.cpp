#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C918
// Address: 0x11c918 - 0x11ca10
void sub_0011C918_0x11c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C918_0x11c918");
#endif

    switch (ctx->pc) {
        case 0x11c940u: goto label_11c940;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c99cu: goto label_11c99c;
        case 0x11c9b0u: goto label_11c9b0;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9e8u: goto label_11c9e8;
        case 0x11c9fcu: goto label_11c9fc;
        default: break;
    }

    ctx->pc = 0x11c918u;

    // 0x11c918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c91c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c920: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c924: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11c924u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11c928: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c930: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11c934: 0x2632b400  addiu       $s2, $s1, -0x4C00
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947840));
    // 0x11c938: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11C938u;
    SET_GPR_U32(ctx, 31, 0x11C940u);
    ctx->pc = 0x11C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C938u;
            // 0x11c93c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (runtime->hasFunction(0x11BA80u)) {
        auto targetFn = runtime->lookupFunction(0x11BA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C940u; }
        if (ctx->pc != 0x11C940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA80_0x11ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C940u; }
        if (ctx->pc != 0x11C940u) { return; }
    }
    ctx->pc = 0x11C940u;
label_11c940:
    // 0x11c940: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C940u;
    {
        const bool branch_taken_0x11c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c940) {
            ctx->pc = 0x11C944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C940u;
            // 0x11c944: 0xae30b400  sw          $s0, -0x4C00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947840), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C950u;
            goto label_11c950;
        }
    }
    ctx->pc = 0x11C948u;
    // 0x11c948: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11C948u;
    {
        const bool branch_taken_0x11c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C948u;
            // 0x11c94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c948) {
            ctx->pc = 0x11C9D0u;
            goto label_11c9d0;
        }
    }
    ctx->pc = 0x11C950u;
label_11c950:
    // 0x11c950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c954: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C954u;
    SET_GPR_U32(ctx, 31, 0x11C95Cu);
    ctx->pc = 0x11C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C954u;
            // 0x11c958: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C95Cu; }
        if (ctx->pc != 0x11C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C95Cu; }
        if (ctx->pc != 0x11C95Cu) { return; }
    }
    ctx->pc = 0x11C95Cu;
label_11c95c:
    // 0x11c95c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c960: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x11c960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x11c964: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c968: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c96c: 0x8c88b96c  lw          $t0, -0x4694($a0)
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949228)));
    // 0x11c970: 0x2450afc0  addiu       $s0, $v0, -0x5040
    ctx->pc = 0x11c970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11c974: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c978: 0x8ccab970  lw          $t2, -0x4690($a2)
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949232)));
    // 0x11c97c: 0x8c65b968  lw          $a1, -0x4698($v1)
    ctx->pc = 0x11c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949224)));
    // 0x11c980: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11c984: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11c984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c988: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c990: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11c990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c994: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C994u;
    SET_GPR_U32(ctx, 31, 0x11C99Cu);
    ctx->pc = 0x11C998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C994u;
            // 0x11c998: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C99Cu; }
        if (ctx->pc != 0x11C99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C99Cu; }
        if (ctx->pc != 0x11C99Cu) { return; }
    }
    ctx->pc = 0x11C99Cu;
label_11c99c:
    // 0x11c99c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C99Cu;
    {
        const bool branch_taken_0x11c99c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C99Cu;
            // 0x11c9a0: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c99c) {
            ctx->pc = 0x11C9B8u;
            goto label_11c9b8;
        }
    }
    ctx->pc = 0x11C9A4u;
    // 0x11c9a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c9a8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C9A8u;
    SET_GPR_U32(ctx, 31, 0x11C9B0u);
    ctx->pc = 0x11C9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9A8u;
            // 0x11c9ac: 0x8c449dec  lw          $a0, -0x6214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9B0u; }
        if (ctx->pc != 0x11C9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9B0u; }
        if (ctx->pc != 0x11C9B0u) { return; }
    }
    ctx->pc = 0x11C9B0u;
label_11c9b0:
    // 0x11c9b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C9B0u;
    {
        const bool branch_taken_0x11c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9B0u;
            // 0x11c9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9b0) {
            ctx->pc = 0x11C9D0u;
            goto label_11c9d0;
        }
    }
    ctx->pc = 0x11C9B8u;
label_11c9b8:
    // 0x11c9b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c9bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11c9c0: 0x8c649dec  lw          $a0, -0x6214($v1)
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942188)));
    // 0x11c9c4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C9C4u;
    SET_GPR_U32(ctx, 31, 0x11C9CCu);
    ctx->pc = 0x11C9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9C4u;
            // 0x11c9c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9CCu; }
        if (ctx->pc != 0x11C9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9CCu; }
        if (ctx->pc != 0x11C9CCu) { return; }
    }
    ctx->pc = 0x11C9CCu;
label_11c9cc:
    // 0x11c9cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c9d0:
    // 0x11c9d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11c9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c9d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c9d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c9dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9E0u;
            // 0x11c9e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C9E8u;
label_11c9e8:
    // 0x11c9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c9ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c9f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C9F4u;
    SET_GPR_U32(ctx, 31, 0x11C9FCu);
    ctx->pc = 0x11C9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9F4u;
            // 0x11c9f8: 0x2484b3f0  addiu       $a0, $a0, -0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9FCu; }
        if (ctx->pc != 0x11C9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9FCu; }
        if (ctx->pc != 0x11C9FCu) { return; }
    }
    ctx->pc = 0x11C9FCu;
label_11c9fc:
    // 0x11c9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ca04: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA04u;
            // 0x11ca08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CA0Cu;
    // 0x11ca0c: 0x0  nop
    ctx->pc = 0x11ca0cu;
    // NOP
    ctx->pc = 0x11ca10u;
}
