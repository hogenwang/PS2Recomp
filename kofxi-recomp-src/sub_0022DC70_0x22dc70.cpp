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

// Function: sub_0022DC70
// Address: 0x22dc70 - 0x22dcc8
void sub_0022DC70_0x22dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DC70_0x22dc70");
#endif

    switch (ctx->pc) {
        case 0x22dc90u: goto label_22dc90;
        case 0x22dcb0u: goto label_22dcb0;
        default: break;
    }

    ctx->pc = 0x22dc70u;

    // 0x22dc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22dc74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22dc78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22dc7c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x22dc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22dc88: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DC88u;
    SET_GPR_U32(ctx, 31, 0x22DC90u);
    ctx->pc = 0x22DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC88u;
    // 0x22dc8c: 0x8e24fa00  lw          $a0, -0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x22DC88u, 0x22DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC90u;
label_22dc90:
    // 0x22dc90: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x22dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22dc94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x22dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22dc98: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22dc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22dc9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DC9Cu;
    {
        const bool branch_taken_0x22dc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC9Cu;
        // 0x22dca0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc9c) {
            ctx->pc = 0x22DCB0u;
            goto label_22dcb0;
        }
    }
    ctx->pc = 0x22DCA4u;
    // 0x22dca4: 0x86040044  lh          $a0, 0x44($s0)
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22dca8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x22DCA8u;
    SET_GPR_U32(ctx, 31, 0x22DCB0u);
    ctx->pc = 0x22DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCA8u;
    // 0x22dcac: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x22DCA8u, 0x22DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCB0u;
label_22dcb0:
    // 0x22dcb0: 0x8e24fa00  lw          $a0, -0x600($s1)
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
    // 0x22dcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22dcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dcb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22dcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dcbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dcc0: 0x8043320  j           func_10CC80
    ctx->pc = 0x22DCC0u;
    ctx->pc = 0x22DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCC0u;
    // 0x22dcc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x22DCC8u;
}
