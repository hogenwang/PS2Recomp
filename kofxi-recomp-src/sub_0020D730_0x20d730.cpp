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

// Function: sub_0020D730
// Address: 0x20d730 - 0x20d790
void sub_0020D730_0x20d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D730_0x20d730");
#endif

    switch (ctx->pc) {
        case 0x20d750u: goto label_20d750;
        case 0x20d758u: goto label_20d758;
        default: break;
    }

    ctx->pc = 0x20d730u;

    // 0x20d730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d744: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x20d744u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d748: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D748u;
    {
        const bool branch_taken_0x20d748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D748u;
        // 0x20d74c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d748) {
            ctx->pc = 0x20D770u;
            goto label_20d770;
        }
    }
    ctx->pc = 0x20D750u;
label_20d750:
    // 0x20d750: 0xc083580  jal         func_20D600
    ctx->pc = 0x20D750u;
    SET_GPR_U32(ctx, 31, 0x20D758u);
    ctx->pc = 0x20D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D600u, 0x20D750u, 0x20D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D758u;
label_20d758:
    // 0x20d758: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20d758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d75c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20d760: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x20d760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d764: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x20d764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x20d768: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D768u;
    {
        const bool branch_taken_0x20d768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d768) {
            ctx->pc = 0x20D750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d750;
        }
    }
    ctx->pc = 0x20D770u;
label_20d770:
    // 0x20d770: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d774: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x20d774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d784: 0x3e00008  jr          $ra
    ctx->pc = 0x20D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D784u;
        // 0x20d788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D78Cu;
    // 0x20d78c: 0x0  nop
    ctx->pc = 0x20d78cu;
    // NOP
}
