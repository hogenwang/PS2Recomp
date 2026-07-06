#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142520
// Address: 0x142520 - 0x1427d0
void sub_00142520_0x142520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142520_0x142520");
#endif

    switch (ctx->pc) {
        case 0x142580u: goto label_142580;
        case 0x1425b0u: goto label_1425b0;
        case 0x1425e0u: goto label_1425e0;
        case 0x1425f0u: goto label_1425f0;
        case 0x142620u: goto label_142620;
        case 0x142650u: goto label_142650;
        case 0x1426d0u: goto label_1426d0;
        case 0x142708u: goto label_142708;
        case 0x142724u: goto label_142724;
        case 0x142740u: goto label_142740;
        case 0x14275cu: goto label_14275c;
        case 0x142778u: goto label_142778;
        case 0x142790u: goto label_142790;
        default: break;
    }

    ctx->pc = 0x142520u;

    // 0x142520: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x142520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x142524: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x142524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x142528: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x142528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14252c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14252cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x142530: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x142530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x142534: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x142534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x142538: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x142538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14253c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x142540: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x142540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142544: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x142548: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x142548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14254c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142550: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x142550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142558: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x142558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14255c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142560: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x142560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142568: 0x8d4400dc  lw          $a0, 0xDC($t2)
    ctx->pc = 0x142568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 220)));
    // 0x14256c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142570: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x142570u;
    {
        const bool branch_taken_0x142570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142570u;
            // 0x142574: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142570) {
            ctx->pc = 0x1425E8u;
            goto label_1425e8;
        }
    }
    ctx->pc = 0x142578u;
    // 0x142578: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x142578u;
    SET_GPR_U32(ctx, 31, 0x142580u);
    ctx->pc = 0x14257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142578u;
            // 0x14257c: 0x924505f1  lbu         $a1, 0x5F1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1521)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (runtime->hasFunction(0x1635F0u)) {
        auto targetFn = runtime->lookupFunction(0x1635F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142580u; }
        if (ctx->pc != 0x142580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001635F0_0x1635f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142580u; }
        if (ctx->pc != 0x142580u) { return; }
    }
    ctx->pc = 0x142580u;
label_142580:
    // 0x142580: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x142580u;
    {
        const bool branch_taken_0x142580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142580u;
            // 0x142584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142580) {
            ctx->pc = 0x1425B8u;
            goto label_1425b8;
        }
    }
    ctx->pc = 0x142588u;
    // 0x142588: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x14258c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x142590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142594: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x142598: 0x24c619a0  addiu       $a2, $a2, 0x19A0
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6560));
    // 0x14259c: 0x24e71cf0  addiu       $a3, $a3, 0x1CF0
    ctx->pc = 0x14259cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7408));
    // 0x1425a0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1425a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1425a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425a8: 0xc0591f0  jal         func_1647C0
    ctx->pc = 0x1425A8u;
    SET_GPR_U32(ctx, 31, 0x1425B0u);
    ctx->pc = 0x1425ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1425A8u;
            // 0x1425ac: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1647C0u;
    if (runtime->hasFunction(0x1647C0u)) {
        auto targetFn = runtime->lookupFunction(0x1647C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425B0u; }
        if (ctx->pc != 0x1425B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001647C0_0x1647c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425B0u; }
        if (ctx->pc != 0x1425B0u) { return; }
    }
    ctx->pc = 0x1425B0u;
label_1425b0:
    // 0x1425b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1425B0u;
    {
        const bool branch_taken_0x1425b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425b0) {
            ctx->pc = 0x142650u;
            goto label_142650;
        }
    }
    ctx->pc = 0x1425B8u;
label_1425b8:
    // 0x1425b8: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1425bc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1425c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1425c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425c4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1425c8: 0x24c619a0  addiu       $a2, $a2, 0x19A0
    ctx->pc = 0x1425c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6560));
    // 0x1425cc: 0x24e71cf0  addiu       $a3, $a3, 0x1CF0
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7408));
    // 0x1425d0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1425d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425d4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1425d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425d8: 0xc0591f0  jal         func_1647C0
    ctx->pc = 0x1425D8u;
    SET_GPR_U32(ctx, 31, 0x1425E0u);
    ctx->pc = 0x1425DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1425D8u;
            // 0x1425dc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1647C0u;
    if (runtime->hasFunction(0x1647C0u)) {
        auto targetFn = runtime->lookupFunction(0x1647C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425E0u; }
        if (ctx->pc != 0x1425E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001647C0_0x1647c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425E0u; }
        if (ctx->pc != 0x1425E0u) { return; }
    }
    ctx->pc = 0x1425E0u;
label_1425e0:
    // 0x1425e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1425E0u;
    {
        const bool branch_taken_0x1425e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425e0) {
            ctx->pc = 0x142650u;
            goto label_142650;
        }
    }
    ctx->pc = 0x1425E8u;
label_1425e8:
    // 0x1425e8: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x1425E8u;
    SET_GPR_U32(ctx, 31, 0x1425F0u);
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425F0u; }
        if (ctx->pc != 0x1425F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425F0u; }
        if (ctx->pc != 0x1425F0u) { return; }
    }
    ctx->pc = 0x1425F0u;
label_1425f0:
    // 0x1425f0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1425F0u;
    {
        const bool branch_taken_0x1425f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1425F0u;
            // 0x1425f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425f0) {
            ctx->pc = 0x142628u;
            goto label_142628;
        }
    }
    ctx->pc = 0x1425F8u;
    // 0x1425f8: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1425f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1425fc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1425fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x142600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142604: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x142604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x142608: 0x24c619a0  addiu       $a2, $a2, 0x19A0
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6560));
    // 0x14260c: 0x24e71cf0  addiu       $a3, $a3, 0x1CF0
    ctx->pc = 0x14260cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7408));
    // 0x142610: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x142610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142614: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x142614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142618: 0xc0591f0  jal         func_1647C0
    ctx->pc = 0x142618u;
    SET_GPR_U32(ctx, 31, 0x142620u);
    ctx->pc = 0x14261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142618u;
            // 0x14261c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1647C0u;
    if (runtime->hasFunction(0x1647C0u)) {
        auto targetFn = runtime->lookupFunction(0x1647C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142620u; }
        if (ctx->pc != 0x142620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001647C0_0x1647c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142620u; }
        if (ctx->pc != 0x142620u) { return; }
    }
    ctx->pc = 0x142620u;
label_142620:
    // 0x142620: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x142620u;
    {
        const bool branch_taken_0x142620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142620) {
            ctx->pc = 0x142650u;
            goto label_142650;
        }
    }
    ctx->pc = 0x142628u;
label_142628:
    // 0x142628: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x14262c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x142630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142634: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x142638: 0x24c619a0  addiu       $a2, $a2, 0x19A0
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6560));
    // 0x14263c: 0x24e71cf0  addiu       $a3, $a3, 0x1CF0
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7408));
    // 0x142640: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x142640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142644: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x142644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142648: 0xc0591f0  jal         func_1647C0
    ctx->pc = 0x142648u;
    SET_GPR_U32(ctx, 31, 0x142650u);
    ctx->pc = 0x14264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142648u;
            // 0x14264c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1647C0u;
    if (runtime->hasFunction(0x1647C0u)) {
        auto targetFn = runtime->lookupFunction(0x1647C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142650u; }
        if (ctx->pc != 0x142650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001647C0_0x1647c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142650u; }
        if (ctx->pc != 0x142650u) { return; }
    }
    ctx->pc = 0x142650u;
label_142650:
    // 0x142650: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x142650u;
    {
        const bool branch_taken_0x142650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142650) {
            ctx->pc = 0x142654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142650u;
            // 0x142654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1427A4u;
            goto label_1427a4;
        }
    }
    ctx->pc = 0x142658u;
    // 0x142658: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14265c: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x14265cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x142660: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x142660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x142664: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x142664u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x142668: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x142668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14266c: 0xa63500f0  sh          $s5, 0xF0($s1)
    ctx->pc = 0x14266cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 21));
    // 0x142670: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x142670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x142674: 0xae2403f0  sw          $a0, 0x3F0($s1)
    ctx->pc = 0x142674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 4));
    // 0x142678: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x142678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x14267c: 0xae2303f4  sw          $v1, 0x3F4($s1)
    ctx->pc = 0x14267cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 3));
    // 0x142680: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x142680u;
    {
        const bool branch_taken_0x142680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142680u;
            // 0x142684: 0xa23705f0  sb          $s7, 0x5F0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1520), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142680) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x142688u;
    // 0x142688: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x142688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x14268c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14268cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142690: 0x2463cd60  addiu       $v1, $v1, -0x32A0
    ctx->pc = 0x142690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954336));
    // 0x142694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142698: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14269c: 0x400008  jr          $v0
    ctx->pc = 0x14269Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1426A4u: goto label_1426a4;
            case 0x1426D8u: goto label_1426d8;
            case 0x142710u: goto label_142710;
            case 0x14272Cu: goto label_14272c;
            case 0x142748u: goto label_142748;
            case 0x142764u: goto label_142764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1426A4u;
label_1426a4:
    // 0x1426a4: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1426a8: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1426a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1426ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1426ACu;
    {
        const bool branch_taken_0x1426ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1426ac) {
            ctx->pc = 0x1426B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1426ACu;
            // 0x1426b0: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1426C0u;
            goto label_1426c0;
        }
    }
    ctx->pc = 0x1426B4u;
    // 0x1426b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1426b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1426b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1426B8u;
    {
        const bool branch_taken_0x1426b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426B8u;
            // 0x1426bc: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426b8) {
            ctx->pc = 0x1426C4u;
            goto label_1426c4;
        }
    }
    ctx->pc = 0x1426C0u;
label_1426c0:
    // 0x1426c0: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x1426c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_1426c4:
    // 0x1426c4: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1426c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1426c8: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x1426C8u;
    SET_GPR_U32(ctx, 31, 0x1426D0u);
    ctx->pc = 0x1426CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426C8u;
            // 0x1426cc: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426D0u; }
        if (ctx->pc != 0x1426D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426D0u; }
        if (ctx->pc != 0x1426D0u) { return; }
    }
    ctx->pc = 0x1426D0u;
label_1426d0:
    // 0x1426d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1426D0u;
    {
        const bool branch_taken_0x1426d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426D0u;
            // 0x1426d4: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426d0) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x1426D8u;
label_1426d8:
    // 0x1426d8: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x1426d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1426dc: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1426dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1426e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1426E0u;
    {
        const bool branch_taken_0x1426e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1426e0) {
            ctx->pc = 0x1426E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1426E0u;
            // 0x1426e4: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1426F4u;
            goto label_1426f4;
        }
    }
    ctx->pc = 0x1426E8u;
    // 0x1426e8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x1426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1426ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1426ECu;
    {
        const bool branch_taken_0x1426ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426ECu;
            // 0x1426f0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426ec) {
            ctx->pc = 0x1426FCu;
            goto label_1426fc;
        }
    }
    ctx->pc = 0x1426F4u;
label_1426f4:
    // 0x1426f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1426f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1426f8: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x1426f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_1426fc:
    // 0x1426fc: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1426fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142700: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142700u;
    SET_GPR_U32(ctx, 31, 0x142708u);
    ctx->pc = 0x142704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142700u;
            // 0x142704: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142708u; }
        if (ctx->pc != 0x142708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142708u; }
        if (ctx->pc != 0x142708u) { return; }
    }
    ctx->pc = 0x142708u;
label_142708:
    // 0x142708: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142708u;
    {
        const bool branch_taken_0x142708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142708u;
            // 0x14270c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142708) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x142710u;
label_142710:
    // 0x142710: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142714: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142718: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x142718u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14271c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x14271Cu;
    SET_GPR_U32(ctx, 31, 0x142724u);
    ctx->pc = 0x142720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14271Cu;
            // 0x142720: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142724u; }
        if (ctx->pc != 0x142724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142724u; }
        if (ctx->pc != 0x142724u) { return; }
    }
    ctx->pc = 0x142724u;
label_142724:
    // 0x142724: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x142724u;
    {
        const bool branch_taken_0x142724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142724u;
            // 0x142728: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142724) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x14272Cu;
label_14272c:
    // 0x14272c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142730: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142734: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x142734u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142738: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142738u;
    SET_GPR_U32(ctx, 31, 0x142740u);
    ctx->pc = 0x14273Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142738u;
            // 0x14273c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142740u; }
        if (ctx->pc != 0x142740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142740u; }
        if (ctx->pc != 0x142740u) { return; }
    }
    ctx->pc = 0x142740u;
label_142740:
    // 0x142740: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x142740u;
    {
        const bool branch_taken_0x142740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142740u;
            // 0x142744: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142740) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x142748u;
label_142748:
    // 0x142748: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x142748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14274c: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x14274cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142750: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x142750u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142754: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142754u;
    SET_GPR_U32(ctx, 31, 0x14275Cu);
    ctx->pc = 0x142758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142754u;
            // 0x142758: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14275Cu; }
        if (ctx->pc != 0x14275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14275Cu; }
        if (ctx->pc != 0x14275Cu) { return; }
    }
    ctx->pc = 0x14275Cu;
label_14275c:
    // 0x14275c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14275Cu;
    {
        const bool branch_taken_0x14275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14275Cu;
            // 0x142760: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14275c) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x142764u;
label_142764:
    // 0x142764: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x142768: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x14276c: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x14276cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142770: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142770u;
    SET_GPR_U32(ctx, 31, 0x142778u);
    ctx->pc = 0x142774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142770u;
            // 0x142774: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142778u; }
        if (ctx->pc != 0x142778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142778u; }
        if (ctx->pc != 0x142778u) { return; }
    }
    ctx->pc = 0x142778u;
label_142778:
    // 0x142778: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x142778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_14277c:
    // 0x14277c: 0x8e2204a0  lw          $v0, 0x4A0($s1)
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1184)));
    // 0x142780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142784: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x142784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x142788: 0xc05ac88  jal         func_16B220
    ctx->pc = 0x142788u;
    SET_GPR_U32(ctx, 31, 0x142790u);
    ctx->pc = 0x14278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142788u;
            // 0x14278c: 0xae2204a0  sw          $v0, 0x4A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (runtime->hasFunction(0x16B220u)) {
        auto targetFn = runtime->lookupFunction(0x16B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142790u; }
        if (ctx->pc != 0x142790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B220_0x16b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142790u; }
        if (ctx->pc != 0x142790u) { return; }
    }
    ctx->pc = 0x142790u;
label_142790:
    // 0x142790: 0xa22003e8  sb          $zero, 0x3E8($s1)
    ctx->pc = 0x142790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1000), (uint8_t)GPR_U32(ctx, 0));
    // 0x142794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142798: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14279c: 0x906303e8  lbu         $v1, 0x3E8($v1)
    ctx->pc = 0x14279cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1000)));
    // 0x1427a0: 0xa22303e9  sb          $v1, 0x3E9($s1)
    ctx->pc = 0x1427a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1001), (uint8_t)GPR_U32(ctx, 3));
label_1427a4:
    // 0x1427a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1427a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1427a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1427ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1427acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1427b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1427b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1427b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1427b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1427b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1427b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1427bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1427bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1427c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1427c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1427c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1427c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1427c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1427C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1427CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427C8u;
            // 0x1427cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1427D0u;
    ctx->pc = 0x1427d0u;
}
