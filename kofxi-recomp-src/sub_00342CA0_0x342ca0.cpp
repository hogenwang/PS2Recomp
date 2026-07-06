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

// Function: sub_00342CA0
// Address: 0x342ca0 - 0x342d00
void sub_00342CA0_0x342ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342CA0_0x342ca0");
#endif

    ctx->pc = 0x342ca0u;

    // 0x342ca0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x342ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x342ca4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x342ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x342ca8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x342CA8u;
    {
        const bool branch_taken_0x342ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342ca8) {
            ctx->pc = 0x342CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342CA8u;
            // 0x342cac: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342CC8u;
            goto label_342cc8;
        }
    }
    ctx->pc = 0x342CB0u;
    // 0x342cb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x342cb4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x342CB4u;
    {
        const bool branch_taken_0x342cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342cb4) {
            ctx->pc = 0x342CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342CB4u;
            // 0x342cb8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342CC0u;
            goto label_342cc0;
        }
    }
    ctx->pc = 0x342CBCu;
    // 0x342cbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342cc0:
    // 0x342cc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x342CC0u;
    {
        const bool branch_taken_0x342cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CC0u;
        // 0x342cc4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342cc0) {
            ctx->pc = 0x342CE8u;
            goto label_342ce8;
        }
    }
    ctx->pc = 0x342CC8u;
label_342cc8:
    // 0x342cc8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x342CC8u;
    {
        const bool branch_taken_0x342cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342cc8) {
            ctx->pc = 0x342CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342CC8u;
            // 0x342ccc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342CECu;
            goto label_342cec;
        }
    }
    ctx->pc = 0x342CD0u;
    // 0x342cd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x342cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342cd4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x342cd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x342cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x342cdc: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x342CDCu;
    {
        const bool branch_taken_0x342cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x342cdc) {
            ctx->pc = 0x342CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342CDCu;
            // 0x342ce0: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342CE4u;
            goto label_342ce4;
        }
    }
    ctx->pc = 0x342CE4u;
label_342ce4:
    // 0x342ce4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x342ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_342ce8:
    // 0x342ce8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x342ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342cec:
    // 0x342cec: 0x3e00008  jr          $ra
    ctx->pc = 0x342CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342CF4u;
    // 0x342cf4: 0x0  nop
    ctx->pc = 0x342cf4u;
    // NOP
    // 0x342cf8: 0x0  nop
    ctx->pc = 0x342cf8u;
    // NOP
    // 0x342cfc: 0x0  nop
    ctx->pc = 0x342cfcu;
    // NOP
}
