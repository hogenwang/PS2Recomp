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

// Function: sub_00344650
// Address: 0x344650 - 0x3446d0
void sub_00344650_0x344650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344650_0x344650");
#endif

    switch (ctx->pc) {
        case 0x344684u: goto label_344684;
        case 0x344690u: goto label_344690;
        case 0x3446a0u: goto label_3446a0;
        case 0x3446b4u: goto label_3446b4;
        case 0x3446c0u: goto label_3446c0;
        default: break;
    }

    ctx->pc = 0x344650u;

    // 0x344650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344654: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x344654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x344658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34465c: 0x2463be90  addiu       $v1, $v1, -0x4170
    ctx->pc = 0x34465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950544));
    // 0x344660: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x344660u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x344664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x344668: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x344668u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x34466c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x34466cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344670: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x344670u;
    {
        const bool branch_taken_0x344670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344670) {
            ctx->pc = 0x344674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344670u;
            // 0x344674: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344694u;
            goto label_344694;
        }
    }
    ctx->pc = 0x344678u;
    // 0x344678: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x344678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34467c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34467Cu;
    SET_GPR_U32(ctx, 31, 0x344684u);
    ctx->pc = 0x344680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34467Cu;
    // 0x344680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34467Cu, 0x344684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344684u;
label_344684:
    // 0x344684: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x344684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x344688: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344688u;
    SET_GPR_U32(ctx, 31, 0x344690u);
    ctx->pc = 0x34468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344688u;
    // 0x34468c: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x344688u, 0x344690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344690u;
label_344690:
    // 0x344690: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x344690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344694:
    // 0x344694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344698: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x344698u;
    SET_GPR_U32(ctx, 31, 0x3446A0u);
    ctx->pc = 0x34469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344698u;
    // 0x34469c: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x344698u, 0x3446A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446A0u;
label_3446a0:
    // 0x3446a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3446A0u;
    {
        const bool branch_taken_0x3446a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3446a0) {
            ctx->pc = 0x3446A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3446A0u;
            // 0x3446a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3446C4u;
            goto label_3446c4;
        }
    }
    ctx->pc = 0x3446A8u;
    // 0x3446a8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3446a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3446ac: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3446ACu;
    SET_GPR_U32(ctx, 31, 0x3446B4u);
    ctx->pc = 0x3446B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446ACu;
    // 0x3446b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3446ACu, 0x3446B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446B4u;
label_3446b4:
    // 0x3446b4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3446b8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3446B8u;
    SET_GPR_U32(ctx, 31, 0x3446C0u);
    ctx->pc = 0x3446BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446B8u;
    // 0x3446bc: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3446B8u, 0x3446C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446C0u;
label_3446c0:
    // 0x3446c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3446c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3446c4:
    // 0x3446c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3446C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3446C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446C4u;
        // 0x3446c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3446C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3446CCu;
    // 0x3446cc: 0x0  nop
    ctx->pc = 0x3446ccu;
    // NOP
}
