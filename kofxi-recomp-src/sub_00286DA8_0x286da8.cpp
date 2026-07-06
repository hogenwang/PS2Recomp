#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286DA8
// Address: 0x286da8 - 0x286e30
void sub_00286DA8_0x286da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286DA8_0x286da8");
#endif

    switch (ctx->pc) {
        case 0x286dd0u: goto label_286dd0;
        default: break;
    }

    ctx->pc = 0x286da8u;

    // 0x286da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286dac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x286dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286dc0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286DC0u;
    {
        const bool branch_taken_0x286dc0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x286DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DC0u;
            // 0x286dc4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dc0) {
            ctx->pc = 0x286DE0u;
            goto label_286de0;
        }
    }
    ctx->pc = 0x286DC8u;
    // 0x286dc8: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x286DC8u;
    SET_GPR_U32(ctx, 31, 0x286DD0u);
    ctx->pc = 0x286DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DC8u;
            // 0x286dcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DD0u; }
        if (ctx->pc != 0x286DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DD0u; }
        if (ctx->pc != 0x286DD0u) { return; }
    }
    ctx->pc = 0x286DD0u;
label_286dd0:
    // 0x286dd0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x286DD0u;
    {
        const bool branch_taken_0x286dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286dd0) {
            ctx->pc = 0x286DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286DD0u;
            // 0x286dd4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286DF0u;
            goto label_286df0;
        }
    }
    ctx->pc = 0x286DD8u;
    // 0x286dd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x286DD8u;
    {
        const bool branch_taken_0x286dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DD8u;
            // 0x286ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dd8) {
            ctx->pc = 0x286E18u;
            goto label_286e18;
        }
    }
    ctx->pc = 0x286DE0u;
label_286de0:
    // 0x286de0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286DE0u;
    {
        const bool branch_taken_0x286de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x286de0) {
            ctx->pc = 0x286DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286DE0u;
            // 0x286de4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286DF0u;
            goto label_286df0;
        }
    }
    ctx->pc = 0x286DE8u;
    // 0x286de8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x286DE8u;
    {
        const bool branch_taken_0x286de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DE8u;
            // 0x286dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286de8) {
            ctx->pc = 0x286E18u;
            goto label_286e18;
        }
    }
    ctx->pc = 0x286DF0u;
label_286df0:
    // 0x286df0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x286df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x286df4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x286df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x286df8: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x286df8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x286dfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x286dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286e00: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x286e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286e04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x286E04u;
    {
        const bool branch_taken_0x286e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E04u;
            // 0x286e08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e04) {
            ctx->pc = 0x286E10u;
            goto label_286e10;
        }
    }
    ctx->pc = 0x286E0Cu;
    // 0x286e0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x286e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_286e10:
    // 0x286e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286e14: 0x0  nop
    ctx->pc = 0x286e14u;
    // NOP
label_286e18:
    // 0x286e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286e1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286e24: 0x3e00008  jr          $ra
    ctx->pc = 0x286E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E24u;
            // 0x286e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286E2Cu;
    // 0x286e2c: 0x0  nop
    ctx->pc = 0x286e2cu;
    // NOP
    ctx->pc = 0x286e30u;
}
