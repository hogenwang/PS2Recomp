#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241180
// Address: 0x241180 - 0x2411b8
void sub_00241180_0x241180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241180_0x241180");
#endif

    switch (ctx->pc) {
        case 0x241188u: goto label_241188;
        case 0x2411b0u: goto label_2411b0;
        default: break;
    }

    ctx->pc = 0x241180u;

    // 0x241180: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x241180u;
    {
        const bool branch_taken_0x241180 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x241184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241180u;
            // 0x241184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241180) {
            ctx->pc = 0x2411A8u;
            goto label_2411a8;
        }
    }
    ctx->pc = 0x241188u;
label_241188:
    // 0x241188: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x241188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24118c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24118Cu;
    {
        const bool branch_taken_0x24118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24118c) {
            ctx->pc = 0x2411A8u;
            goto label_2411a8;
        }
    }
    ctx->pc = 0x241194u;
    // 0x241194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x241194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x241198: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x241198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24119c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24119Cu;
    {
        const bool branch_taken_0x24119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24119Cu;
            // 0x2411a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24119c) {
            ctx->pc = 0x241188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241188;
        }
    }
    ctx->pc = 0x2411A4u;
    // 0x2411a4: 0x0  nop
    ctx->pc = 0x2411a4u;
    // NOP
label_2411a8:
    // 0x2411a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2411A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2411ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411A8u;
            // 0x2411ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2411B0u;
label_2411b0:
    // 0x2411b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2411B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2411B8u;
    ctx->pc = 0x2411b8u;
}
