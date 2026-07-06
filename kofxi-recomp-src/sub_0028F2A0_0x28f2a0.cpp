#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F2A0
// Address: 0x28f2a0 - 0x28f2e8
void sub_0028F2A0_0x28f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2A0_0x28f2a0");
#endif

    switch (ctx->pc) {
        case 0x28f2a0u: goto label_28f2a0;
        case 0x28f2a4u: goto label_28f2a4;
        case 0x28f2a8u: goto label_28f2a8;
        case 0x28f2acu: goto label_28f2ac;
        case 0x28f2b0u: goto label_28f2b0;
        case 0x28f2b4u: goto label_28f2b4;
        case 0x28f2b8u: goto label_28f2b8;
        case 0x28f2bcu: goto label_28f2bc;
        case 0x28f2c0u: goto label_28f2c0;
        case 0x28f2c4u: goto label_28f2c4;
        case 0x28f2c8u: goto label_28f2c8;
        case 0x28f2ccu: goto label_28f2cc;
        case 0x28f2d0u: goto label_28f2d0;
        case 0x28f2d4u: goto label_28f2d4;
        case 0x28f2d8u: goto label_28f2d8;
        case 0x28f2dcu: goto label_28f2dc;
        case 0x28f2e0u: goto label_28f2e0;
        case 0x28f2e4u: goto label_28f2e4;
        default: break;
    }

    ctx->pc = 0x28f2a0u;

label_28f2a0:
    // 0x28f2a0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f2a4:
    // 0x28f2a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f2a8:
    // 0x28f2a8: 0x8c424678  lw          $v0, 0x4678($v0)
    ctx->pc = 0x28f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18040)));
label_28f2ac:
    // 0x28f2ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f2b0:
    if (ctx->pc == 0x28F2B0u) {
        ctx->pc = 0x28F2B0u;
            // 0x28f2b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F2B4u;
        goto label_28f2b4;
    }
    ctx->pc = 0x28F2ACu;
    {
        const bool branch_taken_0x28f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2ACu;
            // 0x28f2b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2ac) {
            ctx->pc = 0x28F2D4u;
            goto label_28f2d4;
        }
    }
    ctx->pc = 0x28F2B4u;
label_28f2b4:
    // 0x28f2b4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f2b8:
    // 0x28f2b8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28f2bc:
    // 0x28f2bc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f2c0:
    // 0x28f2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f2c4:
    // 0x28f2c4: 0xc0a5648  jal         func_295920
label_28f2c8:
    if (ctx->pc == 0x28F2C8u) {
        ctx->pc = 0x28F2C8u;
            // 0x28f2c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F2CCu;
        goto label_28f2cc;
    }
    ctx->pc = 0x28F2C4u;
    SET_GPR_U32(ctx, 31, 0x28F2CCu);
    ctx->pc = 0x28F2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2C4u;
            // 0x28f2c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2CCu; }
        if (ctx->pc != 0x28F2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2CCu; }
        if (ctx->pc != 0x28F2CCu) { return; }
    }
    ctx->pc = 0x28F2CCu;
label_28f2cc:
    // 0x28f2cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f2d0:
    if (ctx->pc == 0x28F2D0u) {
        ctx->pc = 0x28F2D0u;
            // 0x28f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F2D4u;
        goto label_28f2d4;
    }
    ctx->pc = 0x28F2CCu;
    {
        const bool branch_taken_0x28f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2CCu;
            // 0x28f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2cc) {
            ctx->pc = 0x28F2DCu;
            goto label_28f2dc;
        }
    }
    ctx->pc = 0x28F2D4u;
label_28f2d4:
    // 0x28f2d4: 0x40f809  jalr        $v0
label_28f2d8:
    if (ctx->pc == 0x28F2D8u) {
        ctx->pc = 0x28F2DCu;
        goto label_28f2dc;
    }
    ctx->pc = 0x28F2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F2DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F2DCu; }
            if (ctx->pc != 0x28F2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x28F2DCu;
label_28f2dc:
    // 0x28f2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f2e0:
    // 0x28f2e0: 0x3e00008  jr          $ra
label_28f2e4:
    if (ctx->pc == 0x28F2E4u) {
        ctx->pc = 0x28F2E4u;
            // 0x28f2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F2E8u;
        goto label_fallthrough_0x28f2e0;
    }
    ctx->pc = 0x28F2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2E0u;
            // 0x28f2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f2e0:
    ctx->pc = 0x28F2E8u;
    ctx->pc = 0x28f2e8u;
}
