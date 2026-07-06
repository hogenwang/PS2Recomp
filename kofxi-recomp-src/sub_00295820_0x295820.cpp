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

// Function: sub_00295820
// Address: 0x295820 - 0x2958a8
void sub_00295820_0x295820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295820_0x295820");
#endif

    switch (ctx->pc) {
        case 0x295848u: goto label_295848;
        case 0x29586cu: goto label_29586c;
        default: break;
    }

    ctx->pc = 0x295820u;

    // 0x295820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x295824: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295828: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x295828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29582c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x295830: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295834: 0x26530108  addiu       $s3, $s2, 0x108
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x295838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29583c: 0x26510088  addiu       $s1, $s2, 0x88
    ctx->pc = 0x29583cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x295840: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x295840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x295844: 0x265000c8  addiu       $s0, $s2, 0xC8
    ctx->pc = 0x295844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_295848:
    // 0x295848: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x295848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29584c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29584Cu;
    {
        const bool branch_taken_0x29584c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29584c) {
            ctx->pc = 0x295850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29584Cu;
            // 0x295850: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295874u;
            goto label_295874;
        }
    }
    ctx->pc = 0x295854u;
    // 0x295854: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x295854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295858: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29585c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29585Cu;
    {
        const bool branch_taken_0x29585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29585c) {
            ctx->pc = 0x295860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29585Cu;
            // 0x295860: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295874u;
            goto label_295874;
        }
    }
    ctx->pc = 0x295864u;
    // 0x295864: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x295864u;
    SET_GPR_U32(ctx, 31, 0x29586Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x295864u, 0x29586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29586Cu;
label_29586c:
    // 0x29586c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29586cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x295870: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x295870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_295874:
    // 0x295874: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x295878: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x295878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29587c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29587Cu;
    {
        const bool branch_taken_0x29587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29587Cu;
        // 0x295880: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29587c) {
            ctx->pc = 0x295848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295848;
        }
    }
    ctx->pc = 0x295884u;
    // 0x295884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x295888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29588c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29588cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29589c: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x29589Cu;
    ctx->pc = 0x2958A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29589Cu;
    // 0x2958a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2958A4u;
    // 0x2958a4: 0x0  nop
    ctx->pc = 0x2958a4u;
    // NOP
}
