#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAEE8
// Address: 0x1aaee8 - 0x1aaf08
void sub_001AAEE8_0x1aaee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAEE8_0x1aaee8");
#endif

    ctx->pc = 0x1aaee8u;

    // 0x1aaee8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aaeec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaef0: 0x2484e684  addiu       $a0, $a0, -0x197C
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960772));
    // 0x1aaef4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aaef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1aaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aaefc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEFCu;
            // 0x1aaf00: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAF04u;
    // 0x1aaf04: 0x0  nop
    ctx->pc = 0x1aaf04u;
    // NOP
    ctx->pc = 0x1aaf08u;
}
