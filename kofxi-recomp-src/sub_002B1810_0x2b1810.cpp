#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1810
// Address: 0x2b1810 - 0x2b1830
void sub_002B1810_0x2b1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1810_0x2b1810");
#endif

    switch (ctx->pc) {
        case 0x2b1818u: goto label_2b1818;
        case 0x2b1820u: goto label_2b1820;
        case 0x2b1828u: goto label_2b1828;
        default: break;
    }

    ctx->pc = 0x2b1810u;

    // 0x2b1810: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1810u;
            // 0x2b1814: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1818u;
label_2b1818:
    // 0x2b1818: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1818u;
            // 0x2b181c: 0xfc8500e8  sd          $a1, 0xE8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 232), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1820u;
label_2b1820:
    // 0x2b1820: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1820u;
            // 0x2b1824: 0xdc8200e8  ld          $v0, 0xE8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1828u;
label_2b1828:
    // 0x2b1828: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1828u;
            // 0x2b182c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1830u;
    ctx->pc = 0x2b1830u;
}
