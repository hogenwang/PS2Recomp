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

// Function: sub_001B4A30
// Address: 0x1b4a30 - 0x1b4ae0
void sub_001B4A30_0x1b4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4A30_0x1b4a30");
#endif

    ctx->pc = 0x1b4a30u;

    // 0x1b4a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a38: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b4a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a40: 0x80724d6  j           func_1C9358
    ctx->pc = 0x1B4A40u;
    ctx->pc = 0x1B4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A40u;
    // 0x1b4a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9358u, 0x1B4A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4A48u;
    // 0x1b4a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a50: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b4a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a58: 0x80724e8  j           func_1C93A0
    ctx->pc = 0x1B4A58u;
    ctx->pc = 0x1B4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A58u;
    // 0x1b4a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C93A0u, 0x1B4A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4A60u;
    // 0x1b4a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b4a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a70: 0x80724ea  j           func_1C93A8
    ctx->pc = 0x1B4A70u;
    ctx->pc = 0x1B4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A70u;
    // 0x1b4a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C93A8u, 0x1B4A70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4A78u;
    // 0x1b4a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a84: 0x807253a  j           func_1C94E8
    ctx->pc = 0x1B4A84u;
    ctx->pc = 0x1B4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A84u;
    // 0x1b4a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94E8u, 0x1B4A84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4A8Cu;
    // 0x1b4a8c: 0x0  nop
    ctx->pc = 0x1b4a8cu;
    // NOP
    // 0x1b4a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a9c: 0x807255e  j           func_1C9578
    ctx->pc = 0x1B4A9Cu;
    ctx->pc = 0x1B4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A9Cu;
    // 0x1b4aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9578u, 0x1B4A9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4AA4u;
    // 0x1b4aa4: 0x0  nop
    ctx->pc = 0x1b4aa4u;
    // NOP
    // 0x1b4aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ab4: 0x8072580  j           func_1C9600
    ctx->pc = 0x1B4AB4u;
    ctx->pc = 0x1B4AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AB4u;
    // 0x1b4ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9600u, 0x1B4AB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4ABCu;
    // 0x1b4abc: 0x0  nop
    ctx->pc = 0x1b4abcu;
    // NOP
    // 0x1b4ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4ac4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1b4ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1b4ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4acc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1b4accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1b4ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ad4: 0x807258a  j           func_1C9628
    ctx->pc = 0x1B4AD4u;
    ctx->pc = 0x1B4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AD4u;
    // 0x1b4ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9628u, 0x1B4AD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4ADCu;
    // 0x1b4adc: 0x0  nop
    ctx->pc = 0x1b4adcu;
    // NOP
}
