#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002062F0
// Address: 0x2062f0 - 0x206490
void sub_002062F0_0x2062f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062F0_0x2062f0");
#endif

    switch (ctx->pc) {
        case 0x206320u: goto label_206320;
        case 0x206360u: goto label_206360;
        case 0x206394u: goto label_206394;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063f8u: goto label_2063f8;
        case 0x206418u: goto label_206418;
        case 0x206440u: goto label_206440;
        default: break;
    }

    ctx->pc = 0x2062f0u;

    // 0x2062f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2062f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2062f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2062f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2062f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2062fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2062fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x206300: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x206300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x206304: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x206304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x206308: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x206308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20630c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x206310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x206314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206318: 0xc0818b0  jal         func_2062C0
    ctx->pc = 0x206318u;
    SET_GPR_U32(ctx, 31, 0x206320u);
    ctx->pc = 0x20631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206318u;
            // 0x20631c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2062C0u;
    if (runtime->hasFunction(0x2062C0u)) {
        auto targetFn = runtime->lookupFunction(0x2062C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206320u; }
        if (ctx->pc != 0x206320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002062C0_0x2062c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206320u; }
        if (ctx->pc != 0x206320u) { return; }
    }
    ctx->pc = 0x206320u;
label_206320:
    // 0x206320: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x206320u;
    {
        const bool branch_taken_0x206320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206320) {
            ctx->pc = 0x206458u;
            goto label_206458;
        }
    }
    ctx->pc = 0x206328u;
    // 0x206328: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x206328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20632c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x206330: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x206330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x206334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206338: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20633c: 0x12c00024  beqz        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x20633Cu;
    {
        const bool branch_taken_0x20633c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x20633c) {
            ctx->pc = 0x2063D0u;
            goto label_2063d0;
        }
    }
    ctx->pc = 0x206344u;
    // 0x206344: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x206344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x206348: 0x151a80  sll         $v1, $s5, 10
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 10));
    // 0x20634c: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x206350: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x206350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206354: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x206354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206358: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x206358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20635c: 0x26570200  addiu       $s7, $s2, 0x200
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_206360:
    // 0x206360: 0x2d48021  addu        $s0, $s6, $s4
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x206364: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x206364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x206368: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x206368u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20636c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20636Cu;
    {
        const bool branch_taken_0x20636c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20636c) {
            ctx->pc = 0x2063C0u;
            goto label_2063c0;
        }
    }
    ctx->pc = 0x206374u;
    // 0x206374: 0x82260003  lb          $a2, 0x3($s1)
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x206378: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20637c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x20637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x206380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206384: 0x26330003  addiu       $s3, $s1, 0x3
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x206388: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20638c: 0xc081864  jal         func_206190
    ctx->pc = 0x20638Cu;
    SET_GPR_U32(ctx, 31, 0x206394u);
    ctx->pc = 0x206390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20638Cu;
            // 0x206390: 0x24c80002  addiu       $t0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206190u;
    if (runtime->hasFunction(0x206190u)) {
        auto targetFn = runtime->lookupFunction(0x206190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206394u; }
        if (ctx->pc != 0x206394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206190_0x206190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206394u; }
        if (ctx->pc != 0x206394u) { return; }
    }
    ctx->pc = 0x206394u;
label_206394:
    // 0x206394: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206398: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x206398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20639c: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x20639cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2063a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2063a4: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2063a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2063a8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2063a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2063ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2063acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2063b0: 0x24c80002  addiu       $t0, $a2, 0x2
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2063b4: 0xc081864  jal         func_206190
    ctx->pc = 0x2063B4u;
    SET_GPR_U32(ctx, 31, 0x2063BCu);
    ctx->pc = 0x2063B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2063B4u;
            // 0x2063b8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206190u;
    if (runtime->hasFunction(0x206190u)) {
        auto targetFn = runtime->lookupFunction(0x206190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063BCu; }
        if (ctx->pc != 0x2063BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206190_0x206190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063BCu; }
        if (ctx->pc != 0x2063BCu) { return; }
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x0  nop
    ctx->pc = 0x2063bcu;
    // NOP
label_2063c0:
    // 0x2063c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2063c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2063c4: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2063c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2063c8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2063C8u;
    {
        const bool branch_taken_0x2063c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2063CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063C8u;
            // 0x2063cc: 0x26310009  addiu       $s1, $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063c8) {
            ctx->pc = 0x206360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206360;
        }
    }
    ctx->pc = 0x2063D0u;
label_2063d0:
    // 0x2063d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2063d4: 0x151a80  sll         $v1, $s5, 10
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 10));
    // 0x2063d8: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x2063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x2063dc: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2063dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2063e0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2063e4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2063e8: 0x2694a240  addiu       $s4, $s4, -0x5DC0
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943296));
    // 0x2063ec: 0x2610a248  addiu       $s0, $s0, -0x5DB8
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943304));
    // 0x2063f0: 0x26720200  addiu       $s2, $s3, 0x200
    ctx->pc = 0x2063f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x2063f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2063f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2063f8:
    // 0x2063f8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2063fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2063fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206400: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206404: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x206408: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20640c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x20640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x206410: 0xc081864  jal         func_206190
    ctx->pc = 0x206410u;
    SET_GPR_U32(ctx, 31, 0x206418u);
    ctx->pc = 0x206414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206410u;
            // 0x206414: 0x24c80002  addiu       $t0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206190u;
    if (runtime->hasFunction(0x206190u)) {
        auto targetFn = runtime->lookupFunction(0x206190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206418u; }
        if (ctx->pc != 0x206418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206190_0x206190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206418u; }
        if (ctx->pc != 0x206418u) { return; }
    }
    ctx->pc = 0x206418u;
label_206418:
    // 0x206418: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x206418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20641c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206420: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x206424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x206428: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20642c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x206430: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x206430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x206434: 0x24c80002  addiu       $t0, $a2, 0x2
    ctx->pc = 0x206434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x206438: 0xc081864  jal         func_206190
    ctx->pc = 0x206438u;
    SET_GPR_U32(ctx, 31, 0x206440u);
    ctx->pc = 0x20643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206438u;
            // 0x20643c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206190u;
    if (runtime->hasFunction(0x206190u)) {
        auto targetFn = runtime->lookupFunction(0x206190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206440u; }
        if (ctx->pc != 0x206440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206190_0x206190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206440u; }
        if (ctx->pc != 0x206440u) { return; }
    }
    ctx->pc = 0x206440u;
label_206440:
    // 0x206440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x206444: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x206448: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x206448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20644c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20644Cu;
    {
        const bool branch_taken_0x20644c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20644Cu;
            // 0x206450: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20644c) {
            ctx->pc = 0x2063F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2063f8;
        }
    }
    ctx->pc = 0x206454u;
    // 0x206454: 0x0  nop
    ctx->pc = 0x206454u;
    // NOP
label_206458:
    // 0x206458: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20645c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20645cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206460: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x206460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206464: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206468: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x206468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20646c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20646cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20647c: 0x3e00008  jr          $ra
    ctx->pc = 0x20647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20647Cu;
            // 0x206480: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206484u;
    // 0x206484: 0x0  nop
    ctx->pc = 0x206484u;
    // NOP
    // 0x206488: 0x0  nop
    ctx->pc = 0x206488u;
    // NOP
    // 0x20648c: 0x0  nop
    ctx->pc = 0x20648cu;
    // NOP
    ctx->pc = 0x206490u;
}
