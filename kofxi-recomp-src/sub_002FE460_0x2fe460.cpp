#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE460
// Address: 0x2fe460 - 0x2fe770
void sub_002FE460_0x2fe460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE460_0x2fe460");
#endif

    switch (ctx->pc) {
        case 0x2fe480u: goto label_2fe480;
        case 0x2fe490u: goto label_2fe490;
        case 0x2fe4c8u: goto label_2fe4c8;
        case 0x2fe4d8u: goto label_2fe4d8;
        case 0x2fe504u: goto label_2fe504;
        case 0x2fe514u: goto label_2fe514;
        case 0x2fe540u: goto label_2fe540;
        case 0x2fe550u: goto label_2fe550;
        case 0x2fe56cu: goto label_2fe56c;
        case 0x2fe57cu: goto label_2fe57c;
        case 0x2fe5a4u: goto label_2fe5a4;
        case 0x2fe5b8u: goto label_2fe5b8;
        case 0x2fe5d0u: goto label_2fe5d0;
        case 0x2fe5e0u: goto label_2fe5e0;
        case 0x2fe608u: goto label_2fe608;
        case 0x2fe618u: goto label_2fe618;
        case 0x2fe634u: goto label_2fe634;
        case 0x2fe644u: goto label_2fe644;
        case 0x2fe66cu: goto label_2fe66c;
        case 0x2fe680u: goto label_2fe680;
        case 0x2fe698u: goto label_2fe698;
        case 0x2fe6a8u: goto label_2fe6a8;
        case 0x2fe6d0u: goto label_2fe6d0;
        case 0x2fe6e0u: goto label_2fe6e0;
        case 0x2fe6fcu: goto label_2fe6fc;
        case 0x2fe70cu: goto label_2fe70c;
        case 0x2fe738u: goto label_2fe738;
        case 0x2fe748u: goto label_2fe748;
        default: break;
    }

    ctx->pc = 0x2fe460u;

    // 0x2fe460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe464: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe46c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe474: 0x24c63070  addiu       $a2, $a2, 0x3070
    ctx->pc = 0x2fe474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12400));
    // 0x2fe478: 0xc047a00  jal         func_11E800
    ctx->pc = 0x2FE478u;
    SET_GPR_U32(ctx, 31, 0x2FE480u);
    ctx->pc = 0x2FE47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE478u;
            // 0x2fe47c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E800u;
    if (runtime->hasFunction(0x11E800u)) {
        auto targetFn = runtime->lookupFunction(0x11E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE480u; }
        if (ctx->pc != 0x2FE480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E800_0x11e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE480u; }
        if (ctx->pc != 0x2FE480u) { return; }
    }
    ctx->pc = 0x2FE480u;
label_2fe480:
    // 0x2fe480: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe488: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE488u;
    SET_GPR_U32(ctx, 31, 0x2FE490u);
    ctx->pc = 0x2FE48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE488u;
            // 0x2fe48c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE490u; }
        if (ctx->pc != 0x2FE490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE490u; }
        if (ctx->pc != 0x2FE490u) { return; }
    }
    ctx->pc = 0x2FE490u;
label_2fe490:
    // 0x2fe490: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2fe490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe494: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE494u;
    {
        const bool branch_taken_0x2fe494 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fe494) {
            ctx->pc = 0x2FE4B0u;
            goto label_2fe4b0;
        }
    }
    ctx->pc = 0x2FE49Cu;
    // 0x2fe49c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2fe49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2fe4a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE4A0u;
    {
        const bool branch_taken_0x2fe4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe4a0) {
            ctx->pc = 0x2FE4B0u;
            goto label_2fe4b0;
        }
    }
    ctx->pc = 0x2FE4A8u;
    // 0x2fe4a8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2FE4A8u;
    {
        const bool branch_taken_0x2fe4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4A8u;
            // 0x2fe4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4a8) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE4B0u;
label_2fe4b0:
    // 0x2fe4b0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe4b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4bc: 0x24c63070  addiu       $a2, $a2, 0x3070
    ctx->pc = 0x2fe4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12400));
    // 0x2fe4c0: 0xc047c82  jal         func_11F208
    ctx->pc = 0x2FE4C0u;
    SET_GPR_U32(ctx, 31, 0x2FE4C8u);
    ctx->pc = 0x2FE4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4C0u;
            // 0x2fe4c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (runtime->hasFunction(0x11F208u)) {
        auto targetFn = runtime->lookupFunction(0x11F208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4C8u; }
        if (ctx->pc != 0x2FE4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F208_0x11f208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4C8u; }
        if (ctx->pc != 0x2FE4C8u) { return; }
    }
    ctx->pc = 0x2FE4C8u;
label_2fe4c8:
    // 0x2fe4c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4d0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE4D0u;
    SET_GPR_U32(ctx, 31, 0x2FE4D8u);
    ctx->pc = 0x2FE4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4D0u;
            // 0x2fe4d4: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4D8u; }
        if (ctx->pc != 0x2FE4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4D8u; }
        if (ctx->pc != 0x2FE4D8u) { return; }
    }
    ctx->pc = 0x2FE4D8u;
label_2fe4d8:
    // 0x2fe4d8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe4dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE4DCu;
    {
        const bool branch_taken_0x2fe4dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe4dc) {
            ctx->pc = 0x2FE4ECu;
            goto label_2fe4ec;
        }
    }
    ctx->pc = 0x2FE4E4u;
    // 0x2fe4e4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2FE4E4u;
    {
        const bool branch_taken_0x2fe4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4E4u;
            // 0x2fe4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4e4) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE4ECu;
label_2fe4ec:
    // 0x2fe4ec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4f8: 0x24c63090  addiu       $a2, $a2, 0x3090
    ctx->pc = 0x2fe4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12432));
    // 0x2fe4fc: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE4FCu;
    SET_GPR_U32(ctx, 31, 0x2FE504u);
    ctx->pc = 0x2FE500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4FCu;
            // 0x2fe500: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE504u; }
        if (ctx->pc != 0x2FE504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE504u; }
        if (ctx->pc != 0x2FE504u) { return; }
    }
    ctx->pc = 0x2FE504u;
label_2fe504:
    // 0x2fe504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe50c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE50Cu;
    SET_GPR_U32(ctx, 31, 0x2FE514u);
    ctx->pc = 0x2FE510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE50Cu;
            // 0x2fe510: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE514u; }
        if (ctx->pc != 0x2FE514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE514u; }
        if (ctx->pc != 0x2FE514u) { return; }
    }
    ctx->pc = 0x2FE514u;
label_2fe514:
    // 0x2fe514: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x2fe514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe518: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE518u;
    {
        const bool branch_taken_0x2fe518 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe518) {
            ctx->pc = 0x2FE528u;
            goto label_2fe528;
        }
    }
    ctx->pc = 0x2FE520u;
    // 0x2fe520: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2FE520u;
    {
        const bool branch_taken_0x2fe520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE520u;
            // 0x2fe524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe520) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE528u;
label_2fe528:
    // 0x2fe528: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe530: 0x8c450c50  lw          $a1, 0xC50($v0)
    ctx->pc = 0x2fe530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fe534: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fe534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fe538: 0xc047ae8  jal         func_11EBA0
    ctx->pc = 0x2FE538u;
    SET_GPR_U32(ctx, 31, 0x2FE540u);
    ctx->pc = 0x2FE53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE538u;
            // 0x2fe53c: 0x344695b8  ori         $a2, $v0, 0x95B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBA0u;
    if (runtime->hasFunction(0x11EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x11EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE540u; }
        if (ctx->pc != 0x2FE540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBA0_0x11eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE540u; }
        if (ctx->pc != 0x2FE540u) { return; }
    }
    ctx->pc = 0x2FE540u;
label_2fe540:
    // 0x2fe540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe548: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE548u;
    SET_GPR_U32(ctx, 31, 0x2FE550u);
    ctx->pc = 0x2FE54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE548u;
            // 0x2fe54c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE550u; }
        if (ctx->pc != 0x2FE550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE550u; }
        if (ctx->pc != 0x2FE550u) { return; }
    }
    ctx->pc = 0x2FE550u;
label_2fe550:
    // 0x2fe550: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe554: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE554u;
    {
        const bool branch_taken_0x2fe554 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe554) {
            ctx->pc = 0x2FE558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE554u;
            // 0x2fe558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE564u;
            goto label_2fe564;
        }
    }
    ctx->pc = 0x2FE55Cu;
    // 0x2fe55c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2FE55Cu;
    {
        const bool branch_taken_0x2fe55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE55Cu;
            // 0x2fe560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe55c) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE564u;
label_2fe564:
    // 0x2fe564: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE564u;
    SET_GPR_U32(ctx, 31, 0x2FE56Cu);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE56Cu; }
        if (ctx->pc != 0x2FE56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE56Cu; }
        if (ctx->pc != 0x2FE56Cu) { return; }
    }
    ctx->pc = 0x2FE56Cu;
label_2fe56c:
    // 0x2fe56c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe574: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE574u;
    SET_GPR_U32(ctx, 31, 0x2FE57Cu);
    ctx->pc = 0x2FE578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE574u;
            // 0x2fe578: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE57Cu; }
        if (ctx->pc != 0x2FE57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE57Cu; }
        if (ctx->pc != 0x2FE57Cu) { return; }
    }
    ctx->pc = 0x2FE57Cu;
label_2fe57c:
    // 0x2fe57c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe580: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE580u;
    {
        const bool branch_taken_0x2fe580 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe580) {
            ctx->pc = 0x2FE590u;
            goto label_2fe590;
        }
    }
    ctx->pc = 0x2FE588u;
    // 0x2fe588: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2FE588u;
    {
        const bool branch_taken_0x2fe588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE588u;
            // 0x2fe58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe588) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE590u;
label_2fe590:
    // 0x2fe590: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe598: 0x8c440c48  lw          $a0, 0xC48($v0)
    ctx->pc = 0x2fe598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe59c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2FE59Cu;
    SET_GPR_U32(ctx, 31, 0x2FE5A4u);
    ctx->pc = 0x2FE5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE59Cu;
            // 0x2fe5a0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5A4u; }
        if (ctx->pc != 0x2FE5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5A4u; }
        if (ctx->pc != 0x2FE5A4u) { return; }
    }
    ctx->pc = 0x2FE5A4u;
label_2fe5a4:
    // 0x2fe5a4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe5a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fe5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fe5ac: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe5b0: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x2FE5B0u;
    SET_GPR_U32(ctx, 31, 0x2FE5B8u);
    ctx->pc = 0x2FE5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5B0u;
            // 0x2fe5b4: 0x248430a0  addiu       $a0, $a0, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5B8u; }
        if (ctx->pc != 0x2FE5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5B8u; }
        if (ctx->pc != 0x2FE5B8u) { return; }
    }
    ctx->pc = 0x2FE5B8u;
label_2fe5b8:
    // 0x2fe5b8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe5bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5c4: 0x24c630b0  addiu       $a2, $a2, 0x30B0
    ctx->pc = 0x2fe5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12464));
    // 0x2fe5c8: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE5C8u;
    SET_GPR_U32(ctx, 31, 0x2FE5D0u);
    ctx->pc = 0x2FE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5C8u;
            // 0x2fe5cc: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5D0u; }
        if (ctx->pc != 0x2FE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5D0u; }
        if (ctx->pc != 0x2FE5D0u) { return; }
    }
    ctx->pc = 0x2FE5D0u;
label_2fe5d0:
    // 0x2fe5d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5d8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE5D8u;
    SET_GPR_U32(ctx, 31, 0x2FE5E0u);
    ctx->pc = 0x2FE5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5D8u;
            // 0x2fe5dc: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E0u; }
        if (ctx->pc != 0x2FE5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E0u; }
        if (ctx->pc != 0x2FE5E0u) { return; }
    }
    ctx->pc = 0x2FE5E0u;
label_2fe5e0:
    // 0x2fe5e0: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x2fe5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe5e4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE5E4u;
    {
        const bool branch_taken_0x2fe5e4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe5e4) {
            ctx->pc = 0x2FE5F4u;
            goto label_2fe5f4;
        }
    }
    ctx->pc = 0x2FE5ECu;
    // 0x2fe5ec: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FE5ECu;
    {
        const bool branch_taken_0x2fe5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5ECu;
            // 0x2fe5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5ec) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE5F4u;
label_2fe5f4:
    // 0x2fe5f4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5fc: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe600: 0xc047ae8  jal         func_11EBA0
    ctx->pc = 0x2FE600u;
    SET_GPR_U32(ctx, 31, 0x2FE608u);
    ctx->pc = 0x2FE604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE600u;
            // 0x2fe604: 0x3406c5f8  ori         $a2, $zero, 0xC5F8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50680);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBA0u;
    if (runtime->hasFunction(0x11EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x11EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE608u; }
        if (ctx->pc != 0x2FE608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBA0_0x11eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE608u; }
        if (ctx->pc != 0x2FE608u) { return; }
    }
    ctx->pc = 0x2FE608u;
label_2fe608:
    // 0x2fe608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe610: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE610u;
    SET_GPR_U32(ctx, 31, 0x2FE618u);
    ctx->pc = 0x2FE614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE610u;
            // 0x2fe614: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE618u; }
        if (ctx->pc != 0x2FE618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE618u; }
        if (ctx->pc != 0x2FE618u) { return; }
    }
    ctx->pc = 0x2FE618u;
label_2fe618:
    // 0x2fe618: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe61c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE61Cu;
    {
        const bool branch_taken_0x2fe61c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe61c) {
            ctx->pc = 0x2FE620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE61Cu;
            // 0x2fe620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE62Cu;
            goto label_2fe62c;
        }
    }
    ctx->pc = 0x2FE624u;
    // 0x2fe624: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2FE624u;
    {
        const bool branch_taken_0x2fe624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE624u;
            // 0x2fe628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe624) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE62Cu;
label_2fe62c:
    // 0x2fe62c: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE62Cu;
    SET_GPR_U32(ctx, 31, 0x2FE634u);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE634u; }
        if (ctx->pc != 0x2FE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE634u; }
        if (ctx->pc != 0x2FE634u) { return; }
    }
    ctx->pc = 0x2FE634u;
label_2fe634:
    // 0x2fe634: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe63c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE63Cu;
    SET_GPR_U32(ctx, 31, 0x2FE644u);
    ctx->pc = 0x2FE640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE63Cu;
            // 0x2fe640: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE644u; }
        if (ctx->pc != 0x2FE644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE644u; }
        if (ctx->pc != 0x2FE644u) { return; }
    }
    ctx->pc = 0x2FE644u;
label_2fe644:
    // 0x2fe644: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe648: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE648u;
    {
        const bool branch_taken_0x2fe648 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe648) {
            ctx->pc = 0x2FE658u;
            goto label_2fe658;
        }
    }
    ctx->pc = 0x2FE650u;
    // 0x2fe650: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2FE650u;
    {
        const bool branch_taken_0x2fe650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE650u;
            // 0x2fe654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe650) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE658u;
label_2fe658:
    // 0x2fe658: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe660: 0x8c440c48  lw          $a0, 0xC48($v0)
    ctx->pc = 0x2fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe664: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2FE664u;
    SET_GPR_U32(ctx, 31, 0x2FE66Cu);
    ctx->pc = 0x2FE668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE664u;
            // 0x2fe668: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE66Cu; }
        if (ctx->pc != 0x2FE66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE66Cu; }
        if (ctx->pc != 0x2FE66Cu) { return; }
    }
    ctx->pc = 0x2FE66Cu;
label_2fe66c:
    // 0x2fe66c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe670: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fe670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fe674: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe678: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x2FE678u;
    SET_GPR_U32(ctx, 31, 0x2FE680u);
    ctx->pc = 0x2FE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE678u;
            // 0x2fe67c: 0x248430b8  addiu       $a0, $a0, 0x30B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE680u; }
        if (ctx->pc != 0x2FE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE680u; }
        if (ctx->pc != 0x2FE680u) { return; }
    }
    ctx->pc = 0x2FE680u;
label_2fe680:
    // 0x2fe680: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe68c: 0x24c630c8  addiu       $a2, $a2, 0x30C8
    ctx->pc = 0x2fe68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12488));
    // 0x2fe690: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE690u;
    SET_GPR_U32(ctx, 31, 0x2FE698u);
    ctx->pc = 0x2FE694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE690u;
            // 0x2fe694: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE698u; }
        if (ctx->pc != 0x2FE698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE698u; }
        if (ctx->pc != 0x2FE698u) { return; }
    }
    ctx->pc = 0x2FE698u;
label_2fe698:
    // 0x2fe698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6a0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE6A0u;
    SET_GPR_U32(ctx, 31, 0x2FE6A8u);
    ctx->pc = 0x2FE6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6A0u;
            // 0x2fe6a4: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A8u; }
        if (ctx->pc != 0x2FE6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A8u; }
        if (ctx->pc != 0x2FE6A8u) { return; }
    }
    ctx->pc = 0x2FE6A8u;
label_2fe6a8:
    // 0x2fe6a8: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x2fe6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe6ac: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE6ACu;
    {
        const bool branch_taken_0x2fe6ac = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe6ac) {
            ctx->pc = 0x2FE6BCu;
            goto label_2fe6bc;
        }
    }
    ctx->pc = 0x2FE6B4u;
    // 0x2fe6b4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2FE6B4u;
    {
        const bool branch_taken_0x2fe6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6B4u;
            // 0x2fe6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe6b4) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE6BCu;
label_2fe6bc:
    // 0x2fe6bc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6c4: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe6c8: 0xc047ae8  jal         func_11EBA0
    ctx->pc = 0x2FE6C8u;
    SET_GPR_U32(ctx, 31, 0x2FE6D0u);
    ctx->pc = 0x2FE6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6C8u;
            // 0x2fe6cc: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBA0u;
    if (runtime->hasFunction(0x11EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x11EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6D0u; }
        if (ctx->pc != 0x2FE6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBA0_0x11eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6D0u; }
        if (ctx->pc != 0x2FE6D0u) { return; }
    }
    ctx->pc = 0x2FE6D0u;
label_2fe6d0:
    // 0x2fe6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe6d8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE6D8u;
    SET_GPR_U32(ctx, 31, 0x2FE6E0u);
    ctx->pc = 0x2FE6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6D8u;
            // 0x2fe6dc: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E0u; }
        if (ctx->pc != 0x2FE6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E0u; }
        if (ctx->pc != 0x2FE6E0u) { return; }
    }
    ctx->pc = 0x2FE6E0u;
label_2fe6e0:
    // 0x2fe6e0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe6e4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE6E4u;
    {
        const bool branch_taken_0x2fe6e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe6e4) {
            ctx->pc = 0x2FE6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6E4u;
            // 0x2fe6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE6F4u;
            goto label_2fe6f4;
        }
    }
    ctx->pc = 0x2FE6ECu;
    // 0x2fe6ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FE6ECu;
    {
        const bool branch_taken_0x2fe6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6ECu;
            // 0x2fe6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe6ec) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE6F4u;
label_2fe6f4:
    // 0x2fe6f4: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE6F4u;
    SET_GPR_U32(ctx, 31, 0x2FE6FCu);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6FCu; }
        if (ctx->pc != 0x2FE6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6FCu; }
        if (ctx->pc != 0x2FE6FCu) { return; }
    }
    ctx->pc = 0x2FE6FCu;
label_2fe6fc:
    // 0x2fe6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe704: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE704u;
    SET_GPR_U32(ctx, 31, 0x2FE70Cu);
    ctx->pc = 0x2FE708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE704u;
            // 0x2fe708: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE70Cu; }
        if (ctx->pc != 0x2FE70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE70Cu; }
        if (ctx->pc != 0x2FE70Cu) { return; }
    }
    ctx->pc = 0x2FE70Cu;
label_2fe70c:
    // 0x2fe70c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe710: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE710u;
    {
        const bool branch_taken_0x2fe710 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe710) {
            ctx->pc = 0x2FE720u;
            goto label_2fe720;
        }
    }
    ctx->pc = 0x2FE718u;
    // 0x2fe718: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FE718u;
    {
        const bool branch_taken_0x2fe718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE718u;
            // 0x2fe71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe718) {
            ctx->pc = 0x2FE754u;
            goto label_2fe754;
        }
    }
    ctx->pc = 0x2FE720u;
label_2fe720:
    // 0x2fe720: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe72c: 0x24c630d8  addiu       $a2, $a2, 0x30D8
    ctx->pc = 0x2fe72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12504));
    // 0x2fe730: 0xc047c82  jal         func_11F208
    ctx->pc = 0x2FE730u;
    SET_GPR_U32(ctx, 31, 0x2FE738u);
    ctx->pc = 0x2FE734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE730u;
            // 0x2fe734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (runtime->hasFunction(0x11F208u)) {
        auto targetFn = runtime->lookupFunction(0x11F208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE738u; }
        if (ctx->pc != 0x2FE738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F208_0x11f208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE738u; }
        if (ctx->pc != 0x2FE738u) { return; }
    }
    ctx->pc = 0x2FE738u;
label_2fe738:
    // 0x2fe738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe740: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE740u;
    SET_GPR_U32(ctx, 31, 0x2FE748u);
    ctx->pc = 0x2FE744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE740u;
            // 0x2fe744: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE748u; }
        if (ctx->pc != 0x2FE748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE748u; }
        if (ctx->pc != 0x2FE748u) { return; }
    }
    ctx->pc = 0x2FE748u;
label_2fe748:
    // 0x2fe748: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2fe748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe74c: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x2fe74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2fe750: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fe750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fe754:
    // 0x2fe754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe75c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE75Cu;
            // 0x2fe760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE764u;
    // 0x2fe764: 0x0  nop
    ctx->pc = 0x2fe764u;
    // NOP
    // 0x2fe768: 0x0  nop
    ctx->pc = 0x2fe768u;
    // NOP
    // 0x2fe76c: 0x0  nop
    ctx->pc = 0x2fe76cu;
    // NOP
    ctx->pc = 0x2fe770u;
}
