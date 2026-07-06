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

// Function: sub_001FC420
// Address: 0x1fc420 - 0x1fc488
void sub_001FC420_0x1fc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC420_0x1fc420");
#endif

    switch (ctx->pc) {
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc474u: goto label_1fc474;
        default: break;
    }

    ctx->pc = 0x1fc420u;

    // 0x1fc420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fc428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fc42c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FC42Cu;
    SET_GPR_U32(ctx, 31, 0x1FC434u);
    ctx->pc = 0x1FC430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC42Cu;
    // 0x1fc430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FC42Cu, 0x1FC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC434u;
label_1fc434:
    // 0x1fc434: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fc438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc43c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC43Cu;
    {
        const bool branch_taken_0x1fc43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC43Cu;
        // 0x1fc440: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc43c) {
            ctx->pc = 0x1FC458u;
            goto label_1fc458;
        }
    }
    ctx->pc = 0x1FC444u;
    // 0x1fc444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc44c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fc44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc450: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FC450u;
    ctx->pc = 0x1FC454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC450u;
    // 0x1fc454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FC458u;
label_1fc458:
    // 0x1fc458: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FC458u;
    SET_GPR_U32(ctx, 31, 0x1FC460u);
    ctx->pc = 0x1FC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC458u;
    // 0x1fc45c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1FC458u, 0x1FC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC460u;
label_1fc460:
    // 0x1fc460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc464: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC464u;
    {
        const bool branch_taken_0x1fc464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC464u;
        // 0x1fc468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc464) {
            ctx->pc = 0x1FC474u;
            goto label_1fc474;
        }
    }
    ctx->pc = 0x1FC46Cu;
    // 0x1fc46c: 0xc07f122  jal         func_1FC488
    ctx->pc = 0x1FC46Cu;
    SET_GPR_U32(ctx, 31, 0x1FC474u);
    ctx->pc = 0x1FC488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC488u, 0x1FC46Cu, 0x1FC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC474u;
label_1fc474:
    // 0x1fc474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc47c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc480: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC480u;
        // 0x1fc484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC488u;
}
