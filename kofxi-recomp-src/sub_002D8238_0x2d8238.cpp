#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8238
// Address: 0x2d8238 - 0x2d8260
void sub_002D8238_0x2d8238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8238_0x2d8238");
#endif

    switch (ctx->pc) {
        case 0x2d8250u: goto label_2d8250;
        default: break;
    }

    ctx->pc = 0x2d8238u;

    // 0x2d8238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d823c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D823Cu;
    {
        const bool branch_taken_0x2d823c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D823Cu;
            // 0x2d8240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d823c) {
            ctx->pc = 0x2D8250u;
            goto label_2d8250;
        }
    }
    ctx->pc = 0x2D8244u;
    // 0x2d8244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8248: 0x80b6122  j           func_2D8488
    ctx->pc = 0x2D8248u;
    ctx->pc = 0x2D824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8248u;
            // 0x2d824c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8488u;
    {
        auto targetFn = runtime->lookupFunction(0x2D8488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D8250u;
label_2d8250:
    // 0x2d8250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8254: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8254u;
            // 0x2d8258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D825Cu;
    // 0x2d825c: 0x0  nop
    ctx->pc = 0x2d825cu;
    // NOP
    ctx->pc = 0x2d8260u;
}
