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

// Function: sub_0014B030
// Address: 0x14b030 - 0x14b090
void sub_0014B030_0x14b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B030_0x14b030");
#endif

    switch (ctx->pc) {
        case 0x14b05cu: goto label_14b05c;
        case 0x14b080u: goto label_14b080;
        default: break;
    }

    ctx->pc = 0x14b030u;

    // 0x14b030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b034: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b03c: 0x9043db53  lbu         $v1, -0x24AD($v0)
    ctx->pc = 0x14b03cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957907)));
    // 0x14b040: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b044: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14b044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14b048: 0x2442dc9d  addiu       $v0, $v0, -0x2363
    ctx->pc = 0x14b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958237));
    // 0x14b04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b050: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x14b050u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b054: 0xc052c24  jal         func_14B090
    ctx->pc = 0x14B054u;
    SET_GPR_U32(ctx, 31, 0x14B05Cu);
    ctx->pc = 0x14B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B054u;
    // 0x14b058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B090u, 0x14B054u, 0x14B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B05Cu;
label_14b05c:
    // 0x14b05c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14b060: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14b060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x14b064: 0x9042dd9b  lbu         $v0, -0x2265($v0)
    ctx->pc = 0x14b064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958491)));
    // 0x14b068: 0x2463dee5  addiu       $v1, $v1, -0x211B
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958821));
    // 0x14b06c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14b070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b074: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x14b074u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b078: 0xc052c24  jal         func_14B090
    ctx->pc = 0x14B078u;
    SET_GPR_U32(ctx, 31, 0x14B080u);
    ctx->pc = 0x14B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B078u;
    // 0x14b07c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B090u, 0x14B078u, 0x14B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B080u;
label_14b080:
    // 0x14b080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b084: 0x3e00008  jr          $ra
    ctx->pc = 0x14B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B084u;
        // 0x14b088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B08Cu;
    // 0x14b08c: 0x0  nop
    ctx->pc = 0x14b08cu;
    // NOP
    if (ctx->pc == 0x14b08cu) { ctx->pc = 0x14b090u; }
}
