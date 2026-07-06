#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002616B8
// Address: 0x2616b8 - 0x2616e0
void sub_002616B8_0x2616b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002616B8_0x2616b8");
#endif

    ctx->pc = 0x2616b8u;

    // 0x2616b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2616bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2616c0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2616c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2616c4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2616c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2616c8: 0xac4019f0  sw          $zero, 0x19F0($v0)
    ctx->pc = 0x2616c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6640), GPR_U32(ctx, 0));
    // 0x2616cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2616ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616d0: 0xac6019f4  sw          $zero, 0x19F4($v1)
    ctx->pc = 0x2616d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6644), GPR_U32(ctx, 0));
    // 0x2616d4: 0xac8019f8  sw          $zero, 0x19F8($a0)
    ctx->pc = 0x2616d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6648), GPR_U32(ctx, 0));
    // 0x2616d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2616D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2616DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2616D8u;
            // 0x2616dc: 0xaca019fc  sw          $zero, 0x19FC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2616E0u;
    ctx->pc = 0x2616e0u;
}
