#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBA0
// Address: 0x1dcba0 - 0x1dcbc0
void sub_001DCBA0_0x1dcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBA0_0x1dcba0");
#endif

    ctx->pc = 0x1dcba0u;

    // 0x1dcba0: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x1dcba0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dcba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcba8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x1dcba8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcbac: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1dcbacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcbb0: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x1dcbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1dcbb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1dcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dcbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBB8u;
            // 0x1dcbbc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCBC0u;
    ctx->pc = 0x1dcbc0u;
}
