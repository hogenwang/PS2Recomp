#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6718
// Address: 0x1b6718 - 0x1b67f0
void sub_001B6718_0x1b6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6718_0x1b6718");
#endif

    switch (ctx->pc) {
        case 0x1b6780u: goto label_1b6780;
        case 0x1b67d0u: goto label_1b67d0;
        default: break;
    }

    ctx->pc = 0x1b6718u;

    // 0x1b6718: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x1b6718u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x1b671c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b671cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6720: 0x8da9b410  lw          $t1, -0x4BF0($t5)
    ctx->pc = 0x1b6720u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947856)));
    // 0x1b6724: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b6724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b672c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6734: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1b6734u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6738: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1b6738u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b673c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b673cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6740: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B6740u;
    {
        const bool branch_taken_0x1b6740 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1B6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6740u;
            // 0x1b6744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6740) {
            ctx->pc = 0x1B67B0u;
            goto label_1b67b0;
        }
    }
    ctx->pc = 0x1B6748u;
    // 0x1b6748: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b674c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b674cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b6750: 0x2447b40c  addiu       $a3, $v0, -0x4BF4
    ctx->pc = 0x1b6750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947852));
    // 0x1b6754: 0x2484b428  addiu       $a0, $a0, -0x4BD8
    ctx->pc = 0x1b6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    // 0x1b6758: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1b6758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b675c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b675cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b6760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6764: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b6768: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1b6768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b676c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1b676cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6770: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6770u;
    {
        const bool branch_taken_0x1b6770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6770u;
            // 0x1b6774: 0x8da3b410  lw          $v1, -0x4BF0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6770) {
            ctx->pc = 0x1B67B4u;
            goto label_1b67b4;
        }
    }
    ctx->pc = 0x1B6778u;
    // 0x1b6778: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1b6778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b677c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b6780:
    // 0x1b6780: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b6780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b6784: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6784u;
    {
        const bool branch_taken_0x1b6784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6784u;
            // 0x1b6788: 0x8da3b410  lw          $v1, -0x4BF0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6784) {
            ctx->pc = 0x1B67B4u;
            goto label_1b67b4;
        }
    }
    ctx->pc = 0x1B678Cu;
    // 0x1b678c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b6790: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b6790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b6794: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b6794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b6798: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b679c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b67a0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b67a4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b67a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b67a8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B67A8u;
    {
        const bool branch_taken_0x1b67a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b67a8) {
            ctx->pc = 0x1B67ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67A8u;
            // 0x1b67ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6780;
        }
    }
    ctx->pc = 0x1B67B0u;
label_1b67b0:
    // 0x1b67b0: 0x8da3b410  lw          $v1, -0x4BF0($t5)
    ctx->pc = 0x1b67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294947856)));
label_1b67b4:
    // 0x1b67b4: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B67B4u;
    {
        const bool branch_taken_0x1b67b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B67B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67B4u;
            // 0x1b67b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67b4) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B67BCu;
    // 0x1b67bc: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1b67bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67c0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67c4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x1b67c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67c8: 0xc06d984  jal         func_1B6610
    ctx->pc = 0x1B67C8u;
    SET_GPR_U32(ctx, 31, 0x1B67D0u);
    ctx->pc = 0x1B67CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67C8u;
            // 0x1b67cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6610u;
    if (runtime->hasFunction(0x1B6610u)) {
        auto targetFn = runtime->lookupFunction(0x1B6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67D0u; }
        if (ctx->pc != 0x1B67D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6610_0x1b6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67D0u; }
        if (ctx->pc != 0x1B67D0u) { return; }
    }
    ctx->pc = 0x1B67D0u;
label_1b67d0:
    // 0x1b67d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b67d4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1b67d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b67d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b67d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b67dc:
    // 0x1b67dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b67dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b67e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b67e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b67e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67E4u;
            // 0x1b67e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B67ECu;
    // 0x1b67ec: 0x0  nop
    ctx->pc = 0x1b67ecu;
    // NOP
    ctx->pc = 0x1b67f0u;
}
