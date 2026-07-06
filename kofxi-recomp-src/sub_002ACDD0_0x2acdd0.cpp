#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACDD0
// Address: 0x2acdd0 - 0x2ace20
void sub_002ACDD0_0x2acdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACDD0_0x2acdd0");
#endif

    switch (ctx->pc) {
        case 0x2ace14u: goto label_2ace14;
        default: break;
    }

    ctx->pc = 0x2acdd0u;

    // 0x2acdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acdd4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2acdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acddc: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x2acddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2acde0: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACDE0u;
    {
        const bool branch_taken_0x2acde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2ACDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDE0u;
            // 0x2acde4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acde0) {
            ctx->pc = 0x2ACE0Cu;
            goto label_2ace0c;
        }
    }
    ctx->pc = 0x2ACDE8u;
    // 0x2acde8: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x2acde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2acdec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acdf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2acdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acdf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2acdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2acdf8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2acdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2acdfc: 0xace50040  sw          $a1, 0x40($a3)
    ctx->pc = 0x2acdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 5));
    // 0x2ace00: 0xace60030  sw          $a2, 0x30($a3)
    ctx->pc = 0x2ace00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 6));
    // 0x2ace04: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x2ace04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x2ace08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ace08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ace0c:
    // 0x2ace0c: 0xc0adc0a  jal         func_2B7028
    ctx->pc = 0x2ACE0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE14u);
    ctx->pc = 0x2ACE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE0Cu;
            // 0x2ace10: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (runtime->hasFunction(0x2B7028u)) {
        auto targetFn = runtime->lookupFunction(0x2B7028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE14u; }
        if (ctx->pc != 0x2ACE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7028_0x2b7028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE14u; }
        if (ctx->pc != 0x2ACE14u) { return; }
    }
    ctx->pc = 0x2ACE14u;
label_2ace14:
    // 0x2ace14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ace14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace18: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE18u;
            // 0x2ace1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACE20u;
    ctx->pc = 0x2ace20u;
}
