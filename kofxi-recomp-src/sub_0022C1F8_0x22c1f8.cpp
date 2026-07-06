#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C1F8
// Address: 0x22c1f8 - 0x22c238
void sub_0022C1F8_0x22c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C1F8_0x22c1f8");
#endif

    ctx->pc = 0x22c1f8u;

    // 0x22c1f8: 0x3c036745  lui         $v1, 0x6745
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26437 << 16));
    // 0x22c1fc: 0x3c05efcd  lui         $a1, 0xEFCD
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61389 << 16));
    // 0x22c200: 0x3c0698ba  lui         $a2, 0x98BA
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39098 << 16));
    // 0x22c204: 0x3c021032  lui         $v0, 0x1032
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4146 << 16));
    // 0x22c208: 0x34632301  ori         $v1, $v1, 0x2301
    ctx->pc = 0x22c208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8961);
    // 0x22c20c: 0x34a5ab89  ori         $a1, $a1, 0xAB89
    ctx->pc = 0x22c20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43913);
    // 0x22c210: 0x34c6dcfe  ori         $a2, $a2, 0xDCFE
    ctx->pc = 0x22c210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)56574);
    // 0x22c214: 0x34425476  ori         $v0, $v0, 0x5476
    ctx->pc = 0x22c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21622);
    // 0x22c218: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22c218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x22c21c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x22c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x22c220: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x22c220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x22c224: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22c224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x22c228: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x22c228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x22c22c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C22Cu;
        // 0x22c230: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C234u;
    // 0x22c234: 0x0  nop
    ctx->pc = 0x22c234u;
    // NOP
}
