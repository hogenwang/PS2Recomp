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

// Function: sub_001AAE50
// Address: 0x1aae50 - 0x1aaee8
void sub_001AAE50_0x1aae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAE50_0x1aae50");
#endif

    switch (ctx->pc) {
        case 0x1aae50u: goto label_1aae50;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        case 0x1aaea0u: goto label_1aaea0;
        case 0x1aaea4u: goto label_1aaea4;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaeacu: goto label_1aaeac;
        case 0x1aaeb0u: goto label_1aaeb0;
        case 0x1aaeb4u: goto label_1aaeb4;
        case 0x1aaeb8u: goto label_1aaeb8;
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaec4u: goto label_1aaec4;
        case 0x1aaec8u: goto label_1aaec8;
        case 0x1aaeccu: goto label_1aaecc;
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaed4u: goto label_1aaed4;
        case 0x1aaed8u: goto label_1aaed8;
        case 0x1aaedcu: goto label_1aaedc;
        case 0x1aaee0u: goto label_1aaee0;
        case 0x1aaee4u: goto label_1aaee4;
        default: break;
    }

    ctx->pc = 0x1aae50u;

label_1aae50:
    // 0x1aae50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aae54:
    // 0x1aae54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aae58:
    // 0x1aae58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aae5c:
    // 0x1aae5c: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1aae5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
label_1aae60:
    // 0x1aae60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aae64:
    if (ctx->pc == 0x1AAE64u) {
        ctx->pc = 0x1AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE60u;
        // 0x1aae64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE68u;
        goto label_1aae68;
    }
    ctx->pc = 0x1AAE60u;
    {
        const bool branch_taken_0x1aae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE60u;
        // 0x1aae64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae60) {
            ctx->pc = 0x1AAE78u;
            goto label_1aae78;
        }
    }
    ctx->pc = 0x1AAE68u;
label_1aae68:
    // 0x1aae68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aae6c:
    // 0x1aae6c: 0x806ab2a  j           func_1AACA8
label_1aae70:
    if (ctx->pc == 0x1AAE70u) {
        ctx->pc = 0x1AAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE6Cu;
        // 0x1aae70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE74u;
        goto label_1aae74;
    }
    ctx->pc = 0x1AAE6Cu;
    ctx->pc = 0x1AAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE6Cu;
    // 0x1aae70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AACA8u, 0x1AAE6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AAE74u;
label_1aae74:
    // 0x1aae74: 0x0  nop
    ctx->pc = 0x1aae74u;
    // NOP
label_1aae78:
    // 0x1aae78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1aae7c:
    if (ctx->pc == 0x1AAE7Cu) {
        ctx->pc = 0x1AAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE78u;
        // 0x1aae7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE80u;
        goto label_1aae80;
    }
    ctx->pc = 0x1AAE78u;
    {
        const bool branch_taken_0x1aae78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE78u;
        // 0x1aae7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae78) {
            ctx->pc = 0x1AAE88u;
            goto label_1aae88;
        }
    }
    ctx->pc = 0x1AAE80u;
label_1aae80:
    // 0x1aae80: 0x806aaca  j           func_1AAB28
label_1aae84:
    if (ctx->pc == 0x1AAE84u) {
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE88u;
        goto label_1aae88;
    }
    ctx->pc = 0x1AAE80u;
    ctx->pc = 0x1AAE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE80u;
    // 0x1aae84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAB28u, 0x1AAE80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AAE88u;
label_1aae88:
    // 0x1aae88: 0x806aa64  j           func_1AA990
label_1aae8c:
    if (ctx->pc == 0x1AAE8Cu) {
        ctx->pc = 0x1AAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE88u;
        // 0x1aae8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE90u;
        goto label_1aae90;
    }
    ctx->pc = 0x1AAE88u;
    ctx->pc = 0x1AAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE88u;
    // 0x1aae8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA990u, 0x1AAE88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AAE90u;
label_1aae90:
    // 0x1aae90: 0x3e00008  jr          $ra
label_1aae94:
    if (ctx->pc == 0x1AAE94u) {
        ctx->pc = 0x1AAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE90u;
        // 0x1aae94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE98u;
        goto label_1aae98;
    }
    ctx->pc = 0x1AAE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE90u;
        // 0x1aae94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE98u;
label_1aae98:
    // 0x1aae98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aae98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aae9c:
    // 0x1aae9c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aaea0:
    // 0x1aaea0: 0xac44e688  sw          $a0, -0x1978($v0)
    ctx->pc = 0x1aaea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960776), GPR_U32(ctx, 4));
label_1aaea4:
    // 0x1aaea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaea8:
    // 0x1aaea8: 0x3e00008  jr          $ra
label_1aaeac:
    if (ctx->pc == 0x1AAEACu) {
        ctx->pc = 0x1AAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEA8u;
        // 0x1aaeac: 0xac65e68c  sw          $a1, -0x1974($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960780), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEB0u;
        goto label_1aaeb0;
    }
    ctx->pc = 0x1AAEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEA8u;
        // 0x1aaeac: 0xac65e68c  sw          $a1, -0x1974($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960780), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAEB0u;
label_1aaeb0:
    // 0x1aaeb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aaeb4:
    // 0x1aaeb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aaeb8:
    // 0x1aaeb8: 0x8c43e688  lw          $v1, -0x1978($v0)
    ctx->pc = 0x1aaeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
label_1aaebc:
    // 0x1aaebc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1aaebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aaec0:
    // 0x1aaec0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1aaec4:
    if (ctx->pc == 0x1AAEC4u) {
        ctx->pc = 0x1AAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEC0u;
        // 0x1aaec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEC8u;
        goto label_1aaec8;
    }
    ctx->pc = 0x1AAEC0u;
    {
        const bool branch_taken_0x1aaec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEC0u;
        // 0x1aaec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaec0) {
            ctx->pc = 0x1AAED4u;
            goto label_1aaed4;
        }
    }
    ctx->pc = 0x1AAEC8u;
label_1aaec8:
    // 0x1aaec8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aaec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aaecc:
    // 0x1aaecc: 0x60f809  jalr        $v1
label_1aaed0:
    if (ctx->pc == 0x1AAED0u) {
        ctx->pc = 0x1AAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAECCu;
        // 0x1aaed0: 0x8c44e68c  lw          $a0, -0x1974($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960780)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAED4u;
        goto label_1aaed4;
    }
    ctx->pc = 0x1AAECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAED4u);
        ctx->pc = 0x1AAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAECCu;
        // 0x1aaed0: 0x8c44e68c  lw          $a0, -0x1974($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960780)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAECCu, 0x1AAED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAED4u;
label_1aaed4:
    // 0x1aaed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aaed8:
    // 0x1aaed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaedc:
    // 0x1aaedc: 0x3e00008  jr          $ra
label_1aaee0:
    if (ctx->pc == 0x1AAEE0u) {
        ctx->pc = 0x1AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEDCu;
        // 0x1aaee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEE4u;
        goto label_1aaee4;
    }
    ctx->pc = 0x1AAEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEDCu;
        // 0x1aaee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAEE4u;
label_1aaee4:
    // 0x1aaee4: 0x0  nop
    ctx->pc = 0x1aaee4u;
    // NOP
}
