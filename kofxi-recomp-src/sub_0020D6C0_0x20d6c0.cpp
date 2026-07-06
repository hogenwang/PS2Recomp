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

// Function: sub_0020D6C0
// Address: 0x20d6c0 - 0x20d730
void sub_0020D6C0_0x20d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D6C0_0x20d6c0");
#endif

    switch (ctx->pc) {
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6ecu: goto label_20d6ec;
        default: break;
    }

    ctx->pc = 0x20d6c0u;

    // 0x20d6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d6c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6d4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x20d6d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d6d8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x20d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20d6dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20D6DCu;
    {
        const bool branch_taken_0x20d6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6DCu;
        // 0x20d6e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6dc) {
            ctx->pc = 0x20D708u;
            goto label_20d708;
        }
    }
    ctx->pc = 0x20D6E4u;
label_20d6e4:
    // 0x20d6e4: 0xc083570  jal         func_20D5C0
    ctx->pc = 0x20D6E4u;
    SET_GPR_U32(ctx, 31, 0x20D6ECu);
    ctx->pc = 0x20D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D5C0u, 0x20D6E4u, 0x20D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6ECu;
label_20d6ec:
    // 0x20d6ec: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20d6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d6f0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20d6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20d6f4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x20d6f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d6f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x20d6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20d6fc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D6FCu;
    {
        const bool branch_taken_0x20d6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6FCu;
        // 0x20d700: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6fc) {
            ctx->pc = 0x20D6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d6e4;
        }
    }
    ctx->pc = 0x20D704u;
    // 0x20d704: 0x0  nop
    ctx->pc = 0x20d704u;
    // NOP
label_20d708:
    // 0x20d708: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d70c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x20d70cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D71Cu;
        // 0x20d720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D724u;
    // 0x20d724: 0x0  nop
    ctx->pc = 0x20d724u;
    // NOP
    // 0x20d728: 0x0  nop
    ctx->pc = 0x20d728u;
    // NOP
    // 0x20d72c: 0x0  nop
    ctx->pc = 0x20d72cu;
    // NOP
}
