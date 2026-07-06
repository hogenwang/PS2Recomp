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

// Function: sub_0025D970
// Address: 0x25d970 - 0x25da20
void sub_0025D970_0x25d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D970_0x25d970");
#endif

    switch (ctx->pc) {
        case 0x25d9a0u: goto label_25d9a0;
        case 0x25d9e8u: goto label_25d9e8;
        case 0x25d9f4u: goto label_25d9f4;
        default: break;
    }

    ctx->pc = 0x25d970u;

    // 0x25d970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d974: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25d978: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25d97c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25d97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d980: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25d984: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25d984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d988: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x25d98c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d990: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25d994: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25d998: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D998u;
    SET_GPR_U32(ctx, 31, 0x25D9A0u);
    ctx->pc = 0x25D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D998u;
    // 0x25d99c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D998u, 0x25D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9A0u;
label_25d9a0:
    // 0x25d9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9a4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25D9A4u;
    {
        const bool branch_taken_0x25d9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A4u;
        // 0x25d9a8: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9a4) {
            ctx->pc = 0x25D9FCu;
            goto label_25d9fc;
        }
    }
    ctx->pc = 0x25D9ACu;
    // 0x25d9ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d9b0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x25d9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9b8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x25d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x25d9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9c0: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x25d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x25d9c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25d9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9c8: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x25d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x25d9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9d0: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x25d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
    // 0x25d9d4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x25d9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d9d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25d9dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25d9e0: 0xc09770e  jal         func_25DC38
    ctx->pc = 0x25D9E0u;
    SET_GPR_U32(ctx, 31, 0x25D9E8u);
    ctx->pc = 0x25D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9E0u;
    // 0x25d9e4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC38u, 0x25D9E0u, 0x25D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9E8u;
label_25d9e8:
    // 0x25d9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9ec: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D9ECu;
    SET_GPR_U32(ctx, 31, 0x25D9F4u);
    ctx->pc = 0x25D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9ECu;
    // 0x25d9f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D9ECu, 0x25D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9F4u;
label_25d9f4:
    // 0x25d9f4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D9F4u;
    {
        const bool branch_taken_0x25d9f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9F4u;
        // 0x25d9f8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9f4) {
            ctx->pc = 0x25DA00u;
            goto label_25da00;
        }
    }
    ctx->pc = 0x25D9FCu;
label_25d9fc:
    // 0x25d9fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25da00:
    // 0x25da00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25da04: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25da04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25da08: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25da08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25da0c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25da0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25da10: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25da10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25da14: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25da14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25da18: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA18u;
        // 0x25da1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DA20u;
}
