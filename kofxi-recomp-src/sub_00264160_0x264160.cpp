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

// Function: sub_00264160
// Address: 0x264160 - 0x2641a8
void sub_00264160_0x264160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264160_0x264160");
#endif

    switch (ctx->pc) {
        case 0x264174u: goto label_264174;
        default: break;
    }

    ctx->pc = 0x264160u;

    // 0x264160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264168: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26416c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x26416Cu;
    SET_GPR_U32(ctx, 31, 0x264174u);
    ctx->pc = 0x264170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26416Cu;
    // 0x264170: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x26416Cu, 0x264174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264174u;
label_264174:
    // 0x264174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x264174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264178: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x264178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x26417c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26417Cu;
    {
        const bool branch_taken_0x26417c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x264180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26417Cu;
        // 0x264180: 0x31602  srl         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26417c) {
            ctx->pc = 0x264198u;
            goto label_264198;
        }
    }
    ctx->pc = 0x264184u;
    // 0x264184: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x264184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x264188: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x264188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26418c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26418Cu;
    {
        const bool branch_taken_0x26418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x264190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26418Cu;
        // 0x264190: 0x31202  srl         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26418c) {
            ctx->pc = 0x264198u;
            goto label_264198;
        }
    }
    ctx->pc = 0x264194u;
    // 0x264194: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_264198:
    // 0x264198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26419c: 0x3e00008  jr          $ra
    ctx->pc = 0x26419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2641A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26419Cu;
        // 0x2641a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2641A4u;
    // 0x2641a4: 0x0  nop
    ctx->pc = 0x2641a4u;
    // NOP
    if (ctx->pc == 0x2641a4u) { ctx->pc = 0x2641a8u; }
}
