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

// Function: sub_0032A850
// Address: 0x32a850 - 0x32aa30
void sub_0032A850_0x32a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A850_0x32a850");
#endif

    switch (ctx->pc) {
        case 0x32a850u: goto label_32a850;
        case 0x32a854u: goto label_32a854;
        case 0x32a858u: goto label_32a858;
        case 0x32a85cu: goto label_32a85c;
        case 0x32a860u: goto label_32a860;
        case 0x32a864u: goto label_32a864;
        case 0x32a868u: goto label_32a868;
        case 0x32a86cu: goto label_32a86c;
        case 0x32a870u: goto label_32a870;
        case 0x32a874u: goto label_32a874;
        case 0x32a878u: goto label_32a878;
        case 0x32a87cu: goto label_32a87c;
        case 0x32a880u: goto label_32a880;
        case 0x32a884u: goto label_32a884;
        case 0x32a888u: goto label_32a888;
        case 0x32a88cu: goto label_32a88c;
        case 0x32a890u: goto label_32a890;
        case 0x32a894u: goto label_32a894;
        case 0x32a898u: goto label_32a898;
        case 0x32a89cu: goto label_32a89c;
        case 0x32a8a0u: goto label_32a8a0;
        case 0x32a8a4u: goto label_32a8a4;
        case 0x32a8a8u: goto label_32a8a8;
        case 0x32a8acu: goto label_32a8ac;
        case 0x32a8b0u: goto label_32a8b0;
        case 0x32a8b4u: goto label_32a8b4;
        case 0x32a8b8u: goto label_32a8b8;
        case 0x32a8bcu: goto label_32a8bc;
        case 0x32a8c0u: goto label_32a8c0;
        case 0x32a8c4u: goto label_32a8c4;
        case 0x32a8c8u: goto label_32a8c8;
        case 0x32a8ccu: goto label_32a8cc;
        case 0x32a8d0u: goto label_32a8d0;
        case 0x32a8d4u: goto label_32a8d4;
        case 0x32a8d8u: goto label_32a8d8;
        case 0x32a8dcu: goto label_32a8dc;
        case 0x32a8e0u: goto label_32a8e0;
        case 0x32a8e4u: goto label_32a8e4;
        case 0x32a8e8u: goto label_32a8e8;
        case 0x32a8ecu: goto label_32a8ec;
        case 0x32a8f0u: goto label_32a8f0;
        case 0x32a8f4u: goto label_32a8f4;
        case 0x32a8f8u: goto label_32a8f8;
        case 0x32a8fcu: goto label_32a8fc;
        case 0x32a900u: goto label_32a900;
        case 0x32a904u: goto label_32a904;
        case 0x32a908u: goto label_32a908;
        case 0x32a90cu: goto label_32a90c;
        case 0x32a910u: goto label_32a910;
        case 0x32a914u: goto label_32a914;
        case 0x32a918u: goto label_32a918;
        case 0x32a91cu: goto label_32a91c;
        case 0x32a920u: goto label_32a920;
        case 0x32a924u: goto label_32a924;
        case 0x32a928u: goto label_32a928;
        case 0x32a92cu: goto label_32a92c;
        case 0x32a930u: goto label_32a930;
        case 0x32a934u: goto label_32a934;
        case 0x32a938u: goto label_32a938;
        case 0x32a93cu: goto label_32a93c;
        case 0x32a940u: goto label_32a940;
        case 0x32a944u: goto label_32a944;
        case 0x32a948u: goto label_32a948;
        case 0x32a94cu: goto label_32a94c;
        case 0x32a950u: goto label_32a950;
        case 0x32a954u: goto label_32a954;
        case 0x32a958u: goto label_32a958;
        case 0x32a95cu: goto label_32a95c;
        case 0x32a960u: goto label_32a960;
        case 0x32a964u: goto label_32a964;
        case 0x32a968u: goto label_32a968;
        case 0x32a96cu: goto label_32a96c;
        case 0x32a970u: goto label_32a970;
        case 0x32a974u: goto label_32a974;
        case 0x32a978u: goto label_32a978;
        case 0x32a97cu: goto label_32a97c;
        case 0x32a980u: goto label_32a980;
        case 0x32a984u: goto label_32a984;
        case 0x32a988u: goto label_32a988;
        case 0x32a98cu: goto label_32a98c;
        case 0x32a990u: goto label_32a990;
        case 0x32a994u: goto label_32a994;
        case 0x32a998u: goto label_32a998;
        case 0x32a99cu: goto label_32a99c;
        case 0x32a9a0u: goto label_32a9a0;
        case 0x32a9a4u: goto label_32a9a4;
        case 0x32a9a8u: goto label_32a9a8;
        case 0x32a9acu: goto label_32a9ac;
        case 0x32a9b0u: goto label_32a9b0;
        case 0x32a9b4u: goto label_32a9b4;
        case 0x32a9b8u: goto label_32a9b8;
        case 0x32a9bcu: goto label_32a9bc;
        case 0x32a9c0u: goto label_32a9c0;
        case 0x32a9c4u: goto label_32a9c4;
        case 0x32a9c8u: goto label_32a9c8;
        case 0x32a9ccu: goto label_32a9cc;
        case 0x32a9d0u: goto label_32a9d0;
        case 0x32a9d4u: goto label_32a9d4;
        case 0x32a9d8u: goto label_32a9d8;
        case 0x32a9dcu: goto label_32a9dc;
        case 0x32a9e0u: goto label_32a9e0;
        case 0x32a9e4u: goto label_32a9e4;
        case 0x32a9e8u: goto label_32a9e8;
        case 0x32a9ecu: goto label_32a9ec;
        case 0x32a9f0u: goto label_32a9f0;
        case 0x32a9f4u: goto label_32a9f4;
        case 0x32a9f8u: goto label_32a9f8;
        case 0x32a9fcu: goto label_32a9fc;
        case 0x32aa00u: goto label_32aa00;
        case 0x32aa04u: goto label_32aa04;
        case 0x32aa08u: goto label_32aa08;
        case 0x32aa0cu: goto label_32aa0c;
        case 0x32aa10u: goto label_32aa10;
        case 0x32aa14u: goto label_32aa14;
        case 0x32aa18u: goto label_32aa18;
        case 0x32aa1cu: goto label_32aa1c;
        case 0x32aa20u: goto label_32aa20;
        case 0x32aa24u: goto label_32aa24;
        case 0x32aa28u: goto label_32aa28;
        case 0x32aa2cu: goto label_32aa2c;
        default: break;
    }

    ctx->pc = 0x32a850u;

label_32a850:
    // 0x32a850: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x32a850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_32a854:
    // 0x32a854: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32a854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_32a858:
    // 0x32a858: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_32a85c:
    if (ctx->pc == 0x32A85Cu) {
        ctx->pc = 0x32A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A858u;
        // 0x32a85c: 0x90820274  lbu         $v0, 0x274($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A860u;
        goto label_32a860;
    }
    ctx->pc = 0x32A858u;
    {
        const bool branch_taken_0x32a858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32a858) {
            ctx->pc = 0x32A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A858u;
            // 0x32a85c: 0x90820274  lbu         $v0, 0x274($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A868u;
            goto label_32a868;
        }
    }
    ctx->pc = 0x32A860u;
label_32a860:
    // 0x32a860: 0x10000003  b           . + 4 + (0x3 << 2)
label_32a864:
    if (ctx->pc == 0x32A864u) {
        ctx->pc = 0x32A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A860u;
        // 0x32a864: 0xa4850088  sh          $a1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A868u;
        goto label_32a868;
    }
    ctx->pc = 0x32A860u;
    {
        const bool branch_taken_0x32a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A860u;
        // 0x32a864: 0xa4850088  sh          $a1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a860) {
            ctx->pc = 0x32A870u;
            goto label_32a870;
        }
    }
    ctx->pc = 0x32A868u;
label_32a868:
    // 0x32a868: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x32a868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_32a86c:
    // 0x32a86c: 0xa0820274  sb          $v0, 0x274($a0)
    ctx->pc = 0x32a86cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 2));
label_32a870:
    // 0x32a870: 0x3e00008  jr          $ra
label_32a874:
    if (ctx->pc == 0x32A874u) {
        ctx->pc = 0x32A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A870u;
        // 0x32a874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A878u;
        goto label_32a878;
    }
    ctx->pc = 0x32A870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A870u;
        // 0x32a874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A878u;
label_32a878:
    // 0x32a878: 0x0  nop
    ctx->pc = 0x32a878u;
    // NOP
label_32a87c:
    // 0x32a87c: 0x0  nop
    ctx->pc = 0x32a87cu;
    // NOP
label_32a880:
    // 0x32a880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32a884:
    // 0x32a884: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_32a888:
    // 0x32a888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32a88c:
    // 0x32a88c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a890:
    // 0x32a890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32a894:
    // 0x32a894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32a894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a898:
    // 0x32a898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a89c:
    // 0x32a89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a8a0:
    // 0x32a8a0: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x32a8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_32a8a4:
    // 0x32a8a4: 0x8e4502c0  lw          $a1, 0x2C0($s2)
    ctx->pc = 0x32a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
label_32a8a8:
    // 0x32a8a8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x32a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_32a8ac:
    // 0x32a8ac: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x32a8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_32a8b0:
    // 0x32a8b0: 0xae4402c0  sw          $a0, 0x2C0($s2)
    ctx->pc = 0x32a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 4));
label_32a8b4:
    // 0x32a8b4: 0x96440088  lhu         $a0, 0x88($s2)
    ctx->pc = 0x32a8b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
label_32a8b8:
    // 0x32a8b8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_32a8bc:
    if (ctx->pc == 0x32A8BCu) {
        ctx->pc = 0x32A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8B8u;
        // 0x32a8bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8C0u;
        goto label_32a8c0;
    }
    ctx->pc = 0x32A8B8u;
    {
        const bool branch_taken_0x32a8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a8b8) {
            ctx->pc = 0x32A8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A8B8u;
            // 0x32a8bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A8E0u;
            goto label_32a8e0;
        }
    }
    ctx->pc = 0x32A8C0u;
label_32a8c0:
    // 0x32a8c0: 0xa6440086  sh          $a0, 0x86($s2)
    ctx->pc = 0x32a8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 134), (uint16_t)GPR_U32(ctx, 4));
label_32a8c4:
    // 0x32a8c4: 0xa6430088  sh          $v1, 0x88($s2)
    ctx->pc = 0x32a8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 3));
label_32a8c8:
    // 0x32a8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a8cc:
    // 0x32a8cc: 0x8e4202c0  lw          $v0, 0x2C0($s2)
    ctx->pc = 0x32a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
label_32a8d0:
    // 0x32a8d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x32a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_32a8d4:
    // 0x32a8d4: 0xc0ca9f0  jal         func_32A7C0
label_32a8d8:
    if (ctx->pc == 0x32A8D8u) {
        ctx->pc = 0x32A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8D4u;
        // 0x32a8d8: 0xae4202c0  sw          $v0, 0x2C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8DCu;
        goto label_32a8dc;
    }
    ctx->pc = 0x32A8D4u;
    SET_GPR_U32(ctx, 31, 0x32A8DCu);
    ctx->pc = 0x32A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8D4u;
    // 0x32a8d8: 0xae4202c0  sw          $v0, 0x2C0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7C0u, 0x32A8D4u, 0x32A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8DCu;
label_32a8dc:
    // 0x32a8dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_32a8e0:
    // 0x32a8e0: 0xa6430088  sh          $v1, 0x88($s2)
    ctx->pc = 0x32a8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 3));
label_32a8e4:
    // 0x32a8e4: 0x92430274  lbu         $v1, 0x274($s2)
    ctx->pc = 0x32a8e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 628)));
label_32a8e8:
    // 0x32a8e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32a8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_32a8ec:
    // 0x32a8ec: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_32a8f0:
    if (ctx->pc == 0x32A8F0u) {
        ctx->pc = 0x32A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8ECu;
        // 0x32a8f0: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8F4u;
        goto label_32a8f4;
    }
    ctx->pc = 0x32A8ECu;
    {
        const bool branch_taken_0x32a8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a8ec) {
            ctx->pc = 0x32A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A8ECu;
            // 0x32a8f0: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A91Cu;
            goto label_32a91c;
        }
    }
    ctx->pc = 0x32A8F4u;
label_32a8f4:
    // 0x32a8f4: 0xc054d08  jal         func_153420
label_32a8f8:
    if (ctx->pc == 0x32A8F8u) {
        ctx->pc = 0x32A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8F4u;
        // 0x32a8f8: 0x96440086  lhu         $a0, 0x86($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8FCu;
        goto label_32a8fc;
    }
    ctx->pc = 0x32A8F4u;
    SET_GPR_U32(ctx, 31, 0x32A8FCu);
    ctx->pc = 0x32A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8F4u;
    // 0x32a8f8: 0x96440086  lhu         $a0, 0x86($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153420u, 0x32A8F4u, 0x32A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8FCu;
label_32a8fc:
    // 0x32a8fc: 0xc0caa04  jal         func_32A810
label_32a900:
    if (ctx->pc == 0x32A900u) {
        ctx->pc = 0x32A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8FCu;
        // 0x32a900: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A904u;
        goto label_32a904;
    }
    ctx->pc = 0x32A8FCu;
    SET_GPR_U32(ctx, 31, 0x32A904u);
    ctx->pc = 0x32A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8FCu;
    // 0x32a900: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A810u, 0x32A8FCu, 0x32A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A904u;
label_32a904:
    // 0x32a904: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x32a904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
label_32a908:
    // 0x32a908: 0xae420238  sw          $v0, 0x238($s2)
    ctx->pc = 0x32a908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 2));
label_32a90c:
    // 0x32a90c: 0x92430274  lbu         $v1, 0x274($s2)
    ctx->pc = 0x32a90cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 628)));
label_32a910:
    // 0x32a910: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x32a910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_32a914:
    // 0x32a914: 0xa2430274  sb          $v1, 0x274($s2)
    ctx->pc = 0x32a914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 628), (uint8_t)GPR_U32(ctx, 3));
label_32a918:
    // 0x32a918: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x32a918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
label_32a91c:
    // 0x32a91c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x32a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_32a920:
    // 0x32a920: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x32a920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
label_32a924:
    // 0x32a924: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_32a928:
    // 0x32a928: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32a92c:
    if (ctx->pc == 0x32A92Cu) {
        ctx->pc = 0x32A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A928u;
        // 0x32a92c: 0x8e510234  lw          $s1, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A930u;
        goto label_32a930;
    }
    ctx->pc = 0x32A928u;
    {
        const bool branch_taken_0x32a928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A928u;
        // 0x32a92c: 0x8e510234  lw          $s1, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a928) {
            ctx->pc = 0x32A940u;
            goto label_32a940;
        }
    }
    ctx->pc = 0x32A930u;
label_32a930:
    // 0x32a930: 0x9643012c  lhu         $v1, 0x12C($s2)
    ctx->pc = 0x32a930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 300)));
label_32a934:
    // 0x32a934: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x32a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_32a938:
    // 0x32a938: 0x10000004  b           . + 4 + (0x4 << 2)
label_32a93c:
    if (ctx->pc == 0x32A93Cu) {
        ctx->pc = 0x32A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A938u;
        // 0x32a93c: 0xa643012c  sh          $v1, 0x12C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 300), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A940u;
        goto label_32a940;
    }
    ctx->pc = 0x32A938u;
    {
        const bool branch_taken_0x32a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A938u;
        // 0x32a93c: 0xa643012c  sh          $v1, 0x12C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 300), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a938) {
            ctx->pc = 0x32A94Cu;
            goto label_32a94c;
        }
    }
    ctx->pc = 0x32A940u;
label_32a940:
    // 0x32a940: 0x9643012c  lhu         $v1, 0x12C($s2)
    ctx->pc = 0x32a940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 300)));
label_32a944:
    // 0x32a944: 0x3063f9ff  andi        $v1, $v1, 0xF9FF
    ctx->pc = 0x32a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63999);
label_32a948:
    // 0x32a948: 0xa643012c  sh          $v1, 0x12C($s2)
    ctx->pc = 0x32a948u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 300), (uint16_t)GPR_U32(ctx, 3));
label_32a94c:
    // 0x32a94c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x32a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_32a950:
    // 0x32a950: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x32a950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
label_32a954:
    // 0x32a954: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_32a958:
    // 0x32a958: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
label_32a95c:
    if (ctx->pc == 0x32A95Cu) {
        ctx->pc = 0x32A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A958u;
        // 0x32a95c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A960u;
        goto label_32a960;
    }
    ctx->pc = 0x32A958u;
    {
        const bool branch_taken_0x32a958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a958) {
            ctx->pc = 0x32A95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A958u;
            // 0x32a95c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AA10u;
            goto label_32aa10;
        }
    }
    ctx->pc = 0x32A960u;
label_32a960:
    // 0x32a960: 0x9643023c  lhu         $v1, 0x23C($s2)
    ctx->pc = 0x32a960u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 572)));
label_32a964:
    // 0x32a964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32a968:
    // 0x32a968: 0xa643023c  sh          $v1, 0x23C($s2)
    ctx->pc = 0x32a968u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 572), (uint16_t)GPR_U32(ctx, 3));
label_32a96c:
    // 0x32a96c: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x32a96cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_32a970:
    // 0x32a970: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_32a974:
    // 0x32a974: 0x12030022  beq         $s0, $v1, . + 4 + (0x22 << 2)
label_32a978:
    if (ctx->pc == 0x32A978u) {
        ctx->pc = 0x32A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A974u;
        // 0x32a978: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A97Cu;
        goto label_32a97c;
    }
    ctx->pc = 0x32A974u;
    {
        const bool branch_taken_0x32a974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A974u;
        // 0x32a978: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a974) {
            ctx->pc = 0x32AA00u;
            goto label_32aa00;
        }
    }
    ctx->pc = 0x32A97Cu;
label_32a97c:
    // 0x32a97c: 0x3203f000  andi        $v1, $s0, 0xF000
    ctx->pc = 0x32a97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)61440);
label_32a980:
    // 0x32a980: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x32a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_32a984:
    // 0x32a984: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_32a988:
    if (ctx->pc == 0x32A988u) {
        ctx->pc = 0x32A98Cu;
        goto label_32a98c;
    }
    ctx->pc = 0x32A984u;
    {
        const bool branch_taken_0x32a984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a984) {
            ctx->pc = 0x32A998u;
            goto label_32a998;
        }
    }
    ctx->pc = 0x32A98Cu;
label_32a98c:
    // 0x32a98c: 0x10000004  b           . + 4 + (0x4 << 2)
label_32a990:
    if (ctx->pc == 0x32A990u) {
        ctx->pc = 0x32A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A98Cu;
        // 0x32a990: 0x32100fff  andi        $s0, $s0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A994u;
        goto label_32a994;
    }
    ctx->pc = 0x32A98Cu;
    {
        const bool branch_taken_0x32a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A98Cu;
        // 0x32a990: 0x32100fff  andi        $s0, $s0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a98c) {
            ctx->pc = 0x32A9A0u;
            goto label_32a9a0;
        }
    }
    ctx->pc = 0x32A994u;
label_32a994:
    // 0x32a994: 0x0  nop
    ctx->pc = 0x32a994u;
    // NOP
label_32a998:
    // 0x32a998: 0xc068158  jal         func_1A0560
label_32a99c:
    if (ctx->pc == 0x32A99Cu) {
        ctx->pc = 0x32A9A0u;
        goto label_32a9a0;
    }
    ctx->pc = 0x32A998u;
    SET_GPR_U32(ctx, 31, 0x32A9A0u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x32A998u, 0x32A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9A0u;
label_32a9a0:
    // 0x32a9a0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x32a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_32a9a4:
    // 0x32a9a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32a9a8:
    // 0x32a9a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a9ac:
    // 0x32a9ac: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32a9b0:
    // 0x32a9b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a9b4:
    // 0x32a9b4: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x32a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_32a9b8:
    // 0x32a9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32a9bc:
    // 0x32a9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a9c0:
    // 0x32a9c0: 0x40f809  jalr        $v0
label_32a9c4:
    if (ctx->pc == 0x32A9C4u) {
        ctx->pc = 0x32A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9C0u;
        // 0x32a9c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9C8u;
        goto label_32a9c8;
    }
    ctx->pc = 0x32A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A9C8u);
        ctx->pc = 0x32A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9C0u;
        // 0x32a9c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9C0u, 0x32A9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A9C8u;
label_32a9c8:
    // 0x32a9c8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x32a9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_32a9cc:
    // 0x32a9cc: 0x304400f0  andi        $a0, $v0, 0xF0
    ctx->pc = 0x32a9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_32a9d0:
    // 0x32a9d0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32a9d4:
    // 0x32a9d4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x32a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32a9d8:
    // 0x32a9d8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_32a9dc:
    if (ctx->pc == 0x32A9DCu) {
        ctx->pc = 0x32A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9D8u;
        // 0x32a9dc: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9E0u;
        goto label_32a9e0;
    }
    ctx->pc = 0x32A9D8u;
    {
        const bool branch_taken_0x32a9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9D8u;
        // 0x32a9dc: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9d8) {
            ctx->pc = 0x32A9F0u;
            goto label_32a9f0;
        }
    }
    ctx->pc = 0x32A9E0u;
label_32a9e0:
    // 0x32a9e0: 0xc055728  jal         func_155CA0
label_32a9e4:
    if (ctx->pc == 0x32A9E4u) {
        ctx->pc = 0x32A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9E0u;
        // 0x32a9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9E8u;
        goto label_32a9e8;
    }
    ctx->pc = 0x32A9E0u;
    SET_GPR_U32(ctx, 31, 0x32A9E8u);
    ctx->pc = 0x32A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9E0u;
    // 0x32a9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x32A9E0u, 0x32A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9E8u;
label_32a9e8:
    // 0x32a9e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_32a9ec:
    if (ctx->pc == 0x32A9ECu) {
        ctx->pc = 0x32A9F0u;
        goto label_32a9f0;
    }
    ctx->pc = 0x32A9E8u;
    {
        const bool branch_taken_0x32a9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9e8) {
            ctx->pc = 0x32AA0Cu;
            goto label_32aa0c;
        }
    }
    ctx->pc = 0x32A9F0u;
label_32a9f0:
    // 0x32a9f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32a9f4:
    // 0x32a9f4: 0x5483ffde  bnel        $a0, $v1, . + 4 + (-0x22 << 2)
label_32a9f8:
    if (ctx->pc == 0x32A9F8u) {
        ctx->pc = 0x32A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9F4u;
        // 0x32a9f8: 0x96300000  lhu         $s0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9FCu;
        goto label_32a9fc;
    }
    ctx->pc = 0x32A9F4u;
    {
        const bool branch_taken_0x32a9f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a9f4) {
            ctx->pc = 0x32A9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A9F4u;
            // 0x32a9f8: 0x96300000  lhu         $s0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a970;
        }
    }
    ctx->pc = 0x32A9FCu;
label_32a9fc:
    // 0x32a9fc: 0x0  nop
    ctx->pc = 0x32a9fcu;
    // NOP
label_32aa00:
    // 0x32aa00: 0x92430274  lbu         $v1, 0x274($s2)
    ctx->pc = 0x32aa00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 628)));
label_32aa04:
    // 0x32aa04: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x32aa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_32aa08:
    // 0x32aa08: 0xa2430274  sb          $v1, 0x274($s2)
    ctx->pc = 0x32aa08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 628), (uint8_t)GPR_U32(ctx, 3));
label_32aa0c:
    // 0x32aa0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32aa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32aa10:
    // 0x32aa10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32aa10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32aa14:
    // 0x32aa14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32aa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32aa18:
    // 0x32aa18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32aa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32aa1c:
    // 0x32aa1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32aa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32aa20:
    // 0x32aa20: 0x3e00008  jr          $ra
label_32aa24:
    if (ctx->pc == 0x32AA24u) {
        ctx->pc = 0x32AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA20u;
        // 0x32aa24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA28u;
        goto label_32aa28;
    }
    ctx->pc = 0x32AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA20u;
        // 0x32aa24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AA28u;
label_32aa28:
    // 0x32aa28: 0x0  nop
    ctx->pc = 0x32aa28u;
    // NOP
label_32aa2c:
    // 0x32aa2c: 0x0  nop
    ctx->pc = 0x32aa2cu;
    // NOP
}
