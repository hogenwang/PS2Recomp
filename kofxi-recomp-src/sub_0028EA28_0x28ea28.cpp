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

// Function: sub_0028EA28
// Address: 0x28ea28 - 0x28ea70
void sub_0028EA28_0x28ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA28_0x28ea28");
#endif

    switch (ctx->pc) {
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea2cu: goto label_28ea2c;
        case 0x28ea30u: goto label_28ea30;
        case 0x28ea34u: goto label_28ea34;
        case 0x28ea38u: goto label_28ea38;
        case 0x28ea3cu: goto label_28ea3c;
        case 0x28ea40u: goto label_28ea40;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea48u: goto label_28ea48;
        case 0x28ea4cu: goto label_28ea4c;
        case 0x28ea50u: goto label_28ea50;
        case 0x28ea54u: goto label_28ea54;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea5cu: goto label_28ea5c;
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea68u: goto label_28ea68;
        case 0x28ea6cu: goto label_28ea6c;
        default: break;
    }

    ctx->pc = 0x28ea28u;

label_28ea28:
    // 0x28ea28: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ea2c:
    // 0x28ea2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ea2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ea30:
    // 0x28ea30: 0x8c42460c  lw          $v0, 0x460C($v0)
    ctx->pc = 0x28ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17932)));
label_28ea34:
    // 0x28ea34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ea38:
    if (ctx->pc == 0x28EA38u) {
        ctx->pc = 0x28EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA34u;
        // 0x28ea38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA3Cu;
        goto label_28ea3c;
    }
    ctx->pc = 0x28EA34u;
    {
        const bool branch_taken_0x28ea34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA34u;
        // 0x28ea38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea34) {
            ctx->pc = 0x28EA5Cu;
            goto label_28ea5c;
        }
    }
    ctx->pc = 0x28EA3Cu;
label_28ea3c:
    // 0x28ea3c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ea40:
    // 0x28ea40: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x28ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_28ea44:
    // 0x28ea44: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ea44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ea48:
    // 0x28ea48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ea48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ea4c:
    // 0x28ea4c: 0xc0a5648  jal         func_295920
label_28ea50:
    if (ctx->pc == 0x28EA50u) {
        ctx->pc = 0x28EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA4Cu;
        // 0x28ea50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA54u;
        goto label_28ea54;
    }
    ctx->pc = 0x28EA4Cu;
    SET_GPR_U32(ctx, 31, 0x28EA54u);
    ctx->pc = 0x28EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA4Cu;
    // 0x28ea50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EA4Cu, 0x28EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA54u;
label_28ea54:
    // 0x28ea54: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ea58:
    if (ctx->pc == 0x28EA58u) {
        ctx->pc = 0x28EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA54u;
        // 0x28ea58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA5Cu;
        goto label_28ea5c;
    }
    ctx->pc = 0x28EA54u;
    {
        const bool branch_taken_0x28ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA54u;
        // 0x28ea58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea54) {
            ctx->pc = 0x28EA64u;
            goto label_28ea64;
        }
    }
    ctx->pc = 0x28EA5Cu;
label_28ea5c:
    // 0x28ea5c: 0x40f809  jalr        $v0
label_28ea60:
    if (ctx->pc == 0x28EA60u) {
        ctx->pc = 0x28EA64u;
        goto label_28ea64;
    }
    ctx->pc = 0x28EA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA5Cu, 0x28EA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EA64u;
label_28ea64:
    // 0x28ea64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ea68:
    // 0x28ea68: 0x3e00008  jr          $ra
label_28ea6c:
    if (ctx->pc == 0x28EA6Cu) {
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA70u;
        goto label_fallthrough_0x28ea68;
    }
    ctx->pc = 0x28EA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ea68:
    ctx->pc = 0x28EA70u;
}
