#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7310
// Address: 0x1c7310 - 0x1c7368
void sub_001C7310_0x1c7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7310_0x1c7310");
#endif

    switch (ctx->pc) {
        case 0x1c7334u: goto label_1c7334;
        default: break;
    }

    ctx->pc = 0x1c7310u;

    // 0x1c7310: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1c7314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7318: 0x24c33948  addiu       $v1, $a2, 0x3948
    ctx->pc = 0x1c7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 14664));
    // 0x1c731c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c731cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7320u;
    {
        const bool branch_taken_0x1c7320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7320u;
            // 0x1c7324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7320) {
            ctx->pc = 0x1C7330u;
            goto label_1c7330;
        }
    }
    ctx->pc = 0x1C7328u;
    // 0x1c7328: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7328u;
    {
        const bool branch_taken_0x1c7328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7328u;
            // 0x1c732c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7328) {
            ctx->pc = 0x1C7360u;
            goto label_1c7360;
        }
    }
    ctx->pc = 0x1C7330u;
label_1c7330:
    // 0x1c7330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c7334:
    // 0x1c7334: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1c7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c7338: 0x28a30028  slti        $v1, $a1, 0x28
    ctx->pc = 0x1c7338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1c733c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C733Cu;
    {
        const bool branch_taken_0x1c733c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C733Cu;
            // 0x1c7340: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c733c) {
            ctx->pc = 0x1C7360u;
            goto label_1c7360;
        }
    }
    ctx->pc = 0x1C7344u;
    // 0x1c7344: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c7348: 0x24c33948  addiu       $v1, $a2, 0x3948
    ctx->pc = 0x1c7348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 14664));
    // 0x1c734c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7350: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7354: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C7354u;
    {
        const bool branch_taken_0x1c7354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7354) {
            ctx->pc = 0x1C7358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7354u;
            // 0x1c7358: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7334;
        }
    }
    ctx->pc = 0x1C735Cu;
    // 0x1c735c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c735cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7360:
    // 0x1c7360: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7360u;
            // 0x1c7364: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7368u;
    ctx->pc = 0x1c7368u;
}
