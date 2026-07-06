#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267838
// Address: 0x267838 - 0x2679a8
void sub_00267838_0x267838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267838_0x267838");
#endif

    switch (ctx->pc) {
        case 0x267868u: goto label_267868;
        case 0x267878u: goto label_267878;
        case 0x267890u: goto label_267890;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678c4u: goto label_2678c4;
        case 0x267900u: goto label_267900;
        case 0x267910u: goto label_267910;
        case 0x267928u: goto label_267928;
        case 0x267938u: goto label_267938;
        case 0x26796cu: goto label_26796c;
        case 0x267988u: goto label_267988;
        default: break;
    }

    ctx->pc = 0x267838u;

    // 0x267838: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x267838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x26783c: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x26783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x267840: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x267840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x267844: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x267844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x267848: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26784c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x26784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x267850: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x267850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267854: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x267854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x267858: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x267858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x26785c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267860: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267860u;
    SET_GPR_U32(ctx, 31, 0x267868u);
    ctx->pc = 0x267864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267860u;
            // 0x267864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267868u; }
        if (ctx->pc != 0x267868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267868u; }
        if (ctx->pc != 0x267868u) { return; }
    }
    ctx->pc = 0x267868u;
label_267868:
    // 0x267868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26786c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267870: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267870u;
    SET_GPR_U32(ctx, 31, 0x267878u);
    ctx->pc = 0x267874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267870u;
            // 0x267874: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267878u; }
        if (ctx->pc != 0x267878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267878u; }
        if (ctx->pc != 0x267878u) { return; }
    }
    ctx->pc = 0x267878u;
label_267878:
    // 0x267878: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x267878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26787c: 0x3405c0a8  ori         $a1, $zero, 0xC0A8
    ctx->pc = 0x26787cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
    // 0x267880: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267884: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x267884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
    // 0x267888: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267888u;
    SET_GPR_U32(ctx, 31, 0x267890u);
    ctx->pc = 0x26788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267888u;
            // 0x26788c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267890u; }
        if (ctx->pc != 0x267890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267890u; }
        if (ctx->pc != 0x267890u) { return; }
    }
    ctx->pc = 0x267890u;
label_267890:
    // 0x267890: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267890u;
    {
        const bool branch_taken_0x267890 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267890u;
            // 0x267894: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267890) {
            ctx->pc = 0x2678A8u;
            goto label_2678a8;
        }
    }
    ctx->pc = 0x267898u;
    // 0x267898: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26789c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2678a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2678A0u;
    {
        const bool branch_taken_0x2678a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678A0u;
            // 0x2678a4: 0x24a57a10  addiu       $a1, $a1, 0x7A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678a0) {
            ctx->pc = 0x267980u;
            goto label_267980;
        }
    }
    ctx->pc = 0x2678A8u;
label_2678a8:
    // 0x2678a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2678a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678ac: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2678ACu;
    SET_GPR_U32(ctx, 31, 0x2678B4u);
    ctx->pc = 0x2678B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678ACu;
            // 0x2678b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678B4u; }
        if (ctx->pc != 0x2678B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678B4u; }
        if (ctx->pc != 0x2678B4u) { return; }
    }
    ctx->pc = 0x2678B4u;
label_2678b4:
    // 0x2678b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2678b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2678b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678bc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2678BCu;
    SET_GPR_U32(ctx, 31, 0x2678C4u);
    ctx->pc = 0x2678C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678BCu;
            // 0x2678c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678C4u; }
        if (ctx->pc != 0x2678C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678C4u; }
        if (ctx->pc != 0x2678C4u) { return; }
    }
    ctx->pc = 0x2678C4u;
label_2678c4:
    // 0x2678c4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2678c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2678c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2678c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2678cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2678ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2678d0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2678d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2678d4: 0xa3a70011  sb          $a3, 0x11($sp)
    ctx->pc = 0x2678d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 7));
    // 0x2678d8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2678d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2678dc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2678dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2678e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2678e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678e4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2678e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2678e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2678e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2678ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2678f0: 0xa3a70021  sb          $a3, 0x21($sp)
    ctx->pc = 0x2678f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 7));
    // 0x2678f4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2678f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2678f8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2678F8u;
    SET_GPR_U32(ctx, 31, 0x267900u);
    ctx->pc = 0x2678FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678F8u;
            // 0x2678fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267900u; }
        if (ctx->pc != 0x267900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267900u; }
        if (ctx->pc != 0x267900u) { return; }
    }
    ctx->pc = 0x267900u;
label_267900:
    // 0x267900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267908: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267908u;
    SET_GPR_U32(ctx, 31, 0x267910u);
    ctx->pc = 0x26790Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267908u;
            // 0x26790c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267910u; }
        if (ctx->pc != 0x267910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267910u; }
        if (ctx->pc != 0x267910u) { return; }
    }
    ctx->pc = 0x267910u;
label_267910:
    // 0x267910: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x267910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267914: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x267914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x267918: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26791c: 0x34a56919  ori         $a1, $a1, 0x6919
    ctx->pc = 0x26791cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26905);
    // 0x267920: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267920u;
    SET_GPR_U32(ctx, 31, 0x267928u);
    ctx->pc = 0x267924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267920u;
            // 0x267924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267928u; }
        if (ctx->pc != 0x267928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267928u; }
        if (ctx->pc != 0x267928u) { return; }
    }
    ctx->pc = 0x267928u;
label_267928:
    // 0x267928: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x267928u;
    {
        const bool branch_taken_0x267928 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267928u;
            // 0x26792c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267928) {
            ctx->pc = 0x267958u;
            goto label_267958;
        }
    }
    ctx->pc = 0x267930u;
    // 0x267930: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x267930u;
    SET_GPR_U32(ctx, 31, 0x267938u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267938u; }
        if (ctx->pc != 0x267938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267938u; }
        if (ctx->pc != 0x267938u) { return; }
    }
    ctx->pc = 0x267938u;
label_267938:
    // 0x267938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26793c: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x26793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x267940: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267940u;
    {
        const bool branch_taken_0x267940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267940u;
            // 0x267944: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267940) {
            ctx->pc = 0x267954u;
            goto label_267954;
        }
    }
    ctx->pc = 0x267948u;
    // 0x267948: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26794c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26794Cu;
    {
        const bool branch_taken_0x26794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26794Cu;
            // 0x267950: 0x24a57a60  addiu       $a1, $a1, 0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26794c) {
            ctx->pc = 0x267980u;
            goto label_267980;
        }
    }
    ctx->pc = 0x267954u;
label_267954:
    // 0x267954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267958:
    // 0x267958: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x267958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x26795c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26795cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267960: 0x34a5691a  ori         $a1, $a1, 0x691A
    ctx->pc = 0x267960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26906);
    // 0x267964: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267964u;
    SET_GPR_U32(ctx, 31, 0x26796Cu);
    ctx->pc = 0x267968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267964u;
            // 0x267968: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26796Cu; }
        if (ctx->pc != 0x26796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26796Cu; }
        if (ctx->pc != 0x26796Cu) { return; }
    }
    ctx->pc = 0x26796Cu;
label_26796c:
    // 0x26796c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26796Cu;
    {
        const bool branch_taken_0x26796c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26796Cu;
            // 0x267970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26796c) {
            ctx->pc = 0x26798Cu;
            goto label_26798c;
        }
    }
    ctx->pc = 0x267974u;
    // 0x267974: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x267978: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26797c: 0x24a57ab0  addiu       $a1, $a1, 0x7AB0
    ctx->pc = 0x26797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31408));
label_267980:
    // 0x267980: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267980u;
    SET_GPR_U32(ctx, 31, 0x267988u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267988u; }
        if (ctx->pc != 0x267988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267988u; }
        if (ctx->pc != 0x267988u) { return; }
    }
    ctx->pc = 0x267988u;
label_267988:
    // 0x267988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26798c:
    // 0x26798c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x26798cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x267990: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x267990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x267994: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x267994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x267998: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x267998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26799c: 0x3e00008  jr          $ra
    ctx->pc = 0x26799Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2679A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26799Cu;
            // 0x2679a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2679A4u;
    // 0x2679a4: 0x0  nop
    ctx->pc = 0x2679a4u;
    // NOP
    ctx->pc = 0x2679a8u;
}
