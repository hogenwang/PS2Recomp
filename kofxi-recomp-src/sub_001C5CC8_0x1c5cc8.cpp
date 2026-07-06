#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5CC8
// Address: 0x1c5cc8 - 0x1c5d28
void sub_001C5CC8_0x1c5cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CC8_0x1c5cc8");
#endif

    switch (ctx->pc) {
        case 0x1c5cecu: goto label_1c5cec;
        default: break;
    }

    ctx->pc = 0x1c5cc8u;

    // 0x1c5cc8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c5cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1c5ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5cd0: 0x24c3f1d0  addiu       $v1, $a2, -0xE30
    ctx->pc = 0x1c5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963664));
    // 0x1c5cd4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5cd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CD8u;
            // 0x1c5cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CE8u;
            goto label_1c5ce8;
        }
    }
    ctx->pc = 0x1C5CE0u;
    // 0x1c5ce0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C5CE0u;
    {
        const bool branch_taken_0x1c5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CE0u;
            // 0x1c5ce4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ce0) {
            ctx->pc = 0x1C5D20u;
            goto label_1c5d20;
        }
    }
    ctx->pc = 0x1C5CE8u;
label_1c5ce8:
    // 0x1c5ce8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c5cec:
    // 0x1c5cec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1c5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c5cf0: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1c5cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c5cf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5CF4u;
    {
        const bool branch_taken_0x1c5cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CF4u;
            // 0x1c5cf8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cf4) {
            ctx->pc = 0x1C5D20u;
            goto label_1c5d20;
        }
    }
    ctx->pc = 0x1C5CFCu;
    // 0x1c5cfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5d00: 0x24c4f1d0  addiu       $a0, $a2, -0xE30
    ctx->pc = 0x1c5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963664));
    // 0x1c5d04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c5d08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5d0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5d10: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c5d10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5d14: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C5D14u;
    {
        const bool branch_taken_0x1c5d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d14) {
            ctx->pc = 0x1C5D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D14u;
            // 0x1c5d18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5cec;
        }
    }
    ctx->pc = 0x1C5D1Cu;
    // 0x1c5d1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c5d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d20:
    // 0x1c5d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D20u;
            // 0x1c5d24: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5D28u;
    ctx->pc = 0x1c5d28u;
}
