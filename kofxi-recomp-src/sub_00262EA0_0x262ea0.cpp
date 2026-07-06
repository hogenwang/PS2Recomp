#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262EA0
// Address: 0x262ea0 - 0x262ee0
void sub_00262EA0_0x262ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262EA0_0x262ea0");
#endif

    switch (ctx->pc) {
        case 0x262ebcu: goto label_262ebc;
        default: break;
    }

    ctx->pc = 0x262ea0u;

    // 0x262ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ea8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262eb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262eb4: 0xc097cd2  jal         func_25F348
    ctx->pc = 0x262EB4u;
    SET_GPR_U32(ctx, 31, 0x262EBCu);
    ctx->pc = 0x262EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262EB4u;
            // 0x262eb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F348u;
    if (runtime->hasFunction(0x25F348u)) {
        auto targetFn = runtime->lookupFunction(0x25F348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EBCu; }
        if (ctx->pc != 0x262EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F348_0x25f348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EBCu; }
        if (ctx->pc != 0x262EBCu) { return; }
    }
    ctx->pc = 0x262EBCu;
label_262ebc:
    // 0x262ebc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262EBCu;
    {
        const bool branch_taken_0x262ebc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x262EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262EBCu;
            // 0x262ec0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ebc) {
            ctx->pc = 0x262ED0u;
            goto label_262ed0;
        }
    }
    ctx->pc = 0x262EC4u;
    // 0x262ec4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x262EC4u;
    {
        const bool branch_taken_0x262ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262EC4u;
            // 0x262ec8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ec4) {
            ctx->pc = 0x262ED0u;
            goto label_262ed0;
        }
    }
    ctx->pc = 0x262ECCu;
    // 0x262ecc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x262eccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_262ed0:
    // 0x262ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262ed4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x262ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262ED8u;
            // 0x262edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262EE0u;
    ctx->pc = 0x262ee0u;
}
