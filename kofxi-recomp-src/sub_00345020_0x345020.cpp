#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345020
// Address: 0x345020 - 0x345420
void sub_00345020_0x345020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345020_0x345020");
#endif

    switch (ctx->pc) {
        case 0x345060u: goto label_345060;
        case 0x34506cu: goto label_34506c;
        case 0x345080u: goto label_345080;
        case 0x3450b0u: goto label_3450b0;
        case 0x34510cu: goto label_34510c;
        case 0x345118u: goto label_345118;
        case 0x345144u: goto label_345144;
        case 0x345178u: goto label_345178;
        case 0x3451d4u: goto label_3451d4;
        case 0x3451e0u: goto label_3451e0;
        case 0x345204u: goto label_345204;
        case 0x345220u: goto label_345220;
        case 0x345260u: goto label_345260;
        case 0x34526cu: goto label_34526c;
        case 0x345280u: goto label_345280;
        case 0x3452b0u: goto label_3452b0;
        case 0x34530cu: goto label_34530c;
        case 0x345318u: goto label_345318;
        case 0x345344u: goto label_345344;
        case 0x345378u: goto label_345378;
        case 0x3453d4u: goto label_3453d4;
        case 0x3453e0u: goto label_3453e0;
        case 0x345404u: goto label_345404;
        case 0x34540cu: goto label_34540c;
        default: break;
    }

    ctx->pc = 0x345020u;

    // 0x345020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345024: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34502c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x345034: 0x8c454378  lw          $a1, 0x4378($v0)
    ctx->pc = 0x345034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345038: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34503c: 0x8c433f80  lw          $v1, 0x3F80($v0)
    ctx->pc = 0x34503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16256)));
    // 0x345040: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345044: 0x8c444048  lw          $a0, 0x4048($v0)
    ctx->pc = 0x345044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16456)));
    // 0x345048: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x345048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34504c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x345050: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x345050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x345054: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x345054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x345058: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x345058u;
    SET_GPR_U32(ctx, 31, 0x345060u);
    ctx->pc = 0x34505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345058u;
            // 0x34505c: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (runtime->hasFunction(0x20D730u)) {
        auto targetFn = runtime->lookupFunction(0x20D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345060u; }
        if (ctx->pc != 0x345060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D730_0x20d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345060u; }
        if (ctx->pc != 0x345060u) { return; }
    }
    ctx->pc = 0x345060u;
label_345060:
    // 0x345060: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345064: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x345064u;
    SET_GPR_U32(ctx, 31, 0x34506Cu);
    ctx->pc = 0x345068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345064u;
            // 0x345068: 0x8c444048  lw          $a0, 0x4048($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34506Cu; }
        if (ctx->pc != 0x34506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34506Cu; }
        if (ctx->pc != 0x34506Cu) { return; }
    }
    ctx->pc = 0x34506Cu;
label_34506c:
    // 0x34506c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345070: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x345070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x345074: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x345074u;
    {
        const bool branch_taken_0x345074 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x345078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345074u;
            // 0x345078: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345074) {
            ctx->pc = 0x3450D0u;
            goto label_3450d0;
        }
    }
    ctx->pc = 0x34507Cu;
    // 0x34507c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34507cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345080:
    // 0x345080: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x345080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x345084: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345088: 0x8c653fc0  lw          $a1, 0x3FC0($v1)
    ctx->pc = 0x345088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16320)));
    // 0x34508c: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x34508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345090: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x345094: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x345094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x345098: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x345098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34509c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3450a0: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x3450a4: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x3450a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3450a8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x3450A8u;
    SET_GPR_U32(ctx, 31, 0x3450B0u);
    ctx->pc = 0x3450ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3450A8u;
            // 0x3450ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3450B0u; }
        if (ctx->pc != 0x3450B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3450B0u; }
        if (ctx->pc != 0x3450B0u) { return; }
    }
    ctx->pc = 0x3450B0u;
label_3450b0:
    // 0x3450b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3450B0u;
    {
        const bool branch_taken_0x3450b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3450b0) {
            ctx->pc = 0x3450D0u;
            goto label_3450d0;
        }
    }
    ctx->pc = 0x3450B8u;
    // 0x3450b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3450bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3450c0: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x3450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x3450c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3450c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3450c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3450C8u;
    {
        const bool branch_taken_0x3450c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3450CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3450C8u;
            // 0x3450cc: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c8) {
            ctx->pc = 0x345080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345080;
        }
    }
    ctx->pc = 0x3450D0u;
label_3450d0:
    // 0x3450d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3450d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3450d4: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x3450d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x3450d8: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x3450d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3450dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3450DCu;
    {
        const bool branch_taken_0x3450dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3450dc) {
            ctx->pc = 0x345120u;
            goto label_345120;
        }
    }
    ctx->pc = 0x3450E4u;
    // 0x3450e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x3450e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3450e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3450e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3450ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3450ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3450f0: 0x8c433fc0  lw          $v1, 0x3FC0($v0)
    ctx->pc = 0x3450f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16320)));
    // 0x3450f4: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3450f8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3450f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3450fc: 0x8c444050  lw          $a0, 0x4050($v0)
    ctx->pc = 0x3450fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x345100: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x345100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x345104: 0xc083654  jal         func_20D950
    ctx->pc = 0x345104u;
    SET_GPR_U32(ctx, 31, 0x34510Cu);
    ctx->pc = 0x345108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345104u;
            // 0x345108: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D950u;
    if (runtime->hasFunction(0x20D950u)) {
        auto targetFn = runtime->lookupFunction(0x20D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34510Cu; }
        if (ctx->pc != 0x34510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D950_0x20d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34510Cu; }
        if (ctx->pc != 0x34510Cu) { return; }
    }
    ctx->pc = 0x34510Cu;
label_34510c:
    // 0x34510c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345110: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x345110u;
    SET_GPR_U32(ctx, 31, 0x345118u);
    ctx->pc = 0x345114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345110u;
            // 0x345114: 0x8c444050  lw          $a0, 0x4050($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345118u; }
        if (ctx->pc != 0x345118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345118u; }
        if (ctx->pc != 0x345118u) { return; }
    }
    ctx->pc = 0x345118u;
label_345118:
    // 0x345118: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x345118u;
    {
        const bool branch_taken_0x345118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345118) {
            ctx->pc = 0x345130u;
            goto label_345130;
        }
    }
    ctx->pc = 0x345120u;
label_345120:
    // 0x345120: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345124: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x345124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345128: 0x8c424050  lw          $v0, 0x4050($v0)
    ctx->pc = 0x345128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x34512c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x34512cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_345130:
    // 0x345130: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345134: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x345134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x345138: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x345138u;
    {
        const bool branch_taken_0x345138 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345138u;
            // 0x34513c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345138) {
            ctx->pc = 0x345198u;
            goto label_345198;
        }
    }
    ctx->pc = 0x345140u;
    // 0x345140: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x345140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345144:
    // 0x345144: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x345144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x345148: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34514c: 0x8c654000  lw          $a1, 0x4000($v1)
    ctx->pc = 0x34514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x345150: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x345150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345154: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x345154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x345158: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x345158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34515c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345160: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x345160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x345164: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x345164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x345168: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x345168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x34516c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345170: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x345170u;
    SET_GPR_U32(ctx, 31, 0x345178u);
    ctx->pc = 0x345174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345170u;
            // 0x345174: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345178u; }
        if (ctx->pc != 0x345178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345178u; }
        if (ctx->pc != 0x345178u) { return; }
    }
    ctx->pc = 0x345178u;
label_345178:
    // 0x345178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x345178u;
    {
        const bool branch_taken_0x345178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345178) {
            ctx->pc = 0x345198u;
            goto label_345198;
        }
    }
    ctx->pc = 0x345180u;
    // 0x345180: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345184: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x345184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x345188: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x345188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x34518c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x34518cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x345190: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x345190u;
    {
        const bool branch_taken_0x345190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345190u;
            // 0x345194: 0x26310240  addiu       $s1, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345190) {
            ctx->pc = 0x345144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345144;
        }
    }
    ctx->pc = 0x345198u;
label_345198:
    // 0x345198: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34519c: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x34519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x3451a0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3451a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3451a4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3451A4u;
    {
        const bool branch_taken_0x3451a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3451a4) {
            ctx->pc = 0x3451E8u;
            goto label_3451e8;
        }
    }
    ctx->pc = 0x3451ACu;
    // 0x3451ac: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x3451acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3451b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3451b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3451b4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3451b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3451b8: 0x8c434000  lw          $v1, 0x4000($v0)
    ctx->pc = 0x3451b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x3451bc: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3451bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3451c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3451c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3451c4: 0x8c444058  lw          $a0, 0x4058($v0)
    ctx->pc = 0x3451c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x3451c8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x3451c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3451cc: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x3451CCu;
    SET_GPR_U32(ctx, 31, 0x3451D4u);
    ctx->pc = 0x3451D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3451CCu;
            // 0x3451d0: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (runtime->hasFunction(0x20D730u)) {
        auto targetFn = runtime->lookupFunction(0x20D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3451D4u; }
        if (ctx->pc != 0x3451D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D730_0x20d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3451D4u; }
        if (ctx->pc != 0x3451D4u) { return; }
    }
    ctx->pc = 0x3451D4u;
label_3451d4:
    // 0x3451d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3451d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3451d8: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x3451D8u;
    SET_GPR_U32(ctx, 31, 0x3451E0u);
    ctx->pc = 0x3451DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3451D8u;
            // 0x3451dc: 0x8c444058  lw          $a0, 0x4058($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3451E0u; }
        if (ctx->pc != 0x3451E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3451E0u; }
        if (ctx->pc != 0x3451E0u) { return; }
    }
    ctx->pc = 0x3451E0u;
label_3451e0:
    // 0x3451e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3451E0u;
    {
        const bool branch_taken_0x3451e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3451e0) {
            ctx->pc = 0x3451F8u;
            goto label_3451f8;
        }
    }
    ctx->pc = 0x3451E8u;
label_3451e8:
    // 0x3451e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3451e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3451ec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3451ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3451f0: 0x8c424058  lw          $v0, 0x4058($v0)
    ctx->pc = 0x3451f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x3451f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3451f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3451f8:
    // 0x3451f8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3451f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3451fc: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x3451FCu;
    SET_GPR_U32(ctx, 31, 0x345204u);
    ctx->pc = 0x345200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3451FCu;
            // 0x345200: 0x24845420  addiu       $a0, $a0, 0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (runtime->hasFunction(0x343460u)) {
        auto targetFn = runtime->lookupFunction(0x343460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345204u; }
        if (ctx->pc != 0x345204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343460_0x343460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345204u; }
        if (ctx->pc != 0x345204u) { return; }
    }
    ctx->pc = 0x345204u;
label_345204:
    // 0x345204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34520c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34520cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345210: 0x3e00008  jr          $ra
    ctx->pc = 0x345210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345210u;
            // 0x345214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345218u;
    // 0x345218: 0x0  nop
    ctx->pc = 0x345218u;
    // NOP
    // 0x34521c: 0x0  nop
    ctx->pc = 0x34521cu;
    // NOP
label_345220:
    // 0x345220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345224: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34522c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x345234: 0x8c454378  lw          $a1, 0x4378($v0)
    ctx->pc = 0x345234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345238: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34523c: 0x8c433f80  lw          $v1, 0x3F80($v0)
    ctx->pc = 0x34523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16256)));
    // 0x345240: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345244: 0x8c444048  lw          $a0, 0x4048($v0)
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16456)));
    // 0x345248: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x345248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34524c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x345250: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x345250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x345254: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x345254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x345258: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x345258u;
    SET_GPR_U32(ctx, 31, 0x345260u);
    ctx->pc = 0x34525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345258u;
            // 0x34525c: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (runtime->hasFunction(0x20D730u)) {
        auto targetFn = runtime->lookupFunction(0x20D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345260u; }
        if (ctx->pc != 0x345260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D730_0x20d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345260u; }
        if (ctx->pc != 0x345260u) { return; }
    }
    ctx->pc = 0x345260u;
label_345260:
    // 0x345260: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345264: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x345264u;
    SET_GPR_U32(ctx, 31, 0x34526Cu);
    ctx->pc = 0x345268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345264u;
            // 0x345268: 0x8c444048  lw          $a0, 0x4048($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34526Cu; }
        if (ctx->pc != 0x34526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34526Cu; }
        if (ctx->pc != 0x34526Cu) { return; }
    }
    ctx->pc = 0x34526Cu;
label_34526c:
    // 0x34526c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345270: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x345270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x345274: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x345274u;
    {
        const bool branch_taken_0x345274 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x345278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345274u;
            // 0x345278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345274) {
            ctx->pc = 0x3452D0u;
            goto label_3452d0;
        }
    }
    ctx->pc = 0x34527Cu;
    // 0x34527c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345280:
    // 0x345280: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x345280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x345284: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345288: 0x8c653fc0  lw          $a1, 0x3FC0($v1)
    ctx->pc = 0x345288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16320)));
    // 0x34528c: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x34528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345290: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x345290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x345294: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x345294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x345298: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x345298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34529c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34529cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3452a0: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x3452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x3452a4: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x3452a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3452a8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x3452A8u;
    SET_GPR_U32(ctx, 31, 0x3452B0u);
    ctx->pc = 0x3452ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3452A8u;
            // 0x3452ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3452B0u; }
        if (ctx->pc != 0x3452B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3452B0u; }
        if (ctx->pc != 0x3452B0u) { return; }
    }
    ctx->pc = 0x3452B0u;
label_3452b0:
    // 0x3452b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3452B0u;
    {
        const bool branch_taken_0x3452b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3452b0) {
            ctx->pc = 0x3452D0u;
            goto label_3452d0;
        }
    }
    ctx->pc = 0x3452B8u;
    // 0x3452b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3452b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3452bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3452c0: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x3452c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x3452c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3452c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3452c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3452C8u;
    {
        const bool branch_taken_0x3452c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3452CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3452C8u;
            // 0x3452cc: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452c8) {
            ctx->pc = 0x345280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345280;
        }
    }
    ctx->pc = 0x3452D0u;
label_3452d0:
    // 0x3452d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3452d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3452d4: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x3452d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x3452d8: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x3452d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3452dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3452DCu;
    {
        const bool branch_taken_0x3452dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3452dc) {
            ctx->pc = 0x345320u;
            goto label_345320;
        }
    }
    ctx->pc = 0x3452E4u;
    // 0x3452e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x3452e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3452e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3452e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3452ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3452f0: 0x8c433fc0  lw          $v1, 0x3FC0($v0)
    ctx->pc = 0x3452f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16320)));
    // 0x3452f4: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3452f8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3452f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3452fc: 0x8c444050  lw          $a0, 0x4050($v0)
    ctx->pc = 0x3452fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x345300: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x345300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x345304: 0xc083654  jal         func_20D950
    ctx->pc = 0x345304u;
    SET_GPR_U32(ctx, 31, 0x34530Cu);
    ctx->pc = 0x345308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345304u;
            // 0x345308: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D950u;
    if (runtime->hasFunction(0x20D950u)) {
        auto targetFn = runtime->lookupFunction(0x20D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34530Cu; }
        if (ctx->pc != 0x34530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D950_0x20d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34530Cu; }
        if (ctx->pc != 0x34530Cu) { return; }
    }
    ctx->pc = 0x34530Cu;
label_34530c:
    // 0x34530c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345310: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x345310u;
    SET_GPR_U32(ctx, 31, 0x345318u);
    ctx->pc = 0x345314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345310u;
            // 0x345314: 0x8c444050  lw          $a0, 0x4050($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345318u; }
        if (ctx->pc != 0x345318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345318u; }
        if (ctx->pc != 0x345318u) { return; }
    }
    ctx->pc = 0x345318u;
label_345318:
    // 0x345318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x345318u;
    {
        const bool branch_taken_0x345318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345318) {
            ctx->pc = 0x345330u;
            goto label_345330;
        }
    }
    ctx->pc = 0x345320u;
label_345320:
    // 0x345320: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345324: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x345324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345328: 0x8c424050  lw          $v0, 0x4050($v0)
    ctx->pc = 0x345328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x34532c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x34532cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_345330:
    // 0x345330: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345334: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x345334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x345338: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x345338u;
    {
        const bool branch_taken_0x345338 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345338u;
            // 0x34533c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345338) {
            ctx->pc = 0x345398u;
            goto label_345398;
        }
    }
    ctx->pc = 0x345340u;
    // 0x345340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x345340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345344:
    // 0x345344: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x345344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x345348: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34534c: 0x8c654000  lw          $a1, 0x4000($v1)
    ctx->pc = 0x34534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x345350: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x345350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x345354: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x345354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x345358: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x345358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34535c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x345360: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x345360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x345364: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x345364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x345368: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x345368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x34536c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345370: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x345370u;
    SET_GPR_U32(ctx, 31, 0x345378u);
    ctx->pc = 0x345374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345370u;
            // 0x345374: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345378u; }
        if (ctx->pc != 0x345378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345378u; }
        if (ctx->pc != 0x345378u) { return; }
    }
    ctx->pc = 0x345378u;
label_345378:
    // 0x345378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x345378u;
    {
        const bool branch_taken_0x345378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345378) {
            ctx->pc = 0x345398u;
            goto label_345398;
        }
    }
    ctx->pc = 0x345380u;
    // 0x345380: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x345384: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x345384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x345388: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x345388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x34538c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x34538cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x345390: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x345390u;
    {
        const bool branch_taken_0x345390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345390u;
            // 0x345394: 0x26310240  addiu       $s1, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345390) {
            ctx->pc = 0x345344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345344;
        }
    }
    ctx->pc = 0x345398u;
label_345398:
    // 0x345398: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34539c: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x34539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x3453a0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3453a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3453a4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3453A4u;
    {
        const bool branch_taken_0x3453a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3453a4) {
            ctx->pc = 0x3453E8u;
            goto label_3453e8;
        }
    }
    ctx->pc = 0x3453ACu;
    // 0x3453ac: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x3453acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3453b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3453b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3453b4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3453b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3453b8: 0x8c434000  lw          $v1, 0x4000($v0)
    ctx->pc = 0x3453b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x3453bc: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3453bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3453c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3453c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3453c4: 0x8c444058  lw          $a0, 0x4058($v0)
    ctx->pc = 0x3453c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x3453c8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3453cc: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x3453CCu;
    SET_GPR_U32(ctx, 31, 0x3453D4u);
    ctx->pc = 0x3453D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3453CCu;
            // 0x3453d0: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (runtime->hasFunction(0x20D730u)) {
        auto targetFn = runtime->lookupFunction(0x20D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453D4u; }
        if (ctx->pc != 0x3453D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D730_0x20d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453D4u; }
        if (ctx->pc != 0x3453D4u) { return; }
    }
    ctx->pc = 0x3453D4u;
label_3453d4:
    // 0x3453d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3453d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3453d8: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x3453D8u;
    SET_GPR_U32(ctx, 31, 0x3453E0u);
    ctx->pc = 0x3453DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3453D8u;
            // 0x3453dc: 0x8c444058  lw          $a0, 0x4058($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3446D0u;
    if (runtime->hasFunction(0x3446D0u)) {
        auto targetFn = runtime->lookupFunction(0x3446D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453E0u; }
        if (ctx->pc != 0x3453E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003446D0_0x3446d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453E0u; }
        if (ctx->pc != 0x3453E0u) { return; }
    }
    ctx->pc = 0x3453E0u;
label_3453e0:
    // 0x3453e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3453E0u;
    {
        const bool branch_taken_0x3453e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3453e0) {
            ctx->pc = 0x3453F8u;
            goto label_3453f8;
        }
    }
    ctx->pc = 0x3453E8u;
label_3453e8:
    // 0x3453e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3453e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3453ec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3453ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3453f0: 0x8c424058  lw          $v0, 0x4058($v0)
    ctx->pc = 0x3453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x3453f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3453f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3453f8:
    // 0x3453f8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3453f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3453fc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3453FCu;
    SET_GPR_U32(ctx, 31, 0x345404u);
    ctx->pc = 0x345400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3453FCu;
            // 0x345400: 0x24845420  addiu       $a0, $a0, 0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345404u; }
        if (ctx->pc != 0x345404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345404u; }
        if (ctx->pc != 0x345404u) { return; }
    }
    ctx->pc = 0x345404u;
label_345404:
    // 0x345404: 0xc0d1508  jal         func_345420
    ctx->pc = 0x345404u;
    SET_GPR_U32(ctx, 31, 0x34540Cu);
    ctx->pc = 0x345420u;
    if (runtime->hasFunction(0x345420u)) {
        auto targetFn = runtime->lookupFunction(0x345420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34540Cu; }
        if (ctx->pc != 0x34540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345420_0x345420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34540Cu; }
        if (ctx->pc != 0x34540Cu) { return; }
    }
    ctx->pc = 0x34540Cu;
label_34540c:
    // 0x34540c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34540cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345418: 0x3e00008  jr          $ra
    ctx->pc = 0x345418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345418u;
            // 0x34541c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345420u;
    ctx->pc = 0x345420u;
}
