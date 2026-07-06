#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266400
// Address: 0x266400 - 0x266558
void sub_00266400_0x266400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266400_0x266400");
#endif

    switch (ctx->pc) {
        case 0x26644cu: goto label_26644c;
        case 0x266458u: goto label_266458;
        case 0x26646cu: goto label_26646c;
        case 0x266478u: goto label_266478;
        case 0x266488u: goto label_266488;
        case 0x266498u: goto label_266498;
        case 0x2664b0u: goto label_2664b0;
        case 0x2664d0u: goto label_2664d0;
        case 0x2664e0u: goto label_2664e0;
        case 0x2664fcu: goto label_2664fc;
        case 0x266524u: goto label_266524;
        default: break;
    }

    ctx->pc = 0x266400u;

    // 0x266400: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x266400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x266404: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x266404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x266408: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x266408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x26640c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x26640cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266410: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x266410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x266414: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x266414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266418: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x266418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26641c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26641cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266420: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266424: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x266424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266428: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26642c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x26642cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266430: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266434: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x266438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26643c: 0x26b1000c  addiu       $s1, $s5, 0xC
    ctx->pc = 0x26643cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x266440: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x266440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x266444: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x266444u;
    SET_GPR_U32(ctx, 31, 0x26644Cu);
    ctx->pc = 0x266448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266444u;
            // 0x266448: 0x96a40004  lhu         $a0, 0x4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26644Cu; }
        if (ctx->pc != 0x26644Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26644Cu; }
        if (ctx->pc != 0x26644Cu) { return; }
    }
    ctx->pc = 0x26644Cu;
label_26644c:
    // 0x26644c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26644cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266450: 0xc098552  jal         func_261548
    ctx->pc = 0x266450u;
    SET_GPR_U32(ctx, 31, 0x266458u);
    ctx->pc = 0x266454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266450u;
            // 0x266454: 0x24040402  addiu       $a0, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266458u; }
        if (ctx->pc != 0x266458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266458u; }
        if (ctx->pc != 0x266458u) { return; }
    }
    ctx->pc = 0x266458u;
label_266458:
    // 0x266458: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26645c: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x26645Cu;
    {
        const bool branch_taken_0x26645c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x266460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26645Cu;
            // 0x266460: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26645c) {
            ctx->pc = 0x266490u;
            goto label_266490;
        }
    }
    ctx->pc = 0x266464u;
    // 0x266464: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x266464u;
    SET_GPR_U32(ctx, 31, 0x26646Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26646Cu; }
        if (ctx->pc != 0x26646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26646Cu; }
        if (ctx->pc != 0x26646Cu) { return; }
    }
    ctx->pc = 0x26646Cu;
label_26646c:
    // 0x26646c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x26646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x266470: 0xc097308  jal         func_25CC20
    ctx->pc = 0x266470u;
    SET_GPR_U32(ctx, 31, 0x266478u);
    ctx->pc = 0x266474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266470u;
            // 0x266474: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266478u; }
        if (ctx->pc != 0x266478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266478u; }
        if (ctx->pc != 0x266478u) { return; }
    }
    ctx->pc = 0x266478u;
label_266478:
    // 0x266478: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x266478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26647c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26647cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x266480: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x266480u;
    {
        const bool branch_taken_0x266480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266480u;
            // 0x266484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266480) {
            ctx->pc = 0x266528u;
            goto label_266528;
        }
    }
    ctx->pc = 0x266488u;
label_266488:
    // 0x266488: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x266488u;
    {
        const bool branch_taken_0x266488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266488u;
            // 0x26648c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266488) {
            ctx->pc = 0x266514u;
            goto label_266514;
        }
    }
    ctx->pc = 0x266490u;
label_266490:
    // 0x266490: 0x1a00001f  blez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x266490u;
    {
        const bool branch_taken_0x266490 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x266494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266490u;
            // 0x266494: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266490) {
            ctx->pc = 0x266510u;
            goto label_266510;
        }
    }
    ctx->pc = 0x266498u;
label_266498:
    // 0x266498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x266498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26649c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2664a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2664a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664a8: 0xc09927e  jal         func_2649F8
    ctx->pc = 0x2664A8u;
    SET_GPR_U32(ctx, 31, 0x2664B0u);
    ctx->pc = 0x2664ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2664A8u;
            // 0x2664ac: 0x24080402  addiu       $t0, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (runtime->hasFunction(0x2649F8u)) {
        auto targetFn = runtime->lookupFunction(0x2649F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664B0u; }
        if (ctx->pc != 0x2664B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002649F8_0x2649f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664B0u; }
        if (ctx->pc != 0x2664B0u) { return; }
    }
    ctx->pc = 0x2664B0u;
label_2664b0:
    // 0x2664b0: 0x440fff5  bltz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2664B0u;
    {
        const bool branch_taken_0x2664b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2664B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664B0u;
            // 0x2664b4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664b0) {
            ctx->pc = 0x266488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266488;
        }
    }
    ctx->pc = 0x2664B8u;
    // 0x2664b8: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2664bc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2664bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2664c0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2664C0u;
    {
        const bool branch_taken_0x2664c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2664C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664C0u;
            // 0x2664c4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c0) {
            ctx->pc = 0x266514u;
            goto label_266514;
        }
    }
    ctx->pc = 0x2664C8u;
    // 0x2664c8: 0xc099322  jal         func_264C88
    ctx->pc = 0x2664C8u;
    SET_GPR_U32(ctx, 31, 0x2664D0u);
    ctx->pc = 0x2664CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2664C8u;
            // 0x2664cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (runtime->hasFunction(0x264C88u)) {
        auto targetFn = runtime->lookupFunction(0x264C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664D0u; }
        if (ctx->pc != 0x2664D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C88_0x264c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664D0u; }
        if (ctx->pc != 0x2664D0u) { return; }
    }
    ctx->pc = 0x2664D0u;
label_2664d0:
    // 0x2664d0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2664d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2664d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2664d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664d8: 0xc099322  jal         func_264C88
    ctx->pc = 0x2664D8u;
    SET_GPR_U32(ctx, 31, 0x2664E0u);
    ctx->pc = 0x2664DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2664D8u;
            // 0x2664dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (runtime->hasFunction(0x264C88u)) {
        auto targetFn = runtime->lookupFunction(0x264C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664E0u; }
        if (ctx->pc != 0x2664E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264C88_0x264c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664E0u; }
        if (ctx->pc != 0x2664E0u) { return; }
    }
    ctx->pc = 0x2664E0u;
label_2664e0:
    // 0x2664e0: 0x16170008  bne         $s0, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2664E0u;
    {
        const bool branch_taken_0x2664e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2664E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664E0u;
            // 0x2664e4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664e0) {
            ctx->pc = 0x266504u;
            goto label_266504;
        }
    }
    ctx->pc = 0x2664E8u;
    // 0x2664e8: 0x14560007  bne         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2664E8u;
    {
        const bool branch_taken_0x2664e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2664ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664E8u;
            // 0x2664ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664e8) {
            ctx->pc = 0x266508u;
            goto label_266508;
        }
    }
    ctx->pc = 0x2664F0u;
    // 0x2664f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2664f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664f4: 0xc04a6b2  jal         func_129AC8
    ctx->pc = 0x2664F4u;
    SET_GPR_U32(ctx, 31, 0x2664FCu);
    ctx->pc = 0x2664F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2664F4u;
            // 0x2664f8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129AC8u;
    if (runtime->hasFunction(0x129AC8u)) {
        auto targetFn = runtime->lookupFunction(0x129AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664FCu; }
        if (ctx->pc != 0x2664FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129AC8_0x129ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664FCu; }
        if (ctx->pc != 0x2664FCu) { return; }
    }
    ctx->pc = 0x2664FCu;
label_2664fc:
    // 0x2664fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2664FCu;
    {
        const bool branch_taken_0x2664fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664FCu;
            // 0x266500: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664fc) {
            ctx->pc = 0x266514u;
            goto label_266514;
        }
    }
    ctx->pc = 0x266504u;
label_266504:
    // 0x266504: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x266504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266508:
    // 0x266508: 0x1c40ffe3  bgtz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x266508u;
    {
        const bool branch_taken_0x266508 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266508u;
            // 0x26650c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266508) {
            ctx->pc = 0x266498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266498;
        }
    }
    ctx->pc = 0x266510u;
label_266510:
    // 0x266510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266514:
    // 0x266514: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x266514u;
    {
        const bool branch_taken_0x266514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x266518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266514u;
            // 0x266518: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266514) {
            ctx->pc = 0x266528u;
            goto label_266528;
        }
    }
    ctx->pc = 0x26651Cu;
    // 0x26651c: 0xc098560  jal         func_261580
    ctx->pc = 0x26651Cu;
    SET_GPR_U32(ctx, 31, 0x266524u);
    ctx->pc = 0x266520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26651Cu;
            // 0x266520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266524u; }
        if (ctx->pc != 0x266524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266524u; }
        if (ctx->pc != 0x266524u) { return; }
    }
    ctx->pc = 0x266524u;
label_266524:
    // 0x266524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x266524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266528:
    // 0x266528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x266528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26652c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x26652cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x266530: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x266530u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266534: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x266534u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266538: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266538u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26653c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26653cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266540: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266544: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x266544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266548: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26654c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26654cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266550: 0x3e00008  jr          $ra
    ctx->pc = 0x266550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266550u;
            // 0x266554: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266558u;
    ctx->pc = 0x266558u;
}
