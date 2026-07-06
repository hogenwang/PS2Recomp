#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A05F0
// Address: 0x2a05f0 - 0x2a0618
void sub_002A05F0_0x2a05f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A05F0_0x2a05f0");
#endif

    switch (ctx->pc) {
        case 0x2a05f0u: goto label_2a05f0;
        case 0x2a05f4u: goto label_2a05f4;
        case 0x2a05f8u: goto label_2a05f8;
        case 0x2a05fcu: goto label_2a05fc;
        case 0x2a0600u: goto label_2a0600;
        case 0x2a0604u: goto label_2a0604;
        case 0x2a0608u: goto label_2a0608;
        case 0x2a060cu: goto label_2a060c;
        case 0x2a0610u: goto label_2a0610;
        case 0x2a0614u: goto label_2a0614;
        default: break;
    }

    ctx->pc = 0x2a05f0u;

label_2a05f0:
    // 0x2a05f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a05f4:
    // 0x2a05f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a05f8:
    // 0x2a05f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a05f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a05fc:
    // 0x2a05fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a05fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0600:
    // 0x2a0600: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2a0604:
    // 0x2a0604: 0x40f809  jalr        $v0
label_2a0608:
    if (ctx->pc == 0x2A0608u) {
        ctx->pc = 0x2A0608u;
            // 0x2a0608: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->pc = 0x2A060Cu;
        goto label_2a060c;
    }
    ctx->pc = 0x2A0604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A060Cu);
        ctx->pc = 0x2A0608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0604u;
            // 0x2a0608: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A060Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A060Cu; }
            if (ctx->pc != 0x2A060Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A060Cu;
label_2a060c:
    // 0x2a060c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0610:
    // 0x2a0610: 0x3e00008  jr          $ra
label_2a0614:
    if (ctx->pc == 0x2A0614u) {
        ctx->pc = 0x2A0614u;
            // 0x2a0614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A0618u;
        goto label_fallthrough_0x2a0610;
    }
    ctx->pc = 0x2A0610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0610u;
            // 0x2a0614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a0610:
    ctx->pc = 0x2A0618u;
    ctx->pc = 0x2a0618u;
}
