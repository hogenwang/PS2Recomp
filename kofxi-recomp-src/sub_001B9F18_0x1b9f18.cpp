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

// Function: sub_001B9F18
// Address: 0x1b9f18 - 0x1b9f98
void sub_001B9F18_0x1b9f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F18_0x1b9f18");
#endif

    switch (ctx->pc) {
        case 0x1b9f34u: goto label_1b9f34;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f80u: goto label_1b9f80;
        default: break;
    }

    ctx->pc = 0x1b9f18u;

    // 0x1b9f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9f1c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b9f20: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9F20u;
    {
        const bool branch_taken_0x1b9f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F20u;
        // 0x1b9f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f20) {
            ctx->pc = 0x1B9F40u;
            goto label_1b9f40;
        }
    }
    ctx->pc = 0x1B9F28u;
    // 0x1b9f28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9f2c: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F34u);
    ctx->pc = 0x1B9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F2Cu;
    // 0x1b9f30: 0x24848298  addiu       $a0, $a0, -0x7D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B9F2Cu, 0x1B9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F34u;
label_1b9f34:
    // 0x1b9f34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9F34u;
    {
        const bool branch_taken_0x1b9f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F34u;
        // 0x1b9f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f34) {
            ctx->pc = 0x1B9F48u;
            goto label_1b9f48;
        }
    }
    ctx->pc = 0x1B9F3Cu;
    // 0x1b9f3c: 0x0  nop
    ctx->pc = 0x1b9f3cu;
    // NOP
label_1b9f40:
    // 0x1b9f40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b9f44: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x1b9f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_1b9f48:
    // 0x1b9f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F4Cu;
        // 0x1b9f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9F54u;
    // 0x1b9f54: 0x0  nop
    ctx->pc = 0x1b9f54u;
    // NOP
    // 0x1b9f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9f6c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F74u);
    ctx->pc = 0x1B9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F6Cu;
    // 0x1b9f70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B9F6Cu, 0x1B9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F74u;
label_1b9f74:
    // 0x1b9f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f78: 0xc06e7e6  jal         func_1B9F98
    ctx->pc = 0x1B9F78u;
    SET_GPR_U32(ctx, 31, 0x1B9F80u);
    ctx->pc = 0x1B9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F78u;
    // 0x1b9f7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F98u, 0x1B9F78u, 0x1B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F80u;
label_1b9f80:
    // 0x1b9f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f8c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B9F8Cu;
    ctx->pc = 0x1B9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F8Cu;
    // 0x1b9f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9F94u;
    // 0x1b9f94: 0x0  nop
    ctx->pc = 0x1b9f94u;
    // NOP
    if (ctx->pc == 0x1b9f94u) { ctx->pc = 0x1b9f98u; }
}
