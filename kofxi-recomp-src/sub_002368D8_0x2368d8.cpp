#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002368D8
// Address: 0x2368d8 - 0x2369d8
void sub_002368D8_0x2368d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002368D8_0x2368d8");
#endif

    switch (ctx->pc) {
        case 0x236928u: goto label_236928;
        case 0x236944u: goto label_236944;
        case 0x236960u: goto label_236960;
        case 0x236974u: goto label_236974;
        case 0x2369b8u: goto label_2369b8;
        default: break;
    }

    ctx->pc = 0x2368d8u;

    // 0x2368d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2368dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2368dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2368e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2368e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2368e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2368e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2368e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2368ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2368ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2368f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2368f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2368f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2368f8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2368f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2368fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2368FCu;
    {
        const bool branch_taken_0x2368fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2368FCu;
            // 0x236900: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368fc) {
            ctx->pc = 0x236918u;
            goto label_236918;
        }
    }
    ctx->pc = 0x236904u;
    // 0x236904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x236904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236908: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236908u;
    {
        const bool branch_taken_0x236908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236908u;
            // 0x23690c: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236908) {
            ctx->pc = 0x236934u;
            goto label_236934;
        }
    }
    ctx->pc = 0x236910u;
    // 0x236910: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x236910u;
    {
        const bool branch_taken_0x236910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236910u;
            // 0x236914: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236910) {
            ctx->pc = 0x2369C0u;
            goto label_2369c0;
        }
    }
    ctx->pc = 0x236918u;
label_236918:
    // 0x236918: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x23691c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236920: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x236920u;
    SET_GPR_U32(ctx, 31, 0x236928u);
    ctx->pc = 0x236924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236920u;
            // 0x236924: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236928u; }
        if (ctx->pc != 0x236928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236928u; }
        if (ctx->pc != 0x236928u) { return; }
    }
    ctx->pc = 0x236928u;
label_236928:
    // 0x236928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23692c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23692Cu;
    {
        const bool branch_taken_0x23692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23692Cu;
            // 0x236930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23692c) {
            ctx->pc = 0x23696Cu;
            goto label_23696c;
        }
    }
    ctx->pc = 0x236934u;
label_236934:
    // 0x236934: 0x8a500007  lwl         $s0, 0x7($s2)
    ctx->pc = 0x236934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x236938: 0x9a500004  lwr         $s0, 0x4($s2)
    ctx->pc = 0x236938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x23693c: 0xc08a254  jal         func_228950
    ctx->pc = 0x23693Cu;
    SET_GPR_U32(ctx, 31, 0x236944u);
    ctx->pc = 0x236940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23693Cu;
            // 0x236940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236944u; }
        if (ctx->pc != 0x236944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236944u; }
        if (ctx->pc != 0x236944u) { return; }
    }
    ctx->pc = 0x236944u;
label_236944:
    // 0x236944: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x236944u;
    {
        const bool branch_taken_0x236944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x236948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236944u;
            // 0x236948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236944) {
            ctx->pc = 0x23697Cu;
            goto label_23697c;
        }
    }
    ctx->pc = 0x23694Cu;
    // 0x23694c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x236950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236954: 0x2484fd20  addiu       $a0, $a0, -0x2E0
    ctx->pc = 0x236954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966560));
    // 0x236958: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x236958u;
    SET_GPR_U32(ctx, 31, 0x236960u);
    ctx->pc = 0x23695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236958u;
            // 0x23695c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236960u; }
        if (ctx->pc != 0x236960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236960u; }
        if (ctx->pc != 0x236960u) { return; }
    }
    ctx->pc = 0x236960u;
label_236960:
    // 0x236960: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x236960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x236964: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x236964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236968: 0x2484fd28  addiu       $a0, $a0, -0x2D8
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966568));
label_23696c:
    // 0x23696c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x23696Cu;
    SET_GPR_U32(ctx, 31, 0x236974u);
    ctx->pc = 0x236970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23696Cu;
            // 0x236970: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236974u; }
        if (ctx->pc != 0x236974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236974u; }
        if (ctx->pc != 0x236974u) { return; }
    }
    ctx->pc = 0x236974u;
label_236974:
    // 0x236974: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x236974u;
    {
        const bool branch_taken_0x236974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236974u;
            // 0x236978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236974) {
            ctx->pc = 0x2369BCu;
            goto label_2369bc;
        }
    }
    ctx->pc = 0x23697Cu;
label_23697c:
    // 0x23697c: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x23697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x236980: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x236980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x236984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236988: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x236988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23698c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23698cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236990: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x236990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x236994: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x236994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236998: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x236998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x23699c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x23699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2369a0: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2369a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2369a4: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2369a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2369a8: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x2369a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2369ac: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x2369acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x2369b0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2369B0u;
    SET_GPR_U32(ctx, 31, 0x2369B8u);
    ctx->pc = 0x2369B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369B0u;
            // 0x2369b4: 0xa2220005  sb          $v0, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369B8u; }
        if (ctx->pc != 0x2369B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369B8u; }
        if (ctx->pc != 0x2369B8u) { return; }
    }
    ctx->pc = 0x2369B8u;
label_2369b8:
    // 0x2369b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2369b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2369bc:
    // 0x2369bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2369bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2369c0:
    // 0x2369c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2369c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2369c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2369c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2369c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2369c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2369cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2369ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2369d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2369D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2369D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2369D0u;
            // 0x2369d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2369D8u;
    ctx->pc = 0x2369d8u;
}
