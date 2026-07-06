#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A130
// Address: 0x18a130 - 0x18a160
void sub_0018A130_0x18a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A130_0x18a130");
#endif

    ctx->pc = 0x18a130u;

    // 0x18a130: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a134: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a138: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a13c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18a140: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a144: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18a144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18a148: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a150: 0x3e00008  jr          $ra
    ctx->pc = 0x18A150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A150u;
            // 0x18a154: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A158u;
    // 0x18a158: 0x0  nop
    ctx->pc = 0x18a158u;
    // NOP
    // 0x18a15c: 0x0  nop
    ctx->pc = 0x18a15cu;
    // NOP
    ctx->pc = 0x18a160u;
}
