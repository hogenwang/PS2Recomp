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

// Function: sub_002166A8
// Address: 0x2166a8 - 0x216738
void sub_002166A8_0x2166a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002166A8_0x2166a8");
#endif

    switch (ctx->pc) {
        case 0x2166e0u: goto label_2166e0;
        case 0x216718u: goto label_216718;
        default: break;
    }

    ctx->pc = 0x2166a8u;

label_2166a8:
    // 0x2166a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2166a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2166ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2166acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2166b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2166b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2166b4: 0x24840d28  addiu       $a0, $a0, 0xD28
    ctx->pc = 0x2166b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3368));
    // 0x2166b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2166b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2166bc: 0x8043e52  j           func_10F948
    ctx->pc = 0x2166BCu;
    ctx->pc = 0x2166C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166BCu;
    // 0x2166c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2166C4u;
    // 0x2166c4: 0x0  nop
    ctx->pc = 0x2166c4u;
    // NOP
    // 0x2166c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2166cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2166ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2166d0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2166d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2166d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2166d8: 0xc0859aa  jal         func_2166A8
    ctx->pc = 0x2166D8u;
    SET_GPR_U32(ctx, 31, 0x2166E0u);
    ctx->pc = 0x2166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166D8u;
    // 0x2166dc: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166A8u;
    goto label_2166a8;
    ctx->pc = 0x2166E0u;
label_2166e0:
    // 0x2166e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2166e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2166e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2166e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2166E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166E8u;
        // 0x2166ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166F0u;
    // 0x2166f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2166f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2166f4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2166f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2166f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2166f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2166fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2166fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216704: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x216704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21670c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216710: 0xc0859aa  jal         func_2166A8
    ctx->pc = 0x216710u;
    SET_GPR_U32(ctx, 31, 0x216718u);
    ctx->pc = 0x216714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216710u;
    // 0x216714: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166A8u;
    goto label_2166a8;
    ctx->pc = 0x216718u;
label_216718:
    // 0x216718: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21671c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216720: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x216724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21672c: 0x3e00008  jr          $ra
    ctx->pc = 0x21672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21672Cu;
        // 0x216730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216734u;
    // 0x216734: 0x0  nop
    ctx->pc = 0x216734u;
    // NOP
}
