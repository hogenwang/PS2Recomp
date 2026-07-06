#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289730
// Address: 0x289730 - 0x2897d8
void sub_00289730_0x289730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289730_0x289730");
#endif

    switch (ctx->pc) {
        case 0x289758u: goto label_289758;
        case 0x2897c4u: goto label_2897c4;
        case 0x2897d0u: goto label_2897d0;
        default: break;
    }

    ctx->pc = 0x289730u;

    // 0x289730: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x289730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x289734: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x289738: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x289738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x28973c: 0x8d4236f0  lw          $v0, 0x36F0($t2)
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 14064)));
    // 0x289740: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x289740u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x289744: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289748: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x289748u;
    {
        const bool branch_taken_0x289748 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289748u;
            // 0x28974c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289748) {
            ctx->pc = 0x2897A4u;
            goto label_2897a4;
        }
    }
    ctx->pc = 0x289750u;
    // 0x289750: 0x3c0901c9  lui         $t1, 0x1C9
    ctx->pc = 0x289750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)457 << 16));
    // 0x289754: 0x252643b8  addiu       $a2, $t1, 0x43B8
    ctx->pc = 0x289754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 17336));
label_289758:
    // 0x289758: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x289758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28975c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x28975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x289760: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x289760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x289764: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x289764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x289768: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x289768u;
    {
        const bool branch_taken_0x289768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289768u;
            // 0x28976c: 0x8d4236f0  lw          $v0, 0x36F0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 14064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289768) {
            ctx->pc = 0x289794u;
            goto label_289794;
        }
    }
    ctx->pc = 0x289770u;
    // 0x289770: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289774: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x289774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x289778: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x289778u;
    {
        const bool branch_taken_0x289778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289778u;
            // 0x28977c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289778) {
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x289780u;
    // 0x289780: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x289784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289788: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289788u;
    {
        const bool branch_taken_0x289788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289788u;
            // 0x28978c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289788) {
            ctx->pc = 0x2897C4u;
            goto label_2897c4;
        }
    }
    ctx->pc = 0x289790u;
    // 0x289790: 0x8d4236f0  lw          $v0, 0x36F0($t2)
    ctx->pc = 0x289790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 14064)));
label_289794:
    // 0x289794: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289798: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x289798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28979c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28979Cu;
    {
        const bool branch_taken_0x28979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28979c) {
            ctx->pc = 0x2897A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28979Cu;
            // 0x2897a0: 0x252643b8  addiu       $a2, $t1, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 17336));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289758;
        }
    }
    ctx->pc = 0x2897A4u;
label_2897a4:
    // 0x2897a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2897a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2897a8:
    // 0x2897a8: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2897A8u;
    {
        const bool branch_taken_0x2897a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2897ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897A8u;
            // 0x2897ac: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897a8) {
            ctx->pc = 0x2897D0u;
            goto label_2897d0;
        }
    }
    ctx->pc = 0x2897B0u;
    // 0x2897b0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x2897b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2897b4: 0x244243b8  addiu       $v0, $v0, 0x43B8
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17336));
    // 0x2897b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2897b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2897bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2897BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897BCu;
            // 0x2897c0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2897C4u;
label_2897c4:
    // 0x2897c4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2897c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2897c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2897C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897C8u;
            // 0x2897cc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2897D0u;
label_2897d0:
    // 0x2897d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2897D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897D0u;
            // 0x2897d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2897D8u;
    ctx->pc = 0x2897d8u;
}
