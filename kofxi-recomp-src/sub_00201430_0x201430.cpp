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

// Function: sub_00201430
// Address: 0x201430 - 0x2014a8
void sub_00201430_0x201430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201430_0x201430");
#endif

    switch (ctx->pc) {
        case 0x20146cu: goto label_20146c;
        case 0x201484u: goto label_201484;
        default: break;
    }

    ctx->pc = 0x201430u;

    // 0x201430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20143c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201448: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x201448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20144c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x201450: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x201450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201454: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x201454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201458: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x201458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20145c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x20145cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201464: 0xc0801ee  jal         func_2007B8
    ctx->pc = 0x201464u;
    SET_GPR_U32(ctx, 31, 0x20146Cu);
    ctx->pc = 0x201468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201464u;
    // 0x201468: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007B8u, 0x201464u, 0x20146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20146Cu;
label_20146c:
    // 0x20146c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201474: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x201474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201478: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x201478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20147c: 0xc08052a  jal         func_2014A8
    ctx->pc = 0x20147Cu;
    SET_GPR_U32(ctx, 31, 0x201484u);
    ctx->pc = 0x201480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20147Cu;
    // 0x201480: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2014A8u, 0x20147Cu, 0x201484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201484u;
label_201484:
    // 0x201484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201488: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x201488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x20148c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20148cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20149c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2014a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2014A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A0u;
        // 0x2014a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2014A8u;
}
