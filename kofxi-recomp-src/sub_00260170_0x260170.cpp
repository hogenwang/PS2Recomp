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

// Function: sub_00260170
// Address: 0x260170 - 0x2601f8
void sub_00260170_0x260170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260170_0x260170");
#endif

    switch (ctx->pc) {
        case 0x260190u: goto label_260190;
        case 0x26019cu: goto label_26019c;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601ccu: goto label_2601cc;
        default: break;
    }

    ctx->pc = 0x260170u;

    // 0x260170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260174: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x260174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x260178: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26017c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26017cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260184: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x260184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x260188: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x260188u;
    SET_GPR_U32(ctx, 31, 0x260190u);
    ctx->pc = 0x26018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260188u;
    // 0x26018c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x260188u, 0x260190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260190u;
label_260190:
    // 0x260190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x260190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260194: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x260194u;
    {
        const bool branch_taken_0x260194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260194u;
        // 0x260198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260194) {
            ctx->pc = 0x2601DCu;
            goto label_2601dc;
        }
    }
    ctx->pc = 0x26019Cu;
label_26019c:
    // 0x26019c: 0xc08caa4  jal         func_232A90
    ctx->pc = 0x26019Cu;
    SET_GPR_U32(ctx, 31, 0x2601A4u);
    ctx->pc = 0x2601A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26019Cu;
    // 0x2601a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232A90u, 0x26019Cu, 0x2601A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601A4u;
label_2601a4:
    // 0x2601a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2601a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2601A8u;
    {
        const bool branch_taken_0x2601a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601A8u;
        // 0x2601ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601a8) {
            ctx->pc = 0x2601C0u;
            goto label_2601c0;
        }
    }
    ctx->pc = 0x2601B0u;
    // 0x2601b0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2601B0u;
    {
        const bool branch_taken_0x2601b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601B0u;
        // 0x2601b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601b0) {
            ctx->pc = 0x2601C4u;
            goto label_2601c4;
        }
    }
    ctx->pc = 0x2601B8u;
    // 0x2601b8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2601B8u;
    {
        const bool branch_taken_0x2601b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601b8) {
            ctx->pc = 0x26019Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26019c;
        }
    }
    ctx->pc = 0x2601C0u;
label_2601c0:
    // 0x2601c0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2601c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2601c4:
    // 0x2601c4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x2601C4u;
    SET_GPR_U32(ctx, 31, 0x2601CCu);
    ctx->pc = 0x2601C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601C4u;
    // 0x2601c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x2601C4u, 0x2601CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601CCu;
label_2601cc:
    // 0x2601cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2601ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2601d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2601d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2601d4: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2601d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x2601d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2601d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2601dc:
    // 0x2601dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2601dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2601e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2601e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2601e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2601e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2601e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2601e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2601ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2601ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601ECu;
        // 0x2601f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2601ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2601F4u;
    // 0x2601f4: 0x0  nop
    ctx->pc = 0x2601f4u;
    // NOP
}
