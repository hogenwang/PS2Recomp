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

// Function: sub_0031F390
// Address: 0x31f390 - 0x31f460
void sub_0031F390_0x31f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F390_0x31f390");
#endif

    switch (ctx->pc) {
        case 0x31f3b0u: goto label_31f3b0;
        case 0x31f3c8u: goto label_31f3c8;
        case 0x31f3d0u: goto label_31f3d0;
        case 0x31f3e8u: goto label_31f3e8;
        case 0x31f3f0u: goto label_31f3f0;
        case 0x31f3f8u: goto label_31f3f8;
        case 0x31f400u: goto label_31f400;
        case 0x31f408u: goto label_31f408;
        case 0x31f420u: goto label_31f420;
        case 0x31f428u: goto label_31f428;
        case 0x31f430u: goto label_31f430;
        case 0x31f438u: goto label_31f438;
        case 0x31f450u: goto label_31f450;
        default: break;
    }

    ctx->pc = 0x31f390u;

    // 0x31f390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f394: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x31f394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x31f398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f39c: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x31f39cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x31f3a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F3A0u;
    {
        const bool branch_taken_0x31f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3a0) {
            ctx->pc = 0x31F3B0u;
            goto label_31f3b0;
        }
    }
    ctx->pc = 0x31F3A8u;
    // 0x31f3a8: 0xc0c167c  jal         func_3059F0
    ctx->pc = 0x31F3A8u;
    SET_GPR_U32(ctx, 31, 0x31F3B0u);
    ctx->pc = 0x3059F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059F0u, 0x31F3A8u, 0x31F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3B0u;
label_31f3b0:
    // 0x31f3b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x31f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x31f3b4: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x31f3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x31f3b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F3B8u;
    {
        const bool branch_taken_0x31f3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f3b8) {
            ctx->pc = 0x31F3D0u;
            goto label_31f3d0;
        }
    }
    ctx->pc = 0x31F3C0u;
    // 0x31f3c0: 0xc05c878  jal         func_1721E0
    ctx->pc = 0x31F3C0u;
    SET_GPR_U32(ctx, 31, 0x31F3C8u);
    ctx->pc = 0x1721E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721E0u, 0x31F3C0u, 0x31F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3C8u;
label_31f3c8:
    // 0x31f3c8: 0xc0552ac  jal         func_154AB0
    ctx->pc = 0x31F3C8u;
    SET_GPR_U32(ctx, 31, 0x31F3D0u);
    ctx->pc = 0x154AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AB0u, 0x31F3C8u, 0x31F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3D0u;
label_31f3d0:
    // 0x31f3d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x31f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x31f3d4: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x31f3d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x31f3d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F3D8u;
    {
        const bool branch_taken_0x31f3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f3d8) {
            ctx->pc = 0x31F3E8u;
            goto label_31f3e8;
        }
    }
    ctx->pc = 0x31F3E0u;
    // 0x31f3e0: 0xc05d1d4  jal         func_174750
    ctx->pc = 0x31F3E0u;
    SET_GPR_U32(ctx, 31, 0x31F3E8u);
    ctx->pc = 0x174750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174750u, 0x31F3E0u, 0x31F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3E8u;
label_31f3e8:
    // 0x31f3e8: 0xc0531b8  jal         func_14C6E0
    ctx->pc = 0x31F3E8u;
    SET_GPR_U32(ctx, 31, 0x31F3F0u);
    ctx->pc = 0x14C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6E0u, 0x31F3E8u, 0x31F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3F0u;
label_31f3f0:
    // 0x31f3f0: 0xc0c0dd4  jal         func_303750
    ctx->pc = 0x31F3F0u;
    SET_GPR_U32(ctx, 31, 0x31F3F8u);
    ctx->pc = 0x303750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303750u, 0x31F3F0u, 0x31F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3F8u;
label_31f3f8:
    // 0x31f3f8: 0xc0557f8  jal         func_155FE0
    ctx->pc = 0x31F3F8u;
    SET_GPR_U32(ctx, 31, 0x31F400u);
    ctx->pc = 0x155FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FE0u, 0x31F3F8u, 0x31F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F400u;
label_31f400:
    // 0x31f400: 0xc055774  jal         func_155DD0
    ctx->pc = 0x31F400u;
    SET_GPR_U32(ctx, 31, 0x31F408u);
    ctx->pc = 0x155DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DD0u, 0x31F400u, 0x31F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F408u;
label_31f408:
    // 0x31f408: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x31f408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x31f40c: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x31f40cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x31f410: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F410u;
    {
        const bool branch_taken_0x31f410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f410) {
            ctx->pc = 0x31F438u;
            goto label_31f438;
        }
    }
    ctx->pc = 0x31F418u;
    // 0x31f418: 0xc0c0e0c  jal         func_303830
    ctx->pc = 0x31F418u;
    SET_GPR_U32(ctx, 31, 0x31F420u);
    ctx->pc = 0x303830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303830u, 0x31F418u, 0x31F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F420u;
label_31f420:
    // 0x31f420: 0xc0548b8  jal         func_1522E0
    ctx->pc = 0x31F420u;
    SET_GPR_U32(ctx, 31, 0x31F428u);
    ctx->pc = 0x1522E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522E0u, 0x31F420u, 0x31F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F428u;
label_31f428:
    // 0x31f428: 0xc04bb84  jal         func_12EE10
    ctx->pc = 0x31F428u;
    SET_GPR_U32(ctx, 31, 0x31F430u);
    ctx->pc = 0x12EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE10u, 0x31F428u, 0x31F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F430u;
label_31f430:
    // 0x31f430: 0xc05ce70  jal         func_1739C0
    ctx->pc = 0x31F430u;
    SET_GPR_U32(ctx, 31, 0x31F438u);
    ctx->pc = 0x1739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739C0u, 0x31F430u, 0x31F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F438u;
label_31f438:
    // 0x31f438: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x31f438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x31f43c: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x31f43cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x31f440: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F440u;
    {
        const bool branch_taken_0x31f440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f440) {
            ctx->pc = 0x31F444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F440u;
            // 0x31f444: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F454u;
            goto label_31f454;
        }
    }
    ctx->pc = 0x31F448u;
    // 0x31f448: 0xc05c9ac  jal         func_1726B0
    ctx->pc = 0x31F448u;
    SET_GPR_U32(ctx, 31, 0x31F450u);
    ctx->pc = 0x1726B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726B0u, 0x31F448u, 0x31F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F450u;
label_31f450:
    // 0x31f450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31f454:
    // 0x31f454: 0x3e00008  jr          $ra
    ctx->pc = 0x31F454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F454u;
        // 0x31f458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F45Cu;
    // 0x31f45c: 0x0  nop
    ctx->pc = 0x31f45cu;
    // NOP
}
