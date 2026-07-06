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

// Function: sub_002FC110
// Address: 0x2fc110 - 0x2fc190
void sub_002FC110_0x2fc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC110_0x2fc110");
#endif

    switch (ctx->pc) {
        case 0x2fc130u: goto label_2fc130;
        case 0x2fc168u: goto label_2fc168;
        default: break;
    }

    ctx->pc = 0x2fc110u;

    // 0x2fc110: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fc114: 0x8c440670  lw          $a0, 0x670($v0)
    ctx->pc = 0x2fc114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x2fc118: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FC118u;
    {
        const bool branch_taken_0x2fc118 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC118u;
        // 0x2fc11c: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc118) {
            ctx->pc = 0x2FC154u;
            goto label_2fc154;
        }
    }
    ctx->pc = 0x2FC120u;
    // 0x2fc120: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FC120u;
    {
        const bool branch_taken_0x2fc120 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2FC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC120u;
        // 0x2fc124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc120) {
            ctx->pc = 0x2FC154u;
            goto label_2fc154;
        }
    }
    ctx->pc = 0x2FC128u;
    // 0x2fc128: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2fc128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2fc12c: 0x0  nop
    ctx->pc = 0x2fc12cu;
    // NOP
label_2fc130:
    // 0x2fc130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fc130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fc134: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2fc134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fc138: 0x0  nop
    ctx->pc = 0x2fc138u;
    // NOP
    // 0x2fc13c: 0x0  nop
    ctx->pc = 0x2fc13cu;
    // NOP
    // 0x2fc140: 0x0  nop
    ctx->pc = 0x2fc140u;
    // NOP
    // 0x2fc144: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FC144u;
    {
        const bool branch_taken_0x2fc144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc144) {
            ctx->pc = 0x2FC130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc130;
        }
    }
    ctx->pc = 0x2FC14Cu;
    // 0x2fc14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC14Cu;
    {
        const bool branch_taken_0x2fc14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC14Cu;
        // 0x2fc150: 0x8ca2066c  lw          $v0, 0x66C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc14c) {
            ctx->pc = 0x2FC158u;
            goto label_2fc158;
        }
    }
    ctx->pc = 0x2FC154u;
label_2fc154:
    // 0x2fc154: 0x8ca2066c  lw          $v0, 0x66C($a1)
    ctx->pc = 0x2fc154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1644)));
label_2fc158:
    // 0x2fc158: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FC158u;
    {
        const bool branch_taken_0x2fc158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fc158) {
            ctx->pc = 0x2FC184u;
            goto label_2fc184;
        }
    }
    ctx->pc = 0x2FC160u;
    // 0x2fc160: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC160u;
    {
        const bool branch_taken_0x2fc160 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC160u;
        // 0x2fc164: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc160) {
            ctx->pc = 0x2FC184u;
            goto label_2fc184;
        }
    }
    ctx->pc = 0x2FC168u;
label_2fc168:
    // 0x2fc168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc16c: 0x0  nop
    ctx->pc = 0x2fc16cu;
    // NOP
    // 0x2fc170: 0x0  nop
    ctx->pc = 0x2fc170u;
    // NOP
    // 0x2fc174: 0x0  nop
    ctx->pc = 0x2fc174u;
    // NOP
    // 0x2fc178: 0x0  nop
    ctx->pc = 0x2fc178u;
    // NOP
    // 0x2fc17c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FC17Cu;
    {
        const bool branch_taken_0x2fc17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc17c) {
            ctx->pc = 0x2FC168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc168;
        }
    }
    ctx->pc = 0x2FC184u;
label_2fc184:
    // 0x2fc184: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC18Cu;
    // 0x2fc18c: 0x0  nop
    ctx->pc = 0x2fc18cu;
    // NOP
    if (ctx->pc == 0x2fc18cu) { ctx->pc = 0x2fc190u; }
}
