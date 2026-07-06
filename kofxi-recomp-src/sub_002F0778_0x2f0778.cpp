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

// Function: sub_002F0778
// Address: 0x2f0778 - 0x2f0800
void sub_002F0778_0x2f0778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0778_0x2f0778");
#endif

    switch (ctx->pc) {
        case 0x2f07a8u: goto label_2f07a8;
        case 0x2f07e8u: goto label_2f07e8;
        default: break;
    }

    ctx->pc = 0x2f0778u;

    // 0x2f0778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f077c: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x2f077cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x2f0780: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f0780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f0784: 0x25adeca8  addiu       $t5, $t5, -0x1358
    ctx->pc = 0x2f0784u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962344));
    // 0x2f0788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f0788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f078c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f078cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f0790: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2f0790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f0794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0798: 0x948e0000  lhu         $t6, 0x0($a0)
    ctx->pc = 0x2f0798u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f079c: 0x95ac0018  lhu         $t4, 0x18($t5)
    ctx->pc = 0x2f079cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x2f07a0: 0x31cefff0  andi        $t6, $t6, 0xFFF0
    ctx->pc = 0x2f07a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65520);
    // 0x2f07a4: 0x1c57025  or          $t6, $t6, $a1
    ctx->pc = 0x2f07a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 5));
label_2f07a8:
    // 0x2f07a8: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x2f07a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2f07ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f07acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f07b0: 0x91af00b0  lbu         $t7, 0xB0($t5)
    ctx->pc = 0x2f07b0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 176)));
    // 0x2f07b4: 0x31ceff0f  andi        $t6, $t6, 0xFF0F
    ctx->pc = 0x2f07b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65295);
    // 0x2f07b8: 0xa7ac0000  sh          $t4, 0x0($sp)
    ctx->pc = 0x2f07b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2f07bc: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f07bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f07c0: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x2f07c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2f07c4: 0xa48c0002  sh          $t4, 0x2($a0)
    ctx->pc = 0x2f07c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x2f07c8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2f07c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x2f07cc: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x2f07ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2f07d0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F07D0u;
    {
        const bool branch_taken_0x2f07d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07D0u;
        // 0x2f07d4: 0xa0870001  sb          $a3, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07d0) {
            ctx->pc = 0x2F07E8u;
            goto label_2f07e8;
        }
    }
    ctx->pc = 0x2F07D8u;
    // 0x2f07d8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F07D8u;
    {
        const bool branch_taken_0x2f07d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07D8u;
        // 0x2f07dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07d8) {
            ctx->pc = 0x2F07E8u;
            goto label_2f07e8;
        }
    }
    ctx->pc = 0x2F07E0u;
    // 0x2f07e0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F07E0u;
    SET_GPR_U32(ctx, 31, 0x2F07E8u);
    ctx->pc = 0x2F07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F07E0u;
    // 0x2f07e4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F07E0u, 0x2F07E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F07E8u;
label_2f07e8:
    // 0x2f07e8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2f07e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f07ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f07ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f07f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f07f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f07f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f07f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F07F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07F8u;
        // 0x2f07fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F07F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0800u;
}
