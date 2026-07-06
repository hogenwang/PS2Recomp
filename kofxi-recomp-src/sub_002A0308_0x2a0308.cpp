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

// Function: sub_002A0308
// Address: 0x2a0308 - 0x2a0370
void sub_002A0308_0x2a0308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0308_0x2a0308");
#endif

    switch (ctx->pc) {
        case 0x2a0308u: goto label_2a0308;
        case 0x2a030cu: goto label_2a030c;
        case 0x2a0310u: goto label_2a0310;
        case 0x2a0314u: goto label_2a0314;
        case 0x2a0318u: goto label_2a0318;
        case 0x2a031cu: goto label_2a031c;
        case 0x2a0320u: goto label_2a0320;
        case 0x2a0324u: goto label_2a0324;
        case 0x2a0328u: goto label_2a0328;
        case 0x2a032cu: goto label_2a032c;
        case 0x2a0330u: goto label_2a0330;
        case 0x2a0334u: goto label_2a0334;
        case 0x2a0338u: goto label_2a0338;
        case 0x2a033cu: goto label_2a033c;
        case 0x2a0340u: goto label_2a0340;
        case 0x2a0344u: goto label_2a0344;
        case 0x2a0348u: goto label_2a0348;
        case 0x2a034cu: goto label_2a034c;
        case 0x2a0350u: goto label_2a0350;
        case 0x2a0354u: goto label_2a0354;
        case 0x2a0358u: goto label_2a0358;
        case 0x2a035cu: goto label_2a035c;
        case 0x2a0360u: goto label_2a0360;
        case 0x2a0364u: goto label_2a0364;
        case 0x2a0368u: goto label_2a0368;
        case 0x2a036cu: goto label_2a036c;
        default: break;
    }

    ctx->pc = 0x2a0308u;

label_2a0308:
    // 0x2a0308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a030c:
    // 0x2a030c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a0310:
    // 0x2a0310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0314:
    // 0x2a0314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0318:
    // 0x2a0318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a031c:
    // 0x2a031c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2a0320:
    if (ctx->pc == 0x2A0320u) {
        ctx->pc = 0x2A0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A031Cu;
        // 0x2a0320: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0324u;
        goto label_2a0324;
    }
    ctx->pc = 0x2A031Cu;
    {
        const bool branch_taken_0x2a031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a031c) {
            ctx->pc = 0x2A0320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A031Cu;
            // 0x2a0320: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0334u;
            goto label_2a0334;
        }
    }
    ctx->pc = 0x2A0324u;
label_2a0324:
    // 0x2a0324: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a0328:
    // 0x2a0328: 0x40f809  jalr        $v0
label_2a032c:
    if (ctx->pc == 0x2A032Cu) {
        ctx->pc = 0x2A0330u;
        goto label_2a0330;
    }
    ctx->pc = 0x2A0328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0328u, 0x2A0330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0330u;
label_2a0330:
    // 0x2a0330: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a0334:
    // 0x2a0334: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2a0338:
    if (ctx->pc == 0x2A0338u) {
        ctx->pc = 0x2A0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0334u;
        // 0x2a0338: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A033Cu;
        goto label_2a033c;
    }
    ctx->pc = 0x2A0334u;
    {
        const bool branch_taken_0x2a0334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0334) {
            ctx->pc = 0x2A0338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0334u;
            // 0x2a0338: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0348u;
            goto label_2a0348;
        }
    }
    ctx->pc = 0x2A033Cu;
label_2a033c:
    // 0x2a033c: 0xc0a88d0  jal         func_2A2340
label_2a0340:
    if (ctx->pc == 0x2A0340u) {
        ctx->pc = 0x2A0344u;
        goto label_2a0344;
    }
    ctx->pc = 0x2A033Cu;
    SET_GPR_U32(ctx, 31, 0x2A0344u);
    ctx->pc = 0x2A2340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2340u, 0x2A033Cu, 0x2A0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0344u;
label_2a0344:
    // 0x2a0344: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a0344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a0348:
    // 0x2a0348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a034c:
    // 0x2a034c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a0350:
    if (ctx->pc == 0x2A0350u) {
        ctx->pc = 0x2A0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A034Cu;
        // 0x2a0350: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0354u;
        goto label_2a0354;
    }
    ctx->pc = 0x2A034Cu;
    {
        const bool branch_taken_0x2a034c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A034Cu;
        // 0x2a0350: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a034c) {
            ctx->pc = 0x2A0364u;
            goto label_2a0364;
        }
    }
    ctx->pc = 0x2A0354u;
label_2a0354:
    // 0x2a0354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0358:
    // 0x2a0358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a035c:
    // 0x2a035c: 0x80a8c0a  j           func_2A3028
label_2a0360:
    if (ctx->pc == 0x2A0360u) {
        ctx->pc = 0x2A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A035Cu;
        // 0x2a0360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0364u;
        goto label_2a0364;
    }
    ctx->pc = 0x2A035Cu;
    ctx->pc = 0x2A0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A035Cu;
    // 0x2a0360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2A0364u;
label_2a0364:
    // 0x2a0364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0368:
    // 0x2a0368: 0x3e00008  jr          $ra
label_2a036c:
    if (ctx->pc == 0x2A036Cu) {
        ctx->pc = 0x2A036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0368u;
        // 0x2a036c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0370u;
        goto label_fallthrough_0x2a0368;
    }
    ctx->pc = 0x2A0368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0368u;
        // 0x2a036c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a0368:
    ctx->pc = 0x2A0370u;
}
