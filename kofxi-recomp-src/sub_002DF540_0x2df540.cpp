#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF540
// Address: 0x2df540 - 0x2df690
void sub_002DF540_0x2df540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF540_0x2df540");
#endif

    switch (ctx->pc) {
        case 0x2df5b0u: goto label_2df5b0;
        case 0x2df5c4u: goto label_2df5c4;
        case 0x2df5e0u: goto label_2df5e0;
        case 0x2df5fcu: goto label_2df5fc;
        case 0x2df610u: goto label_2df610;
        case 0x2df628u: goto label_2df628;
        case 0x2df63cu: goto label_2df63c;
        case 0x2df654u: goto label_2df654;
        default: break;
    }

    ctx->pc = 0x2df540u;

    // 0x2df540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2df544: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2df548: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2df548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2df54c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2df54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df550: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2df550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2df554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2df554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df558: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2df558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2df55c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2df55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df560: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2df560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2df564: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2df564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df568: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2df568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2df56c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2df56cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df570: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2df570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2df574: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2df574u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2df578: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2df578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2df57c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2df57cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df580: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2df580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2df584: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2df584u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df588: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2df588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2df58c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2df58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2df590: 0x2446f078  addiu       $a2, $v0, -0xF88
    ctx->pc = 0x2df590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963320));
    // 0x2df594: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2df594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2df598: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2df598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2df59c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2df59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df5a0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2df5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df5a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2df5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2df5a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF5A8u;
    {
        const bool branch_taken_0x2df5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5A8u;
            // 0x2df5ac: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5a8) {
            ctx->pc = 0x2DF608u;
            goto label_2df608;
        }
    }
    ctx->pc = 0x2DF5B0u;
label_2df5b0:
    // 0x2df5b0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2df5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2df5b4: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x2df5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
    // 0x2df5b8: 0xafb5001c  sw          $s5, 0x1C($sp)
    ctx->pc = 0x2df5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 21));
    // 0x2df5bc: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF5BCu;
    SET_GPR_U32(ctx, 31, 0x2DF5C4u);
    ctx->pc = 0x2DF5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5BCu;
            // 0x2df5c0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5C4u; }
        if (ctx->pc != 0x2DF5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5C4u; }
        if (ctx->pc != 0x2DF5C4u) { return; }
    }
    ctx->pc = 0x2DF5C4u;
label_2df5c4:
    // 0x2df5c4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2df5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2df5c8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2df5cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2df5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df5d0: 0x24657e58  addiu       $a1, $v1, 0x7E58
    ctx->pc = 0x2df5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32344));
    // 0x2df5d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2df5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2df5d8: 0xc0b22b6  jal         func_2C8AD8
    ctx->pc = 0x2DF5D8u;
    SET_GPR_U32(ctx, 31, 0x2DF5E0u);
    ctx->pc = 0x2DF5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5D8u;
            // 0x2df5dc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AD8u;
    if (runtime->hasFunction(0x2C8AD8u)) {
        auto targetFn = runtime->lookupFunction(0x2C8AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5E0u; }
        if (ctx->pc != 0x2DF5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8AD8_0x2c8ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5E0u; }
        if (ctx->pc != 0x2DF5E0u) { return; }
    }
    ctx->pc = 0x2DF5E0u;
label_2df5e0:
    // 0x2df5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2df5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5e8: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DF5E8u;
    {
        const bool branch_taken_0x2df5e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5E8u;
            // 0x2df5ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5e8) {
            ctx->pc = 0x2DF64Cu;
            goto label_2df64c;
        }
    }
    ctx->pc = 0x2DF5F0u;
    // 0x2df5f0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2df5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2df5f4: 0xc0b554c  jal         func_2D5530
    ctx->pc = 0x2DF5F4u;
    SET_GPR_U32(ctx, 31, 0x2DF5FCu);
    ctx->pc = 0x2DF5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5F4u;
            // 0x2df5f8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5530u;
    if (runtime->hasFunction(0x2D5530u)) {
        auto targetFn = runtime->lookupFunction(0x2D5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5FCu; }
        if (ctx->pc != 0x2DF5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5530_0x2d5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5FCu; }
        if (ctx->pc != 0x2DF5FCu) { return; }
    }
    ctx->pc = 0x2DF5FCu;
label_2df5fc:
    // 0x2df5fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DF5FCu;
    {
        const bool branch_taken_0x2df5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5FCu;
            // 0x2df600: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5fc) {
            ctx->pc = 0x2DF64Cu;
            goto label_2df64c;
        }
    }
    ctx->pc = 0x2DF604u;
    // 0x2df604: 0x0  nop
    ctx->pc = 0x2df604u;
    // NOP
label_2df608:
    // 0x2df608: 0xc0b5940  jal         func_2D6500
    ctx->pc = 0x2DF608u;
    SET_GPR_U32(ctx, 31, 0x2DF610u);
    ctx->pc = 0x2DF60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF608u;
            // 0x2df60c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6500u;
    if (runtime->hasFunction(0x2D6500u)) {
        auto targetFn = runtime->lookupFunction(0x2D6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF610u; }
        if (ctx->pc != 0x2DF610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6500_0x2d6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF610u; }
        if (ctx->pc != 0x2DF610u) { return; }
    }
    ctx->pc = 0x2DF610u;
label_2df610:
    // 0x2df610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df618: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DF618u;
    {
        const bool branch_taken_0x2df618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF618u;
            // 0x2df61c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df618) {
            ctx->pc = 0x2DF64Cu;
            goto label_2df64c;
        }
    }
    ctx->pc = 0x2DF620u;
    // 0x2df620: 0xc0b597c  jal         func_2D65F0
    ctx->pc = 0x2DF620u;
    SET_GPR_U32(ctx, 31, 0x2DF628u);
    ctx->pc = 0x2DF624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF620u;
            // 0x2df624: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F0u;
    if (runtime->hasFunction(0x2D65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF628u; }
        if (ctx->pc != 0x2DF628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D65F0_0x2d65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF628u; }
        if (ctx->pc != 0x2DF628u) { return; }
    }
    ctx->pc = 0x2DF628u;
label_2df628:
    // 0x2df628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df62c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF62Cu;
    {
        const bool branch_taken_0x2df62c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF62Cu;
            // 0x2df630: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df62c) {
            ctx->pc = 0x2DF64Cu;
            goto label_2df64c;
        }
    }
    ctx->pc = 0x2DF634u;
    // 0x2df634: 0xc0b226a  jal         func_2C89A8
    ctx->pc = 0x2DF634u;
    SET_GPR_U32(ctx, 31, 0x2DF63Cu);
    ctx->pc = 0x2C89A8u;
    if (runtime->hasFunction(0x2C89A8u)) {
        auto targetFn = runtime->lookupFunction(0x2C89A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF63Cu; }
        if (ctx->pc != 0x2DF63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C89A8_0x2c89a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF63Cu; }
        if (ctx->pc != 0x2DF63Cu) { return; }
    }
    ctx->pc = 0x2DF63Cu;
label_2df63c:
    // 0x2df63c: 0x26c4e120  addiu       $a0, $s6, -0x1EE0
    ctx->pc = 0x2df63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959392));
    // 0x2df640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df644: 0x1200ffda  beqz        $s0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DF644u;
    {
        const bool branch_taken_0x2df644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF644u;
            // 0x2df648: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df644) {
            ctx->pc = 0x2DF5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df5b0;
        }
    }
    ctx->pc = 0x2DF64Cu;
label_2df64c:
    // 0x2df64c: 0xc0b5962  jal         func_2D6588
    ctx->pc = 0x2DF64Cu;
    SET_GPR_U32(ctx, 31, 0x2DF654u);
    ctx->pc = 0x2DF650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF64Cu;
            // 0x2df650: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6588u;
    if (runtime->hasFunction(0x2D6588u)) {
        auto targetFn = runtime->lookupFunction(0x2D6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF654u; }
        if (ctx->pc != 0x2DF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6588_0x2d6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF654u; }
        if (ctx->pc != 0x2DF654u) { return; }
    }
    ctx->pc = 0x2DF654u;
label_2df654:
    // 0x2df654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df658: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2df65c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2df65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df660: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2df660u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2df664: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2df664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2df668: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2df668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df66c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2df66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2df670: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2df670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df674: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2df674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2df678: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2df678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df67c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2df67cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2df680: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2df680u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2df684: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2df684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2df688: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF688u;
            // 0x2df68c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF690u;
    ctx->pc = 0x2df690u;
}
