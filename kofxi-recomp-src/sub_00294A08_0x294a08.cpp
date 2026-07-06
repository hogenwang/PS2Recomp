#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294A08
// Address: 0x294a08 - 0x294a58
void sub_00294A08_0x294a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A08_0x294a08");
#endif

    switch (ctx->pc) {
        case 0x294a18u: goto label_294a18;
        default: break;
    }

    ctx->pc = 0x294a08u;

    // 0x294a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294a10: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294A10u;
    SET_GPR_U32(ctx, 31, 0x294A18u);
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A18u; }
        if (ctx->pc != 0x294A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A18u; }
        if (ctx->pc != 0x294A18u) { return; }
    }
    ctx->pc = 0x294A18u;
label_294a18:
    // 0x294a18: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x294a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x294a1c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x294a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x294a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a24: 0x246348b0  addiu       $v1, $v1, 0x48B0
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18608));
    // 0x294a28: 0x24a54908  addiu       $a1, $a1, 0x4908
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18696));
    // 0x294a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a30: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x294a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x294a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294a38: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x294a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x294a3c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x294a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x294a40: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x294a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x294a44: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x294a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x294a48: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x294a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x294a4c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x294a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x294a50: 0x3e00008  jr          $ra
    ctx->pc = 0x294A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A50u;
            // 0x294a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294A58u;
    ctx->pc = 0x294a58u;
}
