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

// Function: sub_002F0330
// Address: 0x2f0330 - 0x2f0398
void sub_002F0330_0x2f0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0330_0x2f0330");
#endif

    switch (ctx->pc) {
        case 0x2f035cu: goto label_2f035c;
        case 0x2f0368u: goto label_2f0368;
        default: break;
    }

    ctx->pc = 0x2f0330u;

    // 0x2f0330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0334: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f0334u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f0338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f033c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0340: 0x8de2ed28  lw          $v0, -0x12D8($t7)
    ctx->pc = 0x2f0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962472)));
    // 0x2f0344: 0x944e0000  lhu         $t6, 0x0($v0)
    ctx->pc = 0x2f0344u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0348: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2f0348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f034c: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f034cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f0350: 0x11cf0009  beq         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0350u;
    {
        const bool branch_taken_0x2f0350 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0350u;
        // 0x2f0354: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0350) {
            ctx->pc = 0x2F0378u;
            goto label_2f0378;
        }
    }
    ctx->pc = 0x2F0358u;
    // 0x2f0358: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f0358u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2f035c:
    // 0x2f035c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2f035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f0360: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0360u;
    SET_GPR_U32(ctx, 31, 0x2F0368u);
    ctx->pc = 0x2F0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0360u;
    // 0x2f0364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F0360u, 0x2F0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0368u;
label_2f0368:
    // 0x2f0368: 0x944f0000  lhu         $t7, 0x0($v0)
    ctx->pc = 0x2f0368u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f036c: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f036cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f0370: 0x55f0fffa  bnel        $t7, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F0370u;
    {
        const bool branch_taken_0x2f0370 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f0370) {
            ctx->pc = 0x2F0374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0370u;
            // 0x2f0374: 0x90450001  lbu         $a1, 0x1($v0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F035Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f035c;
        }
    }
    ctx->pc = 0x2F0378u;
label_2f0378:
    // 0x2f0378: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f0378u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2f037c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2f037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f0380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f038c: 0x80bc19e  j           func_2F0678
    ctx->pc = 0x2F038Cu;
    ctx->pc = 0x2F0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F038Cu;
    // 0x2f0390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    sub_002F0678_0x2f0678(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0394u;
    // 0x2f0394: 0x0  nop
    ctx->pc = 0x2f0394u;
    // NOP
    if (ctx->pc == 0x2f0394u) { ctx->pc = 0x2f0398u; }
}
