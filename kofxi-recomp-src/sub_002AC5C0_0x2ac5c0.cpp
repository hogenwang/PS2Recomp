#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC5C0
// Address: 0x2ac5c0 - 0x2ac600
void sub_002AC5C0_0x2ac5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC5C0_0x2ac5c0");
#endif

    switch (ctx->pc) {
        case 0x2ac5d0u: goto label_2ac5d0;
        case 0x2ac5f8u: goto label_2ac5f8;
        default: break;
    }

    ctx->pc = 0x2ac5c0u;

    // 0x2ac5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac5c8: 0xc0aeef6  jal         func_2BBBD8
    ctx->pc = 0x2AC5C8u;
    SET_GPR_U32(ctx, 31, 0x2AC5D0u);
    ctx->pc = 0x2BBBD8u;
    if (runtime->hasFunction(0x2BBBD8u)) {
        auto targetFn = runtime->lookupFunction(0x2BBBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5D0u; }
        if (ctx->pc != 0x2AC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBBD8_0x2bbbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5D0u; }
        if (ctx->pc != 0x2AC5D0u) { return; }
    }
    ctx->pc = 0x2AC5D0u;
label_2ac5d0:
    // 0x2ac5d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac5d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ac5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ac5d8: 0x24456ee8  addiu       $a1, $v0, 0x6EE8
    ctx->pc = 0x2ac5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28392));
    // 0x2ac5dc: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2ac5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2ac5e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC5E0u;
    {
        const bool branch_taken_0x2ac5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5E0u;
            // 0x2ac5e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5e0) {
            ctx->pc = 0x2AC5F0u;
            goto label_2ac5f0;
        }
    }
    ctx->pc = 0x2AC5E8u;
    // 0x2ac5e8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2ac5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2ac5ec: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2ac5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
label_2ac5f0:
    // 0x2ac5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5F0u;
            // 0x2ac5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC5F8u;
label_2ac5f8:
    // 0x2ac5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC5F8u;
            // 0x2ac5fc: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC600u;
    ctx->pc = 0x2ac600u;
}
