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

// Function: sub_0017D830
// Address: 0x17d830 - 0x17d950
void sub_0017D830_0x17d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D830_0x17d830");
#endif

    switch (ctx->pc) {
        case 0x17d870u: goto label_17d870;
        case 0x17d8e8u: goto label_17d8e8;
        default: break;
    }

    ctx->pc = 0x17d830u;

    // 0x17d830: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x17d830u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d834: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17d838: 0x24a5db55  addiu       $a1, $a1, -0x24AB
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957909));
    // 0x17d83c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x17d83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17d840: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17d840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17d844: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17d848: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17d84c: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x17d84cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17d850: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x17d850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x17d854: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x17d854u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d858: 0x18c0001d  blez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D858u;
    {
        const bool branch_taken_0x17d858 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D858u;
        // 0x17d85c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d858) {
            ctx->pc = 0x17D8D0u;
            goto label_17d8d0;
        }
    }
    ctx->pc = 0x17D860u;
    // 0x17d860: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x17d860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x17d864: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d864u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d868: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x17d868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17d86c: 0x2529db50  addiu       $t1, $t1, -0x24B0
    ctx->pc = 0x17d86cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957904));
label_17d870:
    // 0x17d870: 0x12a2821  addu        $a1, $t1, $t2
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x17d874: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x17d878: 0x8ca5006c  lw          $a1, 0x6C($a1)
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x17d87c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D87Cu;
    {
        const bool branch_taken_0x17d87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d87c) {
            ctx->pc = 0x17D8A0u;
            goto label_17d8a0;
        }
    }
    ctx->pc = 0x17D884u;
    // 0x17d884: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x17d884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17d888: 0x910600f6  lbu         $a2, 0xF6($t0)
    ctx->pc = 0x17d888u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 246)));
    // 0x17d88c: 0x10c70004  beq         $a2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17D8A0u;
            goto label_17d8a0;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17d898: 0xa0a6000d  sb          $a2, 0xD($a1)
    ctx->pc = 0x17d898u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x17d89c: 0xa10700f6  sb          $a3, 0xF6($t0)
    ctx->pc = 0x17d89cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 246), (uint8_t)GPR_U32(ctx, 7));
label_17d8a0:
    // 0x17d8a0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x17d8a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d8a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17d8a8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17d8ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17d8b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d8b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17d8b8: 0x550c0  sll         $t2, $a1, 3
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d8bc: 0x12a2821  addu        $a1, $t1, $t2
    ctx->pc = 0x17d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x17d8c0: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x17d8c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x17d8c4: 0x66282a  slt         $a1, $v1, $a2
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17d8c8: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17D8C8u;
    {
        const bool branch_taken_0x17d8c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8C8u;
        // 0x17d8cc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8c8) {
            ctx->pc = 0x17D870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d870;
        }
    }
    ctx->pc = 0x17D8D0u;
label_17d8d0:
    // 0x17d8d0: 0x18c0001d  blez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D8D0u;
    {
        const bool branch_taken_0x17d8d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8D0u;
        // 0x17d8d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8d0) {
            ctx->pc = 0x17D948u;
            goto label_17d948;
        }
    }
    ctx->pc = 0x17D8D8u;
    // 0x17d8d8: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x17d8dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d8dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17d8e4: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
label_17d8e8:
    // 0x17d8e8: 0x10a1821  addu        $v1, $t0, $t2
    ctx->pc = 0x17d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17d8ec: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x17d8f0: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x17d8f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D8F4u;
    {
        const bool branch_taken_0x17d8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d8f4) {
            ctx->pc = 0x17D918u;
            goto label_17d918;
        }
    }
    ctx->pc = 0x17D8FCu;
    // 0x17d8fc: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x17d8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17d900: 0x90e500f6  lbu         $a1, 0xF6($a3)
    ctx->pc = 0x17d900u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 246)));
    // 0x17d904: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D904u;
    {
        const bool branch_taken_0x17d904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x17d904) {
            ctx->pc = 0x17D918u;
            goto label_17d918;
        }
    }
    ctx->pc = 0x17D90Cu;
    // 0x17d90c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x17d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17d910: 0xa0650010  sb          $a1, 0x10($v1)
    ctx->pc = 0x17d910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d914: 0xa0e600f6  sb          $a2, 0xF6($a3)
    ctx->pc = 0x17d914u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 246), (uint8_t)GPR_U32(ctx, 6));
label_17d918:
    // 0x17d918: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x17d918u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d91c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17d920: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d924: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d928: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17d92c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d930: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17d934: 0x10a1821  addu        $v1, $t0, $t2
    ctx->pc = 0x17d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17d938: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x17d938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x17d93c: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x17d93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d940: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17D940u;
    {
        const bool branch_taken_0x17d940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D940u;
        // 0x17d944: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d940) {
            ctx->pc = 0x17D8E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d8e8;
        }
    }
    ctx->pc = 0x17D948u;
label_17d948:
    // 0x17d948: 0x3e00008  jr          $ra
    ctx->pc = 0x17D948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D950u;
}
