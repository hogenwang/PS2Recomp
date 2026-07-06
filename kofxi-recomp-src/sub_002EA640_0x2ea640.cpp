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

// Function: sub_002EA640
// Address: 0x2ea640 - 0x2ea6c8
void sub_002EA640_0x2ea640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA640_0x2ea640");
#endif

    switch (ctx->pc) {
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea668u: goto label_2ea668;
        case 0x2ea670u: goto label_2ea670;
        case 0x2ea678u: goto label_2ea678;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea688u: goto label_2ea688;
        case 0x2ea690u: goto label_2ea690;
        case 0x2ea698u: goto label_2ea698;
        case 0x2ea6a0u: goto label_2ea6a0;
        case 0x2ea6a8u: goto label_2ea6a8;
        case 0x2ea6b0u: goto label_2ea6b0;
        default: break;
    }

    ctx->pc = 0x2ea640u;

    // 0x2ea640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea64c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ea64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ea650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ea650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ea654: 0xc08ce60  jal         func_233980
    ctx->pc = 0x2EA654u;
    SET_GPR_U32(ctx, 31, 0x2EA65Cu);
    ctx->pc = 0x2EA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA654u;
    // 0x2ea658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233980u, 0x2EA654u, 0x2EA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA65Cu;
label_2ea65c:
    // 0x2ea65c: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x2ea65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2ea660: 0xc08dd00  jal         func_237400
    ctx->pc = 0x2EA660u;
    SET_GPR_U32(ctx, 31, 0x2EA668u);
    ctx->pc = 0x2EA664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA660u;
    // 0x2ea664: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237400u, 0x2EA660u, 0x2EA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA668u;
label_2ea668:
    // 0x2ea668: 0xc08da0c  jal         func_236830
    ctx->pc = 0x2EA668u;
    SET_GPR_U32(ctx, 31, 0x2EA670u);
    ctx->pc = 0x2EA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA668u;
    // 0x2ea66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236830u, 0x2EA668u, 0x2EA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA670u;
label_2ea670:
    // 0x2ea670: 0xc08d208  jal         func_234820
    ctx->pc = 0x2EA670u;
    SET_GPR_U32(ctx, 31, 0x2EA678u);
    ctx->pc = 0x2EA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA670u;
    // 0x2ea674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234820u, 0x2EA670u, 0x2EA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA678u;
label_2ea678:
    // 0x2ea678: 0xc098a8c  jal         func_262A30
    ctx->pc = 0x2EA678u;
    SET_GPR_U32(ctx, 31, 0x2EA680u);
    ctx->pc = 0x2EA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA678u;
    // 0x2ea67c: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A30u, 0x2EA678u, 0x2EA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA680u;
label_2ea680:
    // 0x2ea680: 0xc098a8c  jal         func_262A30
    ctx->pc = 0x2EA680u;
    SET_GPR_U32(ctx, 31, 0x2EA688u);
    ctx->pc = 0x2EA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA680u;
    // 0x2ea684: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A30u, 0x2EA680u, 0x2EA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA688u;
label_2ea688:
    // 0x2ea688: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2EA688u;
    SET_GPR_U32(ctx, 31, 0x2EA690u);
    ctx->pc = 0x2EA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA688u;
    // 0x2ea68c: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2EA688u, 0x2EA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA690u;
label_2ea690:
    // 0x2ea690: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2EA690u;
    SET_GPR_U32(ctx, 31, 0x2EA698u);
    ctx->pc = 0x2EA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA690u;
    // 0x2ea694: 0x8e04263c  lw          $a0, 0x263C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2EA690u, 0x2EA698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA698u;
label_2ea698:
    // 0x2ea698: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2EA698u;
    SET_GPR_U32(ctx, 31, 0x2EA6A0u);
    ctx->pc = 0x2EA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA698u;
    // 0x2ea69c: 0x8e042640  lw          $a0, 0x2640($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2EA698u, 0x2EA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6A0u;
label_2ea6a0:
    // 0x2ea6a0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2EA6A0u;
    SET_GPR_U32(ctx, 31, 0x2EA6A8u);
    ctx->pc = 0x2EA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6A0u;
    // 0x2ea6a4: 0x8e042644  lw          $a0, 0x2644($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2EA6A0u, 0x2EA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6A8u;
label_2ea6a8:
    // 0x2ea6a8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2EA6A8u;
    SET_GPR_U32(ctx, 31, 0x2EA6B0u);
    ctx->pc = 0x2EA6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6A8u;
    // 0x2ea6ac: 0x8e042e8c  lw          $a0, 0x2E8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2EA6A8u, 0x2EA6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6B0u;
label_2ea6b0:
    // 0x2ea6b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ea6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea6b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6C0u;
        // 0x2ea6c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA6C8u;
}
