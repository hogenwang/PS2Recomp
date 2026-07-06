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

// Function: sub_002B0340
// Address: 0x2b0340 - 0x2b03a8
void sub_002B0340_0x2b0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0340_0x2b0340");
#endif

    switch (ctx->pc) {
        case 0x2b0340u: goto label_2b0340;
        case 0x2b0344u: goto label_2b0344;
        case 0x2b0348u: goto label_2b0348;
        case 0x2b034cu: goto label_2b034c;
        case 0x2b0350u: goto label_2b0350;
        case 0x2b0354u: goto label_2b0354;
        case 0x2b0358u: goto label_2b0358;
        case 0x2b035cu: goto label_2b035c;
        case 0x2b0360u: goto label_2b0360;
        case 0x2b0364u: goto label_2b0364;
        case 0x2b0368u: goto label_2b0368;
        case 0x2b036cu: goto label_2b036c;
        case 0x2b0370u: goto label_2b0370;
        case 0x2b0374u: goto label_2b0374;
        case 0x2b0378u: goto label_2b0378;
        case 0x2b037cu: goto label_2b037c;
        case 0x2b0380u: goto label_2b0380;
        case 0x2b0384u: goto label_2b0384;
        case 0x2b0388u: goto label_2b0388;
        case 0x2b038cu: goto label_2b038c;
        case 0x2b0390u: goto label_2b0390;
        case 0x2b0394u: goto label_2b0394;
        case 0x2b0398u: goto label_2b0398;
        case 0x2b039cu: goto label_2b039c;
        case 0x2b03a0u: goto label_2b03a0;
        case 0x2b03a4u: goto label_2b03a4;
        default: break;
    }

    ctx->pc = 0x2b0340u;

label_2b0340:
    // 0x2b0340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b0344:
    // 0x2b0344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b0348:
    // 0x2b0348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b034c:
    // 0x2b034c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2b0350:
    if (ctx->pc == 0x2B0350u) {
        ctx->pc = 0x2B0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B034Cu;
        // 0x2b0350: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0354u;
        goto label_2b0354;
    }
    ctx->pc = 0x2B034Cu;
    {
        const bool branch_taken_0x2b034c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B034Cu;
        // 0x2b0350: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b034c) {
            ctx->pc = 0x2B0390u;
            goto label_2b0390;
        }
    }
    ctx->pc = 0x2B0354u;
label_2b0354:
    // 0x2b0354: 0xc0ac604  jal         func_2B1810
label_2b0358:
    if (ctx->pc == 0x2B0358u) {
        ctx->pc = 0x2B035Cu;
        goto label_2b035c;
    }
    ctx->pc = 0x2B0354u;
    SET_GPR_U32(ctx, 31, 0x2B035Cu);
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B0354u, 0x2B035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B035Cu;
label_2b035c:
    // 0x2b035c: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b0360:
    // 0x2b0360: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b0364:
    if (ctx->pc == 0x2B0364u) {
        ctx->pc = 0x2B0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0360u;
        // 0x2b0364: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0368u;
        goto label_2b0368;
    }
    ctx->pc = 0x2B0360u;
    {
        const bool branch_taken_0x2b0360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0360u;
        // 0x2b0364: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0360) {
            ctx->pc = 0x2B0378u;
            goto label_2b0378;
        }
    }
    ctx->pc = 0x2B0368u;
label_2b0368:
    // 0x2b0368: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x2b0368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2b036c:
    // 0x2b036c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b0370:
    // 0x2b0370: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b0374:
    if (ctx->pc == 0x2B0374u) {
        ctx->pc = 0x2B0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0370u;
        // 0x2b0374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0378u;
        goto label_2b0378;
    }
    ctx->pc = 0x2B0370u;
    {
        const bool branch_taken_0x2b0370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0370u;
        // 0x2b0374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0370) {
            ctx->pc = 0x2B0394u;
            goto label_2b0394;
        }
    }
    ctx->pc = 0x2B0378u;
label_2b0378:
    // 0x2b0378: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b0378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b037c:
    // 0x2b037c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2b037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2b0380:
    // 0x2b0380: 0x40f809  jalr        $v0
label_2b0384:
    if (ctx->pc == 0x2B0384u) {
        ctx->pc = 0x2B0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0380u;
        // 0x2b0384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0388u;
        goto label_2b0388;
    }
    ctx->pc = 0x2B0380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0388u);
        ctx->pc = 0x2B0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0380u;
        // 0x2b0384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0380u, 0x2B0388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0388u;
label_2b0388:
    // 0x2b0388: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b038c:
    if (ctx->pc == 0x2B038Cu) {
        ctx->pc = 0x2B038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0388u;
        // 0x2b038c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0390u;
        goto label_2b0390;
    }
    ctx->pc = 0x2B0388u;
    {
        const bool branch_taken_0x2b0388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0388u;
        // 0x2b038c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0388) {
            ctx->pc = 0x2B0398u;
            goto label_2b0398;
        }
    }
    ctx->pc = 0x2B0390u;
label_2b0390:
    // 0x2b0390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0394:
    // 0x2b0394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0398:
    // 0x2b0398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b039c:
    // 0x2b039c: 0x3e00008  jr          $ra
label_2b03a0:
    if (ctx->pc == 0x2B03A0u) {
        ctx->pc = 0x2B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B039Cu;
        // 0x2b03a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03A4u;
        goto label_2b03a4;
    }
    ctx->pc = 0x2B039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B039Cu;
        // 0x2b03a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B03A4u;
label_2b03a4:
    // 0x2b03a4: 0x0  nop
    ctx->pc = 0x2b03a4u;
    // NOP
}
