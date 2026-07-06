#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002007E8
// Address: 0x2007e8 - 0x200860
void sub_002007E8_0x2007e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002007E8_0x2007e8");
#endif

    switch (ctx->pc) {
        case 0x200810u: goto label_200810;
        case 0x200838u: goto label_200838;
        default: break;
    }

    ctx->pc = 0x2007e8u;

    // 0x2007e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2007ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2007f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2007f4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2007f8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2007f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2007fc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x200800: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x200800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x200804: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x200808: 0x3e00008  jr          $ra
    ctx->pc = 0x200808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200808u;
            // 0x20080c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200810u;
label_200810:
    // 0x200810: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200814: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x200818: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20081c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20081cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200820: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x200820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200824: 0x21023  negu        $v0, $v0
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x200828: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x200828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x20082c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x200830: 0x3e00008  jr          $ra
    ctx->pc = 0x200830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200830u;
            // 0x200834: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20083c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x200840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200844: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200848: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x200848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20084c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x200850: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x200850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x200854: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x200858: 0x3e00008  jr          $ra
    ctx->pc = 0x200858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200858u;
            // 0x20085c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200860u;
    ctx->pc = 0x200860u;
}
