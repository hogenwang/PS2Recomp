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

// Function: sub_002192C0
// Address: 0x2192c0 - 0x219350
void sub_002192C0_0x2192c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002192C0_0x2192c0");
#endif

    switch (ctx->pc) {
        case 0x2192f8u: goto label_2192f8;
        case 0x219330u: goto label_219330;
        default: break;
    }

    ctx->pc = 0x2192c0u;

label_2192c0:
    // 0x2192c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2192c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2192c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2192c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2192c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2192c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2192cc: 0x24841240  addiu       $a0, $a0, 0x1240
    ctx->pc = 0x2192ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    // 0x2192d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2192d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2192d4: 0x8043e52  j           func_10F948
    ctx->pc = 0x2192D4u;
    ctx->pc = 0x2192D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192D4u;
    // 0x2192d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2192DCu;
    // 0x2192dc: 0x0  nop
    ctx->pc = 0x2192dcu;
    // NOP
    // 0x2192e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2192e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2192e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2192e8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2192e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2192ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2192ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2192f0: 0xc0864b0  jal         func_2192C0
    ctx->pc = 0x2192F0u;
    SET_GPR_U32(ctx, 31, 0x2192F8u);
    ctx->pc = 0x2192F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192F0u;
    // 0x2192f4: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2192C0u;
    goto label_2192c0;
    ctx->pc = 0x2192F8u;
label_2192f8:
    // 0x2192f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2192f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2192fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2192fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219300: 0x3e00008  jr          $ra
    ctx->pc = 0x219300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219300u;
        // 0x219304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219308u;
    // 0x219308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21930c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21930cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21931c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21931cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219324: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x219324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219328: 0xc0864b0  jal         func_2192C0
    ctx->pc = 0x219328u;
    SET_GPR_U32(ctx, 31, 0x219330u);
    ctx->pc = 0x21932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219328u;
    // 0x21932c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2192C0u;
    goto label_2192c0;
    ctx->pc = 0x219330u;
label_219330:
    // 0x219330: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x219330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219338: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x219338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21933c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21933cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219344: 0x3e00008  jr          $ra
    ctx->pc = 0x219344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219344u;
        // 0x219348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21934Cu;
    // 0x21934c: 0x0  nop
    ctx->pc = 0x21934cu;
    // NOP
    if (ctx->pc == 0x21934cu) { ctx->pc = 0x219350u; }
}
