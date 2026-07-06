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

// Function: sub_0020D600
// Address: 0x20d600 - 0x20d650
void sub_0020D600_0x20d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D600_0x20d600");
#endif

    switch (ctx->pc) {
        case 0x20d620u: goto label_20d620;
        default: break;
    }

    ctx->pc = 0x20d600u;

    // 0x20d600: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x20d600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x20d604: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x20d604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20d608: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x20d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d60c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D60Cu;
    {
        const bool branch_taken_0x20d60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D60Cu;
        // 0x20d610: 0x24a5a5d0  addiu       $a1, $a1, -0x5A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d60c) {
            ctx->pc = 0x20D61Cu;
            goto label_20d61c;
        }
    }
    ctx->pc = 0x20D614u;
    // 0x20d614: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20D614u;
    {
        const bool branch_taken_0x20d614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D614u;
        // 0x20d618: 0x3402fffe  ori         $v0, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d614) {
            ctx->pc = 0x20D648u;
            goto label_20d648;
        }
    }
    ctx->pc = 0x20D61Cu;
label_20d61c:
    // 0x20d61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d620:
    // 0x20d620: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x20d620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d624: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D624u;
    {
        const bool branch_taken_0x20d624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20d624) {
            ctx->pc = 0x20D628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D624u;
            // 0x20d628: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D634u;
            goto label_20d634;
        }
    }
    ctx->pc = 0x20D62Cu;
    // 0x20d62c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20D62Cu;
    {
        const bool branch_taken_0x20d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d62c) {
            ctx->pc = 0x20D648u;
            goto label_20d648;
        }
    }
    ctx->pc = 0x20D634u;
label_20d634:
    // 0x20d634: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d638: 0x28430118  slti        $v1, $v0, 0x118
    ctx->pc = 0x20d638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)280) ? 1 : 0);
    // 0x20d63c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20D63Cu;
    {
        const bool branch_taken_0x20d63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D63Cu;
        // 0x20d640: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d63c) {
            ctx->pc = 0x20D620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d620;
        }
    }
    ctx->pc = 0x20D644u;
    // 0x20d644: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x20d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_20d648:
    // 0x20d648: 0x3e00008  jr          $ra
    ctx->pc = 0x20D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D650u;
}
