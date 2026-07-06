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

// Function: sub_001DFA38
// Address: 0x1dfa38 - 0x1dfaa0
void sub_001DFA38_0x1dfa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFA38_0x1dfa38");
#endif

    switch (ctx->pc) {
        case 0x1dfa8cu: goto label_1dfa8c;
        default: break;
    }

    ctx->pc = 0x1dfa38u;

    // 0x1dfa38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfa3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfa40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfa44: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x1dfa44u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1dfa48: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFA48u;
    {
        const bool branch_taken_0x1dfa48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA48u;
        // 0x1dfa4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa48) {
            ctx->pc = 0x1DFA90u;
            goto label_1dfa90;
        }
    }
    ctx->pc = 0x1DFA50u;
    // 0x1dfa50: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFA50u;
    {
        const bool branch_taken_0x1dfa50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa50) {
            ctx->pc = 0x1DFA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFA50u;
            // 0x1dfa54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA68u;
            goto label_1dfa68;
        }
    }
    ctx->pc = 0x1DFA58u;
    // 0x1dfa58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfa5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFA5Cu;
    {
        const bool branch_taken_0x1dfa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA5Cu;
        // 0x1dfa60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa5c) {
            ctx->pc = 0x1DFA78u;
            goto label_1dfa78;
        }
    }
    ctx->pc = 0x1DFA64u;
    // 0x1dfa64: 0x0  nop
    ctx->pc = 0x1dfa64u;
    // NOP
label_1dfa68:
    // 0x1dfa68: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFA68u;
    {
        const bool branch_taken_0x1dfa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA68u;
        // 0x1dfa6c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa68) {
            ctx->pc = 0x1DFA90u;
            goto label_1dfa90;
        }
    }
    ctx->pc = 0x1DFA70u;
    // 0x1dfa70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfa74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dfa78:
    // 0x1dfa78: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA94u;
            goto label_1dfa94;
        }
    }
    ctx->pc = 0x1DFA80u;
    // 0x1dfa80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfa84: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DFA84u;
    SET_GPR_U32(ctx, 31, 0x1DFA8Cu);
    ctx->pc = 0x1DFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA84u;
    // 0x1dfa88: 0x2484cb30  addiu       $a0, $a0, -0x34D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DFA84u, 0x1DFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA8Cu;
label_1dfa8c:
    // 0x1dfa8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfa90:
    // 0x1dfa90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfa94:
    // 0x1dfa94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dfa94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa98: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA98u;
        // 0x1dfa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFAA0u;
}
