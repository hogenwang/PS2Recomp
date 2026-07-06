#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D860
// Address: 0x13d860 - 0x13d8c0
void sub_0013D860_0x13d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D860_0x13d860");
#endif

    ctx->pc = 0x13d860u;

    // 0x13d860: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13d864: 0x94435c60  lhu         $v1, 0x5C60($v0)
    ctx->pc = 0x13d864u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 23648)));
    // 0x13d868: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x13d868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x13d86c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D86Cu;
    {
        const bool branch_taken_0x13d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d86c) {
            ctx->pc = 0x13D870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D86Cu;
            // 0x13d870: 0x28620028  slti        $v0, $v1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D87Cu;
            goto label_13d87c;
        }
    }
    ctx->pc = 0x13D874u;
    // 0x13d874: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13D874u;
    {
        const bool branch_taken_0x13d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D874u;
            // 0x13d878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d874) {
            ctx->pc = 0x13D8ACu;
            goto label_13d8ac;
        }
    }
    ctx->pc = 0x13D87Cu;
label_13d87c:
    // 0x13d87c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D87Cu;
    {
        const bool branch_taken_0x13d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d87c) {
            ctx->pc = 0x13D880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D87Cu;
            // 0x13d880: 0x2862001e  slti        $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D88Cu;
            goto label_13d88c;
        }
    }
    ctx->pc = 0x13D884u;
    // 0x13d884: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D884u;
    {
        const bool branch_taken_0x13d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D884u;
            // 0x13d888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d884) {
            ctx->pc = 0x13D8ACu;
            goto label_13d8ac;
        }
    }
    ctx->pc = 0x13D88Cu;
label_13d88c:
    // 0x13d88c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D88Cu;
    {
        const bool branch_taken_0x13d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d88c) {
            ctx->pc = 0x13D890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D88Cu;
            // 0x13d890: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D89Cu;
            goto label_13d89c;
        }
    }
    ctx->pc = 0x13D894u;
    // 0x13d894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D894u;
    {
        const bool branch_taken_0x13d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D894u;
            // 0x13d898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d894) {
            ctx->pc = 0x13D8ACu;
            goto label_13d8ac;
        }
    }
    ctx->pc = 0x13D89Cu;
label_13d89c:
    // 0x13d89c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D89Cu;
    {
        const bool branch_taken_0x13d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d89c) {
            ctx->pc = 0x13D8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D89Cu;
            // 0x13d8a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D8ACu;
            goto label_13d8ac;
        }
    }
    ctx->pc = 0x13D8A4u;
    // 0x13d8a4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13D8A4u;
    {
        const bool branch_taken_0x13d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8A4u;
            // 0x13d8a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8a4) {
            ctx->pc = 0x13D8ACu;
            goto label_13d8ac;
        }
    }
    ctx->pc = 0x13D8ACu;
label_13d8ac:
    // 0x13d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D8B4u;
    // 0x13d8b4: 0x0  nop
    ctx->pc = 0x13d8b4u;
    // NOP
    // 0x13d8b8: 0x0  nop
    ctx->pc = 0x13d8b8u;
    // NOP
    // 0x13d8bc: 0x0  nop
    ctx->pc = 0x13d8bcu;
    // NOP
    ctx->pc = 0x13d8c0u;
}
