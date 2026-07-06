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

// Function: sub_0021BC40
// Address: 0x21bc40 - 0x21bcd0
void sub_0021BC40_0x21bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BC40_0x21bc40");
#endif

    switch (ctx->pc) {
        case 0x21bc78u: goto label_21bc78;
        case 0x21bcb0u: goto label_21bcb0;
        default: break;
    }

    ctx->pc = 0x21bc40u;

label_21bc40:
    // 0x21bc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bc44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bc48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21bc4c: 0x24841630  addiu       $a0, $a0, 0x1630
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5680));
    // 0x21bc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bc54: 0x8043e52  j           func_10F948
    ctx->pc = 0x21BC54u;
    ctx->pc = 0x21BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC54u;
    // 0x21bc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21BC5Cu;
    // 0x21bc5c: 0x0  nop
    ctx->pc = 0x21bc5cu;
    // NOP
    // 0x21bc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bc64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21bc68: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21bc70: 0xc086f10  jal         func_21BC40
    ctx->pc = 0x21BC70u;
    SET_GPR_U32(ctx, 31, 0x21BC78u);
    ctx->pc = 0x21BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC70u;
    // 0x21bc74: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BC40u;
    goto label_21bc40;
    ctx->pc = 0x21BC78u;
label_21bc78:
    // 0x21bc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bc7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21bc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x21BC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC80u;
        // 0x21bc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BC88u;
    // 0x21bc88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bc8c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bc90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bc94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bc98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bc9c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21bc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21bca0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21bca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bca4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21bca8: 0xc086f10  jal         func_21BC40
    ctx->pc = 0x21BCA8u;
    SET_GPR_U32(ctx, 31, 0x21BCB0u);
    ctx->pc = 0x21BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCA8u;
    // 0x21bcac: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BC40u;
    goto label_21bc40;
    ctx->pc = 0x21BCB0u;
label_21bcb0:
    // 0x21bcb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21bcb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bcb8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21bcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCC4u;
        // 0x21bcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BCCCu;
    // 0x21bccc: 0x0  nop
    ctx->pc = 0x21bcccu;
    // NOP
}
