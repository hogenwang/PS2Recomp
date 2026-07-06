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

// Function: sub_002D0710
// Address: 0x2d0710 - 0x2d08b8
void sub_002D0710_0x2d0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0710_0x2d0710");
#endif

    switch (ctx->pc) {
        case 0x2d0748u: goto label_2d0748;
        case 0x2d07c8u: goto label_2d07c8;
        case 0x2d0800u: goto label_2d0800;
        case 0x2d08b0u: goto label_2d08b0;
        default: break;
    }

    ctx->pc = 0x2d0710u;

    // 0x2d0710: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2d0710u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d0714: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2d0714u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0718: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x2d0718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d071c: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x2d071cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d0720: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d0720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d0724: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d0728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d072c: 0xdc48fff8  ld          $t0, -0x8($v0)
    ctx->pc = 0x2d072cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2d0730: 0x81e3e  dsrl32      $v1, $t0, 24
    ctx->pc = 0x2d0730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> (32 + 24));
    // 0x2d0734: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d0734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0738: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0738u;
    {
        const bool branch_taken_0x2d0738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0738u;
        // 0x2d073c: 0x244bfff0  addiu       $t3, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0738) {
            ctx->pc = 0x2D07A0u;
            goto label_2d07a0;
        }
    }
    ctx->pc = 0x2D0740u;
    // 0x2d0740: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2d0740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d0744: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2d0744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_2d0748:
    // 0x2d0748: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d0748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d074c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x2d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2d0750: 0x481016  dsrlv       $v0, $t0, $v0
    ctx->pc = 0x2d0750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d0754: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2d0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d0758: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x2d0758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2d075c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2d075cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2d0760: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0760u;
    {
        const bool branch_taken_0x2d0760 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2D0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0760u;
        // 0x2d0764: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0760) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0768u;
    // 0x2d0768: 0x5080fff7  beql        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D0768u;
    {
        const bool branch_taken_0x2d0768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0768) {
            ctx->pc = 0x2D076Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0768u;
            // 0x2d076c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0748;
        }
    }
    ctx->pc = 0x2D0770u;
label_2d0770:
    // 0x2d0770: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0770u;
    {
        const bool branch_taken_0x2d0770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0770) {
            ctx->pc = 0x2D0774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0770u;
            // 0x2d0774: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D07A4u;
            goto label_2d07a4;
        }
    }
    ctx->pc = 0x2D0778u;
    // 0x2d0778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d077c: 0x14a3004c  bne         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2D077Cu;
    {
        const bool branch_taken_0x2d077c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D077Cu;
        // 0x2d0780: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d077c) {
            ctx->pc = 0x2D08B0u;
            goto label_2d08b0;
        }
    }
    ctx->pc = 0x2D0784u;
    // 0x2d0784: 0x1a5182b  sltu        $v1, $t5, $a1
    ctx->pc = 0x2d0784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d0788: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D0788u;
    {
        const bool branch_taken_0x2d0788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0788u;
        // 0x2d078c: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0788) {
            ctx->pc = 0x2D08B0u;
            goto label_2d08b0;
        }
    }
    ctx->pc = 0x2D0790u;
    // 0x2d0790: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x2d0790u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0794: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0794u;
        // 0x2d0798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D079Cu;
    // 0x2d079c: 0x0  nop
    ctx->pc = 0x2d079cu;
    // NOP
label_2d07a0:
    // 0x2d07a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d07a4:
    // 0x2d07a4: 0x1a3182b  sltu        $v1, $t5, $v1
    ctx->pc = 0x2d07a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d07a8: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D07A8u;
    {
        const bool branch_taken_0x2d07a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07A8u;
        // 0x2d07ac: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07a8) {
            ctx->pc = 0x2D08B0u;
            goto label_2d08b0;
        }
    }
    ctx->pc = 0x2D07B0u;
    // 0x2d07b0: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x2d07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2d07b4: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x2d07b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d07b8: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D07B8u;
    {
        const bool branch_taken_0x2d07b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07B8u;
        // 0x2d07bc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07b8) {
            ctx->pc = 0x2D07E8u;
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D07C0u;
    // 0x2d07c0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d07c4: 0x0  nop
    ctx->pc = 0x2d07c4u;
    // NOP
label_2d07c8:
    // 0x2d07c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d07cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d07d0: 0x481016  dsrlv       $v0, $t0, $v0
    ctx->pc = 0x2d07d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d07d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d07d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d07d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d07d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d07dc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2d07dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d07e0: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D07E0u;
    {
        const bool branch_taken_0x2d07e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07E0u;
        // 0x2d07e4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07e0) {
            ctx->pc = 0x2D07C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d07c8;
        }
    }
    ctx->pc = 0x2D07E8u;
label_2d07e8:
    // 0x2d07e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d07ec: 0x149102a  slt         $v0, $t2, $t1
    ctx->pc = 0x2d07ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d07f0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D07F0u;
    {
        const bool branch_taken_0x2d07f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07F0u;
        // 0x2d07f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07f0) {
            ctx->pc = 0x2D08B0u;
            goto label_2d08b0;
        }
    }
    ctx->pc = 0x2D07F8u;
    // 0x2d07f8: 0x252affff  addiu       $t2, $t1, -0x1
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2d07fc: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2d07fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d0800:
    // 0x2d0800: 0xdd680000  ld          $t0, 0x0($t3)
    ctx->pc = 0x2d0800u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d0804: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x2d0804u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x2d0808: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2d0808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2d080c: 0x8163e  dsrl32      $v0, $t0, 24
    ctx->pc = 0x2d080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> (32 + 24));
    // 0x2d0810: 0x81c3e  dsrl32      $v1, $t0, 16
    ctx->pc = 0x2d0810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> (32 + 16));
    // 0x2d0814: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2d0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2d0818: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2d0818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2d081c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0820: 0x8223e  dsrl32      $a0, $t0, 8
    ctx->pc = 0x2d0820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x2d0824: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2d0824u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0828: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d082c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0830: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x2d0830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x2d0834: 0x8283e  dsrl32      $a1, $t0, 0
    ctx->pc = 0x2d0834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2d0838: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2d0838u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d083c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d083cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0840: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x2d0840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x2d0844: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d0848: 0x8363a  dsrl        $a2, $t0, 24
    ctx->pc = 0x2d0848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) >> 24);
    // 0x2d084c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x2d084cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d0850: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d0854: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2d0854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d0858: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x2d0858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x2d085c: 0x8143a  dsrl        $v0, $t0, 16
    ctx->pc = 0x2d085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 16);
    // 0x2d0860: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x2d0860u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d0864: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2d0864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d0868: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2d0868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2d086c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d086cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d0870: 0x81a3a  dsrl        $v1, $t0, 8
    ctx->pc = 0x2d0870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 8);
    // 0x2d0874: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2d0874u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d0878: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d087c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0880: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2d0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2d0884: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2d0884u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0888: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d088c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0890: 0x1091024  and         $v0, $t0, $t1
    ctx->pc = 0x2d0890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2d0894: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2d0894u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0898: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d089c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d08a0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2d08a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d08a4: 0x1540ffd6  bnez        $t2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2D08A4u;
    {
        const bool branch_taken_0x2d08a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08A4u;
        // 0x2d08a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08a4) {
            ctx->pc = 0x2D0800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0800;
        }
    }
    ctx->pc = 0x2D08ACu;
    // 0x2d08ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d08acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d08b0:
    // 0x2d08b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D08B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D08B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08B8u;
}
