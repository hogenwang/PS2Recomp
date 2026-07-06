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

// Function: sub_001E8DF8
// Address: 0x1e8df8 - 0x1e8ea0
void sub_001E8DF8_0x1e8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8DF8_0x1e8df8");
#endif

    switch (ctx->pc) {
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e88u: goto label_1e8e88;
        default: break;
    }

    ctx->pc = 0x1e8df8u;

    // 0x1e8df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8dfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e8dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e8e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e8e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e8e08: 0x26022054  addiu       $v0, $s0, 0x2054
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8276));
    // 0x1e8e0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8e10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e14: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1e8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e8e18: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1E8E18u;
    SET_GPR_U32(ctx, 31, 0x1E8E20u);
    ctx->pc = 0x1E8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E18u;
    // 0x1e8e1c: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1E8E18u, 0x1E8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E20u;
label_1e8e20:
    // 0x1e8e20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e24: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e8e28: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1e8e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e8e2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E8E2Cu;
    {
        const bool branch_taken_0x1e8e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E2Cu;
        // 0x1e8e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e2c) {
            ctx->pc = 0x1E8E8Cu;
            goto label_1e8e8c;
        }
    }
    ctx->pc = 0x1E8E34u;
    // 0x1e8e34: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1E8E34u;
    SET_GPR_U32(ctx, 31, 0x1E8E3Cu);
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1E8E34u, 0x1E8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E3Cu;
label_1e8e3c:
    // 0x1e8e3c: 0xde0409b8  ld          $a0, 0x9B8($s0)
    ctx->pc = 0x1e8e3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2488)));
    // 0x1e8e40: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1E8E40u;
    SET_GPR_U32(ctx, 31, 0x1E8E48u);
    ctx->pc = 0x1E8E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E40u;
    // 0x1e8e44: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1E8E40u, 0x1E8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E48u;
label_1e8e48:
    // 0x1e8e48: 0xde0409c0  ld          $a0, 0x9C0($s0)
    ctx->pc = 0x1e8e48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2496)));
    // 0x1e8e4c: 0xfe0209b8  sd          $v0, 0x9B8($s0)
    ctx->pc = 0x1e8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2488), GPR_U64(ctx, 2));
    // 0x1e8e50: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1E8E50u;
    SET_GPR_U32(ctx, 31, 0x1E8E58u);
    ctx->pc = 0x1E8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E50u;
    // 0x1e8e54: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1E8E50u, 0x1E8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E58u;
label_1e8e58:
    // 0x1e8e58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8e5c: 0xfe0209c0  sd          $v0, 0x9C0($s0)
    ctx->pc = 0x1e8e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2496), GPR_U64(ctx, 2));
    // 0x1e8e60: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e8e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e8e64: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1E8E64u;
    SET_GPR_U32(ctx, 31, 0x1E8E6Cu);
    ctx->pc = 0x1E8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E64u;
    // 0x1e8e68: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1E8E64u, 0x1E8E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E6Cu;
label_1e8e6c:
    // 0x1e8e6c: 0xde0409d0  ld          $a0, 0x9D0($s0)
    ctx->pc = 0x1e8e6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1e8e70: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1E8E70u;
    SET_GPR_U32(ctx, 31, 0x1E8E78u);
    ctx->pc = 0x1E8E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E70u;
    // 0x1e8e74: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1E8E70u, 0x1E8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E78u;
label_1e8e78:
    // 0x1e8e78: 0xde0409d8  ld          $a0, 0x9D8($s0)
    ctx->pc = 0x1e8e78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x1e8e7c: 0xfe0209d0  sd          $v0, 0x9D0($s0)
    ctx->pc = 0x1e8e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2512), GPR_U64(ctx, 2));
    // 0x1e8e80: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1E8E80u;
    SET_GPR_U32(ctx, 31, 0x1E8E88u);
    ctx->pc = 0x1E8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E80u;
    // 0x1e8e84: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1E8E80u, 0x1E8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E88u;
label_1e8e88:
    // 0x1e8e88: 0xfe0209d8  sd          $v0, 0x9D8($s0)
    ctx->pc = 0x1e8e88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2520), GPR_U64(ctx, 2));
label_1e8e8c:
    // 0x1e8e8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e8e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8e94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E98u;
        // 0x1e8e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8EA0u;
}
