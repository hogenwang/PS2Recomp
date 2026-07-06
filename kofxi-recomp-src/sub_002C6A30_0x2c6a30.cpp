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

// Function: sub_002C6A30
// Address: 0x2c6a30 - 0x2c6a70
void sub_002C6A30_0x2c6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A30_0x2c6a30");
#endif

    switch (ctx->pc) {
        case 0x2c6a30u: goto label_2c6a30;
        case 0x2c6a34u: goto label_2c6a34;
        case 0x2c6a38u: goto label_2c6a38;
        case 0x2c6a3cu: goto label_2c6a3c;
        case 0x2c6a40u: goto label_2c6a40;
        case 0x2c6a44u: goto label_2c6a44;
        case 0x2c6a48u: goto label_2c6a48;
        case 0x2c6a4cu: goto label_2c6a4c;
        case 0x2c6a50u: goto label_2c6a50;
        case 0x2c6a54u: goto label_2c6a54;
        case 0x2c6a58u: goto label_2c6a58;
        case 0x2c6a5cu: goto label_2c6a5c;
        case 0x2c6a60u: goto label_2c6a60;
        case 0x2c6a64u: goto label_2c6a64;
        case 0x2c6a68u: goto label_2c6a68;
        case 0x2c6a6cu: goto label_2c6a6c;
        default: break;
    }

    ctx->pc = 0x2c6a30u;

label_2c6a30:
    // 0x2c6a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c6a34:
    // 0x2c6a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6a38:
    // 0x2c6a38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c6a3c:
    // 0x2c6a3c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c6a40:
    // 0x2c6a40: 0x40f809  jalr        $v0
label_2c6a44:
    if (ctx->pc == 0x2C6A44u) {
        ctx->pc = 0x2C6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A40u;
        // 0x2c6a44: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6A48u;
        goto label_2c6a48;
    }
    ctx->pc = 0x2C6A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6A48u);
        ctx->pc = 0x2C6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A40u;
        // 0x2c6a44: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A40u, 0x2C6A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6A48u;
label_2c6a48:
    // 0x2c6a48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6a4c:
    // 0x2c6a4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c6a50:
    if (ctx->pc == 0x2C6A50u) {
        ctx->pc = 0x2C6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A4Cu;
        // 0x2c6a50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6A54u;
        goto label_2c6a54;
    }
    ctx->pc = 0x2C6A4Cu;
    {
        const bool branch_taken_0x2c6a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A4Cu;
        // 0x2c6a50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a4c) {
            ctx->pc = 0x2C6A60u;
            goto label_2c6a60;
        }
    }
    ctx->pc = 0x2C6A54u;
label_2c6a54:
    // 0x2c6a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6a58:
    // 0x2c6a58: 0x80b21d8  j           func_2C8760
label_2c6a5c:
    if (ctx->pc == 0x2C6A5Cu) {
        ctx->pc = 0x2C6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A58u;
        // 0x2c6a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6A60u;
        goto label_2c6a60;
    }
    ctx->pc = 0x2C6A58u;
    ctx->pc = 0x2C6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A58u;
    // 0x2c6a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6A60u;
label_2c6a60:
    // 0x2c6a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6a64:
    // 0x2c6a64: 0x3e00008  jr          $ra
label_2c6a68:
    if (ctx->pc == 0x2C6A68u) {
        ctx->pc = 0x2C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A64u;
        // 0x2c6a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6A6Cu;
        goto label_2c6a6c;
    }
    ctx->pc = 0x2C6A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A64u;
        // 0x2c6a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6A6Cu;
label_2c6a6c:
    // 0x2c6a6c: 0x0  nop
    ctx->pc = 0x2c6a6cu;
    // NOP
    if (ctx->pc == 0x2c6a6cu) { ctx->pc = 0x2c6a70u; }
}
