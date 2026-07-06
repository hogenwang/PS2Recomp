#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF638
// Address: 0x2af638 - 0x2af678
void sub_002AF638_0x2af638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF638_0x2af638");
#endif

    switch (ctx->pc) {
        case 0x2af64cu: goto label_2af64c;
        case 0x2af66cu: goto label_2af66c;
        default: break;
    }

    ctx->pc = 0x2af638u;

    // 0x2af638: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2af638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2af63c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF63Cu;
    {
        const bool branch_taken_0x2af63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af63c) {
            ctx->pc = 0x2AF640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF63Cu;
            // 0x2af640: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF64Cu;
            goto label_2af64c;
        }
    }
    ctx->pc = 0x2AF644u;
    // 0x2af644: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF644u;
            // 0x2af648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF64Cu;
label_2af64c:
    // 0x2af64c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2af64cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2af650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2af654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2af654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2af658: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2af658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2af65c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF65Cu;
    {
        const bool branch_taken_0x2af65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF65Cu;
            // 0x2af660: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af65c) {
            ctx->pc = 0x2AF66Cu;
            goto label_2af66c;
        }
    }
    ctx->pc = 0x2AF664u;
    // 0x2af664: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF664u;
            // 0x2af668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF66Cu;
label_2af66c:
    // 0x2af66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af670: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF670u;
            // 0x2af674: 0xac830114  sw          $v1, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF678u;
    ctx->pc = 0x2af678u;
}
