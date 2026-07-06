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

// Function: sub_0028EF40
// Address: 0x28ef40 - 0x28ef88
void sub_0028EF40_0x28ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF40_0x28ef40");
#endif

    switch (ctx->pc) {
        case 0x28ef40u: goto label_28ef40;
        case 0x28ef44u: goto label_28ef44;
        case 0x28ef48u: goto label_28ef48;
        case 0x28ef4cu: goto label_28ef4c;
        case 0x28ef50u: goto label_28ef50;
        case 0x28ef54u: goto label_28ef54;
        case 0x28ef58u: goto label_28ef58;
        case 0x28ef5cu: goto label_28ef5c;
        case 0x28ef60u: goto label_28ef60;
        case 0x28ef64u: goto label_28ef64;
        case 0x28ef68u: goto label_28ef68;
        case 0x28ef6cu: goto label_28ef6c;
        case 0x28ef70u: goto label_28ef70;
        case 0x28ef74u: goto label_28ef74;
        case 0x28ef78u: goto label_28ef78;
        case 0x28ef7cu: goto label_28ef7c;
        case 0x28ef80u: goto label_28ef80;
        case 0x28ef84u: goto label_28ef84;
        default: break;
    }

    ctx->pc = 0x28ef40u;

label_28ef40:
    // 0x28ef40: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ef44:
    // 0x28ef44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ef48:
    // 0x28ef48: 0x8c424644  lw          $v0, 0x4644($v0)
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17988)));
label_28ef4c:
    // 0x28ef4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ef50:
    if (ctx->pc == 0x28EF50u) {
        ctx->pc = 0x28EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF4Cu;
        // 0x28ef50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF54u;
        goto label_28ef54;
    }
    ctx->pc = 0x28EF4Cu;
    {
        const bool branch_taken_0x28ef4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF4Cu;
        // 0x28ef50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef4c) {
            ctx->pc = 0x28EF74u;
            goto label_28ef74;
        }
    }
    ctx->pc = 0x28EF54u;
label_28ef54:
    // 0x28ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ef58:
    // 0x28ef58: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ef5c:
    // 0x28ef5c: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_28ef60:
    // 0x28ef60: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ef64:
    // 0x28ef64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ef64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ef68:
    // 0x28ef68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28ef68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ef6c:
    // 0x28ef6c: 0x80a5648  j           func_295920
label_28ef70:
    if (ctx->pc == 0x28EF70u) {
        ctx->pc = 0x28EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF6Cu;
        // 0x28ef70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF74u;
        goto label_28ef74;
    }
    ctx->pc = 0x28EF6Cu;
    ctx->pc = 0x28EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF6Cu;
    // 0x28ef70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28EF74u;
label_28ef74:
    // 0x28ef74: 0x40f809  jalr        $v0
label_28ef78:
    if (ctx->pc == 0x28EF78u) {
        ctx->pc = 0x28EF7Cu;
        goto label_28ef7c;
    }
    ctx->pc = 0x28EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EF7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF74u, 0x28EF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EF7Cu;
label_28ef7c:
    // 0x28ef7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ef80:
    // 0x28ef80: 0x3e00008  jr          $ra
label_28ef84:
    if (ctx->pc == 0x28EF84u) {
        ctx->pc = 0x28EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF80u;
        // 0x28ef84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF88u;
        goto label_fallthrough_0x28ef80;
    }
    ctx->pc = 0x28EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF80u;
        // 0x28ef84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ef80:
    ctx->pc = 0x28EF88u;
}
