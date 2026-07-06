#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00309250
// Address: 0x309250 - 0x309710
void sub_00309250_0x309250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309250_0x309250");
#endif

    switch (ctx->pc) {
        case 0x309294u: goto label_309294;
        case 0x3092d8u: goto label_3092d8;
        case 0x3092e0u: goto label_3092e0;
        case 0x3092f0u: goto label_3092f0;
        case 0x3092fcu: goto label_3092fc;
        case 0x309324u: goto label_309324;
        case 0x30932cu: goto label_30932c;
        case 0x30933cu: goto label_30933c;
        case 0x309348u: goto label_309348;
        case 0x3093a0u: goto label_3093a0;
        case 0x3093ecu: goto label_3093ec;
        case 0x30941cu: goto label_30941c;
        case 0x309440u: goto label_309440;
        case 0x309478u: goto label_309478;
        case 0x309480u: goto label_309480;
        case 0x309490u: goto label_309490;
        case 0x30949cu: goto label_30949c;
        case 0x3094c4u: goto label_3094c4;
        case 0x3094ccu: goto label_3094cc;
        case 0x3094dcu: goto label_3094dc;
        case 0x3094e8u: goto label_3094e8;
        case 0x309540u: goto label_309540;
        case 0x30958cu: goto label_30958c;
        case 0x3095bcu: goto label_3095bc;
        case 0x3095e0u: goto label_3095e0;
        case 0x309630u: goto label_309630;
        case 0x309640u: goto label_309640;
        case 0x309648u: goto label_309648;
        case 0x30965cu: goto label_30965c;
        case 0x309664u: goto label_309664;
        case 0x30966cu: goto label_30966c;
        case 0x309674u: goto label_309674;
        case 0x30967cu: goto label_30967c;
        case 0x309684u: goto label_309684;
        case 0x30968cu: goto label_30968c;
        case 0x309694u: goto label_309694;
        case 0x30969cu: goto label_30969c;
        case 0x3096a4u: goto label_3096a4;
        case 0x3096acu: goto label_3096ac;
        case 0x3096b4u: goto label_3096b4;
        case 0x3096bcu: goto label_3096bc;
        case 0x3096c4u: goto label_3096c4;
        case 0x3096ccu: goto label_3096cc;
        case 0x3096d4u: goto label_3096d4;
        case 0x3096dcu: goto label_3096dc;
        case 0x3096e4u: goto label_3096e4;
        case 0x3096ecu: goto label_3096ec;
        case 0x3096f8u: goto label_3096f8;
        case 0x309704u: goto label_309704;
        default: break;
    }

    ctx->pc = 0x309250u;

label_309250:
    // 0x309250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x309250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x309254: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x309254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x309258: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x309258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30925c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x309260: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x309260u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309264: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x309264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x309268: 0x3c1401d3  lui         $s4, 0x1D3
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)467 << 16));
    // 0x30926c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x309270: 0x26943b20  addiu       $s4, $s4, 0x3B20
    ctx->pc = 0x309270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15136));
    // 0x309274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x309274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309278: 0x3c1201d3  lui         $s2, 0x1D3
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)467 << 16));
    // 0x30927c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309284: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x309284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x309288: 0x26522da0  addiu       $s2, $s2, 0x2DA0
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11680));
    // 0x30928c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30928cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309290: 0x261021a0  addiu       $s0, $s0, 0x21A0
    ctx->pc = 0x309290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
label_309294:
    // 0x309294: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309298: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x309298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30929c: 0x8c633ba0  lw          $v1, 0x3BA0($v1)
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15264)));
    // 0x3092a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3092a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3092a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3092a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3092a8: 0x14640067  bne         $v1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x3092A8u;
    {
        const bool branch_taken_0x3092a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3092a8) {
            ctx->pc = 0x309448u;
            goto label_309448;
        }
    }
    ctx->pc = 0x3092B0u;
    // 0x3092b0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3092b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3092b4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3092b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3092b8: 0x24842140  addiu       $a0, $a0, 0x2140
    ctx->pc = 0x3092b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
    // 0x3092bc: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3092c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3092c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3092c4: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x3092c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3092c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3092c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3092ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092d0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3092D0u;
    SET_GPR_U32(ctx, 31, 0x3092D8u);
    ctx->pc = 0x3092D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092D0u;
            // 0x3092d4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092D8u; }
        if (ctx->pc != 0x3092D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092D8u; }
        if (ctx->pc != 0x3092D8u) { return; }
    }
    ctx->pc = 0x3092D8u;
label_3092d8:
    // 0x3092d8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3092D8u;
    SET_GPR_U32(ctx, 31, 0x3092E0u);
    ctx->pc = 0x3092DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092D8u;
            // 0x3092dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092E0u; }
        if (ctx->pc != 0x3092E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092E0u; }
        if (ctx->pc != 0x3092E0u) { return; }
    }
    ctx->pc = 0x3092E0u;
label_3092e0:
    // 0x3092e0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3092e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3092e4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3092e8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3092E8u;
    SET_GPR_U32(ctx, 31, 0x3092F0u);
    ctx->pc = 0x3092ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092E8u;
            // 0x3092ec: 0x24842140  addiu       $a0, $a0, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092F0u; }
        if (ctx->pc != 0x3092F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092F0u; }
        if (ctx->pc != 0x3092F0u) { return; }
    }
    ctx->pc = 0x3092F0u;
label_3092f0:
    // 0x3092f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3092f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092f4: 0xc040454  jal         func_101150
    ctx->pc = 0x3092F4u;
    SET_GPR_U32(ctx, 31, 0x3092FCu);
    ctx->pc = 0x3092F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092F4u;
            // 0x3092f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092FCu; }
        if (ctx->pc != 0x3092FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092FCu; }
        if (ctx->pc != 0x3092FCu) { return; }
    }
    ctx->pc = 0x3092FCu;
label_3092fc:
    // 0x3092fc: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309300: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x309300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x309304: 0x248420d0  addiu       $a0, $a0, 0x20D0
    ctx->pc = 0x309304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
    // 0x309308: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30930c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309318: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x309318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30931c: 0xc0405ac  jal         func_1016B0
    ctx->pc = 0x30931Cu;
    SET_GPR_U32(ctx, 31, 0x309324u);
    ctx->pc = 0x309320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30931Cu;
            // 0x309320: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1016B0u;
    if (runtime->hasFunction(0x1016B0u)) {
        auto targetFn = runtime->lookupFunction(0x1016B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309324u; }
        if (ctx->pc != 0x309324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001016B0_0x1016b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309324u; }
        if (ctx->pc != 0x309324u) { return; }
    }
    ctx->pc = 0x309324u;
label_309324:
    // 0x309324: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x309324u;
    SET_GPR_U32(ctx, 31, 0x30932Cu);
    ctx->pc = 0x309328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309324u;
            // 0x309328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30932Cu; }
        if (ctx->pc != 0x30932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30932Cu; }
        if (ctx->pc != 0x30932Cu) { return; }
    }
    ctx->pc = 0x30932Cu;
label_30932c:
    // 0x30932c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x30932cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309330: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309334: 0xc04065c  jal         func_101970
    ctx->pc = 0x309334u;
    SET_GPR_U32(ctx, 31, 0x30933Cu);
    ctx->pc = 0x309338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309334u;
            // 0x309338: 0x248420d0  addiu       $a0, $a0, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101970u;
    if (runtime->hasFunction(0x101970u)) {
        auto targetFn = runtime->lookupFunction(0x101970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30933Cu; }
        if (ctx->pc != 0x30933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101970_0x101970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30933Cu; }
        if (ctx->pc != 0x30933Cu) { return; }
    }
    ctx->pc = 0x30933Cu;
label_30933c:
    // 0x30933c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309340: 0xc040454  jal         func_101150
    ctx->pc = 0x309340u;
    SET_GPR_U32(ctx, 31, 0x309348u);
    ctx->pc = 0x309344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309340u;
            // 0x309344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309348u; }
        if (ctx->pc != 0x309348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309348u; }
        if (ctx->pc != 0x309348u) { return; }
    }
    ctx->pc = 0x309348u;
label_309348:
    // 0x309348: 0x2aa10007  slti        $at, $s5, 0x7
    ctx->pc = 0x309348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x30934c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x30934Cu;
    {
        const bool branch_taken_0x30934c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30934c) {
            ctx->pc = 0x3093F8u;
            goto label_3093f8;
        }
    }
    ctx->pc = 0x309354u;
    // 0x309354: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x309354u;
    {
        const bool branch_taken_0x309354 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x309358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309354u;
            // 0x309358: 0x131883  sra         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309354) {
            ctx->pc = 0x309364u;
            goto label_309364;
        }
    }
    ctx->pc = 0x30935Cu;
    // 0x30935c: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x30935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x309360: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x309360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_309364:
    // 0x309364: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309364u;
    {
        const bool branch_taken_0x309364 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x309368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309364u;
            // 0x309368: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309364) {
            ctx->pc = 0x309374u;
            goto label_309374;
        }
    }
    ctx->pc = 0x30936Cu;
    // 0x30936c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x309370: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x309370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_309374:
    // 0x309374: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x309378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30937c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x30937cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309380: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309384: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x309384u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x309388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30938c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30938cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309394: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x309394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309398: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309398u;
    SET_GPR_U32(ctx, 31, 0x3093A0u);
    ctx->pc = 0x30939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309398u;
            // 0x30939c: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093A0u; }
        if (ctx->pc != 0x3093A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093A0u; }
        if (ctx->pc != 0x3093A0u) { return; }
    }
    ctx->pc = 0x3093A0u;
label_3093a0:
    // 0x3093a0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3093A0u;
    {
        const bool branch_taken_0x3093a0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3093A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3093A0u;
            // 0x3093a4: 0x111883  sra         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093a0) {
            ctx->pc = 0x3093B0u;
            goto label_3093b0;
        }
    }
    ctx->pc = 0x3093A8u;
    // 0x3093a8: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x3093a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x3093ac: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x3093acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_3093b0:
    // 0x3093b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3093B0u;
    {
        const bool branch_taken_0x3093b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3093B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3093B0u;
            // 0x3093b4: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093b0) {
            ctx->pc = 0x3093C0u;
            goto label_3093c0;
        }
    }
    ctx->pc = 0x3093B8u;
    // 0x3093b8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x3093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x3093bc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3093bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_3093c0:
    // 0x3093c0: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x3093c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x3093c4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3093c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3093c8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3093c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3093cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3093ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3093d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3093d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3093d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3093d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3093d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3093dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3093e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093e4: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3093E4u;
    SET_GPR_U32(ctx, 31, 0x3093ECu);
    ctx->pc = 0x3093E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3093E4u;
            // 0x3093e8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093ECu; }
        if (ctx->pc != 0x3093ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093ECu; }
        if (ctx->pc != 0x3093ECu) { return; }
    }
    ctx->pc = 0x3093ECu;
label_3093ec:
    // 0x3093ec: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3093ECu;
    {
        const bool branch_taken_0x3093ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3093ec) {
            ctx->pc = 0x3095E0u;
            goto label_3095e0;
        }
    }
    ctx->pc = 0x3093F4u;
    // 0x3093f4: 0x0  nop
    ctx->pc = 0x3093f4u;
    // NOP
label_3093f8:
    // 0x3093f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3093f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093fc: 0x24053b80  addiu       $a1, $zero, 0x3B80
    ctx->pc = 0x3093fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15232));
    // 0x309400: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30940c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30940cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309410: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x309410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309414: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309414u;
    SET_GPR_U32(ctx, 31, 0x30941Cu);
    ctx->pc = 0x309418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309414u;
            // 0x309418: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30941Cu; }
        if (ctx->pc != 0x30941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30941Cu; }
        if (ctx->pc != 0x30941Cu) { return; }
    }
    ctx->pc = 0x30941Cu;
label_30941c:
    // 0x30941c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30941cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x309420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309424: 0x24053e9c  addiu       $a1, $zero, 0x3E9C
    ctx->pc = 0x309424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16028));
    // 0x309428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30942c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30942cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309434: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309438: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309438u;
    SET_GPR_U32(ctx, 31, 0x309440u);
    ctx->pc = 0x30943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309438u;
            // 0x30943c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309440u; }
        if (ctx->pc != 0x309440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309440u; }
        if (ctx->pc != 0x309440u) { return; }
    }
    ctx->pc = 0x309440u;
label_309440:
    // 0x309440: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x309440u;
    {
        const bool branch_taken_0x309440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309440) {
            ctx->pc = 0x3095E0u;
            goto label_3095e0;
        }
    }
    ctx->pc = 0x309448u;
label_309448:
    // 0x309448: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30944c: 0x14660064  bne         $v1, $a2, . + 4 + (0x64 << 2)
    ctx->pc = 0x30944Cu;
    {
        const bool branch_taken_0x30944c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x30944c) {
            ctx->pc = 0x3095E0u;
            goto label_3095e0;
        }
    }
    ctx->pc = 0x309454u;
    // 0x309454: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309458: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x309458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30945c: 0x24842140  addiu       $a0, $a0, 0x2140
    ctx->pc = 0x30945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
    // 0x309460: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x309464: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x309468: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30946c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30946cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309470: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309470u;
    SET_GPR_U32(ctx, 31, 0x309478u);
    ctx->pc = 0x309474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309470u;
            // 0x309474: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309478u; }
        if (ctx->pc != 0x309478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309478u; }
        if (ctx->pc != 0x309478u) { return; }
    }
    ctx->pc = 0x309478u;
label_309478:
    // 0x309478: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x309478u;
    SET_GPR_U32(ctx, 31, 0x309480u);
    ctx->pc = 0x30947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309478u;
            // 0x30947c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309480u; }
        if (ctx->pc != 0x309480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309480u; }
        if (ctx->pc != 0x309480u) { return; }
    }
    ctx->pc = 0x309480u;
label_309480:
    // 0x309480: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x309480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309484: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309488: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309488u;
    SET_GPR_U32(ctx, 31, 0x309490u);
    ctx->pc = 0x30948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309488u;
            // 0x30948c: 0x24842140  addiu       $a0, $a0, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309490u; }
        if (ctx->pc != 0x309490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309490u; }
        if (ctx->pc != 0x309490u) { return; }
    }
    ctx->pc = 0x309490u;
label_309490:
    // 0x309490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x309490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309494: 0xc040454  jal         func_101150
    ctx->pc = 0x309494u;
    SET_GPR_U32(ctx, 31, 0x30949Cu);
    ctx->pc = 0x309498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309494u;
            // 0x309498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30949Cu; }
        if (ctx->pc != 0x30949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30949Cu; }
        if (ctx->pc != 0x30949Cu) { return; }
    }
    ctx->pc = 0x30949Cu;
label_30949c:
    // 0x30949c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30949cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3094a0: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3094a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3094a4: 0x248420d0  addiu       $a0, $a0, 0x20D0
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
    // 0x3094a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3094a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3094acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3094b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3094b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094b8: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3094b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3094bc: 0xc0405ac  jal         func_1016B0
    ctx->pc = 0x3094BCu;
    SET_GPR_U32(ctx, 31, 0x3094C4u);
    ctx->pc = 0x3094C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094BCu;
            // 0x3094c0: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1016B0u;
    if (runtime->hasFunction(0x1016B0u)) {
        auto targetFn = runtime->lookupFunction(0x1016B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094C4u; }
        if (ctx->pc != 0x3094C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001016B0_0x1016b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094C4u; }
        if (ctx->pc != 0x3094C4u) { return; }
    }
    ctx->pc = 0x3094C4u;
label_3094c4:
    // 0x3094c4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3094C4u;
    SET_GPR_U32(ctx, 31, 0x3094CCu);
    ctx->pc = 0x3094C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094C4u;
            // 0x3094c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094CCu; }
        if (ctx->pc != 0x3094CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094CCu; }
        if (ctx->pc != 0x3094CCu) { return; }
    }
    ctx->pc = 0x3094CCu;
label_3094cc:
    // 0x3094cc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3094ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3094d0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3094d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3094d4: 0xc04065c  jal         func_101970
    ctx->pc = 0x3094D4u;
    SET_GPR_U32(ctx, 31, 0x3094DCu);
    ctx->pc = 0x3094D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094D4u;
            // 0x3094d8: 0x248420d0  addiu       $a0, $a0, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101970u;
    if (runtime->hasFunction(0x101970u)) {
        auto targetFn = runtime->lookupFunction(0x101970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094DCu; }
        if (ctx->pc != 0x3094DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101970_0x101970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094DCu; }
        if (ctx->pc != 0x3094DCu) { return; }
    }
    ctx->pc = 0x3094DCu;
label_3094dc:
    // 0x3094dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3094dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094e0: 0xc040454  jal         func_101150
    ctx->pc = 0x3094E0u;
    SET_GPR_U32(ctx, 31, 0x3094E8u);
    ctx->pc = 0x3094E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094E0u;
            // 0x3094e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094E8u; }
        if (ctx->pc != 0x3094E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094E8u; }
        if (ctx->pc != 0x3094E8u) { return; }
    }
    ctx->pc = 0x3094E8u;
label_3094e8:
    // 0x3094e8: 0x2aa10007  slti        $at, $s5, 0x7
    ctx->pc = 0x3094e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3094ec: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x3094ECu;
    {
        const bool branch_taken_0x3094ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094ec) {
            ctx->pc = 0x309598u;
            goto label_309598;
        }
    }
    ctx->pc = 0x3094F4u;
    // 0x3094f4: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3094F4u;
    {
        const bool branch_taken_0x3094f4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3094F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3094F4u;
            // 0x3094f8: 0x131883  sra         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094f4) {
            ctx->pc = 0x309504u;
            goto label_309504;
        }
    }
    ctx->pc = 0x3094FCu;
    // 0x3094fc: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x309500: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_309504:
    // 0x309504: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309504u;
    {
        const bool branch_taken_0x309504 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x309508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309504u;
            // 0x309508: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309504) {
            ctx->pc = 0x309514u;
            goto label_309514;
        }
    }
    ctx->pc = 0x30950Cu;
    // 0x30950c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x309510: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x309510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_309514:
    // 0x309514: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x309514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x309518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30951c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x30951cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309520: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309524: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x309524u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x309528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30952c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30952cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309534: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x309534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309538: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309538u;
    SET_GPR_U32(ctx, 31, 0x309540u);
    ctx->pc = 0x30953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309538u;
            // 0x30953c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309540u; }
        if (ctx->pc != 0x309540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309540u; }
        if (ctx->pc != 0x309540u) { return; }
    }
    ctx->pc = 0x309540u;
label_309540:
    // 0x309540: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309540u;
    {
        const bool branch_taken_0x309540 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x309544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309540u;
            // 0x309544: 0x111883  sra         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309540) {
            ctx->pc = 0x309550u;
            goto label_309550;
        }
    }
    ctx->pc = 0x309548u;
    // 0x309548: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x309548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x30954c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x30954cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_309550:
    // 0x309550: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309550u;
    {
        const bool branch_taken_0x309550 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x309554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309550u;
            // 0x309554: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309550) {
            ctx->pc = 0x309560u;
            goto label_309560;
        }
    }
    ctx->pc = 0x309558u;
    // 0x309558: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x309558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30955c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30955cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_309560:
    // 0x309560: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x309560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x309564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309568: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x309568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30956c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30956cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309570: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x309570u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x309574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30957c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30957cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309580: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x309580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x309584: 0xc040532  jal         func_1014C8
    ctx->pc = 0x309584u;
    SET_GPR_U32(ctx, 31, 0x30958Cu);
    ctx->pc = 0x309588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309584u;
            // 0x309588: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30958Cu; }
        if (ctx->pc != 0x30958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30958Cu; }
        if (ctx->pc != 0x30958Cu) { return; }
    }
    ctx->pc = 0x30958Cu;
label_30958c:
    // 0x30958c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30958Cu;
    {
        const bool branch_taken_0x30958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30958c) {
            ctx->pc = 0x3095E0u;
            goto label_3095e0;
        }
    }
    ctx->pc = 0x309594u;
    // 0x309594: 0x0  nop
    ctx->pc = 0x309594u;
    // NOP
label_309598:
    // 0x309598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30959c: 0x24053b80  addiu       $a1, $zero, 0x3B80
    ctx->pc = 0x30959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15232));
    // 0x3095a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3095a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3095a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3095a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3095a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3095acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095b0: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3095b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3095b4: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3095B4u;
    SET_GPR_U32(ctx, 31, 0x3095BCu);
    ctx->pc = 0x3095B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3095B4u;
            // 0x3095b8: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095BCu; }
        if (ctx->pc != 0x3095BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095BCu; }
        if (ctx->pc != 0x3095BCu) { return; }
    }
    ctx->pc = 0x3095BCu;
label_3095bc:
    // 0x3095bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3095bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095c0: 0x24053e9c  addiu       $a1, $zero, 0x3E9C
    ctx->pc = 0x3095c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16028));
    // 0x3095c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3095c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3095c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3095c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3095ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3095d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095d4: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3095d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3095d8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3095D8u;
    SET_GPR_U32(ctx, 31, 0x3095E0u);
    ctx->pc = 0x3095DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3095D8u;
            // 0x3095dc: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095E0u; }
        if (ctx->pc != 0x3095E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095E0u; }
        if (ctx->pc != 0x3095E0u) { return; }
    }
    ctx->pc = 0x3095E0u;
label_3095e0:
    // 0x3095e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3095e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3095e4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x3095e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3095e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3095e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3095ec: 0x2aa30020  slti        $v1, $s5, 0x20
    ctx->pc = 0x3095ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3095f0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3095f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3095f4: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x3095f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3095f8: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x3095f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x3095fc: 0x1460ff25  bnez        $v1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x3095FCu;
    {
        const bool branch_taken_0x3095fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3095FCu;
            // 0x309600: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095fc) {
            ctx->pc = 0x309294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309294;
        }
    }
    ctx->pc = 0x309604u;
    // 0x309604: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x309604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309608: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x309608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30960c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30960cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309610: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x309610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x309614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x309618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30961c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30961cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309620: 0x3e00008  jr          $ra
    ctx->pc = 0x309620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309620u;
            // 0x309624: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309628u;
    // 0x309628: 0x0  nop
    ctx->pc = 0x309628u;
    // NOP
    // 0x30962c: 0x0  nop
    ctx->pc = 0x30962cu;
    // NOP
label_309630:
    // 0x309630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309638: 0xc0c1ea4  jal         func_307A90
    ctx->pc = 0x309638u;
    SET_GPR_U32(ctx, 31, 0x309640u);
    ctx->pc = 0x307A90u;
    if (runtime->hasFunction(0x307A90u)) {
        auto targetFn = runtime->lookupFunction(0x307A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309640u; }
        if (ctx->pc != 0x309640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307A90_0x307a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309640u; }
        if (ctx->pc != 0x309640u) { return; }
    }
    ctx->pc = 0x309640u;
label_309640:
    // 0x309640: 0xc0c1ee4  jal         func_307B90
    ctx->pc = 0x309640u;
    SET_GPR_U32(ctx, 31, 0x309648u);
    ctx->pc = 0x307B90u;
    if (runtime->hasFunction(0x307B90u)) {
        auto targetFn = runtime->lookupFunction(0x307B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309648u; }
        if (ctx->pc != 0x309648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307B90_0x307b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309648u; }
        if (ctx->pc != 0x309648u) { return; }
    }
    ctx->pc = 0x309648u;
label_309648:
    // 0x309648: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30964c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x30964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x309650: 0x8c421e50  lw          $v0, 0x1E50($v0)
    ctx->pc = 0x309650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7760)));
    // 0x309654: 0xc0c1f18  jal         func_307C60
    ctx->pc = 0x309654u;
    SET_GPR_U32(ctx, 31, 0x30965Cu);
    ctx->pc = 0x309658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309654u;
            // 0x309658: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307C60u;
    if (runtime->hasFunction(0x307C60u)) {
        auto targetFn = runtime->lookupFunction(0x307C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30965Cu; }
        if (ctx->pc != 0x30965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307C60_0x307c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30965Cu; }
        if (ctx->pc != 0x30965Cu) { return; }
    }
    ctx->pc = 0x30965Cu;
label_30965c:
    // 0x30965c: 0xc0c1fc8  jal         func_307F20
    ctx->pc = 0x30965Cu;
    SET_GPR_U32(ctx, 31, 0x309664u);
    ctx->pc = 0x309660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30965Cu;
            // 0x309660: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307F20u;
    if (runtime->hasFunction(0x307F20u)) {
        auto targetFn = runtime->lookupFunction(0x307F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309664u; }
        if (ctx->pc != 0x309664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307F20_0x307f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309664u; }
        if (ctx->pc != 0x309664u) { return; }
    }
    ctx->pc = 0x309664u;
label_309664:
    // 0x309664: 0xc0c1ff0  jal         func_307FC0
    ctx->pc = 0x309664u;
    SET_GPR_U32(ctx, 31, 0x30966Cu);
    ctx->pc = 0x309668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309664u;
            // 0x309668: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307FC0u;
    if (runtime->hasFunction(0x307FC0u)) {
        auto targetFn = runtime->lookupFunction(0x307FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30966Cu; }
        if (ctx->pc != 0x30966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307FC0_0x307fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30966Cu; }
        if (ctx->pc != 0x30966Cu) { return; }
    }
    ctx->pc = 0x30966Cu;
label_30966c:
    // 0x30966c: 0xc0c2028  jal         func_3080A0
    ctx->pc = 0x30966Cu;
    SET_GPR_U32(ctx, 31, 0x309674u);
    ctx->pc = 0x309670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30966Cu;
            // 0x309670: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3080A0u;
    if (runtime->hasFunction(0x3080A0u)) {
        auto targetFn = runtime->lookupFunction(0x3080A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309674u; }
        if (ctx->pc != 0x309674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003080A0_0x3080a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309674u; }
        if (ctx->pc != 0x309674u) { return; }
    }
    ctx->pc = 0x309674u;
label_309674:
    // 0x309674: 0xc0c2070  jal         func_3081C0
    ctx->pc = 0x309674u;
    SET_GPR_U32(ctx, 31, 0x30967Cu);
    ctx->pc = 0x309678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309674u;
            // 0x309678: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3081C0u;
    if (runtime->hasFunction(0x3081C0u)) {
        auto targetFn = runtime->lookupFunction(0x3081C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30967Cu; }
        if (ctx->pc != 0x30967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003081C0_0x3081c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30967Cu; }
        if (ctx->pc != 0x30967Cu) { return; }
    }
    ctx->pc = 0x30967Cu;
label_30967c:
    // 0x30967c: 0xc0c209c  jal         func_308270
    ctx->pc = 0x30967Cu;
    SET_GPR_U32(ctx, 31, 0x309684u);
    ctx->pc = 0x309680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30967Cu;
            // 0x309680: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308270u;
    if (runtime->hasFunction(0x308270u)) {
        auto targetFn = runtime->lookupFunction(0x308270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309684u; }
        if (ctx->pc != 0x309684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308270_0x308270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309684u; }
        if (ctx->pc != 0x309684u) { return; }
    }
    ctx->pc = 0x309684u;
label_309684:
    // 0x309684: 0xc0c20e8  jal         func_3083A0
    ctx->pc = 0x309684u;
    SET_GPR_U32(ctx, 31, 0x30968Cu);
    ctx->pc = 0x309688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309684u;
            // 0x309688: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3083A0u;
    if (runtime->hasFunction(0x3083A0u)) {
        auto targetFn = runtime->lookupFunction(0x3083A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30968Cu; }
        if (ctx->pc != 0x30968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003083A0_0x3083a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30968Cu; }
        if (ctx->pc != 0x30968Cu) { return; }
    }
    ctx->pc = 0x30968Cu;
label_30968c:
    // 0x30968c: 0xc0c2120  jal         func_308480
    ctx->pc = 0x30968Cu;
    SET_GPR_U32(ctx, 31, 0x309694u);
    ctx->pc = 0x309690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30968Cu;
            // 0x309690: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308480u;
    if (runtime->hasFunction(0x308480u)) {
        auto targetFn = runtime->lookupFunction(0x308480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309694u; }
        if (ctx->pc != 0x309694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308480_0x308480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309694u; }
        if (ctx->pc != 0x309694u) { return; }
    }
    ctx->pc = 0x309694u;
label_309694:
    // 0x309694: 0xc0c243c  jal         func_3090F0
    ctx->pc = 0x309694u;
    SET_GPR_U32(ctx, 31, 0x30969Cu);
    ctx->pc = 0x309698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309694u;
            // 0x309698: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3090F0u;
    if (runtime->hasFunction(0x3090F0u)) {
        auto targetFn = runtime->lookupFunction(0x3090F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30969Cu; }
        if (ctx->pc != 0x30969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003090F0_0x3090f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30969Cu; }
        if (ctx->pc != 0x30969Cu) { return; }
    }
    ctx->pc = 0x30969Cu;
label_30969c:
    // 0x30969c: 0xc0c2148  jal         func_308520
    ctx->pc = 0x30969Cu;
    SET_GPR_U32(ctx, 31, 0x3096A4u);
    ctx->pc = 0x3096A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30969Cu;
            // 0x3096a0: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308520u;
    if (runtime->hasFunction(0x308520u)) {
        auto targetFn = runtime->lookupFunction(0x308520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096A4u; }
        if (ctx->pc != 0x3096A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308520_0x308520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096A4u; }
        if (ctx->pc != 0x3096A4u) { return; }
    }
    ctx->pc = 0x3096A4u;
label_3096a4:
    // 0x3096a4: 0xc0c21b4  jal         func_3086D0
    ctx->pc = 0x3096A4u;
    SET_GPR_U32(ctx, 31, 0x3096ACu);
    ctx->pc = 0x3086D0u;
    if (runtime->hasFunction(0x3086D0u)) {
        auto targetFn = runtime->lookupFunction(0x3086D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096ACu; }
        if (ctx->pc != 0x3096ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003086D0_0x3086d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096ACu; }
        if (ctx->pc != 0x3096ACu) { return; }
    }
    ctx->pc = 0x3096ACu;
label_3096ac:
    // 0x3096ac: 0xc0c2228  jal         func_3088A0
    ctx->pc = 0x3096ACu;
    SET_GPR_U32(ctx, 31, 0x3096B4u);
    ctx->pc = 0x3088A0u;
    if (runtime->hasFunction(0x3088A0u)) {
        auto targetFn = runtime->lookupFunction(0x3088A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096B4u; }
        if (ctx->pc != 0x3096B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003088A0_0x3088a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096B4u; }
        if (ctx->pc != 0x3096B4u) { return; }
    }
    ctx->pc = 0x3096B4u;
label_3096b4:
    // 0x3096b4: 0xc0c2260  jal         func_308980
    ctx->pc = 0x3096B4u;
    SET_GPR_U32(ctx, 31, 0x3096BCu);
    ctx->pc = 0x308980u;
    if (runtime->hasFunction(0x308980u)) {
        auto targetFn = runtime->lookupFunction(0x308980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096BCu; }
        if (ctx->pc != 0x3096BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308980_0x308980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096BCu; }
        if (ctx->pc != 0x3096BCu) { return; }
    }
    ctx->pc = 0x3096BCu;
label_3096bc:
    // 0x3096bc: 0xc0c2274  jal         func_3089D0
    ctx->pc = 0x3096BCu;
    SET_GPR_U32(ctx, 31, 0x3096C4u);
    ctx->pc = 0x3089D0u;
    if (runtime->hasFunction(0x3089D0u)) {
        auto targetFn = runtime->lookupFunction(0x3089D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096C4u; }
        if (ctx->pc != 0x3096C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003089D0_0x3089d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096C4u; }
        if (ctx->pc != 0x3096C4u) { return; }
    }
    ctx->pc = 0x3096C4u;
label_3096c4:
    // 0x3096c4: 0xc0c2288  jal         func_308A20
    ctx->pc = 0x3096C4u;
    SET_GPR_U32(ctx, 31, 0x3096CCu);
    ctx->pc = 0x308A20u;
    if (runtime->hasFunction(0x308A20u)) {
        auto targetFn = runtime->lookupFunction(0x308A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096CCu; }
        if (ctx->pc != 0x3096CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308A20_0x308a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096CCu; }
        if (ctx->pc != 0x3096CCu) { return; }
    }
    ctx->pc = 0x3096CCu;
label_3096cc:
    // 0x3096cc: 0xc0c22a0  jal         func_308A80
    ctx->pc = 0x3096CCu;
    SET_GPR_U32(ctx, 31, 0x3096D4u);
    ctx->pc = 0x308A80u;
    if (runtime->hasFunction(0x308A80u)) {
        auto targetFn = runtime->lookupFunction(0x308A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096D4u; }
        if (ctx->pc != 0x3096D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308A80_0x308a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096D4u; }
        if (ctx->pc != 0x3096D4u) { return; }
    }
    ctx->pc = 0x3096D4u;
label_3096d4:
    // 0x3096d4: 0xc0c22b4  jal         func_308AD0
    ctx->pc = 0x3096D4u;
    SET_GPR_U32(ctx, 31, 0x3096DCu);
    ctx->pc = 0x308AD0u;
    if (runtime->hasFunction(0x308AD0u)) {
        auto targetFn = runtime->lookupFunction(0x308AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096DCu; }
        if (ctx->pc != 0x3096DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308AD0_0x308ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096DCu; }
        if (ctx->pc != 0x3096DCu) { return; }
    }
    ctx->pc = 0x3096DCu;
label_3096dc:
    // 0x3096dc: 0xc0c2494  jal         func_309250
    ctx->pc = 0x3096DCu;
    SET_GPR_U32(ctx, 31, 0x3096E4u);
    ctx->pc = 0x309250u;
    goto label_309250;
    ctx->pc = 0x3096E4u;
label_3096e4:
    // 0x3096e4: 0xc0c22dc  jal         func_308B70
    ctx->pc = 0x3096E4u;
    SET_GPR_U32(ctx, 31, 0x3096ECu);
    ctx->pc = 0x308B70u;
    if (runtime->hasFunction(0x308B70u)) {
        auto targetFn = runtime->lookupFunction(0x308B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096ECu; }
        if (ctx->pc != 0x3096ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308B70_0x308b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096ECu; }
        if (ctx->pc != 0x3096ECu) { return; }
    }
    ctx->pc = 0x3096ECu;
label_3096ec:
    // 0x3096ec: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3096ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3096f0: 0xc0c2b54  jal         func_30AD50
    ctx->pc = 0x3096F0u;
    SET_GPR_U32(ctx, 31, 0x3096F8u);
    ctx->pc = 0x3096F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096F0u;
            // 0x3096f4: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AD50u;
    if (runtime->hasFunction(0x30AD50u)) {
        auto targetFn = runtime->lookupFunction(0x30AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096F8u; }
        if (ctx->pc != 0x3096F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AD50_0x30ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096F8u; }
        if (ctx->pc != 0x3096F8u) { return; }
    }
    ctx->pc = 0x3096F8u;
label_3096f8:
    // 0x3096f8: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3096f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3096fc: 0xc0c2bdc  jal         func_30AF70
    ctx->pc = 0x3096FCu;
    SET_GPR_U32(ctx, 31, 0x309704u);
    ctx->pc = 0x309700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096FCu;
            // 0x309700: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309704u; }
        if (ctx->pc != 0x309704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AF70_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309704u; }
        if (ctx->pc != 0x309704u) { return; }
    }
    ctx->pc = 0x309704u;
label_309704:
    // 0x309704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309708: 0x3e00008  jr          $ra
    ctx->pc = 0x309708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309708u;
            // 0x30970c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309710u;
    ctx->pc = 0x309710u;
}
