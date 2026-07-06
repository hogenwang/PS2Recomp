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

// Function: sub_0021A068
// Address: 0x21a068 - 0x21a0f8
void sub_0021A068_0x21a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A068_0x21a068");
#endif

    switch (ctx->pc) {
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0d8u: goto label_21a0d8;
        default: break;
    }

    ctx->pc = 0x21a068u;

label_21a068:
    // 0x21a068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a06c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a074: 0x24841390  addiu       $a0, $a0, 0x1390
    ctx->pc = 0x21a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    // 0x21a078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a07c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A07Cu;
    ctx->pc = 0x21A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A07Cu;
    // 0x21a080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21A084u;
    // 0x21a084: 0x0  nop
    ctx->pc = 0x21a084u;
    // NOP
    // 0x21a088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a08c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a090: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a098: 0xc08681a  jal         func_21A068
    ctx->pc = 0x21A098u;
    SET_GPR_U32(ctx, 31, 0x21A0A0u);
    ctx->pc = 0x21A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A098u;
    // 0x21a09c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A068u;
    goto label_21a068;
    ctx->pc = 0x21A0A0u;
label_21a0a0:
    // 0x21a0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a0a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0A8u;
        // 0x21a0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0B0u;
    // 0x21a0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a0b4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a0bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a0c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a0c4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21a0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a0c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a0d0: 0xc08681a  jal         func_21A068
    ctx->pc = 0x21A0D0u;
    SET_GPR_U32(ctx, 31, 0x21A0D8u);
    ctx->pc = 0x21A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0D0u;
    // 0x21a0d4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A068u;
    goto label_21a068;
    ctx->pc = 0x21A0D8u;
label_21a0d8:
    // 0x21a0d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a0e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21a0e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0ECu;
        // 0x21a0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0F4u;
    // 0x21a0f4: 0x0  nop
    ctx->pc = 0x21a0f4u;
    // NOP
}
