#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C100
// Address: 0x19c100 - 0x19c130
void sub_0019C100_0x19c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C100_0x19c100");
#endif

    ctx->pc = 0x19c100u;

    // 0x19c100: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c104: 0x8043d4f8  lb          $v1, -0x2B08($v0)
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956280)));
    // 0x19c108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c10c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C10Cu;
    {
        const bool branch_taken_0x19c10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c10c) {
            ctx->pc = 0x19C110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C10Cu;
            // 0x19c110: 0x2163c  dsll32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C124u;
            goto label_19c124;
        }
    }
    ctx->pc = 0x19C114u;
    // 0x19c114: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C114u;
    {
        const bool branch_taken_0x19c114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c114) {
            ctx->pc = 0x19C118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C114u;
            // 0x19c118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C128u;
            goto label_19c128;
        }
    }
    ctx->pc = 0x19C11Cu;
    // 0x19c11c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C11Cu;
    {
        const bool branch_taken_0x19c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C11Cu;
            // 0x19c120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c11c) {
            ctx->pc = 0x19C128u;
            goto label_19c128;
        }
    }
    ctx->pc = 0x19C124u;
label_19c124:
    // 0x19c124: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19c124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_19c128:
    // 0x19c128: 0x3e00008  jr          $ra
    ctx->pc = 0x19C128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C130u;
    ctx->pc = 0x19c130u;
}
