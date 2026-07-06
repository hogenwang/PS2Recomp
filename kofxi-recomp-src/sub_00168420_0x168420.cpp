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

// Function: sub_00168420
// Address: 0x168420 - 0x168470
void sub_00168420_0x168420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168420_0x168420");
#endif

    switch (ctx->pc) {
        case 0x168438u: goto label_168438;
        case 0x168450u: goto label_168450;
        default: break;
    }

    ctx->pc = 0x168420u;

    // 0x168420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x168424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16842c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168430: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x168430u;
    SET_GPR_U32(ctx, 31, 0x168438u);
    ctx->pc = 0x168434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168430u;
    // 0x168434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x168430u, 0x168438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168438u;
label_168438:
    // 0x168438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168440: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x168440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x168444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168448: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x168448u;
    SET_GPR_U32(ctx, 31, 0x168450u);
    ctx->pc = 0x16844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168448u;
    // 0x16844c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x168448u, 0x168450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168450u;
label_168450:
    // 0x168450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x168450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168458: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x168458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x16845c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16845cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168460: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168464: 0x3e00008  jr          $ra
    ctx->pc = 0x168464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168464u;
        // 0x168468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16846Cu;
    // 0x16846c: 0x0  nop
    ctx->pc = 0x16846cu;
    // NOP
    if (ctx->pc == 0x16846cu) { ctx->pc = 0x168470u; }
}
