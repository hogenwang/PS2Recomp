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

// Function: sub_0028E430
// Address: 0x28e430 - 0x28e478
void sub_0028E430_0x28e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E430_0x28e430");
#endif

    switch (ctx->pc) {
        case 0x28e430u: goto label_28e430;
        case 0x28e434u: goto label_28e434;
        case 0x28e438u: goto label_28e438;
        case 0x28e43cu: goto label_28e43c;
        case 0x28e440u: goto label_28e440;
        case 0x28e444u: goto label_28e444;
        case 0x28e448u: goto label_28e448;
        case 0x28e44cu: goto label_28e44c;
        case 0x28e450u: goto label_28e450;
        case 0x28e454u: goto label_28e454;
        case 0x28e458u: goto label_28e458;
        case 0x28e45cu: goto label_28e45c;
        case 0x28e460u: goto label_28e460;
        case 0x28e464u: goto label_28e464;
        case 0x28e468u: goto label_28e468;
        case 0x28e46cu: goto label_28e46c;
        case 0x28e470u: goto label_28e470;
        case 0x28e474u: goto label_28e474;
        default: break;
    }

    ctx->pc = 0x28e430u;

label_28e430:
    // 0x28e430: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e434:
    // 0x28e434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e438:
    // 0x28e438: 0x8c4245c4  lw          $v0, 0x45C4($v0)
    ctx->pc = 0x28e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17860)));
label_28e43c:
    // 0x28e43c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e440:
    if (ctx->pc == 0x28E440u) {
        ctx->pc = 0x28E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E43Cu;
        // 0x28e440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E444u;
        goto label_28e444;
    }
    ctx->pc = 0x28E43Cu;
    {
        const bool branch_taken_0x28e43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E43Cu;
        // 0x28e440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e43c) {
            ctx->pc = 0x28E464u;
            goto label_28e464;
        }
    }
    ctx->pc = 0x28E444u;
label_28e444:
    // 0x28e444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e448:
    // 0x28e448: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e44c:
    // 0x28e44c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x28e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_28e450:
    // 0x28e450: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e454:
    // 0x28e454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e458:
    // 0x28e458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e45c:
    // 0x28e45c: 0x80a5648  j           func_295920
label_28e460:
    if (ctx->pc == 0x28E460u) {
        ctx->pc = 0x28E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E45Cu;
        // 0x28e460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E464u;
        goto label_28e464;
    }
    ctx->pc = 0x28E45Cu;
    ctx->pc = 0x28E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E45Cu;
    // 0x28e460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28E464u;
label_28e464:
    // 0x28e464: 0x40f809  jalr        $v0
label_28e468:
    if (ctx->pc == 0x28E468u) {
        ctx->pc = 0x28E46Cu;
        goto label_28e46c;
    }
    ctx->pc = 0x28E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E46Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E464u, 0x28E46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E46Cu;
label_28e46c:
    // 0x28e46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e470:
    // 0x28e470: 0x3e00008  jr          $ra
label_28e474:
    if (ctx->pc == 0x28E474u) {
        ctx->pc = 0x28E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E470u;
        // 0x28e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E478u;
        goto label_fallthrough_0x28e470;
    }
    ctx->pc = 0x28E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E470u;
        // 0x28e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e470:
    ctx->pc = 0x28E478u;
}
