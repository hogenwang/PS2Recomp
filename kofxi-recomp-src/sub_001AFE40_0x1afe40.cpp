#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFE40
// Address: 0x1afe40 - 0x1afe98
void sub_001AFE40_0x1afe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFE40_0x1afe40");
#endif

    switch (ctx->pc) {
        case 0x1afe64u: goto label_1afe64;
        default: break;
    }

    ctx->pc = 0x1afe40u;

    // 0x1afe40: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1afe40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1afe44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1afe44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe48: 0x24c3f818  addiu       $v1, $a2, -0x7E8
    ctx->pc = 0x1afe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965272));
    // 0x1afe4c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1afe4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1afe50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFE50u;
    {
        const bool branch_taken_0x1afe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE50u;
            // 0x1afe54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe50) {
            ctx->pc = 0x1AFE60u;
            goto label_1afe60;
        }
    }
    ctx->pc = 0x1AFE58u;
    // 0x1afe58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AFE58u;
    {
        const bool branch_taken_0x1afe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE58u;
            // 0x1afe5c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe58) {
            ctx->pc = 0x1AFE90u;
            goto label_1afe90;
        }
    }
    ctx->pc = 0x1AFE60u;
label_1afe60:
    // 0x1afe60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1afe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1afe64:
    // 0x1afe64: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1afe68: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1afe68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1afe6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AFE6Cu;
    {
        const bool branch_taken_0x1afe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE6Cu;
            // 0x1afe70: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe6c) {
            ctx->pc = 0x1AFE90u;
            goto label_1afe90;
        }
    }
    ctx->pc = 0x1AFE74u;
    // 0x1afe74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1afe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1afe78: 0x24c3f818  addiu       $v1, $a2, -0x7E8
    ctx->pc = 0x1afe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965272));
    // 0x1afe7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afe80: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afe84: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AFE84u;
    {
        const bool branch_taken_0x1afe84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe84) {
            ctx->pc = 0x1AFE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE84u;
            // 0x1afe88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFE64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1afe64;
        }
    }
    ctx->pc = 0x1AFE8Cu;
    // 0x1afe8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1afe8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afe90:
    // 0x1afe90: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE90u;
            // 0x1afe94: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFE98u;
    ctx->pc = 0x1afe98u;
}
