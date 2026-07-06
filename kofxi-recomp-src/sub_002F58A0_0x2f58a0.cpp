#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F58A0
// Address: 0x2f58a0 - 0x2f58e0
void sub_002F58A0_0x2f58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F58A0_0x2f58a0");
#endif

    switch (ctx->pc) {
        case 0x2f58b8u: goto label_2f58b8;
        default: break;
    }

    ctx->pc = 0x2f58a0u;

    // 0x2f58a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f58a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58a4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f58a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f58a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F58A8u;
    {
        const bool branch_taken_0x2f58a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58A8u;
            // 0x2f58ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58a8) {
            ctx->pc = 0x2F58D8u;
            goto label_2f58d8;
        }
    }
    ctx->pc = 0x2F58B0u;
    // 0x2f58b0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2f58b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2f58b4: 0x0  nop
    ctx->pc = 0x2f58b4u;
    // NOP
label_2f58b8:
    // 0x2f58b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f58b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f58bc: 0x24e204d8  addiu       $v0, $a3, 0x4D8
    ctx->pc = 0x2f58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1240));
    // 0x2f58c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f58c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f58c8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2f58c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f58cc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2f58ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f58d0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F58D0u;
    {
        const bool branch_taken_0x2f58d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F58D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58D0u;
            // 0x2f58d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58d0) {
            ctx->pc = 0x2F58B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f58b8;
        }
    }
    ctx->pc = 0x2F58D8u;
label_2f58d8:
    // 0x2f58d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F58D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F58DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58D8u;
            // 0x2f58dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F58E0u;
    ctx->pc = 0x2f58e0u;
}
