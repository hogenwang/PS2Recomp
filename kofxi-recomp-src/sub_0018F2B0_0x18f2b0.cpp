#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F2B0
// Address: 0x18f2b0 - 0x18f3e0
void sub_0018F2B0_0x18f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F2B0_0x18f2b0");
#endif

    switch (ctx->pc) {
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f304u: goto label_18f304;
        case 0x18f310u: goto label_18f310;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f330u: goto label_18f330;
        case 0x18f33cu: goto label_18f33c;
        case 0x18f348u: goto label_18f348;
        case 0x18f354u: goto label_18f354;
        case 0x18f368u: goto label_18f368;
        case 0x18f374u: goto label_18f374;
        case 0x18f380u: goto label_18f380;
        case 0x18f38cu: goto label_18f38c;
        case 0x18f3a0u: goto label_18f3a0;
        case 0x18f3acu: goto label_18f3ac;
        case 0x18f3b8u: goto label_18f3b8;
        case 0x18f3c4u: goto label_18f3c4;
        case 0x18f3ccu: goto label_18f3cc;
        default: break;
    }

    ctx->pc = 0x18f2b0u;

    // 0x18f2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f2b4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x18f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18f2b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f2bc: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18F2BCu;
    {
        const bool branch_taken_0x18f2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2BCu;
            // 0x18f2c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2bc) {
            ctx->pc = 0x18F394u;
            goto label_18f394;
        }
    }
    ctx->pc = 0x18F2C4u;
    // 0x18f2c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f2c8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18F2C8u;
    {
        const bool branch_taken_0x18f2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f2c8) {
            ctx->pc = 0x18F35Cu;
            goto label_18f35c;
        }
    }
    ctx->pc = 0x18F2D0u;
    // 0x18f2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f2d4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18F2D4u;
    {
        const bool branch_taken_0x18f2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f2d4) {
            ctx->pc = 0x18F324u;
            goto label_18f324;
        }
    }
    ctx->pc = 0x18F2DCu;
    // 0x18f2dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F2DCu;
    {
        const bool branch_taken_0x18f2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2dc) {
            ctx->pc = 0x18F2ECu;
            goto label_18f2ec;
        }
    }
    ctx->pc = 0x18F2E4u;
    // 0x18f2e4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18F2E4u;
    {
        const bool branch_taken_0x18f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2e4) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F2ECu;
label_18f2ec:
    // 0x18f2ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f2f0: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F2F0u;
    SET_GPR_U32(ctx, 31, 0x18F2F8u);
    ctx->pc = 0x18F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2F0u;
            // 0x18f2f4: 0x2484bc30  addiu       $a0, $a0, -0x43D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2F8u; }
        if (ctx->pc != 0x18F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2F8u; }
        if (ctx->pc != 0x18F2F8u) { return; }
    }
    ctx->pc = 0x18F2F8u;
label_18f2f8:
    // 0x18f2f8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f2fc: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F2FCu;
    SET_GPR_U32(ctx, 31, 0x18F304u);
    ctx->pc = 0x18F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2FCu;
            // 0x18f300: 0x2484bc34  addiu       $a0, $a0, -0x43CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949940));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F304u; }
        if (ctx->pc != 0x18F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F304u; }
        if (ctx->pc != 0x18F304u) { return; }
    }
    ctx->pc = 0x18F304u;
label_18f304:
    // 0x18f304: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f308: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F308u;
    SET_GPR_U32(ctx, 31, 0x18F310u);
    ctx->pc = 0x18F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F308u;
            // 0x18f30c: 0x2484bc38  addiu       $a0, $a0, -0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F310u; }
        if (ctx->pc != 0x18F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F310u; }
        if (ctx->pc != 0x18F310u) { return; }
    }
    ctx->pc = 0x18F310u;
label_18f310:
    // 0x18f310: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f314: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F314u;
            // 0x18f318: 0x2484bc3c  addiu       $a0, $a0, -0x43C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949948));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18F31Cu;
    {
        const bool branch_taken_0x18f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f31c) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F324u;
label_18f324:
    // 0x18f324: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f328: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F328u;
    SET_GPR_U32(ctx, 31, 0x18F330u);
    ctx->pc = 0x18F32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F328u;
            // 0x18f32c: 0x2484bc20  addiu       $a0, $a0, -0x43E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F330u; }
        if (ctx->pc != 0x18F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F330u; }
        if (ctx->pc != 0x18F330u) { return; }
    }
    ctx->pc = 0x18F330u;
label_18f330:
    // 0x18f330: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f334: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F334u;
    SET_GPR_U32(ctx, 31, 0x18F33Cu);
    ctx->pc = 0x18F338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F334u;
            // 0x18f338: 0x2484bc24  addiu       $a0, $a0, -0x43DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949924));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F33Cu; }
        if (ctx->pc != 0x18F33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F33Cu; }
        if (ctx->pc != 0x18F33Cu) { return; }
    }
    ctx->pc = 0x18F33Cu;
label_18f33c:
    // 0x18f33c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f340: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F340u;
    SET_GPR_U32(ctx, 31, 0x18F348u);
    ctx->pc = 0x18F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F340u;
            // 0x18f344: 0x2484bc28  addiu       $a0, $a0, -0x43D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F348u; }
        if (ctx->pc != 0x18F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F348u; }
        if (ctx->pc != 0x18F348u) { return; }
    }
    ctx->pc = 0x18F348u;
label_18f348:
    // 0x18f348: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f34c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F34Cu;
    SET_GPR_U32(ctx, 31, 0x18F354u);
    ctx->pc = 0x18F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F34Cu;
            // 0x18f350: 0x2484bc2c  addiu       $a0, $a0, -0x43D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949932));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F354u; }
        if (ctx->pc != 0x18F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F354u; }
        if (ctx->pc != 0x18F354u) { return; }
    }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18F354u;
    {
        const bool branch_taken_0x18f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f354) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F35Cu;
label_18f35c:
    // 0x18f35c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f360: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F360u;
    SET_GPR_U32(ctx, 31, 0x18F368u);
    ctx->pc = 0x18F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F360u;
            // 0x18f364: 0x2484bc10  addiu       $a0, $a0, -0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F368u; }
        if (ctx->pc != 0x18F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F368u; }
        if (ctx->pc != 0x18F368u) { return; }
    }
    ctx->pc = 0x18F368u;
label_18f368:
    // 0x18f368: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f36c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F36Cu;
    SET_GPR_U32(ctx, 31, 0x18F374u);
    ctx->pc = 0x18F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F36Cu;
            // 0x18f370: 0x2484bc14  addiu       $a0, $a0, -0x43EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949908));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F374u; }
        if (ctx->pc != 0x18F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F374u; }
        if (ctx->pc != 0x18F374u) { return; }
    }
    ctx->pc = 0x18F374u;
label_18f374:
    // 0x18f374: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f378: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F378u;
    SET_GPR_U32(ctx, 31, 0x18F380u);
    ctx->pc = 0x18F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F378u;
            // 0x18f37c: 0x2484bc18  addiu       $a0, $a0, -0x43E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F380u; }
        if (ctx->pc != 0x18F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F380u; }
        if (ctx->pc != 0x18F380u) { return; }
    }
    ctx->pc = 0x18F380u;
label_18f380:
    // 0x18f380: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f384: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F384u;
    SET_GPR_U32(ctx, 31, 0x18F38Cu);
    ctx->pc = 0x18F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F384u;
            // 0x18f388: 0x2484bc1c  addiu       $a0, $a0, -0x43E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949916));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F38Cu; }
        if (ctx->pc != 0x18F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F38Cu; }
        if (ctx->pc != 0x18F38Cu) { return; }
    }
    ctx->pc = 0x18F38Cu;
label_18f38c:
    // 0x18f38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F38Cu;
    {
        const bool branch_taken_0x18f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f38c) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F394u;
label_18f394:
    // 0x18f394: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f398: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F398u;
    SET_GPR_U32(ctx, 31, 0x18F3A0u);
    ctx->pc = 0x18F39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F398u;
            // 0x18f39c: 0x2484bc10  addiu       $a0, $a0, -0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3A0u; }
        if (ctx->pc != 0x18F3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3A0u; }
        if (ctx->pc != 0x18F3A0u) { return; }
    }
    ctx->pc = 0x18F3A0u;
label_18f3a0:
    // 0x18f3a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f3a4: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F3A4u;
    SET_GPR_U32(ctx, 31, 0x18F3ACu);
    ctx->pc = 0x18F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3A4u;
            // 0x18f3a8: 0x2484bc14  addiu       $a0, $a0, -0x43EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949908));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3ACu; }
        if (ctx->pc != 0x18F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3ACu; }
        if (ctx->pc != 0x18F3ACu) { return; }
    }
    ctx->pc = 0x18F3ACu;
label_18f3ac:
    // 0x18f3ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f3b0: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F3B0u;
    SET_GPR_U32(ctx, 31, 0x18F3B8u);
    ctx->pc = 0x18F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3B0u;
            // 0x18f3b4: 0x2484bc18  addiu       $a0, $a0, -0x43E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B8u; }
        if (ctx->pc != 0x18F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B8u; }
        if (ctx->pc != 0x18F3B8u) { return; }
    }
    ctx->pc = 0x18F3B8u;
label_18f3b8:
    // 0x18f3b8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f3bc: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F3BCu;
    SET_GPR_U32(ctx, 31, 0x18F3C4u);
    ctx->pc = 0x18F3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3BCu;
            // 0x18f3c0: 0x2484bc1c  addiu       $a0, $a0, -0x43E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949916));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C4u; }
        if (ctx->pc != 0x18F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C4u; }
        if (ctx->pc != 0x18F3C4u) { return; }
    }
    ctx->pc = 0x18F3C4u;
label_18f3c4:
    // 0x18f3c4: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x18F3C4u;
    SET_GPR_U32(ctx, 31, 0x18F3CCu);
    ctx->pc = 0x197F80u;
    if (runtime->hasFunction(0x197F80u)) {
        auto targetFn = runtime->lookupFunction(0x197F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3CCu; }
        if (ctx->pc != 0x18F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197F80_0x197f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3CCu; }
        if (ctx->pc != 0x18F3CCu) { return; }
    }
    ctx->pc = 0x18F3CCu;
label_18f3cc:
    // 0x18f3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3D0u;
            // 0x18f3d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F3D8u;
    // 0x18f3d8: 0x0  nop
    ctx->pc = 0x18f3d8u;
    // NOP
    // 0x18f3dc: 0x0  nop
    ctx->pc = 0x18f3dcu;
    // NOP
    ctx->pc = 0x18f3e0u;
}
