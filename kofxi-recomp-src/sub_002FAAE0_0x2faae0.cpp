#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FAAE0
// Address: 0x2faae0 - 0x2fab40
void sub_002FAAE0_0x2faae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAAE0_0x2faae0");
#endif

    switch (ctx->pc) {
        case 0x2fab04u: goto label_2fab04;
        case 0x2fab0cu: goto label_2fab0c;
        case 0x2fab24u: goto label_2fab24;
        default: break;
    }

    ctx->pc = 0x2faae0u;

    // 0x2faae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2faae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2faae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2faae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2faae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2faaec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2faaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaf0: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x2faaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x2faaf4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAAF4u;
    {
        const bool branch_taken_0x2faaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faaf4) {
            ctx->pc = 0x2FAAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAF4u;
            // 0x2faaf8: 0x8e04016c  lw          $a0, 0x16C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FAB14u;
            goto label_2fab14;
        }
    }
    ctx->pc = 0x2FAAFCu;
    // 0x2faafc: 0xc0ac0d0  jal         func_2B0340
    ctx->pc = 0x2FAAFCu;
    SET_GPR_U32(ctx, 31, 0x2FAB04u);
    ctx->pc = 0x2B0340u;
    if (runtime->hasFunction(0x2B0340u)) {
        auto targetFn = runtime->lookupFunction(0x2B0340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB04u; }
        if (ctx->pc != 0x2FAB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0340_0x2b0340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB04u; }
        if (ctx->pc != 0x2FAB04u) { return; }
    }
    ctx->pc = 0x2FAB04u;
label_2fab04:
    // 0x2fab04: 0xc0abfba  jal         func_2AFEE8
    ctx->pc = 0x2FAB04u;
    SET_GPR_U32(ctx, 31, 0x2FAB0Cu);
    ctx->pc = 0x2FAB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB04u;
            // 0x2fab08: 0x8e040170  lw          $a0, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFEE8u;
    if (runtime->hasFunction(0x2AFEE8u)) {
        auto targetFn = runtime->lookupFunction(0x2AFEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB0Cu; }
        if (ctx->pc != 0x2FAB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFEE8_0x2afee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB0Cu; }
        if (ctx->pc != 0x2FAB0Cu) { return; }
    }
    ctx->pc = 0x2FAB0Cu;
label_2fab0c:
    // 0x2fab0c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x2fab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x2fab10: 0x8e04016c  lw          $a0, 0x16C($s0)
    ctx->pc = 0x2fab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
label_2fab14:
    // 0x2fab14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAB14u;
    {
        const bool branch_taken_0x2fab14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB14u;
            // 0x2fab18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab14) {
            ctx->pc = 0x2FAB2Cu;
            goto label_2fab2c;
        }
    }
    ctx->pc = 0x2FAB1Cu;
    // 0x2fab1c: 0xc0ac330  jal         func_2B0CC0
    ctx->pc = 0x2FAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FAB24u);
    ctx->pc = 0x2B0CC0u;
    if (runtime->hasFunction(0x2B0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB24u; }
        if (ctx->pc != 0x2FAB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0CC0_0x2b0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB24u; }
        if (ctx->pc != 0x2FAB24u) { return; }
    }
    ctx->pc = 0x2FAB24u;
label_2fab24:
    // 0x2fab24: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x2fab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x2fab28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fab2c:
    // 0x2fab2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fab2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fab30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fab34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB34u;
            // 0x2fab38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAB3Cu;
    // 0x2fab3c: 0x0  nop
    ctx->pc = 0x2fab3cu;
    // NOP
    ctx->pc = 0x2fab40u;
}
