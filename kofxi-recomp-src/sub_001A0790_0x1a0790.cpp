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

// Function: sub_001A0790
// Address: 0x1a0790 - 0x1a0870
void sub_001A0790_0x1a0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0790_0x1a0790");
#endif

    switch (ctx->pc) {
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a0844u: goto label_1a0844;
        default: break;
    }

    ctx->pc = 0x1a0790u;

    // 0x1a0790: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0794: 0x908ddaa0  lbu         $t5, -0x2560($a0)
    ctx->pc = 0x1a0794u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957728)));
    // 0x1a0798: 0x19a00033  blez        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A0798u;
    {
        const bool branch_taken_0x1a0798 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1A079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0798u;
        // 0x1a079c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0798) {
            ctx->pc = 0x1A0868u;
            goto label_1a0868;
        }
    }
    ctx->pc = 0x1A07A0u;
    // 0x1a07a0: 0x31a400ff  andi        $a0, $t5, 0xFF
    ctx->pc = 0x1a07a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x1a07a4: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x1a07a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a07a8: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A07A8u;
    {
        const bool branch_taken_0x1a07a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07A8u;
        // 0x1a07ac: 0x25acfff8  addiu       $t4, $t5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07a8) {
            ctx->pc = 0x1A0820u;
            goto label_1a0820;
        }
    }
    ctx->pc = 0x1A07B0u;
    // 0x1a07b0: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x1a07b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x1a07b4: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x1a07b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x1a07b8: 0x256bdab8  addiu       $t3, $t3, -0x2548
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957752));
    // 0x1a07bc: 0x2529dac0  addiu       $t1, $t1, -0x2540
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957760));
label_1a07c0:
    // 0x1a07c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a07c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a07c4: 0x1645021  addu        $t2, $t3, $a0
    ctx->pc = 0x1a07c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1a07c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a07cc: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x1a07ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a07d0: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1a07d4: 0x91460001  lbu         $a2, 0x1($t2)
    ctx->pc = 0x1a07d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1a07d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a07d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a07dc: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x1a07dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1a07e0: 0x6c202a  slt         $a0, $v1, $t4
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1a07e4: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x1a07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a07e8: 0xa1060001  sb          $a2, 0x1($t0)
    ctx->pc = 0x1a07e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a07ec: 0xa1050002  sb          $a1, 0x2($t0)
    ctx->pc = 0x1a07ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a07f0: 0x91470003  lbu         $a3, 0x3($t2)
    ctx->pc = 0x1a07f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x1a07f4: 0x91460004  lbu         $a2, 0x4($t2)
    ctx->pc = 0x1a07f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1a07f8: 0x91450005  lbu         $a1, 0x5($t2)
    ctx->pc = 0x1a07f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x1a07fc: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x1a07fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a0800: 0xa1060004  sb          $a2, 0x4($t0)
    ctx->pc = 0x1a0800u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a0804: 0xa1050005  sb          $a1, 0x5($t0)
    ctx->pc = 0x1a0804u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0808: 0x91460006  lbu         $a2, 0x6($t2)
    ctx->pc = 0x1a0808u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x1a080c: 0x91450007  lbu         $a1, 0x7($t2)
    ctx->pc = 0x1a080cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x1a0810: 0xa1060006  sb          $a2, 0x6($t0)
    ctx->pc = 0x1a0810u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a0814: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A0814u;
    {
        const bool branch_taken_0x1a0814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0814u;
        // 0x1a0818: 0xa1050007  sb          $a1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0814) {
            ctx->pc = 0x1A07C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A081Cu;
    // 0x1a081c: 0x0  nop
    ctx->pc = 0x1a081cu;
    // NOP
label_1a0820:
    // 0x1a0820: 0x31a900ff  andi        $t1, $t5, 0xFF
    ctx->pc = 0x1a0820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x1a0824: 0x306a00ff  andi        $t2, $v1, 0xFF
    ctx->pc = 0x1a0824u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0828: 0x149082a  slt         $at, $t2, $t1
    ctx->pc = 0x1a0828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1a082c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1A082Cu;
    {
        const bool branch_taken_0x1a082c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a082c) {
            ctx->pc = 0x1A0868u;
            goto label_1a0868;
        }
    }
    ctx->pc = 0x1A0834u;
    // 0x1a0834: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x1a0838: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a083c: 0x2508dab8  addiu       $t0, $t0, -0x2548
    ctx->pc = 0x1a083cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957752));
    // 0x1a0840: 0x24c6dac0  addiu       $a2, $a2, -0x2540
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957760));
label_1a0844:
    // 0x1a0844: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1a0848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a084c: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1a084cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0850: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0854: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1a0858: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1a0858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a085c: 0x69202a  slt         $a0, $v1, $t1
    ctx->pc = 0x1a085cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1a0860: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0860u;
    {
        const bool branch_taken_0x1a0860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0860u;
        // 0x1a0864: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0860) {
            ctx->pc = 0x1A0844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0844;
        }
    }
    ctx->pc = 0x1A0868u;
label_1a0868:
    // 0x1a0868: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0870u;
}
