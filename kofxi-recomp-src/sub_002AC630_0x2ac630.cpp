#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC630
// Address: 0x2ac630 - 0x2ac678
void sub_002AC630_0x2ac630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC630_0x2ac630");
#endif

    switch (ctx->pc) {
        case 0x2ac65cu: goto label_2ac65c;
        case 0x2ac668u: goto label_2ac668;
        default: break;
    }

    ctx->pc = 0x2ac630u;

    // 0x2ac630: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ac630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac634: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2ac634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ac638: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC638u;
    {
        const bool branch_taken_0x2ac638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC638u;
            // 0x2ac63c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac638) {
            ctx->pc = 0x2AC65Cu;
            goto label_2ac65c;
        }
    }
    ctx->pc = 0x2AC640u;
    // 0x2ac640: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2ac640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ac644: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ac644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ac64c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2ac64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac650: 0x24426da8  addiu       $v0, $v0, 0x6DA8
    ctx->pc = 0x2ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28072));
    // 0x2ac654: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC654u;
            // 0x2ac658: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC65Cu;
label_2ac65c:
    // 0x2ac65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC65Cu;
            // 0x2ac660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC664u;
    // 0x2ac664: 0x0  nop
    ctx->pc = 0x2ac664u;
    // NOP
label_2ac668:
    // 0x2ac668: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2ac668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2ac66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC66Cu;
            // 0x2ac670: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC674u;
    // 0x2ac674: 0x0  nop
    ctx->pc = 0x2ac674u;
    // NOP
    ctx->pc = 0x2ac678u;
}
