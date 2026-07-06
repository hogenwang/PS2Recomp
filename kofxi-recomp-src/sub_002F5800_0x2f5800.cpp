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

// Function: sub_002F5800
// Address: 0x2f5800 - 0x2f5840
void sub_002F5800_0x2f5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5800_0x2f5800");
#endif

    ctx->pc = 0x2f5800u;

    // 0x2f5800: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f5800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5804: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2f5804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f5808: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5808u;
    {
        const bool branch_taken_0x2f5808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5808) {
            ctx->pc = 0x2F580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5808u;
            // 0x2f580c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F581Cu;
            goto label_2f581c;
        }
    }
    ctx->pc = 0x2F5810u;
    // 0x2f5810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5814: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2f5814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f5818: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f5818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f581c:
    // 0x2f581c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F581Cu;
    {
        const bool branch_taken_0x2f581c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f581c) {
            ctx->pc = 0x2F5820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F581Cu;
            // 0x2f5820: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5830u;
            goto label_2f5830;
        }
    }
    ctx->pc = 0x2F5824u;
    // 0x2f5824: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f5828: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2f5828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2f582c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f5830:
    // 0x2f5830: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2f5830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2f5834: 0x80bd594  j           func_2F5650
    ctx->pc = 0x2F5834u;
    ctx->pc = 0x2F5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5834u;
    // 0x2f5838: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    sub_002F5650_0x2f5650(rdram, ctx, runtime); return;
    ctx->pc = 0x2F583Cu;
    // 0x2f583c: 0x0  nop
    ctx->pc = 0x2f583cu;
    // NOP
}
