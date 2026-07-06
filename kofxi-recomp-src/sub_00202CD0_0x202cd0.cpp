#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202CD0
// Address: 0x202cd0 - 0x202d40
void sub_00202CD0_0x202cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202CD0_0x202cd0");
#endif

    switch (ctx->pc) {
        case 0x202ce0u: goto label_202ce0;
        case 0x202cf0u: goto label_202cf0;
        case 0x202d14u: goto label_202d14;
        default: break;
    }

    ctx->pc = 0x202cd0u;

    // 0x202cd0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x202cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x202CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CD4u;
            // 0x202cd8: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202CDCu;
    // 0x202cdc: 0x0  nop
    ctx->pc = 0x202cdcu;
    // NOP
label_202ce0:
    // 0x202ce0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x202ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x202CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CE4u;
            // 0x202ce8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202CECu;
    // 0x202cec: 0x0  nop
    ctx->pc = 0x202cecu;
    // NOP
label_202cf0:
    // 0x202cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202cf4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x202cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202cfc: 0x24502070  addiu       $s0, $v0, 0x2070
    ctx->pc = 0x202cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x202d00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202d04: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x202D04u;
    {
        const bool branch_taken_0x202d04 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x202D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D04u;
            // 0x202d08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d04) {
            ctx->pc = 0x202D2Cu;
            goto label_202d2c;
        }
    }
    ctx->pc = 0x202D0Cu;
    // 0x202d0c: 0xc080b50  jal         func_202D40
    ctx->pc = 0x202D0Cu;
    SET_GPR_U32(ctx, 31, 0x202D14u);
    ctx->pc = 0x202D40u;
    if (runtime->hasFunction(0x202D40u)) {
        auto targetFn = runtime->lookupFunction(0x202D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D14u; }
        if (ctx->pc != 0x202D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202D40_0x202d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D14u; }
        if (ctx->pc != 0x202D14u) { return; }
    }
    ctx->pc = 0x202D14u;
label_202d14:
    // 0x202d14: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x202d18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202d1c: 0x24639bb0  addiu       $v1, $v1, -0x6450
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941616));
    // 0x202d20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x202d24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x202d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x202d28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x202d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_202d2c:
    // 0x202d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202d34: 0x3e00008  jr          $ra
    ctx->pc = 0x202D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D34u;
            // 0x202d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202D3Cu;
    // 0x202d3c: 0x0  nop
    ctx->pc = 0x202d3cu;
    // NOP
    ctx->pc = 0x202d40u;
}
