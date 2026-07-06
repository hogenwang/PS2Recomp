#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126F78
// Address: 0x126f78 - 0x126fa8
void sub_00126F78_0x126f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126F78_0x126f78");
#endif

    ctx->pc = 0x126f78u;

    // 0x126f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126f7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f80: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x126F80u;
    {
        const bool branch_taken_0x126f80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F80u;
            // 0x126f84: 0x3a5280a  movz        $a1, $sp, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f80) {
            ctx->pc = 0x126FA0u;
            goto label_126fa0;
        }
    }
    ctx->pc = 0x126F88u;
    // 0x126f88: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x126F88u;
    {
        const bool branch_taken_0x126f88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F88u;
            // 0x126f8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f88) {
            ctx->pc = 0x126FA0u;
            goto label_126fa0;
        }
    }
    ctx->pc = 0x126F90u;
    // 0x126f90: 0x90cf0000  lbu         $t7, 0x0($a2)
    ctx->pc = 0x126f90u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126f94: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x126f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x126f98: 0x90ce0000  lbu         $t6, 0x0($a2)
    ctx->pc = 0x126f98u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126f9c: 0xe102b  sltu        $v0, $zero, $t6
    ctx->pc = 0x126f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_126fa0:
    // 0x126fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x126FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FA0u;
            // 0x126fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126FA8u;
    ctx->pc = 0x126fa8u;
}
