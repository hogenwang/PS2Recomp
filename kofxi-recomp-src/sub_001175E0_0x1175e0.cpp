#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001175E0
// Address: 0x1175e0 - 0x117628
void sub_001175E0_0x1175e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001175E0_0x1175e0");
#endif

    switch (ctx->pc) {
        case 0x1175f0u: goto label_1175f0;
        case 0x117600u: goto label_117600;
        default: break;
    }

    ctx->pc = 0x1175e0u;

    // 0x1175e0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1175e4: 0xc  syscall     0
    ctx->pc = 0x1175e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1175e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1175E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1175F0u;
label_1175f0:
    // 0x1175f0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1175f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1175f4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1175F4u;
    {
        const bool branch_taken_0x1175f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175F4u;
            // 0x1175f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175f4) {
            ctx->pc = 0x117620u;
            goto label_117620;
        }
    }
    ctx->pc = 0x1175FCu;
    // 0x1175fc: 0x0  nop
    ctx->pc = 0x1175fcu;
    // NOP
label_117600:
    // 0x117600: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x117600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117604: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x117604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x117608: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x117608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11760c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x11760cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x117610: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x117610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x117614: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x117614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x117618: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x117618u;
    {
        const bool branch_taken_0x117618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117618) {
            ctx->pc = 0x117600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117600;
        }
    }
    ctx->pc = 0x117620u;
label_117620:
    // 0x117620: 0x3e00008  jr          $ra
    ctx->pc = 0x117620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117620u;
            // 0x117624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117628u;
    ctx->pc = 0x117628u;
}
