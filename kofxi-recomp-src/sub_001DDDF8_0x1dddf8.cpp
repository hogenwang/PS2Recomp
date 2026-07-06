#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDDF8
// Address: 0x1dddf8 - 0x1dde30
void sub_001DDDF8_0x1dddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDDF8_0x1dddf8");
#endif

    switch (ctx->pc) {
        case 0x1dde28u: goto label_1dde28;
        default: break;
    }

    ctx->pc = 0x1dddf8u;

    // 0x1dddf8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x1dddf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dddfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DDDFCu;
    {
        const bool branch_taken_0x1dddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dddfc) {
            ctx->pc = 0x1DDE28u;
            goto label_1dde28;
        }
    }
    ctx->pc = 0x1DDE04u;
    // 0x1dde04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dde04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dde08: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1dde08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1dde0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dde10: 0x8c63c540  lw          $v1, -0x3AC0($v1)
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952256)));
    // 0x1dde14: 0x600008  jr          $v1
    ctx->pc = 0x1DDE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDE20u: goto label_1dde20;
            case 0x1DDE28u: goto label_1dde28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDE1Cu;
    // 0x1dde1c: 0x0  nop
    ctx->pc = 0x1dde1cu;
    // NOP
label_1dde20:
    // 0x1dde20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE20u;
            // 0x1dde24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDE28u;
label_1dde28:
    // 0x1dde28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE28u;
            // 0x1dde2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDE30u;
    ctx->pc = 0x1dde30u;
}
