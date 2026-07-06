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

// Function: sub_002A2598
// Address: 0x2a2598 - 0x2a2630
void sub_002A2598_0x2a2598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2598_0x2a2598");
#endif

    switch (ctx->pc) {
        case 0x2a25bcu: goto label_2a25bc;
        case 0x2a25d0u: goto label_2a25d0;
        case 0x2a25f0u: goto label_2a25f0;
        default: break;
    }

    ctx->pc = 0x2a2598u;

    // 0x2a2598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a259c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a259cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a25a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a25a4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a25a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a25a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a25acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a25b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a25b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a25b4: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A25B4u;
    SET_GPR_U32(ctx, 31, 0x2A25BCu);
    ctx->pc = 0x2A25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25B4u;
    // 0x2a25b8: 0x37a80004  ori         $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2A25B4u, 0x2A25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25BCu;
label_2a25bc:
    // 0x2a25bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a25bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25c0: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A25C0u;
    {
        const bool branch_taken_0x2a25c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25C0u;
        // 0x2a25c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25c0) {
            ctx->pc = 0x2A2624u;
            goto label_2a2624;
        }
    }
    ctx->pc = 0x2A25C8u;
    // 0x2a25c8: 0xc0a88a4  jal         func_2A2290
    ctx->pc = 0x2A25C8u;
    SET_GPR_U32(ctx, 31, 0x2A25D0u);
    ctx->pc = 0x2A25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25C8u;
    // 0x2a25cc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2290u, 0x2A25C8u, 0x2A25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25D0u;
label_2a25d0:
    // 0x2a25d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a25d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a25d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a25d8: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x2a25d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a25dc: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2a25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a25e0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2a25e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a25e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A25E4u;
    {
        const bool branch_taken_0x2a25e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25E4u;
        // 0x2a25e8: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25e4) {
            ctx->pc = 0x2A2618u;
            goto label_2a2618;
        }
    }
    ctx->pc = 0x2A25ECu;
    // 0x2a25ec: 0x0  nop
    ctx->pc = 0x2a25ecu;
    // NOP
label_2a25f0:
    // 0x2a25f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a25f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a25f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a25fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2600: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x2a2600u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a2604: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a2608: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A2608u;
    {
        const bool branch_taken_0x2a2608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2608u;
        // 0x2a260c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2608) {
            ctx->pc = 0x2A25F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a25f0;
        }
    }
    ctx->pc = 0x2A2610u;
    // 0x2a2610: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a2610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a2614: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2a2618:
    // 0x2a2618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a261c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2a2620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2624:
    // 0x2a2624: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a2624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2628: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2628u;
        // 0x2a262c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2630u;
}
