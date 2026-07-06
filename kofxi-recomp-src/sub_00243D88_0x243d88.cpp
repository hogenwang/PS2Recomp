#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243D88
// Address: 0x243d88 - 0x243e08
void sub_00243D88_0x243d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243D88_0x243d88");
#endif

    switch (ctx->pc) {
        case 0x243dc8u: goto label_243dc8;
        case 0x243e00u: goto label_243e00;
        default: break;
    }

    ctx->pc = 0x243d88u;

    // 0x243d88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x243d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d8c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x243d8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243d90: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x243d90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x243d94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x243d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d98: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x243d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x243d9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x243d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x243da0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x243da0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x243da4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x243da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x243da8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x243dac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x243dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x243db0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x243db0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x243db4: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x243db4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x243db8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x243dbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x243dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x243dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x243DC0u;
    {
        const bool branch_taken_0x243dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DC0u;
            // 0x243dc4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dc0) {
            ctx->pc = 0x243DDCu;
            goto label_243ddc;
        }
    }
    ctx->pc = 0x243DC8u;
label_243dc8:
    // 0x243dc8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x243dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243dcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x243dd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x243dd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x243dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x243dd8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x243dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_243ddc:
    // 0x243ddc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x243de0: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x243de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x243de4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x243DE4u;
    {
        const bool branch_taken_0x243de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243de4) {
            ctx->pc = 0x243DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243DE4u;
            // 0x243de8: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243DECu;
    // 0x243dec: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x243decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x243df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243DF0u;
    {
        const bool branch_taken_0x243df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243df0) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243DF8u;
    // 0x243df8: 0x8048c96  j           func_123258
    ctx->pc = 0x243DF8u;
    ctx->pc = 0x243DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243DF8u;
            // 0x243dfc: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00123258_0x123258(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x243E00u;
label_243e00:
    // 0x243e00: 0x3e00008  jr          $ra
    ctx->pc = 0x243E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243E08u;
    ctx->pc = 0x243e08u;
}
