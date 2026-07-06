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

// Function: sub_0022DF58
// Address: 0x22df58 - 0x22dfc8
void sub_0022DF58_0x22df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DF58_0x22df58");
#endif

    switch (ctx->pc) {
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        default: break;
    }

    ctx->pc = 0x22df58u;

label_22df58:
    // 0x22df58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22df5c:
    // 0x22df5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22df60:
    // 0x22df60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22df64:
    // 0x22df64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22df64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22df68:
    // 0x22df68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22df6c:
    // 0x22df6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22df70:
    // 0x22df70: 0xc08c682  jal         func_231A08
label_22df74:
    if (ctx->pc == 0x22DF74u) {
        ctx->pc = 0x22DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF70u;
        // 0x22df74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF78u;
        goto label_22df78;
    }
    ctx->pc = 0x22DF70u;
    SET_GPR_U32(ctx, 31, 0x22DF78u);
    ctx->pc = 0x22DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF70u;
    // 0x22df74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22DF70u, 0x22DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF78u;
label_22df78:
    // 0x22df78: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22df7c:
    // 0x22df7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22df7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22df80:
    // 0x22df80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22df80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22df84:
    // 0x22df84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22df88:
    // 0x22df88: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22df8c:
    // 0x22df8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22df90:
    // 0x22df90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22df90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22df94:
    // 0x22df94: 0x40f809  jalr        $v0
label_22df98:
    if (ctx->pc == 0x22DF98u) {
        ctx->pc = 0x22DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF94u;
        // 0x22df98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF9Cu;
        goto label_22df9c;
    }
    ctx->pc = 0x22DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DF9Cu);
        ctx->pc = 0x22DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF94u;
        // 0x22df98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF94u, 0x22DF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DF9Cu;
label_22df9c:
    // 0x22df9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22df9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dfa0:
    // 0x22dfa0: 0xc08c698  jal         func_231A60
label_22dfa4:
    if (ctx->pc == 0x22DFA4u) {
        ctx->pc = 0x22DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFA0u;
        // 0x22dfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFA8u;
        goto label_22dfa8;
    }
    ctx->pc = 0x22DFA0u;
    SET_GPR_U32(ctx, 31, 0x22DFA8u);
    ctx->pc = 0x22DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFA0u;
    // 0x22dfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22DFA0u, 0x22DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFA8u;
label_22dfa8:
    // 0x22dfa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22dfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dfac:
    // 0x22dfac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22dfb0:
    // 0x22dfb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22dfb4:
    // 0x22dfb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22dfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22dfb8:
    // 0x22dfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22dfbc:
    // 0x22dfbc: 0x3e00008  jr          $ra
label_22dfc0:
    if (ctx->pc == 0x22DFC0u) {
        ctx->pc = 0x22DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFBCu;
        // 0x22dfc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFC4u;
        goto label_22dfc4;
    }
    ctx->pc = 0x22DFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFBCu;
        // 0x22dfc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DFC4u;
label_22dfc4:
    // 0x22dfc4: 0x0  nop
    ctx->pc = 0x22dfc4u;
    // NOP
    if (ctx->pc == 0x22dfc4u) { ctx->pc = 0x22dfc8u; }
}
