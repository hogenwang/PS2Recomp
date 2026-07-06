#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5E98
// Address: 0x1c5e98 - 0x1c5ee8
void sub_001C5E98_0x1c5e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5E98_0x1c5e98");
#endif

    switch (ctx->pc) {
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5ed8u: goto label_1c5ed8;
        default: break;
    }

    ctx->pc = 0x1c5e98u;

    // 0x1c5e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ea4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5EA4u;
    {
        const bool branch_taken_0x1c5ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EA4u;
            // 0x1c5ea8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ea4) {
            ctx->pc = 0x1C5ED8u;
            goto label_1c5ed8;
        }
    }
    ctx->pc = 0x1C5EACu;
    // 0x1c5eac: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1C5EACu;
    SET_GPR_U32(ctx, 31, 0x1C5EB4u);
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EB4u; }
        if (ctx->pc != 0x1C5EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EB4u; }
        if (ctx->pc != 0x1C5EB4u) { return; }
    }
    ctx->pc = 0x1C5EB4u;
label_1c5eb4:
    // 0x1c5eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5eb8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c5eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5ec4: 0x24060238  addiu       $a2, $zero, 0x238
    ctx->pc = 0x1c5ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x1c5ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5ecc: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C5ECCu;
    ctx->pc = 0x1C5ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5ECCu;
            // 0x1c5ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5ED4u;
    // 0x1c5ed4: 0x0  nop
    ctx->pc = 0x1c5ed4u;
    // NOP
label_1c5ed8:
    // 0x1c5ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5edc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EE0u;
            // 0x1c5ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5EE8u;
    ctx->pc = 0x1c5ee8u;
}
