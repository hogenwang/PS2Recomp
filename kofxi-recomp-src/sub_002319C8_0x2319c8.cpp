#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002319C8
// Address: 0x2319c8 - 0x231a08
void sub_002319C8_0x2319c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002319C8_0x2319c8");
#endif

    switch (ctx->pc) {
        case 0x2319ecu: goto label_2319ec;
        default: break;
    }

    ctx->pc = 0x2319c8u;

    // 0x2319c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2319cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2319ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2319d0: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2319d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2319d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2319d8: 0x8e04fa20  lw          $a0, -0x5E0($s0)
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965792)));
    // 0x2319dc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2319DCu;
    {
        const bool branch_taken_0x2319dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2319E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319DCu;
            // 0x2319e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319dc) {
            ctx->pc = 0x2319F0u;
            goto label_2319f0;
        }
    }
    ctx->pc = 0x2319E4u;
    // 0x2319e4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2319E4u;
    SET_GPR_U32(ctx, 31, 0x2319ECu);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319ECu; }
        if (ctx->pc != 0x2319ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319ECu; }
        if (ctx->pc != 0x2319ECu) { return; }
    }
    ctx->pc = 0x2319ECu;
label_2319ec:
    // 0x2319ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2319f0:
    // 0x2319f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2319f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2319f4: 0xae02fa20  sw          $v0, -0x5E0($s0)
    ctx->pc = 0x2319f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965792), GPR_U32(ctx, 2));
    // 0x2319f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2319f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2319fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2319FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319FCu;
            // 0x231a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231A04u;
    // 0x231a04: 0x0  nop
    ctx->pc = 0x231a04u;
    // NOP
    ctx->pc = 0x231a08u;
}
