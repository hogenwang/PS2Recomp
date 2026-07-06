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

// Function: sub_001AE720
// Address: 0x1ae720 - 0x1ae790
void sub_001AE720_0x1ae720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE720_0x1ae720");
#endif

    ctx->pc = 0x1ae720u;

    // 0x1ae720: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae724: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1ae728: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1ae72c: 0x8c43f700  lw          $v1, -0x900($v0)
    ctx->pc = 0x1ae72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964992)));
    // 0x1ae730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae734: 0xa6403  sra         $t4, $t2, 16
    ctx->pc = 0x1ae734u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 16));
    // 0x1ae738: 0xb6c03  sra         $t5, $t3, 16
    ctx->pc = 0x1ae738u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 11), 16));
    // 0x1ae73c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae740: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x1ae740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae744: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1ae744u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae748: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae74c: 0x87af0038  lh          $t7, 0x38($sp)
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae750: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE750u;
    {
        const bool branch_taken_0x1ae750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE750u;
        // 0x1ae754: 0x87a20040  lh          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae750) {
            ctx->pc = 0x1AE770u;
            goto label_1ae770;
        }
    }
    ctx->pc = 0x1AE758u;
    // 0x1ae758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae75c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae760: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x1ae760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x1ae764: 0x806b8f6  j           func_1AE3D8
    ctx->pc = 0x1AE764u;
    ctx->pc = 0x1AE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE764u;
    // 0x1ae768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3D8u, 0x1AE764u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AE76Cu;
    // 0x1ae76c: 0x0  nop
    ctx->pc = 0x1ae76cu;
    // NOP
label_1ae770:
    // 0x1ae770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae774: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x1ae774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae778: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1ae778u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae77c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae780: 0xafae0030  sw          $t6, 0x30($sp)
    ctx->pc = 0x1ae780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
    // 0x1ae784: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x1ae784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x1ae788: 0x806b804  j           func_1AE010
    ctx->pc = 0x1AE788u;
    ctx->pc = 0x1AE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE788u;
    // 0x1ae78c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE010u, 0x1AE788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AE790u;
}
