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

// Function: sub_00288808
// Address: 0x288808 - 0x288b80
void sub_00288808_0x288808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288808_0x288808");
#endif

    switch (ctx->pc) {
        case 0x288878u: goto label_288878;
        case 0x28889cu: goto label_28889c;
        case 0x2888acu: goto label_2888ac;
        case 0x2888bcu: goto label_2888bc;
        case 0x2888d0u: goto label_2888d0;
        case 0x28894cu: goto label_28894c;
        case 0x28895cu: goto label_28895c;
        case 0x28896cu: goto label_28896c;
        case 0x288980u: goto label_288980;
        case 0x2889fcu: goto label_2889fc;
        case 0x288a0cu: goto label_288a0c;
        case 0x288a1cu: goto label_288a1c;
        case 0x288a30u: goto label_288a30;
        case 0x288a70u: goto label_288a70;
        case 0x288abcu: goto label_288abc;
        case 0x288accu: goto label_288acc;
        case 0x288adcu: goto label_288adc;
        case 0x288af0u: goto label_288af0;
        case 0x288b38u: goto label_288b38;
        default: break;
    }

    ctx->pc = 0x288808u;

    // 0x288808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x288808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28880c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x28880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x288810: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x288810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x288814: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x288814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288818: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x288818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28881c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28881cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288820: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x288820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x288824: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x288824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288828: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x288828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x28882c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x288830: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x288830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x288834: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x288834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x288838: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x288838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28883c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x288840: 0x1ec00003  bgtz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x288840u;
    {
        const bool branch_taken_0x288840 = (GPR_S32(ctx, 22) > 0);
        ctx->pc = 0x288844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288840u;
        // 0x288844: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288840) {
            ctx->pc = 0x288850u;
            goto label_288850;
        }
    }
    ctx->pc = 0x288848u;
    // 0x288848: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x288848u;
    {
        const bool branch_taken_0x288848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288848u;
        // 0x28884c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288848) {
            ctx->pc = 0x288B4Cu;
            goto label_288b4c;
        }
    }
    ctx->pc = 0x288850u;
label_288850:
    // 0x288850: 0x7183e  dsrl32      $v1, $a3, 0
    ctx->pc = 0x288850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x288854: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x288854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x288858: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x288858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28885c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28885cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x288860: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x288860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x288864: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x288864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x288868: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x288868u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x28886c: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x28886cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x288870: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x288870u;
    {
        const bool branch_taken_0x288870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288870u;
        // 0x288874: 0xffa70008  sd          $a3, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288870) {
            ctx->pc = 0x288A98u;
            goto label_288a98;
        }
    }
    ctx->pc = 0x288878u;
label_288878:
    // 0x288878: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28887c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x288880: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x288880u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288884: 0xdc530008  ld          $s3, 0x8($v0)
    ctx->pc = 0x288884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288888: 0x2779024  and         $s2, $s3, $s7
    ctx->pc = 0x288888u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 23));
    // 0x28888c: 0x13103e  dsrl32      $v0, $s3, 0
    ctx->pc = 0x28888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x288890: 0x579824  and         $s3, $v0, $s7
    ctx->pc = 0x288890u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x288894: 0xc048082  jal         func_120208
    ctx->pc = 0x288894u;
    SET_GPR_U32(ctx, 31, 0x28889Cu);
    ctx->pc = 0x288898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288894u;
    // 0x288898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288894u, 0x28889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28889Cu;
label_28889c:
    // 0x28889c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x28889cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2888a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2888a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888a4: 0xc048082  jal         func_120208
    ctx->pc = 0x2888A4u;
    SET_GPR_U32(ctx, 31, 0x2888ACu);
    ctx->pc = 0x2888A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888A4u;
    // 0x2888a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2888A4u, 0x2888ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888ACu;
label_2888ac:
    // 0x2888ac: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2888acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2888b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2888b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888b4: 0xc048082  jal         func_120208
    ctx->pc = 0x2888B4u;
    SET_GPR_U32(ctx, 31, 0x2888BCu);
    ctx->pc = 0x2888B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888B4u;
    // 0x2888b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2888B4u, 0x2888BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888BCu;
label_2888bc:
    // 0x2888bc: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2888bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2888c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2888c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2888c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888c8: 0xc048082  jal         func_120208
    ctx->pc = 0x2888C8u;
    SET_GPR_U32(ctx, 31, 0x2888D0u);
    ctx->pc = 0x2888CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888C8u;
    // 0x2888cc: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2888C8u, 0x2888D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888D0u;
label_2888d0:
    // 0x2888d0: 0x214282b  sltu        $a1, $s0, $s4
    ctx->pc = 0x2888d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2888d4: 0x2171824  and         $v1, $s0, $s7
    ctx->pc = 0x2888d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x2888d8: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x2888d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2888dc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2888e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2888e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2888e4: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x2888e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x2888e8: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x2888e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x2888ec: 0x235902d  daddu       $s2, $s1, $s5
    ctx->pc = 0x2888ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
    // 0x2888f0: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x2888f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2888f4: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x2888f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2888f8: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x2888f8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2888fc: 0xdfd50008  ld          $s5, 0x8($fp)
    ctx->pc = 0x2888fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x288900: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x288900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288904: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288908: 0x234882b  sltu        $s1, $s1, $s4
    ctx->pc = 0x288908u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x28890c: 0x255902d  daddu       $s2, $s2, $s5
    ctx->pc = 0x28890cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 21));
    // 0x288910: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288914: 0x83982d  daddu       $s3, $a0, $v1
    ctx->pc = 0x288914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288918: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x288918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x28891c: 0x262a82d  daddu       $s5, $s3, $v0
    ctx->pc = 0x28891cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288920: 0x12c00089  beqz        $s6, . + 4 + (0x89 << 2)
    ctx->pc = 0x288920u;
    {
        const bool branch_taken_0x288920 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x288924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288920u;
        // 0x288924: 0xffd20008  sd          $s2, 0x8($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288920) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x288928u;
    // 0x288928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x288928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28892c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x28892cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x288930: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x288930u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288934: 0xdc530010  ld          $s3, 0x10($v0)
    ctx->pc = 0x288934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x288938: 0x2779024  and         $s2, $s3, $s7
    ctx->pc = 0x288938u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 23));
    // 0x28893c: 0x13103e  dsrl32      $v0, $s3, 0
    ctx->pc = 0x28893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x288940: 0x579824  and         $s3, $v0, $s7
    ctx->pc = 0x288940u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x288944: 0xc048082  jal         func_120208
    ctx->pc = 0x288944u;
    SET_GPR_U32(ctx, 31, 0x28894Cu);
    ctx->pc = 0x288948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288944u;
    // 0x288948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288944u, 0x28894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28894Cu;
label_28894c:
    // 0x28894c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x28894cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288954: 0xc048082  jal         func_120208
    ctx->pc = 0x288954u;
    SET_GPR_U32(ctx, 31, 0x28895Cu);
    ctx->pc = 0x288958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288954u;
    // 0x288958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288954u, 0x28895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28895Cu;
label_28895c:
    // 0x28895c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x28895cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288960: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288964: 0xc048082  jal         func_120208
    ctx->pc = 0x288964u;
    SET_GPR_U32(ctx, 31, 0x28896Cu);
    ctx->pc = 0x288968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288964u;
    // 0x288968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288964u, 0x28896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28896Cu;
label_28896c:
    // 0x28896c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x28896cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288970: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288978: 0xc048082  jal         func_120208
    ctx->pc = 0x288978u;
    SET_GPR_U32(ctx, 31, 0x288980u);
    ctx->pc = 0x28897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288978u;
    // 0x28897c: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288978u, 0x288980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288980u;
label_288980:
    // 0x288980: 0x214282b  sltu        $a1, $s0, $s4
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288984: 0x2171824  and         $v1, $s0, $s7
    ctx->pc = 0x288984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288988: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x288988u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28898c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x28898cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288990: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288994: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288998: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x288998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x28899c: 0x235902d  daddu       $s2, $s1, $s5
    ctx->pc = 0x28899cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
    // 0x2889a0: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x2889a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2889a4: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x2889a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2889a8: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x2889a8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2889ac: 0xdfd50010  ld          $s5, 0x10($fp)
    ctx->pc = 0x2889acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2889b0: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x2889b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x2889b4: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x2889b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2889b8: 0x234882b  sltu        $s1, $s1, $s4
    ctx->pc = 0x2889b8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2889bc: 0x255902d  daddu       $s2, $s2, $s5
    ctx->pc = 0x2889bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 21));
    // 0x2889c0: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x2889c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2889c4: 0x83982d  daddu       $s3, $a0, $v1
    ctx->pc = 0x2889c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2889c8: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2889cc: 0x262a82d  daddu       $s5, $s3, $v0
    ctx->pc = 0x2889ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2889d0: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
    ctx->pc = 0x2889D0u;
    {
        const bool branch_taken_0x2889d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889D0u;
        // 0x2889d4: 0xffd20010  sd          $s2, 0x10($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889d0) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x2889D8u;
    // 0x2889d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2889d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2889dc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2889dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2889e0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2889e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2889e4: 0xdc530018  ld          $s3, 0x18($v0)
    ctx->pc = 0x2889e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2889e8: 0x2779024  and         $s2, $s3, $s7
    ctx->pc = 0x2889e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 23));
    // 0x2889ec: 0x13103e  dsrl32      $v0, $s3, 0
    ctx->pc = 0x2889ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2889f0: 0x579824  and         $s3, $v0, $s7
    ctx->pc = 0x2889f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2889f4: 0xc048082  jal         func_120208
    ctx->pc = 0x2889F4u;
    SET_GPR_U32(ctx, 31, 0x2889FCu);
    ctx->pc = 0x2889F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889F4u;
    // 0x2889f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2889F4u, 0x2889FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889FCu;
label_2889fc:
    // 0x2889fc: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x2889fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a04: 0xc048082  jal         func_120208
    ctx->pc = 0x288A04u;
    SET_GPR_U32(ctx, 31, 0x288A0Cu);
    ctx->pc = 0x288A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A04u;
    // 0x288a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288A04u, 0x288A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A0Cu;
label_288a0c:
    // 0x288a0c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x288a0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288a10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a14: 0xc048082  jal         func_120208
    ctx->pc = 0x288A14u;
    SET_GPR_U32(ctx, 31, 0x288A1Cu);
    ctx->pc = 0x288A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A14u;
    // 0x288a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288A14u, 0x288A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A1Cu;
label_288a1c:
    // 0x288a1c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x288a1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288a20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a28: 0xc048082  jal         func_120208
    ctx->pc = 0x288A28u;
    SET_GPR_U32(ctx, 31, 0x288A30u);
    ctx->pc = 0x288A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A28u;
    // 0x288a2c: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288A28u, 0x288A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A30u;
label_288a30:
    // 0x288a30: 0x214282b  sltu        $a1, $s0, $s4
    ctx->pc = 0x288a30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288a34: 0x2171824  and         $v1, $s0, $s7
    ctx->pc = 0x288a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288a38: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x288a38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288a3c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288a3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288a40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288a44: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288a48: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x288a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x288a4c: 0x235902d  daddu       $s2, $s1, $s5
    ctx->pc = 0x288a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
    // 0x288a50: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288a54: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x288a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x288a58: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288a58u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288a5c: 0xdfd50018  ld          $s5, 0x18($fp)
    ctx->pc = 0x288a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x288a60: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x288a60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288a64: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288a68: 0x234882b  sltu        $s1, $s1, $s4
    ctx->pc = 0x288a68u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288a6c: 0x255902d  daddu       $s2, $s2, $s5
    ctx->pc = 0x288a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 21));
label_288a70:
    // 0x288a70: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288a74: 0x83982d  daddu       $s3, $a0, $v1
    ctx->pc = 0x288a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288a78: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x288a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x288a7c: 0x262a82d  daddu       $s5, $s3, $v0
    ctx->pc = 0x288a7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288a80: 0x12c00031  beqz        $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x288A80u;
    {
        const bool branch_taken_0x288a80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A80u;
        // 0x288a84: 0xffd20018  sd          $s2, 0x18($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a80) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x288A88u;
    // 0x288a88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x288a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a8c: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x288a8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x288a90: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x288a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x288a94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x288a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_288a98:
    // 0x288a98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a9c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x288a9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x288aa0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x288aa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288aa4: 0xdc730000  ld          $s3, 0x0($v1)
    ctx->pc = 0x288aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288aa8: 0x2779024  and         $s2, $s3, $s7
    ctx->pc = 0x288aa8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 23));
    // 0x288aac: 0x13103e  dsrl32      $v0, $s3, 0
    ctx->pc = 0x288aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x288ab0: 0x579824  and         $s3, $v0, $s7
    ctx->pc = 0x288ab0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x288ab4: 0xc048082  jal         func_120208
    ctx->pc = 0x288AB4u;
    SET_GPR_U32(ctx, 31, 0x288ABCu);
    ctx->pc = 0x288AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AB4u;
    // 0x288ab8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288AB4u, 0x288ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288ABCu;
label_288abc:
    // 0x288abc: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x288abcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ac4: 0xc048082  jal         func_120208
    ctx->pc = 0x288AC4u;
    SET_GPR_U32(ctx, 31, 0x288ACCu);
    ctx->pc = 0x288AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AC4u;
    // 0x288ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288AC4u, 0x288ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288ACCu;
label_288acc:
    // 0x288acc: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x288accu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ad4: 0xc048082  jal         func_120208
    ctx->pc = 0x288AD4u;
    SET_GPR_U32(ctx, 31, 0x288ADCu);
    ctx->pc = 0x288AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AD4u;
    // 0x288ad8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288AD4u, 0x288ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288ADCu;
label_288adc:
    // 0x288adc: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x288adcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288ae0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288ae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ae8: 0xc048082  jal         func_120208
    ctx->pc = 0x288AE8u;
    SET_GPR_U32(ctx, 31, 0x288AF0u);
    ctx->pc = 0x288AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AE8u;
    // 0x288aec: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288AE8u, 0x288AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AF0u;
label_288af0:
    // 0x288af0: 0x214282b  sltu        $a1, $s0, $s4
    ctx->pc = 0x288af0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288af4: 0x2171824  and         $v1, $s0, $s7
    ctx->pc = 0x288af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288af8: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x288af8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288afc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288afcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288b00: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288b04: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288b08: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x288b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x288b0c: 0x235902d  daddu       $s2, $s1, $s5
    ctx->pc = 0x288b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
    // 0x288b10: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288b14: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x288b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x288b18: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288b18u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288b1c: 0xdfd50000  ld          $s5, 0x0($fp)
    ctx->pc = 0x288b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288b20: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x288b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288b24: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288b28: 0x234882b  sltu        $s1, $s1, $s4
    ctx->pc = 0x288b28u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288b2c: 0x255902d  daddu       $s2, $s2, $s5
    ctx->pc = 0x288b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 21));
    // 0x288b30: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288b34: 0x83982d  daddu       $s3, $a0, $v1
    ctx->pc = 0x288b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_288b38:
    // 0x288b38: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x288b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x288b3c: 0x262a82d  daddu       $s5, $s3, $v0
    ctx->pc = 0x288b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288b40: 0x16c0ff4d  bnez        $s6, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x288B40u;
    {
        const bool branch_taken_0x288b40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B40u;
        // 0x288b44: 0xffd20000  sd          $s2, 0x0($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b40) {
            ctx->pc = 0x288878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288878;
        }
    }
    ctx->pc = 0x288B48u;
label_288b48:
    // 0x288b48: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x288b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_288b4c:
    // 0x288b4c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x288b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288b50: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x288b50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288b54: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x288b54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288b58: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x288b58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288b5c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x288b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288b60: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x288b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288b64: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x288b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288b68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x288b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288b6c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x288b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288b70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x288b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288b74: 0x3e00008  jr          $ra
    ctx->pc = 0x288B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B74u;
        // 0x288b78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B7Cu;
    // 0x288b7c: 0x0  nop
    ctx->pc = 0x288b7cu;
    // NOP
}
