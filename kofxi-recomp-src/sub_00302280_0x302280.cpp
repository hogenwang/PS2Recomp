#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302280
// Address: 0x302280 - 0x302330
void sub_00302280_0x302280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302280_0x302280");
#endif

    switch (ctx->pc) {
        case 0x302298u: goto label_302298;
        case 0x3022a8u: goto label_3022a8;
        case 0x3022b4u: goto label_3022b4;
        case 0x3022ccu: goto label_3022cc;
        case 0x3022d8u: goto label_3022d8;
        case 0x30230cu: goto label_30230c;
        case 0x302320u: goto label_302320;
        default: break;
    }

    ctx->pc = 0x302280u;

    // 0x302280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30228c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30228cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302290: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x302290u;
    SET_GPR_U32(ctx, 31, 0x302298u);
    ctx->pc = 0x302294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302290u;
            // 0x302294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302298u; }
        if (ctx->pc != 0x302298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302298u; }
        if (ctx->pc != 0x302298u) { return; }
    }
    ctx->pc = 0x302298u;
label_302298:
    // 0x302298: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x302298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x30229c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x30229cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3022a0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3022A0u;
    SET_GPR_U32(ctx, 31, 0x3022A8u);
    ctx->pc = 0x3022A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022A0u;
            // 0x3022a4: 0x2484e910  addiu       $a0, $a0, -0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A8u; }
        if (ctx->pc != 0x3022A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A8u; }
        if (ctx->pc != 0x3022A8u) { return; }
    }
    ctx->pc = 0x3022A8u;
label_3022a8:
    // 0x3022a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3022a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022ac: 0xc040454  jal         func_101150
    ctx->pc = 0x3022ACu;
    SET_GPR_U32(ctx, 31, 0x3022B4u);
    ctx->pc = 0x3022B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022ACu;
            // 0x3022b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022B4u; }
        if (ctx->pc != 0x3022B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022B4u; }
        if (ctx->pc != 0x3022B4u) { return; }
    }
    ctx->pc = 0x3022B4u;
label_3022b4:
    // 0x3022b4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3022b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3022b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3022bc: 0x2484e970  addiu       $a0, $a0, -0x1690
    ctx->pc = 0x3022bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961520));
    // 0x3022c0: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x3022c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3022c4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3022C4u;
    SET_GPR_U32(ctx, 31, 0x3022CCu);
    ctx->pc = 0x3022C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022C4u;
            // 0x3022c8: 0xae050040  sw          $a1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022CCu; }
        if (ctx->pc != 0x3022CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022CCu; }
        if (ctx->pc != 0x3022CCu) { return; }
    }
    ctx->pc = 0x3022CCu;
label_3022cc:
    // 0x3022cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3022ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022d0: 0xc040454  jal         func_101150
    ctx->pc = 0x3022D0u;
    SET_GPR_U32(ctx, 31, 0x3022D8u);
    ctx->pc = 0x3022D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022D0u;
            // 0x3022d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022D8u; }
        if (ctx->pc != 0x3022D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022D8u; }
        if (ctx->pc != 0x3022D8u) { return; }
    }
    ctx->pc = 0x3022D8u;
label_3022d8:
    // 0x3022d8: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3022d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x3022dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3022dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3022e0: 0x7c402490  sq          $zero, 0x2490($v0)
    ctx->pc = 0x3022e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9360), GPR_VEC(ctx, 0));
    // 0x3022e4: 0x34640012  ori         $a0, $v1, 0x12
    ctx->pc = 0x3022e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x3022e8: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x3022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x3022ec: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3022ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x3022f0: 0xac642490  sw          $a0, 0x2490($v1)
    ctx->pc = 0x3022f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9360), GPR_U32(ctx, 4));
    // 0x3022f4: 0x7c4025c0  sq          $zero, 0x25C0($v0)
    ctx->pc = 0x3022f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9664), GPR_VEC(ctx, 0));
    // 0x3022f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3022f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3022fc: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3022fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x302300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302304: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x302304u;
    SET_GPR_U32(ctx, 31, 0x30230Cu);
    ctx->pc = 0x302308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302304u;
            // 0x302308: 0xac4325c0  sw          $v1, 0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30230Cu; }
        if (ctx->pc != 0x30230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30230Cu; }
        if (ctx->pc != 0x30230Cu) { return; }
    }
    ctx->pc = 0x30230Cu;
label_30230c:
    // 0x30230c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x302310: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302314: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x302314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x302318: 0xc040a04  jal         func_102810
    ctx->pc = 0x302318u;
    SET_GPR_U32(ctx, 31, 0x302320u);
    ctx->pc = 0x30231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302318u;
            // 0x30231c: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302320u; }
        if (ctx->pc != 0x302320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302320u; }
        if (ctx->pc != 0x302320u) { return; }
    }
    ctx->pc = 0x302320u;
label_302320:
    // 0x302320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302328: 0x3e00008  jr          $ra
    ctx->pc = 0x302328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302328u;
            // 0x30232c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302330u;
    ctx->pc = 0x302330u;
}
