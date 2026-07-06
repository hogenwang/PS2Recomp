#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196410
// Address: 0x196410 - 0x1969b0
void sub_00196410_0x196410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196410_0x196410");
#endif

    switch (ctx->pc) {
        case 0x196444u: goto label_196444;
        case 0x1964acu: goto label_1964ac;
        case 0x1964ccu: goto label_1964cc;
        case 0x1965bcu: goto label_1965bc;
        case 0x1965fcu: goto label_1965fc;
        case 0x196604u: goto label_196604;
        case 0x196618u: goto label_196618;
        case 0x196658u: goto label_196658;
        case 0x196660u: goto label_196660;
        case 0x196680u: goto label_196680;
        case 0x196860u: goto label_196860;
        case 0x196944u: goto label_196944;
        default: break;
    }

    ctx->pc = 0x196410u;

    // 0x196410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x196414: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19641c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x196420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196424: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x196424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19642c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19642cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196434: 0x8c42d0c8  lw          $v0, -0x2F38($v0)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x196438: 0x84460086  lh          $a2, 0x86($v0)
    ctx->pc = 0x196438u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x19643c: 0xc065ab8  jal         func_196AE0
    ctx->pc = 0x19643Cu;
    SET_GPR_U32(ctx, 31, 0x196444u);
    ctx->pc = 0x196440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19643Cu;
            // 0x196440: 0x24510058  addiu       $s1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AE0u;
    if (runtime->hasFunction(0x196AE0u)) {
        auto targetFn = runtime->lookupFunction(0x196AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196444u; }
        if (ctx->pc != 0x196444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AE0_0x196ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196444u; }
        if (ctx->pc != 0x196444u) { return; }
    }
    ctx->pc = 0x196444u;
label_196444:
    // 0x196444: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x196444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196448: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196448u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19644c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196450: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196450) {
            ctx->pc = 0x196454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196450u;
            // 0x196454: 0x92620004  lbu         $v0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196460u;
            goto label_196460;
        }
    }
    ctx->pc = 0x196458u;
    // 0x196458: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196458u;
            // 0x19645c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196458) {
            ctx->pc = 0x196668u;
            goto label_196668;
        }
    }
    ctx->pc = 0x196460u;
label_196460:
    // 0x196460: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x196460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x196464: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x196468: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x196468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19646c: 0x2462fff1  addiu       $v0, $v1, -0xF
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x196470: 0x2a01000d  slti        $at, $s0, 0xD
    ctx->pc = 0x196470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x196474: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x196474u;
    {
        const bool branch_taken_0x196474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196474u;
            // 0x196478: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196474) {
            ctx->pc = 0x196594u;
            goto label_196594;
        }
    }
    ctx->pc = 0x19647Cu;
    // 0x19647c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x196480: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x196480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x196484: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x196484u;
    {
        const bool branch_taken_0x196484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196484) {
            ctx->pc = 0x196594u;
            goto label_196594;
        }
    }
    ctx->pc = 0x19648Cu;
    // 0x19648c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19648cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x196490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196494: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x196494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x196498: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x19649c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1964a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1964a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1964a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1964A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1964ACu);
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964A4u;
            // 0x1964a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1964ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196680u: goto label_196680;
            case 0x196690u: goto label_196690;
            case 0x1966A0u: goto label_1966a0;
            case 0x1966B0u: goto label_1966b0;
            case 0x1966C0u: goto label_1966c0;
            case 0x1966D0u: goto label_1966d0;
            case 0x1966E0u: goto label_1966e0;
            case 0x1966F0u: goto label_1966f0;
            case 0x196700u: goto label_196700;
            case 0x196710u: goto label_196710;
            case 0x196720u: goto label_196720;
            case 0x196730u: goto label_196730;
            case 0x196740u: goto label_196740;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1964ACu; }
            if (ctx->pc != 0x1964ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1964ACu;
label_1964ac:
    // 0x1964ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1964acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1964b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1964b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1964b4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1964B4u;
    {
        const bool branch_taken_0x1964b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1964b4) {
            ctx->pc = 0x1964B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1964B4u;
            // 0x1964b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1964C4u;
            goto label_1964c4;
        }
    }
    ctx->pc = 0x1964BCu;
    // 0x1964bc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1964BCu;
    {
        const bool branch_taken_0x1964bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964BCu;
            // 0x1964c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964bc) {
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x1964C4u;
label_1964c4:
    // 0x1964c4: 0xc065a6c  jal         func_1969B0
    ctx->pc = 0x1964C4u;
    SET_GPR_U32(ctx, 31, 0x1964CCu);
    ctx->pc = 0x1964C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964C4u;
            // 0x1964c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969B0u;
    if (runtime->hasFunction(0x1969B0u)) {
        auto targetFn = runtime->lookupFunction(0x1969B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964CCu; }
        if (ctx->pc != 0x1964CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969B0_0x1969b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964CCu; }
        if (ctx->pc != 0x1964CCu) { return; }
    }
    ctx->pc = 0x1964CCu;
label_1964cc:
    // 0x1964cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1964ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1964d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1964d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1964d4: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
    // 0x1964d8: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x1964dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1964e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1964E0u;
    {
        const bool branch_taken_0x1964e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964e0) {
            ctx->pc = 0x196564u;
            goto label_196564;
        }
    }
    ctx->pc = 0x1964E8u;
    // 0x1964e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1964ec: 0x8c42d0f0  lw          $v0, -0x2F10($v0)
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x1964f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1964f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1964f4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1964F4u;
    {
        const bool branch_taken_0x1964f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1964f4) {
            ctx->pc = 0x1964F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1964F4u;
            // 0x1964f8: 0x2a020009  slti        $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x196534u;
            goto label_196534;
        }
    }
    ctx->pc = 0x1964FCu;
    // 0x1964fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196500: 0x8c43d0c8  lw          $v1, -0x2F38($v0)
    ctx->pc = 0x196500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x196504: 0x90620059  lbu         $v0, 0x59($v1)
    ctx->pc = 0x196504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 89)));
    // 0x196508: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x196508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19650c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x19650Cu;
    {
        const bool branch_taken_0x19650c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19650c) {
            ctx->pc = 0x196530u;
            goto label_196530;
        }
    }
    ctx->pc = 0x196514u;
    // 0x196514: 0xa0600058  sb          $zero, 0x58($v1)
    ctx->pc = 0x196514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x196518: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19651c: 0x8c43d0c8  lw          $v1, -0x2F38($v0)
    ctx->pc = 0x19651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x196520: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196524: 0xa0600059  sb          $zero, 0x59($v1)
    ctx->pc = 0x196524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x196528: 0x8c42d0c8  lw          $v0, -0x2F38($v0)
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x19652c: 0xa040005b  sb          $zero, 0x5B($v0)
    ctx->pc = 0x19652cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 91), (uint8_t)GPR_U32(ctx, 0));
label_196530:
    // 0x196530: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_196534:
    // 0x196534: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x196534u;
    {
        const bool branch_taken_0x196534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196534) {
            ctx->pc = 0x196538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196534u;
            // 0x196538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x19653Cu;
    // 0x19653c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196540: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x196540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x196544: 0x94430090  lhu         $v1, 0x90($v0)
    ctx->pc = 0x196544u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x196548: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x19654c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x19654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x196550: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196550) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x196558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x19655c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19655Cu;
            // 0x196560: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19655c) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x196564u;
label_196564:
    // 0x196564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196568: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x19656c: 0x94430090  lhu         $v1, 0x90($v0)
    ctx->pc = 0x19656cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x196570: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x196574: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x196574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x196578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196578u;
    {
        const bool branch_taken_0x196578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196578) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x196580u;
    // 0x196580: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x196580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x196584: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x196584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_196588:
    // 0x196588: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19658c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x19658Cu;
    {
        const bool branch_taken_0x19658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19658c) {
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x196594u;
label_196594:
    // 0x196594: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196598: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19659c: 0x8c44d0f0  lw          $a0, -0x2F10($v0)
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x1965a0: 0x34620c00  ori         $v0, $v1, 0xC00
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x1965a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1965a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1965a8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1965A8u;
    {
        const bool branch_taken_0x1965a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965a8) {
            ctx->pc = 0x1965ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1965A8u;
            // 0x1965ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196610u;
            goto label_196610;
        }
    }
    ctx->pc = 0x1965B0u;
    // 0x1965b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1965b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965b4: 0xc065a6c  jal         func_1969B0
    ctx->pc = 0x1965B4u;
    SET_GPR_U32(ctx, 31, 0x1965BCu);
    ctx->pc = 0x1965B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1965B4u;
            // 0x1965b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969B0u;
    if (runtime->hasFunction(0x1969B0u)) {
        auto targetFn = runtime->lookupFunction(0x1969B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965BCu; }
        if (ctx->pc != 0x1965BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969B0_0x1969b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965BCu; }
        if (ctx->pc != 0x1965BCu) { return; }
    }
    ctx->pc = 0x1965BCu;
label_1965bc:
    // 0x1965bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1965c0: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x1965c4: 0x94430090  lhu         $v1, 0x90($v0)
    ctx->pc = 0x1965c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1965c8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1965cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1965ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1965d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1965D0u;
    {
        const bool branch_taken_0x1965d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965d0) {
            ctx->pc = 0x1965E0u;
            goto label_1965e0;
        }
    }
    ctx->pc = 0x1965D8u;
    // 0x1965d8: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1965d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1965dc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1965dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1965e0:
    // 0x1965e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1965e4: 0x8c42d0f0  lw          $v0, -0x2F10($v0)
    ctx->pc = 0x1965e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x1965e8: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1965e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1965ec: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1965ECu;
    {
        const bool branch_taken_0x1965ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965ec) {
            ctx->pc = 0x1965F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1965ECu;
            // 0x1965f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x1965F4u;
    // 0x1965f4: 0xc065bc4  jal         func_196F10
    ctx->pc = 0x1965F4u;
    SET_GPR_U32(ctx, 31, 0x1965FCu);
    ctx->pc = 0x196F10u;
    if (runtime->hasFunction(0x196F10u)) {
        auto targetFn = runtime->lookupFunction(0x196F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965FCu; }
        if (ctx->pc != 0x1965FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196F10_0x196f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965FCu; }
        if (ctx->pc != 0x1965FCu) { return; }
    }
    ctx->pc = 0x1965FCu;
label_1965fc:
    // 0x1965fc: 0xc065c1c  jal         func_197070
    ctx->pc = 0x1965FCu;
    SET_GPR_U32(ctx, 31, 0x196604u);
    ctx->pc = 0x196600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1965FCu;
            // 0x196600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197070u;
    if (runtime->hasFunction(0x197070u)) {
        auto targetFn = runtime->lookupFunction(0x197070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196604u; }
        if (ctx->pc != 0x196604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197070_0x197070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196604u; }
        if (ctx->pc != 0x196604u) { return; }
    }
    ctx->pc = 0x196604u;
label_196604:
    // 0x196604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196608: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196608u;
    {
        const bool branch_taken_0x196608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196608) {
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x196610u;
label_196610:
    // 0x196610: 0xc065a6c  jal         func_1969B0
    ctx->pc = 0x196610u;
    SET_GPR_U32(ctx, 31, 0x196618u);
    ctx->pc = 0x196614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196610u;
            // 0x196614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969B0u;
    if (runtime->hasFunction(0x1969B0u)) {
        auto targetFn = runtime->lookupFunction(0x1969B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196618u; }
        if (ctx->pc != 0x196618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969B0_0x1969b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196618u; }
        if (ctx->pc != 0x196618u) { return; }
    }
    ctx->pc = 0x196618u;
label_196618:
    // 0x196618: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19661c: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x196620: 0x94430090  lhu         $v1, 0x90($v0)
    ctx->pc = 0x196620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x196624: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x196628: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x196628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19662c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19662Cu;
    {
        const bool branch_taken_0x19662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19662c) {
            ctx->pc = 0x19663Cu;
            goto label_19663c;
        }
    }
    ctx->pc = 0x196634u;
    // 0x196634: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x196634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x196638: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x196638u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_19663c:
    // 0x19663c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196640: 0x8c42d0f0  lw          $v0, -0x2F10($v0)
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x196644: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x196644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x196648: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x196648u;
    {
        const bool branch_taken_0x196648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196648) {
            ctx->pc = 0x19664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196648u;
            // 0x19664c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x196650u;
    // 0x196650: 0xc065bc4  jal         func_196F10
    ctx->pc = 0x196650u;
    SET_GPR_U32(ctx, 31, 0x196658u);
    ctx->pc = 0x196F10u;
    if (runtime->hasFunction(0x196F10u)) {
        auto targetFn = runtime->lookupFunction(0x196F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196658u; }
        if (ctx->pc != 0x196658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196F10_0x196f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196658u; }
        if (ctx->pc != 0x196658u) { return; }
    }
    ctx->pc = 0x196658u;
label_196658:
    // 0x196658: 0xc065c1c  jal         func_197070
    ctx->pc = 0x196658u;
    SET_GPR_U32(ctx, 31, 0x196660u);
    ctx->pc = 0x19665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196658u;
            // 0x19665c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197070u;
    if (runtime->hasFunction(0x197070u)) {
        auto targetFn = runtime->lookupFunction(0x197070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196660u; }
        if (ctx->pc != 0x196660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197070_0x197070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196660u; }
        if (ctx->pc != 0x196660u) { return; }
    }
    ctx->pc = 0x196660u;
label_196660:
    // 0x196660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196664:
    // 0x196664: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196668:
    // 0x196668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19666c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19666cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196678: 0x3e00008  jr          $ra
    ctx->pc = 0x196678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196678u;
            // 0x19667c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196680u;
label_196680:
    // 0x196680: 0x80659d4  j           func_196750
    ctx->pc = 0x196680u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x196688u;
    // 0x196688: 0x0  nop
    ctx->pc = 0x196688u;
    // NOP
    // 0x19668c: 0x0  nop
    ctx->pc = 0x19668cu;
    // NOP
label_196690:
    // 0x196690: 0x80659d4  j           func_196750
    ctx->pc = 0x196690u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x196698u;
    // 0x196698: 0x0  nop
    ctx->pc = 0x196698u;
    // NOP
    // 0x19669c: 0x0  nop
    ctx->pc = 0x19669cu;
    // NOP
label_1966a0:
    // 0x1966a0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966A0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966A8u;
    // 0x1966a8: 0x0  nop
    ctx->pc = 0x1966a8u;
    // NOP
    // 0x1966ac: 0x0  nop
    ctx->pc = 0x1966acu;
    // NOP
label_1966b0:
    // 0x1966b0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966B0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966B8u;
    // 0x1966b8: 0x0  nop
    ctx->pc = 0x1966b8u;
    // NOP
    // 0x1966bc: 0x0  nop
    ctx->pc = 0x1966bcu;
    // NOP
label_1966c0:
    // 0x1966c0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966C0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966C8u;
    // 0x1966c8: 0x0  nop
    ctx->pc = 0x1966c8u;
    // NOP
    // 0x1966cc: 0x0  nop
    ctx->pc = 0x1966ccu;
    // NOP
label_1966d0:
    // 0x1966d0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966D0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966D8u;
    // 0x1966d8: 0x0  nop
    ctx->pc = 0x1966d8u;
    // NOP
    // 0x1966dc: 0x0  nop
    ctx->pc = 0x1966dcu;
    // NOP
label_1966e0:
    // 0x1966e0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966E0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966E8u;
    // 0x1966e8: 0x0  nop
    ctx->pc = 0x1966e8u;
    // NOP
    // 0x1966ec: 0x0  nop
    ctx->pc = 0x1966ecu;
    // NOP
label_1966f0:
    // 0x1966f0: 0x80659d4  j           func_196750
    ctx->pc = 0x1966F0u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x1966F8u;
    // 0x1966f8: 0x0  nop
    ctx->pc = 0x1966f8u;
    // NOP
    // 0x1966fc: 0x0  nop
    ctx->pc = 0x1966fcu;
    // NOP
label_196700:
    // 0x196700: 0x80659d4  j           func_196750
    ctx->pc = 0x196700u;
    ctx->pc = 0x196750u;
    goto label_196750;
    ctx->pc = 0x196708u;
    // 0x196708: 0x0  nop
    ctx->pc = 0x196708u;
    // NOP
    // 0x19670c: 0x0  nop
    ctx->pc = 0x19670cu;
    // NOP
label_196710:
    // 0x196710: 0x8065a18  j           func_196860
    ctx->pc = 0x196710u;
    ctx->pc = 0x196860u;
    goto label_196860;
    ctx->pc = 0x196718u;
    // 0x196718: 0x0  nop
    ctx->pc = 0x196718u;
    // NOP
    // 0x19671c: 0x0  nop
    ctx->pc = 0x19671cu;
    // NOP
label_196720:
    // 0x196720: 0x8065a18  j           func_196860
    ctx->pc = 0x196720u;
    ctx->pc = 0x196860u;
    goto label_196860;
    ctx->pc = 0x196728u;
    // 0x196728: 0x0  nop
    ctx->pc = 0x196728u;
    // NOP
    // 0x19672c: 0x0  nop
    ctx->pc = 0x19672cu;
    // NOP
label_196730:
    // 0x196730: 0x8065a18  j           func_196860
    ctx->pc = 0x196730u;
    ctx->pc = 0x196860u;
    goto label_196860;
    ctx->pc = 0x196738u;
    // 0x196738: 0x0  nop
    ctx->pc = 0x196738u;
    // NOP
    // 0x19673c: 0x0  nop
    ctx->pc = 0x19673cu;
    // NOP
label_196740:
    // 0x196740: 0x8065a18  j           func_196860
    ctx->pc = 0x196740u;
    ctx->pc = 0x196860u;
    goto label_196860;
    ctx->pc = 0x196748u;
    // 0x196748: 0x0  nop
    ctx->pc = 0x196748u;
    // NOP
    // 0x19674c: 0x0  nop
    ctx->pc = 0x19674cu;
    // NOP
label_196750:
    // 0x196750: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x196750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x196754: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x196754u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x196758: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x19675c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x196760: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x196760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x196764: 0x2482fff1  addiu       $v0, $a0, -0xF
    ctx->pc = 0x196764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967281));
    // 0x196768: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x196768u;
    {
        const bool branch_taken_0x196768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196768u;
            // 0x19676c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196768) {
            ctx->pc = 0x196778u;
            goto label_196778;
        }
    }
    ctx->pc = 0x196770u;
    // 0x196770: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x196770u;
    {
        const bool branch_taken_0x196770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196770u;
            // 0x196774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196770) {
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x196778u;
label_196778:
    // 0x196778: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x196778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19677c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x196780: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x196780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x196784: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196788: 0x8c48d188  lw          $t0, -0x2E78($v0)
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
    // 0x19678c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x196790: 0x8d070494  lw          $a3, 0x494($t0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1172)));
    // 0x196794: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x196794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196798: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19679c: 0x24426078  addiu       $v0, $v0, 0x6078
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24696));
    // 0x1967a0: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x1967a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1967a4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1967a8: 0xad060494  sw          $a2, 0x494($t0)
    ctx->pc = 0x1967a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1172), GPR_U32(ctx, 6));
    // 0x1967ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1967b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1967b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1967b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1967b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1967b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1967b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1967bc: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1967BCu;
    {
        const bool branch_taken_0x1967bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967bc) {
            ctx->pc = 0x1967C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1967BCu;
            // 0x1967c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1967CCu;
            goto label_1967cc;
        }
    }
    ctx->pc = 0x1967C4u;
    // 0x1967c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1967C4u;
    {
        const bool branch_taken_0x1967c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967C4u;
            // 0x1967c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967c4) {
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x1967CCu;
label_1967cc:
    // 0x1967cc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1967CCu;
    {
        const bool branch_taken_0x1967cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1967cc) {
            ctx->pc = 0x1967E4u;
            goto label_1967e4;
        }
    }
    ctx->pc = 0x1967D4u;
    // 0x1967d4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1967D4u;
    {
        const bool branch_taken_0x1967d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1967d4) {
            ctx->pc = 0x1967E4u;
            goto label_1967e4;
        }
    }
    ctx->pc = 0x1967DCu;
    // 0x1967dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967DCu;
            // 0x1967e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x1967E4u;
label_1967e4:
    // 0x1967e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1967e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1967ec: 0x8c42d170  lw          $v0, -0x2E90($v0)
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
    // 0x1967f0: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x1967f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x1967f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1967f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1967f8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1967F8u;
    {
        const bool branch_taken_0x1967f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967f8) {
            ctx->pc = 0x1967FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1967F8u;
            // 0x1967fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x196800u;
    // 0x196800: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196804: 0x8c42d0f0  lw          $v0, -0x2F10($v0)
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x196808: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x196808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19680c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19680Cu;
    {
        const bool branch_taken_0x19680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19680c) {
            ctx->pc = 0x19682Cu;
            goto label_19682c;
        }
    }
    ctx->pc = 0x196814u;
    // 0x196814: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196818: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x19681c: 0x8c44d188  lw          $a0, -0x2E78($v0)
    ctx->pc = 0x19681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955400)));
    // 0x196820: 0x8c820494  lw          $v0, 0x494($a0)
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x196824: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x196828: 0xac820494  sw          $v0, 0x494($a0)
    ctx->pc = 0x196828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
label_19682c:
    // 0x19682c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196830: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x196830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x196834: 0x8c44d0f0  lw          $a0, -0x2F10($v0)
    ctx->pc = 0x196834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x196838: 0x34620c00  ori         $v0, $v1, 0xC00
    ctx->pc = 0x196838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x19683c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x19683cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x196840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196840u;
    {
        const bool branch_taken_0x196840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196840) {
            ctx->pc = 0x196850u;
            goto label_196850;
        }
    }
    ctx->pc = 0x196848u;
    // 0x196848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196848u;
    {
        const bool branch_taken_0x196848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196848u;
            // 0x19684c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196848) {
            ctx->pc = 0x196854u;
            goto label_196854;
        }
    }
    ctx->pc = 0x196850u;
label_196850:
    // 0x196850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196854:
    // 0x196854: 0x3e00008  jr          $ra
    ctx->pc = 0x196854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19685Cu;
    // 0x19685c: 0x0  nop
    ctx->pc = 0x19685cu;
    // NOP
label_196860:
    // 0x196860: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x196860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x196864: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x196864u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x196868: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x196868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x19686c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x19686cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x196870: 0x2462ffe8  addiu       $v0, $v1, -0x18
    ctx->pc = 0x196870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x196874: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x196874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x196878: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x196878u;
    {
        const bool branch_taken_0x196878 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196878u;
            // 0x19687c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196878) {
            ctx->pc = 0x196888u;
            goto label_196888;
        }
    }
    ctx->pc = 0x196880u;
    // 0x196880: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x196880u;
    {
        const bool branch_taken_0x196880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196880u;
            // 0x196884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196880) {
            ctx->pc = 0x1969A4u;
            goto label_1969a4;
        }
    }
    ctx->pc = 0x196888u;
label_196888:
    // 0x196888: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19688c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x19688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x196890: 0x8c44d0f0  lw          $a0, -0x2F10($v0)
    ctx->pc = 0x196890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x196894: 0x34628300  ori         $v0, $v1, 0x8300
    ctx->pc = 0x196894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33536);
    // 0x196898: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x196898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19689c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19689Cu;
    {
        const bool branch_taken_0x19689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19689c) {
            ctx->pc = 0x1968ACu;
            goto label_1968ac;
        }
    }
    ctx->pc = 0x1968A4u;
    // 0x1968a4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1968A4u;
    {
        const bool branch_taken_0x1968a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968A4u;
            // 0x1968a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968a4) {
            ctx->pc = 0x1969A4u;
            goto label_1969a4;
        }
    }
    ctx->pc = 0x1968ACu;
label_1968ac:
    // 0x1968ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1968acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1968b0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1968b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1968b4: 0x24636078  addiu       $v1, $v1, 0x6078
    ctx->pc = 0x1968b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24696));
    // 0x1968b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1968b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1968bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1968bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1968c0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1968c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1968c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1968C4u;
    {
        const bool branch_taken_0x1968c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968c4) {
            ctx->pc = 0x1968D4u;
            goto label_1968d4;
        }
    }
    ctx->pc = 0x1968CCu;
    // 0x1968cc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968CCu;
            // 0x1968d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x1969A4u;
            goto label_1969a4;
        }
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1968d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1968d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1968dc: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1968dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1968e0: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1968E0u;
    {
        const bool branch_taken_0x1968e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1968e0) {
            ctx->pc = 0x1969A0u;
            goto label_1969a0;
        }
    }
    ctx->pc = 0x1968E8u;
    // 0x1968e8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1968ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1968ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1968f0: 0x90679720  lbu         $a3, -0x68E0($v1)
    ctx->pc = 0x1968f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x1968f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1968f8: 0x8c8cd178  lw          $t4, -0x2E88($a0)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955384)));
    // 0x1968fc: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x1968fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x196900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196904: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x196908: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x19690c: 0x38e80001  xori        $t0, $a3, 0x1
    ctx->pc = 0x19690cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x196910: 0x906bf35b  lbu         $t3, -0xCA5($v1)
    ctx->pc = 0x196910u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x196914: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x196914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196918: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x196918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x19691c: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x196920: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x196924: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x196928: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19692c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x19692cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x196930: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x196930u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x196934: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x196938: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19693c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19693Cu;
    {
        const bool branch_taken_0x19693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19693Cu;
            // 0x196940: 0xa96821  addu        $t5, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19693c) {
            ctx->pc = 0x196980u;
            goto label_196980;
        }
    }
    ctx->pc = 0x196944u;
label_196944:
    // 0x196944: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x196948: 0x1a54821  addu        $t1, $t5, $a1
    ctx->pc = 0x196948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x19694c: 0x8d2500c0  lw          $a1, 0xC0($t1)
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
    // 0x196950: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x196950u;
    {
        const bool branch_taken_0x196950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x196950) {
            ctx->pc = 0x1969A0u;
            goto label_1969a0;
        }
    }
    ctx->pc = 0x196958u;
    // 0x196958: 0x8d250100  lw          $a1, 0x100($t1)
    ctx->pc = 0x196958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 256)));
    // 0x19695c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x19695cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x196960: 0x15850005  bne         $t4, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196960u;
    {
        const bool branch_taken_0x196960 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        if (branch_taken_0x196960) {
            ctx->pc = 0x196978u;
            goto label_196978;
        }
    }
    ctx->pc = 0x196968u;
    // 0x196968: 0x8c85bedc  lw          $a1, -0x4124($a0)
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950620)));
    // 0x19696c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x19696cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x196970: 0xac65bedc  sw          $a1, -0x4124($v1)
    ctx->pc = 0x196970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 5));
    // 0x196974: 0x0  nop
    ctx->pc = 0x196974u;
    // NOP
label_196978:
    // 0x196978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19697c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_196980:
    // 0x196980: 0x11680003  beq         $t3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196980u;
    {
        const bool branch_taken_0x196980 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 8));
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196980u;
            // 0x196984: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196980) {
            ctx->pc = 0x196990u;
            goto label_196990;
        }
    }
    ctx->pc = 0x196988u;
    // 0x196988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196988u;
    {
        const bool branch_taken_0x196988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196988u;
            // 0x19698c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196988) {
            ctx->pc = 0x196994u;
            goto label_196994;
        }
    }
    ctx->pc = 0x196990u;
label_196990:
    // 0x196990: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x196990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196994:
    // 0x196994: 0x125282a  slt         $a1, $t1, $a1
    ctx->pc = 0x196994u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x196998: 0x54a0ffea  bnel        $a1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x196998u;
    {
        const bool branch_taken_0x196998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x196998) {
            ctx->pc = 0x19699Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196998u;
            // 0x19699c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x196944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196944;
        }
    }
    ctx->pc = 0x1969A0u;
label_1969a0:
    // 0x1969a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1969a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1969a4:
    // 0x1969a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1969A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1969ACu;
    // 0x1969ac: 0x0  nop
    ctx->pc = 0x1969acu;
    // NOP
    ctx->pc = 0x1969b0u;
}
