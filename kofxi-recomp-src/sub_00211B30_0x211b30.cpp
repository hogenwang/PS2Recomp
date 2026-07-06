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

// Function: sub_00211B30
// Address: 0x211b30 - 0x211bc0
void sub_00211B30_0x211b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211B30_0x211b30");
#endif

    switch (ctx->pc) {
        case 0x211b68u: goto label_211b68;
        case 0x211ba0u: goto label_211ba0;
        default: break;
    }

    ctx->pc = 0x211b30u;

label_211b30:
    // 0x211b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211b34: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211b3c: 0x24840270  addiu       $a0, $a0, 0x270
    ctx->pc = 0x211b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    // 0x211b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211b44: 0x8043e52  j           func_10F948
    ctx->pc = 0x211B44u;
    ctx->pc = 0x211B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B44u;
    // 0x211b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x211B4Cu;
    // 0x211b4c: 0x0  nop
    ctx->pc = 0x211b4cu;
    // NOP
    // 0x211b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211b54: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211b58: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211b58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211b60: 0xc0846cc  jal         func_211B30
    ctx->pc = 0x211B60u;
    SET_GPR_U32(ctx, 31, 0x211B68u);
    ctx->pc = 0x211B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B60u;
    // 0x211b64: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211B30u;
    goto label_211b30;
    ctx->pc = 0x211B68u;
label_211b68:
    // 0x211b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b70: 0x3e00008  jr          $ra
    ctx->pc = 0x211B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B70u;
        // 0x211b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211B78u;
    // 0x211b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211b7c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211b8c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211b90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211b98: 0xc0846cc  jal         func_211B30
    ctx->pc = 0x211B98u;
    SET_GPR_U32(ctx, 31, 0x211BA0u);
    ctx->pc = 0x211B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B98u;
    // 0x211b9c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211B30u;
    goto label_211b30;
    ctx->pc = 0x211BA0u;
label_211ba0:
    // 0x211ba0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x211ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ba8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x211BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BB4u;
        // 0x211bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211BBCu;
    // 0x211bbc: 0x0  nop
    ctx->pc = 0x211bbcu;
    // NOP
    if (ctx->pc == 0x211bbcu) { ctx->pc = 0x211bc0u; }
}
