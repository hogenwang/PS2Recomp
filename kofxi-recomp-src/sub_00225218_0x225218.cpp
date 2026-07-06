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

// Function: sub_00225218
// Address: 0x225218 - 0x225270
void sub_00225218_0x225218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225218_0x225218");
#endif

    switch (ctx->pc) {
        case 0x22521cu: goto label_22521c;
        case 0x225230u: goto label_225230;
        default: break;
    }

    ctx->pc = 0x225218u;

    // 0x225218: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22521c:
    // 0x22521c: 0x908a0000  lbu         $t2, 0x0($a0)
    ctx->pc = 0x22521cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225220: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x225220u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225224: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x225224u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225228: 0xa5e00  sll         $t3, $t2, 24
    ctx->pc = 0x225228u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x22522c: 0xb5e03  sra         $t3, $t3, 24
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 24));
label_225230:
    // 0x225230: 0x1ab7807  srav        $t7, $t3, $t5
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 13) & 0x1F));
    // 0x225234: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x225234u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x225238: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x225238u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x22523c: 0x29ae0007  slti        $t6, $t5, 0x7
    ctx->pc = 0x22523cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x225240: 0x0  nop
    ctx->pc = 0x225240u;
    // NOP
    // 0x225244: 0x15c0fffa  bnez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225244u;
    {
        const bool branch_taken_0x225244 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x225248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225244u;
        // 0x225248: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225244) {
            ctx->pc = 0x225230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225230;
        }
    }
    ctx->pc = 0x22524Cu;
    // 0x22524c: 0x318f0001  andi        $t7, $t4, 0x1
    ctx->pc = 0x22524cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x225250: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x225250u;
    {
        const bool branch_taken_0x225250 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x225254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225250u;
        // 0x225254: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225250) {
            ctx->pc = 0x225260u;
            goto label_225260;
        }
    }
    ctx->pc = 0x225258u;
    // 0x225258: 0x354f0001  ori         $t7, $t2, 0x1
    ctx->pc = 0x225258u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x22525c: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x22525cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
label_225260:
    // 0x225260: 0x1d20ffee  bgtz        $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x225260u;
    {
        const bool branch_taken_0x225260 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x225264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225260u;
        // 0x225264: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225260) {
            ctx->pc = 0x22521Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22521c;
        }
    }
    ctx->pc = 0x225268u;
    // 0x225268: 0x3e00008  jr          $ra
    ctx->pc = 0x225268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225270u;
}
