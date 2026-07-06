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

// Function: sub_0020D910
// Address: 0x20d910 - 0x20d950
void sub_0020D910_0x20d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D910_0x20d910");
#endif

    switch (ctx->pc) {
        case 0x20d928u: goto label_20d928;
        default: break;
    }

    ctx->pc = 0x20d910u;

    // 0x20d910: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20d910u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d914: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x20d914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d918: 0x1067000b  beq         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x20D918u;
    {
        const bool branch_taken_0x20d918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x20d918) {
            ctx->pc = 0x20D948u;
            goto label_20d948;
        }
    }
    ctx->pc = 0x20D920u;
    // 0x20d920: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x20d924: 0x24c6a390  addiu       $a2, $a2, -0x5C70
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943632));
label_20d928:
    // 0x20d928: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20d928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20d92c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x20d930: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20d934: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x20d934u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d938: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x20d938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d93c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20d93cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d940: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D940u;
    {
        const bool branch_taken_0x20d940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x20D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D940u;
        // 0x20d944: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d940) {
            ctx->pc = 0x20D928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d928;
        }
    }
    ctx->pc = 0x20D948u;
label_20d948:
    // 0x20d948: 0x3e00008  jr          $ra
    ctx->pc = 0x20D948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D948u;
        // 0x20d94c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D950u;
}
