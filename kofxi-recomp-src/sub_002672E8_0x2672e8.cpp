#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002672E8
// Address: 0x2672e8 - 0x2673c0
void sub_002672E8_0x2672e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002672E8_0x2672e8");
#endif

    switch (ctx->pc) {
        case 0x267310u: goto label_267310;
        case 0x267320u: goto label_267320;
        case 0x267338u: goto label_267338;
        case 0x26734cu: goto label_26734c;
        case 0x26735cu: goto label_26735c;
        case 0x267368u: goto label_267368;
        case 0x267380u: goto label_267380;
        case 0x267398u: goto label_267398;
        default: break;
    }

    ctx->pc = 0x2672e8u;

    // 0x2672e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2672e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2672ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2672ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2672f0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2672f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2672f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2672f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2672f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2672f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2672fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2672fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267300: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x267300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x267304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267308: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267308u;
    SET_GPR_U32(ctx, 31, 0x267310u);
    ctx->pc = 0x26730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267308u;
            // 0x26730c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267310u; }
        if (ctx->pc != 0x267310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267310u; }
        if (ctx->pc != 0x267310u) { return; }
    }
    ctx->pc = 0x267310u;
label_267310:
    // 0x267310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267318: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267318u;
    SET_GPR_U32(ctx, 31, 0x267320u);
    ctx->pc = 0x26731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267318u;
            // 0x26731c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267320u; }
        if (ctx->pc != 0x267320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267320u; }
        if (ctx->pc != 0x267320u) { return; }
    }
    ctx->pc = 0x267320u;
label_267320:
    // 0x267320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267324: 0x34058014  ori         $a1, $zero, 0x8014
    ctx->pc = 0x267324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x267328: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26732c: 0x34a5697c  ori         $a1, $a1, 0x697C
    ctx->pc = 0x26732cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27004);
    // 0x267330: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267330u;
    SET_GPR_U32(ctx, 31, 0x267338u);
    ctx->pc = 0x267334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267330u;
            // 0x267334: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267338u; }
        if (ctx->pc != 0x267338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267338u; }
        if (ctx->pc != 0x267338u) { return; }
    }
    ctx->pc = 0x267338u;
label_267338:
    // 0x267338: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267338u;
    {
        const bool branch_taken_0x267338 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267338u;
            // 0x26733c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267338) {
            ctx->pc = 0x267354u;
            goto label_267354;
        }
    }
    ctx->pc = 0x267340u;
    // 0x267340: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267344: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267344u;
    SET_GPR_U32(ctx, 31, 0x26734Cu);
    ctx->pc = 0x267348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267344u;
            // 0x267348: 0x24a57850  addiu       $a1, $a1, 0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26734Cu; }
        if (ctx->pc != 0x26734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26734Cu; }
        if (ctx->pc != 0x26734Cu) { return; }
    }
    ctx->pc = 0x26734Cu;
label_26734c:
    // 0x26734c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26734Cu;
    {
        const bool branch_taken_0x26734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26734Cu;
            // 0x267350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26734c) {
            ctx->pc = 0x2673A8u;
            goto label_2673a8;
        }
    }
    ctx->pc = 0x267354u;
label_267354:
    // 0x267354: 0xc08a254  jal         func_228950
    ctx->pc = 0x267354u;
    SET_GPR_U32(ctx, 31, 0x26735Cu);
    ctx->pc = 0x267358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267354u;
            // 0x267358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26735Cu; }
        if (ctx->pc != 0x26735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26735Cu; }
        if (ctx->pc != 0x26735Cu) { return; }
    }
    ctx->pc = 0x26735Cu;
label_26735c:
    // 0x26735c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x26735cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x267360: 0xc08a254  jal         func_228950
    ctx->pc = 0x267360u;
    SET_GPR_U32(ctx, 31, 0x267368u);
    ctx->pc = 0x267364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267360u;
            // 0x267364: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267368u; }
        if (ctx->pc != 0x267368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267368u; }
        if (ctx->pc != 0x267368u) { return; }
    }
    ctx->pc = 0x267368u;
label_267368:
    // 0x267368: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x267368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x26736c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267370: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x267370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x267374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267378: 0xc09a01a  jal         func_268068
    ctx->pc = 0x267378u;
    SET_GPR_U32(ctx, 31, 0x267380u);
    ctx->pc = 0x26737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267378u;
            // 0x26737c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268068u;
    if (runtime->hasFunction(0x268068u)) {
        auto targetFn = runtime->lookupFunction(0x268068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267380u; }
        if (ctx->pc != 0x267380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268068_0x268068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267380u; }
        if (ctx->pc != 0x267380u) { return; }
    }
    ctx->pc = 0x267380u;
label_267380:
    // 0x267380: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267380u;
    {
        const bool branch_taken_0x267380 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267380u;
            // 0x267384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267380) {
            ctx->pc = 0x267390u;
            goto label_267390;
        }
    }
    ctx->pc = 0x267388u;
    // 0x267388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x267388u;
    {
        const bool branch_taken_0x267388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267388u;
            // 0x26738c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267388) {
            ctx->pc = 0x2673A8u;
            goto label_2673a8;
        }
    }
    ctx->pc = 0x267390u;
label_267390:
    // 0x267390: 0xc099f30  jal         func_267CC0
    ctx->pc = 0x267390u;
    SET_GPR_U32(ctx, 31, 0x267398u);
    ctx->pc = 0x267394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267390u;
            // 0x267394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267CC0u;
    if (runtime->hasFunction(0x267CC0u)) {
        auto targetFn = runtime->lookupFunction(0x267CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267398u; }
        if (ctx->pc != 0x267398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267CC0_0x267cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267398u; }
        if (ctx->pc != 0x267398u) { return; }
    }
    ctx->pc = 0x267398u;
label_267398:
    // 0x267398: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x267398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26739c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26739cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2673a0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2673a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2673a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2673a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2673a8:
    // 0x2673a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2673a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2673ac: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2673acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2673b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2673b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2673b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2673B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2673B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2673B4u;
            // 0x2673b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2673BCu;
    // 0x2673bc: 0x0  nop
    ctx->pc = 0x2673bcu;
    // NOP
    ctx->pc = 0x2673c0u;
}
