#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5408
// Address: 0x1f5408 - 0x1f5438
void sub_001F5408_0x1f5408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5408_0x1f5408");
#endif

    ctx->pc = 0x1f5408u;

    // 0x1f5408: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5408u;
    {
        const bool branch_taken_0x1f5408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5408u;
            // 0x1f540c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5408) {
            ctx->pc = 0x1F542Cu;
            goto label_1f542c;
        }
    }
    ctx->pc = 0x1F5410u;
    // 0x1f5410: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5414: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5414u;
    {
        const bool branch_taken_0x1f5414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5414) {
            ctx->pc = 0x1F5418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5414u;
            // 0x1f5418: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5424u;
            goto label_1f5424;
        }
    }
    ctx->pc = 0x1F541Cu;
    // 0x1f541c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5420: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f5420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f5424:
    // 0x1f5424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5428: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1f5428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_1f542c:
    // 0x1f542c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F542Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5434u;
    // 0x1f5434: 0x0  nop
    ctx->pc = 0x1f5434u;
    // NOP
    ctx->pc = 0x1f5438u;
}
