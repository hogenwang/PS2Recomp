#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294AA8
// Address: 0x294aa8 - 0x294ad0
void sub_00294AA8_0x294aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AA8_0x294aa8");
#endif

    switch (ctx->pc) {
        case 0x294abcu: goto label_294abc;
        default: break;
    }

    ctx->pc = 0x294aa8u;

    // 0x294aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294ab4: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294AB4u;
    SET_GPR_U32(ctx, 31, 0x294ABCu);
    ctx->pc = 0x294AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294AB4u;
            // 0x294ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ABCu; }
        if (ctx->pc != 0x294ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ABCu; }
        if (ctx->pc != 0x294ABCu) { return; }
    }
    ctx->pc = 0x294ABCu;
label_294abc:
    // 0x294abc: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x294abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x294ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x294AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AC8u;
            // 0x294acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294AD0u;
    ctx->pc = 0x294ad0u;
}
