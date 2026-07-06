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

// Function: sub_0013C530
// Address: 0x13c530 - 0x13c5a0
void sub_0013C530_0x13c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C530_0x13c530");
#endif

    switch (ctx->pc) {
        case 0x13c548u: goto label_13c548;
        case 0x13c560u: goto label_13c560;
        default: break;
    }

    ctx->pc = 0x13c530u;

    // 0x13c530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c540: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C540u;
    SET_GPR_U32(ctx, 31, 0x13C548u);
    ctx->pc = 0x13C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C540u;
    // 0x13c544: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E200u, 0x13C540u, 0x13C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C548u;
label_13c548:
    // 0x13c548: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C548u;
    {
        const bool branch_taken_0x13c548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c548) {
            ctx->pc = 0x13C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C548u;
            // 0x13c54c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C558u;
            goto label_13c558;
        }
    }
    ctx->pc = 0x13C550u;
    // 0x13c550: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C550u;
    {
        const bool branch_taken_0x13c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C550u;
        // 0x13c554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c550) {
            ctx->pc = 0x13C584u;
            goto label_13c584;
        }
    }
    ctx->pc = 0x13C558u;
label_13c558:
    // 0x13c558: 0xc04f8a0  jal         func_13E280
    ctx->pc = 0x13C558u;
    SET_GPR_U32(ctx, 31, 0x13C560u);
    ctx->pc = 0x13C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C558u;
    // 0x13c55c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E280u, 0x13C558u, 0x13C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C560u;
label_13c560:
    // 0x13c560: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c564: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C564u;
    {
        const bool branch_taken_0x13c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c564) {
            ctx->pc = 0x13C568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C564u;
            // 0x13c568: 0xa6030240  sh          $v1, 0x240($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 576), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C580u;
            goto label_13c580;
        }
    }
    ctx->pc = 0x13C56Cu;
    // 0x13c56c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c570: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C570u;
    {
        const bool branch_taken_0x13c570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c570) {
            ctx->pc = 0x13C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C570u;
            // 0x13c574: 0xa6030240  sh          $v1, 0x240($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 576), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C580u;
            goto label_13c580;
        }
    }
    ctx->pc = 0x13C578u;
    // 0x13c578: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13C578u;
    {
        const bool branch_taken_0x13c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c578) {
            ctx->pc = 0x13C57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C578u;
            // 0x13c57c: 0xa6000240  sh          $zero, 0x240($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 576), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C580u;
            goto label_13c580;
        }
    }
    ctx->pc = 0x13C580u;
label_13c580:
    // 0x13c580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c584:
    // 0x13c584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c58c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C58Cu;
        // 0x13c590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C594u;
    // 0x13c594: 0x0  nop
    ctx->pc = 0x13c594u;
    // NOP
    // 0x13c598: 0x0  nop
    ctx->pc = 0x13c598u;
    // NOP
    // 0x13c59c: 0x0  nop
    ctx->pc = 0x13c59cu;
    // NOP
    if (ctx->pc == 0x13c59cu) { ctx->pc = 0x13c5a0u; }
}
