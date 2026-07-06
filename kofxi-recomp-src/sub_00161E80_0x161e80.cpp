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

// Function: sub_00161E80
// Address: 0x161e80 - 0x161ed0
void sub_00161E80_0x161e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161E80_0x161e80");
#endif

    ctx->pc = 0x161e80u;

    // 0x161e80: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x161e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x161e84: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x161e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x161e88: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x161e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x161e8c: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x161e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x161e90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161e94: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x161e98: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x161e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161ea0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x161ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x161ea4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x161ea8: 0x2463dc90  addiu       $v1, $v1, -0x2370
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x161eac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x161eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161eb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161ebc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x161EBCu;
    {
        const bool branch_taken_0x161ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ebc) {
            ctx->pc = 0x161EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EBCu;
            // 0x161ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161EC8u;
            goto label_161ec8;
        }
    }
    ctx->pc = 0x161EC4u;
    // 0x161ec4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x161ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_161ec8:
    // 0x161ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x161EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161ED0u;
}
