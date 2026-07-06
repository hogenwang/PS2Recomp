#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E03E8
// Address: 0x1e03e8 - 0x1e0440
void sub_001E03E8_0x1e03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E03E8_0x1e03e8");
#endif

    switch (ctx->pc) {
        case 0x1e0418u: goto label_1e0418;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0438u: goto label_1e0438;
        default: break;
    }

    ctx->pc = 0x1e03e8u;

    // 0x1e03e8: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x1e03e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e03ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E03ECu;
    {
        const bool branch_taken_0x1e03ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e03ec) {
            ctx->pc = 0x1E0438u;
            goto label_1e0438;
        }
    }
    ctx->pc = 0x1E03F4u;
    // 0x1e03f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e03f8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1e03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1e03fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0400: 0x8c63cc80  lw          $v1, -0x3380($v1)
    ctx->pc = 0x1e0400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954112)));
    // 0x1e0404: 0x600008  jr          $v1
    ctx->pc = 0x1E0404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E0420u: goto label_1e0420;
            case 0x1E0428u: goto label_1e0428;
            case 0x1E0430u: goto label_1e0430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E040Cu;
    // 0x1e040c: 0x0  nop
    ctx->pc = 0x1e040cu;
    // NOP
label_1e0410:
    // 0x1e0410: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0410u;
            // 0x1e0414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0418u;
label_1e0418:
    // 0x1e0418: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0418u;
            // 0x1e041c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0420u;
label_1e0420:
    // 0x1e0420: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0420u;
            // 0x1e0424: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0428u;
label_1e0428:
    // 0x1e0428: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0428u;
            // 0x1e042c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0430u;
label_1e0430:
    // 0x1e0430: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0430u;
            // 0x1e0434: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0438u;
label_1e0438:
    // 0x1e0438: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0438u;
            // 0x1e043c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0440u;
    ctx->pc = 0x1e0440u;
}
