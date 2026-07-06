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

// Function: sub_0014CC60
// Address: 0x14cc60 - 0x14ccb0
void sub_0014CC60_0x14cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CC60_0x14cc60");
#endif

    switch (ctx->pc) {
        case 0x14cc78u: goto label_14cc78;
        case 0x14cc88u: goto label_14cc88;
        default: break;
    }

    ctx->pc = 0x14cc60u;

    // 0x14cc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cc64: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cc6c: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc70: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14CC70u;
    SET_GPR_U32(ctx, 31, 0x14CC78u);
    ctx->pc = 0x14CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC70u;
    // 0x14cc74: 0x2405fc19  addiu       $a1, $zero, -0x3E7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14CC70u, 0x14CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC78u;
label_14cc78:
    // 0x14cc78: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cc7c: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cc80: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14CC80u;
    SET_GPR_U32(ctx, 31, 0x14CC88u);
    ctx->pc = 0x14CC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC80u;
    // 0x14cc84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB010u, 0x14CC80u, 0x14CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC88u;
label_14cc88:
    // 0x14cc88: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14cc8c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14cc90: 0xa0605ce8  sb          $zero, 0x5CE8($v1)
    ctx->pc = 0x14cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23784), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc94: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14cc98: 0xa064e058  sb          $a0, -0x1FA8($v1)
    ctx->pc = 0x14cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959192), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cc9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14cca0: 0xa064e068  sb          $a0, -0x1F98($v1)
    ctx->pc = 0x14cca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959208), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x14CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA8u;
        // 0x14ccac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CCB0u;
}
