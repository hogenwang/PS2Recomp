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

// Function: sub_00163150
// Address: 0x163150 - 0x1631a0
void sub_00163150_0x163150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163150_0x163150");
#endif

    switch (ctx->pc) {
        case 0x16318cu: goto label_16318c;
        default: break;
    }

    ctx->pc = 0x163150u;

    // 0x163150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163154: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x163154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x163158: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16315c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x163160: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x163164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163168: 0x24841df0  addiu       $a0, $a0, 0x1DF0
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7664));
    // 0x16316c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163170: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163174: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163178: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x163178u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16317c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16317Cu;
    {
        const bool branch_taken_0x16317c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16317c) {
            ctx->pc = 0x163180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16317Cu;
            // 0x163180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163190u;
            goto label_163190;
        }
    }
    ctx->pc = 0x163184u;
    // 0x163184: 0xc063a98  jal         func_18EA60
    ctx->pc = 0x163184u;
    SET_GPR_U32(ctx, 31, 0x16318Cu);
    ctx->pc = 0x18EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA60u, 0x163184u, 0x16318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16318Cu;
label_16318c:
    // 0x16318c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163190:
    // 0x163190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163194: 0x3e00008  jr          $ra
    ctx->pc = 0x163194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163194u;
        // 0x163198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16319Cu;
    // 0x16319c: 0x0  nop
    ctx->pc = 0x16319cu;
    // NOP
}
