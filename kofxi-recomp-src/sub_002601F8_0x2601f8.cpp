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

// Function: sub_002601F8
// Address: 0x2601f8 - 0x260248
void sub_002601F8_0x2601f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002601F8_0x2601f8");
#endif

    switch (ctx->pc) {
        case 0x260210u: goto label_260210;
        case 0x260224u: goto label_260224;
        case 0x260230u: goto label_260230;
        default: break;
    }

    ctx->pc = 0x2601f8u;

    // 0x2601f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2601f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2601fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2601fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x260204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260208: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x260208u;
    SET_GPR_U32(ctx, 31, 0x260210u);
    ctx->pc = 0x26020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260208u;
    // 0x26020c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x260208u, 0x260210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260210u;
label_260210:
    // 0x260210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260214: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260214u;
    {
        const bool branch_taken_0x260214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260214u;
        // 0x260218: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260214) {
            ctx->pc = 0x260230u;
            goto label_260230;
        }
    }
    ctx->pc = 0x26021Cu;
    // 0x26021c: 0xc08cac0  jal         func_232B00
    ctx->pc = 0x26021Cu;
    SET_GPR_U32(ctx, 31, 0x260224u);
    ctx->pc = 0x260220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26021Cu;
    // 0x260220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B00u, 0x26021Cu, 0x260224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260228: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x260228u;
    SET_GPR_U32(ctx, 31, 0x260230u);
    ctx->pc = 0x26022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260228u;
    // 0x26022c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x260228u, 0x260230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260230u;
label_260230:
    // 0x260230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260234: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26023c: 0x3e00008  jr          $ra
    ctx->pc = 0x26023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26023Cu;
        // 0x260240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26023Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260244u;
    // 0x260244: 0x0  nop
    ctx->pc = 0x260244u;
    // NOP
    if (ctx->pc == 0x260244u) { ctx->pc = 0x260248u; }
}
