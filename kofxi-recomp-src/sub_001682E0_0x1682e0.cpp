#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001682E0
// Address: 0x1682e0 - 0x168420
void sub_001682E0_0x1682e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001682E0_0x1682e0");
#endif

    switch (ctx->pc) {
        case 0x168338u: goto label_168338;
        case 0x168344u: goto label_168344;
        case 0x16834cu: goto label_16834c;
        case 0x168360u: goto label_168360;
        default: break;
    }

    ctx->pc = 0x1682e0u;

    // 0x1682e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1682e4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1682e8: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1682e8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1682ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1682ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1682f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1682f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1682f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1682f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1682f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1682f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1682fc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1682fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168300: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x168300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168304: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x168304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16830c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16830cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168318: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x168318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16831c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x16831Cu;
    {
        const bool branch_taken_0x16831c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x168320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16831Cu;
        // 0x168320: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16831c) {
            ctx->pc = 0x168328u;
            goto label_168328;
        }
    }
    ctx->pc = 0x168324u;
    // 0x168324: 0x1cd  break       0, 7
    ctx->pc = 0x168324u;
    runtime->handleBreak(rdram, ctx);
label_168328:
    // 0x168328: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x168328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16832c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16832cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168330: 0xb812  mflo        $s7
    ctx->pc = 0x168330u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x168334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_168338:
    // 0x168338: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16833c: 0xc05c750  jal         func_171D40
    ctx->pc = 0x16833Cu;
    SET_GPR_U32(ctx, 31, 0x168344u);
    ctx->pc = 0x168340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16833Cu;
    // 0x168340: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D40u, 0x16833Cu, 0x168344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168344u;
label_168344:
    // 0x168344: 0xc05a0a0  jal         func_168280
    ctx->pc = 0x168344u;
    SET_GPR_U32(ctx, 31, 0x16834Cu);
    ctx->pc = 0x168348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168344u;
    // 0x168348: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168280u, 0x168344u, 0x16834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16834Cu;
label_16834c:
    // 0x16834c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x16834cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168350: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168354: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x168354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168358: 0xc05c750  jal         func_171D40
    ctx->pc = 0x168358u;
    SET_GPR_U32(ctx, 31, 0x168360u);
    ctx->pc = 0x16835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168358u;
    // 0x16835c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D40u, 0x168358u, 0x168360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168360u;
label_168360:
    // 0x168360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168364: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168368: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x168368u;
    {
        const bool branch_taken_0x168368 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168368u;
        // 0x16836c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168368) {
            ctx->pc = 0x168388u;
            goto label_168388;
        }
    }
    ctx->pc = 0x168370u;
    // 0x168370: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x168370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x168374: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x168374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x168378: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168378u;
    {
        const bool branch_taken_0x168378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x168378) {
            ctx->pc = 0x1683A0u;
            goto label_1683a0;
        }
    }
    ctx->pc = 0x168380u;
    // 0x168380: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168380u;
    {
        const bool branch_taken_0x168380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168380u;
        // 0x168384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168380) {
            ctx->pc = 0x1683A0u;
            goto label_1683a0;
        }
    }
    ctx->pc = 0x168388u;
label_168388:
    // 0x168388: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x168388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x16838c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x16838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x168390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168390u;
    {
        const bool branch_taken_0x168390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168390) {
            ctx->pc = 0x1683A0u;
            goto label_1683a0;
        }
    }
    ctx->pc = 0x168398u;
    // 0x168398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16839c: 0x0  nop
    ctx->pc = 0x16839cu;
    // NOP
label_1683a0:
    // 0x1683a0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1683a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1683a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1683A4u;
    {
        const bool branch_taken_0x1683a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1683a4) {
            ctx->pc = 0x1683B4u;
            goto label_1683b4;
        }
    }
    ctx->pc = 0x1683ACu;
    // 0x1683ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1683ACu;
    {
        const bool branch_taken_0x1683ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683ACu;
        // 0x1683b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683ac) {
            ctx->pc = 0x1683ECu;
            goto label_1683ec;
        }
    }
    ctx->pc = 0x1683B4u;
label_1683b4:
    // 0x1683b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1683B4u;
    {
        const bool branch_taken_0x1683b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1683b4) {
            ctx->pc = 0x1683D8u;
            goto label_1683d8;
        }
    }
    ctx->pc = 0x1683BCu;
    // 0x1683bc: 0x2f21023  subu        $v0, $s7, $s2
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x1683c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1683C0u;
    {
        const bool branch_taken_0x1683c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1683c0) {
            ctx->pc = 0x1683C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1683C0u;
            // 0x1683c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1683D0u;
            goto label_1683d0;
        }
    }
    ctx->pc = 0x1683C8u;
    // 0x1683c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1683C8u;
    {
        const bool branch_taken_0x1683c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683C8u;
        // 0x1683cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683c8) {
            ctx->pc = 0x1683ECu;
            goto label_1683ec;
        }
    }
    ctx->pc = 0x1683D0u;
label_1683d0:
    // 0x1683d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1683d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d4: 0x0  nop
    ctx->pc = 0x1683d4u;
    // NOP
label_1683d8:
    // 0x1683d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1683d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1683dc: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x1683dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1683e0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1683E0u;
    {
        const bool branch_taken_0x1683e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1683e0) {
            ctx->pc = 0x1683E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1683E0u;
            // 0x1683e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168338;
        }
    }
    ctx->pc = 0x1683E8u;
    // 0x1683e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1683e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1683ec:
    // 0x1683ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1683ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1683f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1683f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1683f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1683f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1683f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1683f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1683fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1683fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16840c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168410: 0x3e00008  jr          $ra
    ctx->pc = 0x168410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168410u;
        // 0x168414: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168418u;
    // 0x168418: 0x0  nop
    ctx->pc = 0x168418u;
    // NOP
    // 0x16841c: 0x0  nop
    ctx->pc = 0x16841cu;
    // NOP
}
