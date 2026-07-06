#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262D70
// Address: 0x262d70 - 0x262db0
void sub_00262D70_0x262d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D70_0x262d70");
#endif

    switch (ctx->pc) {
        case 0x262d94u: goto label_262d94;
        default: break;
    }

    ctx->pc = 0x262d70u;

    // 0x262d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262d78: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x262d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x262d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262d80: 0x8e041a18  lw          $a0, 0x1A18($s0)
    ctx->pc = 0x262d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6680)));
    // 0x262d84: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262D84u;
    {
        const bool branch_taken_0x262d84 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D84u;
            // 0x262d88: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d84) {
            ctx->pc = 0x262D98u;
            goto label_262d98;
        }
    }
    ctx->pc = 0x262D8Cu;
    // 0x262d8c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x262D8Cu;
    SET_GPR_U32(ctx, 31, 0x262D94u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D94u; }
        if (ctx->pc != 0x262D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D94u; }
        if (ctx->pc != 0x262D94u) { return; }
    }
    ctx->pc = 0x262D94u;
label_262d94:
    // 0x262d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x262d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_262d98:
    // 0x262d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d9c: 0xae031a18  sw          $v1, 0x1A18($s0)
    ctx->pc = 0x262d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
    // 0x262da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262da8: 0x3e00008  jr          $ra
    ctx->pc = 0x262DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262DA8u;
            // 0x262dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262DB0u;
    ctx->pc = 0x262db0u;
}
