#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D540
// Address: 0x13d540 - 0x13d780
void sub_0013D540_0x13d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D540_0x13d540");
#endif

    switch (ctx->pc) {
        case 0x13d578u: goto label_13d578;
        case 0x13d5a4u: goto label_13d5a4;
        case 0x13d5acu: goto label_13d5ac;
        case 0x13d5b8u: goto label_13d5b8;
        case 0x13d5c4u: goto label_13d5c4;
        case 0x13d5ccu: goto label_13d5cc;
        case 0x13d5d8u: goto label_13d5d8;
        case 0x13d5e4u: goto label_13d5e4;
        case 0x13d5f4u: goto label_13d5f4;
        case 0x13d604u: goto label_13d604;
        case 0x13d638u: goto label_13d638;
        case 0x13d664u: goto label_13d664;
        case 0x13d6b4u: goto label_13d6b4;
        case 0x13d700u: goto label_13d700;
        default: break;
    }

    ctx->pc = 0x13d540u;

    // 0x13d540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13d544: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13d548: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13d54c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13d550: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13d554: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13d554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13d558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13d55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d570: 0xc062804  jal         func_18A010
    ctx->pc = 0x13D570u;
    SET_GPR_U32(ctx, 31, 0x13D578u);
    ctx->pc = 0x13D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D570u;
            // 0x13d574: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D578u; }
        if (ctx->pc != 0x13D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D578u; }
        if (ctx->pc != 0x13D578u) { return; }
    }
    ctx->pc = 0x13D578u;
label_13d578:
    // 0x13d578: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13d578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d57c: 0x56a00003  bnel        $s5, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D57Cu;
    {
        const bool branch_taken_0x13d57c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d57c) {
            ctx->pc = 0x13D580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D57Cu;
            // 0x13d580: 0x8ea300dc  lw          $v1, 0xDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D58Cu;
            goto label_13d58c;
        }
    }
    ctx->pc = 0x13D584u;
    // 0x13d584: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x13D584u;
    {
        const bool branch_taken_0x13d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D584u;
            // 0x13d588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d584) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D58Cu;
label_13d58c:
    // 0x13d58c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x13d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13d590: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x13d590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x13d594: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13d598: 0x38882  srl         $s1, $v1, 2
    ctx->pc = 0x13d598u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x13d59c: 0xc04f85c  jal         func_13E170
    ctx->pc = 0x13D59Cu;
    SET_GPR_U32(ctx, 31, 0x13D5A4u);
    ctx->pc = 0x13D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D59Cu;
            // 0x13d5a0: 0x29082  srl         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E170u;
    if (runtime->hasFunction(0x13E170u)) {
        auto targetFn = runtime->lookupFunction(0x13E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5A4u; }
        if (ctx->pc != 0x13D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E170_0x13e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5A4u; }
        if (ctx->pc != 0x13D5A4u) { return; }
    }
    ctx->pc = 0x13D5A4u;
label_13d5a4:
    // 0x13d5a4: 0xc04f868  jal         func_13E1A0
    ctx->pc = 0x13D5A4u;
    SET_GPR_U32(ctx, 31, 0x13D5ACu);
    ctx->pc = 0x13D5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5A4u;
            // 0x13d5a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1A0u;
    if (runtime->hasFunction(0x13E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5ACu; }
        if (ctx->pc != 0x13D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E1A0_0x13e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5ACu; }
        if (ctx->pc != 0x13D5ACu) { return; }
    }
    ctx->pc = 0x13D5ACu;
label_13d5ac:
    // 0x13d5ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13d5acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5b0: 0xc04f5e0  jal         func_13D780
    ctx->pc = 0x13D5B0u;
    SET_GPR_U32(ctx, 31, 0x13D5B8u);
    ctx->pc = 0x13D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5B0u;
            // 0x13d5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D780u;
    if (runtime->hasFunction(0x13D780u)) {
        auto targetFn = runtime->lookupFunction(0x13D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5B8u; }
        if (ctx->pc != 0x13D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D780_0x13d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5B8u; }
        if (ctx->pc != 0x13D5B8u) { return; }
    }
    ctx->pc = 0x13D5B8u;
label_13d5b8:
    // 0x13d5b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13d5b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5bc: 0xc04f5f8  jal         func_13D7E0
    ctx->pc = 0x13D5BCu;
    SET_GPR_U32(ctx, 31, 0x13D5C4u);
    ctx->pc = 0x13D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5BCu;
            // 0x13d5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D7E0u;
    if (runtime->hasFunction(0x13D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5C4u; }
        if (ctx->pc != 0x13D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D7E0_0x13d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5C4u; }
        if (ctx->pc != 0x13D5C4u) { return; }
    }
    ctx->pc = 0x13D5C4u;
label_13d5c4:
    // 0x13d5c4: 0xc04f618  jal         func_13D860
    ctx->pc = 0x13D5C4u;
    SET_GPR_U32(ctx, 31, 0x13D5CCu);
    ctx->pc = 0x13D5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5C4u;
            // 0x13d5c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D860u;
    if (runtime->hasFunction(0x13D860u)) {
        auto targetFn = runtime->lookupFunction(0x13D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5CCu; }
        if (ctx->pc != 0x13D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D860_0x13d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5CCu; }
        if (ctx->pc != 0x13D5CCu) { return; }
    }
    ctx->pc = 0x13D5CCu;
label_13d5cc:
    // 0x13d5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5d0: 0xc04f9b0  jal         func_13E6C0
    ctx->pc = 0x13D5D0u;
    SET_GPR_U32(ctx, 31, 0x13D5D8u);
    ctx->pc = 0x13D5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5D0u;
            // 0x13d5d4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E6C0u;
    if (runtime->hasFunction(0x13E6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5D8u; }
        if (ctx->pc != 0x13D5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E6C0_0x13e6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5D8u; }
        if (ctx->pc != 0x13D5D8u) { return; }
    }
    ctx->pc = 0x13D5D8u;
label_13d5d8:
    // 0x13d5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5dc: 0xc04f9b0  jal         func_13E6C0
    ctx->pc = 0x13D5DCu;
    SET_GPR_U32(ctx, 31, 0x13D5E4u);
    ctx->pc = 0x13D5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5DCu;
            // 0x13d5e0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E6C0u;
    if (runtime->hasFunction(0x13E6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5E4u; }
        if (ctx->pc != 0x13D5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E6C0_0x13e6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5E4u; }
        if (ctx->pc != 0x13D5E4u) { return; }
    }
    ctx->pc = 0x13D5E4u;
label_13d5e4:
    // 0x13d5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5ec: 0xc04f9bc  jal         func_13E6F0
    ctx->pc = 0x13D5ECu;
    SET_GPR_U32(ctx, 31, 0x13D5F4u);
    ctx->pc = 0x13D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5ECu;
            // 0x13d5f0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E6F0u;
    if (runtime->hasFunction(0x13E6F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5F4u; }
        if (ctx->pc != 0x13D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E6F0_0x13e6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5F4u; }
        if (ctx->pc != 0x13D5F4u) { return; }
    }
    ctx->pc = 0x13D5F4u;
label_13d5f4:
    // 0x13d5f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13d5f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d5f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5fc: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13D5FCu;
    SET_GPR_U32(ctx, 31, 0x13D604u);
    ctx->pc = 0x13D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5FCu;
            // 0x13d600: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D604u; }
        if (ctx->pc != 0x13D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D604u; }
        if (ctx->pc != 0x13D604u) { return; }
    }
    ctx->pc = 0x13D604u;
label_13d604:
    // 0x13d604: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D604u;
    {
        const bool branch_taken_0x13d604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d604) {
            ctx->pc = 0x13D608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D604u;
            // 0x13d608: 0x1620c0  sll         $a0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D614u;
            goto label_13d614;
        }
    }
    ctx->pc = 0x13D60Cu;
    // 0x13d60c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x13D60Cu;
    {
        const bool branch_taken_0x13d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D60Cu;
            // 0x13d610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d60c) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D614u;
label_13d614:
    // 0x13d614: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13d614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13d618: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x13d618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x13d61c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x13d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13d620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d624: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d628: 0xa0625c78  sb          $v0, 0x5C78($v1)
    ctx->pc = 0x13d628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23672), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d62c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d62cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d630: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13D630u;
    SET_GPR_U32(ctx, 31, 0x13D638u);
    ctx->pc = 0x13D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D630u;
            // 0x13d634: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D638u; }
        if (ctx->pc != 0x13D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D638u; }
        if (ctx->pc != 0x13D638u) { return; }
    }
    ctx->pc = 0x13D638u;
label_13d638:
    // 0x13d638: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D638u;
    {
        const bool branch_taken_0x13d638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d638) {
            ctx->pc = 0x13D63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D638u;
            // 0x13d63c: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D648u;
            goto label_13d648;
        }
    }
    ctx->pc = 0x13D640u;
    // 0x13d640: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x13D640u;
    {
        const bool branch_taken_0x13d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D640u;
            // 0x13d644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d640) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D648u;
label_13d648:
    // 0x13d648: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d64c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13d64cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d650: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13d654: 0xa0435c80  sb          $v1, 0x5C80($v0)
    ctx->pc = 0x13d654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23680), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d658: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d658u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d65c: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13D65Cu;
    SET_GPR_U32(ctx, 31, 0x13D664u);
    ctx->pc = 0x13D660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D65Cu;
            // 0x13d660: 0x2a2a021  addu        $s4, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D664u; }
        if (ctx->pc != 0x13D664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D664u; }
        if (ctx->pc != 0x13D664u) { return; }
    }
    ctx->pc = 0x13D664u;
label_13d664:
    // 0x13d664: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D664u;
    {
        const bool branch_taken_0x13d664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d664) {
            ctx->pc = 0x13D668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D664u;
            // 0x13d668: 0x573021  addu        $a2, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D674u;
            goto label_13d674;
        }
    }
    ctx->pc = 0x13D66Cu;
    // 0x13d66c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13D66Cu;
    {
        const bool branch_taken_0x13d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D66Cu;
            // 0x13d670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d66c) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D674u;
label_13d674:
    // 0x13d674: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13d674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13d678: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x13d678u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d67c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13d680: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x13d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13d684: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x13d684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13d688: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13d68c: 0xa0675c88  sb          $a3, 0x5C88($v1)
    ctx->pc = 0x13d68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23688), (uint8_t)GPR_U32(ctx, 7));
    // 0x13d690: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d694: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x13d694u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d698: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x13d698u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d69c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x13d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13d6a0: 0xa0435c88  sb          $v1, 0x5C88($v0)
    ctx->pc = 0x13d6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23688), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d6a4: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x13d6a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d6a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d6ac: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13D6ACu;
    SET_GPR_U32(ctx, 31, 0x13D6B4u);
    ctx->pc = 0x13D6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6ACu;
            // 0x13d6b0: 0xc2a021  addu        $s4, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6B4u; }
        if (ctx->pc != 0x13D6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6B4u; }
        if (ctx->pc != 0x13D6B4u) { return; }
    }
    ctx->pc = 0x13D6B4u;
label_13d6b4:
    // 0x13d6b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D6B4u;
    {
        const bool branch_taken_0x13d6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6b4) {
            ctx->pc = 0x13D6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6B4u;
            // 0x13d6b8: 0x5e3021  addu        $a2, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D6C4u;
            goto label_13d6c4;
        }
    }
    ctx->pc = 0x13D6BCu;
    // 0x13d6bc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13D6BCu;
    {
        const bool branch_taken_0x13d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6BCu;
            // 0x13d6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6bc) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D6C4u;
label_13d6c4:
    // 0x13d6c4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13d6c8: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x13d6c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d6cc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13d6d0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x13d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13d6d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13d6d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13d6dc: 0xa0675c90  sb          $a3, 0x5C90($v1)
    ctx->pc = 0x13d6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23696), (uint8_t)GPR_U32(ctx, 7));
    // 0x13d6e0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x13d6e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d6e4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x13d6e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d6e8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x13d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13d6ec: 0xa0435c90  sb          $v1, 0x5C90($v0)
    ctx->pc = 0x13d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23696), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d6f0: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x13d6f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d6f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d6f8: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13D6F8u;
    SET_GPR_U32(ctx, 31, 0x13D700u);
    ctx->pc = 0x13D6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6F8u;
            // 0x13d6fc: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D700u; }
        if (ctx->pc != 0x13D700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D700u; }
        if (ctx->pc != 0x13D700u) { return; }
    }
    ctx->pc = 0x13D700u;
label_13d700:
    // 0x13d700: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D700u;
    {
        const bool branch_taken_0x13d700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d700) {
            ctx->pc = 0x13D704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D700u;
            // 0x13d704: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D710u;
            goto label_13d710;
        }
    }
    ctx->pc = 0x13D708u;
    // 0x13d708: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13D708u;
    {
        const bool branch_taken_0x13d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D708u;
            // 0x13d70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d708) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D710u;
label_13d710:
    // 0x13d710: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13d710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13d714: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13d718: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x13d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x13d71c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13d720: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x13d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13d724: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d728: 0xa0825c98  sb          $v0, 0x5C98($a0)
    ctx->pc = 0x13d728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23704), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d72c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13d72cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d730: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d734: 0x50a821  addu        $s5, $v0, $s0
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13d738: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d73c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D73Cu;
            // 0x13d740: 0xa0705ca0  sb          $s0, 0x5CA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23712), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D748u;
            goto label_13d748;
        }
    }
    ctx->pc = 0x13D744u;
    // 0x13d744: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_13d748:
    // 0x13d748: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x13d748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13d74c:
    // 0x13d74c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13d750: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13d750u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d754: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13d754u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d758: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13d758u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d75c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13d75cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d760: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13d760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d774: 0x3e00008  jr          $ra
    ctx->pc = 0x13D774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D774u;
            // 0x13d778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D77Cu;
    // 0x13d77c: 0x0  nop
    ctx->pc = 0x13d77cu;
    // NOP
    ctx->pc = 0x13d780u;
}
