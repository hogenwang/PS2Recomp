#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0A68
// Address: 0x2e0a68 - 0x2e0aa8
void sub_002E0A68_0x2e0a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A68_0x2e0a68");
#endif

    ctx->pc = 0x2e0a68u;

    // 0x2e0a68: 0x3c036745  lui         $v1, 0x6745
    ctx->pc = 0x2e0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26437 << 16));
    // 0x2e0a6c: 0x3c05efcd  lui         $a1, 0xEFCD
    ctx->pc = 0x2e0a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61389 << 16));
    // 0x2e0a70: 0x3c0698ba  lui         $a2, 0x98BA
    ctx->pc = 0x2e0a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39098 << 16));
    // 0x2e0a74: 0x3c071032  lui         $a3, 0x1032
    ctx->pc = 0x2e0a74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4146 << 16));
    // 0x2e0a78: 0x3c02c3d2  lui         $v0, 0xC3D2
    ctx->pc = 0x2e0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50130 << 16));
    // 0x2e0a7c: 0x34632301  ori         $v1, $v1, 0x2301
    ctx->pc = 0x2e0a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8961);
    // 0x2e0a80: 0x34a5ab89  ori         $a1, $a1, 0xAB89
    ctx->pc = 0x2e0a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43913);
    // 0x2e0a84: 0x34c6dcfe  ori         $a2, $a2, 0xDCFE
    ctx->pc = 0x2e0a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)56574);
    // 0x2e0a88: 0x34e75476  ori         $a3, $a3, 0x5476
    ctx->pc = 0x2e0a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21622);
    // 0x2e0a8c: 0x3442e1f0  ori         $v0, $v0, 0xE1F0
    ctx->pc = 0x2e0a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57840);
    // 0x2e0a90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2e0a94: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2e0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2e0a98: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2e0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2e0a9c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2e0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2e0aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AA0u;
            // 0x2e0aa4: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0AA8u;
    ctx->pc = 0x2e0aa8u;
}
