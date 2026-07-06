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

// Function: sub_001AF1B0
// Address: 0x1af1b0 - 0x1af240
void sub_001AF1B0_0x1af1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1B0_0x1af1b0");
#endif

    switch (ctx->pc) {
        case 0x1af204u: goto label_1af204;
        case 0x1af218u: goto label_1af218;
        case 0x1af220u: goto label_1af220;
        default: break;
    }

    ctx->pc = 0x1af1b0u;

    // 0x1af1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af1b4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1af1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af1bc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1af1c0: 0x2508026f  addiu       $t0, $t0, 0x26F
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 623));
    // 0x1af1c4: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1af1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af1cc: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1af1ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1af1d0: 0x806bd24  j           func_1AF490
    ctx->pc = 0x1AF1D0u;
    ctx->pc = 0x1AF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1D0u;
    // 0x1af1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    sub_001AF490_0x1af490(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF1D8u;
    // 0x1af1d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af1e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af1f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af1f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af1fc: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF1FCu;
    SET_GPR_U32(ctx, 31, 0x1AF204u);
    ctx->pc = 0x1AF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1FCu;
    // 0x1af200: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AF1FCu, 0x1AF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF204u;
label_1af204:
    // 0x1af204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af20c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af210: 0xc06bc90  jal         func_1AF240
    ctx->pc = 0x1AF210u;
    SET_GPR_U32(ctx, 31, 0x1AF218u);
    ctx->pc = 0x1AF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF210u;
    // 0x1af214: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF240u, 0x1AF210u, 0x1AF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF218u;
label_1af218:
    // 0x1af218: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF218u;
    SET_GPR_U32(ctx, 31, 0x1AF220u);
    ctx->pc = 0x1AF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF218u;
    // 0x1af21c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1AF218u, 0x1AF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF220u;
label_1af220:
    // 0x1af220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af230: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af238: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF238u;
        // 0x1af23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF240u;
}
