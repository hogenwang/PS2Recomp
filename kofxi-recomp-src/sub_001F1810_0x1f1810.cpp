#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1810
// Address: 0x1f1810 - 0x1f1858
void sub_001F1810_0x1f1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1810_0x1f1810");
#endif

    switch (ctx->pc) {
        case 0x1f1838u: goto label_1f1838;
        default: break;
    }

    ctx->pc = 0x1f1810u;

    // 0x1f1810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1814: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f1814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f181c: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x1f181cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1820: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1820u;
    {
        const bool branch_taken_0x1f1820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1820u;
        // 0x1f1824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1820) {
            ctx->pc = 0x1F1848u;
            goto label_1f1848;
        }
    }
    ctx->pc = 0x1F1828u;
    // 0x1f1828: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1828u;
    {
        const bool branch_taken_0x1f1828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1828) {
            ctx->pc = 0x1F182Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1828u;
            // 0x1f182c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1848u;
            goto label_1f1848;
        }
    }
    ctx->pc = 0x1F1830u;
    // 0x1f1830: 0xc07c616  jal         func_1F1858
    ctx->pc = 0x1F1830u;
    SET_GPR_U32(ctx, 31, 0x1F1838u);
    ctx->pc = 0x1F1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1858u, 0x1F1830u, 0x1F1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1838u;
label_1f1838:
    // 0x1f1838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f183c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F183Cu;
    {
        const bool branch_taken_0x1f183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F183Cu;
        // 0x1f1840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f183c) {
            ctx->pc = 0x1F184Cu;
            goto label_1f184c;
        }
    }
    ctx->pc = 0x1F1844u;
    // 0x1f1844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1848:
    // 0x1f1848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f184c:
    // 0x1f184c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F184Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F184Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1854u;
    // 0x1f1854: 0x0  nop
    ctx->pc = 0x1f1854u;
    // NOP
    if (ctx->pc == 0x1f1854u) { ctx->pc = 0x1f1858u; }
}
