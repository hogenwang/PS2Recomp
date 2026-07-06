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

// Function: sub_001F8C18
// Address: 0x1f8c18 - 0x1f8c98
void sub_001F8C18_0x1f8c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8C18_0x1f8c18");
#endif

    switch (ctx->pc) {
        case 0x1f8c2cu: goto label_1f8c2c;
        case 0x1f8c58u: goto label_1f8c58;
        case 0x1f8c6cu: goto label_1f8c6c;
        case 0x1f8c80u: goto label_1f8c80;
        default: break;
    }

    ctx->pc = 0x1f8c18u;

    // 0x1f8c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8c20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f8c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f8c24: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F8C24u;
    SET_GPR_U32(ctx, 31, 0x1F8C2Cu);
    ctx->pc = 0x1F8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C24u;
    // 0x1f8c28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F8C24u, 0x1F8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C2Cu;
label_1f8c2c:
    // 0x1f8c2c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f8c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8C34u;
    {
        const bool branch_taken_0x1f8c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C34u;
        // 0x1f8c38: 0x34a50132  ori         $a1, $a1, 0x132 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)306);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c34) {
            ctx->pc = 0x1F8C50u;
            goto label_1f8c50;
        }
    }
    ctx->pc = 0x1F8C3Cu;
    // 0x1f8c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8c48: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F8C48u;
    ctx->pc = 0x1F8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C48u;
    // 0x1f8c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8C50u;
label_1f8c50:
    // 0x1f8c50: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F8C50u;
    SET_GPR_U32(ctx, 31, 0x1F8C58u);
    ctx->pc = 0x1F8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C50u;
    // 0x1f8c54: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F8C50u, 0x1F8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C58u;
label_1f8c58:
    // 0x1f8c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8c5c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8C5Cu;
    {
        const bool branch_taken_0x1f8c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C5Cu;
        // 0x1f8c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c5c) {
            ctx->pc = 0x1F8C78u;
            goto label_1f8c78;
        }
    }
    ctx->pc = 0x1F8C64u;
    // 0x1f8c64: 0xc07dcbe  jal         func_1F72F8
    ctx->pc = 0x1F8C64u;
    SET_GPR_U32(ctx, 31, 0x1F8C6Cu);
    ctx->pc = 0x1F72F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F72F8u, 0x1F8C64u, 0x1F8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C6Cu;
label_1f8c6c:
    // 0x1f8c6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8C6Cu;
    {
        const bool branch_taken_0x1f8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C6Cu;
        // 0x1f8c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c6c) {
            ctx->pc = 0x1F8C84u;
            goto label_1f8c84;
        }
    }
    ctx->pc = 0x1F8C74u;
    // 0x1f8c74: 0x0  nop
    ctx->pc = 0x1f8c74u;
    // NOP
label_1f8c78:
    // 0x1f8c78: 0xc07e326  jal         func_1F8C98
    ctx->pc = 0x1F8C78u;
    SET_GPR_U32(ctx, 31, 0x1F8C80u);
    ctx->pc = 0x1F8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8C98u, 0x1F8C78u, 0x1F8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C80u;
label_1f8c80:
    // 0x1f8c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8c84:
    // 0x1f8c84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8c88: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1f8c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1f8c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C90u;
        // 0x1f8c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8C98u;
}
