#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AE748
// Address: 0x2ae748 - 0x2ae808
void sub_002AE748_0x2ae748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE748_0x2ae748");
#endif

    switch (ctx->pc) {
        case 0x2ae748u: goto label_2ae748;
        case 0x2ae74cu: goto label_2ae74c;
        case 0x2ae750u: goto label_2ae750;
        case 0x2ae754u: goto label_2ae754;
        case 0x2ae758u: goto label_2ae758;
        case 0x2ae75cu: goto label_2ae75c;
        case 0x2ae760u: goto label_2ae760;
        case 0x2ae764u: goto label_2ae764;
        case 0x2ae768u: goto label_2ae768;
        case 0x2ae76cu: goto label_2ae76c;
        case 0x2ae770u: goto label_2ae770;
        case 0x2ae774u: goto label_2ae774;
        case 0x2ae778u: goto label_2ae778;
        case 0x2ae77cu: goto label_2ae77c;
        case 0x2ae780u: goto label_2ae780;
        case 0x2ae784u: goto label_2ae784;
        case 0x2ae788u: goto label_2ae788;
        case 0x2ae78cu: goto label_2ae78c;
        case 0x2ae790u: goto label_2ae790;
        case 0x2ae794u: goto label_2ae794;
        case 0x2ae798u: goto label_2ae798;
        case 0x2ae79cu: goto label_2ae79c;
        case 0x2ae7a0u: goto label_2ae7a0;
        case 0x2ae7a4u: goto label_2ae7a4;
        case 0x2ae7a8u: goto label_2ae7a8;
        case 0x2ae7acu: goto label_2ae7ac;
        case 0x2ae7b0u: goto label_2ae7b0;
        case 0x2ae7b4u: goto label_2ae7b4;
        case 0x2ae7b8u: goto label_2ae7b8;
        case 0x2ae7bcu: goto label_2ae7bc;
        case 0x2ae7c0u: goto label_2ae7c0;
        case 0x2ae7c4u: goto label_2ae7c4;
        case 0x2ae7c8u: goto label_2ae7c8;
        case 0x2ae7ccu: goto label_2ae7cc;
        case 0x2ae7d0u: goto label_2ae7d0;
        case 0x2ae7d4u: goto label_2ae7d4;
        case 0x2ae7d8u: goto label_2ae7d8;
        case 0x2ae7dcu: goto label_2ae7dc;
        case 0x2ae7e0u: goto label_2ae7e0;
        case 0x2ae7e4u: goto label_2ae7e4;
        case 0x2ae7e8u: goto label_2ae7e8;
        case 0x2ae7ecu: goto label_2ae7ec;
        case 0x2ae7f0u: goto label_2ae7f0;
        case 0x2ae7f4u: goto label_2ae7f4;
        case 0x2ae7f8u: goto label_2ae7f8;
        case 0x2ae7fcu: goto label_2ae7fc;
        case 0x2ae800u: goto label_2ae800;
        case 0x2ae804u: goto label_2ae804;
        default: break;
    }

    ctx->pc = 0x2ae748u;

label_2ae748:
    // 0x2ae748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ae74c:
    // 0x2ae74c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ae750:
    // 0x2ae750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ae754:
    // 0x2ae754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ae758:
    // 0x2ae758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ae75c:
    // 0x2ae75c: 0xc0a8bf6  jal         func_2A2FD8
label_2ae760:
    if (ctx->pc == 0x2AE760u) {
        ctx->pc = 0x2AE760u;
            // 0x2ae760: 0x24040198  addiu       $a0, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->pc = 0x2AE764u;
        goto label_2ae764;
    }
    ctx->pc = 0x2AE75Cu;
    SET_GPR_U32(ctx, 31, 0x2AE764u);
    ctx->pc = 0x2AE760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE75Cu;
            // 0x2ae760: 0x24040198  addiu       $a0, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE764u; }
        if (ctx->pc != 0x2AE764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE764u; }
        if (ctx->pc != 0x2AE764u) { return; }
    }
    ctx->pc = 0x2AE764u;
label_2ae764:
    // 0x2ae764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae768:
    // 0x2ae768: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2ae76c:
    if (ctx->pc == 0x2AE76Cu) {
        ctx->pc = 0x2AE76Cu;
            // 0x2ae76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE770u;
        goto label_2ae770;
    }
    ctx->pc = 0x2AE768u;
    {
        const bool branch_taken_0x2ae768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE768u;
            // 0x2ae76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae768) {
            ctx->pc = 0x2AE78Cu;
            goto label_2ae78c;
        }
    }
    ctx->pc = 0x2AE770u;
label_2ae770:
    // 0x2ae770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae774:
    // 0x2ae774: 0xc049cb6  jal         func_1272D8
label_2ae778:
    if (ctx->pc == 0x2AE778u) {
        ctx->pc = 0x2AE778u;
            // 0x2ae778: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->pc = 0x2AE77Cu;
        goto label_2ae77c;
    }
    ctx->pc = 0x2AE774u;
    SET_GPR_U32(ctx, 31, 0x2AE77Cu);
    ctx->pc = 0x2AE778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE774u;
            // 0x2ae778: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE77Cu; }
        if (ctx->pc != 0x2AE77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE77Cu; }
        if (ctx->pc != 0x2AE77Cu) { return; }
    }
    ctx->pc = 0x2AE77Cu;
label_2ae77c:
    // 0x2ae77c: 0xc0a5b7e  jal         func_296DF8
label_2ae780:
    if (ctx->pc == 0x2AE780u) {
        ctx->pc = 0x2AE784u;
        goto label_2ae784;
    }
    ctx->pc = 0x2AE77Cu;
    SET_GPR_U32(ctx, 31, 0x2AE784u);
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE784u; }
        if (ctx->pc != 0x2AE784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE784u; }
        if (ctx->pc != 0x2AE784u) { return; }
    }
    ctx->pc = 0x2AE784u;
label_2ae784:
    // 0x2ae784: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ae788:
    if (ctx->pc == 0x2AE788u) {
        ctx->pc = 0x2AE788u;
            // 0x2ae788: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->pc = 0x2AE78Cu;
        goto label_2ae78c;
    }
    ctx->pc = 0x2AE784u;
    {
        const bool branch_taken_0x2ae784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE784u;
            // 0x2ae788: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae784) {
            ctx->pc = 0x2AE7ACu;
            goto label_2ae7ac;
        }
    }
    ctx->pc = 0x2AE78Cu;
label_2ae78c:
    // 0x2ae78c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ae78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ae790:
    // 0x2ae790: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x2ae790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_2ae794:
    // 0x2ae794: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2ae798:
    // 0x2ae798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae79c:
    // 0x2ae79c: 0xc0a5648  jal         func_295920
label_2ae7a0:
    if (ctx->pc == 0x2AE7A0u) {
        ctx->pc = 0x2AE7A0u;
            // 0x2ae7a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7A4u;
        goto label_2ae7a4;
    }
    ctx->pc = 0x2AE79Cu;
    SET_GPR_U32(ctx, 31, 0x2AE7A4u);
    ctx->pc = 0x2AE7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE79Cu;
            // 0x2ae7a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7A4u; }
        if (ctx->pc != 0x2AE7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7A4u; }
        if (ctx->pc != 0x2AE7A4u) { return; }
    }
    ctx->pc = 0x2AE7A4u;
label_2ae7a4:
    // 0x2ae7a4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ae7a8:
    if (ctx->pc == 0x2AE7A8u) {
        ctx->pc = 0x2AE7A8u;
            // 0x2ae7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7ACu;
        goto label_2ae7ac;
    }
    ctx->pc = 0x2AE7A4u;
    {
        const bool branch_taken_0x2ae7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7A4u;
            // 0x2ae7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7a4) {
            ctx->pc = 0x2AE7F4u;
            goto label_2ae7f4;
        }
    }
    ctx->pc = 0x2AE7ACu;
label_2ae7ac:
    // 0x2ae7ac: 0xc0a5b7e  jal         func_296DF8
label_2ae7b0:
    if (ctx->pc == 0x2AE7B0u) {
        ctx->pc = 0x2AE7B4u;
        goto label_2ae7b4;
    }
    ctx->pc = 0x2AE7ACu;
    SET_GPR_U32(ctx, 31, 0x2AE7B4u);
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7B4u; }
        if (ctx->pc != 0x2AE7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7B4u; }
        if (ctx->pc != 0x2AE7B4u) { return; }
    }
    ctx->pc = 0x2AE7B4u;
label_2ae7b4:
    // 0x2ae7b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ae7b8:
    if (ctx->pc == 0x2AE7B8u) {
        ctx->pc = 0x2AE7B8u;
            // 0x2ae7b8: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->pc = 0x2AE7BCu;
        goto label_2ae7bc;
    }
    ctx->pc = 0x2AE7B4u;
    {
        const bool branch_taken_0x2ae7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7B4u;
            // 0x2ae7b8: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7b4) {
            ctx->pc = 0x2AE7D8u;
            goto label_2ae7d8;
        }
    }
    ctx->pc = 0x2AE7BCu;
label_2ae7bc:
    // 0x2ae7bc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x2ae7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_2ae7c0:
    // 0x2ae7c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ae7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ae7c4:
    // 0x2ae7c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ae7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ae7c8:
    // 0x2ae7c8: 0x60f809  jalr        $v1
label_2ae7cc:
    if (ctx->pc == 0x2AE7CCu) {
        ctx->pc = 0x2AE7CCu;
            // 0x2ae7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7D0u;
        goto label_2ae7d0;
    }
    ctx->pc = 0x2AE7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AE7D0u);
        ctx->pc = 0x2AE7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7C8u;
            // 0x2ae7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AE7D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7D0u; }
            if (ctx->pc != 0x2AE7D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AE7D0u;
label_2ae7d0:
    // 0x2ae7d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ae7d4:
    if (ctx->pc == 0x2AE7D4u) {
        ctx->pc = 0x2AE7D4u;
            // 0x2ae7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AE7D8u;
        goto label_2ae7d8;
    }
    ctx->pc = 0x2AE7D0u;
    {
        const bool branch_taken_0x2ae7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7D0u;
            // 0x2ae7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7d0) {
            ctx->pc = 0x2AE7F4u;
            goto label_2ae7f4;
        }
    }
    ctx->pc = 0x2AE7D8u;
label_2ae7d8:
    // 0x2ae7d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ae7dc:
    // 0x2ae7dc: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x2ae7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_2ae7e0:
    // 0x2ae7e0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ae7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2ae7e4:
    // 0x2ae7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7e8:
    // 0x2ae7e8: 0xc0a5648  jal         func_295920
label_2ae7ec:
    if (ctx->pc == 0x2AE7ECu) {
        ctx->pc = 0x2AE7ECu;
            // 0x2ae7ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7F0u;
        goto label_2ae7f0;
    }
    ctx->pc = 0x2AE7E8u;
    SET_GPR_U32(ctx, 31, 0x2AE7F0u);
    ctx->pc = 0x2AE7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7E8u;
            // 0x2ae7ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7F0u; }
        if (ctx->pc != 0x2AE7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7F0u; }
        if (ctx->pc != 0x2AE7F0u) { return; }
    }
    ctx->pc = 0x2AE7F0u;
label_2ae7f0:
    // 0x2ae7f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ae7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7f4:
    // 0x2ae7f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae7f8:
    // 0x2ae7f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae7fc:
    // 0x2ae7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ae800:
    // 0x2ae800: 0x3e00008  jr          $ra
label_2ae804:
    if (ctx->pc == 0x2AE804u) {
        ctx->pc = 0x2AE804u;
            // 0x2ae804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AE808u;
        goto label_fallthrough_0x2ae800;
    }
    ctx->pc = 0x2AE800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE800u;
            // 0x2ae804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ae800:
    ctx->pc = 0x2AE808u;
    ctx->pc = 0x2ae808u;
}
