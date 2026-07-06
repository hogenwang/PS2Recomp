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

// Function: sub_00268238
// Address: 0x268238 - 0x2682d0
void sub_00268238_0x268238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268238_0x268238");
#endif

    switch (ctx->pc) {
        case 0x268260u: goto label_268260;
        case 0x268268u: goto label_268268;
        case 0x26827cu: goto label_26827c;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        default: break;
    }

    ctx->pc = 0x268238u;

    // 0x268238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x268238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26823c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x268240: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x268240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x268244: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x268244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x268248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26824c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26824cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268250: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x268250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x268254: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x268254u;
    {
        const bool branch_taken_0x268254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268254u;
        // 0x268258: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268254) {
            ctx->pc = 0x26827Cu;
            goto label_26827c;
        }
    }
    ctx->pc = 0x26825Cu;
    // 0x26825c: 0x0  nop
    ctx->pc = 0x26825cu;
    // NOP
label_268260:
    // 0x268260: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x268260u;
    SET_GPR_U32(ctx, 31, 0x268268u);
    ctx->pc = 0x268264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268260u;
    // 0x268264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x268260u, 0x268268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268268u;
label_268268:
    // 0x268268: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x268268u;
    {
        const bool branch_taken_0x268268 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268268u;
        // 0x26826c: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268268) {
            ctx->pc = 0x2682B4u;
            goto label_2682b4;
        }
    }
    ctx->pc = 0x268270u;
    // 0x268270: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x268270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x268274: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x268274u;
    SET_GPR_U32(ctx, 31, 0x26827Cu);
    ctx->pc = 0x268278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268274u;
    // 0x268278: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x268274u, 0x26827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26827Cu;
label_26827c:
    // 0x26827c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268284: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x268284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x268288: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x268288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26828c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26828cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268290: 0xc098202  jal         func_260808
label_268294:
    if (ctx->pc == 0x268294u) {
        ctx->pc = 0x268294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268290u;
        // 0x268294: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268298u;
        goto label_268298;
    }
    ctx->pc = 0x268290u;
    SET_GPR_U32(ctx, 31, 0x268298u);
    ctx->pc = 0x268294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268290u;
    // 0x268294: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260808u, 0x268290u, 0x268298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268298u;
label_268298:
    // 0x268298: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268298u;
    {
        const bool branch_taken_0x268298 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268298u;
        // 0x26829c: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268298) {
            ctx->pc = 0x2682B4u;
            goto label_2682b4;
        }
    }
    ctx->pc = 0x2682A0u;
    // 0x2682a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2682a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2682a4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2682A4u;
    {
        const bool branch_taken_0x2682a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682A4u;
        // 0x2682a8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682a4) {
            ctx->pc = 0x268260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268260;
        }
    }
    ctx->pc = 0x2682ACu;
    // 0x2682ac: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2682ACu;
    {
        const bool branch_taken_0x2682ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682ACu;
        // 0x2682b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682ac) {
            ctx->pc = 0x268260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268260;
        }
    }
    ctx->pc = 0x2682B4u;
label_2682b4:
    // 0x2682b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2682b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2682b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2682b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2682bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2682bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2682c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2682c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2682c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2682C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2682C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C4u;
        // 0x2682c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2682C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2682CCu;
    // 0x2682cc: 0x0  nop
    ctx->pc = 0x2682ccu;
    // NOP
}
