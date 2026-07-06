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

// Function: sub_001BFEE8
// Address: 0x1bfee8 - 0x1bff38
void sub_001BFEE8_0x1bfee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFEE8_0x1bfee8");
#endif

    switch (ctx->pc) {
        case 0x1bfee8u: goto label_1bfee8;
        case 0x1bfeecu: goto label_1bfeec;
        case 0x1bfef0u: goto label_1bfef0;
        case 0x1bfef4u: goto label_1bfef4;
        case 0x1bfef8u: goto label_1bfef8;
        case 0x1bfefcu: goto label_1bfefc;
        case 0x1bff00u: goto label_1bff00;
        case 0x1bff04u: goto label_1bff04;
        case 0x1bff08u: goto label_1bff08;
        case 0x1bff0cu: goto label_1bff0c;
        case 0x1bff10u: goto label_1bff10;
        case 0x1bff14u: goto label_1bff14;
        case 0x1bff18u: goto label_1bff18;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff20u: goto label_1bff20;
        case 0x1bff24u: goto label_1bff24;
        case 0x1bff28u: goto label_1bff28;
        case 0x1bff2cu: goto label_1bff2c;
        case 0x1bff30u: goto label_1bff30;
        case 0x1bff34u: goto label_1bff34;
        default: break;
    }

    ctx->pc = 0x1bfee8u;

label_1bfee8:
    // 0x1bfee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bfeec:
    // 0x1bfeec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bfef0:
    // 0x1bfef0: 0xc06f8ea  jal         func_1BE3A8
label_1bfef4:
    if (ctx->pc == 0x1BFEF4u) {
        ctx->pc = 0x1BFEF8u;
        goto label_1bfef8;
    }
    ctx->pc = 0x1BFEF0u;
    SET_GPR_U32(ctx, 31, 0x1BFEF8u);
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BFEF0u, 0x1BFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEF8u;
label_1bfef8:
    // 0x1bfef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bfef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfefc:
    // 0x1bfefc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1bff00:
    if (ctx->pc == 0x1BFF00u) {
        ctx->pc = 0x1BFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEFCu;
        // 0x1bff00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF04u;
        goto label_1bff04;
    }
    ctx->pc = 0x1BFEFCu;
    {
        const bool branch_taken_0x1bfefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEFCu;
        // 0x1bff00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfefc) {
            ctx->pc = 0x1BFF30u;
            goto label_1bff30;
        }
    }
    ctx->pc = 0x1BFF04u;
label_1bff04:
    // 0x1bff04: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1bff08:
    // 0x1bff08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bff0c:
    if (ctx->pc == 0x1BFF0Cu) {
        ctx->pc = 0x1BFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF08u;
        // 0x1bff0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF10u;
        goto label_1bff10;
    }
    ctx->pc = 0x1BFF08u;
    {
        const bool branch_taken_0x1bff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF08u;
        // 0x1bff0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff08) {
            ctx->pc = 0x1BFF28u;
            goto label_1bff28;
        }
    }
    ctx->pc = 0x1BFF10u;
label_1bff10:
    // 0x1bff10: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1bff14:
    // 0x1bff14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bff14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bff18:
    // 0x1bff18: 0x40f809  jalr        $v0
label_1bff1c:
    if (ctx->pc == 0x1BFF1Cu) {
        ctx->pc = 0x1BFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF18u;
        // 0x1bff1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF20u;
        goto label_1bff20;
    }
    ctx->pc = 0x1BFF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFF20u);
        ctx->pc = 0x1BFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF18u;
        // 0x1bff1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF18u, 0x1BFF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFF20u;
label_1bff20:
    // 0x1bff20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bff24:
    if (ctx->pc == 0x1BFF24u) {
        ctx->pc = 0x1BFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF20u;
        // 0x1bff24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF28u;
        goto label_1bff28;
    }
    ctx->pc = 0x1BFF20u;
    {
        const bool branch_taken_0x1bff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF20u;
        // 0x1bff24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff20) {
            ctx->pc = 0x1BFF30u;
            goto label_1bff30;
        }
    }
    ctx->pc = 0x1BFF28u;
label_1bff28:
    // 0x1bff28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bff28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bff2c:
    // 0x1bff2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bff2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bff30:
    // 0x1bff30: 0x3e00008  jr          $ra
label_1bff34:
    if (ctx->pc == 0x1BFF34u) {
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF30u;
        // 0x1bff34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF38u;
        goto label_fallthrough_0x1bff30;
    }
    ctx->pc = 0x1BFF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF30u;
        // 0x1bff34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bff30:
    ctx->pc = 0x1BFF38u;
}
