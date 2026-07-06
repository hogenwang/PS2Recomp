#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228110
// Address: 0x228110 - 0x228150
void sub_00228110_0x228110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228110_0x228110");
#endif

    switch (ctx->pc) {
        case 0x228134u: goto label_228134;
        default: break;
    }

    ctx->pc = 0x228110u;

    // 0x228110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228118: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x228118u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x22811c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228120: 0x8e04f580  lw          $a0, -0xA80($s0)
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964608)));
    // 0x228124: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228124u;
    {
        const bool branch_taken_0x228124 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x228128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228124u;
            // 0x228128: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228124) {
            ctx->pc = 0x228138u;
            goto label_228138;
        }
    }
    ctx->pc = 0x22812Cu;
    // 0x22812c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x22812Cu;
    SET_GPR_U32(ctx, 31, 0x228134u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228134u; }
        if (ctx->pc != 0x228134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228134u; }
        if (ctx->pc != 0x228134u) { return; }
    }
    ctx->pc = 0x228134u;
label_228134:
    // 0x228134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x228134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_228138:
    // 0x228138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22813c: 0xae02f580  sw          $v0, -0xA80($s0)
    ctx->pc = 0x22813cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294964608), GPR_U32(ctx, 2));
    // 0x228140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228144: 0x3e00008  jr          $ra
    ctx->pc = 0x228144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228144u;
            // 0x228148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22814Cu;
    // 0x22814c: 0x0  nop
    ctx->pc = 0x22814cu;
    // NOP
    ctx->pc = 0x228150u;
}
