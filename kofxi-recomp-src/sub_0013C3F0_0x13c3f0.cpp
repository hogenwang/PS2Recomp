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

// Function: sub_0013C3F0
// Address: 0x13c3f0 - 0x13c470
void sub_0013C3F0_0x13c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C3F0_0x13c3f0");
#endif

    switch (ctx->pc) {
        case 0x13c408u: goto label_13c408;
        case 0x13c428u: goto label_13c428;
        case 0x13c448u: goto label_13c448;
        case 0x13c458u: goto label_13c458;
        default: break;
    }

    ctx->pc = 0x13c3f0u;

    // 0x13c3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c400: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C400u;
    SET_GPR_U32(ctx, 31, 0x13C408u);
    ctx->pc = 0x13C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C400u;
    // 0x13c404: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13C400u, 0x13C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C408u;
label_13c408:
    // 0x13c408: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x13C408u;
    {
        const bool branch_taken_0x13c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c408) {
            ctx->pc = 0x13C40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C408u;
            // 0x13c40c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C45Cu;
            goto label_13c45c;
        }
    }
    ctx->pc = 0x13C410u;
    // 0x13c410: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13c414: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13c418: 0xa0605cb8  sb          $zero, 0x5CB8($v1)
    ctx->pc = 0x13c418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23736), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c420: 0xc04f688  jal         func_13DA20
    ctx->pc = 0x13C420u;
    SET_GPR_U32(ctx, 31, 0x13C428u);
    ctx->pc = 0x13C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C420u;
    // 0x13c424: 0xac405cb0  sw          $zero, 0x5CB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 23728), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DA20u, 0x13C420u, 0x13C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C428u;
label_13c428:
    // 0x13c428: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13c428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13c42c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13c430: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13c430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x13c434: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C434u;
    {
        const bool branch_taken_0x13c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c434) {
            ctx->pc = 0x13C438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C434u;
            // 0x13c438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C450u;
            goto label_13c450;
        }
    }
    ctx->pc = 0x13C43Cu;
    // 0x13c43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c440: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13C440u;
    SET_GPR_U32(ctx, 31, 0x13C448u);
    ctx->pc = 0x13C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C440u;
    // 0x13c444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13C440u, 0x13C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C448u;
label_13c448:
    // 0x13c448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C448u;
    {
        const bool branch_taken_0x13c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c448) {
            ctx->pc = 0x13C458u;
            goto label_13c458;
        }
    }
    ctx->pc = 0x13C450u;
label_13c450:
    // 0x13c450: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13C450u;
    SET_GPR_U32(ctx, 31, 0x13C458u);
    ctx->pc = 0x13C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C450u;
    // 0x13c454: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13C450u, 0x13C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C458u;
label_13c458:
    // 0x13c458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c45c:
    // 0x13c45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c460: 0x3e00008  jr          $ra
    ctx->pc = 0x13C460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C460u;
        // 0x13c464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C468u;
    // 0x13c468: 0x0  nop
    ctx->pc = 0x13c468u;
    // NOP
    // 0x13c46c: 0x0  nop
    ctx->pc = 0x13c46cu;
    // NOP
    if (ctx->pc == 0x13c46cu) { ctx->pc = 0x13c470u; }
}
