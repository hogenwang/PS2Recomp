#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B67F0
// Address: 0x1b67f0 - 0x1b68c0
void sub_001B67F0_0x1b67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B67F0_0x1b67f0");
#endif

    switch (ctx->pc) {
        case 0x1b6858u: goto label_1b6858;
        case 0x1b68a8u: goto label_1b68a8;
        default: break;
    }

    ctx->pc = 0x1b67f0u;

    // 0x1b67f0: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x1b67f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b67f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b67f8: 0x8da9b418  lw          $t1, -0x4BE8($t5)
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947864)));
    // 0x1b67fc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b67fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b6804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b680c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1b680cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6810: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1b6810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6814: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b6814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6818: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B6818u;
    {
        const bool branch_taken_0x1b6818 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1B681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6818u;
            // 0x1b681c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6818) {
            ctx->pc = 0x1B6888u;
            goto label_1b6888;
        }
    }
    ctx->pc = 0x1B6820u;
    // 0x1b6820: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b6820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b6824: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b6824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b6828: 0x2447b414  addiu       $a3, $v0, -0x4BEC
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947860));
    // 0x1b682c: 0x2484b428  addiu       $a0, $a0, -0x4BD8
    ctx->pc = 0x1b682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    // 0x1b6830: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1b6830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b6834: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b6834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b6838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b683c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b6840: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6844: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6848: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6848u;
    {
        const bool branch_taken_0x1b6848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6848u;
            // 0x1b684c: 0x8da3b418  lw          $v1, -0x4BE8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6848) {
            ctx->pc = 0x1B688Cu;
            goto label_1b688c;
        }
    }
    ctx->pc = 0x1B6850u;
    // 0x1b6850: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1b6850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6854: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b6854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b6858:
    // 0x1b6858: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b6858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b685c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B685Cu;
    {
        const bool branch_taken_0x1b685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B685Cu;
            // 0x1b6860: 0x8da3b418  lw          $v1, -0x4BE8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b685c) {
            ctx->pc = 0x1B688Cu;
            goto label_1b688c;
        }
    }
    ctx->pc = 0x1B6864u;
    // 0x1b6864: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b6868: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b686c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b6870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6874: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b6878: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1b6878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b687c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b687cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6880: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B6880u;
    {
        const bool branch_taken_0x1b6880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6880) {
            ctx->pc = 0x1B6884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6880u;
            // 0x1b6884: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6858;
        }
    }
    ctx->pc = 0x1B6888u;
label_1b6888:
    // 0x1b6888: 0x8da3b418  lw          $v1, -0x4BE8($t5)
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947864)));
label_1b688c:
    // 0x1b688c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B688Cu;
    {
        const bool branch_taken_0x1b688c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B6890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B688Cu;
            // 0x1b6890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b688c) {
            ctx->pc = 0x1B68B0u;
            goto label_1b68b0;
        }
    }
    ctx->pc = 0x1B6894u;
    // 0x1b6894: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1b6894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6898: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1b6898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b689c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x1b689cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68a0: 0xc06d984  jal         func_1B6610
    ctx->pc = 0x1B68A0u;
    SET_GPR_U32(ctx, 31, 0x1B68A8u);
    ctx->pc = 0x1B68A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68A0u;
            // 0x1b68a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6610u;
    if (runtime->hasFunction(0x1B6610u)) {
        auto targetFn = runtime->lookupFunction(0x1B6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68A8u; }
        if (ctx->pc != 0x1B68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6610_0x1b6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68A8u; }
        if (ctx->pc != 0x1B68A8u) { return; }
    }
    ctx->pc = 0x1B68A8u;
label_1b68a8:
    // 0x1b68a8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1b68a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b68ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b68b0:
    // 0x1b68b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b68b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b68b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b68b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b68b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B68BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68B8u;
            // 0x1b68bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B68C0u;
    ctx->pc = 0x1b68c0u;
}
