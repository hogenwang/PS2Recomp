#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0208
// Address: 0x1d0208 - 0x1d0230
void sub_001D0208_0x1d0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0208_0x1d0208");
#endif

    switch (ctx->pc) {
        case 0x1d0208u: goto label_1d0208;
        case 0x1d020cu: goto label_1d020c;
        case 0x1d0210u: goto label_1d0210;
        case 0x1d0214u: goto label_1d0214;
        case 0x1d0218u: goto label_1d0218;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d022cu: goto label_1d022c;
        default: break;
    }

    ctx->pc = 0x1d0208u;

label_1d0208:
    // 0x1d0208: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d020c:
    // 0x1d020c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0210:
    // 0x1d0210: 0x8c42e66c  lw          $v0, -0x1994($v0)
    ctx->pc = 0x1d0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960748)));
label_1d0214:
    // 0x1d0214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0218:
    if (ctx->pc == 0x1D0218u) {
        ctx->pc = 0x1D0218u;
            // 0x1d0218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D021Cu;
        goto label_1d021c;
    }
    ctx->pc = 0x1D0214u;
    {
        const bool branch_taken_0x1d0214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0214u;
            // 0x1d0218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0214) {
            ctx->pc = 0x1D0224u;
            goto label_1d0224;
        }
    }
    ctx->pc = 0x1D021Cu;
label_1d021c:
    // 0x1d021c: 0x40f809  jalr        $v0
label_1d0220:
    if (ctx->pc == 0x1D0220u) {
        ctx->pc = 0x1D0224u;
        goto label_1d0224;
    }
    ctx->pc = 0x1D021Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0224u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0224u; }
            if (ctx->pc != 0x1D0224u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0224u;
label_1d0224:
    // 0x1d0224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0228:
    // 0x1d0228: 0x3e00008  jr          $ra
label_1d022c:
    if (ctx->pc == 0x1D022Cu) {
        ctx->pc = 0x1D022Cu;
            // 0x1d022c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0230u;
        goto label_fallthrough_0x1d0228;
    }
    ctx->pc = 0x1D0228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0228u;
            // 0x1d022c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d0228:
    ctx->pc = 0x1D0230u;
    ctx->pc = 0x1d0230u;
}
