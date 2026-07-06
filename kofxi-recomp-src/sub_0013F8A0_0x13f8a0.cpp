#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F8A0
// Address: 0x13f8a0 - 0x13f9b0
void sub_0013F8A0_0x13f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F8A0_0x13f8a0");
#endif

    switch (ctx->pc) {
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8a4u: goto label_13f8a4;
        case 0x13f8a8u: goto label_13f8a8;
        case 0x13f8acu: goto label_13f8ac;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8b4u: goto label_13f8b4;
        case 0x13f8b8u: goto label_13f8b8;
        case 0x13f8bcu: goto label_13f8bc;
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8ccu: goto label_13f8cc;
        case 0x13f8d0u: goto label_13f8d0;
        case 0x13f8d4u: goto label_13f8d4;
        case 0x13f8d8u: goto label_13f8d8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8e0u: goto label_13f8e0;
        case 0x13f8e4u: goto label_13f8e4;
        case 0x13f8e8u: goto label_13f8e8;
        case 0x13f8ecu: goto label_13f8ec;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f8f4u: goto label_13f8f4;
        case 0x13f8f8u: goto label_13f8f8;
        case 0x13f8fcu: goto label_13f8fc;
        case 0x13f900u: goto label_13f900;
        case 0x13f904u: goto label_13f904;
        case 0x13f908u: goto label_13f908;
        case 0x13f90cu: goto label_13f90c;
        case 0x13f910u: goto label_13f910;
        case 0x13f914u: goto label_13f914;
        case 0x13f918u: goto label_13f918;
        case 0x13f91cu: goto label_13f91c;
        case 0x13f920u: goto label_13f920;
        case 0x13f924u: goto label_13f924;
        case 0x13f928u: goto label_13f928;
        case 0x13f92cu: goto label_13f92c;
        case 0x13f930u: goto label_13f930;
        case 0x13f934u: goto label_13f934;
        case 0x13f938u: goto label_13f938;
        case 0x13f93cu: goto label_13f93c;
        case 0x13f940u: goto label_13f940;
        case 0x13f944u: goto label_13f944;
        case 0x13f948u: goto label_13f948;
        case 0x13f94cu: goto label_13f94c;
        case 0x13f950u: goto label_13f950;
        case 0x13f954u: goto label_13f954;
        case 0x13f958u: goto label_13f958;
        case 0x13f95cu: goto label_13f95c;
        case 0x13f960u: goto label_13f960;
        case 0x13f964u: goto label_13f964;
        case 0x13f968u: goto label_13f968;
        case 0x13f96cu: goto label_13f96c;
        case 0x13f970u: goto label_13f970;
        case 0x13f974u: goto label_13f974;
        case 0x13f978u: goto label_13f978;
        case 0x13f97cu: goto label_13f97c;
        case 0x13f980u: goto label_13f980;
        case 0x13f984u: goto label_13f984;
        case 0x13f988u: goto label_13f988;
        case 0x13f98cu: goto label_13f98c;
        case 0x13f990u: goto label_13f990;
        case 0x13f994u: goto label_13f994;
        case 0x13f998u: goto label_13f998;
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9a0u: goto label_13f9a0;
        case 0x13f9a4u: goto label_13f9a4;
        case 0x13f9a8u: goto label_13f9a8;
        case 0x13f9acu: goto label_13f9ac;
        default: break;
    }

    ctx->pc = 0x13f8a0u;

label_13f8a0:
    // 0x13f8a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_13f8a4:
    // 0x13f8a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_13f8a8:
    // 0x13f8a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13f8ac:
    // 0x13f8ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13f8b0:
    // 0x13f8b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13f8b4:
    // 0x13f8b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13f8b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f8b8:
    // 0x13f8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f8bc:
    // 0x13f8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f8c0:
    // 0x13f8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f8c4:
    // 0x13f8c4: 0xc04fdb8  jal         func_13F6E0
label_13f8c8:
    if (ctx->pc == 0x13F8C8u) {
        ctx->pc = 0x13F8C8u;
            // 0x13f8c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x13F8CCu;
        goto label_13f8cc;
    }
    ctx->pc = 0x13F8C4u;
    SET_GPR_U32(ctx, 31, 0x13F8CCu);
    ctx->pc = 0x13F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8C4u;
            // 0x13f8c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F6E0u;
    if (runtime->hasFunction(0x13F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8CCu; }
        if (ctx->pc != 0x13F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F6E0_0x13f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F8CCu; }
        if (ctx->pc != 0x13F8CCu) { return; }
    }
    ctx->pc = 0x13F8CCu;
label_13f8cc:
    // 0x13f8cc: 0x8ea40230  lw          $a0, 0x230($s5)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 560)));
label_13f8d0:
    // 0x13f8d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13f8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8d4:
    // 0x13f8d4: 0x8eb30214  lw          $s3, 0x214($s5)
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 532)));
label_13f8d8:
    // 0x13f8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f8dc:
    // 0x13f8dc: 0x86b2020c  lh          $s2, 0x20C($s5)
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 524)));
label_13f8e0:
    // 0x13f8e0: 0x8eb10238  lw          $s1, 0x238($s5)
    ctx->pc = 0x13f8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 568)));
label_13f8e4:
    // 0x13f8e4: 0x86b0022a  lh          $s0, 0x22A($s5)
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 554)));
label_13f8e8:
    // 0x13f8e8: 0x86b60228  lh          $s6, 0x228($s5)
    ctx->pc = 0x13f8e8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 552)));
label_13f8ec:
    // 0x13f8ec: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
label_13f8f0:
    if (ctx->pc == 0x13F8F0u) {
        ctx->pc = 0x13F8F0u;
            // 0x13f8f0: 0xaea30214  sw          $v1, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 3));
        ctx->pc = 0x13F8F4u;
        goto label_13f8f4;
    }
    ctx->pc = 0x13F8ECu;
    {
        const bool branch_taken_0x13f8ec = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x13F8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8ECu;
            // 0x13f8f0: 0xaea30214  sw          $v1, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8ec) {
            ctx->pc = 0x13F928u;
            goto label_13f928;
        }
    }
    ctx->pc = 0x13F8F4u;
label_13f8f4:
    // 0x13f8f4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x13f8f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_13f8f8:
    // 0x13f8f8: 0xc04f544  jal         func_13D510
label_13f8fc:
    if (ctx->pc == 0x13F8FCu) {
        ctx->pc = 0x13F8FCu;
            // 0x13f8fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F900u;
        goto label_13f900;
    }
    ctx->pc = 0x13F8F8u;
    SET_GPR_U32(ctx, 31, 0x13F900u);
    ctx->pc = 0x13F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8F8u;
            // 0x13f8fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (runtime->hasFunction(0x13D510u)) {
        auto targetFn = runtime->lookupFunction(0x13D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F900u; }
        if (ctx->pc != 0x13F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D510_0x13d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F900u; }
        if (ctx->pc != 0x13F900u) { return; }
    }
    ctx->pc = 0x13F900u;
label_13f900:
    // 0x13f900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f904:
    // 0x13f904: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x13f904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_13f908:
    // 0x13f908: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x13f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_13f90c:
    // 0x13f90c: 0x2442dcc0  addiu       $v0, $v0, -0x2340
    ctx->pc = 0x13f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958272));
label_13f910:
    // 0x13f910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f914:
    // 0x13f914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f918:
    // 0x13f918: 0x40f809  jalr        $v0
label_13f91c:
    if (ctx->pc == 0x13F91Cu) {
        ctx->pc = 0x13F91Cu;
            // 0x13f91c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F920u;
        goto label_13f920;
    }
    ctx->pc = 0x13F918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F920u);
        ctx->pc = 0x13F91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F918u;
            // 0x13f91c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F920u; }
            if (ctx->pc != 0x13F920u) { return; }
        }
        }
    }
    ctx->pc = 0x13F920u;
label_13f920:
    // 0x13f920: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f924:
    if (ctx->pc == 0x13F924u) {
        ctx->pc = 0x13F924u;
            // 0x13f924: 0xaeb30214  sw          $s3, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 19));
        ctx->pc = 0x13F928u;
        goto label_13f928;
    }
    ctx->pc = 0x13F920u;
    {
        const bool branch_taken_0x13f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F920u;
            // 0x13f924: 0xaeb30214  sw          $s3, 0x214($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f920) {
            ctx->pc = 0x13F934u;
            goto label_13f934;
        }
    }
    ctx->pc = 0x13F928u;
label_13f928:
    // 0x13f928: 0xaeb30214  sw          $s3, 0x214($s5)
    ctx->pc = 0x13f928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 19));
label_13f92c:
    // 0x13f92c: 0x10000013  b           . + 4 + (0x13 << 2)
label_13f930:
    if (ctx->pc == 0x13F930u) {
        ctx->pc = 0x13F930u;
            // 0x13f930: 0xa6b2020c  sh          $s2, 0x20C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 524), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x13F934u;
        goto label_13f934;
    }
    ctx->pc = 0x13F92Cu;
    {
        const bool branch_taken_0x13f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F92Cu;
            // 0x13f930: 0xa6b2020c  sh          $s2, 0x20C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 524), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f92c) {
            ctx->pc = 0x13F97Cu;
            goto label_13f97c;
        }
    }
    ctx->pc = 0x13F934u;
label_13f934:
    // 0x13f934: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_13f938:
    // 0x13f938: 0xa6b2020c  sh          $s2, 0x20C($s5)
    ctx->pc = 0x13f938u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 524), (uint16_t)GPR_U32(ctx, 18));
label_13f93c:
    // 0x13f93c: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x13f93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_13f940:
    // 0x13f940: 0xa6b0022a  sh          $s0, 0x22A($s5)
    ctx->pc = 0x13f940u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 554), (uint16_t)GPR_U32(ctx, 16));
label_13f944:
    // 0x13f944: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x13f944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_13f948:
    // 0x13f948: 0xa6b60228  sh          $s6, 0x228($s5)
    ctx->pc = 0x13f948u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 552), (uint16_t)GPR_U32(ctx, 22));
label_13f94c:
    // 0x13f94c: 0x8ea50238  lw          $a1, 0x238($s5)
    ctx->pc = 0x13f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 568)));
label_13f950:
    // 0x13f950: 0x30a50200  andi        $a1, $a1, 0x200
    ctx->pc = 0x13f950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_13f954:
    // 0x13f954: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13f954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_13f958:
    // 0x13f958: 0xaea50238  sw          $a1, 0x238($s5)
    ctx->pc = 0x13f958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 568), GPR_U32(ctx, 5));
label_13f95c:
    // 0x13f95c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_13f960:
    // 0x13f960: 0xaea40238  sw          $a0, 0x238($s5)
    ctx->pc = 0x13f960u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 568), GPR_U32(ctx, 4));
label_13f964:
    // 0x13f964: 0xaea30238  sw          $v1, 0x238($s5)
    ctx->pc = 0x13f964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 568), GPR_U32(ctx, 3));
label_13f968:
    // 0x13f968: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x13f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_13f96c:
    // 0x13f96c: 0xaea30238  sw          $v1, 0x238($s5)
    ctx->pc = 0x13f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 568), GPR_U32(ctx, 3));
label_13f970:
    // 0x13f970: 0x96a30226  lhu         $v1, 0x226($s5)
    ctx->pc = 0x13f970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 550)));
label_13f974:
    // 0x13f974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_13f978:
    // 0x13f978: 0xa6a30226  sh          $v1, 0x226($s5)
    ctx->pc = 0x13f978u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 550), (uint16_t)GPR_U32(ctx, 3));
label_13f97c:
    // 0x13f97c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13f97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13f980:
    // 0x13f980: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13f980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13f984:
    // 0x13f984: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13f984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13f988:
    // 0x13f988: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13f98c:
    // 0x13f98c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f98cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f990:
    // 0x13f990: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f994:
    // 0x13f994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f998:
    // 0x13f998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f99c:
    // 0x13f99c: 0x3e00008  jr          $ra
label_13f9a0:
    if (ctx->pc == 0x13F9A0u) {
        ctx->pc = 0x13F9A0u;
            // 0x13f9a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x13F9A4u;
        goto label_13f9a4;
    }
    ctx->pc = 0x13F99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F99Cu;
            // 0x13f9a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F9A4u;
label_13f9a4:
    // 0x13f9a4: 0x0  nop
    ctx->pc = 0x13f9a4u;
    // NOP
label_13f9a8:
    // 0x13f9a8: 0x0  nop
    ctx->pc = 0x13f9a8u;
    // NOP
label_13f9ac:
    // 0x13f9ac: 0x0  nop
    ctx->pc = 0x13f9acu;
    // NOP
    ctx->pc = 0x13f9b0u;
}
