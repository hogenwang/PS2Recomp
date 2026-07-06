#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE770
// Address: 0x2fe770 - 0x2fea80
void sub_002FE770_0x2fe770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE770_0x2fe770");
#endif

    switch (ctx->pc) {
        case 0x2fe79cu: goto label_2fe79c;
        case 0x2fe7acu: goto label_2fe7ac;
        case 0x2fe7d8u: goto label_2fe7d8;
        case 0x2fe7e8u: goto label_2fe7e8;
        case 0x2fe810u: goto label_2fe810;
        case 0x2fe820u: goto label_2fe820;
        case 0x2fe84cu: goto label_2fe84c;
        case 0x2fe85cu: goto label_2fe85c;
        case 0x2fe898u: goto label_2fe898;
        case 0x2fe8a8u: goto label_2fe8a8;
        case 0x2fe8d0u: goto label_2fe8d0;
        case 0x2fe8e0u: goto label_2fe8e0;
        case 0x2fe90cu: goto label_2fe90c;
        case 0x2fe91cu: goto label_2fe91c;
        case 0x2fe958u: goto label_2fe958;
        case 0x2fe968u: goto label_2fe968;
        case 0x2fe994u: goto label_2fe994;
        case 0x2fe9acu: goto label_2fe9ac;
        case 0x2fe9bcu: goto label_2fe9bc;
        case 0x2fe9ecu: goto label_2fe9ec;
        case 0x2fe9fcu: goto label_2fe9fc;
        case 0x2fea38u: goto label_2fea38;
        case 0x2fea48u: goto label_2fea48;
        case 0x2fea64u: goto label_2fea64;
        default: break;
    }

    ctx->pc = 0x2fe770u;

    // 0x2fe770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe774: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe77c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe788: 0x24c63070  addiu       $a2, $a2, 0x3070
    ctx->pc = 0x2fe788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12400));
    // 0x2fe78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe794: 0xc047c82  jal         func_11F208
    ctx->pc = 0x2FE794u;
    SET_GPR_U32(ctx, 31, 0x2FE79Cu);
    ctx->pc = 0x2FE798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE794u;
            // 0x2fe798: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (runtime->hasFunction(0x11F208u)) {
        auto targetFn = runtime->lookupFunction(0x11F208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE79Cu; }
        if (ctx->pc != 0x2FE79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F208_0x11f208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE79Cu; }
        if (ctx->pc != 0x2FE79Cu) { return; }
    }
    ctx->pc = 0x2FE79Cu;
label_2fe79c:
    // 0x2fe79c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7a4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE7A4u;
    SET_GPR_U32(ctx, 31, 0x2FE7ACu);
    ctx->pc = 0x2FE7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7A4u;
            // 0x2fe7a8: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7ACu; }
        if (ctx->pc != 0x2FE7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7ACu; }
        if (ctx->pc != 0x2FE7ACu) { return; }
    }
    ctx->pc = 0x2FE7ACu;
label_2fe7ac:
    // 0x2fe7ac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe7b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE7B0u;
    {
        const bool branch_taken_0x2fe7b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe7b0) {
            ctx->pc = 0x2FE7C0u;
            goto label_2fe7c0;
        }
    }
    ctx->pc = 0x2FE7B8u;
    // 0x2fe7b8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2FE7B8u;
    {
        const bool branch_taken_0x2fe7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7B8u;
            // 0x2fe7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7b8) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE7C0u;
label_2fe7c0:
    // 0x2fe7c0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe7c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7cc: 0x24c630c8  addiu       $a2, $a2, 0x30C8
    ctx->pc = 0x2fe7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12488));
    // 0x2fe7d0: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE7D0u;
    SET_GPR_U32(ctx, 31, 0x2FE7D8u);
    ctx->pc = 0x2FE7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7D0u;
            // 0x2fe7d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7D8u; }
        if (ctx->pc != 0x2FE7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7D8u; }
        if (ctx->pc != 0x2FE7D8u) { return; }
    }
    ctx->pc = 0x2FE7D8u;
label_2fe7d8:
    // 0x2fe7d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7e0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE7E0u;
    SET_GPR_U32(ctx, 31, 0x2FE7E8u);
    ctx->pc = 0x2FE7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7E0u;
            // 0x2fe7e4: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7E8u; }
        if (ctx->pc != 0x2FE7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7E8u; }
        if (ctx->pc != 0x2FE7E8u) { return; }
    }
    ctx->pc = 0x2FE7E8u;
label_2fe7e8:
    // 0x2fe7e8: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x2fe7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe7ec: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE7ECu;
    {
        const bool branch_taken_0x2fe7ec = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe7ec) {
            ctx->pc = 0x2FE7FCu;
            goto label_2fe7fc;
        }
    }
    ctx->pc = 0x2FE7F4u;
    // 0x2fe7f4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2FE7F4u;
    {
        const bool branch_taken_0x2fe7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7F4u;
            // 0x2fe7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7f4) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE7FCu;
label_2fe7fc:
    // 0x2fe7fc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe804: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe808: 0xc047aa2  jal         func_11EA88
    ctx->pc = 0x2FE808u;
    SET_GPR_U32(ctx, 31, 0x2FE810u);
    ctx->pc = 0x2FE80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE808u;
            // 0x2fe80c: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA88u;
    if (runtime->hasFunction(0x11EA88u)) {
        auto targetFn = runtime->lookupFunction(0x11EA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE810u; }
        if (ctx->pc != 0x2FE810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EA88_0x11ea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE810u; }
        if (ctx->pc != 0x2FE810u) { return; }
    }
    ctx->pc = 0x2FE810u;
label_2fe810:
    // 0x2fe810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe818: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE818u;
    SET_GPR_U32(ctx, 31, 0x2FE820u);
    ctx->pc = 0x2FE81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE818u;
            // 0x2fe81c: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE820u; }
        if (ctx->pc != 0x2FE820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE820u; }
        if (ctx->pc != 0x2FE820u) { return; }
    }
    ctx->pc = 0x2FE820u;
label_2fe820:
    // 0x2fe820: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2fe820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe824: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE824u;
    {
        const bool branch_taken_0x2fe824 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fe824) {
            ctx->pc = 0x2FE828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE824u;
            // 0x2fe828: 0x240203c4  addiu       $v0, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE834u;
            goto label_2fe834;
        }
    }
    ctx->pc = 0x2FE82Cu;
    // 0x2fe82c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe82cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe830: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x2fe830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_2fe834:
    // 0x2fe834: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE834u;
    {
        const bool branch_taken_0x2fe834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe834) {
            ctx->pc = 0x2FE838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE834u;
            // 0x2fe838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE844u;
            goto label_2fe844;
        }
    }
    ctx->pc = 0x2FE83Cu;
    // 0x2fe83c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe844:
    // 0x2fe844: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE844u;
    SET_GPR_U32(ctx, 31, 0x2FE84Cu);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE84Cu; }
        if (ctx->pc != 0x2FE84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE84Cu; }
        if (ctx->pc != 0x2FE84Cu) { return; }
    }
    ctx->pc = 0x2FE84Cu;
label_2fe84c:
    // 0x2fe84c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe854: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE854u;
    SET_GPR_U32(ctx, 31, 0x2FE85Cu);
    ctx->pc = 0x2FE858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE854u;
            // 0x2fe858: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE85Cu; }
        if (ctx->pc != 0x2FE85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE85Cu; }
        if (ctx->pc != 0x2FE85Cu) { return; }
    }
    ctx->pc = 0x2FE85Cu;
label_2fe85c:
    // 0x2fe85c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2fe85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe860: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE860u;
    {
        const bool branch_taken_0x2fe860 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe860) {
            ctx->pc = 0x2FE870u;
            goto label_2fe870;
        }
    }
    ctx->pc = 0x2FE868u;
    // 0x2fe868: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2FE868u;
    {
        const bool branch_taken_0x2fe868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE868u;
            // 0x2fe86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe868) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE870u;
label_2fe870:
    // 0x2fe870: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE870u;
    {
        const bool branch_taken_0x2fe870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe870) {
            ctx->pc = 0x2FE880u;
            goto label_2fe880;
        }
    }
    ctx->pc = 0x2FE878u;
    // 0x2fe878: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2FE878u;
    {
        const bool branch_taken_0x2fe878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE878u;
            // 0x2fe87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe878) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE880u;
label_2fe880:
    // 0x2fe880: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe88c: 0x24c630b0  addiu       $a2, $a2, 0x30B0
    ctx->pc = 0x2fe88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12464));
    // 0x2fe890: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE890u;
    SET_GPR_U32(ctx, 31, 0x2FE898u);
    ctx->pc = 0x2FE894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE890u;
            // 0x2fe894: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE898u; }
        if (ctx->pc != 0x2FE898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE898u; }
        if (ctx->pc != 0x2FE898u) { return; }
    }
    ctx->pc = 0x2FE898u;
label_2fe898:
    // 0x2fe898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe89c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8a0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE8A0u;
    SET_GPR_U32(ctx, 31, 0x2FE8A8u);
    ctx->pc = 0x2FE8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8A0u;
            // 0x2fe8a4: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8A8u; }
        if (ctx->pc != 0x2FE8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8A8u; }
        if (ctx->pc != 0x2FE8A8u) { return; }
    }
    ctx->pc = 0x2FE8A8u;
label_2fe8a8:
    // 0x2fe8a8: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x2fe8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe8ac: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE8ACu;
    {
        const bool branch_taken_0x2fe8ac = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe8ac) {
            ctx->pc = 0x2FE8BCu;
            goto label_2fe8bc;
        }
    }
    ctx->pc = 0x2FE8B4u;
    // 0x2fe8b4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2FE8B4u;
    {
        const bool branch_taken_0x2fe8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8B4u;
            // 0x2fe8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8b4) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE8BCu;
label_2fe8bc:
    // 0x2fe8bc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8c4: 0x8c450c48  lw          $a1, 0xC48($v0)
    ctx->pc = 0x2fe8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3144)));
    // 0x2fe8c8: 0xc047aa2  jal         func_11EA88
    ctx->pc = 0x2FE8C8u;
    SET_GPR_U32(ctx, 31, 0x2FE8D0u);
    ctx->pc = 0x2FE8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8C8u;
            // 0x2fe8cc: 0x3406c5f8  ori         $a2, $zero, 0xC5F8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50680);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA88u;
    if (runtime->hasFunction(0x11EA88u)) {
        auto targetFn = runtime->lookupFunction(0x11EA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8D0u; }
        if (ctx->pc != 0x2FE8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EA88_0x11ea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8D0u; }
        if (ctx->pc != 0x2FE8D0u) { return; }
    }
    ctx->pc = 0x2FE8D0u;
label_2fe8d0:
    // 0x2fe8d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8d8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE8D8u;
    SET_GPR_U32(ctx, 31, 0x2FE8E0u);
    ctx->pc = 0x2FE8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8D8u;
            // 0x2fe8dc: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8E0u; }
        if (ctx->pc != 0x2FE8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8E0u; }
        if (ctx->pc != 0x2FE8E0u) { return; }
    }
    ctx->pc = 0x2FE8E0u;
label_2fe8e0:
    // 0x2fe8e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe8e4: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE8E4u;
    {
        const bool branch_taken_0x2fe8e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fe8e4) {
            ctx->pc = 0x2FE8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8E4u;
            // 0x2fe8e8: 0x3402c5f8  ori         $v0, $zero, 0xC5F8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50680);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE8F4u;
            goto label_2fe8f4;
        }
    }
    ctx->pc = 0x2FE8ECu;
    // 0x2fe8ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe8f0: 0x3402c5f8  ori         $v0, $zero, 0xC5F8
    ctx->pc = 0x2fe8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50680);
label_2fe8f4:
    // 0x2fe8f4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE8F4u;
    {
        const bool branch_taken_0x2fe8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe8f4) {
            ctx->pc = 0x2FE8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8F4u;
            // 0x2fe8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE904u;
            goto label_2fe904;
        }
    }
    ctx->pc = 0x2FE8FCu;
    // 0x2fe8fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe904:
    // 0x2fe904: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE904u;
    SET_GPR_U32(ctx, 31, 0x2FE90Cu);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE90Cu; }
        if (ctx->pc != 0x2FE90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE90Cu; }
        if (ctx->pc != 0x2FE90Cu) { return; }
    }
    ctx->pc = 0x2FE90Cu;
label_2fe90c:
    // 0x2fe90c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe914: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE914u;
    SET_GPR_U32(ctx, 31, 0x2FE91Cu);
    ctx->pc = 0x2FE918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE914u;
            // 0x2fe918: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE91Cu; }
        if (ctx->pc != 0x2FE91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE91Cu; }
        if (ctx->pc != 0x2FE91Cu) { return; }
    }
    ctx->pc = 0x2FE91Cu;
label_2fe91c:
    // 0x2fe91c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2fe91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe920: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE920u;
    {
        const bool branch_taken_0x2fe920 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe920) {
            ctx->pc = 0x2FE930u;
            goto label_2fe930;
        }
    }
    ctx->pc = 0x2FE928u;
    // 0x2fe928: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2FE928u;
    {
        const bool branch_taken_0x2fe928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE928u;
            // 0x2fe92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe928) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE930u;
label_2fe930:
    // 0x2fe930: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE930u;
    {
        const bool branch_taken_0x2fe930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe930) {
            ctx->pc = 0x2FE940u;
            goto label_2fe940;
        }
    }
    ctx->pc = 0x2FE938u;
    // 0x2fe938: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2FE938u;
    {
        const bool branch_taken_0x2fe938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE938u;
            // 0x2fe93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe938) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE940u;
label_2fe940:
    // 0x2fe940: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fe940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fe944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe94c: 0x24c63090  addiu       $a2, $a2, 0x3090
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12432));
    // 0x2fe950: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x2FE950u;
    SET_GPR_U32(ctx, 31, 0x2FE958u);
    ctx->pc = 0x2FE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE950u;
            // 0x2fe954: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (runtime->hasFunction(0x11E6D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE958u; }
        if (ctx->pc != 0x2FE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6D8_0x11e6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE958u; }
        if (ctx->pc != 0x2FE958u) { return; }
    }
    ctx->pc = 0x2FE958u;
label_2fe958:
    // 0x2fe958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe960: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE960u;
    SET_GPR_U32(ctx, 31, 0x2FE968u);
    ctx->pc = 0x2FE964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE960u;
            // 0x2fe964: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE968u; }
        if (ctx->pc != 0x2FE968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE968u; }
        if (ctx->pc != 0x2FE968u) { return; }
    }
    ctx->pc = 0x2FE968u;
label_2fe968:
    // 0x2fe968: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x2fe968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe96c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE96Cu;
    {
        const bool branch_taken_0x2fe96c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fe96c) {
            ctx->pc = 0x2FE97Cu;
            goto label_2fe97c;
        }
    }
    ctx->pc = 0x2FE974u;
    // 0x2fe974: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2FE974u;
    {
        const bool branch_taken_0x2fe974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE974u;
            // 0x2fe978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe974) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FE97Cu;
label_2fe97c:
    // 0x2fe97c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe984: 0x8c440c50  lw          $a0, 0xC50($v0)
    ctx->pc = 0x2fe984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fe988: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fe988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fe98c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2FE98Cu;
    SET_GPR_U32(ctx, 31, 0x2FE994u);
    ctx->pc = 0x2FE990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE98Cu;
            // 0x2fe990: 0x344695b8  ori         $a2, $v0, 0x95B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE994u; }
        if (ctx->pc != 0x2FE994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE994u; }
        if (ctx->pc != 0x2FE994u) { return; }
    }
    ctx->pc = 0x2FE994u;
label_2fe994:
    // 0x2fe994: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fe998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe99c: 0x8c450c50  lw          $a1, 0xC50($v0)
    ctx->pc = 0x2fe99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fe9a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fe9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fe9a4: 0xc047aa2  jal         func_11EA88
    ctx->pc = 0x2FE9A4u;
    SET_GPR_U32(ctx, 31, 0x2FE9ACu);
    ctx->pc = 0x2FE9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9A4u;
            // 0x2fe9a8: 0x344695b8  ori         $a2, $v0, 0x95B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA88u;
    if (runtime->hasFunction(0x11EA88u)) {
        auto targetFn = runtime->lookupFunction(0x11EA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ACu; }
        if (ctx->pc != 0x2FE9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EA88_0x11ea88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ACu; }
        if (ctx->pc != 0x2FE9ACu) { return; }
    }
    ctx->pc = 0x2FE9ACu;
label_2fe9ac:
    // 0x2fe9ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9b4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE9B4u;
    SET_GPR_U32(ctx, 31, 0x2FE9BCu);
    ctx->pc = 0x2FE9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9B4u;
            // 0x2fe9b8: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9BCu; }
        if (ctx->pc != 0x2FE9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9BCu; }
        if (ctx->pc != 0x2FE9BCu) { return; }
    }
    ctx->pc = 0x2FE9BCu;
label_2fe9bc:
    // 0x2fe9bc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2fe9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fe9c0: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE9C0u;
    {
        const bool branch_taken_0x2fe9c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fe9c0) {
            ctx->pc = 0x2FE9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9C0u;
            // 0x2fe9c4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE9D0u;
            goto label_2fe9d0;
        }
    }
    ctx->pc = 0x2FE9C8u;
    // 0x2fe9c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe9cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fe9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2fe9d0:
    // 0x2fe9d0: 0x344295b8  ori         $v0, $v0, 0x95B8
    ctx->pc = 0x2fe9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
    // 0x2fe9d4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE9D4u;
    {
        const bool branch_taken_0x2fe9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe9d4) {
            ctx->pc = 0x2FE9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9D4u;
            // 0x2fe9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE9E4u;
            goto label_2fe9e4;
        }
    }
    ctx->pc = 0x2FE9DCu;
    // 0x2fe9dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe9e4:
    // 0x2fe9e4: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x2FE9E4u;
    SET_GPR_U32(ctx, 31, 0x2FE9ECu);
    ctx->pc = 0x11E838u;
    if (runtime->hasFunction(0x11E838u)) {
        auto targetFn = runtime->lookupFunction(0x11E838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ECu; }
        if (ctx->pc != 0x2FE9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E838_0x11e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ECu; }
        if (ctx->pc != 0x2FE9ECu) { return; }
    }
    ctx->pc = 0x2FE9ECu;
label_2fe9ec:
    // 0x2fe9ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fe9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9f4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FE9F4u;
    SET_GPR_U32(ctx, 31, 0x2FE9FCu);
    ctx->pc = 0x2FE9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9F4u;
            // 0x2fe9f8: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9FCu; }
        if (ctx->pc != 0x2FE9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9FCu; }
        if (ctx->pc != 0x2FE9FCu) { return; }
    }
    ctx->pc = 0x2FE9FCu;
label_2fe9fc:
    // 0x2fe9fc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2fe9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fea00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEA00u;
    {
        const bool branch_taken_0x2fea00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fea00) {
            ctx->pc = 0x2FEA10u;
            goto label_2fea10;
        }
    }
    ctx->pc = 0x2FEA08u;
    // 0x2fea08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2FEA08u;
    {
        const bool branch_taken_0x2fea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA08u;
            // 0x2fea0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea08) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FEA10u;
label_2fea10:
    // 0x2fea10: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEA10u;
    {
        const bool branch_taken_0x2fea10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fea10) {
            ctx->pc = 0x2FEA20u;
            goto label_2fea20;
        }
    }
    ctx->pc = 0x2FEA18u;
    // 0x2fea18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2FEA18u;
    {
        const bool branch_taken_0x2fea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA18u;
            // 0x2fea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea18) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FEA20u;
label_2fea20:
    // 0x2fea20: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fea24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea2c: 0x24c630d8  addiu       $a2, $a2, 0x30D8
    ctx->pc = 0x2fea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12504));
    // 0x2fea30: 0xc047c82  jal         func_11F208
    ctx->pc = 0x2FEA30u;
    SET_GPR_U32(ctx, 31, 0x2FEA38u);
    ctx->pc = 0x2FEA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA30u;
            // 0x2fea34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (runtime->hasFunction(0x11F208u)) {
        auto targetFn = runtime->lookupFunction(0x11F208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA38u; }
        if (ctx->pc != 0x2FEA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F208_0x11f208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA38u; }
        if (ctx->pc != 0x2FEA38u) { return; }
    }
    ctx->pc = 0x2FEA38u;
label_2fea38:
    // 0x2fea38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fea3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea40: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEA40u;
    SET_GPR_U32(ctx, 31, 0x2FEA48u);
    ctx->pc = 0x2FEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA40u;
            // 0x2fea44: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA48u; }
        if (ctx->pc != 0x2FEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA48u; }
        if (ctx->pc != 0x2FEA48u) { return; }
    }
    ctx->pc = 0x2FEA48u;
label_2fea48:
    // 0x2fea48: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2fea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2fea4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEA4Cu;
    {
        const bool branch_taken_0x2fea4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fea4c) {
            ctx->pc = 0x2FEA5Cu;
            goto label_2fea5c;
        }
    }
    ctx->pc = 0x2FEA54u;
    // 0x2fea54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEA54u;
    {
        const bool branch_taken_0x2fea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA54u;
            // 0x2fea58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea54) {
            ctx->pc = 0x2FEA64u;
            goto label_2fea64;
        }
    }
    ctx->pc = 0x2FEA5Cu;
label_2fea5c:
    // 0x2fea5c: 0xc0bf5d8  jal         func_2FD760
    ctx->pc = 0x2FEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA64u);
    ctx->pc = 0x2FD760u;
    if (runtime->hasFunction(0x2FD760u)) {
        auto targetFn = runtime->lookupFunction(0x2FD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA64u; }
        if (ctx->pc != 0x2FEA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FD760_0x2fd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA64u; }
        if (ctx->pc != 0x2FEA64u) { return; }
    }
    ctx->pc = 0x2FEA64u;
label_2fea64:
    // 0x2fea64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fea68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fea68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fea6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fea6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fea70: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA70u;
            // 0x2fea74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FEA78u;
    // 0x2fea78: 0x0  nop
    ctx->pc = 0x2fea78u;
    // NOP
    // 0x2fea7c: 0x0  nop
    ctx->pc = 0x2fea7cu;
    // NOP
    ctx->pc = 0x2fea80u;
}
