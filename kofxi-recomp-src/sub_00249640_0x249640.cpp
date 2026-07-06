#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249640
// Address: 0x249640 - 0x249698
void sub_00249640_0x249640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249640_0x249640");
#endif

    switch (ctx->pc) {
        case 0x249658u: goto label_249658;
        default: break;
    }

    ctx->pc = 0x249640u;

    // 0x249640: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x249644: 0x8c4411a0  lw          $a0, 0x11A0($v0)
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x249648: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x249648u;
    {
        const bool branch_taken_0x249648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249648u;
            // 0x24964c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249648) {
            ctx->pc = 0x249684u;
            goto label_249684;
        }
    }
    ctx->pc = 0x249650u;
    // 0x249650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x249650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249654: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x249654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_249658:
    // 0x249658: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x249658u;
    {
        const bool branch_taken_0x249658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249658u;
            // 0x24965c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249658) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249660u;
    // 0x249660: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x249660u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x249664: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x249664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x249668: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x249668u;
    {
        const bool branch_taken_0x249668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x249668) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249670u;
    // 0x249670: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x249670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x249674: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x249674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x249678: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x249678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_24967c:
    // 0x24967c: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x24967Cu;
    {
        const bool branch_taken_0x24967c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24967c) {
            ctx->pc = 0x249680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24967Cu;
            // 0x249680: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249658;
        }
    }
    ctx->pc = 0x249684u;
label_249684:
    // 0x249684: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249684u;
    {
        const bool branch_taken_0x249684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249684u;
            // 0x249688: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249684) {
            ctx->pc = 0x249690u;
            goto label_249690;
        }
    }
    ctx->pc = 0x24968Cu;
    // 0x24968c: 0xfc4501b8  sd          $a1, 0x1B8($v0)
    ctx->pc = 0x24968cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 440), GPR_U64(ctx, 5));
label_249690:
    // 0x249690: 0x3e00008  jr          $ra
    ctx->pc = 0x249690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249698u;
    ctx->pc = 0x249698u;
}
