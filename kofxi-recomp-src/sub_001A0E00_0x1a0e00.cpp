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

// Function: sub_001A0E00
// Address: 0x1a0e00 - 0x1a0e50
void sub_001A0E00_0x1a0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0E00_0x1a0e00");
#endif

    ctx->pc = 0x1a0e00u;

    // 0x1a0e00: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0e04: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a0e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0e08: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a0e0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0e10: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a0e14: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1a0e18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0e1c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0e20: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1a0e20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a0e24: 0x54650005  bnel        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0E24u;
    {
        const bool branch_taken_0x1a0e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a0e24) {
            ctx->pc = 0x1A0E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0E24u;
            // 0x1a0e28: 0x94830026  lhu         $v1, 0x26($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0E3Cu;
            goto label_1a0e3c;
        }
    }
    ctx->pc = 0x1A0E2Cu;
    // 0x1a0e2c: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x1a0e2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a0e30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a0e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E34u;
    {
        const bool branch_taken_0x1a0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E34u;
        // 0x1a0e38: 0xa4830024  sh          $v1, 0x24($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e34) {
            ctx->pc = 0x1A0E44u;
            goto label_1a0e44;
        }
    }
    ctx->pc = 0x1A0E3Cu;
label_1a0e3c:
    // 0x1a0e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a0e40: 0xa4830026  sh          $v1, 0x26($a0)
    ctx->pc = 0x1a0e40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 3));
label_1a0e44:
    // 0x1a0e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E4Cu;
    // 0x1a0e4c: 0x0  nop
    ctx->pc = 0x1a0e4cu;
    // NOP
    if (ctx->pc == 0x1a0e4cu) { ctx->pc = 0x1a0e50u; }
}
