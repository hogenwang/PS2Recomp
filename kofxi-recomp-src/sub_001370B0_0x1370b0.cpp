#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001370B0
// Address: 0x1370b0 - 0x137130
void sub_001370B0_0x1370b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001370B0_0x1370b0");
#endif

    switch (ctx->pc) {
        case 0x1370c0u: goto label_1370c0;
        case 0x1370c8u: goto label_1370c8;
        case 0x1370d0u: goto label_1370d0;
        case 0x1370dcu: goto label_1370dc;
        case 0x1370e4u: goto label_1370e4;
        case 0x137120u: goto label_137120;
        default: break;
    }

    ctx->pc = 0x1370b0u;

    // 0x1370b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1370b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1370b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1370b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1370b8: 0xc055684  jal         func_155A10
    ctx->pc = 0x1370B8u;
    SET_GPR_U32(ctx, 31, 0x1370C0u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370C0u; }
        if (ctx->pc != 0x1370C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370C0u; }
        if (ctx->pc != 0x1370C0u) { return; }
    }
    ctx->pc = 0x1370C0u;
label_1370c0:
    // 0x1370c0: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1370C0u;
    SET_GPR_U32(ctx, 31, 0x1370C8u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370C8u; }
        if (ctx->pc != 0x1370C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370C8u; }
        if (ctx->pc != 0x1370C8u) { return; }
    }
    ctx->pc = 0x1370C8u;
label_1370c8:
    // 0x1370c8: 0xc053318  jal         func_14CC60
    ctx->pc = 0x1370C8u;
    SET_GPR_U32(ctx, 31, 0x1370D0u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370D0u; }
        if (ctx->pc != 0x1370D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370D0u; }
        if (ctx->pc != 0x1370D0u) { return; }
    }
    ctx->pc = 0x1370D0u;
label_1370d0:
    // 0x1370d0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1370d4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1370D4u;
    SET_GPR_U32(ctx, 31, 0x1370DCu);
    ctx->pc = 0x1370D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1370D4u;
            // 0x1370d8: 0x2484d838  addiu       $a0, $a0, -0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (runtime->hasFunction(0x19F300u)) {
        auto targetFn = runtime->lookupFunction(0x19F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370DCu; }
        if (ctx->pc != 0x1370DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F300_0x19f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370DCu; }
        if (ctx->pc != 0x1370DCu) { return; }
    }
    ctx->pc = 0x1370DCu;
label_1370dc:
    // 0x1370dc: 0xc0cb238  jal         func_32C8E0
    ctx->pc = 0x1370DCu;
    SET_GPR_U32(ctx, 31, 0x1370E4u);
    ctx->pc = 0x1370E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1370DCu;
            // 0x1370e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8E0u;
    if (runtime->hasFunction(0x32C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370E4u; }
        if (ctx->pc != 0x1370E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8E0_0x32c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370E4u; }
        if (ctx->pc != 0x1370E4u) { return; }
    }
    ctx->pc = 0x1370E4u;
label_1370e4:
    // 0x1370e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1370e8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1370e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1370ec: 0xac405930  sw          $zero, 0x5930($v0)
    ctx->pc = 0x1370ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22832), GPR_U32(ctx, 0));
    // 0x1370f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1370f4: 0xac605934  sw          $zero, 0x5934($v1)
    ctx->pc = 0x1370f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22836), GPR_U32(ctx, 0));
    // 0x1370f8: 0xac405938  sw          $zero, 0x5938($v0)
    ctx->pc = 0x1370f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22840), GPR_U32(ctx, 0));
    // 0x1370fc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137100: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x137100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x137104: 0xac60593c  sw          $zero, 0x593C($v1)
    ctx->pc = 0x137104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22844), GPR_U32(ctx, 0));
    // 0x137108: 0xac405940  sw          $zero, 0x5940($v0)
    ctx->pc = 0x137108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22848), GPR_U32(ctx, 0));
    // 0x13710c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137110: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x137114: 0xac605944  sw          $zero, 0x5944($v1)
    ctx->pc = 0x137114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22852), GPR_U32(ctx, 0));
    // 0x137118: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x137118u;
    SET_GPR_U32(ctx, 31, 0x137120u);
    ctx->pc = 0x13711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137118u;
            // 0x13711c: 0xac405948  sw          $zero, 0x5948($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (runtime->hasFunction(0x18F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137120u; }
        if (ctx->pc != 0x137120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F5A0_0x18f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137120u; }
        if (ctx->pc != 0x137120u) { return; }
    }
    ctx->pc = 0x137120u;
label_137120:
    // 0x137120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137124: 0x3e00008  jr          $ra
    ctx->pc = 0x137124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137124u;
            // 0x137128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13712Cu;
    // 0x13712c: 0x0  nop
    ctx->pc = 0x13712cu;
    // NOP
    ctx->pc = 0x137130u;
}
