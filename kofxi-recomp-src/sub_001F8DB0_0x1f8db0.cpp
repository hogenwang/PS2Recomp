#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8DB0
// Address: 0x1f8db0 - 0x1f8e10
void sub_001F8DB0_0x1f8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8DB0_0x1f8db0");
#endif

    switch (ctx->pc) {
        case 0x1f8de4u: goto label_1f8de4;
        default: break;
    }

    ctx->pc = 0x1f8db0u;

    // 0x1f8db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f8dc4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1f8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f8dc8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8DC8u;
    {
        const bool branch_taken_0x1f8dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8dc8) {
            ctx->pc = 0x1F8DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DC8u;
            // 0x1f8dcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8DF0u;
            goto label_1f8df0;
        }
    }
    ctx->pc = 0x1F8DD0u;
    // 0x1f8dd0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8dd4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f8dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f8dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ddc: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1F8DDCu;
    SET_GPR_U32(ctx, 31, 0x1F8DE4u);
    ctx->pc = 0x1F8DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DDCu;
            // 0x1f8de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8DE4u; }
        if (ctx->pc != 0x1F8DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8DE4u; }
        if (ctx->pc != 0x1F8DE4u) { return; }
    }
    ctx->pc = 0x1F8DE4u;
label_1f8de4:
    // 0x1f8de4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8DE4u;
    {
        const bool branch_taken_0x1f8de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8de4) {
            ctx->pc = 0x1F8DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DE4u;
            // 0x1f8de8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8E00u;
            goto label_1f8e00;
        }
    }
    ctx->pc = 0x1F8DECu;
    // 0x1f8dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8df0:
    // 0x1f8df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8df4: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1f8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1f8df8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1f8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1f8dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8e00:
    // 0x1f8e00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E04u;
            // 0x1f8e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8E0Cu;
    // 0x1f8e0c: 0x0  nop
    ctx->pc = 0x1f8e0cu;
    // NOP
    ctx->pc = 0x1f8e10u;
}
