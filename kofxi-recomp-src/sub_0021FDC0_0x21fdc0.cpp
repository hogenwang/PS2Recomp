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

// Function: sub_0021FDC0
// Address: 0x21fdc0 - 0x21fe48
void sub_0021FDC0_0x21fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FDC0_0x21fdc0");
#endif

    switch (ctx->pc) {
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fe2cu: goto label_21fe2c;
        default: break;
    }

    ctx->pc = 0x21fdc0u;

    // 0x21fdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fdc4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21fdc8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x21fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x21fdcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fdd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21fdd4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x21fdd8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x21fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x21fddc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21fde0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x21fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21fde4: 0x8e29ca14  lw          $t1, -0x35EC($s1)
    ctx->pc = 0x21fde4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953492)));
    // 0x21fde8: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDE8u;
    {
        const bool branch_taken_0x21fde8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fde8) {
            ctx->pc = 0x21FE00u;
            goto label_21fe00;
        }
    }
    ctx->pc = 0x21FDF0u;
    // 0x21fdf0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x21FDF0u;
    SET_GPR_U32(ctx, 31, 0x21FDF8u);
    ctx->pc = 0x21FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDF0u;
    // 0x21fdf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x21FDF0u, 0x21FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDF8u;
label_21fdf8:
    // 0x21fdf8: 0xae22ca14  sw          $v0, -0x35EC($s1)
    ctx->pc = 0x21fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953492), GPR_U32(ctx, 2));
    // 0x21fdfc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x21fdfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fe00:
    // 0x21fe00: 0x521000c  bgez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x21FE00u;
    {
        const bool branch_taken_0x21fe00 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x21FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE00u;
        // 0x21fe04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe00) {
            ctx->pc = 0x21FE34u;
            goto label_21fe34;
        }
    }
    ctx->pc = 0x21FE08u;
    // 0x21fe08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21fe0c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x21fe10: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x21fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x21fe14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe18: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x21fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    // 0x21fe1c: 0x248422a8  addiu       $a0, $a0, 0x22A8
    ctx->pc = 0x21fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8872));
    // 0x21fe20: 0x250822b8  addiu       $t0, $t0, 0x22B8
    ctx->pc = 0x21fe20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8888));
    // 0x21fe24: 0xc089794  jal         func_225E50
    ctx->pc = 0x21FE24u;
    SET_GPR_U32(ctx, 31, 0x21FE2Cu);
    ctx->pc = 0x21FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE24u;
    // 0x21fe28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x21FE24u, 0x21FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE2Cu;
label_21fe2c:
    // 0x21fe2c: 0xae20ca14  sw          $zero, -0x35EC($s1)
    ctx->pc = 0x21fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953492), GPR_U32(ctx, 0));
    // 0x21fe30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21fe30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21fe34:
    // 0x21fe34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x21fe34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21fe38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21fe38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fe3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21fe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE40u;
        // 0x21fe44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FE48u;
}
