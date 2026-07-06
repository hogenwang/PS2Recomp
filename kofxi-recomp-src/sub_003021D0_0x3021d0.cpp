#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003021D0
// Address: 0x3021d0 - 0x302280
void sub_003021D0_0x3021d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003021D0_0x3021d0");
#endif

    switch (ctx->pc) {
        case 0x3021e0u: goto label_3021e0;
        case 0x3021f4u: goto label_3021f4;
        case 0x302200u: goto label_302200;
        case 0x302214u: goto label_302214;
        case 0x302220u: goto label_302220;
        case 0x302254u: goto label_302254;
        case 0x302268u: goto label_302268;
        default: break;
    }

    ctx->pc = 0x3021d0u;

    // 0x3021d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3021d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3021d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3021d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3021d8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3021D8u;
    SET_GPR_U32(ctx, 31, 0x3021E0u);
    ctx->pc = 0x3021DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021D8u;
            // 0x3021dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021E0u; }
        if (ctx->pc != 0x3021E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021E0u; }
        if (ctx->pc != 0x3021E0u) { return; }
    }
    ctx->pc = 0x3021E0u;
label_3021e0:
    // 0x3021e0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3021e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3021e4: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x3021e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x3021e8: 0x8c450ca0  lw          $a1, 0xCA0($v0)
    ctx->pc = 0x3021e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3232)));
    // 0x3021ec: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3021ECu;
    SET_GPR_U32(ctx, 31, 0x3021F4u);
    ctx->pc = 0x3021F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021ECu;
            // 0x3021f0: 0x24841e20  addiu       $a0, $a0, 0x1E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021F4u; }
        if (ctx->pc != 0x3021F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021F4u; }
        if (ctx->pc != 0x3021F4u) { return; }
    }
    ctx->pc = 0x3021F4u;
label_3021f4:
    // 0x3021f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3021f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021f8: 0xc040454  jal         func_101150
    ctx->pc = 0x3021F8u;
    SET_GPR_U32(ctx, 31, 0x302200u);
    ctx->pc = 0x3021FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021F8u;
            // 0x3021fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302200u; }
        if (ctx->pc != 0x302200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302200u; }
        if (ctx->pc != 0x302200u) { return; }
    }
    ctx->pc = 0x302200u;
label_302200:
    // 0x302200: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x302204: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x302204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x302208: 0x8c450cd8  lw          $a1, 0xCD8($v0)
    ctx->pc = 0x302208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3288)));
    // 0x30220c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x30220Cu;
    SET_GPR_U32(ctx, 31, 0x302214u);
    ctx->pc = 0x302210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30220Cu;
            // 0x302210: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302214u; }
        if (ctx->pc != 0x302214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302214u; }
        if (ctx->pc != 0x302214u) { return; }
    }
    ctx->pc = 0x302214u;
label_302214:
    // 0x302214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302218: 0xc040454  jal         func_101150
    ctx->pc = 0x302218u;
    SET_GPR_U32(ctx, 31, 0x302220u);
    ctx->pc = 0x30221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302218u;
            // 0x30221c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302220u; }
        if (ctx->pc != 0x302220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302220u; }
        if (ctx->pc != 0x302220u) { return; }
    }
    ctx->pc = 0x302220u;
label_302220:
    // 0x302220: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x302220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x302224: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x302224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x302228: 0x7c402490  sq          $zero, 0x2490($v0)
    ctx->pc = 0x302228u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9360), GPR_VEC(ctx, 0));
    // 0x30222c: 0x34640012  ori         $a0, $v1, 0x12
    ctx->pc = 0x30222cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x302230: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302234: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x302238: 0xac642490  sw          $a0, 0x2490($v1)
    ctx->pc = 0x302238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9360), GPR_U32(ctx, 4));
    // 0x30223c: 0x7c4025c0  sq          $zero, 0x25C0($v0)
    ctx->pc = 0x30223cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9664), GPR_VEC(ctx, 0));
    // 0x302240: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x302240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x302244: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x302244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x302248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30224c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30224Cu;
    SET_GPR_U32(ctx, 31, 0x302254u);
    ctx->pc = 0x302250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30224Cu;
            // 0x302250: 0xac4325c0  sw          $v1, 0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302254u; }
        if (ctx->pc != 0x302254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302254u; }
        if (ctx->pc != 0x302254u) { return; }
    }
    ctx->pc = 0x302254u;
label_302254:
    // 0x302254: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x302254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x302258: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x30225c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x30225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x302260: 0xc040a04  jal         func_102810
    ctx->pc = 0x302260u;
    SET_GPR_U32(ctx, 31, 0x302268u);
    ctx->pc = 0x302264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302260u;
            // 0x302264: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302268u; }
        if (ctx->pc != 0x302268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302268u; }
        if (ctx->pc != 0x302268u) { return; }
    }
    ctx->pc = 0x302268u;
label_302268:
    // 0x302268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30226c: 0x3e00008  jr          $ra
    ctx->pc = 0x30226Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30226Cu;
            // 0x302270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302274u;
    // 0x302274: 0x0  nop
    ctx->pc = 0x302274u;
    // NOP
    // 0x302278: 0x0  nop
    ctx->pc = 0x302278u;
    // NOP
    // 0x30227c: 0x0  nop
    ctx->pc = 0x30227cu;
    // NOP
    ctx->pc = 0x302280u;
}
