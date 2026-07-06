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

// Function: sub_0013CE20
// Address: 0x13ce20 - 0x13cee0
void sub_0013CE20_0x13ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CE20_0x13ce20");
#endif

    switch (ctx->pc) {
        case 0x13ce44u: goto label_13ce44;
        case 0x13cea4u: goto label_13cea4;
        case 0x13cebcu: goto label_13cebc;
        case 0x13ced0u: goto label_13ced0;
        default: break;
    }

    ctx->pc = 0x13ce20u;

    // 0x13ce20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ce24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ce28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ce2c: 0x8c82023c  lw          $v0, 0x23C($a0)
    ctx->pc = 0x13ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x13ce30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x13ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x13ce34: 0xac82023c  sw          $v0, 0x23C($a0)
    ctx->pc = 0x13ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 2));
    // 0x13ce38: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13ce3c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13CE3Cu;
    SET_GPR_U32(ctx, 31, 0x13CE44u);
    ctx->pc = 0x13CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE3Cu;
    // 0x13ce40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x13CE3Cu, 0x13CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE44u;
label_13ce44:
    // 0x13ce44: 0x92050204  lbu         $a1, 0x204($s0)
    ctx->pc = 0x13ce44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x13ce48: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x13ce4c: 0x2484c770  addiu       $a0, $a0, -0x3890
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952816));
    // 0x13ce50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ce54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ce58: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x13ce58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ce5c: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13CE5Cu;
    {
        const bool branch_taken_0x13ce5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13ce5c) {
            ctx->pc = 0x13CE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE5Cu;
            // 0x13ce60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CEACu;
            goto label_13ceac;
        }
    }
    ctx->pc = 0x13CE64u;
    // 0x13ce64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ce68: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13CE68u;
    {
        const bool branch_taken_0x13ce68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13ce68) {
            ctx->pc = 0x13CE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE68u;
            // 0x13ce6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CE94u;
            goto label_13ce94;
        }
    }
    ctx->pc = 0x13CE70u;
    // 0x13ce70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ce74: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CE74u;
    {
        const bool branch_taken_0x13ce74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13ce74) {
            ctx->pc = 0x13CE90u;
            goto label_13ce90;
        }
    }
    ctx->pc = 0x13CE7Cu;
    // 0x13ce7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13ce7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ce80: 0x10870003  beq         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CE80u;
    {
        const bool branch_taken_0x13ce80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x13ce80) {
            ctx->pc = 0x13CE90u;
            goto label_13ce90;
        }
    }
    ctx->pc = 0x13CE88u;
    // 0x13ce88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13CE88u;
    {
        const bool branch_taken_0x13ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE88u;
        // 0x13ce8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce88) {
            ctx->pc = 0x13CEC4u;
            goto label_13cec4;
        }
    }
    ctx->pc = 0x13CE90u;
label_13ce90:
    // 0x13ce90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ce94:
    // 0x13ce94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13ce98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ce98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce9c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13CE9Cu;
    SET_GPR_U32(ctx, 31, 0x13CEA4u);
    ctx->pc = 0x13CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE9Cu;
    // 0x13cea0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13CE9Cu, 0x13CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEA4u;
label_13cea4:
    // 0x13cea4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13CEA4u;
    {
        const bool branch_taken_0x13cea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEA4u;
        // 0x13cea8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cea4) {
            ctx->pc = 0x13CED4u;
            goto label_13ced4;
        }
    }
    ctx->pc = 0x13CEACu;
label_13ceac:
    // 0x13ceac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13ceb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ceb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ceb4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13CEB4u;
    SET_GPR_U32(ctx, 31, 0x13CEBCu);
    ctx->pc = 0x13CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEB4u;
    // 0x13ceb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13CEB4u, 0x13CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEBCu;
label_13cebc:
    // 0x13cebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13CEBCu;
    {
        const bool branch_taken_0x13cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cebc) {
            ctx->pc = 0x13CED0u;
            goto label_13ced0;
        }
    }
    ctx->pc = 0x13CEC4u;
label_13cec4:
    // 0x13cec4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13cec8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13CEC8u;
    SET_GPR_U32(ctx, 31, 0x13CED0u);
    ctx->pc = 0x13CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEC8u;
    // 0x13cecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13CEC8u, 0x13CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CED0u;
label_13ced0:
    // 0x13ced0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ced4:
    // 0x13ced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED8u;
        // 0x13cedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CEE0u;
}
