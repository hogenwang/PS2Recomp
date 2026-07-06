#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF710
// Address: 0x1df710 - 0x1df778
void sub_001DF710_0x1df710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF710_0x1df710");
#endif

    switch (ctx->pc) {
        case 0x1df764u: goto label_1df764;
        default: break;
    }

    ctx->pc = 0x1df710u;

    // 0x1df710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df714: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df71c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x1df71cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1df720: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DF720u;
    {
        const bool branch_taken_0x1df720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF720u;
            // 0x1df724: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df720) {
            ctx->pc = 0x1DF768u;
            goto label_1df768;
        }
    }
    ctx->pc = 0x1DF728u;
    // 0x1df728: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF728u;
    {
        const bool branch_taken_0x1df728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df728) {
            ctx->pc = 0x1DF72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF728u;
            // 0x1df72c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF740u;
            goto label_1df740;
        }
    }
    ctx->pc = 0x1DF730u;
    // 0x1df730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF734u;
    {
        const bool branch_taken_0x1df734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF734u;
            // 0x1df738: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df734) {
            ctx->pc = 0x1DF750u;
            goto label_1df750;
        }
    }
    ctx->pc = 0x1DF73Cu;
    // 0x1df73c: 0x0  nop
    ctx->pc = 0x1df73cu;
    // NOP
label_1df740:
    // 0x1df740: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF740u;
    {
        const bool branch_taken_0x1df740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF740u;
            // 0x1df744: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df740) {
            ctx->pc = 0x1DF768u;
            goto label_1df768;
        }
    }
    ctx->pc = 0x1DF748u;
    // 0x1df748: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1df748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df74c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1df74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1df750:
    // 0x1df750: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF750u;
    {
        const bool branch_taken_0x1df750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF750u;
            // 0x1df754: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df750) {
            ctx->pc = 0x1DF76Cu;
            goto label_1df76c;
        }
    }
    ctx->pc = 0x1DF758u;
    // 0x1df758: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1df758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df75c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF75Cu;
    SET_GPR_U32(ctx, 31, 0x1DF764u);
    ctx->pc = 0x1DF760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF75Cu;
            // 0x1df760: 0x2484cac8  addiu       $a0, $a0, -0x3538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF764u; }
        if (ctx->pc != 0x1DF764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF764u; }
        if (ctx->pc != 0x1DF764u) { return; }
    }
    ctx->pc = 0x1DF764u;
label_1df764:
    // 0x1df764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df768:
    // 0x1df768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df76c:
    // 0x1df76c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1df76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df770: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF770u;
            // 0x1df774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF778u;
    ctx->pc = 0x1df778u;
}
