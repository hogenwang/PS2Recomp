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

// Function: sub_00122500
// Address: 0x122500 - 0x122598
void sub_00122500_0x122500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122500_0x122500");
#endif

    switch (ctx->pc) {
        case 0x122518u: goto label_122518;
        case 0x122578u: goto label_122578;
        default: break;
    }

    ctx->pc = 0x122500u;

    // 0x122500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122508: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12250c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x12250cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x122510: 0xc04890e  jal         func_122438
    ctx->pc = 0x122510u;
    SET_GPR_U32(ctx, 31, 0x122518u);
    ctx->pc = 0x122514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122510u;
    // 0x122514: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x122510u, 0x122518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122518u;
label_122518:
    // 0x122518: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x122518u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12251c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12251cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122520: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x122520u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x122524: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x122524u;
    {
        const bool branch_taken_0x122524 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122524u;
        // 0x122528: 0x2dac0002  sltiu       $t4, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122524) {
            ctx->pc = 0x122578u;
            goto label_122578;
        }
    }
    ctx->pc = 0x12252Cu;
    // 0x12252c: 0x15800013  bnez        $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x12252Cu;
    {
        const bool branch_taken_0x12252c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x122530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12252Cu;
        // 0x122530: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12252c) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122534u;
    // 0x122534: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x122534u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x122538: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x122538u;
    {
        const bool branch_taken_0x122538 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122538u;
        // 0x12253c: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122538) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122540u;
    // 0x122540: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x122540u;
    {
        const bool branch_taken_0x122540 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122540u;
        // 0x122544: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122540) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122548u;
    // 0x122548: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x122548u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12254c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12254cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122550: 0x5c0000a  bltz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x122550u;
    {
        const bool branch_taken_0x122550 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x122554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122550u;
        // 0x122554: 0x29cf0020  slti        $t7, $t6, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122550) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122558u;
    // 0x122558: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122558u;
    {
        const bool branch_taken_0x122558 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122558u;
        // 0x12255c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122558) {
            ctx->pc = 0x12257Cu;
            goto label_12257c;
        }
    }
    ctx->pc = 0x122560u;
    // 0x122560: 0x29cf001f  slti        $t7, $t6, 0x1F
    ctx->pc = 0x122560u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x122564: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x122564u;
    {
        const bool branch_taken_0x122564 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122564u;
        // 0x122568: 0x240f001e  addiu       $t7, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122564) {
            ctx->pc = 0x122584u;
            goto label_122584;
        }
    }
    ctx->pc = 0x12256Cu;
    // 0x12256c: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x12256cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x122570: 0x25ceffe2  addiu       $t6, $t6, -0x1E
    ctx->pc = 0x122570u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967266));
    // 0x122574: 0x1cf1004  sllv        $v0, $t7, $t6
    ctx->pc = 0x122574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
label_122578:
    // 0x122578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x122578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12257c:
    // 0x12257c: 0x3e00008  jr          $ra
    ctx->pc = 0x12257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12257Cu;
        // 0x122580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122584u;
label_122584:
    // 0x122584: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x122584u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x122588: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x122588u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12258c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x12258Cu;
    {
        const bool branch_taken_0x12258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12258Cu;
        // 0x122590: 0x1ee1006  srlv        $v0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12258c) {
            ctx->pc = 0x122578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122578;
        }
    }
    ctx->pc = 0x122594u;
    // 0x122594: 0x0  nop
    ctx->pc = 0x122594u;
    // NOP
    if (ctx->pc == 0x122594u) { ctx->pc = 0x122598u; }
}
