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

// Function: sub_001E9C18
// Address: 0x1e9c18 - 0x1e9cf0
void sub_001E9C18_0x1e9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9C18_0x1e9c18");
#endif

    switch (ctx->pc) {
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        case 0x1e9ca0u: goto label_1e9ca0;
        case 0x1e9ca4u: goto label_1e9ca4;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cacu: goto label_1e9cac;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cbcu: goto label_1e9cbc;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        default: break;
    }

    ctx->pc = 0x1e9c18u;

label_1e9c18:
    // 0x1e9c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9c1c:
    // 0x1e9c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e9c20:
    // 0x1e9c20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c24:
    // 0x1e9c24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9c28:
    // 0x1e9c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9c2c:
    // 0x1e9c2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9c30:
    // 0x1e9c30: 0xc07ec02  jal         func_1FB008
label_1e9c34:
    if (ctx->pc == 0x1E9C34u) {
        ctx->pc = 0x1E9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C30u;
        // 0x1e9c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C38u;
        goto label_1e9c38;
    }
    ctx->pc = 0x1E9C30u;
    SET_GPR_U32(ctx, 31, 0x1E9C38u);
    ctx->pc = 0x1E9C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C30u;
    // 0x1e9c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9C30u, 0x1E9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C38u;
label_1e9c38:
    // 0x1e9c38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1e9c3c:
    if (ctx->pc == 0x1E9C3Cu) {
        ctx->pc = 0x1E9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C38u;
        // 0x1e9c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C40u;
        goto label_1e9c40;
    }
    ctx->pc = 0x1E9C38u;
    {
        const bool branch_taken_0x1e9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c38) {
            ctx->pc = 0x1E9C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9C38u;
            // 0x1e9c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9C5Cu;
            goto label_1e9c5c;
        }
    }
    ctx->pc = 0x1E9C40u;
label_1e9c40:
    // 0x1e9c40: 0x8e02216c  lw          $v0, 0x216C($s0)
    ctx->pc = 0x1e9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8556)));
label_1e9c44:
    // 0x1e9c44: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1e9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e9c48:
    // 0x1e9c48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e9c4c:
    if (ctx->pc == 0x1E9C4Cu) {
        ctx->pc = 0x1E9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C48u;
        // 0x1e9c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C50u;
        goto label_1e9c50;
    }
    ctx->pc = 0x1E9C48u;
    {
        const bool branch_taken_0x1e9c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C48u;
        // 0x1e9c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c48) {
            ctx->pc = 0x1E9C58u;
            goto label_1e9c58;
        }
    }
    ctx->pc = 0x1E9C50u;
label_1e9c50:
    // 0x1e9c50: 0x40f809  jalr        $v0
label_1e9c54:
    if (ctx->pc == 0x1E9C54u) {
        ctx->pc = 0x1E9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C50u;
        // 0x1e9c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C58u;
        goto label_1e9c58;
    }
    ctx->pc = 0x1E9C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9C58u);
        ctx->pc = 0x1E9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C50u;
        // 0x1e9c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C50u, 0x1E9C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9C58u;
label_1e9c58:
    // 0x1e9c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c5c:
    // 0x1e9c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9c60:
    // 0x1e9c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9c64:
    // 0x1e9c64: 0x3e00008  jr          $ra
label_1e9c68:
    if (ctx->pc == 0x1E9C68u) {
        ctx->pc = 0x1E9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C64u;
        // 0x1e9c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C6Cu;
        goto label_1e9c6c;
    }
    ctx->pc = 0x1E9C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C64u;
        // 0x1e9c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C6Cu;
label_1e9c6c:
    // 0x1e9c6c: 0x0  nop
    ctx->pc = 0x1e9c6cu;
    // NOP
label_1e9c70:
    // 0x1e9c70: 0x3e00008  jr          $ra
label_1e9c74:
    if (ctx->pc == 0x1E9C74u) {
        ctx->pc = 0x1E9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C70u;
        // 0x1e9c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C78u;
        goto label_1e9c78;
    }
    ctx->pc = 0x1E9C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C70u;
        // 0x1e9c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C78u;
label_1e9c78:
    // 0x1e9c78: 0x3e00008  jr          $ra
label_1e9c7c:
    if (ctx->pc == 0x1E9C7Cu) {
        ctx->pc = 0x1E9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C78u;
        // 0x1e9c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C80u;
        goto label_1e9c80;
    }
    ctx->pc = 0x1E9C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C78u;
        // 0x1e9c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C80u;
label_1e9c80:
    // 0x1e9c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9c84:
    // 0x1e9c84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9c88:
    // 0x1e9c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9c8c:
    // 0x1e9c8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e9c90:
    // 0x1e9c90: 0xc07ec02  jal         func_1FB008
label_1e9c94:
    if (ctx->pc == 0x1E9C94u) {
        ctx->pc = 0x1E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C90u;
        // 0x1e9c94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C98u;
        goto label_1e9c98;
    }
    ctx->pc = 0x1E9C90u;
    SET_GPR_U32(ctx, 31, 0x1E9C98u);
    ctx->pc = 0x1E9C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C90u;
    // 0x1e9c94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9C90u, 0x1E9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C98u;
label_1e9c98:
    // 0x1e9c98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9c9c:
    if (ctx->pc == 0x1E9C9Cu) {
        ctx->pc = 0x1E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C98u;
        // 0x1e9c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CA0u;
        goto label_1e9ca0;
    }
    ctx->pc = 0x1E9C98u;
    {
        const bool branch_taken_0x1e9c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C98u;
        // 0x1e9c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c98) {
            ctx->pc = 0x1E9CB0u;
            goto label_1e9cb0;
        }
    }
    ctx->pc = 0x1E9CA0u;
label_1e9ca0:
    // 0x1e9ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9ca4:
    // 0x1e9ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9ca8:
    // 0x1e9ca8: 0x807a730  j           func_1E9CC0
label_1e9cac:
    if (ctx->pc == 0x1E9CACu) {
        ctx->pc = 0x1E9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CA8u;
        // 0x1e9cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CB0u;
        goto label_1e9cb0;
    }
    ctx->pc = 0x1E9CA8u;
    ctx->pc = 0x1E9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CA8u;
    // 0x1e9cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9CC0u;
    goto label_1e9cc0;
    ctx->pc = 0x1E9CB0u;
label_1e9cb0:
    // 0x1e9cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9cb4:
    // 0x1e9cb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9cb8:
    // 0x1e9cb8: 0x3e00008  jr          $ra
label_1e9cbc:
    if (ctx->pc == 0x1E9CBCu) {
        ctx->pc = 0x1E9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CB8u;
        // 0x1e9cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CC0u;
        goto label_1e9cc0;
    }
    ctx->pc = 0x1E9CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CB8u;
        // 0x1e9cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9CC0u;
label_1e9cc0:
    // 0x1e9cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9cc4:
    // 0x1e9cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9cc8:
    // 0x1e9cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e9ccc:
    // 0x1e9ccc: 0xc07a73c  jal         func_1E9CF0
label_1e9cd0:
    if (ctx->pc == 0x1E9CD0u) {
        ctx->pc = 0x1E9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CCCu;
        // 0x1e9cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CD4u;
        goto label_1e9cd4;
    }
    ctx->pc = 0x1E9CCCu;
    SET_GPR_U32(ctx, 31, 0x1E9CD4u);
    ctx->pc = 0x1E9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CCCu;
    // 0x1e9cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9CF0u, 0x1E9CCCu, 0x1E9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CD4u;
label_1e9cd4:
    // 0x1e9cd4: 0xc07a758  jal         func_1E9D60
label_1e9cd8:
    if (ctx->pc == 0x1E9CD8u) {
        ctx->pc = 0x1E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD4u;
        // 0x1e9cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CDCu;
        goto label_1e9cdc;
    }
    ctx->pc = 0x1E9CD4u;
    SET_GPR_U32(ctx, 31, 0x1E9CDCu);
    ctx->pc = 0x1E9CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CD4u;
    // 0x1e9cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D60u, 0x1E9CD4u, 0x1E9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CDCu;
label_1e9cdc:
    // 0x1e9cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ce0:
    // 0x1e9ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9ce4:
    // 0x1e9ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9ce8:
    // 0x1e9ce8: 0x3e00008  jr          $ra
label_1e9cec:
    if (ctx->pc == 0x1E9CECu) {
        ctx->pc = 0x1E9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE8u;
        // 0x1e9cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CF0u;
        goto label_fallthrough_0x1e9ce8;
    }
    ctx->pc = 0x1E9CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE8u;
        // 0x1e9cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9ce8:
    ctx->pc = 0x1E9CF0u;
}
