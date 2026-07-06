#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001558C0
// Address: 0x1558c0 - 0x155940
void sub_001558C0_0x1558c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001558C0_0x1558c0");
#endif

    switch (ctx->pc) {
        case 0x1558d8u: goto label_1558d8;
        case 0x1558e0u: goto label_1558e0;
        case 0x1558e8u: goto label_1558e8;
        case 0x1558f0u: goto label_1558f0;
        case 0x1558f8u: goto label_1558f8;
        case 0x155900u: goto label_155900;
        case 0x155928u: goto label_155928;
        default: break;
    }

    ctx->pc = 0x1558c0u;

    // 0x1558c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1558c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1558c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1558c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1558cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1558ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558d0: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1558D0u;
    SET_GPR_U32(ctx, 31, 0x1558D8u);
    ctx->pc = 0x1558D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1558D0u;
            // 0x1558d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558D8u; }
        if (ctx->pc != 0x1558D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558D8u; }
        if (ctx->pc != 0x1558D8u) { return; }
    }
    ctx->pc = 0x1558D8u;
label_1558d8:
    // 0x1558d8: 0xc055684  jal         func_155A10
    ctx->pc = 0x1558D8u;
    SET_GPR_U32(ctx, 31, 0x1558E0u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558E0u; }
        if (ctx->pc != 0x1558E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558E0u; }
        if (ctx->pc != 0x1558E0u) { return; }
    }
    ctx->pc = 0x1558E0u;
label_1558e0:
    // 0x1558e0: 0xc053318  jal         func_14CC60
    ctx->pc = 0x1558E0u;
    SET_GPR_U32(ctx, 31, 0x1558E8u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558E8u; }
        if (ctx->pc != 0x1558E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558E8u; }
        if (ctx->pc != 0x1558E8u) { return; }
    }
    ctx->pc = 0x1558E8u;
label_1558e8:
    // 0x1558e8: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1558E8u;
    SET_GPR_U32(ctx, 31, 0x1558F0u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558F0u; }
        if (ctx->pc != 0x1558F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558F0u; }
        if (ctx->pc != 0x1558F0u) { return; }
    }
    ctx->pc = 0x1558F0u;
label_1558f0:
    // 0x1558f0: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x1558F0u;
    SET_GPR_U32(ctx, 31, 0x1558F8u);
    ctx->pc = 0x197F80u;
    if (runtime->hasFunction(0x197F80u)) {
        auto targetFn = runtime->lookupFunction(0x197F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558F8u; }
        if (ctx->pc != 0x1558F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197F80_0x197f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558F8u; }
        if (ctx->pc != 0x1558F8u) { return; }
    }
    ctx->pc = 0x1558F8u;
label_1558f8:
    // 0x1558f8: 0xc067d50  jal         func_19F540
    ctx->pc = 0x1558F8u;
    SET_GPR_U32(ctx, 31, 0x155900u);
    ctx->pc = 0x19F540u;
    if (runtime->hasFunction(0x19F540u)) {
        auto targetFn = runtime->lookupFunction(0x19F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155900u; }
        if (ctx->pc != 0x155900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F540_0x19f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155900u; }
        if (ctx->pc != 0x155900u) { return; }
    }
    ctx->pc = 0x155900u;
label_155900:
    // 0x155900: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155904: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155908: 0xa060d9a8  sb          $zero, -0x2658($v1)
    ctx->pc = 0x155908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957480), (uint8_t)GPR_U32(ctx, 0));
    // 0x15590c: 0xa040d3a8  sb          $zero, -0x2C58($v0)
    ctx->pc = 0x15590cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294955944), (uint8_t)GPR_U32(ctx, 0));
    // 0x155910: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155914: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x155918: 0xac4363c0  sw          $v1, 0x63C0($v0)
    ctx->pc = 0x155918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25536), GPR_U32(ctx, 3));
    // 0x15591c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x155920: 0xc0c0d90  jal         func_303640
    ctx->pc = 0x155920u;
    SET_GPR_U32(ctx, 31, 0x155928u);
    ctx->pc = 0x155924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155920u;
            // 0x155924: 0xac4363c8  sw          $v1, 0x63C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303640u;
    if (runtime->hasFunction(0x303640u)) {
        auto targetFn = runtime->lookupFunction(0x303640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155928u; }
        if (ctx->pc != 0x155928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303640_0x303640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155928u; }
        if (ctx->pc != 0x155928u) { return; }
    }
    ctx->pc = 0x155928u;
label_155928:
    // 0x155928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15592c: 0x3e00008  jr          $ra
    ctx->pc = 0x15592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15592Cu;
            // 0x155930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155934u;
    // 0x155934: 0x0  nop
    ctx->pc = 0x155934u;
    // NOP
    // 0x155938: 0x0  nop
    ctx->pc = 0x155938u;
    // NOP
    // 0x15593c: 0x0  nop
    ctx->pc = 0x15593cu;
    // NOP
    ctx->pc = 0x155940u;
}
