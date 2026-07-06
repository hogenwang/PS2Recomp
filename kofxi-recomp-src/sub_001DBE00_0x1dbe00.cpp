#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBE00
// Address: 0x1dbe00 - 0x1dbe48
void sub_001DBE00_0x1dbe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBE00_0x1dbe00");
#endif

    ctx->pc = 0x1dbe00u;

    // 0x1dbe00: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1dbe04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbe08: 0x8c6280d0  lw          $v0, -0x7F30($v1)
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934736)));
    // 0x1dbe0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dbe0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbe14: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1dbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1dbe18: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x1dbe1c: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x1dbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x1dbe20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe24: 0x8ca3e6cc  lw          $v1, -0x1934($a1)
    ctx->pc = 0x1dbe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960844)));
    // 0x1dbe28: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x1dbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x1dbe2c: 0x8076f8e  j           func_1DBE38
    ctx->pc = 0x1DBE2Cu;
    ctx->pc = 0x1DBE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE2Cu;
            // 0x1dbe30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE38u;
    goto label_1dbe38;
    ctx->pc = 0x1DBE34u;
    // 0x1dbe34: 0x0  nop
    ctx->pc = 0x1dbe34u;
    // NOP
label_1dbe38:
    // 0x1dbe38: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1dbe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE3Cu;
            // 0x1dbe40: 0xac820110  sw          $v0, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBE44u;
    // 0x1dbe44: 0x0  nop
    ctx->pc = 0x1dbe44u;
    // NOP
    ctx->pc = 0x1dbe48u;
}
