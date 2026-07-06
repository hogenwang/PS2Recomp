#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDF00
// Address: 0x1bdf00 - 0x1bdf50
void sub_001BDF00_0x1bdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF00_0x1bdf00");
#endif

    switch (ctx->pc) {
        case 0x1bdf20u: goto label_1bdf20;
        default: break;
    }

    ctx->pc = 0x1bdf00u;

    // 0x1bdf00: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1bdf04: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1bdf08: 0x8c425348  lw          $v0, 0x5348($v0)
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21320)));
    // 0x1bdf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf10: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BDF10u;
    {
        const bool branch_taken_0x1bdf10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BDF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF10u;
            // 0x1bdf14: 0x8c645344  lw          $a0, 0x5344($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf10) {
            ctx->pc = 0x1BDF44u;
            goto label_1bdf44;
        }
    }
    ctx->pc = 0x1BDF18u;
    // 0x1bdf18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bdf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf1c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1bdf1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bdf20:
    // 0x1bdf20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bdf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDF24u;
    {
        const bool branch_taken_0x1bdf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF24u;
            // 0x1bdf28: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf24) {
            ctx->pc = 0x1BDF48u;
            goto label_1bdf48;
        }
    }
    ctx->pc = 0x1BDF2Cu;
    // 0x1bdf2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bdf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bdf30: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1bdf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1bdf34: 0x0  nop
    ctx->pc = 0x1bdf34u;
    // NOP
    // 0x1bdf38: 0x0  nop
    ctx->pc = 0x1bdf38u;
    // NOP
    // 0x1bdf3c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BDF3Cu;
    {
        const bool branch_taken_0x1bdf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf3c) {
            ctx->pc = 0x1BDF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF3Cu;
            // 0x1bdf40: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bdf20;
        }
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf48:
    // 0x1bdf48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDF50u;
    ctx->pc = 0x1bdf50u;
}
