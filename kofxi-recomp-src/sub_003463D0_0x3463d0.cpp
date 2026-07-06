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

// Function: sub_003463D0
// Address: 0x3463d0 - 0x346460
void sub_003463D0_0x3463d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003463D0_0x3463d0");
#endif

    switch (ctx->pc) {
        case 0x3463e4u: goto label_3463e4;
        case 0x3463f4u: goto label_3463f4;
        case 0x346408u: goto label_346408;
        case 0x346434u: goto label_346434;
        case 0x346454u: goto label_346454;
        default: break;
    }

    ctx->pc = 0x3463d0u;

    // 0x3463d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3463d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3463d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3463d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3463d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3463d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3463dc: 0xc08861c  jal         func_221870
    ctx->pc = 0x3463DCu;
    SET_GPR_U32(ctx, 31, 0x3463E4u);
    ctx->pc = 0x3463E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463DCu;
    // 0x3463e0: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221870u, 0x3463DCu, 0x3463E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463E4u;
label_3463e4:
    // 0x3463e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3463E4u;
    {
        const bool branch_taken_0x3463e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3463e4) {
            ctx->pc = 0x3463FCu;
            goto label_3463fc;
        }
    }
    ctx->pc = 0x3463ECu;
    // 0x3463ec: 0xc0d1918  jal         func_346460
    ctx->pc = 0x3463ECu;
    SET_GPR_U32(ctx, 31, 0x3463F4u);
    ctx->pc = 0x346460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346460u, 0x3463ECu, 0x3463F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463F4u;
label_3463f4:
    // 0x3463f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3463F4u;
    {
        const bool branch_taken_0x3463f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3463F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463F4u;
        // 0x3463f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3463f4) {
            ctx->pc = 0x34640Cu;
            goto label_34640c;
        }
    }
    ctx->pc = 0x3463FCu;
label_3463fc:
    // 0x3463fc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3463fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346400: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346400u;
    SET_GPR_U32(ctx, 31, 0x346408u);
    ctx->pc = 0x346404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346400u;
    // 0x346404: 0x24846420  addiu       $a0, $a0, 0x6420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x346400u, 0x346408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346408u;
label_346408:
    // 0x346408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34640c:
    // 0x34640c: 0x3e00008  jr          $ra
    ctx->pc = 0x34640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34640Cu;
        // 0x346410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34640Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346414u;
    // 0x346414: 0x0  nop
    ctx->pc = 0x346414u;
    // NOP
    // 0x346418: 0x0  nop
    ctx->pc = 0x346418u;
    // NOP
    // 0x34641c: 0x0  nop
    ctx->pc = 0x34641cu;
    // NOP
    // 0x346420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346424: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34642c: 0xc088696  jal         func_221A58
    ctx->pc = 0x34642Cu;
    SET_GPR_U32(ctx, 31, 0x346434u);
    ctx->pc = 0x346430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34642Cu;
    // 0x346430: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x34642Cu, 0x346434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346434u;
label_346434:
    // 0x346434: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x346434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x346438: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x346438u;
    {
        const bool branch_taken_0x346438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x346438) {
            ctx->pc = 0x34644Cu;
            goto label_34644c;
        }
    }
    ctx->pc = 0x346440u;
    // 0x346440: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x346440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x346444: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x346444u;
    {
        const bool branch_taken_0x346444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x346444) {
            ctx->pc = 0x346448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346444u;
            // 0x346448: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346458u;
            goto label_346458;
        }
    }
    ctx->pc = 0x34644Cu;
label_34644c:
    // 0x34644c: 0xc0d1918  jal         func_346460
    ctx->pc = 0x34644Cu;
    SET_GPR_U32(ctx, 31, 0x346454u);
    ctx->pc = 0x346460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346460u, 0x34644Cu, 0x346454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346454u;
label_346454:
    // 0x346454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346458:
    // 0x346458: 0x3e00008  jr          $ra
    ctx->pc = 0x346458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346458u;
        // 0x34645c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346460u;
}
