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

// Function: sub_00216A38
// Address: 0x216a38 - 0x216ac8
void sub_00216A38_0x216a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A38_0x216a38");
#endif

    switch (ctx->pc) {
        case 0x216a70u: goto label_216a70;
        case 0x216aa8u: goto label_216aa8;
        default: break;
    }

    ctx->pc = 0x216a38u;

label_216a38:
    // 0x216a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216a3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216a44: 0x24840d98  addiu       $a0, $a0, 0xD98
    ctx->pc = 0x216a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3480));
    // 0x216a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a4c: 0x8043e52  j           func_10F948
    ctx->pc = 0x216A4Cu;
    ctx->pc = 0x216A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A4Cu;
    // 0x216a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216A54u;
    // 0x216a54: 0x0  nop
    ctx->pc = 0x216a54u;
    // NOP
    // 0x216a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216a5c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216a60: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216a68: 0xc085a8e  jal         func_216A38
    ctx->pc = 0x216A68u;
    SET_GPR_U32(ctx, 31, 0x216A70u);
    ctx->pc = 0x216A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A68u;
    // 0x216a6c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216A38u;
    goto label_216a38;
    ctx->pc = 0x216A70u;
label_216a70:
    // 0x216a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a78: 0x3e00008  jr          $ra
    ctx->pc = 0x216A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A78u;
        // 0x216a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A80u;
    // 0x216a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216a84: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216a84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216a94: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216a98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a9c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216aa0: 0xc085a8e  jal         func_216A38
    ctx->pc = 0x216AA0u;
    SET_GPR_U32(ctx, 31, 0x216AA8u);
    ctx->pc = 0x216AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AA0u;
    // 0x216aa4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216A38u;
    goto label_216a38;
    ctx->pc = 0x216AA8u;
label_216aa8:
    // 0x216aa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216ab0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x216ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216abc: 0x3e00008  jr          $ra
    ctx->pc = 0x216ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216ABCu;
        // 0x216ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216AC4u;
    // 0x216ac4: 0x0  nop
    ctx->pc = 0x216ac4u;
    // NOP
    if (ctx->pc == 0x216ac4u) { ctx->pc = 0x216ac8u; }
}
