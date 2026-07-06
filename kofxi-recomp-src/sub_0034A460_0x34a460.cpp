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

// Function: sub_0034A460
// Address: 0x34a460 - 0x34a4e0
void sub_0034A460_0x34a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A460_0x34a460");
#endif

    switch (ctx->pc) {
        case 0x34a480u: goto label_34a480;
        case 0x34a490u: goto label_34a490;
        case 0x34a49cu: goto label_34a49c;
        default: break;
    }

    ctx->pc = 0x34a460u;

    // 0x34a460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a46c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34a470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a478: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34a478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34a480:
    // 0x34a480: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x34A480u;
    {
        const bool branch_taken_0x34a480 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x34A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A480u;
        // 0x34a484: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a480) {
            ctx->pc = 0x34A4B8u;
            goto label_34a4b8;
        }
    }
    ctx->pc = 0x34A488u;
    // 0x34a488: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x34a488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x34a48c: 0x2610bdd0  addiu       $s0, $s0, -0x4230
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950352));
label_34a490:
    // 0x34a490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a494: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A494u;
    SET_GPR_U32(ctx, 31, 0x34A49Cu);
    ctx->pc = 0x34A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A494u;
    // 0x34a498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A494u, 0x34A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A49Cu;
label_34a49c:
    // 0x34a49c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A49Cu;
    {
        const bool branch_taken_0x34a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a49c) {
            ctx->pc = 0x34A4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A49Cu;
            // 0x34a4a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A4ACu;
            goto label_34a4ac;
        }
    }
    ctx->pc = 0x34A4A4u;
    // 0x34a4a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34A4A4u;
    {
        const bool branch_taken_0x34a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4A4u;
        // 0x34a4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4a4) {
            ctx->pc = 0x34A4BCu;
            goto label_34a4bc;
        }
    }
    ctx->pc = 0x34A4ACu;
label_34a4ac:
    // 0x34a4ac: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x34a4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34a4b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34A4B0u;
    {
        const bool branch_taken_0x34a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4B0u;
        // 0x34a4b4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4b0) {
            ctx->pc = 0x34A490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a490;
        }
    }
    ctx->pc = 0x34A4B8u;
label_34a4b8:
    // 0x34a4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a4bc:
    // 0x34a4bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a4c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34A4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4D0u;
        // 0x34a4d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A4D8u;
    // 0x34a4d8: 0x0  nop
    ctx->pc = 0x34a4d8u;
    // NOP
    // 0x34a4dc: 0x0  nop
    ctx->pc = 0x34a4dcu;
    // NOP
}
