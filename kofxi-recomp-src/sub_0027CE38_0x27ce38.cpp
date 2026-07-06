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

// Function: sub_0027CE38
// Address: 0x27ce38 - 0x27cef0
void sub_0027CE38_0x27ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CE38_0x27ce38");
#endif

    switch (ctx->pc) {
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce8cu: goto label_27ce8c;
        case 0x27ce9cu: goto label_27ce9c;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27ceb8u: goto label_27ceb8;
        default: break;
    }

    ctx->pc = 0x27ce38u;

    // 0x27ce38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ce3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27ce40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27ce40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ce48: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x27ce48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27ce50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27ce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27ce58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ce58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27ce60: 0x24140071  addiu       $s4, $zero, 0x71
    ctx->pc = 0x27ce60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x27ce64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27CE64u;
    {
        const bool branch_taken_0x27ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE64u;
        // 0x27ce68: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce64) {
            ctx->pc = 0x27CE74u;
            goto label_27ce74;
        }
    }
    ctx->pc = 0x27CE6Cu;
    // 0x27ce6c: 0x0  nop
    ctx->pc = 0x27ce6cu;
    // NOP
label_27ce70:
    // 0x27ce70: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27ce74:
    // 0x27ce74: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27CE74u;
    {
        const bool branch_taken_0x27ce74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x27CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE74u;
        // 0x27ce78: 0x2701023  subu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce74) {
            ctx->pc = 0x27CECCu;
            goto label_27cecc;
        }
    }
    ctx->pc = 0x27CE7Cu;
    // 0x27ce7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ce80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce84: 0xc0ac0a8  jal         func_2B02A0
    ctx->pc = 0x27CE84u;
    SET_GPR_U32(ctx, 31, 0x27CE8Cu);
    ctx->pc = 0x27CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE84u;
    // 0x27ce88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B02A0u, 0x27CE84u, 0x27CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE8Cu;
label_27ce8c:
    // 0x27ce8c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27CE8Cu;
    {
        const bool branch_taken_0x27ce8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27ce8c) {
            ctx->pc = 0x27CEC0u;
            goto label_27cec0;
        }
    }
    ctx->pc = 0x27CE94u;
    // 0x27ce94: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CE94u;
    SET_GPR_U32(ctx, 31, 0x27CE9Cu);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CE94u, 0x27CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE9Cu;
label_27ce9c:
    // 0x27ce9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cea0: 0x5474000a  bnel        $v1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x27CEA0u;
    {
        const bool branch_taken_0x27cea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x27cea0) {
            ctx->pc = 0x27CEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CEA0u;
            // 0x27cea4: 0x2402fd9e  addiu       $v0, $zero, -0x262 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966686));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CECCu;
            goto label_27cecc;
        }
    }
    ctx->pc = 0x27CEA8u;
    // 0x27cea8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CEA8u;
    SET_GPR_U32(ctx, 31, 0x27CEB0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CEA8u, 0x27CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEB0u;
label_27ceb0:
    // 0x27ceb0: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27CEB0u;
    SET_GPR_U32(ctx, 31, 0x27CEB8u);
    ctx->pc = 0x27CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEB0u;
    // 0x27ceb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27CEB0u, 0x27CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEB8u;
label_27ceb8:
    // 0x27ceb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CEB8u;
    {
        const bool branch_taken_0x27ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEB8u;
        // 0x27cebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceb8) {
            ctx->pc = 0x27CED0u;
            goto label_27ced0;
        }
    }
    ctx->pc = 0x27CEC0u;
label_27cec0:
    // 0x27cec0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x27CEC0u;
    {
        const bool branch_taken_0x27cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEC0u;
        // 0x27cec4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cec0) {
            ctx->pc = 0x27CE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ce70;
        }
    }
    ctx->pc = 0x27CEC8u;
    // 0x27cec8: 0x2701023  subu        $v0, $s3, $s0
    ctx->pc = 0x27cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_27cecc:
    // 0x27cecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ceccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27ced0:
    // 0x27ced0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ced0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ced4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ced4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ced8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27ced8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27cedc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27cedcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cee0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27cee4: 0x3e00008  jr          $ra
    ctx->pc = 0x27CEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEE4u;
        // 0x27cee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CEECu;
    // 0x27ceec: 0x0  nop
    ctx->pc = 0x27ceecu;
    // NOP
    if (ctx->pc == 0x27ceecu) { ctx->pc = 0x27cef0u; }
}
