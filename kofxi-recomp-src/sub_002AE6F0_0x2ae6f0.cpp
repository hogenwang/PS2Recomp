#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AE6F0
// Address: 0x2ae6f0 - 0x2ae748
void sub_002AE6F0_0x2ae6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE6F0_0x2ae6f0");
#endif

    switch (ctx->pc) {
        case 0x2ae71cu: goto label_2ae71c;
        case 0x2ae728u: goto label_2ae728;
        case 0x2ae740u: goto label_2ae740;
        default: break;
    }

    ctx->pc = 0x2ae6f0u;

    // 0x2ae6f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ae6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae6f4: 0x2ca20023  sltiu       $v0, $a1, 0x23
    ctx->pc = 0x2ae6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x2ae6f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE6F8u;
    {
        const bool branch_taken_0x2ae6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE6F8u;
            // 0x2ae6fc: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6f8) {
            ctx->pc = 0x2AE71Cu;
            goto label_2ae71c;
        }
    }
    ctx->pc = 0x2AE700u;
    // 0x2ae700: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2ae700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ae704: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ae704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ae708: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ae708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ae70c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2ae70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ae710: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x2ae710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
    // 0x2ae714: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE714u;
            // 0x2ae718: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE71Cu;
label_2ae71c:
    // 0x2ae71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE71Cu;
            // 0x2ae720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE724u;
    // 0x2ae724: 0x0  nop
    ctx->pc = 0x2ae724u;
    // NOP
label_2ae728:
    // 0x2ae728: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ae72c: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x2ae72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x2ae730: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE730u;
    {
        const bool branch_taken_0x2ae730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae730) {
            ctx->pc = 0x2AE734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE730u;
            // 0x2ae734: 0x8c830054  lw          $v1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AE740u;
            goto label_2ae740;
        }
    }
    ctx->pc = 0x2AE738u;
    // 0x2ae738: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE738u;
            // 0x2ae73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE740u;
label_2ae740:
    // 0x2ae740: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE740u;
            // 0x2ae744: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE748u;
    ctx->pc = 0x2ae748u;
}
