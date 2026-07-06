#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002243D0
// Address: 0x2243d0 - 0x224510
void sub_002243D0_0x2243d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002243D0_0x2243d0");
#endif

    switch (ctx->pc) {
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        default: break;
    }

    ctx->pc = 0x2243d0u;

label_2243d0:
    // 0x2243d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2243d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2243d4:
    // 0x2243d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2243d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2243d8:
    // 0x2243d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2243d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2243dc:
    // 0x2243dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2243dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2243e0:
    // 0x2243e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2243e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2243e4:
    // 0x2243e4: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_2243e8:
    if (ctx->pc == 0x2243E8u) {
        ctx->pc = 0x2243E8u;
            // 0x2243e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2243ECu;
        goto label_2243ec;
    }
    ctx->pc = 0x2243E4u;
    {
        const bool branch_taken_0x2243e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243E4u;
            // 0x2243e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243e4) {
            ctx->pc = 0x22441Cu;
            goto label_22441c;
        }
    }
    ctx->pc = 0x2243ECu;
label_2243ec:
    // 0x2243ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2243ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2243f0:
    // 0x2243f0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2243f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2243f4:
    // 0x2243f4: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
label_2243f8:
    // 0x2243f8: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x2243f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_2243fc:
    // 0x2243fc: 0x24050159  addiu       $a1, $zero, 0x159
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
label_224400:
    // 0x224400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224404:
    // 0x224404: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_224408:
    // 0x224408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22440c:
    // 0x22440c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22440cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_224410:
    // 0x224410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224414:
    // 0x224414: 0x8089794  j           func_225E50
label_224418:
    if (ctx->pc == 0x224418u) {
        ctx->pc = 0x224418u;
            // 0x224418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22441Cu;
        goto label_22441c;
    }
    ctx->pc = 0x224414u;
    ctx->pc = 0x224418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224414u;
            // 0x224418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22441Cu;
label_22441c:
    // 0x22441c: 0x8c8f1074  lw          $t7, 0x1074($a0)
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4212)));
label_224420:
    // 0x224420: 0x55e00018  bnel        $t7, $zero, . + 4 + (0x18 << 2)
label_224424:
    if (ctx->pc == 0x224424u) {
        ctx->pc = 0x224424u;
            // 0x224424: 0xac801054  sw          $zero, 0x1054($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 0));
        ctx->pc = 0x224428u;
        goto label_224428;
    }
    ctx->pc = 0x224420u;
    {
        const bool branch_taken_0x224420 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x224420) {
            ctx->pc = 0x224424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224420u;
            // 0x224424: 0xac801054  sw          $zero, 0x1054($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224484u;
            goto label_224484;
        }
    }
    ctx->pc = 0x224428u;
label_224428:
    // 0x224428: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22442c:
    // 0x22442c: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x22442cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_224430:
    // 0x224430: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
label_224434:
    if (ctx->pc == 0x224434u) {
        ctx->pc = 0x224434u;
            // 0x224434: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x224438u;
        goto label_224438;
    }
    ctx->pc = 0x224430u;
    {
        const bool branch_taken_0x224430 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x224434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224430u;
            // 0x224434: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224430) {
            ctx->pc = 0x22444Cu;
            goto label_22444c;
        }
    }
    ctx->pc = 0x224438u;
label_224438:
    // 0x224438: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22443c:
    // 0x22443c: 0xc089870  jal         func_2261C0
label_224440:
    if (ctx->pc == 0x224440u) {
        ctx->pc = 0x224440u;
            // 0x224440: 0x8de4ca2c  lw          $a0, -0x35D4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
        ctx->pc = 0x224444u;
        goto label_224444;
    }
    ctx->pc = 0x22443Cu;
    SET_GPR_U32(ctx, 31, 0x224444u);
    ctx->pc = 0x224440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22443Cu;
            // 0x224440: 0x8de4ca2c  lw          $a0, -0x35D4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2261C0u;
    if (runtime->hasFunction(0x2261C0u)) {
        auto targetFn = runtime->lookupFunction(0x2261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224444u; }
        if (ctx->pc != 0x224444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002261C0_0x2261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224444u; }
        if (ctx->pc != 0x224444u) { return; }
    }
    ctx->pc = 0x224444u;
label_224444:
    // 0x224444: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_224448:
    if (ctx->pc == 0x224448u) {
        ctx->pc = 0x224448u;
            // 0x224448: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22444Cu;
        goto label_22444c;
    }
    ctx->pc = 0x224444u;
    {
        const bool branch_taken_0x224444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224444u;
            // 0x224448: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224444) {
            ctx->pc = 0x22446Cu;
            goto label_22446c;
        }
    }
    ctx->pc = 0x22444Cu;
label_22444c:
    // 0x22444c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_224450:
    // 0x224450: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_224454:
    // 0x224454: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x224454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
label_224458:
    // 0x224458: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x224458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_22445c:
    // 0x22445c: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x22445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_224460:
    // 0x224460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224464:
    // 0x224464: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_224468:
    if (ctx->pc == 0x224468u) {
        ctx->pc = 0x224468u;
            // 0x224468: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->pc = 0x22446Cu;
        goto label_22446c;
    }
    ctx->pc = 0x224464u;
    {
        const bool branch_taken_0x224464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224464u;
            // 0x224468: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224464) {
            ctx->pc = 0x224408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224408;
        }
    }
    ctx->pc = 0x22446Cu;
label_22446c:
    // 0x22446c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22446cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224470:
    // 0x224470: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x224470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_224474:
    // 0x224474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_224478:
    // 0x224478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22447c:
    // 0x22447c: 0x3e00008  jr          $ra
label_224480:
    if (ctx->pc == 0x224480u) {
        ctx->pc = 0x224480u;
            // 0x224480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224484u;
        goto label_224484;
    }
    ctx->pc = 0x22447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22447Cu;
            // 0x224480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224484u;
label_224484:
    // 0x224484: 0xc088696  jal         func_221A58
label_224488:
    if (ctx->pc == 0x224488u) {
        ctx->pc = 0x224488u;
            // 0x224488: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x22448Cu;
        goto label_22448c;
    }
    ctx->pc = 0x224484u;
    SET_GPR_U32(ctx, 31, 0x22448Cu);
    ctx->pc = 0x224488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224484u;
            // 0x224488: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22448Cu; }
        if (ctx->pc != 0x22448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22448Cu; }
        if (ctx->pc != 0x22448Cu) { return; }
    }
    ctx->pc = 0x22448Cu;
label_22448c:
    // 0x22448c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x22448cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_224490:
    // 0x224490: 0x144f000f  bne         $v0, $t7, . + 4 + (0xF << 2)
label_224494:
    if (ctx->pc == 0x224494u) {
        ctx->pc = 0x224498u;
        goto label_224498;
    }
    ctx->pc = 0x224490u;
    {
        const bool branch_taken_0x224490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x224490) {
            ctx->pc = 0x2244D0u;
            goto label_2244d0;
        }
    }
    ctx->pc = 0x224498u;
label_224498:
    // 0x224498: 0x8e021074  lw          $v0, 0x1074($s0)
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4212)));
label_22449c:
    // 0x22449c: 0x40f809  jalr        $v0
label_2244a0:
    if (ctx->pc == 0x2244A0u) {
        ctx->pc = 0x2244A0u;
            // 0x2244a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2244A4u;
        goto label_2244a4;
    }
    ctx->pc = 0x22449Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2244A4u);
        ctx->pc = 0x2244A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22449Cu;
            // 0x2244a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2244A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2244A4u; }
            if (ctx->pc != 0x2244A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2244A4u;
label_2244a4:
    // 0x2244a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2244a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2244a8:
    // 0x2244a8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2244ac:
    // 0x2244ac: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2244acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2244b0:
    // 0x2244b0: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_2244b4:
    if (ctx->pc == 0x2244B4u) {
        ctx->pc = 0x2244B4u;
            // 0x2244b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2244B8u;
        goto label_2244b8;
    }
    ctx->pc = 0x2244B0u;
    {
        const bool branch_taken_0x2244b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244B0u;
            // 0x2244b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244b0) {
            ctx->pc = 0x2244C8u;
            goto label_2244c8;
        }
    }
    ctx->pc = 0x2244B8u;
label_2244b8:
    // 0x2244b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2244b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2244bc:
    // 0x2244bc: 0x8de4ca2c  lw          $a0, -0x35D4($t7)
    ctx->pc = 0x2244bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
label_2244c0:
    // 0x2244c0: 0xc089870  jal         func_2261C0
label_2244c4:
    if (ctx->pc == 0x2244C4u) {
        ctx->pc = 0x2244C4u;
            // 0x2244c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2244C8u;
        goto label_2244c8;
    }
    ctx->pc = 0x2244C0u;
    SET_GPR_U32(ctx, 31, 0x2244C8u);
    ctx->pc = 0x2244C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2244C0u;
            // 0x2244c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2261C0u;
    if (runtime->hasFunction(0x2261C0u)) {
        auto targetFn = runtime->lookupFunction(0x2261C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244C8u; }
        if (ctx->pc != 0x2244C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002261C0_0x2261c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244C8u; }
        if (ctx->pc != 0x2244C8u) { return; }
    }
    ctx->pc = 0x2244C8u;
label_2244c8:
    // 0x2244c8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2244cc:
    if (ctx->pc == 0x2244CCu) {
        ctx->pc = 0x2244CCu;
            // 0x2244cc: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2244D0u;
        goto label_2244d0;
    }
    ctx->pc = 0x2244C8u;
    {
        const bool branch_taken_0x2244c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244C8u;
            // 0x2244cc: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244c8) {
            ctx->pc = 0x22446Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22446c;
        }
    }
    ctx->pc = 0x2244D0u;
label_2244d0:
    // 0x2244d0: 0xc08917a  jal         func_2245E8
label_2244d4:
    if (ctx->pc == 0x2244D4u) {
        ctx->pc = 0x2244D4u;
            // 0x2244d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2244D8u;
        goto label_2244d8;
    }
    ctx->pc = 0x2244D0u;
    SET_GPR_U32(ctx, 31, 0x2244D8u);
    ctx->pc = 0x2244D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2244D0u;
            // 0x2244d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244D8u; }
        if (ctx->pc != 0x2244D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244D8u; }
        if (ctx->pc != 0x2244D8u) { return; }
    }
    ctx->pc = 0x2244D8u;
label_2244d8:
    // 0x2244d8: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2244dc:
    // 0x2244dc: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
label_2244e0:
    if (ctx->pc == 0x2244E0u) {
        ctx->pc = 0x2244E4u;
        goto label_2244e4;
    }
    ctx->pc = 0x2244DCu;
    {
        const bool branch_taken_0x2244dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2244dc) {
            ctx->pc = 0x2244ECu;
            goto label_2244ec;
        }
    }
    ctx->pc = 0x2244E4u;
label_2244e4:
    // 0x2244e4: 0xc089014  jal         func_224050
label_2244e8:
    if (ctx->pc == 0x2244E8u) {
        ctx->pc = 0x2244E8u;
            // 0x2244e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2244ECu;
        goto label_2244ec;
    }
    ctx->pc = 0x2244E4u;
    SET_GPR_U32(ctx, 31, 0x2244ECu);
    ctx->pc = 0x2244E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2244E4u;
            // 0x2244e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244ECu; }
        if (ctx->pc != 0x2244ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244ECu; }
        if (ctx->pc != 0x2244ECu) { return; }
    }
    ctx->pc = 0x2244ECu;
label_2244ec:
    // 0x2244ec: 0xc0491f2  jal         func_1247C8
label_2244f0:
    if (ctx->pc == 0x2244F0u) {
        ctx->pc = 0x2244F4u;
        goto label_2244f4;
    }
    ctx->pc = 0x2244ECu;
    SET_GPR_U32(ctx, 31, 0x2244F4u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244F4u; }
        if (ctx->pc != 0x2244F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244F4u; }
        if (ctx->pc != 0x2244F4u) { return; }
    }
    ctx->pc = 0x2244F4u;
label_2244f4:
    // 0x2244f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2244f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2244f8:
    // 0x2244f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2244f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2244fc:
    // 0x2244fc: 0xc089144  jal         func_224510
label_224500:
    if (ctx->pc == 0x224500u) {
        ctx->pc = 0x224500u;
            // 0x224500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x224504u;
        goto label_224504;
    }
    ctx->pc = 0x2244FCu;
    SET_GPR_U32(ctx, 31, 0x224504u);
    ctx->pc = 0x224500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2244FCu;
            // 0x224500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224504u; }
        if (ctx->pc != 0x224504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224504u; }
        if (ctx->pc != 0x224504u) { return; }
    }
    ctx->pc = 0x224504u;
label_224504:
    // 0x224504: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_224508:
    if (ctx->pc == 0x224508u) {
        ctx->pc = 0x224508u;
            // 0x224508: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x22450Cu;
        goto label_22450c;
    }
    ctx->pc = 0x224504u;
    {
        const bool branch_taken_0x224504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224504u;
            // 0x224508: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224504) {
            ctx->pc = 0x2244ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2244ac;
        }
    }
    ctx->pc = 0x22450Cu;
label_22450c:
    // 0x22450c: 0x0  nop
    ctx->pc = 0x22450cu;
    // NOP
    ctx->pc = 0x224510u;
}
