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

// Function: sub_001DCD60
// Address: 0x1dcd60 - 0x1dcdb0
void sub_001DCD60_0x1dcd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD60_0x1dcd60");
#endif

    switch (ctx->pc) {
        case 0x1dcd70u: goto label_1dcd70;
        default: break;
    }

    ctx->pc = 0x1dcd60u;

    // 0x1dcd60: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1dcd60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd64: 0x248b000a  addiu       $t3, $a0, 0xA
    ctx->pc = 0x1dcd64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1dcd68: 0x252a0040  addiu       $t2, $t1, 0x40
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1dcd6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd70:
    // 0x1dcd70: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1dcd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1dcd74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dcd78: 0x1641021  addu        $v0, $t3, $a0
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1dcd7c: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1dcd80: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1dcd80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcd84: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1dcd88: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x1dcd88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcd8c: 0x29070020  slti        $a3, $t0, 0x20
    ctx->pc = 0x1dcd8cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1dcd90: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dcd90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcd94: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1dcd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1dcd98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1dcd9c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DCD9Cu;
    {
        const bool branch_taken_0x1dcd9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD9Cu;
        // 0x1dcda0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd9c) {
            ctx->pc = 0x1DCD70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcd70;
        }
    }
    ctx->pc = 0x1DCDA4u;
    // 0x1dcda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDACu;
    // 0x1dcdac: 0x0  nop
    ctx->pc = 0x1dcdacu;
    // NOP
}
